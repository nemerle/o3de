/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/AutoGen/ScriptCanvasNodeable_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/Internal/Nodeables/BaseTimer.ScriptCanvasNodeable.xml
 */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This code was produced with AzAutoGen, any modifications made will not be preserved.
// If you need to modify this code see:
//
// Gems\ScriptCanvas\Code\Include\ScriptCanvas\AutoGen\ScriptCanvasNodeable_Source.jinja
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <AzCore/Asset/AssetSerializer.h>
#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/Serialization/AZStdContainers.inl>
#include <AzCore/RTTI/BehaviorContext.h>
#include <AzCore/RTTI/AzStdOnDemandReflection.inl>
#include <ScriptCanvas/Core/Contracts.h>
#include <ScriptCanvas/Core/NodeableNode.h>
#include <ScriptCanvas/Core/SlotExecutionMap.h>
#include <ScriptCanvas/Grammar/ParsingUtilities.h>
#include <ScriptCanvas/Utils/VersionConverters.h>


#include <Include/ScriptCanvas/Internal/Nodeables/BaseTimer.h>











// ExecutionOuts begin

 size_t ScriptCanvas::Nodeables::Time::BaseTimer::GetRequiredOutCount() const { return 0; }// ExecutionOuts end




void ScriptCanvas::Nodeables::Time::BaseTimer::Reflect(AZ::ReflectContext* context)
{
    using namespace ScriptCanvas;

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
   serializeContext->Class<BaseTimer, ScriptCanvas::Nodeable>()

            ->Field("m_timeUnits", &BaseTimer::m_timeUnits)
            ->Field("m_tickOrder", &BaseTimer::m_tickOrder)
        ;


        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
   editContext->Class<ScriptCanvas::Nodeables::Time::BaseTimer>("BaseTimer", "Provides a basic interaciton layer for all time based nodes for users(handles swapping between ticks and seconds).")
                       ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                       ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                        ->Attribute(AZ::Edit::Attributes::Category, "Utilities")                        ->Attribute(AZ::Edit::Attributes::Icon, "Icons/ScriptCanvas/Placeholder.png")        // m_timeUnits
                        ->DataElement(AZ::Edit::UIHandlers::Default, &BaseTimer::m_timeUnits, "m_timeUnits", "")
                        ->Attribute(AZ::Edit::Attributes::GenericValueList, &BaseTimer::GetTimeUnitList)
                        ->Attribute(AZ::Edit::Attributes::PostChangeNotify, &BaseTimer::OnTimeUnitsChanged)
        // m_tickOrder
                        ->DataElement(AZ::Edit::UIHandlers::Default, &BaseTimer::m_tickOrder, "m_tickOrder", "")
                            ;
            }
        }

    // Behavior Context Reflection
    if (AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(context))
    {
    behaviorContext->Class<BaseTimer>("BaseTimer")
            ->Attribute(AZ::Script::Attributes::ExcludeFrom, AZ::Script::Attributes::ExcludeFlags::List)
            ->Attribute(AZ::Script::Attributes::Scope, AZ::Script::Attributes::ScopeFlags::Common)
        ;
    }
}

ScriptCanvas::NodePropertyInterface* ScriptCanvas::Nodeables::Time::BaseTimer::GetPropertyInterface([[maybe_unused]] AZ::Crc32 propertyId)
{
    return nullptr;
}

////////////////////////////////////////////////////////////////////////////

Nodes::BaseTimerNode::BaseTimerNode()
{
    SetNodeable(AZStd::make_unique<ScriptCanvas::Nodeables::Time::BaseTimer>());
}

void Nodes::BaseTimerNode::Reflect(AZ::ReflectContext* context)
{
    ScriptCanvas::Nodeables::Time::BaseTimer::Reflect(context);

    // Serialization Context Reflection
    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<BaseTimerNode, NodeableNode>()
            ->Version(0)
            ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<BaseTimerNode>("BaseTimer", "Provides a basic interaciton layer for all time based nodes for users(handles swapping between ticks and seconds).")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                ;
        }
    }
}

size_t Nodes::BaseTimerNode::GenerateFingerprint() const
{
    using namespace ScriptCanvas;

    size_t hash = 0;
    
    return hash;
}

void Nodes::BaseTimerNode::ConfigureVisualExtensions()
{
    OnConfigureVisualExtensions();
}

// Configure Slots and Build the Nodeable Execution Maps
void Nodes::BaseTimerNode::ConfigureSlots()
{
    using namespace ScriptCanvas;
    NodeableNode::ConfigureSlots();
    SlotExecution::Ins ins;
    SlotExecution::Outs outs;

    // Generate the execution map
    m_slotExecutionMap = SlotExecution::Map(AZStd::move(ins), AZStd::move(outs));

}




