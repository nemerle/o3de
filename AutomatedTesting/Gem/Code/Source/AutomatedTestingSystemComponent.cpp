/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/Serialization/EditContext.h>
#include <AzCore/Serialization/EditContextConstants.inl>
#include <AzCore/Component/ComponentDescriptor.h>
#include <AutomatedTestingSystemComponent.h>

namespace AutomatedTesting
{
    // Implement the CreateDescriptor static method
    AZ_COMPONENT_IMPL(AutomatedTestingSystemComponent)

    void AutomatedTestingSystemComponent::Reflect(AZ::ReflectContext* context)
    {
        if (AZ::SerializeContext* serialize = azrtti_cast<AZ::SerializeContext*>(context))
        {
            serialize->Class<AutomatedTestingSystemComponent, AZ::Component>()
                ->Version(0)
                ;

            if (AZ::EditContext* ec = serialize->GetEditContext())
            {
                ec->Class<AutomatedTestingSystemComponent>("AutomatedTesting", "[Description of functionality provided by this System Component]")
                    ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                        ->Attribute(AZ::Edit::Attributes::AppearsInAddComponentMenu, AZ_CRC("System"))
                        ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ;
            }
        }
    }

    void AutomatedTestingSystemComponent::GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& provided)
    {
        provided.push_back(AZ_CRC("AutomatedTestingService"));
    }

    void AutomatedTestingSystemComponent::GetIncompatibleServices(AZ::ComponentDescriptorDependencyArrayType& incompatible)
    {
        incompatible.push_back(AZ_CRC("AutomatedTestingService"));
    }

    void AutomatedTestingSystemComponent::GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& required)
    {
        AZ_UNUSED(required);
    }

    void AutomatedTestingSystemComponent::GetDependentServices(AZ::ComponentDescriptorDependencyArrayType& dependent)
    {
        AZ_UNUSED(dependent);
    }

    void AutomatedTestingSystemComponent::Init()
    {
    }

    void AutomatedTestingSystemComponent::Activate()
    {
        AutomatedTestingRequestBus::Handler::BusConnect();
    }

    void AutomatedTestingSystemComponent::Deactivate()
    {
        AutomatedTestingRequestBus::Handler::BusDisconnect();
    }
}
