/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/AutoGen/ScriptCanvasNodeable_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/Libraries/Time/TimerNodeable.ScriptCanvasNodeable.xml
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


#include <Include/ScriptCanvas/Libraries/Time/TimerNodeable.h>











namespace ScriptCanvas
{
    // ExecutionOuts begin
void Nodeables::Time::TimerNodeable::CallOnTick([[maybe_unused]] Data::NumberType Milliseconds,[[maybe_unused]] Data::NumberType Seconds) {
    ExecutionOut(0, Milliseconds, Seconds); // On Tick
}

 size_t Nodeables::Time::TimerNodeable::GetRequiredOutCount() const { return 1; }// ExecutionOuts end




void Nodeables::Time::TimerNodeable::Reflect(AZ::ReflectContext* context)
{
    using namespace ScriptCanvas;

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
   serializeContext->Class<TimerNodeable, ScriptCanvas::Nodeable>()

        ;


        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
   editContext->Class<Nodeables::Time::TimerNodeable>("Timer", "While active, will signal the output at the given interval.")
                       ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                       ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                        ->Attribute(AZ::Edit::Attributes::Category, "Timing")                        ->Attribute(AZ::Edit::Attributes::Icon, "Icons/ScriptCanvas/Placeholder.png")                            ;
            }
        }

    // Behavior Context Reflection
    if (AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(context))
    {
    behaviorContext->Class<TimerNodeable>("TimerNodeable")
            ->Attribute(AZ::Script::Attributes::ExcludeFrom, AZ::Script::Attributes::ExcludeFlags::List)
            ->Attribute(AZ::Script::Attributes::Scope, AZ::Script::Attributes::ScopeFlags::Common)
            // Start
            ->Method(Grammar::ToIdentifier("Start").c_str(), &TimerNodeable::Start)
            // Stop
            ->Method(Grammar::ToIdentifier("Stop").c_str(), &TimerNodeable::Stop)
        ;
    }
}

ScriptCanvas::NodePropertyInterface* Nodeables::Time::TimerNodeable::GetPropertyInterface([[maybe_unused]] AZ::Crc32 propertyId)
{
    return nullptr;
}

////////////////////////////////////////////////////////////////////////////

Nodes::TimerNodeableNode::TimerNodeableNode()
{
    SetNodeable(AZStd::make_unique<Nodeables::Time::TimerNodeable>());
}

void Nodes::TimerNodeableNode::Reflect(AZ::ReflectContext* context)
{
    Nodeables::Time::TimerNodeable::Reflect(context);

    // Serialization Context Reflection
    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<TimerNodeableNode, NodeableNode>()
            ->Version(0)
            ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<TimerNodeableNode>("Timer", "While active, will signal the output at the given interval.")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                ;
        }
    }
}

size_t Nodes::TimerNodeableNode::GenerateFingerprint() const
{
    using namespace ScriptCanvas;

    size_t hash = 0;
            // Start
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Start"));

                    // Stop
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Stop"));

                    // On Tick
                AZStd::hash_combine(hash, Grammar::ToIdentifier("On Tick"));

                AZStd::hash_combine(hash, azrtti_typeid<Data::NumberType>());
                AZStd::hash_combine(hash, azrtti_typeid<Data::NumberType>());
            
    return hash;
}

void Nodes::TimerNodeableNode::ConfigureVisualExtensions()
{
    OnConfigureVisualExtensions();
}

// Configure Slots and Build the Nodeable Execution Maps
void Nodes::TimerNodeableNode::ConfigureSlots()
{
    using namespace ScriptCanvas;
    NodeableNode::ConfigureSlots();
    SlotExecution::Ins ins;
    SlotExecution::Outs outs;    // execution in begin
    {
        SlotExecution::In in;

        // ExecutionInput - Start
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationInput; 
        slotConfigurationInput.m_name = "Start";
        slotConfigurationInput.m_toolTip = "Starts the timer";
        slotConfigurationInput.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfigurationInput.m_displayGroup = "Start";


        SlotId slotIdStartInput = AddSlot(slotConfigurationInput);
        AZ_Assert(slotIdStartInput.IsValid(), "ExecutionInput slot: Start was not created successfully.");

        in.slotId = slotIdStartInput;

        { // execution outs begin
// NO branches were found, at the default
            SlotExecution::Out out;
            ScriptCanvas::ExecutionSlotConfiguration outSlotConfiguration;
            outSlotConfiguration.m_name = "On Start";
            outSlotConfiguration.m_toolTip = "Starts the timer";
            outSlotConfiguration.m_displayGroup = "Start";
            outSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            outSlotConfiguration.m_isLatent = false;
            out.name = outSlotConfiguration.m_name;
            SlotId outSlotId = AddSlot(outSlotConfiguration);
            AZ_Assert(outSlotId.IsValid(), "ExecutionOutput slot is not created successfully.");
            out.slotId = outSlotId;
            in.outs.push_back(out);
        } // execution outs end
        ins.push_back(in);
    } // execution in end
    // execution in begin
    {
        SlotExecution::In in;

        // ExecutionInput - Stop
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationInput; 
        slotConfigurationInput.m_name = "Stop";
        slotConfigurationInput.m_toolTip = "Stops the timer";
        slotConfigurationInput.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfigurationInput.m_displayGroup = "Stop";


        SlotId slotIdStopInput = AddSlot(slotConfigurationInput);
        AZ_Assert(slotIdStopInput.IsValid(), "ExecutionInput slot: Stop was not created successfully.");

        in.slotId = slotIdStopInput;

        { // execution outs begin
// NO branches were found, at the default
            SlotExecution::Out out;
            ScriptCanvas::ExecutionSlotConfiguration outSlotConfiguration;
            outSlotConfiguration.m_name = "On Stop";
            outSlotConfiguration.m_toolTip = "Stops the timer";
            outSlotConfiguration.m_displayGroup = "Stop";
            outSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            outSlotConfiguration.m_isLatent = false;
            out.name = outSlotConfiguration.m_name;
            SlotId outSlotId = AddSlot(outSlotConfiguration);
            AZ_Assert(outSlotId.IsValid(), "ExecutionOutput slot is not created successfully.");
            out.slotId = outSlotId;
            in.outs.push_back(out);
        } // execution outs end
        ins.push_back(in);
    } // execution in end
    // Latent out
    {
        SlotExecution::Out out;
        // ExecutionOutput - On Tick
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationOutput; 
        slotConfigurationOutput.m_name = "On Tick";
        slotConfigurationOutput.m_toolTip = "Signaled at each tick while the timer is in operation.";
        slotConfigurationOutput.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        slotConfigurationOutput.m_displayGroup = "On Tick";
        slotConfigurationOutput.m_isLatent = true;


        SlotId slotIdOnTickOutput = AddSlot(slotConfigurationOutput);
        AZ_Assert(slotIdOnTickOutput.IsValid(), "ExecutionOutput slot: On Tick was not created successfully.");

        out.slotId = slotIdOnTickOutput;
        out.name = "On Tick";

        // Data Slot: Milliseconds (Output)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Milliseconds";
            dataSlotConfiguration.m_toolTip = "The amount of time that has elapsed since the timer started in milliseconds.";
            dataSlotConfiguration.m_displayGroup = "On Tick";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            dataSlotConfiguration.SetAZType<Data::NumberType>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            out.outputs.push_back(slotId);
        }
        // Data Slot: Milliseconds...



        // Data Slot: Seconds (Output)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Seconds";
            dataSlotConfiguration.m_toolTip = "The amount of time that has elapsed since the timer started in seconds.";
            dataSlotConfiguration.m_displayGroup = "On Tick";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            dataSlotConfiguration.SetAZType<Data::NumberType>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            out.outputs.push_back(slotId);
        }
        // Data Slot: Seconds...


        outs.push_back(out);
    }


    // Generate the execution map
    m_slotExecutionMap = SlotExecution::Map(AZStd::move(ins), AZStd::move(outs));

}


}


