/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Code/Framework/AzNetworking/AzNetworking/AutoGen/AutoPackets_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Code/Framework/AzNetworking/AzNetworking/AutoGen/CorePackets.AutoPackets.xml
 */

#include "CorePackets.AutoPackets.h"

namespace CorePackets
{
    InitiateConnectionPacket::InitiateConnectionPacket
    (
        AzNetworking::UdpPacketEncodingBuffer handshakeBuffer
    )
        : m_handshakeBuffer(handshakeBuffer)
    {
        ;
    }

    AzNetworking::PacketType InitiateConnectionPacket::GetPacketType() const
    {
        return Type;
    }

    bool InitiateConnectionPacket::operator ==([[maybe_unused]] const InitiateConnectionPacket& rhs) const
    {
        if (m_handshakeBuffer != rhs.m_handshakeBuffer)
        {
            return false;
        }
        return true;
    }

    AZStd::unique_ptr<AzNetworking::IPacket> InitiateConnectionPacket::Clone() const
    {
        AZStd::unique_ptr<InitiateConnectionPacket> result = AZStd::make_unique<InitiateConnectionPacket>();
        result->m_handshakeBuffer = m_handshakeBuffer;
        return result;
    }

    bool InitiateConnectionPacket::Serialize(AzNetworking::ISerializer& serializer)
    {
        serializer.Serialize(m_handshakeBuffer, "handshakeBuffer");
        return serializer.IsValid();
    }

    ConnectionHandshakePacket::ConnectionHandshakePacket
    (
        AzNetworking::UdpPacketEncodingBuffer handshakeBuffer
    )
        : m_handshakeBuffer(handshakeBuffer)
    {
        ;
    }

    AzNetworking::PacketType ConnectionHandshakePacket::GetPacketType() const
    {
        return Type;
    }

    bool ConnectionHandshakePacket::operator ==([[maybe_unused]] const ConnectionHandshakePacket& rhs) const
    {
        if (m_handshakeBuffer != rhs.m_handshakeBuffer)
        {
            return false;
        }
        return true;
    }

    AZStd::unique_ptr<AzNetworking::IPacket> ConnectionHandshakePacket::Clone() const
    {
        AZStd::unique_ptr<ConnectionHandshakePacket> result = AZStd::make_unique<ConnectionHandshakePacket>();
        result->m_handshakeBuffer = m_handshakeBuffer;
        return result;
    }

    bool ConnectionHandshakePacket::Serialize(AzNetworking::ISerializer& serializer)
    {
        serializer.Serialize(m_handshakeBuffer, "handshakeBuffer");
        return serializer.IsValid();
    }

    TerminateConnectionPacket::TerminateConnectionPacket
    (
        AzNetworking::DisconnectReason disconnectReason
    )
        : m_disconnectReason(disconnectReason)
    {
        ;
    }

    AzNetworking::PacketType TerminateConnectionPacket::GetPacketType() const
    {
        return Type;
    }

    bool TerminateConnectionPacket::operator ==([[maybe_unused]] const TerminateConnectionPacket& rhs) const
    {
        if (m_disconnectReason != rhs.m_disconnectReason)
        {
            return false;
        }
        return true;
    }

    AZStd::unique_ptr<AzNetworking::IPacket> TerminateConnectionPacket::Clone() const
    {
        AZStd::unique_ptr<TerminateConnectionPacket> result = AZStd::make_unique<TerminateConnectionPacket>();
        result->m_disconnectReason = m_disconnectReason;
        return result;
    }

    bool TerminateConnectionPacket::Serialize(AzNetworking::ISerializer& serializer)
    {
        serializer.Serialize(m_disconnectReason, "disconnectReason");
        return serializer.IsValid();
    }

    AzNetworking::PacketType HeartbeatPacket::GetPacketType() const
    {
        return Type;
    }

    bool HeartbeatPacket::operator ==([[maybe_unused]] const HeartbeatPacket& rhs) const
    {
        return true;
    }

    AZStd::unique_ptr<AzNetworking::IPacket> HeartbeatPacket::Clone() const
    {
        AZStd::unique_ptr<HeartbeatPacket> result = AZStd::make_unique<HeartbeatPacket>();
        return result;
    }

    bool HeartbeatPacket::Serialize(AzNetworking::ISerializer& serializer)
    {
        return serializer.IsValid();
    }

    FragmentedPacket::FragmentedPacket
    (
        AzNetworking::SequenceId unfragmentedSequence,
        AzNetworking::SequenceId fragmentSequence,
        uint8_t chunkIndex,
        uint8_t chunkCount,
        AzNetworking::ChunkBuffer chunkBuffer
    )
        : m_unfragmentedSequence(unfragmentedSequence)
        , m_fragmentSequence(fragmentSequence)
        , m_chunkIndex(chunkIndex)
        , m_chunkCount(chunkCount)
        , m_chunkBuffer(chunkBuffer)
    {
        ;
    }

    AzNetworking::PacketType FragmentedPacket::GetPacketType() const
    {
        return Type;
    }

    bool FragmentedPacket::operator ==([[maybe_unused]] const FragmentedPacket& rhs) const
    {
        if (m_unfragmentedSequence != rhs.m_unfragmentedSequence)
        {
            return false;
        }
        if (m_fragmentSequence != rhs.m_fragmentSequence)
        {
            return false;
        }
        if (m_chunkIndex != rhs.m_chunkIndex)
        {
            return false;
        }
        if (m_chunkCount != rhs.m_chunkCount)
        {
            return false;
        }
        if (m_chunkBuffer != rhs.m_chunkBuffer)
        {
            return false;
        }
        return true;
    }

    AZStd::unique_ptr<AzNetworking::IPacket> FragmentedPacket::Clone() const
    {
        AZStd::unique_ptr<FragmentedPacket> result = AZStd::make_unique<FragmentedPacket>();
        result->m_unfragmentedSequence = m_unfragmentedSequence;
        result->m_fragmentSequence = m_fragmentSequence;
        result->m_chunkIndex = m_chunkIndex;
        result->m_chunkCount = m_chunkCount;
        result->m_chunkBuffer = m_chunkBuffer;
        return result;
    }

    bool FragmentedPacket::Serialize(AzNetworking::ISerializer& serializer)
    {
        serializer.Serialize(m_unfragmentedSequence, "unfragmentedSequence");
        serializer.Serialize(m_fragmentSequence, "fragmentSequence");
        serializer.Serialize(m_chunkIndex, "chunkIndex");
        serializer.Serialize(m_chunkCount, "chunkCount");
        serializer.Serialize(m_chunkBuffer, "chunkBuffer");
        return serializer.IsValid();
    }

}

