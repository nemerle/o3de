/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include <Atom/RPI.Reflect/System/SceneDescriptor.h>

#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/Serialization/AZStdContainers.inl>


namespace AZ
{
    namespace RPI
    {
        void SceneDescriptor::Reflect(AZ::ReflectContext* context)
        {
            if (auto* serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
            {
                serializeContext->Class<SceneDescriptor>()
                    ->Version(1)
                    ->Field("FeatureProcessors", &SceneDescriptor::m_featureProcessorNames)
                ;
            }
        }
    } // namespace RPI
} // namespace AZ
