/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */
#include <Atom/RPI.Reflect/Pass/RasterPassData.h>
#include <Atom/RHI.Reflect/Base.h>

#include <AzCore/Serialization/SerializeContext.h>

namespace AZ
{
    namespace RPI
    {
    void RasterPassData::Reflect(ReflectContext* context)
    {
        if (auto* serializeContext = azrtti_cast<SerializeContext*>(context))
        {
            serializeContext->Class<RasterPassData, RenderPassData>()
                ->Version(3) // ATOM-15472
                ->Field("DrawListTag", &RasterPassData::m_drawListTag)
                ->Field("PassSrgShaderAsset", &RasterPassData::m_passSrgShaderReference)
                ->Field("Viewport", &RasterPassData::m_overrideViewport)
                ->Field("Scissor", &RasterPassData::m_overrideScissor)
                ->Field("DrawListSortType", &RasterPassData::m_drawListSortType)
                ;
        }
    }

    } // namespace RPI
} // namespace AZ
