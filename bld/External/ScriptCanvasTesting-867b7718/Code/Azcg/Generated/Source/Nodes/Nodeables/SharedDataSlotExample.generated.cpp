/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/AutoGen/ScriptCanvasNodeable_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvasTesting/Code/Source/Nodes/Nodeables/SharedDataSlotExample.ScriptCanvasNodeable.xml
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


#include <Source/Nodes/Nodeables/SharedDataSlotExample.h>











// ExecutionOuts begin

 size_t ScriptCanvasTesting::Nodeables::InputMethodSharedDataSlotExample::GetRequiredOutCount() const { return 0; }// ExecutionOuts end




void ScriptCanvasTesting::Nodeables::InputMethodSharedDataSlotExample::Reflect(AZ::ReflectContext* context)
{
    using namespace ScriptCanvas;

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
   serializeContext->Class<InputMethodSharedDataSlotExample, ScriptCanvas::Nodeable>()

        ;


        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
   editContext->Class<ScriptCanvasTesting::Nodeables::InputMethodSharedDataSlotExample>("InputMethodSharedDataSlotExample", "Input Method Shared Data")
                       ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                       ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                        ->Attribute(AZ::Edit::Attributes::Category, "Tests")                        ->Attribute(AZ::Edit::Attributes::Icon, "Icons/ScriptCanvas/Placeholder.png")                            ;
            }
        }

    // Behavior Context Reflection
    if (AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(context))
    {
    behaviorContext->Class<InputMethodSharedDataSlotExample>("InputMethodSharedDataSlotExample")
            ->Attribute(AZ::Script::Attributes::ExcludeFrom, AZ::Script::Attributes::ExcludeFlags::List)
            ->Attribute(AZ::Script::Attributes::Scope, AZ::Script::Attributes::ScopeFlags::Common)
            // Append Hello
            ->Method(Grammar::ToIdentifier("Append Hello").c_str(), &InputMethodSharedDataSlotExample::AppendHello)
            // Concatenate Two
            ->Method(Grammar::ToIdentifier("Concatenate Two").c_str(), &InputMethodSharedDataSlotExample::ConcatenateTwo)
            // Concatenate Three
            ->Method(Grammar::ToIdentifier("Concatenate Three").c_str(), &InputMethodSharedDataSlotExample::ConcatenateThree)
        ;
    }
}

ScriptCanvas::NodePropertyInterface* ScriptCanvasTesting::Nodeables::InputMethodSharedDataSlotExample::GetPropertyInterface([[maybe_unused]] AZ::Crc32 propertyId)
{
    return nullptr;
}

////////////////////////////////////////////////////////////////////////////

Nodes::InputMethodSharedDataSlotExampleNode::InputMethodSharedDataSlotExampleNode()
{
    SetNodeable(AZStd::make_unique<ScriptCanvasTesting::Nodeables::InputMethodSharedDataSlotExample>());
}

void Nodes::InputMethodSharedDataSlotExampleNode::Reflect(AZ::ReflectContext* context)
{
    ScriptCanvasTesting::Nodeables::InputMethodSharedDataSlotExample::Reflect(context);

    // Serialization Context Reflection
    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<InputMethodSharedDataSlotExampleNode, NodeableNode>()
            ->Version(0)
            ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<InputMethodSharedDataSlotExampleNode>("InputMethodSharedDataSlotExample", "Input Method Shared Data")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                ;
        }
    }
}

size_t Nodes::InputMethodSharedDataSlotExampleNode::GenerateFingerprint() const
{
    using namespace ScriptCanvas;

    size_t hash = 0;
            // Append Hello
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Append Hello"));

                AZStd::hash_combine(hash, azrtti_typeid<const ScriptCanvas::Data::StringType&>());
                    // Concatenate Two
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Concatenate Two"));

                AZStd::hash_combine(hash, azrtti_typeid<const ScriptCanvas::Data::StringType&>());
                AZStd::hash_combine(hash, azrtti_typeid<const ScriptCanvas::Data::StringType&>());
                    // Concatenate Three
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Concatenate Three"));

                AZStd::hash_combine(hash, azrtti_typeid<const ScriptCanvas::Data::StringType&>());
                AZStd::hash_combine(hash, azrtti_typeid<const ScriptCanvas::Data::StringType&>());
                AZStd::hash_combine(hash, azrtti_typeid<const ScriptCanvas::Data::StringType&>());
                    // One String
                AZStd::hash_combine(hash, Grammar::ToIdentifier("One String"));

                AZStd::hash_combine(hash, azrtti_typeid<ScriptCanvas::Data::StringType>());
                    // Two Strings
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Two Strings"));

                AZStd::hash_combine(hash, azrtti_typeid<ScriptCanvas::Data::StringType>());
                AZStd::hash_combine(hash, azrtti_typeid<ScriptCanvas::Data::StringType>());
                    // Three Strings
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Three Strings"));

                AZStd::hash_combine(hash, azrtti_typeid<ScriptCanvas::Data::StringType>());
                AZStd::hash_combine(hash, azrtti_typeid<ScriptCanvas::Data::StringType>());
                AZStd::hash_combine(hash, azrtti_typeid<ScriptCanvas::Data::StringType>());
                    // Square
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Square"));

                    // Pants
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Pants"));

                    // Hello
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Hello"));

            
    return hash;
}

void Nodes::InputMethodSharedDataSlotExampleNode::ConfigureVisualExtensions()
{
    OnConfigureVisualExtensions();
}

// Configure Slots and Build the Nodeable Execution Maps
void Nodes::InputMethodSharedDataSlotExampleNode::ConfigureSlots()
{
    using namespace ScriptCanvas;
    NodeableNode::ConfigureSlots();
    SlotExecution::Ins ins;
    SlotExecution::Outs outs;    // execution in begin
    {
        SlotExecution::In in;

        // ExecutionInput - Append Hello
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationInput; 
        slotConfigurationInput.m_name = "Append Hello";
        slotConfigurationInput.m_toolTip = "";
        slotConfigurationInput.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfigurationInput.m_displayGroup = "InputMethodGroup";


        SlotId slotIdAppendHelloInput = AddSlot(slotConfigurationInput);
        AZ_Assert(slotIdAppendHelloInput.IsValid(), "ExecutionInput slot: Append Hello was not created successfully.");

        in.slotId = slotIdAppendHelloInput;

        
        // Data Slot: str (Input)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "str";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Append Hello";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
            dataSlotConfiguration.SetAZType<const ScriptCanvas::Data::StringType&>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            in.inputs.push_back(slotId);
        }
        // Data Slot: str...


        { // execution outs begin
// NO branches were found, at the default
            SlotExecution::Out out;
            ScriptCanvas::ExecutionSlotConfiguration outSlotConfiguration;
            outSlotConfiguration.m_name = "On Append Hello";
            outSlotConfiguration.m_toolTip = "";
            outSlotConfiguration.m_displayGroup = "InputMethodGroup";
            outSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            outSlotConfiguration.m_isLatent = false;
            out.name = outSlotConfiguration.m_name;
            SlotId outSlotId = AddSlot(outSlotConfiguration);
            AZ_Assert(outSlotId.IsValid(), "ExecutionOutput slot is not created successfully.");
            out.slotId = outSlotId;
                
        // Data Slot: Output (Output)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Output";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "InputMethodGroup";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            dataSlotConfiguration.SetAZType<ScriptCanvas::Data::StringType>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            out.outputs.push_back(slotId);
        }
        // Data Slot: Output...


            in.outs.push_back(out);
        } // execution outs end
        ins.push_back(in);
    } // execution in end
    // execution in begin
    {
        SlotExecution::In in;

        // ExecutionInput - Concatenate Two
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationInput; 
        slotConfigurationInput.m_name = "Concatenate Two";
        slotConfigurationInput.m_toolTip = "";
        slotConfigurationInput.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfigurationInput.m_displayGroup = "Concatenate Two";


        SlotId slotIdConcatenateTwoInput = AddSlot(slotConfigurationInput);
        AZ_Assert(slotIdConcatenateTwoInput.IsValid(), "ExecutionInput slot: Concatenate Two was not created successfully.");

        in.slotId = slotIdConcatenateTwoInput;

        
        // Data Slot: a (Input)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "a";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Concatenate Two";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
            dataSlotConfiguration.SetAZType<const ScriptCanvas::Data::StringType&>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            in.inputs.push_back(slotId);
        }
        // Data Slot: a...


        
        // Data Slot: b (Input)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "b";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Concatenate Two";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
            dataSlotConfiguration.SetAZType<const ScriptCanvas::Data::StringType&>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            in.inputs.push_back(slotId);
        }
        // Data Slot: b...


        { // execution outs begin
// NO branches were found, at the default
            SlotExecution::Out out;
            ScriptCanvas::ExecutionSlotConfiguration outSlotConfiguration;
            outSlotConfiguration.m_name = "On Concatenate Two";
            outSlotConfiguration.m_toolTip = "";
            outSlotConfiguration.m_displayGroup = "Concatenate Two";
            outSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            outSlotConfiguration.m_isLatent = false;
            out.name = outSlotConfiguration.m_name;
            SlotId outSlotId = AddSlot(outSlotConfiguration);
            AZ_Assert(outSlotId.IsValid(), "ExecutionOutput slot is not created successfully.");
            out.slotId = outSlotId;
                
        // Data Slot: Output (Output)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Output";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Concatenate Two";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            dataSlotConfiguration.SetAZType<ScriptCanvas::Data::StringType>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            out.outputs.push_back(slotId);
        }
        // Data Slot: Output...


            in.outs.push_back(out);
        } // execution outs end
        ins.push_back(in);
    } // execution in end
    // execution in begin
    {
        SlotExecution::In in;

        // ExecutionInput - Concatenate Three
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationInput; 
        slotConfigurationInput.m_name = "Concatenate Three";
        slotConfigurationInput.m_toolTip = "";
        slotConfigurationInput.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfigurationInput.m_displayGroup = "Concatenate Three";


        SlotId slotIdConcatenateThreeInput = AddSlot(slotConfigurationInput);
        AZ_Assert(slotIdConcatenateThreeInput.IsValid(), "ExecutionInput slot: Concatenate Three was not created successfully.");

        in.slotId = slotIdConcatenateThreeInput;

        
        // Data Slot: a (Input)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "a";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Concatenate Three";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
            dataSlotConfiguration.SetAZType<const ScriptCanvas::Data::StringType&>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            in.inputs.push_back(slotId);
        }
        // Data Slot: a...


        
        // Data Slot: b (Input)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "b";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Concatenate Three";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
            dataSlotConfiguration.SetAZType<const ScriptCanvas::Data::StringType&>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            in.inputs.push_back(slotId);
        }
        // Data Slot: b...


        
        // Data Slot: c (Input)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "c";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Concatenate Three";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
            dataSlotConfiguration.SetAZType<const ScriptCanvas::Data::StringType&>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            in.inputs.push_back(slotId);
        }
        // Data Slot: c...


        { // execution outs begin
// NO branches were found, at the default
            SlotExecution::Out out;
            ScriptCanvas::ExecutionSlotConfiguration outSlotConfiguration;
            outSlotConfiguration.m_name = "On Concatenate Three";
            outSlotConfiguration.m_toolTip = "";
            outSlotConfiguration.m_displayGroup = "Concatenate Three";
            outSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            outSlotConfiguration.m_isLatent = false;
            out.name = outSlotConfiguration.m_name;
            SlotId outSlotId = AddSlot(outSlotConfiguration);
            AZ_Assert(outSlotId.IsValid(), "ExecutionOutput slot is not created successfully.");
            out.slotId = outSlotId;
                
        // Data Slot: Output (Output)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Output";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Concatenate Three";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            dataSlotConfiguration.SetAZType<ScriptCanvas::Data::StringType>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            out.outputs.push_back(slotId);
        }
        // Data Slot: Output...


            in.outs.push_back(out);
        } // execution outs end
        ins.push_back(in);
    } // execution in end


    // Generate the execution map
    m_slotExecutionMap = SlotExecution::Map(AZStd::move(ins), AZStd::move(outs));

}




#include <Source/Nodes/Nodeables/SharedDataSlotExample.h>











                        // ExecutionOuts begin
void ScriptCanvasTesting::Nodeables::BranchMethodSharedDataSlotExample::CallOneString([[maybe_unused]] ScriptCanvas::Data::StringType string) {
    ExecutionOut(0, string); // One String
}
void ScriptCanvasTesting::Nodeables::BranchMethodSharedDataSlotExample::CallTwoStrings([[maybe_unused]] ScriptCanvas::Data::StringType string1,[[maybe_unused]] ScriptCanvas::Data::StringType string2) {
    ExecutionOut(1, string1, string2); // Two Strings
}
void ScriptCanvasTesting::Nodeables::BranchMethodSharedDataSlotExample::CallThreeStrings([[maybe_unused]] ScriptCanvas::Data::StringType string1,[[maybe_unused]] ScriptCanvas::Data::StringType string2,[[maybe_unused]] ScriptCanvas::Data::StringType string3) {
    ExecutionOut(2, string1, string2, string3); // Three Strings
}
void ScriptCanvasTesting::Nodeables::BranchMethodSharedDataSlotExample::CallSquare() {
    ExecutionOut(3); // Square
}
void ScriptCanvasTesting::Nodeables::BranchMethodSharedDataSlotExample::CallPants() {
    ExecutionOut(4); // Pants
}
void ScriptCanvasTesting::Nodeables::BranchMethodSharedDataSlotExample::CallHello() {
    ExecutionOut(5); // Hello
}

 size_t ScriptCanvasTesting::Nodeables::BranchMethodSharedDataSlotExample::GetRequiredOutCount() const { return 6; }// ExecutionOuts end




void ScriptCanvasTesting::Nodeables::BranchMethodSharedDataSlotExample::Reflect(AZ::ReflectContext* context)
{
    using namespace ScriptCanvas;

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
   serializeContext->Class<BranchMethodSharedDataSlotExample, ScriptCanvas::Nodeable>()

        ;


        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
   editContext->Class<ScriptCanvasTesting::Nodeables::BranchMethodSharedDataSlotExample>("BranchMethodSharedDataSlotExample", "Branch Test")
                       ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                       ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                        ->Attribute(AZ::Edit::Attributes::Category, "Tests")                        ->Attribute(AZ::Edit::Attributes::Icon, "Icons/ScriptCanvas/Placeholder.png")                            ;
            }
        }

    // Behavior Context Reflection
    if (AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(context))
    {
    behaviorContext->Class<BranchMethodSharedDataSlotExample>("BranchMethodSharedDataSlotExample")
            ->Attribute(AZ::Script::Attributes::ExcludeFrom, AZ::Script::Attributes::ExcludeFlags::List)
            ->Attribute(AZ::Script::Attributes::Scope, AZ::Script::Attributes::ScopeFlags::Common)
        ;
    }
}

ScriptCanvas::NodePropertyInterface* ScriptCanvasTesting::Nodeables::BranchMethodSharedDataSlotExample::GetPropertyInterface([[maybe_unused]] AZ::Crc32 propertyId)
{
    return nullptr;
}

////////////////////////////////////////////////////////////////////////////

Nodes::BranchMethodSharedDataSlotExampleNode::BranchMethodSharedDataSlotExampleNode()
{
    SetNodeable(AZStd::make_unique<ScriptCanvasTesting::Nodeables::BranchMethodSharedDataSlotExample>());
}

void Nodes::BranchMethodSharedDataSlotExampleNode::Reflect(AZ::ReflectContext* context)
{
    ScriptCanvasTesting::Nodeables::BranchMethodSharedDataSlotExample::Reflect(context);

    // Serialization Context Reflection
    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<BranchMethodSharedDataSlotExampleNode, NodeableNode>()
            ->Version(0)
            ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<BranchMethodSharedDataSlotExampleNode>("BranchMethodSharedDataSlotExample", "Branch Test")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                ;
        }
    }
}

size_t Nodes::BranchMethodSharedDataSlotExampleNode::GenerateFingerprint() const
{
    using namespace ScriptCanvas;

    size_t hash = 0;
            // Append Hello
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Append Hello"));

                AZStd::hash_combine(hash, azrtti_typeid<const ScriptCanvas::Data::StringType&>());
                    // Concatenate Two
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Concatenate Two"));

                AZStd::hash_combine(hash, azrtti_typeid<const ScriptCanvas::Data::StringType&>());
                AZStd::hash_combine(hash, azrtti_typeid<const ScriptCanvas::Data::StringType&>());
                    // Concatenate Three
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Concatenate Three"));

                AZStd::hash_combine(hash, azrtti_typeid<const ScriptCanvas::Data::StringType&>());
                AZStd::hash_combine(hash, azrtti_typeid<const ScriptCanvas::Data::StringType&>());
                AZStd::hash_combine(hash, azrtti_typeid<const ScriptCanvas::Data::StringType&>());
                    // One String
                AZStd::hash_combine(hash, Grammar::ToIdentifier("One String"));

                AZStd::hash_combine(hash, azrtti_typeid<ScriptCanvas::Data::StringType>());
                    // Two Strings
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Two Strings"));

                AZStd::hash_combine(hash, azrtti_typeid<ScriptCanvas::Data::StringType>());
                AZStd::hash_combine(hash, azrtti_typeid<ScriptCanvas::Data::StringType>());
                    // Three Strings
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Three Strings"));

                AZStd::hash_combine(hash, azrtti_typeid<ScriptCanvas::Data::StringType>());
                AZStd::hash_combine(hash, azrtti_typeid<ScriptCanvas::Data::StringType>());
                AZStd::hash_combine(hash, azrtti_typeid<ScriptCanvas::Data::StringType>());
                    // Square
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Square"));

                    // Pants
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Pants"));

                    // Hello
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Hello"));

            
    return hash;
}

void Nodes::BranchMethodSharedDataSlotExampleNode::ConfigureVisualExtensions()
{
    OnConfigureVisualExtensions();
}

// Configure Slots and Build the Nodeable Execution Maps
void Nodes::BranchMethodSharedDataSlotExampleNode::ConfigureSlots()
{
    using namespace ScriptCanvas;
    NodeableNode::ConfigureSlots();
    SlotExecution::Ins ins;
    SlotExecution::Outs outs;    // Latent out
    {
        SlotExecution::Out out;
        // ExecutionOutput - One String
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationOutput; 
        slotConfigurationOutput.m_name = "One String";
        slotConfigurationOutput.m_toolTip = "";
        slotConfigurationOutput.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        slotConfigurationOutput.m_displayGroup = "String Magicbox";
        slotConfigurationOutput.m_isLatent = true;


        SlotId slotIdOneStringOutput = AddSlot(slotConfigurationOutput);
        AZ_Assert(slotIdOneStringOutput.IsValid(), "ExecutionOutput slot: One String was not created successfully.");

        out.slotId = slotIdOneStringOutput;
        out.name = "One String";

        // Data Slot: string (Output)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "string";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "One String";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            dataSlotConfiguration.SetAZType<ScriptCanvas::Data::StringType>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            out.outputs.push_back(slotId);
        }
        // Data Slot: string...


        outs.push_back(out);
    }
    // Latent out
    {
        SlotExecution::Out out;
        // ExecutionOutput - Two Strings
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationOutput; 
        slotConfigurationOutput.m_name = "Two Strings";
        slotConfigurationOutput.m_toolTip = "";
        slotConfigurationOutput.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        slotConfigurationOutput.m_displayGroup = "String Magicbox";
        slotConfigurationOutput.m_isLatent = true;


        SlotId slotIdTwoStringsOutput = AddSlot(slotConfigurationOutput);
        AZ_Assert(slotIdTwoStringsOutput.IsValid(), "ExecutionOutput slot: Two Strings was not created successfully.");

        out.slotId = slotIdTwoStringsOutput;
        out.name = "Two Strings";

        // Data Slot: string1 (Output)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "string1";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Two Strings";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            dataSlotConfiguration.SetAZType<ScriptCanvas::Data::StringType>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            out.outputs.push_back(slotId);
        }
        // Data Slot: string1...



        // Data Slot: string2 (Output)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "string2";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Two Strings";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            dataSlotConfiguration.SetAZType<ScriptCanvas::Data::StringType>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            out.outputs.push_back(slotId);
        }
        // Data Slot: string2...


        outs.push_back(out);
    }
    // Latent out
    {
        SlotExecution::Out out;
        // ExecutionOutput - Three Strings
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationOutput; 
        slotConfigurationOutput.m_name = "Three Strings";
        slotConfigurationOutput.m_toolTip = "";
        slotConfigurationOutput.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        slotConfigurationOutput.m_displayGroup = "String Magicbox";
        slotConfigurationOutput.m_isLatent = true;


        SlotId slotIdThreeStringsOutput = AddSlot(slotConfigurationOutput);
        AZ_Assert(slotIdThreeStringsOutput.IsValid(), "ExecutionOutput slot: Three Strings was not created successfully.");

        out.slotId = slotIdThreeStringsOutput;
        out.name = "Three Strings";

        // Data Slot: string1 (Output)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "string1";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Three Strings";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            dataSlotConfiguration.SetAZType<ScriptCanvas::Data::StringType>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            out.outputs.push_back(slotId);
        }
        // Data Slot: string1...



        // Data Slot: string2 (Output)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "string2";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Three Strings";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            dataSlotConfiguration.SetAZType<ScriptCanvas::Data::StringType>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            out.outputs.push_back(slotId);
        }
        // Data Slot: string2...



        // Data Slot: string3 (Output)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "string3";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Three Strings";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            dataSlotConfiguration.SetAZType<ScriptCanvas::Data::StringType>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            out.outputs.push_back(slotId);
        }
        // Data Slot: string3...


        outs.push_back(out);
    }
    // Latent out
    {
        SlotExecution::Out out;
        // ExecutionOutput - Square
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationOutput; 
        slotConfigurationOutput.m_name = "Square";
        slotConfigurationOutput.m_toolTip = "";
        slotConfigurationOutput.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        slotConfigurationOutput.m_displayGroup = "Square";
        slotConfigurationOutput.m_isLatent = true;


        SlotId slotIdSquareOutput = AddSlot(slotConfigurationOutput);
        AZ_Assert(slotIdSquareOutput.IsValid(), "ExecutionOutput slot: Square was not created successfully.");

        out.slotId = slotIdSquareOutput;
        out.name = "Square";
        outs.push_back(out);
    }
    // Latent out
    {
        SlotExecution::Out out;
        // ExecutionOutput - Pants
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationOutput; 
        slotConfigurationOutput.m_name = "Pants";
        slotConfigurationOutput.m_toolTip = "";
        slotConfigurationOutput.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        slotConfigurationOutput.m_displayGroup = "Pants";
        slotConfigurationOutput.m_isLatent = true;


        SlotId slotIdPantsOutput = AddSlot(slotConfigurationOutput);
        AZ_Assert(slotIdPantsOutput.IsValid(), "ExecutionOutput slot: Pants was not created successfully.");

        out.slotId = slotIdPantsOutput;
        out.name = "Pants";
        outs.push_back(out);
    }
    // Latent out
    {
        SlotExecution::Out out;
        // ExecutionOutput - Hello
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationOutput; 
        slotConfigurationOutput.m_name = "Hello";
        slotConfigurationOutput.m_toolTip = "";
        slotConfigurationOutput.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        slotConfigurationOutput.m_displayGroup = "BranchExecutionGroup";
        slotConfigurationOutput.m_isLatent = true;


        SlotId slotIdHelloOutput = AddSlot(slotConfigurationOutput);
        AZ_Assert(slotIdHelloOutput.IsValid(), "ExecutionOutput slot: Hello was not created successfully.");

        out.slotId = slotIdHelloOutput;
        out.name = "Hello";
        outs.push_back(out);
    }


    // Generate the execution map
    m_slotExecutionMap = SlotExecution::Map(AZStd::move(ins), AZStd::move(outs));

}




