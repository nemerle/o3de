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

#include <DccScriptingInterface/DCCScriptingInterfaceBus.h>

namespace DCCScriptingInterface
{
    class DCCScriptingInterfaceSystemComponent
        : public AZ::Component
        , protected DCCScriptingInterfaceRequestBus::Handler
    {
    public:
        AZ_COMPONENT(DCCScriptingInterface::DCCScriptingInterfaceSystemComponent, "{286CFDB5-952B-4A38-AD47-DA76F8A80514}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptorDependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptorDependencyArrayType& dependent);

    protected:
        ////////////////////////////////////////////////////////////////////////
        // DCCScriptingInterfaceRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };

} // namespace DCCScriptingInterface
