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
#include <AssetBuilderSDK/AssetBuilderSDK.h>
#include "AtlasBuilderWorker.h"

namespace TextureAtlasBuilder
{
    class AtlasBuilderComponent : public AZ::Component
    {
    public:
        AZ_COMPONENT(AtlasBuilderComponent, "{F49987FB-3375-4417-AB83-97B44C78B335}");

        AtlasBuilderComponent();
        ~AtlasBuilderComponent() override;

        void Init() override;
        void Activate() override;
        void Deactivate() override;

        //! Reflect formats for input and output
        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptorDependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptorDependencyArrayType& dependent);

    private:
        AtlasBuilderWorker m_atlasBuilder;
    };
} // namespace TextureAtlasBuilder
