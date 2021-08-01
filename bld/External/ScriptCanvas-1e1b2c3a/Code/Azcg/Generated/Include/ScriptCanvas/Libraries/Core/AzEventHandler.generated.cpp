/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/AutoGen/ScriptCanvasGrammar_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/Libraries/Core/AzEventHandler.ScriptCanvasGrammar.xml
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

#include "Include/ScriptCanvas/Libraries/Core/AzEventHandler.h"

void ScriptCanvas::Nodes::Core::AzEventHandler::ConfigureSlots()
{
    ScriptCanvas::Node::ConfigureSlots();

    // Connect
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Connect";
        slotConfiguration.m_toolTip = "Connect the AZ Event to this AZ Event Handler.";
                    slotConfiguration.m_contractDescs.emplace_back([]() { return aznew ConnectionLimitContract{ 1 }; });
            slotConfiguration.m_contractDescs.emplace_back([]() { return aznew RestrictedNodeContract{}; });
            slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
    // Disconnect
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Disconnect";
        slotConfiguration.m_toolTip = "Disconnect current AZ Event from this AZ Event Handler.";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
    // On Connected
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "On Connected";
        slotConfiguration.m_toolTip = "Signaled when a connection has taken place.";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        AddSlot(slotConfiguration);
    }
    // On Disconnected
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "On Disconnected";
        slotConfiguration.m_toolTip = "Signaled when this event handler is disconnected.";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        AddSlot(slotConfiguration);
    }
    // OnEvent
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "OnEvent";
        slotConfiguration.m_toolTip = "Triggered when the AZ Event invokes Signal() function.";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        slotConfiguration.m_isLatent = true;
        AddSlot(slotConfiguration);
    }
}


bool ScriptCanvas::Nodes::Core::AzEventHandler::RequiresDynamicSlotOrdering() const
{
    return false;
}


bool ScriptCanvas::Nodes::Core::AzEventHandler::IsDeprecated() const
{
    return false;
}


void ScriptCanvas::Nodes::Core::AzEventHandler::Reflect(AZ::ReflectContext* context)
{
    static_assert((std::is_base_of<ScriptCanvas::Node, ScriptCanvas::Node>::value), "Script Canvas nodes require the first base class to be derived from ScriptCanvas::Node");

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<ScriptCanvas::Nodes::Core::AzEventHandler, ScriptCanvas::Node>()
            ->Version(0)
            ->Field("m_azEventEntry", &AzEventHandler::m_azEventEntry)
        ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<ScriptCanvas::Nodes::Core::AzEventHandler>("AZ Event Handler", "Handler for an AZ::Event returned from a BehaviorContent method.")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                    ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                    ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ->Attribute(AZ::Edit::Attributes::Icon, "Icons/ScriptCanvas/AzEvent.png")
                    ->Attribute(AZ::Script::Attributes::ExcludeFrom, AZ::Script::Attributes::ExcludeFlags::All)
            ;
        }
    }
}



