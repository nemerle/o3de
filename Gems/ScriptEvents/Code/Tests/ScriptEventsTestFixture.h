/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#pragma once

#include "ScriptEventsTestApplication.h"

#include <AzTest/AzTest.h>
#include <AzCore/UnitTest/TestTypes.h>

namespace ScriptEventsTests
{
    class ScriptEventsTestFixture
        : public ::testing::Test
    {
        static const bool s_enableMemoryLeakChecking;

        static ScriptEventsTests::Application* GetApplication();

    protected:

        static ScriptEventsTests::Application* s_application;
        static UnitTest::AllocatorsBase s_allocatorSetup;

        static void SetUpTestCase();

        static void TearDownTestCase();

        void SetUp() override;

        void TearDown() override
        {
            AZ::IO::FileIOBase::SetInstance(nullptr);
            m_fileIO = nullptr;
        }

        AZStd::unique_ptr<AZ::IO::FileIOBase> m_fileIO;
        AZ::SerializeContext* m_serializeContext;
        AZ::BehaviorContext* m_behaviorContext;
    };

}

