/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/AutoGen/ScriptCanvasGrammar_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/Libraries/Operators/Containers/OperatorEmpty.ScriptCanvasGrammar.xml
 */

#include <AzCore/Asset/AssetSerializer.h>
#include <AzCore/RTTI/BehaviorContext.h>
#include <AzCore/Serialization/EditContext.h>
#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/Serialization/AZStdContainers.inl>
#include <AzCore/RTTI/TypeInfo.h>

#include <ScriptCanvas/Core/Slot.h>
#include <ScriptCanvas/Core/Datum.h>
#include <ScriptCanvas/Core/Attributes.h>
#include <ScriptCanvas/Core/Contracts.h>
#include <ScriptCanvas/Core/DatumBus.h>

#include <ScriptCanvas/Utils/VersionConverters.h>

#include "Include/ScriptCanvas/Libraries/Operators/Containers/OperatorEmpty.h"

void ScriptCanvas::Nodes::Operators::OperatorEmpty::ConfigureSlots()
{
    ScriptCanvas::Node::ConfigureSlots();

            // Is Empty
    {
        ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<bool>();
        slotConfiguration.m_name = "Is Empty";
        slotConfiguration.m_toolTip = "True if the container is empty, false if it's not.";
        slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
                                AddSlot(slotConfiguration);
    }
        // In
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "In";
        slotConfiguration.m_toolTip = "";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
    // Out
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Out";
        slotConfiguration.m_toolTip = "";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        AddSlot(slotConfiguration);
    }
    // True
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "True";
        slotConfiguration.m_toolTip = "The container is empty";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        AddSlot(slotConfiguration);
    }
    // False
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "False";
        slotConfiguration.m_toolTip = "The container is not empty";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        AddSlot(slotConfiguration);
    }
    // Source
    {
        ScriptCanvas::DynamicDataSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Source";
        slotConfiguration.m_toolTip = "The container to check if its empty.";
            slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfiguration.m_dynamicDataType = ScriptCanvas::DynamicDataType::Container;
                        AddSlot(slotConfiguration);
    }
}


bool ScriptCanvas::Nodes::Operators::OperatorEmpty::RequiresDynamicSlotOrdering() const
{
    return false;
}


bool ScriptCanvas::Nodes::Operators::OperatorEmpty::IsDeprecated() const
{
    return true;
}

ScriptCanvas::NodeConfiguration ScriptCanvas::Nodes::Operators::OperatorEmpty::GetReplacementNodeConfiguration() const
{
    ScriptCanvas::NodeConfiguration nodeConfig{};
    nodeConfig.m_type = AZ::Uuid("{C1E3C9D0-42E3-4D00-AE73-2A881E7E76A8}");
        nodeConfig.m_methodName = "Is Empty";
            return nodeConfig;
}

void ScriptCanvas::Nodes::Operators::OperatorEmpty::Reflect(AZ::ReflectContext* context)
{
    static_assert((std::is_base_of<ScriptCanvas::Node, ScriptCanvas::Node>::value), "Script Canvas nodes require the first base class to be derived from ScriptCanvas::Node");

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<ScriptCanvas::Nodes::Operators::OperatorEmpty, ScriptCanvas::Node>()
            ->Version(1, &OperatorEmptyVersionConverter)
        ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<ScriptCanvas::Nodes::Operators::OperatorEmpty>("Is Empty", "Returns whether the container is empty")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                    ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                    ->Attribute(AZ::Edit::Attributes::Category, "Containers")
                    ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ->Attribute(ScriptCanvas::Attributes::Node::TitlePaletteOverride, "DeprecatedNodeTitlePalette")
                    ->Attribute(AZ::Script::Attributes::Deprecated, true)
            ;
        }
    }
}


bool OperatorEmptyProperty::GetIsEmpty(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetIsEmptySlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name IsEmpty. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const bool* datumValue = datum ? datum->GetAs<bool>() : nullptr;
    return datumValue ? *datumValue : bool();
}



