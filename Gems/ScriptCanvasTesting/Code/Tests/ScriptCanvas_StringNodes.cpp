/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include <Source/Framework/ScriptCanvasTestFixture.h>
#include <Source/Framework/ScriptCanvasTestUtilities.h>

#include <AzCore/RTTI/BehaviorContext.h>
#include <AzCore/RTTI/AzStdOnDemandReflection.inl>

using namespace ScriptCanvasTests;
using namespace ScriptCanvas;

TEST_F(ScriptCanvasTestFixture, StringNodes)
{
    RunUnitTestGraph("LY_SC_UnitTest_StringNodes", ExecutionMode::Interpreted);
}
