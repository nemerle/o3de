/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */
#pragma once

#include <AzCore/Component/Component.h>
#include <AzCore/Component/ComponentDescriptor.h>

namespace GraphCanvas
{
    namespace Deprecated
    {
        class ColorPaletteManagerComponent
            : public AZ::Component
        {
            typedef AZStd::pair<QColor, QPixmap*> IconDescriptor;
            typedef AZStd::unordered_map< AZStd::string, IconDescriptor> PaletteToIconDescriptorMap;

        public:
            AZ_COMPONENT(ColorPaletteManagerComponent, "{486B009F-632B-44F6-81C2-3838746190AE}");
            static void Reflect(AZ::ReflectContext* reflectContext);

            // Component
            static void GetProvidedServices(AZ::ComponentDescriptorDependencyArrayType& provided)
            {
                provided.push_back(AZ_CRC("GraphCanvas_ColorPaletteManagerService", 0x6495addb));
            }

            static void GetIncompatibleServices(AZ::ComponentDescriptorDependencyArrayType& incompatible)
            {
                incompatible.push_back(AZ_CRC("GraphCanvas_ColorPaletteManagerService", 0x6495addb));
            }

            static void GetDependentServices(AZ::ComponentDescriptorDependencyArrayType& dependent)
            {
                (void)dependent;
            }

            static void GetRequiredServices(AZ::ComponentDescriptorDependencyArrayType& required)
            {
                (void)required;
            }

            void Init() {};
            void Activate() {};
            void Deactivate() {};
            ////
        };
    }
}
