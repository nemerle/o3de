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

namespace AzToolsFramework
{
    class PropertyHandlerBase;
}

namespace NvCloth
{
    class EditorSystemComponent
        : public AZ::Component
    {
    public:
        AZ_COMPONENT(EditorSystemComponent, "{4EABD010-B50D-45C6-AE3D-A617B26B14CA}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptorDependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& required);

    protected:
        // AZ::Component overrides ...
        void Activate() override;
        void Deactivate() override;

    private:
        AZStd::vector<AzToolsFramework::PropertyHandlerBase*> m_propertyHandlers;
    };
} // namespace NvCloth
