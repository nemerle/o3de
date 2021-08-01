/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/AutoGen/ScriptCanvasGrammar_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/Libraries/UnitTesting/ExpectNotEqual.ScriptCanvasGrammar.xml
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

#include "Include/ScriptCanvas/Libraries/UnitTesting/ExpectNotEqual.h"

void ScriptCanvas::Nodes::UnitTesting::ExpectNotEqual::ConfigureSlots()
{
    ScriptCanvas::Node::ConfigureSlots();

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
    // Candidate
    {
        ScriptCanvas::DynamicDataSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Candidate";
        slotConfiguration.m_toolTip = "left of !=";
            slotConfiguration.SetConnectionType(ConnectionType::Input);
        slotConfiguration.m_dynamicDataType = DynamicDataType::Any;
            slotConfiguration.m_dynamicGroup = AZ::Crc32("DynamicGroup");
                        AddSlot(slotConfiguration);
    }
    // Reference
    {
        ScriptCanvas::DynamicDataSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Reference";
        slotConfiguration.m_toolTip = "right of !=";
            slotConfiguration.SetConnectionType(ConnectionType::Input);
        slotConfiguration.m_dynamicDataType = DynamicDataType::Any;
            slotConfiguration.m_dynamicGroup = AZ::Crc32("DynamicGroup");
                        AddSlot(slotConfiguration);
    }
}


bool ScriptCanvas::Nodes::UnitTesting::ExpectNotEqual::RequiresDynamicSlotOrdering() const
{
    return false;
}


bool ScriptCanvas::Nodes::UnitTesting::ExpectNotEqual::IsDeprecated() const
{
    return true;
}

ScriptCanvas::NodeConfiguration ScriptCanvas::Nodes::UnitTesting::ExpectNotEqual::GetReplacementNodeConfiguration() const
{
    ScriptCanvas::NodeConfiguration nodeConfig{};
    nodeConfig.m_type = AZ::Uuid("{C1E3C9D0-42E3-4D00-AE73-2A881E7E76A8}");
        nodeConfig.m_methodName = "Expect Not Equal";
            nodeConfig.m_className = "Unit Testing";
        return nodeConfig;
}

void ScriptCanvas::Nodes::UnitTesting::ExpectNotEqual::Reflect(AZ::ReflectContext* context)
{
    static_assert((std::is_base_of<ScriptCanvas::Node, ScriptCanvas::Node>::value), "Script Canvas nodes require the first base class to be derived from ScriptCanvas::Node");

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<ScriptCanvas::Nodes::UnitTesting::ExpectNotEqual, ScriptCanvas::Node>()
            ->Version(1, &ScriptCanvas::UnitTesting::ExpectComparisonVersioner)
        ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<ScriptCanvas::Nodes::UnitTesting::ExpectNotEqual>("Expect Not Equal", "Expects lhs not equal to rhs")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                    ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                    ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ->Attribute(AZ::Edit::Attributes::Icon, "Icons/ScriptCanvas/ExpectNotEqual.png")
                    ->Attribute(ScriptCanvas::Attributes::Node::TitlePaletteOverride, "DeprecatedNodeTitlePalette")
                    ->Attribute(AZ::Script::Attributes::Deprecated, true)
            ;
        }
    }
}


AZStd::string ExpectNotEqualProperty::GetReport(ScriptCanvas::Node* owner)
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



