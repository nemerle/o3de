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

#include <CryCommon/CrySystemBus.h>

namespace AZ
{
    namespace Render
    {
        class AtomFontSystemComponent
            : public AZ::Component
            , private CrySystemEventBus::Handler
        {
        public:
            AZ_COMPONENT(AtomFontSystemComponent, "{29DC7010-CF2A-4EE4-91F8-8E3C8BE65F41}");

            static void Reflect(AZ::ReflectContext* context);

            static void GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& provided);
            static void GetIncompatibleServices(AZ::ComponentDescriptorDependencyArrayType& incompatible);
            static void GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& required);
            static void GetDependentServices(AZ::ComponentDescriptorDependencyArrayType& dependent);

        protected:
            ////////////////////////////////////////////////////////////////////////
            // AZ::Component interface implementation
            void Activate() override;
            void Deactivate() override;
            ////////////////////////////////////////////////////////////////////////

            ////////////////////////////////////////////////////////////////////////
            // CrySystemEventBus
            void OnCrySystemInitialized(ISystem& system, const SSystemInitParams& initParams);
            ////////////////////////////////////////////////////////////////////////

            ////////////////////////////////////////////////////////////////////////
            // CrySystemEventBus
            void OnCrySystemShutdown(ISystem& system) override;
            ////////////////////////////////////////////////////////////////////////
        };
    } // namespace Render
} // namespace AZ
