/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/AutoGen/ScriptCanvasNodeable_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/Libraries/Time/TimeDelayNodeable.ScriptCanvasNodeable.xml
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


#include <Include/ScriptCanvas/Libraries/Time/TimeDelayNodeable.h>











namespace ScriptCanvas
{
    // ExecutionOuts begin
void Nodeables::Time::TimeDelayNodeable::CallDone() {
    ExecutionOut(0); // Done
}

 size_t Nodeables::Time::TimeDelayNodeable::GetRequiredOutCount() const { return 1; }// ExecutionOuts end




void Nodeables::Time::TimeDelayNodeable::Reflect(AZ::ReflectContext* context)
{
    using namespace ScriptCanvas;

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
   serializeContext->Class<TimeDelayNodeable, Nodeables::Time::BaseTimer>()

        ;


        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
   editContext->Class<Nodeables::Time::TimeDelayNodeable>("TimeDelay", "Delays all incoming execution for the specified number of ticks")
                       ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                       ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                        ->Attribute(AZ::Edit::Attributes::Category, "Nodeables")                        ->Attribute(AZ::Edit::Attributes::Icon, "Icons/ScriptCanvas/Placeholder.png")                            ;
            }
        }

    // Behavior Context Reflection
    if (AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(context))
    {
    behaviorContext->Class<TimeDelayNodeable>("TimeDelayNodeable")
            ->Attribute(AZ::Script::Attributes::ExcludeFrom, AZ::Script::Attributes::ExcludeFlags::List)
            ->Attribute(AZ::Script::Attributes::Scope, AZ::Script::Attributes::ScopeFlags::Common)
            // Start
            ->Method(Grammar::ToIdentifier("Start").c_str(), &TimeDelayNodeable::Start)
        ;
    }
}

ScriptCanvas::NodePropertyInterface* Nodeables::Time::TimeDelayNodeable::GetPropertyInterface([[maybe_unused]] AZ::Crc32 propertyId)
{
    if (propertyId == AZ::Crc32("UnitsPropertyId"))
    {
        return &m_timeUnitsInterface;
    }
    return nullptr;
}

////////////////////////////////////////////////////////////////////////////

Nodes::TimeDelayNodeableNode::TimeDelayNodeableNode()
{
    SetNodeable(AZStd::make_unique<Nodeables::Time::TimeDelayNodeable>());
}

void Nodes::TimeDelayNodeableNode::Reflect(AZ::ReflectContext* context)
{
    Nodeables::Time::TimeDelayNodeable::Reflect(context);

    // Serialization Context Reflection
    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<TimeDelayNodeableNode, NodeableNode>()
            ->Version(0)
            ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<TimeDelayNodeableNode>("TimeDelay", "Delays all incoming execution for the specified number of ticks")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                ;
        }
    }
}

size_t Nodes::TimeDelayNodeableNode::GenerateFingerprint() const
{
    using namespace ScriptCanvas;

    size_t hash = 0;
            // Start
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Start"));

                AZStd::hash_combine(hash, azrtti_typeid<Data::NumberType>());
                    // Done
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Done"));

            
    return hash;
}

void Nodes::TimeDelayNodeableNode::ConfigureVisualExtensions()
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
void Nodes::TimeDelayNodeableNode::ConfigureSlots()
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

        
        // Data Slot: Delay (Input)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Delay";
            dataSlotConfiguration.m_toolTip = "The amount of time to delay before the Done is signalled.";
            dataSlotConfiguration.m_displayGroup = "Start";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
            dataSlotConfiguration.SetDefaultValue<Data::NumberType>(0.0);
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            in.inputs.push_back(slotId);
        }
        // Data Slot: Delay...


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
    // Latent out
    {
        SlotExecution::Out out;
        // ExecutionOutput - Done
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationOutput; 
        slotConfigurationOutput.m_name = "Done";
        slotConfigurationOutput.m_toolTip = "Signaled after waiting for the specified amount of times.";
        slotConfigurationOutput.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        slotConfigurationOutput.m_displayGroup = "Done";
        slotConfigurationOutput.m_isLatent = true;


        SlotId slotIdDoneOutput = AddSlot(slotConfigurationOutput);
        AZ_Assert(slotIdDoneOutput.IsValid(), "ExecutionOutput slot: Done was not created successfully.");

        out.slotId = slotIdDoneOutput;
        out.name = "Done";
        outs.push_back(out);
    }


    // Generate the execution map
    m_slotExecutionMap = SlotExecution::Map(AZStd::move(ins), AZStd::move(outs));

}


}


