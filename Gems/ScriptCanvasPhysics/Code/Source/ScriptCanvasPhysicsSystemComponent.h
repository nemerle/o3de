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

namespace ScriptCanvasPhysics
{
    class ScriptCanvasPhysicsSystemComponent
        : public AZ::Component
    {
    public:
        AZ_COMPONENT(ScriptCanvasPhysicsSystemComponent, "{F70E22C3-B940-42F3-B4D9-6A7C5E0F2C4E}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptorDependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptorDependencyArrayType& dependent);

    protected:
        ////////////////////////////////////////////////////////////////////////
        // AZ::Component...
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
