/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */
#pragma once
#include <AzCore/std/function/function_template.h>
#include <AzCore/std/smart_ptr/unique_ptr.h>
#include <AzCore/std/smart_ptr/shared_ptr.h>

namespace AZ
{
    struct DataPatchNodeInfo;
    class Attribute;
    typedef AZ::u32 AttributeId; // typedefed in ReflectContext.h as well
    namespace IO
    {
        class GenericStream;
    }

    namespace Serialization
    {
        class IDataSerializer;
        class ClassData;
        struct ClassElement;
        class DataElementNode;
        struct DataElement;
        class ErrorHandler;
        using IDataSerializerDeleter = AZStd::function<void(IDataSerializer* ptr)>;
        using IDataSerializerPtr = AZStd::unique_ptr<IDataSerializer, IDataSerializerDeleter>;

        /**
         * Interface for data serialization. Should be implemented for lowest level
         * of data. Once this implementation is detected, the class will not be drilled
         * down. We will assume this implementation covers the full class.
         */
        class IDataSerializer
        {
        public:
            static IDataSerializerDeleter CreateDefaultDeleteDeleter();
            static IDataSerializerDeleter CreateNoDeleteDeleter();

            virtual ~IDataSerializer()
            {
            }

            /// Store the class data into a stream.
            virtual size_t Save(const void* classPtr, IO::GenericStream& stream, bool isDataBigEndian = false) = 0;

            /// Load the class data from a stream.
            virtual bool Load(void* classPtr, IO::GenericStream& stream, unsigned int version, bool isDataBigEndian = false) = 0;

            /// Convert binary data to text.
            virtual size_t DataToText(IO::GenericStream& in, IO::GenericStream& out, bool isDataBigEndian /*= false*/) = 0;

            /// Convert text data to binary, to support loading old version formats. We must respect text version if the text->binary format
            /// has changed!
            virtual size_t TextToData(
                const char* text, unsigned int textVersion, IO::GenericStream& stream, bool isDataBigEndian = false) = 0;

            /// Compares two instances of the type.
            /// \return true if they match.
            /// Note: Input pointers are assumed to point to valid instances of the class.
            virtual bool CompareValueData(const void* lhs, const void* rhs) = 0;

            /// Optional post processing of the cloned data to deal with members that are not serialize-reflected.
            virtual void PostClone(void* /*classPtr*/)
            {
            }
        };

        /**
         * Interface for creating and destroying object from the serializer.
         */
        class IObjectFactory
        {
        public:
            virtual ~IObjectFactory()
            {
            }

            /// Called to create an instance of an object.
            virtual void* Create(const char* name) = 0;

            /// Called to destroy an instance of an object
            virtual void Destroy(void* ptr) = 0;
            void Destroy(const void* ptr)
            {
                Destroy(const_cast<void*>(ptr));
            }
        };
        /**
         * Interface for a data container. This might be an AZStd container or just a class with
         * elements defined in some template manner (usually with templates :) )
         */
        class IDataContainer
        {
        public:
            typedef AZStd::function<bool(
                void* /* instance pointer */,
                const Uuid& /*elementClassId*/,
                const ClassData* /* elementGenericClassData */,
                const ClassElement* /* genericClassElement */)>
                ElementCB;
            typedef AZStd::function<bool(const Uuid& /*elementClassId*/, const ClassElement* /* genericClassElement */)> ElementTypeCB;
            virtual ~IDataContainer()
            {
            }

            /// Mix-in for associative container actions, implement or provide this to offer key/value actions
            class IAssociativeDataContainer
            {
            protected:
                /// Reserve a key and get its address. Used by CreateKey.
                virtual void* AllocateKey() = 0;
                /// Deallocates a key created by ReserveKey. Used by CreateKey.
                virtual void FreeKey(void* key) = 0;

            public:
                virtual ~IAssociativeDataContainer()
                {
                }

                struct KeyPtrDeleter
                {
                    KeyPtrDeleter(IAssociativeDataContainer* associativeDataContainer)
                        : m_associativeDataContainer(associativeDataContainer)
                    {
                    }

                    void operator()(void* key)
                    {
                        m_associativeDataContainer->FreeKey(key);
                    }

                    IAssociativeDataContainer* m_associativeDataContainer{};
                };

                /// Reserve a key that can be used for associative container operations.
                AZStd::shared_ptr<void> CreateKey()
                {
                    return AZStd::shared_ptr<void>(AllocateKey(), KeyPtrDeleter(this));
                }
                /// Get an element's address by its key. Not used for serialization.
                virtual void* GetElementByKey(void* instance, const ClassElement* classElement, const void* key) = 0;
                /// Populates element with key (for associative containers). Not used for serialization.
                virtual void SetElementKey(void* element, void* key) = 0;
            };

            /// Return default element generic name (used by most containers).
            static inline const char* GetDefaultElementName()
            {
                return "element";
            }
            /// Return default element generic name crc (used by most containers).
            static inline u32 GetDefaultElementNameCrc()
            {
                return AZ_CRC("element", 0x41405e39);
            }

            // Returns default element generic name unless overridden by an IDataContainer
            virtual const char* GetElementName([[maybe_unused]] int index = 0)
            {
                return GetDefaultElementName();
            }
            // Returns default element generic name crc unless overridden by an IDataContainer
            virtual u32 GetElementNameCrC([[maybe_unused]] int index = 0)
            {
                return GetDefaultElementNameCrc();
            }

            /// Returns the generic element (offsets are mostly invalid 0xbad0ffe0, there are exceptions). Null if element with this name
            /// can't be found.
            virtual const ClassElement* GetElement(u32 elementNameCrc) const = 0;
            /// Populates the supplied classElement by looking up the name in the DataElement. Returns true if the classElement was
            /// populated successfully
            virtual bool GetElement(ClassElement& classElement, const DataElement& dataElement) const = 0;
            /// Enumerate elements in the container based on the stored entries.
            virtual void EnumElements(void* instance, const ElementCB& cb) = 0;
            /// Enumerate elements in the container based on possible storage types. If the callback is not called it means there are no
            /// restrictions on what can be stored in the container.
            virtual void EnumTypes(const ElementTypeCB& cb) = 0;
            /// Return number of elements in the container.
            virtual size_t Size(void* instance) const = 0;
            /// Returns the capacity of the container. Returns 0 for objects without fixed capacity.
            virtual size_t Capacity(void* instance) const = 0;
            /// Returns true if elements pointers don't change on add/remove. If false you MUST enumerate all elements.
            virtual bool IsStableElements() const = 0;
            /// Returns true if the container is fixed size (not capacity), otherwise false.
            virtual bool IsFixedSize() const = 0;
            /// Returns if the container is fixed capacity, otherwise false
            virtual bool IsFixedCapacity() const = 0;
            /// Returns true if the container represents a smart pointer.
            virtual bool IsSmartPointer() const = 0;
            /// Returns true if elements can be retrieved by index.
            virtual bool CanAccessElementsByIndex() const = 0;
            /// Returns the associative interface for this container (e.g. the container itself if it inherits it) if available, otherwise
            /// null.
            virtual IAssociativeDataContainer* GetAssociativeContainerInterface()
            {
                return nullptr;
            }
            /// Reserve an element and get its address (called before the element is loaded).
            virtual void* ReserveElement(void* instance, const ClassElement* classElement) = 0;
            /// Free an element that was reserved using ReserveElement, but was not stored by calling StoreElement.
            virtual void FreeReservedElement(void* instance, void* element, SerializeContext* deletePointerDataContext)
            {
                RemoveElement(instance, element, deletePointerDataContext);
            }
            /// Get an element's address by its index (called before the element is loaded).
            virtual void* GetElementByIndex(void* instance, const ClassElement* classElement, size_t index) = 0;
            /// Store the element that was reserved before (called post loading)
            virtual void StoreElement(void* instance, void* element) = 0;
            /// Remove element in the container. Returns true if the element was removed, otherwise false. If deletePointerDataContext is
            /// NOT null, this indicated that you want the remove function to delete/destroy any Elements that are pointer!
            virtual bool RemoveElement(void* instance, const void* element, SerializeContext* deletePointerDataContext) = 0;
            /**
             * Remove elements (removed array of elements) regardless if the container is Stable or not (IsStableElements).
             * Element should be sorted on address in acceding order. Returns number of elements removed.
             * If deletePointerDataContext is NOT null, this indicates that you want the remove function to delete/destroy any Elements that
             * are pointer,
             */
            virtual size_t RemoveElements(
                void* instance, const void** elements, size_t numElements, SerializeContext* deletePointerDataContext) = 0;
            /// Clear elements in the instance. If deletePointerDataContext is NOT null, this indicated that you want the remove function to
            /// delete/destroy any Elements that are pointer!
            virtual void ClearElements(void* instance, SerializeContext* deletePointerDataContext) = 0;
            /// Called when elements inside the container have been modified.
            virtual void ElementsUpdated(void* instance);

        protected:
            /// Free element data (when the class elements are pointers).
            void DeletePointerData(SerializeContext* context, const ClassElement* classElement, const void* element);
        };
        /**
         * Serialize class events.
         * IMPORTANT: Serialize events can be called from serialization thread(s). So all functions should be thread safe.
         */
        class IEventHandler
        {
        public:
            virtual ~IEventHandler()
            {
            }

            /// Called right before we start reading from the instance pointed by classPtr.
            virtual void OnReadBegin(void* classPtr)
            {
                (void)classPtr;
            }
            /// Called after we are done reading from the instance pointed by classPtr.
            virtual void OnReadEnd(void* classPtr)
            {
                (void)classPtr;
            }

            /// Called right before we start writing to the instance pointed by classPtr.
            virtual void OnWriteBegin(void* classPtr)
            {
                (void)classPtr;
            }
            /// Called after we are done writing to the instance pointed by classPtr.
            /// NOTE: Care must be taken when using this callback. It is called when ID remapping occurs,
            /// an instance is clone or an instance is loaded from an objectstream.
            /// This means that this function can be invoked multiple times in the course of serializing a new instance from an ObjectStream
            /// or cloning an object.
            virtual void OnWriteEnd(void* classPtr)
            {
                (void)classPtr;
            }

            /// Called right before we start data patching the instance pointed by classPtr.
            virtual void OnPatchBegin(void* classPtr, const DataPatchNodeInfo& patchInfo)
            {
                (void)classPtr;
                (void)patchInfo;
            }
            /// Called after we are done data patching the instance pointed by classPtr.
            virtual void OnPatchEnd(void* classPtr, const DataPatchNodeInfo& patchInfo)
            {
                (void)classPtr;
                (void)patchInfo;
            }

            /// Called after an instance has been loaded from a source data stream, such as ObjectStream::Load or JsonSerialization::Load
            virtual void OnLoadedFromObjectStream(void* classPtr)
            {
                (void)classPtr;
            }
            /// Called after an object is cloned in SerializeContext::EndCloneObject
            virtual void OnObjectCloned(void* classPtr)
            {
                (void)classPtr;
            }
        };
        /**
         * Data Converter interface which can be used to provide a conversion operation from to unrelated C++ types
         * derived class to base class casting is taken care of through the RTTI system so those relations should not be
         * check within this class
         */
        class IDataConverter
        {
        public:
            virtual ~IDataConverter() = default;
            ///< Callback to determine if the supplied convertible type can be stored in an instance of classData
            ///< @param convertibleTypeId type to check to determine if it can converted to an element of class represent by this Class Data
            ///< @param classData reference to the metadata representing the type stored in classPtr
            ///< @return if the classData can store the convertible type element true is returned
            virtual bool CanConvertFromType(
                const TypeId& convertibleTypeId, const Serialization::ClassData& classData, SerializeContext& /*serializeContext*/);

            ///< Callback that can be used to retrieve a memory address in which to store an element of the supplied convertible type
            ///< @param convertibleTypePtr result pointer that should be populated with an address that can store an element of the
            ///< convertible type
            ///< @param convertibleTypeId type to check to determine if it can converted to an element of class represent by this Class Data
            ///< @param classPtr memory address of the class represented by the @classData type
            ///< @param classData reference to the metadata representing the type stored in classPtr
            ///< @return true if a non-null memory address has been returned that can store the convertible type
            virtual bool ConvertFromType(
                void*& convertibleTypePtr,
                const TypeId& convertibleTypeId,
                void* classPtr,
                const Serialization::ClassData& classData,
                SerializeContext& /*serializeContext*/);
        };
    } // namespace Serialization
    using AttributePtr = AZStd::shared_ptr<Attribute>;
    using AttributeSharedPair = AZStd::pair<AttributeId, AttributePtr>;

} // namespace AZ
