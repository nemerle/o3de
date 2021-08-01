// {BEGIN_LICENSE}
/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */
 // {END_LICENSE}

#pragma once

#include <AzCore/Component/Component.h>

#include <${Name}/${Name}Bus.h>

namespace ${SanitizedCppName}
{
    class ${SanitizedCppName}SystemComponent
        : public AZ::Component
        , protected ${SanitizedCppName}RequestBus::Handler
    {
    public:
        AZ_COMPONENT_SPLIT(${SanitizedCppName}SystemComponent, "${SysCompClassId}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptorDependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptorDependencyArrayType& dependent);

        ${SanitizedCppName}SystemComponent();
        ~${SanitizedCppName}SystemComponent();

    protected:
        ////////////////////////////////////////////////////////////////////////
        // ${SanitizedCppName}RequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
