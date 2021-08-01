/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */
#include <Tests/SerializeContextFixture.h>

#include <AzCore/Asset/AssetManager.h>
#include <AzCore/Component/Component.h>
#include <AzCore/Component/ComponentDescriptor.h>
#include <AzCore/Component/Entity.h>
#include <AzCore/Serialization/Utils.h>

namespace UnitTest
{
    // Used to verify that components are serialized on entities in a stable order, smallest to largest.
    // This component has the UUID with the smallest value.
    class SortOrderTestFirstComponent
        : public AZ::Component
    {
    public:
        AZ_COMPONENT_SPLIT(SortOrderTestFirstComponent, "{00000000-0000-0000-0000-000000000010}");

        ///////////////////////////////////////
        // Component overrides
        void Activate() override { }
        void Deactivate() override { }
        ///////////////////////////////////////

        static void Reflect(AZ::ReflectContext* reflection)
        {
            AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);
            if (serializeContext)
            {
                serializeContext->Class<SortOrderTestFirstComponent, AZ::Component>();
            }
        }

        static void GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& services)
        {
            services.push_back(AZ_CRC("SortOrderTestFirstService"));
        }
    };

    // Implement the CreateDescriptor static method
    AZ_COMPONENT_IMPL(SortOrderTestFirstComponent)

    // This component has the UUID with the second smallest value.
    class SortOrderTestSecondComponent
        : public AZ::Component
    {
    public:
        AZ_COMPONENT_SPLIT(SortOrderTestSecondComponent, "{00000000-0000-0000-0000-000000000020}");

        ///////////////////////////////////////
        // Component overrides
        void Activate() override { }
        void Deactivate() override { }
        ///////////////////////////////////////

        static void Reflect(AZ::ReflectContext* reflection)
        {
            AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);
            if (serializeContext)
            {
                serializeContext->Class<SortOrderTestSecondComponent, AZ::Component>();
            }
        }
        static void GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& services)
        {
            services.push_back(AZ_CRC("SortOrderTestSecondService"));
        }
    };

    // Implement the CreateDescriptor static method
    AZ_COMPONENT_IMPL(SortOrderTestSecondComponent)

    // This component has the UUID with the largest value.
    class SortOrderTestThirdComponent
        : public AZ::Component
    {
    public:
        AZ_COMPONENT_SPLIT(SortOrderTestThirdComponent, "{00000000-0000-0000-0000-000000000030}");

        ///////////////////////////////////////
        // Component overrides
        void Activate() override { }
        void Deactivate() override { }
        ///////////////////////////////////////

        static void Reflect(AZ::ReflectContext* reflection)
        {
            AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);
            if (serializeContext)
            {
                serializeContext->Class<SortOrderTestThirdComponent, AZ::Component>();
            }
        }
        static void GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& services)
        {
            services.push_back(AZ_CRC("SortOrderTestThirdService"));
        }
    };

    // Implement the CreateDescriptor static method
    AZ_COMPONENT_IMPL(SortOrderTestThirdComponent)

    // Used to verify that components are always sorted after their dependencies.
    class SortOrderTestRequiresFirstComponent
        : public AZ::Component
    {
    public:
        // Purposely give this a UUID lower than its dependency.
        AZ_COMPONENT_SPLIT(SortOrderTestRequiresFirstComponent, "{00000000-0000-0000-0000-000000000001}");

        ///////////////////////////////////////
        // Component overrides
        void Activate() override { }
        void Deactivate() override { }
        ///////////////////////////////////////

        static void Reflect(AZ::ReflectContext* reflection)
        {
            AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);
            if (serializeContext)
            {
                serializeContext->Class<SortOrderTestRequiresFirstComponent, AZ::Component>();
            }
        }

        static void GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& services)
        {
            services.push_back(AZ_CRC("SortOrderTestFirstService"));
        }
    };

    // Implement the CreateDescriptor static method
    AZ_COMPONENT_IMPL(SortOrderTestRequiresFirstComponent)

    // Used to verify that components are always sorted after their dependencies.
    class SortOrderTestRequiresSecondComponent
        : public AZ::Component
    {
    public:
        // Purposely give this a UUID lower than its dependency.
        AZ_COMPONENT_SPLIT(SortOrderTestRequiresSecondComponent, "{00000000-0000-0000-0000-000000000002}");

        ///////////////////////////////////////
        // Component overrides
        void Activate() override { }
        void Deactivate() override { }
        ///////////////////////////////////////

        static void Reflect(AZ::ReflectContext* reflection)
        {
            AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);
            if (serializeContext)
            {
                serializeContext->Class<SortOrderTestRequiresSecondComponent, AZ::Component>();
            }
        }

        static void GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& services)
        {
            services.push_back(AZ_CRC("SortOrderTestSecondService"));
        }
    };

    // Implement the CreateDescriptor static method
    AZ_COMPONENT_IMPL(SortOrderTestRequiresSecondComponent)

    // Used to verify that components are always sorted after their dependencies.
    class SortOrderTestRequiresSecondAndThirdComponent
        : public AZ::Component
    {
    public:
        // Purposely give this a UUID between its dependencies.
        AZ_COMPONENT_SPLIT(SortOrderTestRequiresSecondAndThirdComponent, "{00000000-0000-0000-0000-000000000025}");

        ///////////////////////////////////////
        // Component overrides
        void Activate() override { }
        void Deactivate() override { }
        ///////////////////////////////////////

        static void Reflect(AZ::ReflectContext* reflection)
        {
            AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);
            if (serializeContext)
            {
                serializeContext->Class<SortOrderTestRequiresSecondAndThirdComponent, AZ::Component>();
            }
        }

        static void GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& services)
        {
            services.push_back(AZ_CRC("SortOrderTestThirdService"));
            services.push_back(AZ_CRC("SortOrderTestSecondService"));
        }
    };

    // Implement the CreateDescriptor static method
    AZ_COMPONENT_IMPL(SortOrderTestRequiresSecondAndThirdComponent)

    // Used to verify that components that do not provide services are sorted after components that do.
    class SortOrderTestNoService
        : public AZ::Component
    {
    public:
        // Purposely give this a UUID lower than the test components that provide services.
        AZ_COMPONENT_SPLIT(SortOrderTestNoService, "{00000000-0000-0000-0000-000000000003}");

        ///////////////////////////////////////
        // Component overrides
        void Activate() override { }
        void Deactivate() override { }
        ///////////////////////////////////////

        static void Reflect(AZ::ReflectContext* reflection)
        {
            AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);
            if (serializeContext)
            {
                serializeContext->Class<SortOrderTestNoService, AZ::Component>();
            }
        }
    };

    // Implement the CreateDescriptor static method
    AZ_COMPONENT_IMPL(SortOrderTestNoService)

    // This component wraps the component base class, like GenericComponentWrapper.
    // GenericComponentWrapper is used in the editor for components that don't have specific editor representations.
    // Its usage depends on other editor systems being setup, so this is meant to simulate its usage.
    class SortOrderTestComponentWrapper
        : public AZ::Component
    {
    public:
        AZ_CLASS_ALLOCATOR(SortOrderTestComponentWrapper, AZ::SystemAllocator, 0);
        AZ_RTTI(SortOrderTestComponentWrapper, "{00000000-0000-0000-0000-000000000011}", AZ::Component);

        SortOrderTestComponentWrapper() { }

        SortOrderTestComponentWrapper(AZ::Component* wrappedComponent)
        {
            if (wrappedComponent)
            {
                m_id = wrappedComponent->GetId();
                m_wrappedComponent = wrappedComponent;
            }
        }

        ~SortOrderTestComponentWrapper() override
        {
            delete m_wrappedComponent;
            m_wrappedComponent = nullptr;
        }

        AZ::Component* GetWrappedComponent() const { return m_wrappedComponent; }

        ///////////////////////////////////////
        // Component overrides
        void Activate() override { }
        void Deactivate() override { }
        const AZ::TypeId& GetUnderlyingComponentType() const override
        {
            if (m_wrappedComponent)
            {
                return m_wrappedComponent->RTTI_GetType();
            }

            return RTTI_GetType();
        }
        ///////////////////////////////////////

        static void Reflect(AZ::ReflectContext* reflection)
        {
            AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);
            if (serializeContext)
            {
                serializeContext->Class<SortOrderTestComponentWrapper, AZ::Component>()
                    ->Field("m_wrappedComponent", &SortOrderTestComponentWrapper::m_wrappedComponent);
            }
        }

        static AZ::ComponentDescriptor* CreateDescriptor();

        // Provide a service so that this component sorts with all other components that provide services.
        // This is used to test that the wrapped component sorts with what it wraps, and it is used
        // here to wrap components that provide services.
        static void GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& services)
        {
            services.push_back(AZ_CRC("TestWrapperService"));
        }
    private:
        AZ::Component* m_wrappedComponent = nullptr;
    };

    // This is based on GenericComponentWrapperDescriptor, and it is meant to pass through services.
    class SortOrderComponentWrapperDescriptor
        : public AZ::ComponentDescriptorHelper<SortOrderTestComponentWrapper>
    {
    public:
        AZ_CLASS_ALLOCATOR(SortOrderComponentWrapperDescriptor, AZ::SystemAllocator, 0);
        AZ_TYPE_INFO(SortOrderComponentWrapperDescriptor, "{58A6544E-9476-4A93-AB6E-768B7326494B}");

        AZ::ComponentDescriptor* GetTemplateDescriptor(const AZ::Component* instance) const
        {
            AZ::ComponentDescriptor* templateDescriptor = nullptr;

            const SortOrderTestComponentWrapper* wrapper = azrtti_cast<const SortOrderTestComponentWrapper*>(instance);
            if (wrapper && wrapper->GetWrappedComponent())
            {
                AZ::ComponentDescriptorBus::EventResult(
                    templateDescriptor,
                    wrapper->GetWrappedComponent()->RTTI_GetType(),
                    &AZ::ComponentDescriptorBus::Events::GetDescriptor);
            }

            return templateDescriptor;
        }

        void Reflect(AZ::ReflectContext* reflection) const override
        {
            SortOrderTestComponentWrapper::Reflect(reflection);
        }

        void GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& provided, const AZ::Component* instance) const override
        {
            const AZ::ComponentDescriptor* templateDescriptor = GetTemplateDescriptor(instance);
            if (templateDescriptor)
            {
                templateDescriptor->GetProvidedServices(provided, instance);
            }
        }

        void GetDependentServices(AZ::ComponentDescriptorDependencyArrayType& dependent, const AZ::Component* instance) const override
        {
            const AZ::ComponentDescriptor* templateDescriptor = GetTemplateDescriptor(instance);
            if (templateDescriptor)
            {
                templateDescriptor->GetDependentServices(dependent, instance);
            }
        }

        void GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& required, const AZ::Component* instance) const override
        {
            const AZ::ComponentDescriptor* templateDescriptor = GetTemplateDescriptor(instance);
            if (templateDescriptor)
            {
                templateDescriptor->GetRequiredServices(required, instance);
            }
        }

        void GetIncompatibleServices(AZ::ComponentDescriptorDependencyArrayType& incompatible, const AZ::Component* instance) const override
        {
            const AZ::ComponentDescriptor* templateDescriptor = GetTemplateDescriptor(instance);
            if (templateDescriptor)
            {
                templateDescriptor->GetIncompatibleServices(incompatible, instance);
            }
        }
    };

    AZ::ComponentDescriptor* SortOrderTestComponentWrapper::CreateDescriptor()
    {
        AZ::ComponentDescriptor* descriptor = nullptr;
        EBUS_EVENT_ID_RESULT(descriptor, SortOrderTestComponentWrapper::RTTI_Type(), AZ::ComponentDescriptorBus, GetDescriptor);

        return descriptor ? descriptor : aznew SortOrderComponentWrapperDescriptor();
    }


    // Used to verify that components that accidentally provide the same service twice initialize correctly and ignore the duplication.
    class DuplicateProvidedServiceComponent
        : public AZ::Component
    {
    public:
        AZ_COMPONENT_SPLIT(DuplicateProvidedServiceComponent, "{D39D65A9-6A26-40A6-99FB-586E3AC14B56}");

        ///////////////////////////////////////
        // Component overrides
        void Activate() override { }
        void Deactivate() override { }
        ///////////////////////////////////////

        static void Reflect(AZ::ReflectContext* reflection)
        {
            AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);
            if (serializeContext)
            {
                serializeContext->Class<DuplicateProvidedServiceComponent, AZ::Component>();
            }
        }

        static void GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& services)
        {
            services.push_back(AZ_CRC("DuplicatedService"));
            services.push_back(AZ_CRC("DuplicatedService"));
        }
    };

    // Implement the CreateDescriptor static method
    AZ_COMPONENT_IMPL(DuplicateProvidedServiceComponent)

    // Used to verify that components that accidentally provide the same service twice initialize correctly and ignore the duplication.
    // Previously, a crash occured when a component depended on a service that was provided multiple times by another component.
    class DependsOnDuplicateProvidedServiceComponent
        : public AZ::Component
    {
    public:
        AZ_COMPONENT_SPLIT(DependsOnDuplicateProvidedServiceComponent, "{1B78B608-AECB-44CE-9060-53A1998AB1D4}");

        ///////////////////////////////////////
        // Component overrides
        void Activate() override { }
        void Deactivate() override { }
        ///////////////////////////////////////

        static void Reflect(AZ::ReflectContext* reflection)
        {
            AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);
            if (serializeContext)
            {
                serializeContext->Class<DependsOnDuplicateProvidedServiceComponent, AZ::Component>();
            }
        }

        static void GetDependentServices(AZ::ComponentDescriptorDependencyArrayType& services)
        {
            services.push_back(AZ_CRC("DuplicatedService"));
        }
    };

    // Implement the CreateDescriptor static method
    AZ_COMPONENT_IMPL(DependsOnDuplicateProvidedServiceComponent)

    // Used to verify that components that accidentally provide the same service twice initialize correctly and ignore the duplication.
    // Previously, a crash occured when a component required a service that was provided multiple times by another component.
    class RequiresDuplicateProvidedServiceComponent
        : public AZ::Component
    {
    public:
        AZ_COMPONENT_SPLIT(RequiresDuplicateProvidedServiceComponent, "{9AACE495-0E45-4DF0-B362-43CE12AE2F33}");

        ///////////////////////////////////////
        // Component overrides
        void Activate() override { }
        void Deactivate() override { }
        ///////////////////////////////////////

        static void Reflect(AZ::ReflectContext* reflection)
        {
            AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);
            if (serializeContext)
            {
                serializeContext->Class<RequiresDuplicateProvidedServiceComponent, AZ::Component>();
            }
        }

        static void GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& services)
        {
            services.push_back(AZ_CRC("DuplicatedService"));
        }
    };

    // Implement the CreateDescriptor static method
    AZ_COMPONENT_IMPL(RequiresDuplicateProvidedServiceComponent)

    class EntityTests : public UnitTest::SerializeContextFixture
    {
        void SetUp() override
        {
            SerializeContextFixture::SetUp();

            m_sortFirstDescriptor = SortOrderTestFirstComponent::CreateDescriptor();
            m_sortFirstDescriptor->Reflect(m_serializeContext);
            m_sortSecondDescriptor = SortOrderTestSecondComponent::CreateDescriptor();
            m_sortSecondDescriptor->Reflect(m_serializeContext);
            m_sortThirdDescriptor = SortOrderTestThirdComponent::CreateDescriptor();
            m_sortThirdDescriptor->Reflect(m_serializeContext);
            m_sortFirstDependencyDescriptor = SortOrderTestRequiresFirstComponent::CreateDescriptor();
            m_sortFirstDependencyDescriptor->Reflect(m_serializeContext);
            m_sortSecondDependencyDescriptor = SortOrderTestRequiresSecondComponent::CreateDescriptor();
            m_sortSecondDependencyDescriptor->Reflect(m_serializeContext);
            m_sortSecondAndThirdDependencyDescriptor = SortOrderTestRequiresSecondAndThirdComponent::CreateDescriptor();
            m_sortSecondAndThirdDependencyDescriptor->Reflect(m_serializeContext);
            m_sortWrapperDescriptor = SortOrderTestComponentWrapper::CreateDescriptor();
            m_sortWrapperDescriptor->Reflect(m_serializeContext);
            m_sortNoServiceDescriptor = SortOrderTestNoService::CreateDescriptor();
            m_sortNoServiceDescriptor->Reflect(m_serializeContext);

            m_duplicateProvidedServiceComponentDescriptor = DuplicateProvidedServiceComponent::CreateDescriptor();
            m_duplicateProvidedServiceComponentDescriptor->Reflect(m_serializeContext);
            m_dependsOnDuplicateServiceComponentDescriptor = DependsOnDuplicateProvidedServiceComponent::CreateDescriptor();
            m_dependsOnDuplicateServiceComponentDescriptor->Reflect(m_serializeContext);
            m_requiresDuplicateServiceComponentDescriptor = RequiresDuplicateProvidedServiceComponent::CreateDescriptor();
            m_requiresDuplicateServiceComponentDescriptor->Reflect(m_serializeContext);

            AZ::Entity::Reflect(m_serializeContext);
        }

        void TearDown() override
        {
            m_requiresDuplicateServiceComponentDescriptor->ReleaseDescriptor();
            m_dependsOnDuplicateServiceComponentDescriptor->ReleaseDescriptor();
            m_duplicateProvidedServiceComponentDescriptor->ReleaseDescriptor();

            m_sortNoServiceDescriptor->ReleaseDescriptor();
            m_sortWrapperDescriptor->ReleaseDescriptor();
            m_sortSecondAndThirdDependencyDescriptor->ReleaseDescriptor();
            m_sortSecondDependencyDescriptor->ReleaseDescriptor();
            m_sortFirstDependencyDescriptor->ReleaseDescriptor();
            m_sortThirdDescriptor->ReleaseDescriptor();
            m_sortSecondDescriptor->ReleaseDescriptor();
            m_sortFirstDescriptor->ReleaseDescriptor();

            UnitTest::SerializeContextFixture::TearDown();
        }

    protected:
        // Make sure the component list is sorted, and has the expected number of components.
        void ValidateComponentList(const AZ::Entity& entity1, const AZ::Entity& entity2, int expectedComponentListSize)
        {
            const AZ::Entity::ComponentArrayType& components1 = entity1.GetComponents();
            const AZ::Entity::ComponentArrayType& components2 = entity2.GetComponents();

            EXPECT_EQ(components1.size(), expectedComponentListSize);
            EXPECT_EQ(components2.size(), expectedComponentListSize);
            for (int i = 0; i < expectedComponentListSize; ++i)
            {
                EXPECT_EQ(components1[i]->GetUnderlyingComponentType(), components2[i]->GetUnderlyingComponentType());
            }
        }

        AZ::ComponentDescriptor* m_sortFirstDescriptor = nullptr;
        AZ::ComponentDescriptor* m_sortSecondDescriptor = nullptr;
        AZ::ComponentDescriptor* m_sortThirdDescriptor = nullptr;
        AZ::ComponentDescriptor* m_sortFirstDependencyDescriptor = nullptr;
        AZ::ComponentDescriptor* m_sortSecondDependencyDescriptor = nullptr;
        AZ::ComponentDescriptor* m_sortSecondAndThirdDependencyDescriptor = nullptr;
        AZ::ComponentDescriptor* m_sortWrapperDescriptor = nullptr;
        AZ::ComponentDescriptor* m_sortNoServiceDescriptor = nullptr;
        AZ::ComponentDescriptor* m_duplicateProvidedServiceComponentDescriptor = nullptr;
        AZ::ComponentDescriptor* m_dependsOnDuplicateServiceComponentDescriptor = nullptr;
        AZ::ComponentDescriptor* m_requiresDuplicateServiceComponentDescriptor = nullptr;
    };

    TEST_F(EntityTests, EntityComponentList_OutOfOrderUUIDs_ComponentListIsSorted)
    {
        AZ::Entity entity1;
        entity1.CreateComponent<SortOrderTestFirstComponent>();
        entity1.CreateComponent<SortOrderTestSecondComponent>();
        entity1.CreateComponent<SortOrderTestThirdComponent>();
        entity1.EvaluateDependencies();

        AZ::Entity entity2;
        entity2.CreateComponent<SortOrderTestSecondComponent>();
        entity2.CreateComponent<SortOrderTestThirdComponent>();
        entity2.CreateComponent<SortOrderTestFirstComponent>();
        entity2.EvaluateDependencies();

        ValidateComponentList(entity1, entity2, 3);
    }

    TEST_F(EntityTests, EntityComponentList_OutOfOrderUUIDs_NoServiceComponentsAreSortedLast)
    {
        AZ::Entity entity1;
        entity1.CreateComponent<SortOrderTestFirstComponent>();
        entity1.CreateComponent<SortOrderTestSecondComponent>();
        entity1.CreateComponent<SortOrderTestNoService>();
        entity1.EvaluateDependencies();

        AZ::Entity entity2;

        entity2.CreateComponent<SortOrderTestSecondComponent>();
        entity2.CreateComponent<SortOrderTestNoService>();
        entity2.CreateComponent<SortOrderTestFirstComponent>();
        entity2.EvaluateDependencies();

        ValidateComponentList(entity1, entity2, 3);
    }

    TEST_F(EntityTests, EntityComponentList_DuplicateAndOutOfOrderUUIDs_ComponentListIsSorted)
    {
        AZ::Entity entity1;
        entity1.CreateComponent<SortOrderTestFirstComponent>();
        entity1.CreateComponent<SortOrderTestSecondComponent>();
        // Create a second copy of the second component, to verify that ordering works with duplicates.
        entity1.CreateComponent<SortOrderTestSecondComponent>();
        entity1.CreateComponent<SortOrderTestThirdComponent>();
        entity1.EvaluateDependencies();

        AZ::Entity entity2;
        entity2.CreateComponent<SortOrderTestThirdComponent>();
        entity2.CreateComponent<SortOrderTestSecondComponent>();
        // Create a second copy of the second component, to verify that ordering works with duplicates.
        entity2.CreateComponent<SortOrderTestSecondComponent>();
        entity2.CreateComponent<SortOrderTestFirstComponent>();
        entity2.EvaluateDependencies();

        ValidateComponentList(entity1, entity2, 4);
    }

    // Verify that the entity's component sorting uses the correct ID, the GetUnderlyingComponentType instead
    // of the component's base ID. This ensures that component wrappers like GenericComponentWrapper
    // will sort based on what they hold and not their own ID.
    TEST_F(EntityTests, EntityComponentList_WrappedOutOfOrderUUIDs_ComponentListIsSorted)
    {
        AZ::Entity entity1;
        entity1.CreateComponent<SortOrderTestFirstComponent>();
        entity1.CreateComponent<SortOrderTestSecondComponent>();
        entity1.CreateComponent<SortOrderTestThirdComponent>();
        entity1.EvaluateDependencies();

        AZ::Entity entity2;
        entity2.CreateComponent<SortOrderTestSecondComponent>();
        entity2.CreateComponent<SortOrderTestComponentWrapper>(aznew SortOrderTestThirdComponent());
        entity2.CreateComponent<SortOrderTestComponentWrapper>(aznew SortOrderTestFirstComponent());
        entity2.EvaluateDependencies();

        ValidateComponentList(entity1, entity2, 3);
    }

    TEST_F(EntityTests, EntityComponentList_OutOfOrderUUIDsWithDependencies_ComponentListIsSorted)
    {
        AZ::Entity entity1;
        entity1.CreateComponent<SortOrderTestFirstComponent>();
        entity1.CreateComponent<SortOrderTestSecondComponent>();
        entity1.CreateComponent<SortOrderTestThirdComponent>();
        entity1.CreateComponent<SortOrderTestRequiresFirstComponent>();
        entity1.CreateComponent<SortOrderTestRequiresSecondComponent>();
        entity1.CreateComponent<SortOrderTestRequiresSecondAndThirdComponent>();
        entity1.EvaluateDependencies();

        AZ::Entity entity2;
        entity2.CreateComponent<SortOrderTestSecondComponent>();
        entity2.CreateComponent<SortOrderTestRequiresSecondAndThirdComponent>();
        entity2.CreateComponent<SortOrderTestRequiresSecondComponent>();
        entity2.CreateComponent<SortOrderTestThirdComponent>();
        entity2.CreateComponent<SortOrderTestRequiresFirstComponent>();
        entity2.CreateComponent<SortOrderTestFirstComponent>();
        entity2.EvaluateDependencies();

        ValidateComponentList(entity1, entity2, 6);
    }

    TEST_F(EntityTests, EntityComponentList_WrappedOutOfOrderUUIDsWithDependencies_ComponentListIsSorted)
    {
        AZ::Entity entity1;
        entity1.CreateComponent<SortOrderTestFirstComponent>();
        entity1.CreateComponent<SortOrderTestSecondComponent>();
        entity1.CreateComponent<SortOrderTestThirdComponent>();
        entity1.CreateComponent<SortOrderTestRequiresFirstComponent>();
        entity1.CreateComponent<SortOrderTestRequiresSecondComponent>();
        entity1.CreateComponent<SortOrderTestRequiresSecondAndThirdComponent>();
        entity1.EvaluateDependencies();

        AZ::Entity entity2;
        entity2.CreateComponent<SortOrderTestSecondComponent>();
        entity2.CreateComponent<SortOrderTestRequiresSecondAndThirdComponent>();
        entity2.CreateComponent<SortOrderTestRequiresSecondComponent>();
        entity2.CreateComponent<SortOrderTestComponentWrapper>(aznew SortOrderTestThirdComponent());
        entity2.CreateComponent<SortOrderTestComponentWrapper>(aznew SortOrderTestRequiresFirstComponent());
        entity2.CreateComponent<SortOrderTestFirstComponent>();
        entity2.EvaluateDependencies();

        ValidateComponentList(entity1, entity2, 6);
    }

    TEST_F(EntityTests, EntityComponentList_ComponentWithDuplicateProvidedService_EntityInitializesCorrectly)
    {
        AZ::Entity entity;
        DuplicateProvidedServiceComponent* duplicateServiceComponent = aznew DuplicateProvidedServiceComponent();
        entity.AddComponent(duplicateServiceComponent);
        // No test condition here, EvaluateDependencies was previously crashing when duplicate services were provided.
        // The crash would be caught by the unit test system.
        entity.EvaluateDependencies();
    }

    TEST_F(EntityTests, EntityComponentList_ComponentDependingOnComponentWithDuplicateProvidedService_EntityInitializesCorrectly)
    {
        AZ::Entity entity;
        DuplicateProvidedServiceComponent* duplicateServiceComponent = aznew DuplicateProvidedServiceComponent();
        DependsOnDuplicateProvidedServiceComponent* dependantService = aznew DependsOnDuplicateProvidedServiceComponent();
        entity.AddComponent(duplicateServiceComponent);
        entity.AddComponent(dependantService);
        // No test condition here, EvaluateDependencies was previously crashing when duplicate services were provided.
        // The crash would be caught by the unit test system.
        entity.EvaluateDependencies();
    }

    TEST_F(EntityTests, EntityComponentList_ComponentRequiringComponentWithDuplicateProvidedService_EntityInitializesCorrectly)
    {
        AZ::Entity entity;
        DuplicateProvidedServiceComponent* duplicateServiceComponent = aznew DuplicateProvidedServiceComponent();
        RequiresDuplicateProvidedServiceComponent* dependantService = aznew RequiresDuplicateProvidedServiceComponent();
        entity.AddComponent(duplicateServiceComponent);
        entity.AddComponent(dependantService);
        // No test condition here, EvaluateDependencies was previously crashing when duplicate services were provided.
        // The crash would be caught by the unit test system.
        entity.EvaluateDependencies();
    }

    TEST_F(EntityTests, EntityIsMoveConstructed)
    {
        static_assert(!AZStd::is_copy_constructible<AZ::Entity>::value, "Entity is dangerous to copy construct.");
        static_assert(!AZStd::is_copy_assignable<AZ::Entity>::value, "Entity is dangerous to copy assign.");

        {
            AZ::Entity entity1;
            entity1.CreateComponent<SortOrderTestFirstComponent>();
            AZ::Entity entity2(AZStd::move(entity1));
            EXPECT_EQ(entity1.GetComponents().size(), 0);
            EXPECT_EQ(entity2.GetComponents().size(), 1);
        } // there will be a crash here if they go out of scope if they weren't properly moved.
    }

    TEST_F(EntityTests, EntityIsMoveAssigned)
    {
        {
            AZ::Entity entity1;
            entity1.CreateComponent<SortOrderTestFirstComponent>();
            AZ::Entity entity2;
            entity2 = AZStd::move(entity1);
            EXPECT_EQ(entity1.GetComponents().size(), 0);
            EXPECT_EQ(entity2.GetComponents().size(), 1);
        } // there will be a crash here if they go out of scope if they weren't properly moved.
    }
} // namespace UnitTest
