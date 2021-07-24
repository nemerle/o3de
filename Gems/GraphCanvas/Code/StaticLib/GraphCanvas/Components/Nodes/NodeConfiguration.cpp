/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include "NodeConfiguration.h"

#include <AzCore/Serialization/EditContext.h>
#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/Serialization/AZStdContainers.inl>

namespace GraphCanvas
{

void NodeConfiguration::Reflect(AZ::ReflectContext *context)
{
    AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context);
    if (serializeContext)
    {
        serializeContext->Class<NodeConfiguration>()
                ->Version(3)
                ->Field("Tooltip", &NodeConfiguration::m_tooltip)
                ->Field("ShowInOutliner", &NodeConfiguration::m_showInOutliner)
                ;

        AZ::EditContext* editContext = serializeContext->GetEditContext();
        if (editContext)
        {
            editContext->Class<NodeConfiguration>("Configuration", "The Node's configuration data")
                    ->ClassElement(AZ::Edit::ClassElements::EditorData, "Node's configuration class attributes")
                    ->Attribute(AZ::Edit::Attributes::Visibility, AZ::Edit::PropertyVisibility::ShowChildrenOnly)
                    ->DataElement(AZ::Edit::UIHandlers::Default, &NodeConfiguration::m_tooltip, "Tooltip", "Tooltip explaining node functionality")
                    ->Attribute(AZ::Edit::Attributes::ReadOnly, true)
                    ;
        }
    }
}

}
