/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include "SerializationInterfaces.h"
#include "SerializeContext.h"

bool AZ::Serialization::IDataConverter::CanConvertFromType(const TypeId &convertibleTypeId, const ClassData &classData, SerializeContext &)
{
    return classData.m_typeId == convertibleTypeId;
}

bool AZ::Serialization::IDataConverter::ConvertFromType(void *&convertibleTypePtr, const TypeId &convertibleTypeId, void *classPtr, const ClassData &classData, SerializeContext &)
{
    if (classData.m_typeId == convertibleTypeId)
    {
        convertibleTypePtr = classPtr;
        return true;
    }

    return false;
}
