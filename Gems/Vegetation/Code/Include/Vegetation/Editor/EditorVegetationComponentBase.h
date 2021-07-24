/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */
#pragma once

#include <AzToolsFramework/API/ToolsApplicationAPI.h>
#include <AzToolsFramework/ToolsComponents/EditorComponentBase.h>
#include <AzToolsFramework/ToolsComponents/EditorVisibilityBus.h>
#include <GradientSignal/Editor/EditorGradientComponentBase.h>
#include <Vegetation/Editor/EditorVegetationComponentTypeIds.h>
#include <LmbrCentral/Component/EditorWrappedComponentBase.h>

namespace Vegetation
{
    /*
    * The base class for all Vegetation editor classes
    */

    template<typename TComponent, typename TConfiguration>
    class EditorVegetationComponentBase
        : public LmbrCentral::EditorWrappedComponentBase<TComponent, TConfiguration>
    {
    public:
        using BaseClassType = LmbrCentral::EditorWrappedComponentBase<TComponent, TConfiguration>;
        using BaseClassType::GetEntityId;

        using WrappedComponentType = TComponent;
        using WrappedConfigType = TConfiguration;

        AZ_RTTI((EditorVegetationComponentBase, "{4A00AE4F-3D10-4B9F-914A-FAA7D2579035}", TComponent, TConfiguration), BaseClassType);

        ~EditorVegetationComponentBase() override = default;

        //////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Activate() override;
        void Deactivate() override;

        static void Reflect(AZ::ReflectContext* context);

    protected:
        using BaseClassType::m_configuration;
        using BaseClassType::m_component;
        using BaseClassType::m_visible;

        AZ::u32 ConfigurationChanged() override;
    };
} // namespace Vegetation

namespace AZ
{
    // Serialization helpers
    template<typename T>
    struct SerializeGenericTypeInfoImpl;
    template<typename T>
    struct SerializeGenericTypeInfo;

    template<typename S, typename T>
    struct SerializeGenericTypeInfo<Vegetation::EditorVegetationComponentBase<S, T>>
        : SerializeGenericTypeInfoImpl<Vegetation::EditorVegetationComponentBase<S, T>>
    {
        // treat EditorVegetationComponentBase as generic value type
    };

}
#include "EditorVegetationComponentBase.inl"
