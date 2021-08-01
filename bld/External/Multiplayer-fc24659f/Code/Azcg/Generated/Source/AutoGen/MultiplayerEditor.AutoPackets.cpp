/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Code/Framework/AzNetworking/AzNetworking/AutoGen/AutoPackets_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/Multiplayer/Code/Source/AutoGen/MultiplayerEditor.AutoPackets.xml
 */

#include "MultiplayerEditor.AutoPackets.h"

namespace MultiplayerEditorPackets
{
    EditorServerInit::EditorServerInit
    (
        bool lastUpdate,
        AzNetworking::ByteBuffer<16379> assetData
    )
        : m_lastUpdate(lastUpdate)
        , m_assetData(assetData)
    {
        ;
    }

    AzNetworking::PacketType EditorServerInit::GetPacketType() const
    {
        return Type;
    }

    bool EditorServerInit::operator ==([[maybe_unused]] const EditorServerInit& rhs) const
    {
        if (m_lastUpdate != rhs.m_lastUpdate)
        {
            return false;
        }
        if (m_assetData != rhs.m_assetData)
        {
            return false;
        }
        return true;
    }

    AZStd::unique_ptr<AzNetworking::IPacket> EditorServerInit::Clone() const
    {
        AZStd::unique_ptr<EditorServerInit> result = AZStd::make_unique<EditorServerInit>();
        result->m_lastUpdate = m_lastUpdate;
        result->m_assetData = m_assetData;
        return result;
    }

    bool EditorServerInit::Serialize(AzNetworking::ISerializer& serializer)
    {
        serializer.Serialize(m_lastUpdate, "lastUpdate");
        serializer.Serialize(m_assetData, "assetData");
        return serializer.IsValid();
    }

    AzNetworking::PacketType EditorServerReady::GetPacketType() const
    {
        return Type;
    }

    bool EditorServerReady::operator ==([[maybe_unused]] const EditorServerReady& rhs) const
    {
        return true;
    }

    AZStd::unique_ptr<AzNetworking::IPacket> EditorServerReady::Clone() const
    {
        AZStd::unique_ptr<EditorServerReady> result = AZStd::make_unique<EditorServerReady>();
        return result;
    }

    bool EditorServerReady::Serialize(AzNetworking::ISerializer& serializer)
    {
        return serializer.IsValid();
    }

}

