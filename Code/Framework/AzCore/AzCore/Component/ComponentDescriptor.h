/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

/** @file
 * Header file for the Component base class.
 * In Open 3D Engine's component entity system, each component defines a discrete
 * feature that can be attached to an entity.
 */

#pragma once

#include <AzCore/Component/Component.h>

namespace AZ
{
    typedef AZ::u32 ComponentServiceType;       ///< ID of a user-defined component service. The system uses it to build a dependency tree.

    class Component;

    /**
     * The type of array that components use to specify provided, required, dependent,
     * and incompatible services.
     */
    using ComponentDescriptorDependencyArrayType = AZStd::vector<ComponentServiceType> ;

    /**
     * Provides an interface through which the system can get the details of a component
     * and reflect the component data to a variety of contexts.
     * If you implement a component descriptor, inherit from ComponentDescriptorHelper
     * to implement additional functionality.
     */
    class ComponentDescriptor
    {
    public:

        /**
         * Alias for AZ::ComponentDescriptorDependencyArrayType
         */
        using DependencyArrayType = ComponentDescriptorDependencyArrayType;

        /**
        * This type of array is used by the warning
        */
        typedef AZStd::vector<AZStd::string> StringWarningArray;

         /**
          * Creates an instance of the component.
          * @return Returns a pointer to the component.
          */
        virtual Component* CreateComponent() = 0;

        /**
         * Gets the name of the component.
         * @return Returns a pointer to the name of the component.
         */
        virtual const char* GetName() const = 0;

        /**
         * Gets the ID of the component.
         * @return Returns a pointer to the component ID.
         */
        virtual const Uuid& GetUuid() const = 0;

        /**
         * Reflects component data into a variety of contexts (script, serialize, edit, and so on).
         * @param reflection A pointer to the reflection context.
         */
        virtual void Reflect(ReflectContext* reflection) const = 0;

        /**
         * Specifies the services that the component provides.
         * The system uses this information to determine when to create the component.
         * @param provided Array of provided services.
         * @param instance Optional parameter with which you can refine services for each instance. This value is null if no instance exists.
         */
        virtual void GetProvidedServices(DependencyArrayType& provided, const Component* instance) const    { (void)provided; (void)instance; }

        /**
         * Specifies the services that the component depends on, but does not require.
         * The system activates the dependent services before it activates this component.
         * It also deactivates the dependent services after it deactivates this component.
         * If a dependent service is missing before this component is activated, the system
         * does not return an error and still activates this component.
         * @param provided Array of dependent services.
         * @param instance Optional parameter with which you can refine services for each instance. This value is null if no instance exists.
         */
        virtual void GetDependentServices(DependencyArrayType& dependent, const Component* instance) const  { (void)dependent;  (void)instance; }

       /**
         * Specifies the services that the component requires.
         * The system activates the required services before it activates this component.
         * It also deactivates the required services after it deactivates this component.
         * If a required service is missing before this component is activated, the system
         * returns an error and does not activate this component.
         * @param provided Array of required services.
         * @param instance Optional parameter with which you can refine services for each instance. This value is null if no instance exists.
         */
        virtual void GetRequiredServices(DependencyArrayType& required, const Component* instance) const    { (void)required;  (void)instance; }

        /**
         * Specifies the services that the component cannot operate with.
         * For example, if two components provide a similar service and the system cannot use the services simultaneously,
         * each of those components would specify the other component as an incompatible service.
         * @param provided Array to fill with incompatible services.
         * @param instance Optional parameter with which you can refine services for each instance. This value is null if no instance exists.
         */
        virtual void GetIncompatibleServices(DependencyArrayType& incompatible, const Component* instance) const    { (void)incompatible;  (void)instance; }

        /**
         * Specifies warnings that you want in the component (will put a warning and a continue button).
         * @param warnings provided array of strings that would be the actual warnings.
         * @param instance Optional parameter with which you can refine services for each instance. This value is null if no instance exists.
         */
        virtual void GetWarnings([[maybe_unused]] StringWarningArray& warnings, [[maybe_unused]] const Component* instance) const { }

        /**
         * Gets the current descriptor.
         * @param instance The current descriptor.
         */
        virtual ComponentDescriptor* GetDescriptor() { return this; }

        /**
         * Calls ComponentApplicationBus::UnregisterComponentDescriptor and deletes the descriptor.
         */
        virtual void ReleaseDescriptor();

        /**
         * Destroys the descriptor, but you should call ReleaseDescriptor() instead of using this function.
         */
        virtual ~ComponentDescriptor() = default;
    };

    /**
     * Describes the properties of the component descriptor event bus.
     * This bus uses AzTypeInfo::Uuid as the ID for the specific descriptor. Open 3D Engine allows only one
     * descriptor for each component type. When you call functions on the bus for a specific component
     * type, you can safely pass only one result variable because aggregating or overwriting results
     * is impossible.
     */
    struct ComponentDescriptorBusTraits
        : public EBusTraits
    {
        // We have one bus for each entity bus ID.
        static const AZ::EBusAddressPolicy AddressPolicy = AZ::EBusAddressPolicy::ById;
        // We can have only one descriptor per component type.
        static const AZ::EBusHandlerPolicy HandlerPolicy = AZ::EBusHandlerPolicy::Single;
        typedef Uuid BusIdType;

        using MutexType = AZStd::recursive_mutex;
    };
    //Inform the compiler that code for AZ::EBus<ComponentDescriptor,ComponentDescriptorBusTraits> is available elsewhere
    //this should save code-generation time / object file size.
    extern template class AZ::EBus<ComponentDescriptor, ComponentDescriptorBusTraits>;
    using ComponentDescriptorBus = AZ::EBus<ComponentDescriptor, ComponentDescriptorBusTraits>;

    /**
     * Helps you create a custom implementation of a descriptor.
     * For most cases we recommend using AZ_COMPONENT_SPLIT and ComponentDescriptorDefault instead.
     */

    template<class ComponentClass>
    class ComponentDescriptorHelper
        : public ComponentDescriptorBus::Handler
    {
    public:
        /**
         * Connects to the component descriptor bus.
         */
        ComponentDescriptorHelper()
        {
            BusConnect(AzTypeInfo<ComponentClass>::Uuid());
        }

        ~ComponentDescriptorHelper()
        {
            BusDisconnect();
        }

        /**
         * Creates an instance of the component.
         * @return Returns a pointer to the component.
         */
        Component* CreateComponent() override
        {
            return aznew ComponentClass;
        }

        /**
         * Gets the name of the component.
         * @return Returns a pointer to the name of the component.
         */
        const char* GetName() const override
        {
            return AzTypeInfo<ComponentClass>::Name();
        }

        /**
         * Gets the ID of the component.
         * @return Returns a pointer to the component ID.
         */
        const Uuid& GetUuid() const override
        {
            return AzTypeInfo<ComponentClass>::Uuid();
        }
    };

    /**
     * Default descriptor implementation.
     * This implementation forwards all descriptor calls to a static function inside the class.
     */
    template<class ComponentClass>
    class ComponentDescriptorDefault
        : public ComponentDescriptorHelper<ComponentClass>
    {
    public:

        /**
         * Specifies that this class should use the AZ::SystemAllocator for memory
         * management by default.
         */
        AZ_CLASS_ALLOCATOR(ComponentDescriptorDefault<ComponentClass>, SystemAllocator, 0);

        /**
         * Calls the static function AZ::ComponentDescriptor::Reflect if the user provided it.
         * @param A pointer to the reflection context.
         */
        void Reflect(ReflectContext* reflection) const override
        {
            static_assert(HasComponentReflect<ComponentClass>::value, "All components using ComponentDescriptorDefault (AZ_COMPONENT_SPLIT macro) should implement 'static void Reflect(ReflectContext* reflection)' function!");
            CallReflect(reflection, typename HasComponentReflect<ComponentClass>::type());
        }

        /**
         * Calls the static function AZ::ComponentDescriptor::GetProvidedServices, if the user provided it.
         * @param provided Array of provided services.
         * @param instance Optional parameter with which you can refine services for each instance. This value is null if no instance exists.
         */
        void GetProvidedServices(ComponentDescriptorDependencyArrayType& provided, const Component* instance) const override
        {
            (void)instance; // Not used by default because most components have static (not instance-dependent) services.
            CallProvidedServices(provided, typename HasComponentProvidedServices<ComponentClass>::type());
        }

        /**
         * Calls the static function AZ::ComponentDescriptor::GetDependentServices, if the user provided it.
         * @param provided Array of dependent services.
         * @param instance Optional parameter with which you can refine services for each instance. This value is null if no instance exists.
         */
        void GetDependentServices(ComponentDescriptorDependencyArrayType& dependent, const Component* instance) const override
        {
            (void)instance; // Not used by default because most components have static (not instance-dependent) services.
            CallDependentServices(dependent, typename HasComponentDependentServices<ComponentClass>::type());
        }

        /**
         * Calls the static function AZ::ComponentDescriptor::GetRequiredServices, if the user provided it.
         * @param provided Array of required services.
         * @param instance Optional parameter with which you can refine services for each instance. This value is null if no instance exists.
         */
        void GetRequiredServices(ComponentDescriptorDependencyArrayType& required, const Component* instance) const override
        {
            (void)instance; // Not used by default because most components have static (not instance-dependent) services.
            CallRequiredServices(required, typename HasComponentRequiredServices<ComponentClass>::type());
        }

        /**
         * Calls the static function AZ::ComponentDescriptor::GetIncompatibleServices, if the user provided it.
         * @param provided Array of incompatible services.
         * @param instance Optional parameter with which you can refine services for each instance. This value is null if no instance exists.
         */
        void GetIncompatibleServices(ComponentDescriptorDependencyArrayType& incompatible, const Component* instance) const override
        {
            (void)instance; // Not used by default because most components have static (not instance-dependent) services.
            CallIncompatibleServices(incompatible, typename HasComponentIncompatibleServices<ComponentClass>::type());
        }

    private:

        void CallReflect(ReflectContext* reflection, const AZStd::true_type&) const
        {
            ComponentClass::Reflect(reflection);
        }

        void CallReflect(ReflectContext*, const AZStd::false_type&) const
        {
        }

        void CallProvidedServices(ComponentDescriptorDependencyArrayType& provided, const AZStd::true_type&) const
        {
            ComponentClass::GetProvidedServices(provided);
        }

        void CallProvidedServices(ComponentDescriptorDependencyArrayType&, const AZStd::false_type&) const
        {
        }

        void CallDependentServices(ComponentDescriptorDependencyArrayType& dependent, const AZStd::true_type&) const
        {
            ComponentClass::GetDependentServices(dependent);
        }

        void CallDependentServices(ComponentDescriptorDependencyArrayType&, const AZStd::false_type&) const
        {
        }

        void CallRequiredServices(ComponentDescriptorDependencyArrayType& required, const AZStd::true_type&) const
        {
            ComponentClass::GetRequiredServices(required);
        }

        void CallRequiredServices(ComponentDescriptorDependencyArrayType&, const AZStd::false_type&) const
        {
        }

        void CallIncompatibleServices(ComponentDescriptorDependencyArrayType& incompatible, const AZStd::true_type&) const
        {
            ComponentClass::GetIncompatibleServices(incompatible);
        }

        void CallIncompatibleServices(ComponentDescriptorDependencyArrayType&, const AZStd::false_type&) const
        {
        }
    };
}
