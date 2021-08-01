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
#include <AzCore/RTTI/BehaviorContext.h>
#include <AzCore/Serialization/EditContext.h>

namespace AWSCore
{
    class AWSScriptBehaviorBase;

    //! Bootstraps and provides AWS ScriptCanvas behaviors
    class AWSScriptBehaviorsComponent
        : public AZ::Component
    {
    public:
        AZ_COMPONENT(AWSScriptBehaviorsComponent, "{9F37F23F-4229-4A1F-BAA6-4A4AB8422B47}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptorDependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptorDependencyArrayType& dependent);

        // AZ::Component interface implementation
        void Activate() override;
        void Deactivate() override;
    };
} // namespace AWSCore
