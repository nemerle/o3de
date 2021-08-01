/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/AutoGen/ScriptCanvasGrammar_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/Internal/Nodes/BaseTimerNode.ScriptCanvasGrammar.xml
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

#include "Include/ScriptCanvas/Internal/Nodes/BaseTimerNode.h"

void ScriptCanvas::Nodes::Internal::BaseTimerNode::ConfigureSlots()
{
    ScriptCanvas::Node::ConfigureSlots();

}


bool ScriptCanvas::Nodes::Internal::BaseTimerNode::RequiresDynamicSlotOrdering() const
{
    return false;
}


bool ScriptCanvas::Nodes::Internal::BaseTimerNode::IsDeprecated() const
{
    return false;
}


void ScriptCanvas::Nodes::Internal::BaseTimerNode::Reflect(AZ::ReflectContext* context)
{
    static_assert((std::is_base_of<ScriptCanvas::Node, ScriptCanvas::Node>::value), "Script Canvas nodes require the first base class to be derived from ScriptCanvas::Node");

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<ScriptCanvas::Nodes::Internal::BaseTimerNode, ScriptCanvas::Node>()
            ->Version(0)
            ->Field("m_timeUnits", &BaseTimerNode::m_timeUnits)
            ->Field("m_tickOrder", &BaseTimerNode::m_tickOrder)
        ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<ScriptCanvas::Nodes::Internal::BaseTimerNode>("BaseTimerNode", "Provides a basic interaction layer for all time based nodes for users(handles swapping between ticks and seconds).")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                    ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                    ->Attribute(AZ::Edit::Attributes::Category, "Utilities")
                    ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ->Attribute(AZ::Edit::Attributes::Icon, "Icons/ScriptCanvas/Placeholder.png")
                ->DataElement(AZ::Edit::UIHandlers::ComboBox, &BaseTimerNode::m_timeUnits, "m_timeUnits", "")
                    ->Attribute(AZ::Edit::Attributes::GenericValueList, &BaseTimerNode::GetTimeUnitList)
                    ->Attribute(AZ::Edit::Attributes::PostChangeNotify, &BaseTimerNode::OnTimeUnitsChanged)
                ->DataElement(AZ::Edit::UIHandlers::Default, &BaseTimerNode::m_tickOrder, "m_tickOrder", "")
            ;
        }
    }
}



