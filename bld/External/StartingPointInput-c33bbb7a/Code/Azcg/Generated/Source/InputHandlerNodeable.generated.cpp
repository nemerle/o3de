/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/AutoGen/ScriptCanvasNodeable_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/StartingPointInput/Code/Source/InputHandlerNodeable.ScriptCanvasNodeable.xml
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


#include <Source/InputHandlerNodeable.h>











namespace StartingPointInput
{
            // ExecutionOuts begin
void StartingPointInput::InputHandlerNodeable::CallPressed([[maybe_unused]] float value) {
    ExecutionOut(0, value); // Pressed
}
void StartingPointInput::InputHandlerNodeable::CallHeld([[maybe_unused]] float value) {
    ExecutionOut(1, value); // Held
}
void StartingPointInput::InputHandlerNodeable::CallReleased([[maybe_unused]] float value) {
    ExecutionOut(2, value); // Released
}

 size_t StartingPointInput::InputHandlerNodeable::GetRequiredOutCount() const { return 3; }// ExecutionOuts end




void StartingPointInput::InputHandlerNodeable::Reflect(AZ::ReflectContext* context)
{
    using namespace ScriptCanvas;

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
   serializeContext->Class<InputHandlerNodeable, ScriptCanvas::Nodeable>()

        ;


        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
   editContext->Class<StartingPointInput::InputHandlerNodeable>("InputHandler", "Handle processed input events found in input binding assets")
                       ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                       ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                        ->Attribute(AZ::Edit::Attributes::Icon, "Icons/ScriptCanvas/Bus.png")                            ;
            }
        }

    // Behavior Context Reflection
    if (AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(context))
    {
    behaviorContext->Class<InputHandlerNodeable>("InputHandlerNodeable")
            ->Attribute(AZ::Script::Attributes::ExcludeFrom, AZ::Script::Attributes::ExcludeFlags::List)
            ->Attribute(AZ::Script::Attributes::Scope, AZ::Script::Attributes::ScopeFlags::Common)
            // Connect Event
            ->Method(Grammar::ToIdentifier("Connect Event").c_str(), &InputHandlerNodeable::ConnectEvent)
        ;
    }
}

ScriptCanvas::NodePropertyInterface* StartingPointInput::InputHandlerNodeable::GetPropertyInterface([[maybe_unused]] AZ::Crc32 propertyId)
{
    return nullptr;
}

////////////////////////////////////////////////////////////////////////////

Nodes::InputHandlerNodeableNode::InputHandlerNodeableNode()
{
    SetNodeable(AZStd::make_unique<StartingPointInput::InputHandlerNodeable>());
}

void Nodes::InputHandlerNodeableNode::Reflect(AZ::ReflectContext* context)
{
    StartingPointInput::InputHandlerNodeable::Reflect(context);

    // Serialization Context Reflection
    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<InputHandlerNodeableNode, NodeableNode>()
            ->Version(0)
            ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<InputHandlerNodeableNode>("InputHandler", "Handle processed input events found in input binding assets")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                ;
        }
    }
}

size_t Nodes::InputHandlerNodeableNode::GenerateFingerprint() const
{
    using namespace ScriptCanvas;

    size_t hash = 0;
            // Connect Event
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Connect Event"));

                AZStd::hash_combine(hash, azrtti_typeid<AZStd::string>());
                    // Pressed
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Pressed"));

                AZStd::hash_combine(hash, azrtti_typeid<float>());
                    // Held
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Held"));

                AZStd::hash_combine(hash, azrtti_typeid<float>());
                    // Released
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Released"));

                AZStd::hash_combine(hash, azrtti_typeid<float>());
            
    return hash;
}

void Nodes::InputHandlerNodeableNode::ConfigureVisualExtensions()
{
    OnConfigureVisualExtensions();
}

// Configure Slots and Build the Nodeable Execution Maps
void Nodes::InputHandlerNodeableNode::ConfigureSlots()
{
    using namespace ScriptCanvas;
    NodeableNode::ConfigureSlots();
    SlotExecution::Ins ins;
    SlotExecution::Outs outs;    // execution in begin
    {
        SlotExecution::In in;

        // ExecutionInput - Connect Event
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationInput; 
        slotConfigurationInput.m_name = "Connect Event";
        slotConfigurationInput.m_toolTip = "Connect to input event name as defined in an input binding asset.";
        slotConfigurationInput.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfigurationInput.m_displayGroup = "Connect Event";


        SlotId slotIdConnectEventInput = AddSlot(slotConfigurationInput);
        AZ_Assert(slotIdConnectEventInput.IsValid(), "ExecutionInput slot: Connect Event was not created successfully.");

        in.slotId = slotIdConnectEventInput;

        
        // Data Slot: Event Name (Input)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Event Name";
            dataSlotConfiguration.m_toolTip = "Event name as defined in an input binding asset.  Example 'Fireball'.";
            dataSlotConfiguration.m_displayGroup = "Connect Event";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
            dataSlotConfiguration.SetAZType<AZStd::string>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            in.inputs.push_back(slotId);
        }
        // Data Slot: Event Name...


        { // execution outs begin
// NO branches were found, at the default
            SlotExecution::Out out;
            ScriptCanvas::ExecutionSlotConfiguration outSlotConfiguration;
            outSlotConfiguration.m_name = "On Connect Event";
            outSlotConfiguration.m_toolTip = "Connect to input event name as defined in an input binding asset.";
            outSlotConfiguration.m_displayGroup = "Connect Event";
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
        // ExecutionOutput - Pressed
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationOutput; 
        slotConfigurationOutput.m_name = "Pressed";
        slotConfigurationOutput.m_toolTip = "Signaled when the input event begins.";
        slotConfigurationOutput.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        slotConfigurationOutput.m_displayGroup = "Pressed";
        slotConfigurationOutput.m_isLatent = true;


        SlotId slotIdPressedOutput = AddSlot(slotConfigurationOutput);
        AZ_Assert(slotIdPressedOutput.IsValid(), "ExecutionOutput slot: Pressed was not created successfully.");

        out.slotId = slotIdPressedOutput;
        out.name = "Pressed";

        // Data Slot: value (Output)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "value";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Pressed";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            dataSlotConfiguration.SetAZType<float>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            out.outputs.push_back(slotId);
        }
        // Data Slot: value...


        outs.push_back(out);
    }
    // Latent out
    {
        SlotExecution::Out out;
        // ExecutionOutput - Held
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationOutput; 
        slotConfigurationOutput.m_name = "Held";
        slotConfigurationOutput.m_toolTip = "Signaled while the input event is active.";
        slotConfigurationOutput.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        slotConfigurationOutput.m_displayGroup = "Held";
        slotConfigurationOutput.m_isLatent = true;


        SlotId slotIdHeldOutput = AddSlot(slotConfigurationOutput);
        AZ_Assert(slotIdHeldOutput.IsValid(), "ExecutionOutput slot: Held was not created successfully.");

        out.slotId = slotIdHeldOutput;
        out.name = "Held";

        // Data Slot: value (Output)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "value";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Held";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            dataSlotConfiguration.SetAZType<float>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            out.outputs.push_back(slotId);
        }
        // Data Slot: value...


        outs.push_back(out);
    }
    // Latent out
    {
        SlotExecution::Out out;
        // ExecutionOutput - Released
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationOutput; 
        slotConfigurationOutput.m_name = "Released";
        slotConfigurationOutput.m_toolTip = "Signaled when the input event ends.";
        slotConfigurationOutput.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        slotConfigurationOutput.m_displayGroup = "Released";
        slotConfigurationOutput.m_isLatent = true;


        SlotId slotIdReleasedOutput = AddSlot(slotConfigurationOutput);
        AZ_Assert(slotIdReleasedOutput.IsValid(), "ExecutionOutput slot: Released was not created successfully.");

        out.slotId = slotIdReleasedOutput;
        out.name = "Released";

        // Data Slot: value (Output)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "value";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Released";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            dataSlotConfiguration.SetAZType<float>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            out.outputs.push_back(slotId);
        }
        // Data Slot: value...


        outs.push_back(out);
    }


    // Generate the execution map
    m_slotExecutionMap = SlotExecution::Map(AZStd::move(ins), AZStd::move(outs));

}


}


