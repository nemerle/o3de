/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/AutoGen/ScriptCanvasGrammar_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/Libraries/Operators/Math/OperatorLength.ScriptCanvasGrammar.xml
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

#include "Include/ScriptCanvas/Libraries/Operators/Math/OperatorLength.h"

void ScriptCanvas::Nodes::Operators::OperatorLength::ConfigureSlots()
{
    ScriptCanvas::Node::ConfigureSlots();

            // Length
    {
        ScriptCanvas::DataSlotConfiguration slotConfiguration;
        slotConfiguration.SetAZType<int>();
        slotConfiguration.m_name = "Length";
        slotConfiguration.m_toolTip = "The magnitude or length of the provided vector or quaternion.";
        slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
                                AddSlot(slotConfiguration);
    }
        // In
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "In";
        slotConfiguration.m_toolTip = "";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        AddSlot(slotConfiguration);
    }
    // Out
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Out";
        slotConfiguration.m_toolTip = "";
                    slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Output);
        AddSlot(slotConfiguration);
    }
    // Source
    {
        ScriptCanvas::DynamicDataSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "Source";
        slotConfiguration.m_toolTip = "A vector or quaternion";
            slotConfiguration.SetConnectionType(ScriptCanvas::ConnectionType::Input);
        slotConfiguration.m_dynamicDataType = ScriptCanvas::DynamicDataType::Value;
            slotConfiguration.m_dynamicGroup = AZ::Crc32("SourceGroup");
                        // Restricted Type Contract
        slotConfiguration.m_contractDescs = AZStd::vector<ScriptCanvas::ContractDescriptor>{ { []() { return aznew ScriptCanvas::RestrictedTypeContract({ Data::Type::Vector2(), Data::Type::Vector3(), Data::Type::Vector4(), Data::Type::Quaternion() }); } } };
                    AddSlot(slotConfiguration);
    }
}


bool ScriptCanvas::Nodes::Operators::OperatorLength::RequiresDynamicSlotOrdering() const
{
    return false;
}


bool ScriptCanvas::Nodes::Operators::OperatorLength::IsDeprecated() const
{
    return true;
}


void ScriptCanvas::Nodes::Operators::OperatorLength::Reflect(AZ::ReflectContext* context)
{
    static_assert((std::is_base_of<ScriptCanvas::Node, ScriptCanvas::Node>::value), "Script Canvas nodes require the first base class to be derived from ScriptCanvas::Node");

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<ScriptCanvas::Nodes::Operators::OperatorLength, ScriptCanvas::Node>()
            ->Version(1, &OperatorLengthConverter)
        ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<ScriptCanvas::Nodes::Operators::OperatorLength>("Length", "Given a vector this returns the magnitude (length) of the vector. For a quaternion, magnitude is the cosine of half the angle of rotation.")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                    ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                    ->Attribute(AZ::Edit::Attributes::Category, "Math")
                    ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ->Attribute(ScriptCanvas::Attributes::Node::TitlePaletteOverride, "DeprecatedNodeTitlePalette")
                    ->Attribute(AZ::Script::Attributes::Deprecated, true)
            ;
        }
    }
}


int OperatorLengthProperty::GetLength(ScriptCanvas::Node* owner)
{
    ScriptCanvas::SlotId slotId = GetLengthSlotId(owner);
    const ScriptCanvas::Datum* datum = owner->FindDatum(slotId);
    if (!datum)
    {
        AZ_Error("Script Canvas", false, "Cannot find generated code gen slot with name Length. Has the ScriptCanvas_Property::Name changed without writing a version converter");
    }
    const int* datumValue = datum ? datum->GetAs<int>() : nullptr;
    return datumValue ? *datumValue : int();
}



