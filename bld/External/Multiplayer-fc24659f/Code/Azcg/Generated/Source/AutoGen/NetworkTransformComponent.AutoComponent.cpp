/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/Multiplayer/Code/Source/AutoGen/AutoComponent_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/Multiplayer/Code/Source/AutoGen/NetworkTransformComponent.AutoComponent.xml
 */

#include "NetworkTransformComponent.AutoComponent.h"
#include <AzCore/Console/IConsole.h>
#include <AzCore/Console/ILogger.h>
#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/Serialization/EditContext.h>
#include <AzCore/RTTI/BehaviorContext.h>
#include <AzCore/Component/Entity.h>
#include <Multiplayer/Components/NetBindComponent.h>
#include <Multiplayer/NetworkEntity/NetworkEntityRpcMessage.h>
#include <Multiplayer/Components/NetworkTransformComponent.h>
#include <AzFramework/Components/TransformComponent.h>

namespace Multiplayer
{
    Multiplayer::NetComponentId NetworkTransformComponentBase::s_netComponentId = Multiplayer::InvalidNetComponentId;

    namespace NetworkTransformComponentInternal
    {
        enum class RemoteProcedure
        {
            // Server to Client
            // Server to Autonomous
            // Server to Servers
            // Client to Servers
            MAX
        };


        enum class NetworkProperties
        {
            Rotation,
            Translation,
            Scale,
            ResetCount,
            ParentEntityId,
            ParentAttachmentBoneId,
            MAX
        };


        enum class AuthorityToClientDirtyEnum
        {
            rotation_DirtyFlag,
            translation_DirtyFlag,
            scale_DirtyFlag,
            resetCount_DirtyFlag,
            parentEntityId_DirtyFlag,
            parentAttachmentBoneId_DirtyFlag,
            Count
        };

        enum class AuthorityToServerDirtyEnum
        {
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

        
        
        
        
    }

    NetworkTransformComponentRecord::NetworkTransformComponentRecord
    (
        [[maybe_unused]] Multiplayer::ReplicationRecord& replicationRecord,
        [[maybe_unused]] uint32_t authorityToClientStartOffset,
        [[maybe_unused]] uint32_t authorityToServerStartOffset,
        [[maybe_unused]] uint32_t authorityToAutonomousStartOffset,
        [[maybe_unused]] uint32_t autonomousToAuthorityStartOffset
    )
        : m_authorityToClient(replicationRecord.m_authorityToClient, authorityToClientStartOffset, replicationRecord.ContainsAuthorityToClientBits() ? static_cast<int32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::Count) : 0)
    {
        ;
    }

    AZStd::unique_ptr<NetworkTransformComponentRecord> NetworkTransformComponentRecord::AllocateRecord(Multiplayer::ReplicationRecord& replicationRecord)
    {
        uint32_t authorityToClientStart = replicationRecord.m_authorityToClient.GetSize();
        replicationRecord.m_authorityToClient.Resize(authorityToClientStart + static_cast<uint32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::Count));

        uint32_t authorityToServerStart = replicationRecord.m_authorityToServer.GetSize();
        replicationRecord.m_authorityToServer.Resize(authorityToServerStart + static_cast<uint32_t>(NetworkTransformComponentInternal::AuthorityToServerDirtyEnum::Count));

        uint32_t authorityToAutonomousStart = replicationRecord.m_authorityToAutonomous.GetSize();
        replicationRecord.m_authorityToAutonomous.Resize(authorityToAutonomousStart + static_cast<uint32_t>(NetworkTransformComponentInternal::AuthorityToAutonomousDirtyEnum::Count));

        uint32_t autonomousToAuthorityStart = replicationRecord.m_autonomousToAuthority.GetSize();
        replicationRecord.m_autonomousToAuthority.Resize(autonomousToAuthorityStart + static_cast<uint32_t>(NetworkTransformComponentInternal::AutonomousToAuthorityDirtyEnum::Count));

        return AZStd::unique_ptr<NetworkTransformComponentRecord>(new NetworkTransformComponentRecord(replicationRecord,
            authorityToClientStart,
            authorityToServerStart,
            authorityToAutonomousStart,
            autonomousToAuthorityStart));
    }

    bool NetworkTransformComponentRecord::CanAttachRecord(Multiplayer::ReplicationRecord& replicationRecord)
    {
        bool canAttach{ true };
        canAttach &= replicationRecord.ContainsAuthorityToClientBits() ? (replicationRecord.GetRemainingAuthorityToClientBits() >= static_cast<uint32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::Count)) : true;
        canAttach &= replicationRecord.ContainsAuthorityToServerBits() ? (replicationRecord.GetRemainingAuthorityToServerBits() >= static_cast<uint32_t>(NetworkTransformComponentInternal::AuthorityToServerDirtyEnum::Count)) : true;
        canAttach &= replicationRecord.ContainsAuthorityToAutonomousBits() ? (replicationRecord.GetRemainingAuthorityToAutonomousBits() >= static_cast<uint32_t>(NetworkTransformComponentInternal::AuthorityToAutonomousDirtyEnum::Count)) : true;
        canAttach &= replicationRecord.ContainsAutonomousToAuthorityBits() ? (replicationRecord.GetRemainingAutonomousToAuthorityBits() >= static_cast<uint32_t>(NetworkTransformComponentInternal::AutonomousToAuthorityDirtyEnum::Count)) : true;
        return canAttach;
    }

    NetworkTransformComponentRecord NetworkTransformComponentRecord::AttachRecord(Multiplayer::ReplicationRecord& replicationRecord)
    {
        uint32_t authorityToClientStart = replicationRecord.m_authorityToClientConsumedBits;
        replicationRecord.ConsumeAuthorityToClientBits(static_cast<uint32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::Count));

        uint32_t authorityToServerStart = replicationRecord.m_authorityToServerConsumedBits;
        replicationRecord.ConsumeAuthorityToServerBits(static_cast<uint32_t>(NetworkTransformComponentInternal::AuthorityToServerDirtyEnum::Count));

        uint32_t authorityToAutonomousStart = replicationRecord.m_authorityToAutonomousConsumedBits;
        replicationRecord.ConsumeAuthorityToAutonomousBits(static_cast<uint32_t>(NetworkTransformComponentInternal::AuthorityToAutonomousDirtyEnum::Count));

        uint32_t autonomousToAuthorityStart = replicationRecord.m_autonomousToAuthorityConsumedBits;
        replicationRecord.ConsumeAutonomousToAuthorityBits(static_cast<uint32_t>(NetworkTransformComponentInternal::AutonomousToAuthorityDirtyEnum::Count));

        return NetworkTransformComponentRecord(replicationRecord,
            authorityToClientStart,
            authorityToServerStart,
            authorityToAutonomousStart,
            autonomousToAuthorityStart);
    }

    void NetworkTransformComponentRecord::SetPredictableBits()
    {
        m_authorityToClient.SetBit(static_cast<uint32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::rotation_DirtyFlag), true);
        m_authorityToClient.SetBit(static_cast<uint32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::translation_DirtyFlag), true);
        m_authorityToClient.SetBit(static_cast<uint32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::scale_DirtyFlag), true);
        m_authorityToClient.SetBit(static_cast<uint32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::resetCount_DirtyFlag), true);
        m_authorityToClient.SetBit(static_cast<uint32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::parentEntityId_DirtyFlag), true);
        m_authorityToClient.SetBit(static_cast<uint32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::parentAttachmentBoneId_DirtyFlag), true);

    }

    NetworkTransformComponentControllerBase::NetworkTransformComponentControllerBase(NetworkTransformComponent& parent)
        : MultiplayerController(parent)
    {
        ;
    }

    void NetworkTransformComponentControllerBase::NetworkAttach([[maybe_unused]] Multiplayer::NetBindComponent* netBindComponent, Multiplayer::ReplicationRecord& predictableEntityRecord)
    {
        // Setup the PredictableRecord
        AZStd::unique_ptr<NetworkTransformComponentRecord> predictableRecord = NetworkTransformComponentRecord::AllocateRecord(predictableEntityRecord);
        predictableRecord->SetPredictableBits();
    }

    void NetworkTransformComponentControllerBase::Activate([[maybe_unused]] Multiplayer::EntityIsMigrating entityIsMigrating)
    {
        OnActivate(entityIsMigrating);
    }

    void NetworkTransformComponentControllerBase::Deactivate([[maybe_unused]] Multiplayer::EntityIsMigrating entityIsMigrating)
    {
        OnDeactivate(entityIsMigrating);
    }

    const NetworkTransformComponent& NetworkTransformComponentControllerBase::GetParent() const
    {
        return static_cast<const NetworkTransformComponent&>(GetOwner());
    }

    NetworkTransformComponent& NetworkTransformComponentControllerBase::GetParent()
    {
        return static_cast<NetworkTransformComponent&>(GetOwner());
    }

    const AZ::Quaternion& NetworkTransformComponentControllerBase::GetRotation() const
    {
        return GetParent().m_rotation;
    }

    void NetworkTransformComponentControllerBase::RotationAddEvent(AZ::Event<AZ::Quaternion>::Handler& handler)
    {
        handler.Connect(GetParent().m_rotationEvent);
    }


    void NetworkTransformComponentControllerBase::SetRotation(const AZ::Quaternion& value)
    {
        if (GetParent().m_rotation != value)
        {
            ModifyRotation() = value;
        }
    }

    AZ::Quaternion& NetworkTransformComponentControllerBase::ModifyRotation()
    {
        GetParent().m_currentRecord->m_authorityToClient.SetBit(static_cast<int32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::rotation_DirtyFlag), true);
        GetParent().MarkDirty();
        return static_cast<AZ::Quaternion&>(GetParent().m_rotation.Modify());
    }


    const AZ::Vector3& NetworkTransformComponentControllerBase::GetTranslation() const
    {
        return GetParent().m_translation;
    }

    void NetworkTransformComponentControllerBase::TranslationAddEvent(AZ::Event<AZ::Vector3>::Handler& handler)
    {
        handler.Connect(GetParent().m_translationEvent);
    }


    void NetworkTransformComponentControllerBase::SetTranslation(const AZ::Vector3& value)
    {
        if (GetParent().m_translation != value)
        {
            ModifyTranslation() = value;
        }
    }

    AZ::Vector3& NetworkTransformComponentControllerBase::ModifyTranslation()
    {
        GetParent().m_currentRecord->m_authorityToClient.SetBit(static_cast<int32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::translation_DirtyFlag), true);
        GetParent().MarkDirty();
        return static_cast<AZ::Vector3&>(GetParent().m_translation.Modify());
    }


    const float& NetworkTransformComponentControllerBase::GetScale() const
    {
        return GetParent().m_scale;
    }

    void NetworkTransformComponentControllerBase::ScaleAddEvent(AZ::Event<float>::Handler& handler)
    {
        handler.Connect(GetParent().m_scaleEvent);
    }


    void NetworkTransformComponentControllerBase::SetScale(const float& value)
    {
        if (GetParent().m_scale != value)
        {
            ModifyScale() = value;
        }
    }

    float& NetworkTransformComponentControllerBase::ModifyScale()
    {
        GetParent().m_currentRecord->m_authorityToClient.SetBit(static_cast<int32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::scale_DirtyFlag), true);
        GetParent().MarkDirty();
        return static_cast<float&>(GetParent().m_scale.Modify());
    }


    const uint8_t& NetworkTransformComponentControllerBase::GetResetCount() const
    {
        return GetParent().m_resetCount;
    }

    void NetworkTransformComponentControllerBase::ResetCountAddEvent(AZ::Event<uint8_t>::Handler& handler)
    {
        handler.Connect(GetParent().m_resetCountEvent);
    }


    void NetworkTransformComponentControllerBase::SetResetCount(const uint8_t& value)
    {
        if (GetParent().m_resetCount != value)
        {
            ModifyResetCount() = value;
        }
    }

    uint8_t& NetworkTransformComponentControllerBase::ModifyResetCount()
    {
        GetParent().m_currentRecord->m_authorityToClient.SetBit(static_cast<int32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::resetCount_DirtyFlag), true);
        GetParent().MarkDirty();
        return static_cast<uint8_t&>(GetParent().m_resetCount);
    }


    const NetEntityId& NetworkTransformComponentControllerBase::GetParentEntityId() const
    {
        return GetParent().m_parentEntityId;
    }

    void NetworkTransformComponentControllerBase::ParentEntityIdAddEvent(AZ::Event<NetEntityId>::Handler& handler)
    {
        handler.Connect(GetParent().m_parentEntityIdEvent);
    }


    void NetworkTransformComponentControllerBase::SetParentEntityId(const NetEntityId& value)
    {
        if (GetParent().m_parentEntityId != value)
        {
            ModifyParentEntityId() = value;
        }
    }

    NetEntityId& NetworkTransformComponentControllerBase::ModifyParentEntityId()
    {
        GetParent().m_currentRecord->m_authorityToClient.SetBit(static_cast<int32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::parentEntityId_DirtyFlag), true);
        GetParent().MarkDirty();
        return static_cast<NetEntityId&>(GetParent().m_parentEntityId.Modify());
    }


    const int32_t& NetworkTransformComponentControllerBase::GetParentAttachmentBoneId() const
    {
        return GetParent().m_parentAttachmentBoneId;
    }

    void NetworkTransformComponentControllerBase::ParentAttachmentBoneIdAddEvent(AZ::Event<int32_t>::Handler& handler)
    {
        handler.Connect(GetParent().m_parentAttachmentBoneIdEvent);
    }


    void NetworkTransformComponentControllerBase::SetParentAttachmentBoneId(const int32_t& value)
    {
        if (GetParent().m_parentAttachmentBoneId != value)
        {
            ModifyParentAttachmentBoneId() = value;
        }
    }

    int32_t& NetworkTransformComponentControllerBase::ModifyParentAttachmentBoneId()
    {
        GetParent().m_currentRecord->m_authorityToClient.SetBit(static_cast<int32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::parentAttachmentBoneId_DirtyFlag), true);
        GetParent().MarkDirty();
        return static_cast<int32_t&>(GetParent().m_parentAttachmentBoneId.Modify());
    }



    


    void NetworkTransformComponentBase::Reflect(AZ::ReflectContext* context)
    {
        AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context);
        if (serializeContext)
        {
            serializeContext->Class<NetworkTransformComponentBase, Multiplayer::MultiplayerComponent>()
                ->Version(1)
                
                ;
        }
        ReflectToEditContext(context);
        ReflectToBehaviorContext(context);
    }

    void NetworkTransformComponentBase::ReflectToEditContext(AZ::ReflectContext* context)
    {
        AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context);
        if (serializeContext)
        {
            AZ::EditContext* editContext = serializeContext->GetEditContext();
            if (editContext)
            {
                editContext->Class<NetworkTransformComponentBase>("NetworkTransformComponentBase", "")
                    ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                    ->Attribute(AZ::Edit::Attributes::Category, "Multiplayer")
                    ->Attribute(AZ::Edit::Attributes::AppearsInAddComponentMenu, AZ_CRC_CE("Game"))
                    
                    ;

                editContext->Class<NetworkTransformComponent>("NetworkTransformComponent", "")
                    ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                    ->Attribute(AZ::Edit::Attributes::Category, "Multiplayer")
                    ->Attribute(AZ::Edit::Attributes::AppearsInAddComponentMenu, AZ_CRC_CE("Game"));
            }
        }
    }

    void NetworkTransformComponentBase::ReflectToBehaviorContext(AZ::ReflectContext* context)
    {
        AZ::BehaviorContext* behaviorContext = azrtti_cast<AZ::BehaviorContext*>(context);
        if (behaviorContext)
        {
            

            behaviorContext->Class<NetworkTransformComponent>("NetworkTransformComponent")
                ->Attribute(AZ::Script::Attributes::Module, "multiplayer")
                ->Attribute(AZ::Script::Attributes::Category, "Multiplayer")

            // Reflect Network Properties Get, Set, and OnChanged methods
            // Reflect RPCs
            
            ;
        }
    }

    void NetworkTransformComponentBase::GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& provided)
    {
        provided.push_back(AZ_CRC_CE("NetworkTransformComponent"));
    }

    void NetworkTransformComponentBase::GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& required)
    {
        required.push_back(AZ_CRC_CE("NetBindService"));
    }

    void NetworkTransformComponentBase::GetDependentServices([[maybe_unused]] AZ::ComponentDescriptorDependencyArrayType& dependent)
    {
    }

    void NetworkTransformComponentBase::GetIncompatibleServices(AZ::ComponentDescriptorDependencyArrayType& incompatible)
    {
        incompatible.push_back(AZ_CRC_CE("NetworkTransformComponent"));
    }

    AZStd::unique_ptr<Multiplayer::IMultiplayerComponentInput> NetworkTransformComponentBase::AllocateComponentInput()
    {
        return nullptr;
    }

    void NetworkTransformComponentBase::Init()
    {
        if (m_netBindComponent == nullptr)
        {
            AZLOG_ERROR("NetBindComponent is null, ensure NetworkAttach is called prior to activating a networked entity");
            return;
        }

        m_transformComponent = FindComponent<AzFramework::TransformComponent>();

        OnInit();
        if (m_netBindComponent->HasController())
        {
            ConstructController();
        }
    }

    void NetworkTransformComponentBase::Activate()
    {
        Multiplayer::EntityIsMigrating isMigrating = Multiplayer::EntityIsMigrating::False;// m_netBindComponent->IsMigrationDataValid() ? Multiplayer::EntityIsMigrating::e_True : Multiplayer::EntityIsMigrating::False);
        OnActivate(isMigrating);
        if (m_controller != nullptr)
        {
            m_controller.get()->Activate(isMigrating);
        }
    }

    void NetworkTransformComponentBase::Deactivate()
    {
        Multiplayer::EntityIsMigrating isMigrating = Multiplayer::EntityIsMigrating::False;// m_netBindComponent->IsMigrationDataValid() ? Multiplayer::EntityIsMigrating::e_True : Multiplayer::EntityIsMigrating::False);
        if (m_controller != nullptr)
        {
            m_controller.get()->Deactivate(isMigrating);
        }
        m_controller = nullptr;
        OnDeactivate(isMigrating);
        m_currentRecord = nullptr;
        m_transformComponent = nullptr;
    }

    const AZ::Quaternion& NetworkTransformComponentBase::GetRotation() const
    {
        return m_rotation;
    }

    void NetworkTransformComponentBase::RotationAddEvent(AZ::Event<AZ::Quaternion>::Handler& handler)
    {
        handler.Connect(m_rotationEvent);
    }


    const AZ::Vector3& NetworkTransformComponentBase::GetTranslation() const
    {
        return m_translation;
    }

    void NetworkTransformComponentBase::TranslationAddEvent(AZ::Event<AZ::Vector3>::Handler& handler)
    {
        handler.Connect(m_translationEvent);
    }


    const float& NetworkTransformComponentBase::GetScale() const
    {
        return m_scale;
    }

    void NetworkTransformComponentBase::ScaleAddEvent(AZ::Event<float>::Handler& handler)
    {
        handler.Connect(m_scaleEvent);
    }


    const uint8_t& NetworkTransformComponentBase::GetResetCount() const
    {
        return m_resetCount;
    }

    void NetworkTransformComponentBase::ResetCountAddEvent(AZ::Event<uint8_t>::Handler& handler)
    {
        handler.Connect(m_resetCountEvent);
    }


    const NetEntityId& NetworkTransformComponentBase::GetParentEntityId() const
    {
        return m_parentEntityId;
    }

    void NetworkTransformComponentBase::ParentEntityIdAddEvent(AZ::Event<NetEntityId>::Handler& handler)
    {
        handler.Connect(m_parentEntityIdEvent);
    }


    const int32_t& NetworkTransformComponentBase::GetParentAttachmentBoneId() const
    {
        return m_parentAttachmentBoneId;
    }

    void NetworkTransformComponentBase::ParentAttachmentBoneIdAddEvent(AZ::Event<int32_t>::Handler& handler)
    {
        handler.Connect(m_parentAttachmentBoneIdEvent);
    }






    void NetworkTransformComponentBase::SetOwningConnectionId([[maybe_unused]] AzNetworking::ConnectionId connectionId)
    {
        m_rotation.SetOwningConnectionId(connectionId);
        m_translation.SetOwningConnectionId(connectionId);
        m_scale.SetOwningConnectionId(connectionId);
        m_parentEntityId.SetOwningConnectionId(connectionId);
        m_parentAttachmentBoneId.SetOwningConnectionId(connectionId);
    }

    Multiplayer::NetComponentId NetworkTransformComponentBase::GetNetComponentId() const
    {
        return s_netComponentId;
    }

#pragma warning(push)
#pragma warning(disable: 4065) // switch statement contains 'default' but no 'case' labels
    bool NetworkTransformComponentBase::HandleRpcMessage
    (
        [[maybe_unused]] AzNetworking::IConnection* invokingConnection,
        [[maybe_unused]] Multiplayer::NetEntityRole remoteRole,
        Multiplayer::NetworkEntityRpcMessage& message
    )
    {
        const NetworkTransformComponentInternal::RemoteProcedure rpcType = static_cast<NetworkTransformComponentInternal::RemoteProcedure>(message.GetRpcIndex());
        switch (rpcType)
        {
        
        
        
        
        default:
            return false;
        }
        AZ_Assert(0, "Got unhandled RpcType %d in NetworkTransformComponentBase", static_cast<int32_t>(rpcType));
        return false;
    }
#pragma warning(pop)

    bool NetworkTransformComponentBase::SerializeStateDeltaMessage(Multiplayer::ReplicationRecord& replicationRecord, AzNetworking::ISerializer& serializer)
    {
        if (!NetworkTransformComponentRecord::CanAttachRecord(replicationRecord))
        {
            AZ_Assert(false, "Unable to attach NetworkTransformComponent::NetworkTransformComponentRecord, out no remaining available bits in record");
            serializer.Invalidate();
            return serializer.IsValid();
        }

        NetworkTransformComponentRecord record = NetworkTransformComponentRecord::AttachRecord(replicationRecord);

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

    void NetworkTransformComponentBase::NotifyStateDeltaChanges(Multiplayer::ReplicationRecord& replicationRecord)
    {
        NetworkTransformComponentRecord record = NetworkTransformComponentRecord::AttachRecord(replicationRecord);
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

    bool NetworkTransformComponentBase::HasController() const
    {
        return m_controller != nullptr;
    }

    Multiplayer::MultiplayerController* NetworkTransformComponentBase::GetController()
    {
        return m_controller.get();
    }

    void NetworkTransformComponentBase::ConstructController()
    {
        AZ_Assert(m_controller == nullptr, "We already have a NetworkTransformComponentController...");
        m_controller = AZStd::make_unique<NetworkTransformComponentController>(static_cast<NetworkTransformComponent&>(*this));
    }

    void NetworkTransformComponentBase::DestructController()
    {
        AZ_Assert(m_controller != nullptr, "We don't have a NetworkTransformComponentController...");
        m_controller = nullptr;
    }

    void NetworkTransformComponentBase::ActivateController(Multiplayer::EntityIsMigrating entityIsMigrating)
    {
        if (m_controller)
        {
            m_controller->Activate(entityIsMigrating);
        }
    }

    void NetworkTransformComponentBase::DeactivateController(Multiplayer::EntityIsMigrating entityIsMigrating)
    {
        if (m_controller)
        {
            m_controller->Deactivate(entityIsMigrating);
        }
    }

    void NetworkTransformComponentBase::NetworkAttach(Multiplayer::NetBindComponent* netBindComponent, Multiplayer::ReplicationRecord& currentEntityRecord, Multiplayer::ReplicationRecord& predictableEntityRecord)
    {
        m_netBindComponent = netBindComponent;
        

        // Setup the CurrentRecord
        if (m_currentRecord == nullptr)
        {
            m_currentRecord = NetworkTransformComponentRecord::AllocateRecord(currentEntityRecord);
        }
        m_controller.get()->NetworkAttach(netBindComponent, predictableEntityRecord);
    }

    bool NetworkTransformComponentBase::SerializeAuthorityToServerProperties([[maybe_unused]] NetworkTransformComponentRecord& replicationRecord, AzNetworking::ISerializer& serializer)
    {
        return serializer.IsValid();
    }

    void NetworkTransformComponentBase::NotifyChangesAuthorityToServerProperties([[maybe_unused]] const NetworkTransformComponentRecord& replicationRecord) const
    {
    }

    bool NetworkTransformComponentBase::SerializeAuthorityToClientProperties([[maybe_unused]] NetworkTransformComponentRecord& replicationRecord, AzNetworking::ISerializer& serializer)
    {
        [[maybe_unused]] Multiplayer::MultiplayerStats& stats = Multiplayer::GetMultiplayer()->GetStats();
        // We modify the record if we are writing an update so that we don't notify for a change that really didn't change the value (just a duplicated send from the server)
        [[maybe_unused]] bool modifyRecord = serializer.GetSerializerMode() == AzNetworking::SerializerMode::WriteToObject;
        Multiplayer::SerializeNetworkPropertyHelper
        (
            serializer,
            modifyRecord,
            replicationRecord.m_authorityToClient,
            static_cast<int32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::rotation_DirtyFlag),
            m_rotation,
            "rotation",
            GetNetComponentId(),
            static_cast<Multiplayer::PropertyIndex>(NetworkTransformComponentInternal::NetworkProperties::Rotation),
            stats
        );
        Multiplayer::SerializeNetworkPropertyHelper
        (
            serializer,
            modifyRecord,
            replicationRecord.m_authorityToClient,
            static_cast<int32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::translation_DirtyFlag),
            m_translation,
            "translation",
            GetNetComponentId(),
            static_cast<Multiplayer::PropertyIndex>(NetworkTransformComponentInternal::NetworkProperties::Translation),
            stats
        );
        Multiplayer::SerializeNetworkPropertyHelper
        (
            serializer,
            modifyRecord,
            replicationRecord.m_authorityToClient,
            static_cast<int32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::scale_DirtyFlag),
            m_scale,
            "scale",
            GetNetComponentId(),
            static_cast<Multiplayer::PropertyIndex>(NetworkTransformComponentInternal::NetworkProperties::Scale),
            stats
        );
        Multiplayer::SerializeNetworkPropertyHelper
        (
            serializer,
            modifyRecord,
            replicationRecord.m_authorityToClient,
            static_cast<int32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::resetCount_DirtyFlag),
            m_resetCount,
            "resetCount",
            GetNetComponentId(),
            static_cast<Multiplayer::PropertyIndex>(NetworkTransformComponentInternal::NetworkProperties::ResetCount),
            stats
        );
        Multiplayer::SerializeNetworkPropertyHelper
        (
            serializer,
            modifyRecord,
            replicationRecord.m_authorityToClient,
            static_cast<int32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::parentEntityId_DirtyFlag),
            m_parentEntityId,
            "parentEntityId",
            GetNetComponentId(),
            static_cast<Multiplayer::PropertyIndex>(NetworkTransformComponentInternal::NetworkProperties::ParentEntityId),
            stats
        );
        Multiplayer::SerializeNetworkPropertyHelper
        (
            serializer,
            modifyRecord,
            replicationRecord.m_authorityToClient,
            static_cast<int32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::parentAttachmentBoneId_DirtyFlag),
            m_parentAttachmentBoneId,
            "parentAttachmentBoneId",
            GetNetComponentId(),
            static_cast<Multiplayer::PropertyIndex>(NetworkTransformComponentInternal::NetworkProperties::ParentAttachmentBoneId),
            stats
        );
        return serializer.IsValid();
    }

    void NetworkTransformComponentBase::NotifyChangesAuthorityToClientProperties([[maybe_unused]] const NetworkTransformComponentRecord& replicationRecord) const
    {
        if (replicationRecord.m_authorityToClient.GetBit(static_cast<int32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::rotation_DirtyFlag)))
        {
            m_rotationEvent.Signal(m_rotation);
        }
        if (replicationRecord.m_authorityToClient.GetBit(static_cast<int32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::translation_DirtyFlag)))
        {
            m_translationEvent.Signal(m_translation);
        }
        if (replicationRecord.m_authorityToClient.GetBit(static_cast<int32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::scale_DirtyFlag)))
        {
            m_scaleEvent.Signal(m_scale);
        }
        if (replicationRecord.m_authorityToClient.GetBit(static_cast<int32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::resetCount_DirtyFlag)))
        {
            m_resetCountEvent.Signal(m_resetCount);
        }
        if (replicationRecord.m_authorityToClient.GetBit(static_cast<int32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::parentEntityId_DirtyFlag)))
        {
            m_parentEntityIdEvent.Signal(m_parentEntityId);
        }
        if (replicationRecord.m_authorityToClient.GetBit(static_cast<int32_t>(NetworkTransformComponentInternal::AuthorityToClientDirtyEnum::parentAttachmentBoneId_DirtyFlag)))
        {
            m_parentAttachmentBoneIdEvent.Signal(m_parentAttachmentBoneId);
        }
    }

    bool NetworkTransformComponentBase::SerializeAuthorityToAutonomousProperties([[maybe_unused]] NetworkTransformComponentRecord& replicationRecord, AzNetworking::ISerializer& serializer)
    {
        return serializer.IsValid();
    }

    void NetworkTransformComponentBase::NotifyChangesAuthorityToAutonomousProperties([[maybe_unused]] const NetworkTransformComponentRecord& replicationRecord) const
    {
    }

    bool NetworkTransformComponentBase::SerializeAutonomousToAuthorityProperties([[maybe_unused]] NetworkTransformComponentRecord& replicationRecord, AzNetworking::ISerializer& serializer)
    {
        return serializer.IsValid();
    }

    void NetworkTransformComponentBase::NotifyChangesAutonomousToAuthorityProperties([[maybe_unused]] const NetworkTransformComponentRecord& replicationRecord) const
    {
    }


    const AzFramework::TransformComponent* NetworkTransformComponentBase::GetTransformComponent() const
    {
        return m_transformComponent;
    }

    AzFramework::TransformComponent* NetworkTransformComponentBase::GetTransformComponent()
    {
        return m_transformComponent;
    }

    const char* NetworkTransformComponentBase::GetNetworkPropertyName([[maybe_unused]] Multiplayer::PropertyIndex propertyIndex)
    {
        const NetworkTransformComponentInternal::NetworkProperties propertyId = static_cast<NetworkTransformComponentInternal::NetworkProperties>(propertyIndex);
        switch (propertyId)
        {
        case NetworkTransformComponentInternal::NetworkProperties::Rotation:
            return "Rotation";
        case NetworkTransformComponentInternal::NetworkProperties::Translation:
            return "Translation";
        case NetworkTransformComponentInternal::NetworkProperties::Scale:
            return "Scale";
        case NetworkTransformComponentInternal::NetworkProperties::ResetCount:
            return "ResetCount";
        case NetworkTransformComponentInternal::NetworkProperties::ParentEntityId:
            return "ParentEntityId";
        case NetworkTransformComponentInternal::NetworkProperties::ParentAttachmentBoneId:
            return "ParentAttachmentBoneId";
        }
        return "Unknown network property";
    }

    const char* NetworkTransformComponentBase::GetRpcName([[maybe_unused]] Multiplayer::RpcIndex rpcIndex)
    {
        return "Unknown Rpc";
    }
}

