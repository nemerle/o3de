/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/AutoGen/ScriptCanvasGrammar_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/ScriptCanvas/Code/Include/ScriptCanvas/Internal/Nodes/StringFormatted.ScriptCanvasGrammar.xml
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

#include "Include/ScriptCanvas/Internal/Nodes/StringFormatted.h"

void ScriptCanvas::Nodes::Internal::StringFormatted::ConfigureSlots()
{
    ScriptCanvas::Node::ConfigureSlots();

    // In
    {
        ScriptCanvas::ExecutionSlotConfiguration slotConfiguration;
        slotConfiguration.m_name = "In";
        slotConfiguration.m_toolTip = "Input signal";
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
}


bool ScriptCanvas::Nodes::Internal::StringFormatted::RequiresDynamicSlotOrdering() const
{
    return false;
}


bool ScriptCanvas::Nodes::Internal::StringFormatted::IsDeprecated() const
{
    return false;
}


void ScriptCanvas::Nodes::Internal::StringFormatted::Reflect(AZ::ReflectContext* context)
{
    static_assert((std::is_base_of<ScriptCanvas::Node, ScriptCanvas::Node>::value), "Script Canvas nodes require the first base class to be derived from ScriptCanvas::Node");

    if (AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
    {
        serializeContext->Class<ScriptCanvas::Nodes::Internal::StringFormatted, ScriptCanvas::Node>()
            ->Version(1)
            ->Field("m_format", &StringFormatted::m_format)
            ->Field("m_numericPrecision", &StringFormatted::m_numericPrecision)
            ->Field("m_arrayBindingMap", &StringFormatted::m_arrayBindingMap)
            ->Field("m_unresolvedString", &StringFormatted::m_unresolvedString)
            ->Field("m_formatSlotMap", &StringFormatted::m_formatSlotMap)
        ;

        if (AZ::EditContext* editContext = serializeContext->GetEditContext())
        {
            editContext->Class<ScriptCanvas::Nodes::Internal::StringFormatted>("StringFormatted", "Base class for any nodes that use string formatting capabilities.")
                ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                    ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                    ->Attribute(AZ::Edit::Attributes::Category, "Internal")
                    ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                ->DataElement(AZ::Edit::UIHandlers::Default, &StringFormatted::m_format, "String", "The format string; any word within {} will create a data pin on the node." )
                    ->Attribute(AZ::Edit::Attributes::StringLineEditingCompleteNotify, &StringFormatted::OnFormatChanged)
                ->DataElement(AZ::Edit::UIHandlers::Default, &StringFormatted::m_numericPrecision, "Precision", "The precision with which to print any numeric values." )
                    ->Attribute(AZ::Edit::Attributes::Min, 0)
                    ->Attribute(AZ::Edit::Attributes::Max, 24)
            ;
        }
    }
}



