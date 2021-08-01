/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/AutoGen/ScriptCanvasGrammar_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/Libraries/String/Utilities.ScriptCanvasGrammar.xml
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

#include "Include/ScriptCanvas/Libraries/String/Utilities.h"

void ScriptCanvas::Nodes::String::StartsWith::ConfigureSlots()
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
        slotConfiguration.m_toolTip = "The pattern to evaluate.";
                                slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
                // Case Sensitive
    {
                ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<bool>();
                    slotConfiguration.SetDefaultValue(bool(false));
                            slotConfiguration.m_name = "Case Sensitive";
        slotConfiguration.m_toolTip = "Take into account the case of the string when searching.";
                                slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
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
        slotConfiguration.m_toolTip = "";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        AddSlot(slotConfiguration);
    }
    // False
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "False";
        slotConfiguration.m_toolTip = "";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        AddSlot(slotConfiguration);
    }
}


bool ScriptCanvas::Nodes::String::StartsWith::RequiresDynamicSlotOrdering() const
{
    return false;
}


bool ScriptCanvas::Nodes::String::StartsWith::IsDeprecated() const
{
    return true;
}

ScriptCanvas::NodeConfiguration ScriptCanvas::Nodes::String::StartsWith::GetReplacementNodeConfiguration() const
{
    ScriptCanvas::NodeConfiguration nodeConfig{};
    nodeConfig.m_type = AZ::Uuid("{E42861BD-1956-45AE-8DD7-CCFC1E3E5ACF}");
        nodeConfig.m_methodName = "Starts With";
            nodeConfig.m_className = "String";
        return nodeConfig;
}

void ScriptCanvas::Nodes::String::StartsWith::Reflect(AZ::ReflectContext* context)
{
    static_assert((std::is_base_of<ScriptCanvas::Node, ScriptCanvas::Node>::value), "Script Canvas nodes require the first base class to be derived from ScriptCanvas::Node");

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<ScriptCanvas::Nodes::String::StartsWith, ScriptCanvas::Node>()
            ->Version(0)
        ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<ScriptCanvas::Nodes::String::StartsWith>("Starts With", ".")
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


AZStd::string StartsWithProperty::GetSource(ScriptCanvas::Node* owner)
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


AZStd::string StartsWithProperty::GetPattern(ScriptCanvas::Node* owner)
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


bool StartsWithProperty::GetCaseSensitive(ScriptCanvas::Node* owner)
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


void ScriptCanvas::Nodes::String::EndsWith::ConfigureSlots()
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
        slotConfiguration.m_toolTip = "The pattern to evaulate.";
                                slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
                // Case Sensitive
    {
                ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<bool>();
                    slotConfiguration.SetDefaultValue(bool(false));
                            slotConfiguration.m_name = "Case Sensitive";
        slotConfiguration.m_toolTip = "Take into account the case of the string when searching.";
                                slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
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
        slotConfiguration.m_toolTip = "";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        AddSlot(slotConfiguration);
    }
    // False
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "False";
        slotConfiguration.m_toolTip = "";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        AddSlot(slotConfiguration);
    }
}


bool ScriptCanvas::Nodes::String::EndsWith::RequiresDynamicSlotOrdering() const
{
    return false;
}


bool ScriptCanvas::Nodes::String::EndsWith::IsDeprecated() const
{
    return true;
}

ScriptCanvas::NodeConfiguration ScriptCanvas::Nodes::String::EndsWith::GetReplacementNodeConfiguration() const
{
    ScriptCanvas::NodeConfiguration nodeConfig{};
    nodeConfig.m_type = AZ::Uuid("{E42861BD-1956-45AE-8DD7-CCFC1E3E5ACF}");
        nodeConfig.m_methodName = "Ends With";
            nodeConfig.m_className = "String";
        return nodeConfig;
}

void ScriptCanvas::Nodes::String::EndsWith::Reflect(AZ::ReflectContext* context)
{
    static_assert((std::is_base_of<ScriptCanvas::Node, ScriptCanvas::Node>::value), "Script Canvas nodes require the first base class to be derived from ScriptCanvas::Node");

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<ScriptCanvas::Nodes::String::EndsWith, ScriptCanvas::Node>()
            ->Version(0)
        ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<ScriptCanvas::Nodes::String::EndsWith>("Ends With", ".")
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


AZStd::string EndsWithProperty::GetSource(ScriptCanvas::Node* owner)
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


AZStd::string EndsWithProperty::GetPattern(ScriptCanvas::Node* owner)
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


bool EndsWithProperty::GetCaseSensitive(ScriptCanvas::Node* owner)
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


void ScriptCanvas::Nodes::String::Split::ConfigureSlots()
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
                // Delimiters
    {
                ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<AZStd::string>();
                    slotConfiguration.SetDefaultValue(AZStd::string(k_defaultDelimiter));
                            slotConfiguration.m_name = "Delimiters";
        slotConfiguration.m_toolTip = "The characters that can be used as delimiters.";
                                slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
                    // String Array
    {
        ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<AZStd::vector<AZStd::string>>();
        slotConfiguration.m_name = "String Array";
        slotConfiguration.m_toolTip = "A container of all the strings.";
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
    // Out
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Out";
        slotConfiguration.m_toolTip = "";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        AddSlot(slotConfiguration);
    }
}


bool ScriptCanvas::Nodes::String::Split::RequiresDynamicSlotOrdering() const
{
    return false;
}


bool ScriptCanvas::Nodes::String::Split::IsDeprecated() const
{
    return true;
}

ScriptCanvas::NodeConfiguration ScriptCanvas::Nodes::String::Split::GetReplacementNodeConfiguration() const
{
    ScriptCanvas::NodeConfiguration nodeConfig{};
    nodeConfig.m_type = AZ::Uuid("{E42861BD-1956-45AE-8DD7-CCFC1E3E5ACF}");
        nodeConfig.m_methodName = "Split";
            nodeConfig.m_className = "String";
        return nodeConfig;
}

void ScriptCanvas::Nodes::String::Split::Reflect(AZ::ReflectContext* context)
{
    static_assert((std::is_base_of<ScriptCanvas::Node, ScriptCanvas::Node>::value), "Script Canvas nodes require the first base class to be derived from ScriptCanvas::Node");

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<ScriptCanvas::Nodes::String::Split, ScriptCanvas::Node>()
            ->Version(0)
        ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<ScriptCanvas::Nodes::String::Split>("Split", ".")
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


AZStd::string SplitProperty::GetSource(ScriptCanvas::Node* owner)
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


AZStd::string SplitProperty::GetDelimiters(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetDelimitersSlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name Delimiters. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const AZStd::string* datumValue = datum ? datum->GetAs<AZStd::string>() : nullptr;
    return datumValue ? *datumValue : AZStd::string();
}


AZStd::vector<AZStd::string> SplitProperty::GetStringArray(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetStringArraySlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name StringArray. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const AZStd::vector<AZStd::string>* datumValue = datum ? datum->GetAs<AZStd::vector<AZStd::string>>() : nullptr;
    return datumValue ? *datumValue : AZStd::vector<AZStd::string>();
}


void ScriptCanvas::Nodes::String::Join::ConfigureSlots()
{
    ScriptCanvas::Node::ConfigureSlots();

        // String Array
    {
                ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<AZStd::vector<AZStd::string>>();
                            slotConfiguration.m_name = "String Array";
        slotConfiguration.m_toolTip = "The array of strings to join.";
                                slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
                // Separator
    {
                ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<AZStd::string>();
                    slotConfiguration.SetDefaultValue(AZStd::string(k_defaultSeparator));
                            slotConfiguration.m_name = "Separator";
        slotConfiguration.m_toolTip = "Will use this string when concatenating the strings from the array.";
                                slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
                    // String
    {
        ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<AZStd::string>();
        slotConfiguration.m_name = "String";
        slotConfiguration.m_toolTip = "The joined string.";
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
    // Out
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Out";
        slotConfiguration.m_toolTip = "";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        AddSlot(slotConfiguration);
    }
}


bool ScriptCanvas::Nodes::String::Join::RequiresDynamicSlotOrdering() const
{
    return false;
}


bool ScriptCanvas::Nodes::String::Join::IsDeprecated() const
{
    return true;
}

ScriptCanvas::NodeConfiguration ScriptCanvas::Nodes::String::Join::GetReplacementNodeConfiguration() const
{
    ScriptCanvas::NodeConfiguration nodeConfig{};
    nodeConfig.m_type = AZ::Uuid("{E42861BD-1956-45AE-8DD7-CCFC1E3E5ACF}");
        nodeConfig.m_methodName = "Join";
            nodeConfig.m_className = "String";
        return nodeConfig;
}

void ScriptCanvas::Nodes::String::Join::Reflect(AZ::ReflectContext* context)
{
    static_assert((std::is_base_of<ScriptCanvas::Node, ScriptCanvas::Node>::value), "Script Canvas nodes require the first base class to be derived from ScriptCanvas::Node");

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<ScriptCanvas::Nodes::String::Join, ScriptCanvas::Node>()
            ->Version(0)
        ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<ScriptCanvas::Nodes::String::Join>("Join", ".")
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


AZStd::vector<AZStd::string> JoinProperty::GetStringArray(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetStringArraySlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name StringArray. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const AZStd::vector<AZStd::string>* datumValue = datum ? datum->GetAs<AZStd::vector<AZStd::string>>() : nullptr;
    return datumValue ? *datumValue : AZStd::vector<AZStd::string>();
}


AZStd::string JoinProperty::GetSeparator(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetSeparatorSlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name Separator. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const AZStd::string* datumValue = datum ? datum->GetAs<AZStd::string>() : nullptr;
    return datumValue ? *datumValue : AZStd::string();
}


AZStd::string JoinProperty::GetString(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetStringSlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name String. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const AZStd::string* datumValue = datum ? datum->GetAs<AZStd::string>() : nullptr;
    return datumValue ? *datumValue : AZStd::string();
}



