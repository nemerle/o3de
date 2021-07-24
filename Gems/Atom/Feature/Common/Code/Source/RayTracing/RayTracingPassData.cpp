/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include "RayTracingPassData.h"

#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/Serialization/AZStdContainers.inl>

namespace AZ
{
    namespace Render
    {
        void RayTracingPassData::Reflect(ReflectContext* context)
        {
            if (auto* serializeContext = azrtti_cast<SerializeContext*>(context))
            {
                serializeContext->Class<RayTracingPassData, RenderPassData>()
                    ->Version(1)
                    ->Field("RayGenerationShaderAsset", &RayTracingPassData::m_rayGenerationShaderAssetReference)
                    ->Field("RayGenerationShaderName", &RayTracingPassData::m_rayGenerationShaderName)
                    ->Field("ClosestHitShaderAsset", &RayTracingPassData::m_closestHitShaderAssetReference)
                    ->Field("ClosestHitShaderName", &RayTracingPassData::m_closestHitShaderName)
                    ->Field("MissShaderAsset", &RayTracingPassData::m_missShaderAssetReference)
                    ->Field("MissShaderName", &RayTracingPassData::m_missShaderName)
                    ->Field("MaxPayloadSize", &RayTracingPassData::m_maxPayloadSize)
                    ->Field("MaxAttributeSize", &RayTracingPassData::m_maxAttributeSize)
                    ->Field("MaxRecursionDepth", &RayTracingPassData::m_maxRecursionDepth)
                    ->Field("Thread Count X", &RayTracingPassData::m_threadCountX)
                    ->Field("Thread Count Y", &RayTracingPassData::m_threadCountY)
                    ->Field("Thread Count Z", &RayTracingPassData::m_threadCountZ)
                    ->Field("Make Fullscreen Pass", &RayTracingPassData::m_makeFullscreenPass);
            }
        }

    } // namespace Render
} // namespace AZ
