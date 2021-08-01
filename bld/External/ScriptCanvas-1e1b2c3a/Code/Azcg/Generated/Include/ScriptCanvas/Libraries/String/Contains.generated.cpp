/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/AutoGen/ScriptCanvasGrammar_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/Libraries/String/Contains.ScriptCanvasGrammar.xml
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

#include "Include/ScriptCanvas/Libraries/String/Contains.h"

void ScriptCanvas::Nodes::String::Contains::ConfigureSlots()
{
    ScriptCanvas::Node::ConfigureSlots();

        // Source
    {
                ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<AZStd::string>();
                            slotConfiguration.m_name = "Source";
        slotConfiguration.m_toolTip = "The string to search in.";
                                slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
                // Pattern
    {
                ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<AZStd::string>();
                            slotConfiguration.m_name = "Pattern";
        slotConfiguration.m_toolTip = "The substring to search for.";
                                slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
                // Search From End
    {
                ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<bool>();
                            slotConfiguration.m_name = "Search From End";
        slotConfiguration.m_toolTip = "Start the match checking from the end of a string.";
                                slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
                // Case Sensitive
    {
                ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<bool>();
                    slotConfiguration.SetDefaultValue(bool(true));
                            slotConfiguration.m_name = "Case Sensitive";
        slotConfiguration.m_toolTip = "Take into account the case of the string when searching.";
                                slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
                    // Index
    {
        ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<int>();
        slotConfiguration.m_name = "Index";
        slotConfiguration.m_toolTip = "The first index at which the substring was found.";
        slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
                                AddSlot(slotConfiguration);
    }
        // In
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "In";
        slotConfiguration.m_toolTip = "Input signal";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
    // True
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "True";
        slotConfiguration.m_toolTip = "The string contains the provided pattern.";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        AddSlot(slotConfiguration);
    }
    // False
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "False";
        slotConfiguration.m_toolTip = "The string did not contain the provided pattern.";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        AddSlot(slotConfiguration);
    }
}


bool ScriptCanvas::Nodes::String::Contains::RequiresDynamicSlotOrdering() const
{
    return false;
}


bool ScriptCanvas::Nodes::String::Contains::IsDeprecated() const
{
    return true;
}

ScriptCanvas::NodeConfiguration ScriptCanvas::Nodes::String::Contains::GetReplacementNodeConfiguration() const
{
    ScriptCanvas::NodeConfiguration nodeConfig{};
    nodeConfig.m_type = AZ::Uuid("{E42861BD-1956-45AE-8DD7-CCFC1E3E5ACF}");
        nodeConfig.m_methodName = "Contains String";
            nodeConfig.m_className = "String";
        return nodeConfig;
}

void ScriptCanvas::Nodes::String::Contains::Reflect(AZ::ReflectContext* context)
{
    static_assert((std::is_base_of<ScriptCanvas::Node, ScriptCanvas::Node>::value), "Script Canvas nodes require the first base class to be derived from ScriptCanvas::Node");

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<ScriptCanvas::Nodes::String::Contains, ScriptCanvas::Node>()
            ->Version(0)
        ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<ScriptCanvas::Nodes::String::Contains>("Contains String", "Checks if a string contains an instance of a specified string, if true, it returns the index to the first instance matched.")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                    ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                    ->Attribute(AZ::Edit::Attributes::Category, "String")
                    ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ->Attribute(ScriptCanvas::Attributes::Node::TitlePaletteOverride, "DeprecatedNodeTitlePalette")
                    ->Attribute(AZ::Script::Attributes::Deprecated, true)
            ;
        }
    }
}


AZStd::string ContainsProperty::GetSource(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetSourceSlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name Source. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const AZStd::string* datumValue = datum ? datum->GetAs<AZStd::string>() : nullptr;
    return datumValue ? *datumValue : AZStd::string();
}


AZStd::string ContainsProperty::GetPattern(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetPatternSlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name Pattern. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const AZStd::string* datumValue = datum ? datum->GetAs<AZStd::string>() : nullptr;
    return datumValue ? *datumValue : AZStd::string();
}


bool ContainsProperty::GetSearchFromEnd(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetSearchFromEndSlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name SearchFromEnd. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const bool* datumValue = datum ? datum->GetAs<bool>() : nullptr;
    return datumValue ? *datumValue : bool();
}


bool ContainsProperty::GetCaseSensitive(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetCaseSensitiveSlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name CaseSensitive. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const bool* datumValue = datum ? datum->GetAs<bool>() : nullptr;
    return datumValue ? *datumValue : bool();
}


int ContainsProperty::GetIndex(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetIndexSlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name Index. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const int* datumValue = datum ? datum->GetAs<int>() : nullptr;
    return datumValue ? *datumValue : int();
}



