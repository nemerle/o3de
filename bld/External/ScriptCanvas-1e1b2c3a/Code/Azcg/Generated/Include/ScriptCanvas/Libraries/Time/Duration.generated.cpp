/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/AutoGen/ScriptCanvasGrammar_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/Libraries/Time/Duration.ScriptCanvasGrammar.xml
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

#include "Include/ScriptCanvas/Libraries/Time/Duration.h"

void ScriptCanvas::Nodes::Time::Duration::ConfigureSlots()
{
    ScriptCanvas::Node::ConfigureSlots();

        // Duration
    {
                ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<float>();
                            slotConfiguration.m_name = "Duration";
        slotConfiguration.m_toolTip = "The time this node will remain active.";
                                slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
                    // Elapsed
    {
        ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<float>();
        slotConfiguration.m_name = "Elapsed";
        slotConfiguration.m_toolTip = "The amount of time that has elapsed since the countdown began.";
        slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
                                AddSlot(slotConfiguration);
    }
        // Start
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Start";
        slotConfiguration.m_toolTip = "Starts the countdown";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
    // Out
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Out";
        slotConfiguration.m_toolTip = "Signaled every frame while the duration is active.";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        slotConfiguration.m_isLatent = true;
        AddSlot(slotConfiguration);
    }
    // Done
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Done";
        slotConfiguration.m_toolTip = "Signaled once the duration is complete.";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        slotConfiguration.m_isLatent = true;
        AddSlot(slotConfiguration);
    }
}


bool ScriptCanvas::Nodes::Time::Duration::RequiresDynamicSlotOrdering() const
{
    return false;
}


bool ScriptCanvas::Nodes::Time::Duration::IsDeprecated() const
{
    return true;
}

ScriptCanvas::NodeConfiguration ScriptCanvas::Nodes::Time::Duration::GetReplacementNodeConfiguration() const
{
    ScriptCanvas::NodeConfiguration nodeConfig{};
    nodeConfig.m_type = AZ::Uuid("{CCF1F41F-39C2-C847-9D9E-0155C8B46E1C}");
            return nodeConfig;
}

void ScriptCanvas::Nodes::Time::Duration::Reflect(AZ::ReflectContext* context)
{
    static_assert((std::is_base_of<ScriptCanvas::Node, ScriptCanvas::Node>::value), "Script Canvas nodes require the first base class to be derived from ScriptCanvas::Node");

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<ScriptCanvas::Nodes::Time::Duration, ScriptCanvas::Node>()
            ->Version(2, &ScriptCanvas::VersionConverters::DurationVersionConverter)
        ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<ScriptCanvas::Nodes::Time::Duration>("Duration", "Triggers a signal every frame during the specified duration.")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                    ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                    ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ->Attribute(ScriptCanvas::Attributes::Node::TitlePaletteOverride, "DeprecatedNodeTitlePalette")
                    ->Attribute(AZ::Script::Attributes::Deprecated, true)
            ;
        }
    }
}


float DurationProperty::GetDuration(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetDurationSlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name Duration. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const float* datumValue = datum ? datum->GetAs<float>() : nullptr;
    return datumValue ? *datumValue : float();
}


float DurationProperty::GetElapsed(ScriptCanvas::Node* owner)
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



