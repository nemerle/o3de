/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/AutoGen/ScriptCanvasGrammar_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/Libraries/UnitTesting/ExpectFalse.ScriptCanvasGrammar.xml
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

#include "Include/ScriptCanvas/Libraries/UnitTesting/ExpectFalse.h"

void ScriptCanvas::Nodes::UnitTesting::ExpectFalse::ConfigureSlots()
{
    ScriptCanvas::Node::ConfigureSlots();

        // Candidate
    {
                ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<bool>();
                            slotConfiguration.m_name = "Candidate";
        slotConfiguration.m_toolTip = "a value that must be false";
                                slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
                // Report
    {
                ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<AZStd::string>();
                            slotConfiguration.m_name = "Report";
        slotConfiguration.m_toolTip = "additional notes for the test report";
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
    // Out
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Out";
        slotConfiguration.m_toolTip = "";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        AddSlot(slotConfiguration);
    }
}


bool ScriptCanvas::Nodes::UnitTesting::ExpectFalse::RequiresDynamicSlotOrdering() const
{
    return false;
}


bool ScriptCanvas::Nodes::UnitTesting::ExpectFalse::IsDeprecated() const
{
    return true;
}

ScriptCanvas::NodeConfiguration ScriptCanvas::Nodes::UnitTesting::ExpectFalse::GetReplacementNodeConfiguration() const
{
    ScriptCanvas::NodeConfiguration nodeConfig{};
    nodeConfig.m_type = AZ::Uuid("{E42861BD-1956-45AE-8DD7-CCFC1E3E5ACF}");
        nodeConfig.m_methodName = "Expect False";
            nodeConfig.m_className = "Unit Testing";
        return nodeConfig;
}

void ScriptCanvas::Nodes::UnitTesting::ExpectFalse::Reflect(AZ::ReflectContext* context)
{
    static_assert((std::is_base_of<ScriptCanvas::Node, ScriptCanvas::Node>::value), "Script Canvas nodes require the first base class to be derived from ScriptCanvas::Node");

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<ScriptCanvas::Nodes::UnitTesting::ExpectFalse, ScriptCanvas::Node>()
            ->Version(1, &ScriptCanvas::UnitTesting::ExpectBooleanVersioner)
        ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<ScriptCanvas::Nodes::UnitTesting::ExpectFalse>("Expect False", "Expects a value to be false")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                    ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                    ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ->Attribute(AZ::Edit::Attributes::Icon, "Icons/ScriptCanvas/ExpectFalse.png")
                    ->Attribute(ScriptCanvas::Attributes::Node::TitlePaletteOverride, "DeprecatedNodeTitlePalette")
                    ->Attribute(AZ::Script::Attributes::Deprecated, true)
            ;
        }
    }
}


bool ExpectFalseProperty::GetCandidate(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetCandidateSlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name Candidate. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const bool* datumValue = datum ? datum->GetAs<bool>() : nullptr;
    return datumValue ? *datumValue : bool();
}


AZStd::string ExpectFalseProperty::GetReport(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetReportSlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name Report. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const AZStd::string* datumValue = datum ? datum->GetAs<AZStd::string>() : nullptr;
    return datumValue ? *datumValue : AZStd::string();
}



