/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/AutoGen/ScriptCanvasGrammar_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/Libraries/Operators/Math/OperatorLerp.ScriptCanvasGrammar.xml
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

#include "Include/ScriptCanvas/Libraries/Operators/Math/OperatorLerp.h"

void ScriptCanvas::Nodes::LerpBetween::ConfigureSlots()
{
    ScriptCanvas::Node::ConfigureSlots();

        // Maximum Duration
    {
                ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<int>();
                    slotConfiguration.SetDefaultValue(int(-1));
                            slotConfiguration.m_name = "Maximum Duration";
        slotConfiguration.m_toolTip = "The maximum amount of time it will take to complete the specified lerp. Negative value implies no limit, 0 implies instant.";
                                slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
                    // Percent
    {
        ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<float>();
        slotConfiguration.m_name = "Percent";
        slotConfiguration.m_toolTip = "The percentage of the way through the lerp this tick is on.";
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
    // Cancel
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Cancel";
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
    // Tick
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Tick";
        slotConfiguration.m_toolTip = "Signalled at each step of the lerp";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        AddSlot(slotConfiguration);
    }
    // Lerp Complete
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Lerp Complete";
        slotConfiguration.m_toolTip = "Output signal";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        AddSlot(slotConfiguration);
    }
    // Start
    {
        ScriptCanvas::DynamicDataSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Start";
        slotConfiguration.m_toolTip = "The value to start lerping from.";
            slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfiguration.m_dynamicDataType = ScriptCanvas::DynamicDataType::Value;
            slotConfiguration.m_dynamicGroup = AZ::Crc32("LerpGroup");
                        // Restricted Type Contract
        slotConfiguration.m_contractDescs = AZStd::vector<ScriptCanvas::ContractDescriptor>{ { []() { return aznew ScriptCanvas::RestrictedTypeContract({ Data::Type::Number(), Data::Type::Vector2(), Data::Type::Vector3(), Data::Type::Vector4() }); } } };
                    AddSlot(slotConfiguration);
    }
    // Stop
    {
        ScriptCanvas::DynamicDataSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Stop";
        slotConfiguration.m_toolTip = "The value to stop lerping at.";
            slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfiguration.m_dynamicDataType = ScriptCanvas::DynamicDataType::Value;
            slotConfiguration.m_dynamicGroup = AZ::Crc32("LerpGroup");
                        AddSlot(slotConfiguration);
    }
    // Speed
    {
        ScriptCanvas::DynamicDataSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Speed";
        slotConfiguration.m_toolTip = "The speed at which to lerp between the start and stop.";
            slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfiguration.m_dynamicDataType = ScriptCanvas::DynamicDataType::Value;
            slotConfiguration.m_dynamicGroup = AZ::Crc32("LerpGroup");
                        AddSlot(slotConfiguration);
    }
    // Step
    {
        ScriptCanvas::DynamicDataSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Step";
        slotConfiguration.m_toolTip = "The value of the current step of the lerp.";
            slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        slotConfiguration.m_dynamicDataType = ScriptCanvas::DynamicDataType::Value;
            slotConfiguration.m_dynamicGroup = AZ::Crc32("LerpGroup");
                        AddSlot(slotConfiguration);
    }
}


bool ScriptCanvas::Nodes::LerpBetween::RequiresDynamicSlotOrdering() const
{
    return false;
}


bool ScriptCanvas::Nodes::LerpBetween::IsDeprecated() const
{
    return true;
}


void ScriptCanvas::Nodes::LerpBetween::Reflect(AZ::ReflectContext* context)
{
    static_assert((std::is_base_of<ScriptCanvas::Node, ScriptCanvas::Node>::value), "Script Canvas nodes require the first base class to be derived from ScriptCanvas::Node");

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<ScriptCanvas::Nodes::LerpBetween, ScriptCanvas::Node>()
            ->Version(1)
            ->Field("m_displayType", &LerpBetween::m_displayType)
        ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<ScriptCanvas::Nodes::LerpBetween>("Lerp Between", "Performs a lerp between the two specified sources using the speed specified or in the amount of time specified, or the minimum of the two")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                    ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                    ->Attribute(AZ::Edit::Attributes::Category, "Math")
                    ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ->Attribute(ScriptCanvas::Attributes::Node::TitlePaletteOverride, "DeprecatedNodeTitlePalette")
                    ->Attribute(AZ::Script::Attributes::Deprecated, true)
            ;
        }
    }
}


int LerpBetweenProperty::GetMaximumDuration(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetMaximumDurationSlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name MaximumDuration. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const int* datumValue = datum ? datum->GetAs<int>() : nullptr;
    return datumValue ? *datumValue : int();
}


float LerpBetweenProperty::GetPercent(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetPercentSlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name Percent. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const float* datumValue = datum ? datum->GetAs<float>() : nullptr;
    return datumValue ? *datumValue : float();
}



