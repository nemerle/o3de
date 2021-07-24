/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include "Endpoint.h"

#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/Serialization/AZStdContainers.inl>
#include <AzCore/Serialization/EditContext.h>

namespace GraphCanvas
{

void Endpoint::Reflect(AZ::ReflectContext *reflection)
{
    AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflection);
    if (serializeContext)
    {
        serializeContext->Class<Endpoint>()
                ->Version(1)
                ->Field("nodeId", &Endpoint::m_nodeId)
                ->Field("slotId", &Endpoint::m_slotId)
                ;

        if (auto editContext = serializeContext->GetEditContext())
        {
            editContext->Class<Endpoint>("Endpoint", "Endpoint")
                    ->DataElement(0, &Endpoint::m_nodeId, "Node Id", "Node Id portion of endpoint")
                    ->Attribute(AZ::Edit::Attributes::SliceFlags, AZ::Edit::SliceFlags::DontGatherReference | AZ::Edit::SliceFlags::NotPushable)
                    ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::Hide)
                    ;
        }
    }
}

}
