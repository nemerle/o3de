/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/AutoGen/ScriptCanvasNodeable_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/Libraries/Time/HeartBeatNodeable.ScriptCanvasNodeable.xml
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


#include <Include/ScriptCanvas/Libraries/Time/HeartBeatNodeable.h>











namespace ScriptCanvas
{
    // ExecutionOuts begin
void Nodeables::Time::HeartBeatNodeable::CallPulse() {
    ExecutionOut(0); // Pulse
}

 size_t Nodeables::Time::HeartBeatNodeable::GetRequiredOutCount() const { return 1; }// ExecutionOuts end




void Nodeables::Time::HeartBeatNodeable::Reflect(AZ::ReflectContext* context)
{
    using namespace ScriptCanvas;

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
   serializeContext->Class<HeartBeatNodeable, Nodeables::Time::BaseTimer>()

        ;


        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
   editContext->Class<Nodeables::Time::HeartBeatNodeable>("HeartBeat", "While active, will signal the output at the given interval.")
                       ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                       ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                        ->Attribute(AZ::Edit::Attributes::Category, "Timing")                        ->Attribute(AZ::Edit::Attributes::Icon, "Icons/ScriptCanvas/Placeholder.png")                            ;
            }
        }

    // Behavior Context Reflection
    if (AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(context))
    {
    behaviorContext->Class<HeartBeatNodeable>("HeartBeatNodeable")
            ->Attribute(AZ::Script::Attributes::ExcludeFrom, AZ::Script::Attributes::ExcludeFlags::List)
            ->Attribute(AZ::Script::Attributes::Scope, AZ::Script::Attributes::ScopeFlags::Common)
            // Start
            ->Method(Grammar::ToIdentifier("Start").c_str(), &HeartBeatNodeable::Start)
            // Stop
            ->Method(Grammar::ToIdentifier("Stop").c_str(), &HeartBeatNodeable::Stop)
        ;
    }
}

ScriptCanvas::NodePropertyInterface* Nodeables::Time::HeartBeatNodeable::GetPropertyInterface([[maybe_unused]] AZ::Crc32 propertyId)
{
    if (propertyId == AZ::Crc32("UnitsPropertyId"))
    {
        return &m_timeUnitsInterface;
    }
    return nullptr;
}

////////////////////////////////////////////////////////////////////////////

Nodes::HeartBeatNodeableNode::HeartBeatNodeableNode()
{
    SetNodeable(AZStd::make_unique<Nodeables::Time::HeartBeatNodeable>());
}

void Nodes::HeartBeatNodeableNode::Reflect(AZ::ReflectContext* context)
{
    Nodeables::Time::HeartBeatNodeable::Reflect(context);

    // Serialization Context Reflection
    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<HeartBeatNodeableNode, NodeableNode>()
            ->Version(0)
            ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<HeartBeatNodeableNode>("HeartBeat", "While active, will signal the output at the given interval.")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                ;
        }
    }
}

size_t Nodes::HeartBeatNodeableNode::GenerateFingerprint() const
{
    using namespace ScriptCanvas;

    size_t hash = 0;
            // Start
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Start"));

                AZStd::hash_combine(hash, azrtti_typeid<Data::NumberType>());
                    // Stop
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Stop"));

                    // Pulse
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Pulse"));

            
    return hash;
}

void Nodes::HeartBeatNodeableNode::ConfigureVisualExtensions()
{
    {
        VisualExtensionSlotConfiguration visualExtensions(VisualExtensionSlotConfiguration::VisualExtensionType::PropertySlot);

        visualExtensions.m_name = "Units";
        visualExtensions.m_tooltip = "Units to represent the time in.";
        visualExtensions.m_connectionType = ConnectionType::Input;
        visualExtensions.m_identifier = AZ::Crc32("UnitsPropertyId");

        RegisterExtension(visualExtensions);
    }
    OnConfigureVisualExtensions();
}

// Configure Slots and Build the Nodeable Execution Maps
void Nodes::HeartBeatNodeableNode::ConfigureSlots()
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
        slotConfigurationInput.m_toolTip = "";
        slotConfigurationInput.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfigurationInput.m_displayGroup = "Start";


        SlotId slotIdStartInput = AddSlot(slotConfigurationInput);
        AZ_Assert(slotIdStartInput.IsValid(), "ExecutionInput slot: Start was not created successfully.");

        in.slotId = slotIdStartInput;

        
        // Data Slot: Interval (Input)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Interval";
            dataSlotConfiguration.m_toolTip = "The amount of time between pulses";
            dataSlotConfiguration.m_displayGroup = "Start";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
            dataSlotConfiguration.SetDefaultValue<Data::NumberType>(0.0);
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            in.inputs.push_back(slotId);
        }
        // Data Slot: Interval...


        { // execution outs begin
// NO branches were found, at the default
            SlotExecution::Out out;
            ScriptCanvas::ExecutionSlotConfiguration outSlotConfiguration;
            outSlotConfiguration.m_name = "On Start";
            outSlotConfiguration.m_toolTip = "";
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
        slotConfigurationInput.m_toolTip = "";
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
            outSlotConfiguration.m_toolTip = "";
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
        // ExecutionOutput - Pulse
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationOutput; 
        slotConfigurationOutput.m_name = "Pulse";
        slotConfigurationOutput.m_toolTip = "Signaled at each specified interval.";
        slotConfigurationOutput.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        slotConfigurationOutput.m_displayGroup = "Pulse";
        slotConfigurationOutput.m_isLatent = true;


        SlotId slotIdPulseOutput = AddSlot(slotConfigurationOutput);
        AZ_Assert(slotIdPulseOutput.IsValid(), "ExecutionOutput slot: Pulse was not created successfully.");

        out.slotId = slotIdPulseOutput;
        out.name = "Pulse";
        outs.push_back(out);
    }


    // Generate the execution map
    m_slotExecutionMap = SlotExecution::Map(AZStd::move(ins), AZStd::move(outs));

}


}


