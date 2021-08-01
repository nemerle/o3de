/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Code/Framework/AzNetworking/AzNetworking/AutoGen/AutoPackets_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/Multiplayer/Code/Source/AutoGen/Multiplayer.AutoPackets.xml
 */

#include "Multiplayer.AutoPackets.h"

namespace MultiplayerPackets
{
    Connect::Connect
    (
        uint16_t networkProtocolVersion,
        Multiplayer::LongNetworkString ticket
    )
        : m_networkProtocolVersion(networkProtocolVersion)
        , m_ticket(ticket)
    {
        ;
    }

    AzNetworking::PacketType Connect::GetPacketType() const
    {
        return Type;
    }

    bool Connect::operator ==([[maybe_unused]] const Connect& rhs) const
    {
        if (m_networkProtocolVersion != rhs.m_networkProtocolVersion)
        {
            return false;
        }
        if (m_ticket != rhs.m_ticket)
        {
            return false;
        }
        return true;
    }

    AZStd::unique_ptr<AzNetworking::IPacket> Connect::Clone() const
    {
        AZStd::unique_ptr<Connect> result = AZStd::make_unique<Connect>();
        result->m_networkProtocolVersion = m_networkProtocolVersion;
        result->m_ticket = m_ticket;
        return result;
    }

    bool Connect::Serialize(AzNetworking::ISerializer& serializer)
    {
        serializer.Serialize(m_networkProtocolVersion, "networkProtocolVersion");
        serializer.Serialize(m_ticket, "ticket");
        return serializer.IsValid();
    }

    Accept::Accept
    (
        Multiplayer::HostId hostId,
        Multiplayer::LongNetworkString map
    )
        : m_hostId(hostId)
        , m_map(map)
    {
        ;
    }

    AzNetworking::PacketType Accept::GetPacketType() const
    {
        return Type;
    }

    bool Accept::operator ==([[maybe_unused]] const Accept& rhs) const
    {
        if (m_hostId != rhs.m_hostId)
        {
            return false;
        }
        if (m_map != rhs.m_map)
        {
            return false;
        }
        return true;
    }

    AZStd::unique_ptr<AzNetworking::IPacket> Accept::Clone() const
    {
        AZStd::unique_ptr<Accept> result = AZStd::make_unique<Accept>();
        result->m_hostId = m_hostId;
        result->m_map = m_map;
        return result;
    }

    bool Accept::Serialize(AzNetworking::ISerializer& serializer)
    {
        serializer.Serialize(m_hostId, "hostId");
        serializer.Serialize(m_map, "map");
        return serializer.IsValid();
    }

    ReadyForEntityUpdates::ReadyForEntityUpdates
    (
        bool readyForEntityUpdates
    )
        : m_readyForEntityUpdates(readyForEntityUpdates)
    {
        ;
    }

    AzNetworking::PacketType ReadyForEntityUpdates::GetPacketType() const
    {
        return Type;
    }

    bool ReadyForEntityUpdates::operator ==([[maybe_unused]] const ReadyForEntityUpdates& rhs) const
    {
        if (m_readyForEntityUpdates != rhs.m_readyForEntityUpdates)
        {
            return false;
        }
        return true;
    }

    AZStd::unique_ptr<AzNetworking::IPacket> ReadyForEntityUpdates::Clone() const
    {
        AZStd::unique_ptr<ReadyForEntityUpdates> result = AZStd::make_unique<ReadyForEntityUpdates>();
        result->m_readyForEntityUpdates = m_readyForEntityUpdates;
        return result;
    }

    bool ReadyForEntityUpdates::Serialize(AzNetworking::ISerializer& serializer)
    {
        serializer.Serialize(m_readyForEntityUpdates, "readyForEntityUpdates");
        return serializer.IsValid();
    }

    SyncConsole::SyncConsole
    (
        AZStd::fixed_vector<Multiplayer::LongNetworkString, 32> commandSet
    )
        : m_commandSet(commandSet)
    {
        ;
    }

    AzNetworking::PacketType SyncConsole::GetPacketType() const
    {
        return Type;
    }

    bool SyncConsole::operator ==([[maybe_unused]] const SyncConsole& rhs) const
    {
        if (m_commandSet != rhs.m_commandSet)
        {
            return false;
        }
        return true;
    }

    AZStd::unique_ptr<AzNetworking::IPacket> SyncConsole::Clone() const
    {
        AZStd::unique_ptr<SyncConsole> result = AZStd::make_unique<SyncConsole>();
        result->m_commandSet = m_commandSet;
        return result;
    }

    bool SyncConsole::Serialize(AzNetworking::ISerializer& serializer)
    {
        serializer.Serialize(m_commandSet, "commandSet");
        return serializer.IsValid();
    }

    ConsoleCommand::ConsoleCommand
    (
        Multiplayer::LongNetworkString command
    )
        : m_command(command)
    {
        ;
    }

    AzNetworking::PacketType ConsoleCommand::GetPacketType() const
    {
        return Type;
    }

    bool ConsoleCommand::operator ==([[maybe_unused]] const ConsoleCommand& rhs) const
    {
        if (m_command != rhs.m_command)
        {
            return false;
        }
        return true;
    }

    AZStd::unique_ptr<AzNetworking::IPacket> ConsoleCommand::Clone() const
    {
        AZStd::unique_ptr<ConsoleCommand> result = AZStd::make_unique<ConsoleCommand>();
        result->m_command = m_command;
        return result;
    }

    bool ConsoleCommand::Serialize(AzNetworking::ISerializer& serializer)
    {
        serializer.Serialize(m_command, "command");
        return serializer.IsValid();
    }

    EntityUpdates::EntityUpdates
    (
        AZ::TimeMs hostTimeMs,
        Multiplayer::HostFrameId hostFrameId,
        AZStd::fixed_vector<Multiplayer::NetworkEntityUpdateMessage, Multiplayer::MaxAggregateEntityMessages> entityMessages
    )
        : m_hostTimeMs(hostTimeMs)
        , m_hostFrameId(hostFrameId)
        , m_entityMessages(entityMessages)
    {
        ;
    }

    AzNetworking::PacketType EntityUpdates::GetPacketType() const
    {
        return Type;
    }

    bool EntityUpdates::operator ==([[maybe_unused]] const EntityUpdates& rhs) const
    {
        if (m_hostTimeMs != rhs.m_hostTimeMs)
        {
            return false;
        }
        if (m_hostFrameId != rhs.m_hostFrameId)
        {
            return false;
        }
        if (m_entityMessages != rhs.m_entityMessages)
        {
            return false;
        }
        return true;
    }

    AZStd::unique_ptr<AzNetworking::IPacket> EntityUpdates::Clone() const
    {
        AZStd::unique_ptr<EntityUpdates> result = AZStd::make_unique<EntityUpdates>();
        result->m_hostTimeMs = m_hostTimeMs;
        result->m_hostFrameId = m_hostFrameId;
        result->m_entityMessages = m_entityMessages;
        return result;
    }

    bool EntityUpdates::Serialize(AzNetworking::ISerializer& serializer)
    {
        serializer.Serialize(m_hostTimeMs, "hostTimeMs");
        serializer.Serialize(m_hostFrameId, "hostFrameId");
        serializer.Serialize(m_entityMessages, "entityMessages");
        return serializer.IsValid();
    }

    EntityRpcs::EntityRpcs
    (
        AZStd::fixed_vector<Multiplayer::NetworkEntityRpcMessage, Multiplayer::MaxAggregateRpcMessages> entityRpcs
    )
        : m_entityRpcs(entityRpcs)
    {
        ;
    }

    AzNetworking::PacketType EntityRpcs::GetPacketType() const
    {
        return Type;
    }

    bool EntityRpcs::operator ==([[maybe_unused]] const EntityRpcs& rhs) const
    {
        if (m_entityRpcs != rhs.m_entityRpcs)
        {
            return false;
        }
        return true;
    }

    AZStd::unique_ptr<AzNetworking::IPacket> EntityRpcs::Clone() const
    {
        AZStd::unique_ptr<EntityRpcs> result = AZStd::make_unique<EntityRpcs>();
        result->m_entityRpcs = m_entityRpcs;
        return result;
    }

    bool EntityRpcs::Serialize(AzNetworking::ISerializer& serializer)
    {
        serializer.Serialize(m_entityRpcs, "entityRpcs");
        return serializer.IsValid();
    }

    ClientMigration::ClientMigration
    (
        uint64_t temporaryUserIdentifier,
        AzNetworking::IpAddress remoteServerAddress,
        AZ::TimeMs lastInputGameTimeMs
    )
        : m_temporaryUserIdentifier(temporaryUserIdentifier)
        , m_remoteServerAddress(remoteServerAddress)
        , m_lastInputGameTimeMs(lastInputGameTimeMs)
    {
        ;
    }

    AzNetworking::PacketType ClientMigration::GetPacketType() const
    {
        return Type;
    }

    bool ClientMigration::operator ==([[maybe_unused]] const ClientMigration& rhs) const
    {
        if (m_temporaryUserIdentifier != rhs.m_temporaryUserIdentifier)
        {
            return false;
        }
        if (m_remoteServerAddress != rhs.m_remoteServerAddress)
        {
            return false;
        }
        if (m_lastInputGameTimeMs != rhs.m_lastInputGameTimeMs)
        {
            return false;
        }
        return true;
    }

    AZStd::unique_ptr<AzNetworking::IPacket> ClientMigration::Clone() const
    {
        AZStd::unique_ptr<ClientMigration> result = AZStd::make_unique<ClientMigration>();
        result->m_temporaryUserIdentifier = m_temporaryUserIdentifier;
        result->m_remoteServerAddress = m_remoteServerAddress;
        result->m_lastInputGameTimeMs = m_lastInputGameTimeMs;
        return result;
    }

    bool ClientMigration::Serialize(AzNetworking::ISerializer& serializer)
    {
        serializer.Serialize(m_temporaryUserIdentifier, "temporaryUserIdentifier");
        serializer.Serialize(m_remoteServerAddress, "remoteServerAddress");
        serializer.Serialize(m_lastInputGameTimeMs, "lastInputGameTimeMs");
        return serializer.IsValid();
    }

}

