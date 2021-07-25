/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */
#include <Atom/RPI.Reflect/Pass/RenderPassData.h>

#include <AzCore/Serialization/SerializeContext.h>

namespace AZ
{
    namespace RPI
    {
        void RenderPassData::Reflect(ReflectContext* context)
        {
            if (auto* serializeContext = azrtti_cast<SerializeContext*>(context))
            {
                serializeContext->Class<RenderPassData, PassData>()
                    ->Version(1)
                    ->Field("PipelineViewTag", &RenderPassData::m_pipelineViewTag)
                    ->Field("ShaderDataMappings", &RenderPassData::m_mappings);
            }
        }

    } // namespace RPI
} // namespace AZ
