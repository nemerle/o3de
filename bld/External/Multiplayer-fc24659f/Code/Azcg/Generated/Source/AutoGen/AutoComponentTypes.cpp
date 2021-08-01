/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * This file is generated automatically at compile time, DO NOT EDIT BY HAND
 * Template Source /fast_drive/development/Hobby/Games/o3de/Gems/Multiplayer/Code/Source/AutoGen/AutoComponentTypes_Source.jinja; Data Sources /fast_drive/development/Hobby/Games/o3de/Gems/Multiplayer/Code/Source/AutoGen/LocalPredictionPlayerInputComponent.AutoComponent.xml, /fast_drive/development/Hobby/Games/o3de/Gems/Multiplayer/Code/Source/AutoGen/NetworkTransformComponent.AutoComponent.xml
 */

#include <AzCore/Component/Component.h>
#include <Multiplayer/Components/MultiplayerComponentRegistry.h>
#include <Multiplayer/NetworkEntity/INetworkEntityManager.h>
#include <Multiplayer/Components/LocalPredictionPlayerInputComponent.h>
#include <Multiplayer/Components/NetworkTransformComponent.h>

namespace Multiplayer
{
    void RegisterMultiplayerComponents()
    {
        Multiplayer::MultiplayerComponentRegistry* multiplayerComponentRegistry = Multiplayer::GetMultiplayerComponentRegistry();
        Multiplayer::MultiplayerStats& stats = Multiplayer::GetMultiplayer()->GetStats();
        {
            Multiplayer::MultiplayerComponentRegistry::ComponentData componentData;
            componentData.m_gemName = AZ::Name("Multiplayer");
            componentData.m_componentName = AZ::Name("LocalPredictionPlayerInputComponent");
            componentData.m_componentPropertyNameLookupFunction = LocalPredictionPlayerInputComponentBase::GetNetworkPropertyName;
            componentData.m_componentRpcNameLookupFunction = LocalPredictionPlayerInputComponentBase::GetRpcName;
            componentData.m_allocComponentInputFunction = LocalPredictionPlayerInputComponentBase::AllocateComponentInput;
            LocalPredictionPlayerInputComponentBase::s_netComponentId = multiplayerComponentRegistry->RegisterMultiplayerComponent(componentData);
            stats.ReserveComponentStats(LocalPredictionPlayerInputComponentBase::s_netComponentId, static_cast<uint16_t>(1), static_cast<uint16_t>(3));
        }
        {
            Multiplayer::MultiplayerComponentRegistry::ComponentData componentData;
            componentData.m_gemName = AZ::Name("Multiplayer");
            componentData.m_componentName = AZ::Name("NetworkTransformComponent");
            componentData.m_componentPropertyNameLookupFunction = NetworkTransformComponentBase::GetNetworkPropertyName;
            componentData.m_componentRpcNameLookupFunction = NetworkTransformComponentBase::GetRpcName;
            componentData.m_allocComponentInputFunction = NetworkTransformComponentBase::AllocateComponentInput;
            NetworkTransformComponentBase::s_netComponentId = multiplayerComponentRegistry->RegisterMultiplayerComponent(componentData);
            stats.ReserveComponentStats(NetworkTransformComponentBase::s_netComponentId, static_cast<uint16_t>(6), static_cast<uint16_t>(0));
        }
    }

    void CreateComponentDescriptors(AZStd::list<AZ::ComponentDescriptor*>& descriptors)
    {
        descriptors.insert(descriptors.end(), {
            LocalPredictionPlayerInputComponent::CreateDescriptor(),
            NetworkTransformComponent::CreateDescriptor(),
        });
    }
}
