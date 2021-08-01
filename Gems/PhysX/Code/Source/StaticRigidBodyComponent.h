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
#include <AzCore/Component/TransformBus.h>
#include <AzFramework/Physics/Components/SimulatedBodyComponentBus.h>
#include <PhysX/ComponentTypeIds.h>

namespace AzPhysics
{
    struct SimulatedBody;
}

namespace PhysX
{
    class StaticRigidBody;

    class StaticRigidBodyComponent final
        : public AZ::Component
        , public AzPhysics::SimulatedBodyComponentRequestsBus::Handler
        , private AZ::TransformNotificationBus::Handler
    {
    public:
        AZ_COMPONENT(StaticRigidBodyComponent, StaticRigidBodyComponentTypeId);

        StaticRigidBodyComponent();
        explicit StaticRigidBodyComponent(AzPhysics::SceneHandle sceneHandle);
        ~StaticRigidBodyComponent();

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& provided);
        static void GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& required);
        static void GetIncompatibleServices(AZ::ComponentDescriptorDependencyArrayType& incompatible);
        static void GetDependentServices(AZ::ComponentDescriptorDependencyArrayType& dependent);

        // AzPhysics::SimulatedBodyComponentRequestsBus::Handler overrides ...
        void EnablePhysics() override;
        void DisablePhysics() override;
        bool IsPhysicsEnabled() const override;
        AZ::Aabb GetAabb() const override;
        AzPhysics::SimulatedBodyHandle GetSimulatedBodyHandle() const override;
        AzPhysics::SimulatedBody* GetSimulatedBody() override;

        AzPhysics::SceneQueryHit RayCast(const AzPhysics::RayCastRequest& request) override;

    private:
        void InitStaticRigidBody();

        // AZ::Component
        void Activate() override;
        void Deactivate() override;

        // AZ::TransformNotificationsBus
        void OnTransformChanged(const AZ::Transform& local, const AZ::Transform& world) override;

        AzPhysics::SimulatedBodyHandle m_staticRigidBodyHandle = AzPhysics::InvalidSimulatedBodyHandle;
        AzPhysics::SceneHandle m_attachedSceneHandle = AzPhysics::InvalidSceneHandle;
    };
} // namespace PhysX
