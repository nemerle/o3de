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

#include <${Name}SystemComponent.h>

#include <AzToolsFramework/Entity/EditorEntityContextBus.h>

namespace ${SanitizedCppName}
{
    /// System component for ${SanitizedCppName} editor
    class ${SanitizedCppName}EditorSystemComponent
        : public ${SanitizedCppName}SystemComponent
        , private AzToolsFramework::EditorEvents::Bus::Handler
    {
        using BaseSystemComponent = ${SanitizedCppName}SystemComponent;
    public:
        AZ_COMPONENT(${SanitizedCppName}EditorSystemComponent, "${EditorSysCompClassId}", BaseSystemComponent);
        static void Reflect(AZ::ReflectContext* context);

        ${SanitizedCppName}EditorSystemComponent();
        ~${SanitizedCppName}EditorSystemComponent();

    private:
        static void GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptorDependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptorDependencyArrayType& dependent);

        // AZ::Component
        void Activate() override;
        void Deactivate() override;
    };
} // namespace ${SanitizedCppName}
