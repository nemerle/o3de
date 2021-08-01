/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/AutoGen/ScriptCanvasNodeable_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/Libraries/Time/DelayNodeable.ScriptCanvasNodeable.xml
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


#include <Include/ScriptCanvas/Libraries/Time/DelayNodeable.h>











namespace ScriptCanvas
{
    // ExecutionOuts begin
void ScriptCanvas::Nodeables::Time::DelayNodeable::CallDone([[maybe_unused]] Data::NumberType Elapsed) {
    ExecutionOut(0, Elapsed); // Done
}

 size_t ScriptCanvas::Nodeables::Time::DelayNodeable::GetRequiredOutCount() const { return 1; }// ExecutionOuts end




void ScriptCanvas::Nodeables::Time::DelayNodeable::Reflect(AZ::ReflectContext* context)
{
    using namespace ScriptCanvas;

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
   serializeContext->Class<DelayNodeable, ScriptCanvas::Nodeable>()

        ;


        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
   editContext->Class<ScriptCanvas::Nodeables::Time::DelayNodeable>("Delay", "While active, will signal the output at the given interval.")
                       ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                       ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                        ->Attribute(AZ::Edit::Attributes::Category, "Timing")                            ;
            }
        }

    // Behavior Context Reflection
    if (AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(context))
    {
    behaviorContext->Class<DelayNodeable>("DelayNodeable")
            ->Attribute(AZ::Script::Attributes::ExcludeFrom, AZ::Script::Attributes::ExcludeFlags::List)
            ->Attribute(AZ::Script::Attributes::Scope, AZ::Script::Attributes::ScopeFlags::Common)
            // Start
            ->Method(Grammar::ToIdentifier("Start").c_str(), &DelayNodeable::Start)
            // Reset
            ->Method(Grammar::ToIdentifier("Reset").c_str(), &DelayNodeable::Reset)
            // Cancel
            ->Method(Grammar::ToIdentifier("Cancel").c_str(), &DelayNodeable::Cancel)
        ;
    }
}

ScriptCanvas::NodePropertyInterface* ScriptCanvas::Nodeables::Time::DelayNodeable::GetPropertyInterface([[maybe_unused]] AZ::Crc32 propertyId)
{
    return nullptr;
}

////////////////////////////////////////////////////////////////////////////

Nodes::DelayNodeableNode::DelayNodeableNode()
{
    SetNodeable(AZStd::make_unique<ScriptCanvas::Nodeables::Time::DelayNodeable>());
}

void Nodes::DelayNodeableNode::Reflect(AZ::ReflectContext* context)
{
    ScriptCanvas::Nodeables::Time::DelayNodeable::Reflect(context);

    // Serialization Context Reflection
    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<DelayNodeableNode, NodeableNode>()
            ->Version(0)
            ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<DelayNodeableNode>("Delay", "While active, will signal the output at the given interval.")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                ;
        }
    }
}

size_t Nodes::DelayNodeableNode::GenerateFingerprint() const
{
    using namespace ScriptCanvas;

    size_t hash = 0;
            // Start
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Start"));

                AZStd::hash_combine(hash, azrtti_typeid<Data::NumberType>());
                AZStd::hash_combine(hash, azrtti_typeid<Data::BooleanType>());
                AZStd::hash_combine(hash, azrtti_typeid<Data::NumberType>());
                    // Reset
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Reset"));

                AZStd::hash_combine(hash, azrtti_typeid<Data::NumberType>());
                AZStd::hash_combine(hash, azrtti_typeid<Data::BooleanType>());
                AZStd::hash_combine(hash, azrtti_typeid<Data::NumberType>());
                    // Cancel
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Cancel"));

                    // Done
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Done"));

                AZStd::hash_combine(hash, azrtti_typeid<Data::NumberType>());
            
    return hash;
}

void Nodes::DelayNodeableNode::ConfigureVisualExtensions()
{
    OnConfigureVisualExtensions();
}

// Configure Slots and Build the Nodeable Execution Maps
void Nodes::DelayNodeableNode::ConfigureSlots()
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
        slotConfigurationInput.m_toolTip = "When signaled, execution is delayed at this node according to the specified properties.";
        slotConfigurationInput.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfigurationInput.m_displayGroup = "Start";


        SlotId slotIdStartInput = AddSlot(slotConfigurationInput);
        AZ_Assert(slotIdStartInput.IsValid(), "ExecutionInput slot: Start was not created successfully.");

        in.slotId = slotIdStartInput;

        
        // Data Slot: Start: Time (Input)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Start: Time";
            dataSlotConfiguration.m_toolTip = "Amount of time to delay, in seconds.";
            dataSlotConfiguration.m_displayGroup = "Start";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
            dataSlotConfiguration.SetDefaultValue<Data::NumberType>(0.0);
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            in.inputs.push_back(slotId);
        }
        // Data Slot: Start: Time...


        
        // Data Slot: Start: Loop (Input)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Start: Loop";
            dataSlotConfiguration.m_toolTip = "If true, the delay will restart after triggering the Out slot.";
            dataSlotConfiguration.m_displayGroup = "Start";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
            dataSlotConfiguration.SetDefaultValue<Data::BooleanType>(false);
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            in.inputs.push_back(slotId);
        }
        // Data Slot: Start: Loop...


        
        // Data Slot: Start: Hold (Input)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Start: Hold";
            dataSlotConfiguration.m_toolTip = "Amount of time to wait before restarting, in seconds.";
            dataSlotConfiguration.m_displayGroup = "Start";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
            dataSlotConfiguration.SetDefaultValue<Data::NumberType>(0.0);
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            in.inputs.push_back(slotId);
        }
        // Data Slot: Start: Hold...


        { // execution outs begin
// NO branches were found, at the default
            SlotExecution::Out out;
            ScriptCanvas::ExecutionSlotConfiguration outSlotConfiguration;
            outSlotConfiguration.m_name = "On Start";
            outSlotConfiguration.m_toolTip = "When signaled, execution is delayed at this node according to the specified properties.";
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

        // ExecutionInput - Reset
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationInput; 
        slotConfigurationInput.m_name = "Reset";
        slotConfigurationInput.m_toolTip = "When signaled, execution is delayed at this node according to the specified properties.";
        slotConfigurationInput.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfigurationInput.m_displayGroup = "Reset";


        SlotId slotIdResetInput = AddSlot(slotConfigurationInput);
        AZ_Assert(slotIdResetInput.IsValid(), "ExecutionInput slot: Reset was not created successfully.");

        in.slotId = slotIdResetInput;

        
        // Data Slot: Reset: Time (Input)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Reset: Time";
            dataSlotConfiguration.m_toolTip = "Amount of time to delay, in seconds.";
            dataSlotConfiguration.m_displayGroup = "Reset";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
            dataSlotConfiguration.SetDefaultValue<Data::NumberType>(0.0);
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            in.inputs.push_back(slotId);
        }
        // Data Slot: Reset: Time...


        
        // Data Slot: Reset: Loop (Input)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Reset: Loop";
            dataSlotConfiguration.m_toolTip = "If true, the delay will restart after triggering the Out slot.";
            dataSlotConfiguration.m_displayGroup = "Reset";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
            dataSlotConfiguration.SetDefaultValue<Data::BooleanType>(false);
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            in.inputs.push_back(slotId);
        }
        // Data Slot: Reset: Loop...


        
        // Data Slot: Reset: Hold (Input)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Reset: Hold";
            dataSlotConfiguration.m_toolTip = "Amount of time to wait before restarting, in seconds.";
            dataSlotConfiguration.m_displayGroup = "Reset";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
            dataSlotConfiguration.SetDefaultValue<Data::NumberType>(0.0);
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            in.inputs.push_back(slotId);
        }
        // Data Slot: Reset: Hold...


        { // execution outs begin
// NO branches were found, at the default
            SlotExecution::Out out;
            ScriptCanvas::ExecutionSlotConfiguration outSlotConfiguration;
            outSlotConfiguration.m_name = "On Reset";
            outSlotConfiguration.m_toolTip = "When signaled, execution is delayed at this node according to the specified properties.";
            outSlotConfiguration.m_displayGroup = "Reset";
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

        // ExecutionInput - Cancel
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationInput; 
        slotConfigurationInput.m_name = "Cancel";
        slotConfigurationInput.m_toolTip = "Cancels the current delay.";
        slotConfigurationInput.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfigurationInput.m_displayGroup = "Cancel";


        SlotId slotIdCancelInput = AddSlot(slotConfigurationInput);
        AZ_Assert(slotIdCancelInput.IsValid(), "ExecutionInput slot: Cancel was not created successfully.");

        in.slotId = slotIdCancelInput;

        { // execution outs begin
// NO branches were found, at the default
            SlotExecution::Out out;
            ScriptCanvas::ExecutionSlotConfiguration outSlotConfiguration;
            outSlotConfiguration.m_name = "On Cancel";
            outSlotConfiguration.m_toolTip = "Cancels the current delay.";
            outSlotConfiguration.m_displayGroup = "Cancel";
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
        // ExecutionOutput - Done
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationOutput; 
        slotConfigurationOutput.m_name = "Done";
        slotConfigurationOutput.m_toolTip = "Signaled when the delay reaches zero.";
        slotConfigurationOutput.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        slotConfigurationOutput.m_displayGroup = "Done";
        slotConfigurationOutput.m_isLatent = true;


        SlotId slotIdDoneOutput = AddSlot(slotConfigurationOutput);
        AZ_Assert(slotIdDoneOutput.IsValid(), "ExecutionOutput slot: Done was not created successfully.");

        out.slotId = slotIdDoneOutput;
        out.name = "Done";

        // Data Slot: Elapsed (Output)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Elapsed";
            dataSlotConfiguration.m_toolTip = "The amount of time that has elapsed since the delay began.";
            dataSlotConfiguration.m_displayGroup = "Done";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            dataSlotConfiguration.SetAZType<Data::NumberType>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            out.outputs.push_back(slotId);
        }
        // Data Slot: Elapsed...


        outs.push_back(out);
    }


    // Generate the execution map
    m_slotExecutionMap = SlotExecution::Map(AZStd::move(ins), AZStd::move(outs));

}


}


