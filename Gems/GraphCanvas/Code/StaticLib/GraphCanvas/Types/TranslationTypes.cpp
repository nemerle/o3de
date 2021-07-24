/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include "TranslationTypes.h"
#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/Serialization/AZStdContainers.inl>

#include <QCoreApplication>

namespace GraphCanvas
{

void TranslationKeyedString::Reflect(AZ::ReflectContext *context)
{
    AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context);
    if (!serializeContext)
    {
        return;
    }

    serializeContext->Class<TranslationKeyedString>()
            ->Version(1)
            ->Field("Fallback", &TranslationKeyedString::m_fallback)
            ->Field("Context", &TranslationKeyedString::m_context)
            ->Field("Key", &TranslationKeyedString::m_key)
            ;
}

const AZStd::string TranslationKeyedString::GetDisplayString() const
{
    if (m_dirtyText)
    {
        const_cast<TranslationKeyedString*>(this)->TranslateString();
    }

    return m_display;
}

void TranslationKeyedString::TranslateString()
{
    m_display = m_fallback;

    if (!m_context.empty() && !m_key.empty())
    {
        AZStd::string translatedText = QCoreApplication::translate(m_context.c_str(), m_key.c_str()).toUtf8().data();

        if (translatedText != m_key)
        {
            m_display = translatedText;
        }
    }

    m_dirtyText = false;
}

}
