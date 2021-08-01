/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#pragma once

#include <AzCore/Component/Component.h>
#include <AzCore/Component/ComponentDescriptor.h>
#include <ScriptCanvas/Bus/ScriptCanvasExecutionBus.h>
#include <ScriptCanvas/Bus/UnitTestVerificationBus.h>

namespace ScriptCanvasTesting
{

    class ScriptCanvasTestingSystemComponent
        : public AZ::Component
        , public ScriptCanvasEditor::UnitTestVerificationBus::Handler
    {
    public:
        AZ_COMPONENT(ScriptCanvasTestingSystemComponent, "{4D0AA0FD-8451-4AA3-883E-82ADB1C44568}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptorDependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptorDependencyArrayType& dependent);

        ScriptCanvasEditor::UnitTestResult Verify(ScriptCanvasEditor::Reporter reporter) override;

    protected:
        ////////////////////////////////////////////////////////////////////////
        // AZ::Component...
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
