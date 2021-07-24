/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */
#include "GraphModel/Integration/NodePalette/ModuleNodePaletteItem.h"

#include <AzFramework/StringFunc/StringFunc.h>
#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/Serialization/AZStdContainers.inl>

namespace GraphModelIntegration
{
    AZStd::string GetNodeName(AZStd::string_view sourceFileName)
    {
        AZStd::string name = "Unnamed";
        if (!AzFramework::StringFunc::Path::GetFileName(sourceFileName.data(), name))
        {
            AZ_Assert(false, "Could not get node name from module file path [%s]", sourceFileName.data());
        }
        return name;
    }
    void CreateModuleNodeMimeEvent::Reflect(AZ::ReflectContext* reflectContext)
    {
        AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(reflectContext);

        if (serializeContext)
        {
            serializeContext->Class<CreateModuleNodeMimeEvent, GraphCanvas::GraphCanvasMimeEvent>()
                ->Version(0)
                ->Field("m_sourceFileName", &CreateModuleNodeMimeEvent::m_sourceFileName)
                ->Field("m_sourceFileId", &CreateModuleNodeMimeEvent::m_sourceFileId);
        }
    }

    bool CreateModuleNodeMimeEvent::ExecuteEvent(
        [[maybe_unused]] const AZ::Vector2& mouseDropPosition, AZ::Vector2& dropPosition, const AZ::EntityId& graphCanvasSceneId)
    {
        GraphModel::GraphPtr graph = nullptr;
        GraphManagerRequestBus::BroadcastResult(graph, &GraphManagerRequests::GetGraph, graphCanvasSceneId);
        if (!graph)
        {
            return false;
        }

        AZStd::shared_ptr<GraphModel::Node> node = AZStd::make_shared<GraphModel::ModuleNode>(graph, m_sourceFileId, m_sourceFileName);
        if (!node)
        {
            return false;
        }

        GraphControllerRequestBus::Event(graphCanvasSceneId, &GraphControllerRequests::AddNode, node, dropPosition);

        return true;
    }


} // namespace GraphModelIntegration
