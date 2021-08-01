/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/Serialization/EditContext.h>

#include "FastNoiseSystemComponent.h"

namespace FastNoiseGem
{
    void FastNoiseSystemComponent::Reflect(AZ::ReflectContext* context)
    {
        if (AZ::SerializeContext* serialize = azrtti_cast<AZ::SerializeContext*>(context))
        {
            serialize->Class<FastNoiseSystemComponent, AZ::Component>()
                ->Version(0)
                ;

            if (AZ::EditContext* ec = serialize->GetEditContext())
            {
                ec->Class<FastNoiseSystemComponent>("FastNoise", "System component for Fast Noise gradient gem")
                    ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                        ->Attribute(AZ::Edit::Attributes::AppearsInAddComponentMenu, AZ_CRC("System", 0xc94d118b))
                        ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ;
            }
        }
    }

    void FastNoiseSystemComponent::GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& provided)
    {
        provided.push_back(AZ_CRC("FastNoiseService", 0x93845780));
    }

    void FastNoiseSystemComponent::GetIncompatibleServices(AZ::ComponentDescriptorDependencyArrayType& incompatible)
    {
        incompatible.push_back(AZ_CRC("FastNoiseService", 0x93845780));
    }

    void FastNoiseSystemComponent::GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& required)
    {
        (void)required;
    }

    void FastNoiseSystemComponent::GetDependentServices(AZ::ComponentDescriptorDependencyArrayType& dependent)
    {
        (void)dependent;
    }

    void FastNoiseSystemComponent::Init()
    {
    }

    void FastNoiseSystemComponent::Activate()
    {
        FastNoiseRequestBus::Handler::BusConnect();
    }

    void FastNoiseSystemComponent::Deactivate()
    {
        FastNoiseRequestBus::Handler::BusDisconnect();
    }
}
