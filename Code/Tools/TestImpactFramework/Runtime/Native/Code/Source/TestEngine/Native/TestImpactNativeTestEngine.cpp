/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include <TestImpactFramework/TestImpactUtils.h>

#include <Target/Native/TestImpactNativeTestTarget.h>
#include <TestEngine/Common/TestImpactTestEngineException.h>
#include <TestEngine/Native/TestImpactNativeTestEngine.h>
#include <TestEngine/Native/TestImpactNativeErrorCodeChecker.h>
#include <TestEngine/Native/Job/TestImpactNativeTestJobInfoGenerator.h>
#include <TestRunner/Native/TestImpactNativeTestEnumerator.h>
#include <TestRunner/Native/TestImpactNativeInstrumentedTestRunner.h>
#include <TestRunner/Native/TestImpactNativeRegularTestRunner.h>

namespace TestImpact
{
    //! Determines the test run result of a native regular test run.
    AZStd::optional<Client::TestRunResult> NativeRegularTestRunnerErrorCodeChecker(
        const typename NativeRegularTestRunner::JobInfo& jobInfo, const JobMeta& meta)
    {
        if (jobInfo.GetLaunchMethod() == LaunchMethod::StandAlone)
        {
            // Check the test first, then assume any other error is an error reported by the stand alone test target binary
            if(auto result = CheckNativeTestLibraryErrorCode(meta.m_returnCode.value()); result.has_value())
            {
                return result;
            }

            if (auto result = CheckStandAloneError(meta.m_returnCode.value()); result.has_value())
            {
                return result;
            }
        }
        else
        {
            // Check the test runner first as this has specific error codes (unlike GTest)
            if(auto result = CheckNativeTestRunnerErrorCode(meta.m_returnCode.value()); result.has_value())
            {
                return result;
            }

            if(auto result = CheckNativeTestLibraryErrorCode(meta.m_returnCode.value()); result.has_value())
            {
                return result;
            }
        }

        return AZStd::nullopt;
    }

    //!
    AZStd::optional<Client::TestRunResult> NativeInstrumentedTestRunnerErrorCodeChecker(
        const typename NativeInstrumentedTestRunner::JobInfo& jobInfo, const JobMeta& meta)
    {
        // Check the test first, then assume any other error is an error reported by the stand alone test target binary
        if (auto result = CheckNativeInstrumentationErrorCode(meta.m_returnCode.value()); result.has_value())
        {
            return result;
        }

        if (jobInfo.GetLaunchMethod() == LaunchMethod::StandAlone)
        {
        
            if (auto result = CheckNativeTestLibraryErrorCode(meta.m_returnCode.value()); result.has_value())
            {
                return result;
            }

            if (auto result = CheckStandAloneError(meta.m_returnCode.value()); result.has_value())
            {
                return result;
            }
        }
        else
        {
            // Check the test runner first as this has specific error codes (unlike GTest)
            if (auto result = CheckNativeTestRunnerErrorCode(meta.m_returnCode.value()); result.has_value())
            {
                return result;
            }

            if (auto result = CheckNativeTestLibraryErrorCode(meta.m_returnCode.value()); result.has_value())
            {
                return result;
            }
        }

        return AZStd::nullopt;
    }

    // Type trait for the test enumerator
    template<>
    struct TestJobRunnerTrait<NativeTestEnumerator>
    {
        using TestEngineJobType = TestEngineEnumeration<NativeTestTarget>;
    };

    // Type trait for the test runner
    template<>
    struct TestJobRunnerTrait<NativeRegularTestRunner>
    {
        using TestEngineJobType = TestEngineRegularRun<NativeTestTarget>;
    };

    // Type trait for the instrumented test runner
    template<>
    struct TestJobRunnerTrait<NativeInstrumentedTestRunner>
    {
        using TestEngineJobType = TestEngineInstrumentedRun<NativeTestTarget, TestCoverage>;
    };

    NativeTestEngine::NativeTestEngine(
        const RepoPath& sourceDir,
        const RepoPath& targetBinaryDir,
        [[maybe_unused]]const RepoPath& cacheDir,
        const RepoPath& artifactDir,
        const RepoPath& testRunnerBinary,
        const RepoPath& instrumentBinary,
        size_t maxConcurrentRuns)
        : m_maxConcurrentRuns(maxConcurrentRuns)
        , m_regularTestJobInfoGenerator(AZStd::make_unique<NativeRegularTestRunJobInfoGenerator>(
            sourceDir,
            targetBinaryDir,
            artifactDir,
            testRunnerBinary))
        , m_instrumentedTestJobInfoGenerator(AZStd::make_unique<NativeInstrumentedTestRunJobInfoGenerator>(
            sourceDir,
            targetBinaryDir,
            artifactDir,
            testRunnerBinary,
            instrumentBinary))
        , m_testEnumerator(AZStd::make_unique<NativeTestEnumerator>(maxConcurrentRuns))
        , m_instrumentedTestRunner(AZStd::make_unique<NativeInstrumentedTestRunner>(maxConcurrentRuns))
        , m_testRunner(AZStd::make_unique<NativeRegularTestRunner>(maxConcurrentRuns))
        , m_artifactDir(artifactDir)
    {
    }

    NativeTestEngine::~NativeTestEngine() = default;

    void NativeTestEngine::DeleteArtifactXmls() const
    {
        DeleteFiles(m_artifactDir, "*.xml");
    }

    AZStd::pair<TestSequenceResult, AZStd::vector<TestEngineRegularRun<NativeTestTarget>>> NativeTestEngine::RegularRun(
        const AZStd::vector<const NativeTestTarget*>& testTargets,
        Policy::ExecutionFailure executionFailurePolicy,
        Policy::TestFailure testFailurePolicy,
        Policy::TargetOutputCapture targetOutputCapture,
        AZStd::optional<AZStd::chrono::milliseconds> testTargetTimeout,
        AZStd::optional<AZStd::chrono::milliseconds> globalTimeout,
        AZStd::optional<TestEngineJobCompleteCallback<NativeTestTarget>> callback) const
    {
        DeleteArtifactXmls();

        return GenerateJobInfosAndRunTests(
            m_testRunner.get(),
            m_regularTestJobInfoGenerator.get(),
            testTargets,
            NativeRegularTestRunnerErrorCodeChecker,
            executionFailurePolicy,
            testFailurePolicy,
            targetOutputCapture,
            testTargetTimeout,
            globalTimeout,
            callback,
            AZStd::nullopt
            );
    }

    AZStd::pair<TestSequenceResult, AZStd::vector<TestEngineInstrumentedRun<NativeTestTarget, TestCoverage>>> NativeTestEngine::InstrumentedRun(
        const AZStd::vector<const NativeTestTarget*>& testTargets,
        Policy::ExecutionFailure executionFailurePolicy,
        Policy::IntegrityFailure integrityFailurePolicy,
        Policy::TestFailure testFailurePolicy,
        Policy::TargetOutputCapture targetOutputCapture,
        AZStd::optional<AZStd::chrono::milliseconds> testTargetTimeout,
        AZStd::optional<AZStd::chrono::milliseconds> globalTimeout,
        AZStd::optional<TestEngineJobCompleteCallback<NativeTestTarget>> callback) const
    {
        DeleteArtifactXmls();

        auto [result, engineRuns] = GenerateJobInfosAndRunTests(
            m_instrumentedTestRunner.get(),
            m_instrumentedTestJobInfoGenerator.get(),
            testTargets,
            NativeInstrumentedTestRunnerErrorCodeChecker,
            executionFailurePolicy,
            testFailurePolicy,
            targetOutputCapture,
            testTargetTimeout,
            globalTimeout,
            callback,
            AZStd::nullopt
            );

        // Now that we know the true result of successful jobs that return non-zero we can deduce if we have any integrity failures
        // where a test target ran and completed its tests without incident yet failed to produce coverage data
        if (integrityFailurePolicy == Policy::IntegrityFailure::Abort)
        {
            for (const auto& engineRun : engineRuns)
            {
                if (const auto testResult = engineRun.GetTestResult();
                    testResult == Client::TestRunResult::AllTestsPass || testResult == Client::TestRunResult::TestFailures)
                {
                    AZ_TestImpact_Eval(engineRun.GetCoverge().has_value(), TestEngineException, AZStd::string::format(
                        "Test target %s completed its test run but failed to produce coverage data", engineRun.GetTestTarget()->GetName().c_str()));
                }
            }
        }

        return { result, engineRuns };
    }
} // namespace TestImpact
