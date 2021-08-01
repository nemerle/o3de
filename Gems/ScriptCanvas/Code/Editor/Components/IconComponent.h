/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#pragma once

#include <AzCore/Math/Uuid.h>
#include <AzCore/Component/Component.h>
#include <AzCore/Component/ComponentDescriptor.h>
#include <Editor/Include/ScriptCanvas/Bus/IconBus.h>

namespace ScriptCanvasEditor
{
    class IconComponent
        : public AZ::Component
        , public IconBus::Handler
    {
    public:
        AZ_COMPONENT(IconComponent, "{242FEF0E-1E3D-4F49-877F-F83E6B70F138}");
        static AZStd::string LookupClassIcon(const AZ::Uuid& classId);

        IconComponent() = default;
        IconComponent(const AZ::Uuid& classId);
        ~IconComponent() = default;

        static void Reflect(AZ::ReflectContext* serialize);

        // AZ::Component
        static void GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& provided);
        static void GetDependentServices(AZ::ComponentDescriptorDependencyArrayType& dependent);
        static void GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& required);
        static void GetIncompatibleServices(AZ::ComponentDescriptorDependencyArrayType& incompatible);

        void Init() override;
        void Activate() override;
        void Deactivate() override;

        // IconBus
        AZStd::string GetIconPath() const override;

    private:
        AZStd::string m_iconPath;
    };
}
