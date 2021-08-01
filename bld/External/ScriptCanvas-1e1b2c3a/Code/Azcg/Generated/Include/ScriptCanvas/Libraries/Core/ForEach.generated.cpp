/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/AutoGen/ScriptCanvasGrammar_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/Libraries/Core/ForEach.ScriptCanvasGrammar.xml
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

#include "Include/ScriptCanvas/Libraries/Core/ForEach.h"

void ScriptCanvas::Nodes::Core::ForEach::ConfigureSlots()
{
    ScriptCanvas::Node::ConfigureSlots();

    // In
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "In";
        slotConfiguration.m_toolTip = "Signaled upon node entry";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
    // Break
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Break";
        slotConfiguration.m_toolTip = "Stops the iteration when signaled";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
    // Each
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Each";
        slotConfiguration.m_toolTip = "Signalled after each element of the container";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        AddSlot(slotConfiguration);
    }
    // Finished
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Finished";
        slotConfiguration.m_toolTip = "The container has been fully iterated over";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        AddSlot(slotConfiguration);
    }
}


bool ScriptCanvas::Nodes::Core::ForEach::RequiresDynamicSlotOrdering() const
{
    return false;
}


bool ScriptCanvas::Nodes::Core::ForEach::IsDeprecated() const
{
    return false;
}


void ScriptCanvas::Nodes::Core::ForEach::Reflect(AZ::ReflectContext* context)
{
    static_assert((std::is_base_of<ScriptCanvas::Node, ScriptCanvas::Node>::value), "Script Canvas nodes require the first base class to be derived from ScriptCanvas::Node");

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<ScriptCanvas::Nodes::Core::ForEach, ScriptCanvas::Node>()
            ->Version(2, &ScriptCanvas::VersionConverters::ForEachVersionConverter)
            ->Field("m_sourceSlot", &ForEach::m_sourceSlot)
            ->Field("m_previousTypeId", &ForEach::m_previousTypeId)
            ->Field("m_propertySlots", &ForEach::m_propertySlots)
        ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<ScriptCanvas::Nodes::Core::ForEach>("For Each", "Node for iterating through a container")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                    ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                    ->Attribute(AZ::Edit::Attributes::Category, "Containers")
                    ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ->Attribute(AZ::Edit::Attributes::Icon, "Icons/ScriptCanvas/Placeholder.png")
            ;
        }
    }
}



