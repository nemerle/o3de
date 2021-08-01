/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#pragma once

#include <AzCore/Component/Component.h>
#include <AzCore/Component/ComponentDescriptor.h>

#include <VideoPlaybackFramework/VideoPlaybackFrameworkBus.h>

namespace VideoPlaybackFramework
{
    class VideoPlaybackFrameworkSystemComponent
        : public AZ::Component
        , protected VideoPlaybackFrameworkRequestBus::Handler
    {
    public:
        AZ_COMPONENT(VideoPlaybackFrameworkSystemComponent, "{4E65B365-7BFF-46BB-96E1-2129822CB30E}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptorDependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptorDependencyArrayType& dependent);

    protected:
        ////////////////////////////////////////////////////////////////////////
        // VideoPlaybackFrameworkRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
