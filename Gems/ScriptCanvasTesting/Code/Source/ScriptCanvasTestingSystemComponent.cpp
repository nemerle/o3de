/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/Serialization/AZStdContainers.inl>
#include <AzCore/Serialization/EditContext.h>
#include <AzCore/RTTI/BehaviorContext.h>
#include <AzCore/RTTI/AzStdOnDemandReflection.inl>

#include "ScriptCanvasTestingSystemComponent.h"
#include "ScriptCanvasTestBus.h"
#include "Framework/ScriptCanvasTestVerify.h"
#include "Nodes/BehaviorContextObjectTestNode.h"

#include <Source/Nodes/Nodeables/NodeableTestingLibrary.h>

namespace ScriptCanvasTesting
{
    void ScriptCanvasTestingSystemComponent::Reflect(AZ::ReflectContext* context)
    {
        if (AZ::SerializeContext* serialize = azrtti_cast<AZ::SerializeContext*>(context))
        {
            serialize->Class<ScriptCanvasTestingSystemComponent, AZ::Component>()
                ->Version(0)
                ;

            if (AZ::EditContext* ec = serialize->GetEditContext())
            {
                ec->Class<ScriptCanvasTestingSystemComponent>("ScriptCanvasTesting", "")
                    ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                        ->Attribute(AZ::Edit::Attributes::AppearsInAddComponentMenu, AZ_CRC("System", 0xc94d118b))
                        ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ;
            }
        }

        NodeableTestingLibrary::Reflect(context);

        ScriptCanvasTestingNodes::BehaviorContextObjectTest::Reflect(context);
        ScriptCanvasTesting::Reflect(context);
    }

    void ScriptCanvasTestingSystemComponent::GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& provided)
    {
        provided.push_back(AZ_CRC("ScriptCanvasTestingService", 0xd2b424fc));
    }

    void ScriptCanvasTestingSystemComponent::GetIncompatibleServices(AZ::ComponentDescriptorDependencyArrayType& incompatible)
    {
        incompatible.push_back(AZ_CRC("ScriptCanvasTestingService", 0xd2b424fc));
    }

    void ScriptCanvasTestingSystemComponent::GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& required)
    {
        (void)required;
    }

    void ScriptCanvasTestingSystemComponent::GetDependentServices(AZ::ComponentDescriptorDependencyArrayType& dependent)
    {
        (void)dependent;
    }

    void ScriptCanvasTestingSystemComponent::Init()
    {
        NodeableTestingLibrary::InitNodeRegistry(ScriptCanvas::GetNodeRegistry().Get());
    }

    void ScriptCanvasTestingSystemComponent::Activate()
    {
        ScriptCanvasEditor::UnitTestVerificationBus::Handler::BusConnect();
    }

    void ScriptCanvasTestingSystemComponent::Deactivate()
    {
        ScriptCanvasEditor::UnitTestVerificationBus::Handler::BusDisconnect();
    }

    ScriptCanvasEditor::UnitTestResult ScriptCanvasTestingSystemComponent::Verify(ScriptCanvasEditor::Reporter reporter)
    {
        return ScriptCanvasTests::VerifyReporterEditor(reporter);
    }
}
