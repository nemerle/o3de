/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/AutoGen/ScriptCanvasNodeable_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvasTesting/Code/Source/Nodes/Nodeables/ValuePointerReferenceExample.ScriptCanvasNodeable.xml
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


#include <Source/Nodes/Nodeables/ValuePointerReferenceExample.h>











// ExecutionOuts begin

 size_t ScriptCanvasTesting::Nodeables::ReturnTypeExample::GetRequiredOutCount() const { return 0; }// ExecutionOuts end




void ScriptCanvasTesting::Nodeables::ReturnTypeExample::Reflect(AZ::ReflectContext* context)
{
    using namespace ScriptCanvas;

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
   serializeContext->Class<ReturnTypeExample, ScriptCanvas::Nodeable>()

        ;


        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
   editContext->Class<ScriptCanvasTesting::Nodeables::ReturnTypeExample>("ReturnTypeExample", "Example of returning by value, pointer and reference.")
                       ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                       ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                        ->Attribute(AZ::Edit::Attributes::Category, "Tests")                        ->Attribute(AZ::Edit::Attributes::Icon, "Icons/ScriptCanvas/Placeholder.png")                            ;
            }
        }

    // Behavior Context Reflection
    if (AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(context))
    {
    behaviorContext->Class<ReturnTypeExample>("ReturnTypeExample")
            ->Attribute(AZ::Script::Attributes::ExcludeFrom, AZ::Script::Attributes::ExcludeFlags::List)
            ->Attribute(AZ::Script::Attributes::Scope, AZ::Script::Attributes::ScopeFlags::Common)
            // Return By Value
            ->Method(Grammar::ToIdentifier("Return By Value").c_str(), &ReturnTypeExample::ReturnByValue)
            // Return By Pointer
            ->Method(Grammar::ToIdentifier("Return By Pointer").c_str(), &ReturnTypeExample::ReturnByPointer)
            // Return By Reference
            ->Method(Grammar::ToIdentifier("Return By Reference").c_str(), &ReturnTypeExample::ReturnByReference)
        ;
    }
}

ScriptCanvas::NodePropertyInterface* ScriptCanvasTesting::Nodeables::ReturnTypeExample::GetPropertyInterface([[maybe_unused]] AZ::Crc32 propertyId)
{
    return nullptr;
}

////////////////////////////////////////////////////////////////////////////

Nodes::ReturnTypeExampleNode::ReturnTypeExampleNode()
{
    SetNodeable(AZStd::make_unique<ScriptCanvasTesting::Nodeables::ReturnTypeExample>());
}

void Nodes::ReturnTypeExampleNode::Reflect(AZ::ReflectContext* context)
{
    ScriptCanvasTesting::Nodeables::ReturnTypeExample::Reflect(context);

    // Serialization Context Reflection
    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<ReturnTypeExampleNode, NodeableNode>()
            ->Version(0)
            ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<ReturnTypeExampleNode>("ReturnTypeExample", "Example of returning by value, pointer and reference.")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                ;
        }
    }
}

size_t Nodes::ReturnTypeExampleNode::GenerateFingerprint() const
{
    using namespace ScriptCanvas;

    size_t hash = 0;
            // Return By Value
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Return By Value"));

                    // Return By Pointer
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Return By Pointer"));

                    // Return By Reference
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Return By Reference"));

                    // Get Internal Vector
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Get Internal Vector"));

                    // Branches On Input Type
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Branches On Input Type"));

                AZStd::hash_combine(hash, azrtti_typeid<AZStd::string>());
                    // Clear By Value
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Clear By Value"));

                AZStd::hash_combine(hash, azrtti_typeid<AZStd::vector<ScriptCanvas::Data::NumberType>>());
                    // Clear By Pointer
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Clear By Pointer"));

                AZStd::hash_combine(hash, azrtti_typeid<AZStd::vector<ScriptCanvas::Data::NumberType>*>());
                    // Clear By Reference
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Clear By Reference"));

                AZStd::hash_combine(hash, azrtti_typeid<AZStd::vector<ScriptCanvas::Data::NumberType>&>());
                    // In
                AZStd::hash_combine(hash, Grammar::ToIdentifier("In"));

            
    return hash;
}

void Nodes::ReturnTypeExampleNode::ConfigureVisualExtensions()
{
    OnConfigureVisualExtensions();
}

// Configure Slots and Build the Nodeable Execution Maps
void Nodes::ReturnTypeExampleNode::ConfigureSlots()
{
    using namespace ScriptCanvas;
    NodeableNode::ConfigureSlots();
    SlotExecution::Ins ins;
    SlotExecution::Outs outs;    // execution in begin
    {
        SlotExecution::In in;

        // ExecutionInput - Return By Value
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationInput; 
        slotConfigurationInput.m_name = "Return By Value";
        slotConfigurationInput.m_toolTip = "";
        slotConfigurationInput.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfigurationInput.m_displayGroup = "Return By Value";


        SlotId slotIdReturnByValueInput = AddSlot(slotConfigurationInput);
        AZ_Assert(slotIdReturnByValueInput.IsValid(), "ExecutionInput slot: Return By Value was not created successfully.");

        in.slotId = slotIdReturnByValueInput;

        { // execution outs begin
// NO branches were found, at the default
            SlotExecution::Out out;
            ScriptCanvas::ExecutionSlotConfiguration outSlotConfiguration;
            outSlotConfiguration.m_name = "On Return By Value";
            outSlotConfiguration.m_toolTip = "";
            outSlotConfiguration.m_displayGroup = "Return By Value";
            outSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            outSlotConfiguration.m_isLatent = false;
            out.name = outSlotConfiguration.m_name;
            SlotId outSlotId = AddSlot(outSlotConfiguration);
            AZ_Assert(outSlotId.IsValid(), "ExecutionOutput slot is not created successfully.");
            out.slotId = outSlotId;
                
        // Data Slot: Value (Output)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Value";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Return By Value";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            dataSlotConfiguration.SetAZType<AZStd::vector<ScriptCanvas::Data::NumberType>>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            out.outputs.push_back(slotId);
        }
        // Data Slot: Value...


            in.outs.push_back(out);
        } // execution outs end
        ins.push_back(in);
    } // execution in end
    // execution in begin
    {
        SlotExecution::In in;

        // ExecutionInput - Return By Pointer
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationInput; 
        slotConfigurationInput.m_name = "Return By Pointer";
        slotConfigurationInput.m_toolTip = "";
        slotConfigurationInput.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfigurationInput.m_displayGroup = "Return By Pointer";


        SlotId slotIdReturnByPointerInput = AddSlot(slotConfigurationInput);
        AZ_Assert(slotIdReturnByPointerInput.IsValid(), "ExecutionInput slot: Return By Pointer was not created successfully.");

        in.slotId = slotIdReturnByPointerInput;

        { // execution outs begin
// NO branches were found, at the default
            SlotExecution::Out out;
            ScriptCanvas::ExecutionSlotConfiguration outSlotConfiguration;
            outSlotConfiguration.m_name = "On Return By Pointer";
            outSlotConfiguration.m_toolTip = "";
            outSlotConfiguration.m_displayGroup = "Return By Pointer";
            outSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            outSlotConfiguration.m_isLatent = false;
            out.name = outSlotConfiguration.m_name;
            SlotId outSlotId = AddSlot(outSlotConfiguration);
            AZ_Assert(outSlotId.IsValid(), "ExecutionOutput slot is not created successfully.");
            out.slotId = outSlotId;
                
        // Data Slot: Pointer (Output)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Pointer";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Return By Pointer";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            dataSlotConfiguration.SetAZType<AZStd::vector<ScriptCanvas::Data::NumberType>*>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            out.outputs.push_back(slotId);
        }
        // Data Slot: Pointer...


            in.outs.push_back(out);
        } // execution outs end
        ins.push_back(in);
    } // execution in end
    // execution in begin
    {
        SlotExecution::In in;

        // ExecutionInput - Return By Reference
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationInput; 
        slotConfigurationInput.m_name = "Return By Reference";
        slotConfigurationInput.m_toolTip = "";
        slotConfigurationInput.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfigurationInput.m_displayGroup = "Return By Reference";


        SlotId slotIdReturnByReferenceInput = AddSlot(slotConfigurationInput);
        AZ_Assert(slotIdReturnByReferenceInput.IsValid(), "ExecutionInput slot: Return By Reference was not created successfully.");

        in.slotId = slotIdReturnByReferenceInput;

        { // execution outs begin
// NO branches were found, at the default
            SlotExecution::Out out;
            ScriptCanvas::ExecutionSlotConfiguration outSlotConfiguration;
            outSlotConfiguration.m_name = "On Return By Reference";
            outSlotConfiguration.m_toolTip = "";
            outSlotConfiguration.m_displayGroup = "Return By Reference";
            outSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            outSlotConfiguration.m_isLatent = false;
            out.name = outSlotConfiguration.m_name;
            SlotId outSlotId = AddSlot(outSlotConfiguration);
            AZ_Assert(outSlotId.IsValid(), "ExecutionOutput slot is not created successfully.");
            out.slotId = outSlotId;
                
        // Data Slot: Reference (Output)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Reference";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Return By Reference";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            dataSlotConfiguration.SetAZType<AZStd::vector<ScriptCanvas::Data::NumberType>&>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            out.outputs.push_back(slotId);
        }
        // Data Slot: Reference...


            in.outs.push_back(out);
        } // execution outs end
        ins.push_back(in);
    } // execution in end


    // Generate the execution map
    m_slotExecutionMap = SlotExecution::Map(AZStd::move(ins), AZStd::move(outs));

}




#include <Source/Nodes/Nodeables/ValuePointerReferenceExample.h>











// ExecutionOuts begin
void ScriptCanvasTesting::Nodeables::BranchInputTypeExample::CallByValue([[maybe_unused]] AZStd::vector<ScriptCanvas::Data::NumberType>& ValueInput) {
    ExecutionOut(0, ValueInput); // By Value
}
void ScriptCanvasTesting::Nodeables::BranchInputTypeExample::CallByPointer([[maybe_unused]] AZStd::vector<ScriptCanvas::Data::NumberType>* PointerInput) {
    ExecutionOut(1, PointerInput); // By Pointer
}

 size_t ScriptCanvasTesting::Nodeables::BranchInputTypeExample::GetRequiredOutCount() const { return 2; }// ExecutionOuts end




void ScriptCanvasTesting::Nodeables::BranchInputTypeExample::Reflect(AZ::ReflectContext* context)
{
    using namespace ScriptCanvas;

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
   serializeContext->Class<BranchInputTypeExample, ScriptCanvas::Nodeable>()

        ;


        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
   editContext->Class<ScriptCanvasTesting::Nodeables::BranchInputTypeExample>("BranchInputTypeExample", "Example of branch passing as input by value, pointer and reference.")
                       ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                       ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                        ->Attribute(AZ::Edit::Attributes::Category, "Tests")                        ->Attribute(AZ::Edit::Attributes::Icon, "Icons/ScriptCanvas/Placeholder.png")                            ;
            }
        }

    // Behavior Context Reflection
    if (AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(context))
    {
    behaviorContext->Class<BranchInputTypeExample>("BranchInputTypeExample")
            ->Attribute(AZ::Script::Attributes::ExcludeFrom, AZ::Script::Attributes::ExcludeFlags::List)
            ->Attribute(AZ::Script::Attributes::Scope, AZ::Script::Attributes::ScopeFlags::Common)
            // Get Internal Vector
            ->Method(Grammar::ToIdentifier("Get Internal Vector").c_str(), &BranchInputTypeExample::GetInternalVector)
            // Branches On Input Type
            ->Method(Grammar::ToIdentifier("Branches On Input Type").c_str(), &BranchInputTypeExample::BranchesOnInputType)
        ;
    }
}

ScriptCanvas::NodePropertyInterface* ScriptCanvasTesting::Nodeables::BranchInputTypeExample::GetPropertyInterface([[maybe_unused]] AZ::Crc32 propertyId)
{
    return nullptr;
}

////////////////////////////////////////////////////////////////////////////

Nodes::BranchInputTypeExampleNode::BranchInputTypeExampleNode()
{
    SetNodeable(AZStd::make_unique<ScriptCanvasTesting::Nodeables::BranchInputTypeExample>());
}

void Nodes::BranchInputTypeExampleNode::Reflect(AZ::ReflectContext* context)
{
    ScriptCanvasTesting::Nodeables::BranchInputTypeExample::Reflect(context);

    // Serialization Context Reflection
    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<BranchInputTypeExampleNode, NodeableNode>()
            ->Version(0)
            ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<BranchInputTypeExampleNode>("BranchInputTypeExample", "Example of branch passing as input by value, pointer and reference.")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                ;
        }
    }
}

size_t Nodes::BranchInputTypeExampleNode::GenerateFingerprint() const
{
    using namespace ScriptCanvas;

    size_t hash = 0;
            // Return By Value
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Return By Value"));

                    // Return By Pointer
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Return By Pointer"));

                    // Return By Reference
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Return By Reference"));

                    // Get Internal Vector
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Get Internal Vector"));

                    // Branches On Input Type
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Branches On Input Type"));

                AZStd::hash_combine(hash, azrtti_typeid<AZStd::string>());
                    // Clear By Value
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Clear By Value"));

                AZStd::hash_combine(hash, azrtti_typeid<AZStd::vector<ScriptCanvas::Data::NumberType>>());
                    // Clear By Pointer
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Clear By Pointer"));

                AZStd::hash_combine(hash, azrtti_typeid<AZStd::vector<ScriptCanvas::Data::NumberType>*>());
                    // Clear By Reference
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Clear By Reference"));

                AZStd::hash_combine(hash, azrtti_typeid<AZStd::vector<ScriptCanvas::Data::NumberType>&>());
                    // In
                AZStd::hash_combine(hash, Grammar::ToIdentifier("In"));

            
    return hash;
}

void Nodes::BranchInputTypeExampleNode::ConfigureVisualExtensions()
{
    OnConfigureVisualExtensions();
}

// Configure Slots and Build the Nodeable Execution Maps
void Nodes::BranchInputTypeExampleNode::ConfigureSlots()
{
    using namespace ScriptCanvas;
    NodeableNode::ConfigureSlots();
    SlotExecution::Ins ins;
    SlotExecution::Outs outs;    // execution in begin
    {
        SlotExecution::In in;

        // ExecutionInput - Get Internal Vector
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationInput; 
        slotConfigurationInput.m_name = "Get Internal Vector";
        slotConfigurationInput.m_toolTip = "";
        slotConfigurationInput.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfigurationInput.m_displayGroup = "Get Internal Vector";


        SlotId slotIdGetInternalVectorInput = AddSlot(slotConfigurationInput);
        AZ_Assert(slotIdGetInternalVectorInput.IsValid(), "ExecutionInput slot: Get Internal Vector was not created successfully.");

        in.slotId = slotIdGetInternalVectorInput;

        { // execution outs begin
// NO branches were found, at the default
            SlotExecution::Out out;
            ScriptCanvas::ExecutionSlotConfiguration outSlotConfiguration;
            outSlotConfiguration.m_name = "On Get Internal Vector";
            outSlotConfiguration.m_toolTip = "";
            outSlotConfiguration.m_displayGroup = "Get Internal Vector";
            outSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            outSlotConfiguration.m_isLatent = false;
            out.name = outSlotConfiguration.m_name;
            SlotId outSlotId = AddSlot(outSlotConfiguration);
            AZ_Assert(outSlotId.IsValid(), "ExecutionOutput slot is not created successfully.");
            out.slotId = outSlotId;
                
        // Data Slot: Result (Output)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Result";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Get Internal Vector";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            dataSlotConfiguration.SetAZType<AZStd::vector<ScriptCanvas::Data::NumberType>>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            out.outputs.push_back(slotId);
        }
        // Data Slot: Result...


            in.outs.push_back(out);
        } // execution outs end
        ins.push_back(in);
    } // execution in end
    // execution in begin
    {
        SlotExecution::In in;

        // ExecutionInput - Branches On Input Type
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationInput; 
        slotConfigurationInput.m_name = "Branches On Input Type";
        slotConfigurationInput.m_toolTip = "";
        slotConfigurationInput.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfigurationInput.m_displayGroup = "Branches On Input Type";


        SlotId slotIdBranchesOnInputTypeInput = AddSlot(slotConfigurationInput);
        AZ_Assert(slotIdBranchesOnInputTypeInput.IsValid(), "ExecutionInput slot: Branches On Input Type was not created successfully.");

        in.slotId = slotIdBranchesOnInputTypeInput;

        
        // Data Slot: Input Type (Input)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Input Type";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Branches On Input Type";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
            dataSlotConfiguration.SetAZType<AZStd::string>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            in.inputs.push_back(slotId);
        }
        // Data Slot: Input Type...


        { // execution outs begin
// branches were found
            {
                SlotExecution::Out out;
                ScriptCanvas::ExecutionSlotConfiguration outSlotConfiguration;
                outSlotConfiguration.m_name = "By Value";
                outSlotConfiguration.m_toolTip = "";
                outSlotConfiguration.m_displayGroup = "Branches On Input Type";
                outSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
                outSlotConfiguration.m_isLatent = false;
                out.name = outSlotConfiguration.m_name;
                SlotId outSlotId = AddSlot(outSlotConfiguration);
                AZ_Assert(outSlotId.IsValid(), "ExecutionOutput slot is not created successfully.");
                out.slotId = outSlotId;
                    
        // Data Slot: Value Input (Output)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Value Input";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Branches On Input Type";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            dataSlotConfiguration.SetAZType<AZStd::vector<ScriptCanvas::Data::NumberType>&>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            out.outputs.push_back(slotId);
        }
        // Data Slot: Value Input...


                in.outs.push_back(out);
            }
            {
                SlotExecution::Out out;
                ScriptCanvas::ExecutionSlotConfiguration outSlotConfiguration;
                outSlotConfiguration.m_name = "By Pointer";
                outSlotConfiguration.m_toolTip = "";
                outSlotConfiguration.m_displayGroup = "Branches On Input Type";
                outSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
                outSlotConfiguration.m_isLatent = false;
                out.name = outSlotConfiguration.m_name;
                SlotId outSlotId = AddSlot(outSlotConfiguration);
                AZ_Assert(outSlotId.IsValid(), "ExecutionOutput slot is not created successfully.");
                out.slotId = outSlotId;
                    
        // Data Slot: Pointer Input (Output)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Pointer Input";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Branches On Input Type";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            dataSlotConfiguration.SetAZType<AZStd::vector<ScriptCanvas::Data::NumberType>*>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            out.outputs.push_back(slotId);
        }
        // Data Slot: Pointer Input...


                in.outs.push_back(out);
            }
        } // execution outs end
        ins.push_back(in);
    } // execution in end


    // Generate the execution map
    m_slotExecutionMap = SlotExecution::Map(AZStd::move(ins), AZStd::move(outs));

}




#include <Source/Nodes/Nodeables/ValuePointerReferenceExample.h>











// ExecutionOuts begin

 size_t ScriptCanvasTesting::Nodeables::InputTypeExample::GetRequiredOutCount() const { return 0; }// ExecutionOuts end




void ScriptCanvasTesting::Nodeables::InputTypeExample::Reflect(AZ::ReflectContext* context)
{
    using namespace ScriptCanvas;

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
   serializeContext->Class<InputTypeExample, ScriptCanvas::Nodeable>()

        ;


        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
   editContext->Class<ScriptCanvasTesting::Nodeables::InputTypeExample>("InputTypeExample", "Example of passing as input by value, pointer and reference.")
                       ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                       ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                        ->Attribute(AZ::Edit::Attributes::Category, "Tests")                        ->Attribute(AZ::Edit::Attributes::Icon, "Icons/ScriptCanvas/Placeholder.png")                            ;
            }
        }

    // Behavior Context Reflection
    if (AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(context))
    {
    behaviorContext->Class<InputTypeExample>("InputTypeExample")
            ->Attribute(AZ::Script::Attributes::ExcludeFrom, AZ::Script::Attributes::ExcludeFlags::List)
            ->Attribute(AZ::Script::Attributes::Scope, AZ::Script::Attributes::ScopeFlags::Common)
            // Clear By Value
            ->Method(Grammar::ToIdentifier("Clear By Value").c_str(), &InputTypeExample::ClearByValue)
            // Clear By Pointer
            ->Method(Grammar::ToIdentifier("Clear By Pointer").c_str(), &InputTypeExample::ClearByPointer)
            // Clear By Reference
            ->Method(Grammar::ToIdentifier("Clear By Reference").c_str(), &InputTypeExample::ClearByReference)
        ;
    }
}

ScriptCanvas::NodePropertyInterface* ScriptCanvasTesting::Nodeables::InputTypeExample::GetPropertyInterface([[maybe_unused]] AZ::Crc32 propertyId)
{
    return nullptr;
}

////////////////////////////////////////////////////////////////////////////

Nodes::InputTypeExampleNode::InputTypeExampleNode()
{
    SetNodeable(AZStd::make_unique<ScriptCanvasTesting::Nodeables::InputTypeExample>());
}

void Nodes::InputTypeExampleNode::Reflect(AZ::ReflectContext* context)
{
    ScriptCanvasTesting::Nodeables::InputTypeExample::Reflect(context);

    // Serialization Context Reflection
    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<InputTypeExampleNode, NodeableNode>()
            ->Version(0)
            ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<InputTypeExampleNode>("InputTypeExample", "Example of passing as input by value, pointer and reference.")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                ;
        }
    }
}

size_t Nodes::InputTypeExampleNode::GenerateFingerprint() const
{
    using namespace ScriptCanvas;

    size_t hash = 0;
            // Return By Value
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Return By Value"));

                    // Return By Pointer
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Return By Pointer"));

                    // Return By Reference
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Return By Reference"));

                    // Get Internal Vector
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Get Internal Vector"));

                    // Branches On Input Type
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Branches On Input Type"));

                AZStd::hash_combine(hash, azrtti_typeid<AZStd::string>());
                    // Clear By Value
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Clear By Value"));

                AZStd::hash_combine(hash, azrtti_typeid<AZStd::vector<ScriptCanvas::Data::NumberType>>());
                    // Clear By Pointer
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Clear By Pointer"));

                AZStd::hash_combine(hash, azrtti_typeid<AZStd::vector<ScriptCanvas::Data::NumberType>*>());
                    // Clear By Reference
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Clear By Reference"));

                AZStd::hash_combine(hash, azrtti_typeid<AZStd::vector<ScriptCanvas::Data::NumberType>&>());
                    // In
                AZStd::hash_combine(hash, Grammar::ToIdentifier("In"));

            
    return hash;
}

void Nodes::InputTypeExampleNode::ConfigureVisualExtensions()
{
    OnConfigureVisualExtensions();
}

// Configure Slots and Build the Nodeable Execution Maps
void Nodes::InputTypeExampleNode::ConfigureSlots()
{
    using namespace ScriptCanvas;
    NodeableNode::ConfigureSlots();
    SlotExecution::Ins ins;
    SlotExecution::Outs outs;    // execution in begin
    {
        SlotExecution::In in;

        // ExecutionInput - Clear By Value
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationInput; 
        slotConfigurationInput.m_name = "Clear By Value";
        slotConfigurationInput.m_toolTip = "";
        slotConfigurationInput.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfigurationInput.m_displayGroup = "Clear By Value";


        SlotId slotIdClearByValueInput = AddSlot(slotConfigurationInput);
        AZ_Assert(slotIdClearByValueInput.IsValid(), "ExecutionInput slot: Clear By Value was not created successfully.");

        in.slotId = slotIdClearByValueInput;

        
        // Data Slot: Value Input (Input)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Value Input";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Clear By Value";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
            dataSlotConfiguration.SetAZType<AZStd::vector<ScriptCanvas::Data::NumberType>>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            in.inputs.push_back(slotId);
        }
        // Data Slot: Value Input...


        { // execution outs begin
// NO branches were found, at the default
            SlotExecution::Out out;
            ScriptCanvas::ExecutionSlotConfiguration outSlotConfiguration;
            outSlotConfiguration.m_name = "On Clear By Value";
            outSlotConfiguration.m_toolTip = "";
            outSlotConfiguration.m_displayGroup = "Clear By Value";
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

        // ExecutionInput - Clear By Pointer
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationInput; 
        slotConfigurationInput.m_name = "Clear By Pointer";
        slotConfigurationInput.m_toolTip = "";
        slotConfigurationInput.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfigurationInput.m_displayGroup = "Clear By Pointer";


        SlotId slotIdClearByPointerInput = AddSlot(slotConfigurationInput);
        AZ_Assert(slotIdClearByPointerInput.IsValid(), "ExecutionInput slot: Clear By Pointer was not created successfully.");

        in.slotId = slotIdClearByPointerInput;

        
        // Data Slot: Pointer Input (Input)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Pointer Input";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Clear By Pointer";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
            dataSlotConfiguration.SetAZType<AZStd::vector<ScriptCanvas::Data::NumberType>*>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            in.inputs.push_back(slotId);
        }
        // Data Slot: Pointer Input...


        { // execution outs begin
// NO branches were found, at the default
            SlotExecution::Out out;
            ScriptCanvas::ExecutionSlotConfiguration outSlotConfiguration;
            outSlotConfiguration.m_name = "On Clear By Pointer";
            outSlotConfiguration.m_toolTip = "";
            outSlotConfiguration.m_displayGroup = "Clear By Pointer";
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

        // ExecutionInput - Clear By Reference
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationInput; 
        slotConfigurationInput.m_name = "Clear By Reference";
        slotConfigurationInput.m_toolTip = "";
        slotConfigurationInput.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfigurationInput.m_displayGroup = "Clear By Reference";


        SlotId slotIdClearByReferenceInput = AddSlot(slotConfigurationInput);
        AZ_Assert(slotIdClearByReferenceInput.IsValid(), "ExecutionInput slot: Clear By Reference was not created successfully.");

        in.slotId = slotIdClearByReferenceInput;

        
        // Data Slot: Reference Input (Input)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Reference Input";
            dataSlotConfiguration.m_toolTip = "";
            dataSlotConfiguration.m_displayGroup = "Clear By Reference";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
            dataSlotConfiguration.SetAZType<AZStd::vector<ScriptCanvas::Data::NumberType>&>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            in.inputs.push_back(slotId);
        }
        // Data Slot: Reference Input...


        { // execution outs begin
// NO branches were found, at the default
            SlotExecution::Out out;
            ScriptCanvas::ExecutionSlotConfiguration outSlotConfiguration;
            outSlotConfiguration.m_name = "On Clear By Reference";
            outSlotConfiguration.m_toolTip = "";
            outSlotConfiguration.m_displayGroup = "Clear By Reference";
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


    // Generate the execution map
    m_slotExecutionMap = SlotExecution::Map(AZStd::move(ins), AZStd::move(outs));

}




#include <Source/Nodes/Nodeables/ValuePointerReferenceExample.h>











// ExecutionOuts begin

 size_t ScriptCanvasTesting::Nodeables::PropertyExample::GetRequiredOutCount() const { return 0; }// ExecutionOuts end




void ScriptCanvasTesting::Nodeables::PropertyExample::Reflect(AZ::ReflectContext* context)
{
    using namespace ScriptCanvas;

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
   serializeContext->Class<PropertyExample, ScriptCanvas::Nodeable>()

            ->Field("Numbers", &PropertyExample::Numbers)
            ->Field("Slang", &PropertyExample::Slang)
            ->Field("Position", &PropertyExample::Position)
        ;


        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
   editContext->Class<ScriptCanvasTesting::Nodeables::PropertyExample>("PropertyExample", "Example of using properties.")
                       ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                       ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                        ->Attribute(AZ::Edit::Attributes::Category, "Tests")                        ->Attribute(AZ::Edit::Attributes::Icon, "Icons/ScriptCanvas/Placeholder.png")        // Numbers
                        ->DataElement(AZ::Edit::UIHandlers::Default, &PropertyExample::Numbers, "Numbers", "")
        // Slang
                        ->DataElement(AZ::Edit::UIHandlers::Default, &PropertyExample::Slang, "Slang", "")
        // Position
                        ->DataElement(AZ::Edit::UIHandlers::Default, &PropertyExample::Position, "Position", "")
                            ;
            }
        }

    // Behavior Context Reflection
    if (AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(context))
    {
    behaviorContext->Class<PropertyExample>("PropertyExample")
            ->Attribute(AZ::Script::Attributes::ExcludeFrom, AZ::Script::Attributes::ExcludeFlags::List)
            ->Attribute(AZ::Script::Attributes::Scope, AZ::Script::Attributes::ScopeFlags::Common)
            // In
            ->Method(Grammar::ToIdentifier("In").c_str(), &PropertyExample::In)
        ;
    }
}

ScriptCanvas::NodePropertyInterface* ScriptCanvasTesting::Nodeables::PropertyExample::GetPropertyInterface([[maybe_unused]] AZ::Crc32 propertyId)
{
    return nullptr;
}

////////////////////////////////////////////////////////////////////////////

Nodes::PropertyExampleNode::PropertyExampleNode()
{
    SetNodeable(AZStd::make_unique<ScriptCanvasTesting::Nodeables::PropertyExample>());
}

void Nodes::PropertyExampleNode::Reflect(AZ::ReflectContext* context)
{
    ScriptCanvasTesting::Nodeables::PropertyExample::Reflect(context);

    // Serialization Context Reflection
    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<PropertyExampleNode, NodeableNode>()
            ->Version(0)
            ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<PropertyExampleNode>("PropertyExample", "Example of using properties.")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                ;
        }
    }
}

size_t Nodes::PropertyExampleNode::GenerateFingerprint() const
{
    using namespace ScriptCanvas;

    size_t hash = 0;
            // Return By Value
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Return By Value"));

                    // Return By Pointer
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Return By Pointer"));

                    // Return By Reference
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Return By Reference"));

                    // Get Internal Vector
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Get Internal Vector"));

                    // Branches On Input Type
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Branches On Input Type"));

                AZStd::hash_combine(hash, azrtti_typeid<AZStd::string>());
                    // Clear By Value
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Clear By Value"));

                AZStd::hash_combine(hash, azrtti_typeid<AZStd::vector<ScriptCanvas::Data::NumberType>>());
                    // Clear By Pointer
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Clear By Pointer"));

                AZStd::hash_combine(hash, azrtti_typeid<AZStd::vector<ScriptCanvas::Data::NumberType>*>());
                    // Clear By Reference
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Clear By Reference"));

                AZStd::hash_combine(hash, azrtti_typeid<AZStd::vector<ScriptCanvas::Data::NumberType>&>());
                    // In
                AZStd::hash_combine(hash, Grammar::ToIdentifier("In"));

            
    return hash;
}

void Nodes::PropertyExampleNode::ConfigureVisualExtensions()
{
    OnConfigureVisualExtensions();
}

// Configure Slots and Build the Nodeable Execution Maps
void Nodes::PropertyExampleNode::ConfigureSlots()
{
    using namespace ScriptCanvas;
    NodeableNode::ConfigureSlots();
    SlotExecution::Ins ins;
    SlotExecution::Outs outs;    // execution in begin
    {
        SlotExecution::In in;

        // ExecutionInput - In
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationInput; 
        slotConfigurationInput.m_name = "In";
        slotConfigurationInput.m_toolTip = "";
        slotConfigurationInput.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfigurationInput.m_displayGroup = "In";


        SlotId slotIdInInput = AddSlot(slotConfigurationInput);
        AZ_Assert(slotIdInInput.IsValid(), "ExecutionInput slot: In was not created successfully.");

        in.slotId = slotIdInInput;

        { // execution outs begin
// NO branches were found, at the default
            SlotExecution::Out out;
            ScriptCanvas::ExecutionSlotConfiguration outSlotConfiguration;
            outSlotConfiguration.m_name = "On In";
            outSlotConfiguration.m_toolTip = "";
            outSlotConfiguration.m_displayGroup = "In";
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


    // Generate the execution map
    m_slotExecutionMap = SlotExecution::Map(AZStd::move(ins), AZStd::move(outs));

}




