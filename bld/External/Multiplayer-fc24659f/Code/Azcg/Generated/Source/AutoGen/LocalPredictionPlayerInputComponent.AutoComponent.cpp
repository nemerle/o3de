/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/Multiplayer/Code/Source/AutoGen/AutoComponent_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/Multiplayer/Code/Source/AutoGen/LocalPredictionPlayerInputComponent.AutoComponent.xml
 */

#include "LocalPredictionPlayerInputComponent.AutoComponent.h"
#include <AzCore/Console/IConsole.h>
#include <AzCore/Console/ILogger.h>
#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/Serialization/EditContext.h>
#include <AzCore/RTTI/BehaviorContext.h>
#include <AzCore/Component/Entity.h>
#include <Multiplayer/Components/NetBindComponent.h>
#include <Multiplayer/NetworkEntity/NetworkEntityRpcMessage.h>
#include <Multiplayer/Components/LocalPredictionPlayerInputComponent.h>
#include <Multiplayer/Components/NetworkTransformComponent.h>

namespace Multiplayer
{
    Multiplayer::NetComponentId LocalPredictionPlayerInputComponentBase::s_netComponentId = Multiplayer::InvalidNetComponentId;

    namespace LocalPredictionPlayerInputComponentInternal
    {
        enum class RemoteProcedure
        {
            // Server to Client
            // Server to Autonomous
            SendClientInputCorrection,
            // Server to Servers
            // Client to Servers
            SendClientInput,
            SendMigrateClientInput,
            MAX
        };


        enum class NetworkProperties
        {
            LastInputId,
            MAX
        };


        enum class AuthorityToClientDirtyEnum
        {
            Count
        };

        enum class AuthorityToServerDirtyEnum
        {
            LastInputId_DirtyFlag,
            Count
        };

        enum class AuthorityToAutonomousDirtyEnum
        {
            Count
        };

        enum class AutonomousToAuthorityDirtyEnum
        {
            Count
        };

        
        
        
        struct SendClientInputCorrectionRpcStruct
            : public Multiplayer::IRpcParamStruct
        {
            SendClientInputCorrectionRpcStruct()
            {
                ;
            }

            SendClientInputCorrectionRpcStruct(const Multiplayer::ClientInputId& inputId, const AzNetworking::PacketEncodingBuffer& correction)
            :   m_inputId(inputId)
            ,   m_correction(correction)
            {
                ;
            }

            bool Serialize(AzNetworking::ISerializer& serializer)
            {
                bool ret(true);
                ret &= serializer.Serialize(m_inputId, "inputId");
                ret &= serializer.Serialize(m_correction, "correction");
                if (!ret)
                {
                    AZLOG_ERROR("Failed to serialize SendClientInputCorrectionRpcStruct");
                }
                return ret;
            };

            Multiplayer::ClientInputId m_inputId;
            AzNetworking::PacketEncodingBuffer m_correction;
        };

        
        struct SendClientInputRpcStruct
            : public Multiplayer::IRpcParamStruct
        {
            SendClientInputRpcStruct()
            {
                ;
            }

            SendClientInputRpcStruct(const Multiplayer::NetworkInputArray& inputArray, const AZ::HashValue32& stateHash, const AzNetworking::PacketEncodingBuffer& clientState)
            :   m_inputArray(inputArray)
            ,   m_stateHash(stateHash)
            ,   m_clientState(clientState)
            {
                ;
            }

            bool Serialize(AzNetworking::ISerializer& serializer)
            {
                bool ret(true);
                ret &= serializer.Serialize(m_inputArray, "inputArray");
                ret &= serializer.Serialize(m_stateHash, "stateHash");
                ret &= serializer.Serialize(m_clientState, "clientState");
                if (!ret)
                {
                    AZLOG_ERROR("Failed to serialize SendClientInputRpcStruct");
                }
                return ret;
            };

            Multiplayer::NetworkInputArray m_inputArray;
            AZ::HashValue32 m_stateHash;
            AzNetworking::PacketEncodingBuffer m_clientState;
        };

        struct SendMigrateClientInputRpcStruct
            : public Multiplayer::IRpcParamStruct
        {
            SendMigrateClientInputRpcStruct()
            {
                ;
            }

            SendMigrateClientInputRpcStruct(const Multiplayer::NetworkInputMigrationVector& inputArray)
            :   m_inputArray(inputArray)
            {
                ;
            }

            bool Serialize(AzNetworking::ISerializer& serializer)
            {
                bool ret(true);
                ret &= serializer.Serialize(m_inputArray, "inputArray");
                if (!ret)
                {
                    AZLOG_ERROR("Failed to serialize SendMigrateClientInputRpcStruct");
                }
                return ret;
            };

            Multiplayer::NetworkInputMigrationVector m_inputArray;
        };

    }

    LocalPredictionPlayerInputComponentRecord::LocalPredictionPlayerInputComponentRecord
    (
        [[maybe_unused]] Multiplayer::ReplicationRecord& replicationRecord,
        [[maybe_unused]] uint32_t authorityToClientStartOffset,
        [[maybe_unused]] uint32_t authorityToServerStartOffset,
        [[maybe_unused]] uint32_t authorityToAutonomousStartOffset,
        [[maybe_unused]] uint32_t autonomousToAuthorityStartOffset
    )
            : m_authorityToServer(replicationRecord.m_authorityToServer, authorityToServerStartOffset, replicationRecord.ContainsAuthorityToServerBits() ? static_cast<int32_t>(LocalPredictionPlayerInputComponentInternal::AuthorityToServerDirtyEnum::Count) : 0)
    {
        ;
    }

    AZStd::unique_ptr<LocalPredictionPlayerInputComponentRecord> LocalPredictionPlayerInputComponentRecord::AllocateRecord(Multiplayer::ReplicationRecord& replicationRecord)
    {
        uint32_t authorityToClientStart = replicationRecord.m_authorityToClient.GetSize();
        replicationRecord.m_authorityToClient.Resize(authorityToClientStart + static_cast<uint32_t>(LocalPredictionPlayerInputComponentInternal::AuthorityToClientDirtyEnum::Count));

        uint32_t authorityToServerStart = replicationRecord.m_authorityToServer.GetSize();
        replicationRecord.m_authorityToServer.Resize(authorityToServerStart + static_cast<uint32_t>(LocalPredictionPlayerInputComponentInternal::AuthorityToServerDirtyEnum::Count));

        uint32_t authorityToAutonomousStart = replicationRecord.m_authorityToAutonomous.GetSize();
        replicationRecord.m_authorityToAutonomous.Resize(authorityToAutonomousStart + static_cast<uint32_t>(LocalPredictionPlayerInputComponentInternal::AuthorityToAutonomousDirtyEnum::Count));

        uint32_t autonomousToAuthorityStart = replicationRecord.m_autonomousToAuthority.GetSize();
        replicationRecord.m_autonomousToAuthority.Resize(autonomousToAuthorityStart + static_cast<uint32_t>(LocalPredictionPlayerInputComponentInternal::AutonomousToAuthorityDirtyEnum::Count));

        return AZStd::unique_ptr<LocalPredictionPlayerInputComponentRecord>(new LocalPredictionPlayerInputComponentRecord(replicationRecord,
            authorityToClientStart,
            authorityToServerStart,
            authorityToAutonomousStart,
            autonomousToAuthorityStart));
    }

    bool LocalPredictionPlayerInputComponentRecord::CanAttachRecord(Multiplayer::ReplicationRecord& replicationRecord)
    {
        bool canAttach{ true };
        canAttach &= replicationRecord.ContainsAuthorityToClientBits() ? (replicationRecord.GetRemainingAuthorityToClientBits() >= static_cast<uint32_t>(LocalPredictionPlayerInputComponentInternal::AuthorityToClientDirtyEnum::Count)) : true;
        canAttach &= replicationRecord.ContainsAuthorityToServerBits() ? (replicationRecord.GetRemainingAuthorityToServerBits() >= static_cast<uint32_t>(LocalPredictionPlayerInputComponentInternal::AuthorityToServerDirtyEnum::Count)) : true;
        canAttach &= replicationRecord.ContainsAuthorityToAutonomousBits() ? (replicationRecord.GetRemainingAuthorityToAutonomousBits() >= static_cast<uint32_t>(LocalPredictionPlayerInputComponentInternal::AuthorityToAutonomousDirtyEnum::Count)) : true;
        canAttach &= replicationRecord.ContainsAutonomousToAuthorityBits() ? (replicationRecord.GetRemainingAutonomousToAuthorityBits() >= static_cast<uint32_t>(LocalPredictionPlayerInputComponentInternal::AutonomousToAuthorityDirtyEnum::Count)) : true;
        return canAttach;
    }

    LocalPredictionPlayerInputComponentRecord LocalPredictionPlayerInputComponentRecord::AttachRecord(Multiplayer::ReplicationRecord& replicationRecord)
    {
        uint32_t authorityToClientStart = replicationRecord.m_authorityToClientConsumedBits;
        replicationRecord.ConsumeAuthorityToClientBits(static_cast<uint32_t>(LocalPredictionPlayerInputComponentInternal::AuthorityToClientDirtyEnum::Count));

        uint32_t authorityToServerStart = replicationRecord.m_authorityToServerConsumedBits;
        replicationRecord.ConsumeAuthorityToServerBits(static_cast<uint32_t>(LocalPredictionPlayerInputComponentInternal::AuthorityToServerDirtyEnum::Count));

        uint32_t authorityToAutonomousStart = replicationRecord.m_authorityToAutonomousConsumedBits;
        replicationRecord.ConsumeAuthorityToAutonomousBits(static_cast<uint32_t>(LocalPredictionPlayerInputComponentInternal::AuthorityToAutonomousDirtyEnum::Count));

        uint32_t autonomousToAuthorityStart = replicationRecord.m_autonomousToAuthorityConsumedBits;
        replicationRecord.ConsumeAutonomousToAuthorityBits(static_cast<uint32_t>(LocalPredictionPlayerInputComponentInternal::AutonomousToAuthorityDirtyEnum::Count));

        return LocalPredictionPlayerInputComponentRecord(replicationRecord,
            authorityToClientStart,
            authorityToServerStart,
            authorityToAutonomousStart,
            autonomousToAuthorityStart);
    }

    void LocalPredictionPlayerInputComponentRecord::SetPredictableBits()
    {
        
    }

    LocalPredictionPlayerInputComponentControllerBase::LocalPredictionPlayerInputComponentControllerBase(LocalPredictionPlayerInputComponent& parent)
        : MultiplayerController(parent)
    {
        ;
    }

    void LocalPredictionPlayerInputComponentControllerBase::NetworkAttach([[maybe_unused]] Multiplayer::NetBindComponent* netBindComponent, Multiplayer::ReplicationRecord& predictableEntityRecord)
    {
        // Setup the PredictableRecord
        AZStd::unique_ptr<LocalPredictionPlayerInputComponentRecord> predictableRecord = LocalPredictionPlayerInputComponentRecord::AllocateRecord(predictableEntityRecord);
        predictableRecord->SetPredictableBits();
    }

    void LocalPredictionPlayerInputComponentControllerBase::Activate([[maybe_unused]] Multiplayer::EntityIsMigrating entityIsMigrating)
    {
        OnActivate(entityIsMigrating);
    }

    void LocalPredictionPlayerInputComponentControllerBase::Deactivate([[maybe_unused]] Multiplayer::EntityIsMigrating entityIsMigrating)
    {
        OnDeactivate(entityIsMigrating);
    }

    const LocalPredictionPlayerInputComponent& LocalPredictionPlayerInputComponentControllerBase::GetParent() const
    {
        return static_cast<const LocalPredictionPlayerInputComponent&>(GetOwner());
    }

    LocalPredictionPlayerInputComponent& LocalPredictionPlayerInputComponentControllerBase::GetParent()
    {
        return static_cast<LocalPredictionPlayerInputComponent&>(GetOwner());
    }

    const Multiplayer::ClientInputId& LocalPredictionPlayerInputComponentControllerBase::GetLastInputId() const
    {
        return GetParent().m_lastInputId;
    }


    void LocalPredictionPlayerInputComponentControllerBase::SetLastInputId(const Multiplayer::ClientInputId& value)
    {
        if (GetParent().m_lastInputId != value)
        {
            ModifyLastInputId() = value;
        }
    }

    Multiplayer::ClientInputId& LocalPredictionPlayerInputComponentControllerBase::ModifyLastInputId()
    {
        GetParent().m_currentRecord->m_authorityToServer.SetBit(static_cast<int32_t>(LocalPredictionPlayerInputComponentInternal::AuthorityToServerDirtyEnum::LastInputId_DirtyFlag), true);
        GetParent().MarkDirty();
        return static_cast<Multiplayer::ClientInputId&>(GetParent().m_lastInputId);
    }



    
    void LocalPredictionPlayerInputComponentControllerBase::SendClientInput(const Multiplayer::NetworkInputArray& inputArray, const AZ::HashValue32& stateHash, const AzNetworking::PacketEncodingBuffer& clientState)
    {
        constexpr Multiplayer::RpcIndex rpcId = static_cast<Multiplayer::RpcIndex>(LocalPredictionPlayerInputComponentInternal::RemoteProcedure::SendClientInput);
        constexpr AzNetworking::ReliabilityType isReliable = Multiplayer::ReliabilityType::Unreliable;

        const Multiplayer::NetComponentId netComponentId = GetParent().GetNetComponentId();
        Multiplayer::NetworkEntityRpcMessage rpcMessage(Multiplayer::RpcDeliveryType::AutonomousToAuthority, GetNetEntityId(), netComponentId, rpcId, isReliable);
        LocalPredictionPlayerInputComponentInternal::SendClientInputRpcStruct rpcStruct(inputArray, stateHash, clientState);
        rpcMessage.SetRpcParams(rpcStruct);
        GetNetBindComponent()->GetSendAutonomousToAuthorityRpcEvent().Signal(rpcMessage);
    }

    void LocalPredictionPlayerInputComponentControllerBase::SendMigrateClientInput(const Multiplayer::NetworkInputMigrationVector& inputArray)
    {
        constexpr Multiplayer::RpcIndex rpcId = static_cast<Multiplayer::RpcIndex>(LocalPredictionPlayerInputComponentInternal::RemoteProcedure::SendMigrateClientInput);
        constexpr AzNetworking::ReliabilityType isReliable = Multiplayer::ReliabilityType::Unreliable;

        const Multiplayer::NetComponentId netComponentId = GetParent().GetNetComponentId();
        Multiplayer::NetworkEntityRpcMessage rpcMessage(Multiplayer::RpcDeliveryType::AutonomousToAuthority, GetNetEntityId(), netComponentId, rpcId, isReliable);
        LocalPredictionPlayerInputComponentInternal::SendMigrateClientInputRpcStruct rpcStruct(inputArray);
        rpcMessage.SetRpcParams(rpcStruct);
        GetNetBindComponent()->GetSendAutonomousToAuthorityRpcEvent().Signal(rpcMessage);
    }

    void LocalPredictionPlayerInputComponentControllerBase::SendClientInputCorrection(const Multiplayer::ClientInputId& inputId, const AzNetworking::PacketEncodingBuffer& correction)
    {
        constexpr Multiplayer::RpcIndex rpcId = static_cast<Multiplayer::RpcIndex>(LocalPredictionPlayerInputComponentInternal::RemoteProcedure::SendClientInputCorrection);
        constexpr AzNetworking::ReliabilityType isReliable = Multiplayer::ReliabilityType::Unreliable;

        const Multiplayer::NetComponentId netComponentId = GetParent().GetNetComponentId();
        Multiplayer::NetworkEntityRpcMessage rpcMessage(Multiplayer::RpcDeliveryType::AuthorityToAutonomous, GetNetEntityId(), netComponentId, rpcId, isReliable);
        LocalPredictionPlayerInputComponentInternal::SendClientInputCorrectionRpcStruct rpcStruct(inputId, correction);
        rpcMessage.SetRpcParams(rpcStruct);
        GetNetBindComponent()->GetSendAuthorityToAutonomousRpcEvent().Signal(rpcMessage);
    }


    Multiplayer::NetworkTransformComponentController* LocalPredictionPlayerInputComponentControllerBase::GetNetworkTransformComponentController()
    {
        Multiplayer::MultiplayerComponent* controllerComponent = GetParent().GetNetworkTransformComponent();
        return static_cast<Multiplayer::NetworkTransformComponentController*>(controllerComponent->GetController());
    }


    void LocalPredictionPlayerInputComponentBase::Reflect(AZ::ReflectContext* context)
    {
        AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context);
        if (serializeContext)
        {
            serializeContext->Class<LocalPredictionPlayerInputComponentBase, Multiplayer::MultiplayerComponent>()
                ->Version(1)
                
                ;
        }
        ReflectToEditContext(context);
        ReflectToBehaviorContext(context);
    }

    void LocalPredictionPlayerInputComponentBase::ReflectToEditContext(AZ::ReflectContext* context)
    {
        AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context);
        if (serializeContext)
        {
            AZ::EditContext* editContext = serializeContext->GetEditContext();
            if (editContext)
            {
                editContext->Class<LocalPredictionPlayerInputComponentBase>("LocalPredictionPlayerInputComponentBase", "")
                    ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                    ->Attribute(AZ::Edit::Attributes::Category, "Multiplayer")
                    ->Attribute(AZ::Edit::Attributes::AppearsInAddComponentMenu, AZ_CRC_CE("Game"))
                    
                    ;

                editContext->Class<LocalPredictionPlayerInputComponent>("LocalPredictionPlayerInputComponent", "")
                    ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                    ->Attribute(AZ::Edit::Attributes::Category, "Multiplayer")
                    ->Attribute(AZ::Edit::Attributes::AppearsInAddComponentMenu, AZ_CRC_CE("Game"));
            }
        }
    }

    void LocalPredictionPlayerInputComponentBase::ReflectToBehaviorContext(AZ::ReflectContext* context)
    {
        AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(context);
        if (behaviorContext)
        {
            

            behaviorContext->Class<LocalPredictionPlayerInputComponent>("LocalPredictionPlayerInputComponent")
                ->Attribute(AZ::Script::Attributes::Module, "multiplayer")
                ->Attribute(AZ::Script::Attributes::Category, "Multiplayer")

            // Reflect Network Properties Get, Set, and OnChanged methods
            // Reflect RPCs
            
            ;
        }
    }

    void LocalPredictionPlayerInputComponentBase::GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& provided)
    {
        provided.push_back(AZ_CRC_CE("LocalPredictionPlayerInputComponent"));
    }

    void LocalPredictionPlayerInputComponentBase::GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& required)
    {
        required.push_back(AZ_CRC_CE("NetBindService"));
    }

    void LocalPredictionPlayerInputComponentBase::GetDependentServices([[maybe_unused]] AZ::ComponentDescriptorDependencyArrayType& dependent)
    {
    }

    void LocalPredictionPlayerInputComponentBase::GetIncompatibleServices(AZ::ComponentDescriptorDependencyArrayType& incompatible)
    {
        incompatible.push_back(AZ_CRC_CE("LocalPredictionPlayerInputComponent"));
    }

    AZStd::unique_ptr<Multiplayer::IMultiplayerComponentInput> LocalPredictionPlayerInputComponentBase::AllocateComponentInput()
    {
        return nullptr;
    }

    void LocalPredictionPlayerInputComponentBase::Init()
    {
        if (m_netBindComponent == nullptr)
        {
            AZLOG_ERROR("NetBindComponent is null, ensure NetworkAttach is called prior to activating a networked entity");
            return;
        }

        m_networkTransformComponent = FindComponent<Multiplayer::NetworkTransformComponent>();

        OnInit();
        if (m_netBindComponent->HasController())
        {
            ConstructController();
        }
    }

    void LocalPredictionPlayerInputComponentBase::Activate()
    {
        Multiplayer::EntityIsMigrating isMigrating = Multiplayer::EntityIsMigrating::False;// m_netBindComponent->IsMigrationDataValid() ? Multiplayer::EntityIsMigrating::e_True : Multiplayer::EntityIsMigrating::False);
        OnActivate(isMigrating);
        if (m_controller != nullptr)
        {
            m_controller.get()->Activate(isMigrating);
        }
    }

    void LocalPredictionPlayerInputComponentBase::Deactivate()
    {
        Multiplayer::EntityIsMigrating isMigrating = Multiplayer::EntityIsMigrating::False;// m_netBindComponent->IsMigrationDataValid() ? Multiplayer::EntityIsMigrating::e_True : Multiplayer::EntityIsMigrating::False);
        if (m_controller != nullptr)
        {
            m_controller.get()->Deactivate(isMigrating);
        }
        m_controller = nullptr;
        OnDeactivate(isMigrating);
        m_currentRecord = nullptr;
        m_networkTransformComponent = nullptr;
    }

    const Multiplayer::ClientInputId& LocalPredictionPlayerInputComponentBase::GetLastInputId() const
    {
        return m_lastInputId;
    }






    void LocalPredictionPlayerInputComponentBase::SetOwningConnectionId([[maybe_unused]] AzNetworking::ConnectionId connectionId)
    {
    }

    Multiplayer::NetComponentId LocalPredictionPlayerInputComponentBase::GetNetComponentId() const
    {
        return s_netComponentId;
    }

#pragma warning(push)
#pragma warning(disable: 4065) // switch statement contains 'default' but no 'case' labels
    bool LocalPredictionPlayerInputComponentBase::HandleRpcMessage
    (
        [[maybe_unused]] AzNetworking::IConnection* invokingConnection,
        [[maybe_unused]] Multiplayer::NetEntityRole remoteRole,
        Multiplayer::NetworkEntityRpcMessage& message
    )
    {
        const LocalPredictionPlayerInputComponentInternal::RemoteProcedure rpcType = static_cast<LocalPredictionPlayerInputComponentInternal::RemoteProcedure>(message.GetRpcIndex());
        switch (rpcType)
        {
        
        case LocalPredictionPlayerInputComponentInternal::RemoteProcedure::SendClientInput:
            {
                LocalPredictionPlayerInputComponentInternal::SendClientInputRpcStruct rpcStruct;
                const bool paramsSerialized = message.GetRpcParams(rpcStruct);
                if (paramsSerialized && (remoteRole == Multiplayer::NetEntityRole::Autonomous))
                {
                    if (m_controller)
                    {
                        AZ_Assert(GetNetBindComponent()->GetNetEntityRole() == Multiplayer::NetEntityRole::Authority, "Entity proxy does not have authority");
                        m_controller->HandleSendClientInput(invokingConnection, rpcStruct.m_inputArray, rpcStruct.m_stateHash, rpcStruct.m_clientState);
                    }
                }
                else if (paramsSerialized)
                {
                    AZLOG_WARN("Did not handle rpc message, unexpected role (did the networkrole change?), discarding rpc type %d role %d", static_cast<int32_t>(rpcType), static_cast<int32_t>(remoteRole));
                }
                return paramsSerialized;
            }
            break;
        case LocalPredictionPlayerInputComponentInternal::RemoteProcedure::SendMigrateClientInput:
            {
                LocalPredictionPlayerInputComponentInternal::SendMigrateClientInputRpcStruct rpcStruct;
                const bool paramsSerialized = message.GetRpcParams(rpcStruct);
                if (paramsSerialized && (remoteRole == Multiplayer::NetEntityRole::Autonomous))
                {
                    if (m_controller)
                    {
                        AZ_Assert(GetNetBindComponent()->GetNetEntityRole() == Multiplayer::NetEntityRole::Authority, "Entity proxy does not have authority");
                        m_controller->HandleSendMigrateClientInput(invokingConnection, rpcStruct.m_inputArray);
                    }
                }
                else if (paramsSerialized)
                {
                    AZLOG_WARN("Did not handle rpc message, unexpected role (did the networkrole change?), discarding rpc type %d role %d", static_cast<int32_t>(rpcType), static_cast<int32_t>(remoteRole));
                }
                return paramsSerialized;
            }
            break;

        
        case LocalPredictionPlayerInputComponentInternal::RemoteProcedure::SendClientInputCorrection:
            {
                LocalPredictionPlayerInputComponentInternal::SendClientInputCorrectionRpcStruct rpcStruct;
                const bool paramsSerialized = message.GetRpcParams(rpcStruct);
                if (paramsSerialized && (remoteRole == Multiplayer::NetEntityRole::Authority || remoteRole == Multiplayer::NetEntityRole::Server))
                {
                    if (m_controller)
                    {
                        AZ_Assert(GetNetBindComponent()->GetNetEntityRole() == Multiplayer::NetEntityRole::Autonomous, "Entity proxy does not have autonomy");
                        m_controller->HandleSendClientInputCorrection(invokingConnection, rpcStruct.m_inputId, rpcStruct.m_correction);
                    }
                }
                else if (paramsSerialized)
                {
                    AZLOG_WARN("Did not handle rpc message, unexpected role (did the networkrole change?), discarding rpc type %d role %d", static_cast<int32_t>(rpcType), static_cast<int32_t>(remoteRole));
                }
                return paramsSerialized;
            }
            break;

        default:
            return false;
        }
        AZ_Assert(0, "Got unhandled RpcType %d in LocalPredictionPlayerInputComponentBase", static_cast<int32_t>(rpcType));
        return false;
    }
#pragma warning(pop)

    bool LocalPredictionPlayerInputComponentBase::SerializeStateDeltaMessage(Multiplayer::ReplicationRecord& replicationRecord, AzNetworking::ISerializer& serializer)
    {
        if (!LocalPredictionPlayerInputComponentRecord::CanAttachRecord(replicationRecord))
        {
            AZ_Assert(false, "Unable to attach LocalPredictionPlayerInputComponent::LocalPredictionPlayerInputComponentRecord, out no remaining available bits in record");
            serializer.Invalidate();
            return serializer.IsValid();
        }

        LocalPredictionPlayerInputComponentRecord record = LocalPredictionPlayerInputComponentRecord::AttachRecord(replicationRecord);

        if (replicationRecord.ContainsAuthorityToClientBits())
        {
            SerializeAuthorityToClientProperties(record, serializer);
        }
        if (replicationRecord.ContainsAuthorityToServerBits())
        {
            SerializeAuthorityToServerProperties(record, serializer);
        }
        if (replicationRecord.ContainsAuthorityToAutonomousBits())
        {
            SerializeAuthorityToAutonomousProperties(record, serializer);
        }
        if (replicationRecord.ContainsAutonomousToAuthorityBits())
        {
            SerializeAutonomousToAuthorityProperties(record, serializer);
        }
        return serializer.IsValid();
    }

    void LocalPredictionPlayerInputComponentBase::NotifyStateDeltaChanges(Multiplayer::ReplicationRecord& replicationRecord)
    {
        LocalPredictionPlayerInputComponentRecord record = LocalPredictionPlayerInputComponentRecord::AttachRecord(replicationRecord);
        if (replicationRecord.ContainsAuthorityToClientBits())
        {
            NotifyChangesAuthorityToClientProperties(record);
        }
        if (replicationRecord.ContainsAuthorityToServerBits())
        {
            NotifyChangesAuthorityToServerProperties(record);
        }
        if (replicationRecord.ContainsAuthorityToAutonomousBits())
        {
            NotifyChangesAuthorityToAutonomousProperties(record);
        }
        if (replicationRecord.ContainsAutonomousToAuthorityBits())
        {
            NotifyChangesAutonomousToAuthorityProperties(record);
        }
    }

    bool LocalPredictionPlayerInputComponentBase::HasController() const
    {
        return m_controller != nullptr;
    }

    Multiplayer::MultiplayerController* LocalPredictionPlayerInputComponentBase::GetController()
    {
        return m_controller.get();
    }

    void LocalPredictionPlayerInputComponentBase::ConstructController()
    {
        AZ_Assert(m_controller == nullptr, "We already have a LocalPredictionPlayerInputComponentController...");
        m_controller = AZStd::make_unique<LocalPredictionPlayerInputComponentController>(static_cast<LocalPredictionPlayerInputComponent&>(*this));
    }

    void LocalPredictionPlayerInputComponentBase::DestructController()
    {
        AZ_Assert(m_controller != nullptr, "We don't have a LocalPredictionPlayerInputComponentController...");
        m_controller = nullptr;
    }

    void LocalPredictionPlayerInputComponentBase::ActivateController(Multiplayer::EntityIsMigrating entityIsMigrating)
    {
        if (m_controller)
        {
            m_controller->Activate(entityIsMigrating);
        }
    }

    void LocalPredictionPlayerInputComponentBase::DeactivateController(Multiplayer::EntityIsMigrating entityIsMigrating)
    {
        if (m_controller)
        {
            m_controller->Deactivate(entityIsMigrating);
        }
    }

    void LocalPredictionPlayerInputComponentBase::NetworkAttach(Multiplayer::NetBindComponent* netBindComponent, Multiplayer::ReplicationRecord& currentEntityRecord, Multiplayer::ReplicationRecord& predictableEntityRecord)
    {
        m_netBindComponent = netBindComponent;
        

        // Setup the CurrentRecord
        if (m_currentRecord == nullptr)
        {
            m_currentRecord = LocalPredictionPlayerInputComponentRecord::AllocateRecord(currentEntityRecord);
        }
        m_controller.get()->NetworkAttach(netBindComponent, predictableEntityRecord);
    }

    bool LocalPredictionPlayerInputComponentBase::SerializeAuthorityToServerProperties([[maybe_unused]] LocalPredictionPlayerInputComponentRecord& replicationRecord, AzNetworking::ISerializer& serializer)
    {
        [[maybe_unused]] Multiplayer::MultiplayerStats& stats = Multiplayer::GetMultiplayer()->GetStats();
        // We modify the record if we are writing an update so that we don't notify for a change that really didn't change the value (just a duplicated send from the server)
        [[maybe_unused]] bool modifyRecord = serializer.GetSerializerMode() == AzNetworking::SerializerMode::WriteToObject;
        Multiplayer::SerializeNetworkPropertyHelper
        (
            serializer,
            modifyRecord,
            replicationRecord.m_authorityToServer,
            static_cast<int32_t>(LocalPredictionPlayerInputComponentInternal::AuthorityToServerDirtyEnum::LastInputId_DirtyFlag),
            m_lastInputId,
            "LastInputId",
            GetNetComponentId(),
            static_cast<Multiplayer::PropertyIndex>(LocalPredictionPlayerInputComponentInternal::NetworkProperties::LastInputId),
            stats
        );
        return serializer.IsValid();
    }

    void LocalPredictionPlayerInputComponentBase::NotifyChangesAuthorityToServerProperties([[maybe_unused]] const LocalPredictionPlayerInputComponentRecord& replicationRecord) const
    {
    }

    bool LocalPredictionPlayerInputComponentBase::SerializeAuthorityToClientProperties([[maybe_unused]] LocalPredictionPlayerInputComponentRecord& replicationRecord, AzNetworking::ISerializer& serializer)
    {
        return serializer.IsValid();
    }

    void LocalPredictionPlayerInputComponentBase::NotifyChangesAuthorityToClientProperties([[maybe_unused]] const LocalPredictionPlayerInputComponentRecord& replicationRecord) const
    {
    }

    bool LocalPredictionPlayerInputComponentBase::SerializeAuthorityToAutonomousProperties([[maybe_unused]] LocalPredictionPlayerInputComponentRecord& replicationRecord, AzNetworking::ISerializer& serializer)
    {
        return serializer.IsValid();
    }

    void LocalPredictionPlayerInputComponentBase::NotifyChangesAuthorityToAutonomousProperties([[maybe_unused]] const LocalPredictionPlayerInputComponentRecord& replicationRecord) const
    {
    }

    bool LocalPredictionPlayerInputComponentBase::SerializeAutonomousToAuthorityProperties([[maybe_unused]] LocalPredictionPlayerInputComponentRecord& replicationRecord, AzNetworking::ISerializer& serializer)
    {
        return serializer.IsValid();
    }

    void LocalPredictionPlayerInputComponentBase::NotifyChangesAutonomousToAuthorityProperties([[maybe_unused]] const LocalPredictionPlayerInputComponentRecord& replicationRecord) const
    {
    }


    const Multiplayer::NetworkTransformComponent* LocalPredictionPlayerInputComponentBase::GetNetworkTransformComponent() const
    {
        return m_networkTransformComponent;
    }

    Multiplayer::NetworkTransformComponent* LocalPredictionPlayerInputComponentBase::GetNetworkTransformComponent()
    {
        return m_networkTransformComponent;
    }

    const char* LocalPredictionPlayerInputComponentBase::GetNetworkPropertyName([[maybe_unused]] Multiplayer::PropertyIndex propertyIndex)
    {
        const LocalPredictionPlayerInputComponentInternal::NetworkProperties propertyId = static_cast<LocalPredictionPlayerInputComponentInternal::NetworkProperties>(propertyIndex);
        switch (propertyId)
        {
        case LocalPredictionPlayerInputComponentInternal::NetworkProperties::LastInputId:
            return "LastInputId";
        }
        return "Unknown network property";
    }

    const char* LocalPredictionPlayerInputComponentBase::GetRpcName([[maybe_unused]] Multiplayer::RpcIndex rpcIndex)
    {
        const LocalPredictionPlayerInputComponentInternal::RemoteProcedure rpcId = static_cast<LocalPredictionPlayerInputComponentInternal::RemoteProcedure>(rpcIndex);
        switch (rpcId)
        {
        case LocalPredictionPlayerInputComponentInternal::RemoteProcedure::SendClientInput:
            return "SendClientInput";
        case LocalPredictionPlayerInputComponentInternal::RemoteProcedure::SendClientInputCorrection:
            return "SendClientInputCorrection";
        case LocalPredictionPlayerInputComponentInternal::RemoteProcedure::SendMigrateClientInput:
            return "SendMigrateClientInput";
        }
        return "Unknown Rpc";
    }
}

