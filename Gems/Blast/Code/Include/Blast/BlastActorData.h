/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */
#pragma once

#include <AzCore/Component/Entity.h>
#include <Blast/BlastActor.h>

namespace Blast
{
    //! Data exposed through script canvas as a notification from BlastFamilyComponentNotificationBus.
    struct BlastActorData
    {
        AZ_TYPE_INFO(BlastActorData, "{A23453D5-79A8-49C8-B9F0-9CC35D711DD4}");

        BlastActorData() = default;
        explicit BlastActorData(const BlastActor& blastActor)
            : m_isStatic(blastActor.IsStatic())
            , m_entityId(blastActor.GetEntity()->GetId())
        {
        }

        static void Reflect(AZ::ReflectContext* context);

        bool m_isStatic;
        AZ::EntityId m_entityId;
    };
} // namespace Blast
