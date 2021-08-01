/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#pragma once

#include <AzCore/Component/ComponentDescriptor.h>
#include <AzCore/Memory/SystemAllocator.h>
#include <AzCore/Module/Module.h>

namespace LandscapeCanvas
{
    class LandscapeCanvasEditorModule
        : public  AZ::Module
    {
    public:
        AZ_RTTI(LandscapeCanvasEditorModule, "{5E539B81-792E-4BE5-BCA2-95C5D826E75B}", AZ::Module);
        AZ_CLASS_ALLOCATOR(LandscapeCanvasEditorModule, AZ::SystemAllocator, 0);

        LandscapeCanvasEditorModule();

        AZ::ComponentTypeList GetRequiredSystemComponents() const override;
    };

    class LandscapeCanvasEditorSystemComponent
        : public AZ::Component
    {
    public:
        AZ_COMPONENT(LandscapeCanvasEditorSystemComponent, "{11402EA3-57FF-4086-A980-228EEA0CDAF3}");

        static void Reflect(AZ::ReflectContext* context);
        static void GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptorDependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptorDependencyArrayType& dependent);

    private:
        // AZ::Component
        void Activate() override;
        void Deactivate() override;
    };
}
