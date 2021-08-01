/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/AutoGen/ScriptCanvasGrammar_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/Libraries/Time/Countdown.ScriptCanvasGrammar.xml
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

#include "Include/ScriptCanvas/Libraries/Time/Countdown.h"

void ScriptCanvas::Nodes::Time::TimeDelay::ConfigureSlots()
{
    ScriptCanvas::Nodes::Internal::BaseTimerNode::ConfigureSlots();

    // In
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "In";
        slotConfiguration.m_toolTip = "When signaled, execution is delayed at this node for the specified amount of times.";
                    slotConfiguration.m_contractDescs.emplace_back([]() { return aznew DisallowReentrantExecutionContract; });
            slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
    // Out
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Out";
        slotConfiguration.m_toolTip = "Signaled after waiting for the specified amount of times.";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        slotConfiguration.m_isLatent = true;
        AddSlot(slotConfiguration);
    }
}


bool ScriptCanvas::Nodes::Time::TimeDelay::RequiresDynamicSlotOrdering() const
{
    return false;
}


bool ScriptCanvas::Nodes::Time::TimeDelay::IsDeprecated() const
{
    return true;
}

ScriptCanvas::NodeConfiguration ScriptCanvas::Nodes::Time::TimeDelay::GetReplacementNodeConfiguration() const
{
    ScriptCanvas::NodeConfiguration nodeConfig{};
    nodeConfig.m_type = AZ::Uuid("{D3629902-02E9-AE59-0424-F366D342B433}");
            return nodeConfig;
}

void ScriptCanvas::Nodes::Time::TimeDelay::Reflect(AZ::ReflectContext* context)
{
    static_assert((std::is_base_of<ScriptCanvas::Node, ScriptCanvas::Nodes::Internal::BaseTimerNode>::value), "Script Canvas nodes require the first base class to be derived from ScriptCanvas::Node");

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<ScriptCanvas::Nodes::Time::TimeDelay, ScriptCanvas::Nodes::Internal::BaseTimerNode>()
        ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<ScriptCanvas::Nodes::Time::TimeDelay>("Time Delay", "Delays all incoming execution for the specified number of ticks")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                    ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                    ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ->Attribute(ScriptCanvas::Attributes::Node::TitlePaletteOverride, "DeprecatedNodeTitlePalette")
                    ->Attribute(AZ::Script::Attributes::Deprecated, true)
            ;
        }
    }
}


void ScriptCanvas::Nodes::Time::TickDelay::ConfigureSlots()
{
    ScriptCanvas::Node::ConfigureSlots();

        // Ticks
    {
                ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<int>();
                    slotConfiguration.SetDefaultValue(int(1));
                            slotConfiguration.m_name = "Ticks";
        slotConfiguration.m_toolTip = "The amount of ticks that need to occur before exeuction triggers";
                                slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
                // Tick Order
    {
                ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<int>();
                    slotConfiguration.SetDefaultValue(int(static_cast<int>(AZ::TICK_DEFAULT)));
                            slotConfiguration.m_name = "Tick Order";
        slotConfiguration.m_toolTip = "Where in the Tick Order this delay should happen";
                                slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
            // In
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "In";
        slotConfiguration.m_toolTip = "When signaled, execution is delayed at this node for the specified amount of frames.";
                    slotConfiguration.m_contractDescs.emplace_back([]() { return aznew DisallowReentrantExecutionContract; });
            slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
    // Out
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Out";
        slotConfiguration.m_toolTip = "Signaled after waiting for the specified amount of frames.";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        slotConfiguration.m_isLatent = true;
        AddSlot(slotConfiguration);
    }
}


bool ScriptCanvas::Nodes::Time::TickDelay::RequiresDynamicSlotOrdering() const
{
    return false;
}


bool ScriptCanvas::Nodes::Time::TickDelay::IsDeprecated() const
{
    return true;
}

ScriptCanvas::NodeConfiguration ScriptCanvas::Nodes::Time::TickDelay::GetReplacementNodeConfiguration() const
{
    ScriptCanvas::NodeConfiguration nodeConfig{};
    nodeConfig.m_type = AZ::Uuid("{D3629902-02E9-AE59-0424-F366D342B433}");
            return nodeConfig;
}

void ScriptCanvas::Nodes::Time::TickDelay::Reflect(AZ::ReflectContext* context)
{
    static_assert((std::is_base_of<ScriptCanvas::Node, ScriptCanvas::Node>::value), "Script Canvas nodes require the first base class to be derived from ScriptCanvas::Node");

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<ScriptCanvas::Nodes::Time::TickDelay, ScriptCanvas::Node>()
        ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<ScriptCanvas::Nodes::Time::TickDelay>("Tick Delay", "Delays all incoming execution for the specified number of ticks")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                    ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                    ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ->Attribute(ScriptCanvas::Attributes::Node::TitlePaletteOverride, "DeprecatedNodeTitlePalette")
                    ->Attribute(AZ::Script::Attributes::Deprecated, true)
            ;
        }
    }
}


int TickDelayProperty::GetTicks(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetTicksSlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name Ticks. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const int* datumValue = datum ? datum->GetAs<int>() : nullptr;
    return datumValue ? *datumValue : int();
}


int TickDelayProperty::GetTickOrder(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetTickOrderSlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name TickOrder. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const int* datumValue = datum ? datum->GetAs<int>() : nullptr;
    return datumValue ? *datumValue : int();
}


void ScriptCanvas::Nodes::Time::Countdown::ConfigureSlots()
{
    ScriptCanvas::Node::ConfigureSlots();

        // Time
    {
                ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<float>();
                    slotConfiguration.SetDefaultValue(float(1.0f));
                            slotConfiguration.m_name = "Time";
        slotConfiguration.m_toolTip = "Amount of time to delay, in seconds";
                                slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
                // Loop
    {
                ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<bool>();
                            slotConfiguration.m_name = "Loop";
        slotConfiguration.m_toolTip = "If true, the delay will restart after triggering the Out slot";
                                slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
                // Hold
    {
                ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<float>();
                            slotConfiguration.m_name = "Hold";
        slotConfiguration.m_toolTip = "Amount of time to wait before restarting, in seconds";
                                slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
                    // Elapsed
    {
        ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<float>();
        slotConfiguration.m_name = "Elapsed";
        slotConfiguration.m_toolTip = "The amount of time that has elapsed since the delay began.";
        slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
                                AddSlot(slotConfiguration);
    }
        // In
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "In";
        slotConfiguration.m_toolTip = "When signaled, execution is delayed at this node according to the specified properties.";
                    slotConfiguration.m_contractDescs.emplace_back([]() { return aznew DisallowReentrantExecutionContract; });
            slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
    // Cancel
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Cancel";
        slotConfiguration.m_toolTip = "Cancels the delay.";
                    slotConfiguration.m_contractDescs.emplace_back([]() { return aznew DisallowReentrantExecutionContract; });
            slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
    // Reset
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Reset";
        slotConfiguration.m_toolTip = "Resets the delay.";
                    slotConfiguration.m_contractDescs.emplace_back([]() { return aznew DisallowReentrantExecutionContract; });
            slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
    // Out
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Out";
        slotConfiguration.m_toolTip = "Signaled when the delay reaches zero.";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        slotConfiguration.m_isLatent = true;
        AddSlot(slotConfiguration);
    }
}


bool ScriptCanvas::Nodes::Time::Countdown::RequiresDynamicSlotOrdering() const
{
    return false;
}


bool ScriptCanvas::Nodes::Time::Countdown::IsDeprecated() const
{
    return true;
}

ScriptCanvas::NodeConfiguration ScriptCanvas::Nodes::Time::Countdown::GetReplacementNodeConfiguration() const
{
    ScriptCanvas::NodeConfiguration nodeConfig{};
    nodeConfig.m_type = AZ::Uuid("{233C84A7-44DE-A948-D65C-46C11F1F7162}");
            return nodeConfig;
}

void ScriptCanvas::Nodes::Time::Countdown::Reflect(AZ::ReflectContext* context)
{
    static_assert((std::is_base_of<ScriptCanvas::Node, ScriptCanvas::Node>::value), "Script Canvas nodes require the first base class to be derived from ScriptCanvas::Node");

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<ScriptCanvas::Nodes::Time::Countdown, ScriptCanvas::Node>()
            ->Version(3, &ScriptCanvas::VersionConverters::DelayVersionConverter)
        ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<ScriptCanvas::Nodes::Time::Countdown>("Delay", "Counts down time from a specified value.")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                    ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                    ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ->Attribute(ScriptCanvas::Attributes::Node::TitlePaletteOverride, "DeprecatedNodeTitlePalette")
                    ->Attribute(AZ::Script::Attributes::Deprecated, true)
            ;
        }
    }
}


float CountdownProperty::GetTime(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetTimeSlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name Time. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const float* datumValue = datum ? datum->GetAs<float>() : nullptr;
    return datumValue ? *datumValue : float();
}


bool CountdownProperty::GetLoop(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetLoopSlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name Loop. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const bool* datumValue = datum ? datum->GetAs<bool>() : nullptr;
    return datumValue ? *datumValue : bool();
}


float CountdownProperty::GetHold(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetHoldSlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name Hold. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const float* datumValue = datum ? datum->GetAs<float>() : nullptr;
    return datumValue ? *datumValue : float();
}


float CountdownProperty::GetElapsed(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetElapsedSlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name Elapsed. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const float* datumValue = datum ? datum->GetAs<float>() : nullptr;
    return datumValue ? *datumValue : float();
}



