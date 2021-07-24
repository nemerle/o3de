/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#pragma once

#include <AzCore/RTTI/TypeInfo.h>
#include <AzCore/Memory/Memory.h>
#include <AzCore/Memory/SystemAllocator.h>
#include <AzCore/std/string/string.h>

namespace AZ
{
    class ReflectContext;
}

namespace GraphCanvas
{
    struct TranslationKeyedString
    {
    public:
        AZ_TYPE_INFO(TranslationKeyedString, "{B796685C-0335-4E74-9EF8-A1933E8B2142}");
        AZ_CLASS_ALLOCATOR(TranslationKeyedString, AZ::SystemAllocator, 0);

        static void Reflect(AZ::ReflectContext* context);

        TranslationKeyedString()
            : m_dirtyText(true)
        {
        }

        ~TranslationKeyedString() = default;

        TranslationKeyedString(const AZStd::string& fallback, const AZStd::string& context = AZStd::string(), const AZStd::string& key = AZStd::string())
            : m_fallback(fallback)
            , m_context(context)
            , m_key(key)
            , m_dirtyText(true)
        {
        }

        const AZStd::string GetDisplayString() const;

        void TranslateString();

        bool empty() const
        {
            return m_fallback.empty() && (m_context.empty() || m_key.empty());
        }

        bool operator==(const TranslationKeyedString& other) const
        {
            return m_fallback == other.m_fallback
                && m_context == other.m_context
                && m_key == other.m_key
                ;
        }

        void Clear()
        {
            m_key.clear();
            m_context.clear();
            m_fallback.clear();
        }

        void SetFallback(const AZStd::string& fallback)
        {
            m_fallback = fallback;
            m_dirtyText = true;
        }

        AZStd::string m_context;
        AZStd::string m_key;
        AZStd::string m_display;

    private:
        AZStd::string m_fallback;

        bool m_dirtyText;
    };
}
