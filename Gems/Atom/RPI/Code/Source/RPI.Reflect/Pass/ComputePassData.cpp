/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */
#include <Atom/RPI.Reflect/Pass/ComputePassData.h>

#include <Atom/RHI.Reflect/Base.h>

#include <AzCore/Serialization/SerializeContext.h>

namespace AZ
{
    namespace RPI
    {
        void ComputePassData::Reflect(ReflectContext* context)
        {
            if (auto* serializeContext = azrtti_cast<SerializeContext*>(context))
            {
                serializeContext->Class<ComputePassData, RenderPassData>()
                    ->Version(1)
                    ->Field("ShaderAsset", &ComputePassData::m_shaderReference)
                    ->Field("Target Thread Count X", &ComputePassData::m_totalNumberOfThreadsX)
                    ->Field("Target Thread Count Y", &ComputePassData::m_totalNumberOfThreadsY)
                    ->Field("Target Thread Count Z", &ComputePassData::m_totalNumberOfThreadsZ)
                    ->Field("Make Fullscreen Pass", &ComputePassData::m_makeFullscreenPass);
            }
        }

    } // namespace RPI
} // namespace AZ
