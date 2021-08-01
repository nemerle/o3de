/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/AutoGen/ScriptCanvasNodeable_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/Libraries/Spawning/SpawnNodeable.ScriptCanvasNodeable.xml
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


#include <Include/ScriptCanvas/Libraries/Spawning/SpawnNodeable.h>











namespace ScriptCanvas
{
    // ExecutionOuts begin
void Nodeables::Spawning::SpawnNodeable::CallOnSpawn([[maybe_unused]] AZStd::vector<Data::EntityIDType> SpawnedEntitiesList) {
    ExecutionOut(0, SpawnedEntitiesList); // On Spawn
}

 size_t Nodeables::Spawning::SpawnNodeable::GetRequiredOutCount() const { return 1; }// ExecutionOuts end




void Nodeables::Spawning::SpawnNodeable::Reflect(AZ::ReflectContext* context)
{
    using namespace ScriptCanvas;

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
   serializeContext->Class<SpawnNodeable, ScriptCanvas::Nodeable>()

            ->Field("m_spawnableAsset", &SpawnNodeable::m_spawnableAsset)
        ;


        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
   editContext->Class<Nodeables::Spawning::SpawnNodeable>("Spawn", "Spawns a selected prefab, positioned using the provided transform inputs")
                       ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                       ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                        ->Attribute(AZ::Edit::Attributes::Category, "Spawning")                        ->Attribute(AZ::Edit::Attributes::Icon, "Icons/ScriptCanvas/Placeholder.png")        // m_spawnableAsset
                        ->DataElement(AZ::Edit::UIHandlers::Default, &SpawnNodeable::m_spawnableAsset, "m_spawnableAsset", "")
                        ->Attribute(AZ::Edit::Attributes::ShowProductAssetFileName, false)
                        ->Attribute(AZ::Edit::Attributes::HideProductFilesInAssetPicker, true)
                        ->Attribute(AZ::Edit::Attributes::AssetPickerTitle, "a Prefab")
                        ->Attribute(AZ::Edit::Attributes::ChangeNotify, &SpawnNodeable::OnSpawnAssetChanged)
                            ;
            }
        }

    // Behavior Context Reflection
    if (AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(context))
    {
    behaviorContext->Class<SpawnNodeable>("SpawnNodeable")
            ->Attribute(AZ::Script::Attributes::ExcludeFrom, AZ::Script::Attributes::ExcludeFlags::List)
            ->Attribute(AZ::Script::Attributes::Scope, AZ::Script::Attributes::ScopeFlags::Common)
            // Request Spawn
            ->Method(Grammar::ToIdentifier("Request Spawn").c_str(), &SpawnNodeable::RequestSpawn)
        ;
    }
}

ScriptCanvas::NodePropertyInterface* Nodeables::Spawning::SpawnNodeable::GetPropertyInterface([[maybe_unused]] AZ::Crc32 propertyId)
{
    return nullptr;
}

////////////////////////////////////////////////////////////////////////////

Nodes::SpawnNodeableNode::SpawnNodeableNode()
{
    SetNodeable(AZStd::make_unique<Nodeables::Spawning::SpawnNodeable>());
}

void Nodes::SpawnNodeableNode::Reflect(AZ::ReflectContext* context)
{
    Nodeables::Spawning::SpawnNodeable::Reflect(context);

    // Serialization Context Reflection
    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<SpawnNodeableNode, NodeableNode>()
            ->Version(0)
            ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<SpawnNodeableNode>("Spawn", "Spawns a selected prefab, positioned using the provided transform inputs")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                ;
        }
    }
}

size_t Nodes::SpawnNodeableNode::GenerateFingerprint() const
{
    using namespace ScriptCanvas;

    size_t hash = 0;
            // Request Spawn
                AZStd::hash_combine(hash, Grammar::ToIdentifier("Request Spawn"));

                AZStd::hash_combine(hash, azrtti_typeid<Data::Vector3Type>());
                AZStd::hash_combine(hash, azrtti_typeid<Data::Vector3Type>());
                AZStd::hash_combine(hash, azrtti_typeid<Data::NumberType>());
                    // On Spawn
                AZStd::hash_combine(hash, Grammar::ToIdentifier("On Spawn"));

                AZStd::hash_combine(hash, azrtti_typeid<AZStd::vector<Data::EntityIDType>>());
            
    return hash;
}

void Nodes::SpawnNodeableNode::ConfigureVisualExtensions()
{
    OnConfigureVisualExtensions();
}

// Configure Slots and Build the Nodeable Execution Maps
void Nodes::SpawnNodeableNode::ConfigureSlots()
{
    using namespace ScriptCanvas;
    NodeableNode::ConfigureSlots();
    SlotExecution::Ins ins;
    SlotExecution::Outs outs;    // execution in begin
    {
        SlotExecution::In in;

        // ExecutionInput - Request Spawn
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationInput; 
        slotConfigurationInput.m_name = "Request Spawn";
        slotConfigurationInput.m_toolTip = "";
        slotConfigurationInput.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfigurationInput.m_displayGroup = "Request Spawn";


        SlotId slotIdRequestSpawnInput = AddSlot(slotConfigurationInput);
        AZ_Assert(slotIdRequestSpawnInput.IsValid(), "ExecutionInput slot: Request Spawn was not created successfully.");

        in.slotId = slotIdRequestSpawnInput;

        
        // Data Slot: Translation (Input)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Translation";
            dataSlotConfiguration.m_toolTip = "Position to spawn";
            dataSlotConfiguration.m_displayGroup = "Request Spawn";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
            dataSlotConfiguration.SetAZType<Data::Vector3Type>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            in.inputs.push_back(slotId);
        }
        // Data Slot: Translation...


        
        // Data Slot: Rotation (Input)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Rotation";
            dataSlotConfiguration.m_toolTip = "Rotation of spawn (in degrees)";
            dataSlotConfiguration.m_displayGroup = "Request Spawn";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
            dataSlotConfiguration.SetAZType<Data::Vector3Type>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            in.inputs.push_back(slotId);
        }
        // Data Slot: Rotation...


        
        // Data Slot: Scale (Input)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "Scale";
            dataSlotConfiguration.m_toolTip = "Scale of spawn";
            dataSlotConfiguration.m_displayGroup = "Request Spawn";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
            dataSlotConfiguration.SetDefaultValue<Data::NumberType>(1);
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            in.inputs.push_back(slotId);
        }
        // Data Slot: Scale...


        { // execution outs begin
// NO branches were found, at the default
            SlotExecution::Out out;
            ScriptCanvas::ExecutionSlotConfiguration outSlotConfiguration;
            outSlotConfiguration.m_name = "Spawn Requested";
            outSlotConfiguration.m_toolTip = "";
            outSlotConfiguration.m_displayGroup = "Request Spawn";
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
        // ExecutionOutput - On Spawn
        ScriptCanvas::ExecutionSlotConfiguration slotConfigurationOutput; 
        slotConfigurationOutput.m_name = "On Spawn";
        slotConfigurationOutput.m_toolTip = "";
        slotConfigurationOutput.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        slotConfigurationOutput.m_displayGroup = "On Spawn";
        slotConfigurationOutput.m_isLatent = true;


        SlotId slotIdOnSpawnOutput = AddSlot(slotConfigurationOutput);
        AZ_Assert(slotIdOnSpawnOutput.IsValid(), "ExecutionOutput slot: On Spawn was not created successfully.");

        out.slotId = slotIdOnSpawnOutput;
        out.name = "On Spawn";

        // Data Slot: SpawnedEntitiesList (Output)
        {

            ScriptCanvas::DataSlotConfiguration dataSlotConfiguration;
            dataSlotConfiguration.m_name = "SpawnedEntitiesList";
            dataSlotConfiguration.m_toolTip = "List of spawned entities sorted by hierarchy with the root being first";
            dataSlotConfiguration.m_displayGroup = "On Spawn";
            dataSlotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
            dataSlotConfiguration.SetAZType<AZStd::vector<Data::EntityIDType>>();
            SlotId slotId = AddSlot(dataSlotConfiguration);
            AZ_Assert(slotId.IsValid(), "Data slot is not created successfully.");
            out.outputs.push_back(slotId);
        }
        // Data Slot: SpawnedEntitiesList...


        outs.push_back(out);
    }


    // Generate the execution map
    m_slotExecutionMap = SlotExecution::Map(AZStd::move(ins), AZStd::move(outs));

}


}


