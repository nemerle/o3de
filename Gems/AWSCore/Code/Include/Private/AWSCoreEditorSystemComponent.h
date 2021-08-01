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
#include <AzToolsFramework/API/ToolsApplicationAPI.h>

#include <Editor/AWSCoreEditorManager.h>

namespace AWSCore
{
    class AWSCoreEditorSystemComponent
        : public AZ::Component
        , private AzToolsFramework::EditorEvents::Bus::Handler
    {
    public:
        static constexpr const char EDITOR_HELP_MENU_TEXT[] = "&Help";

        AZ_COMPONENT(AWSCoreEditorSystemComponent, "{6098B19B-90F2-41DC-8D01-70277980249D}");

        AWSCoreEditorSystemComponent() = default;

        static void Reflect(AZ::ReflectContext* context);
        static void GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptorDependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptorDependencyArrayType& dependent);

    private:
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;

        // AzToolsFramework::EditorEvents interface implementation
        void NotifyMainWindowInitialized(QMainWindow* mainWindow) override;

        AZStd::unique_ptr<AWSCoreEditorManager> m_awsCoreEditorManager;
    };

} // namespace AWSCore
