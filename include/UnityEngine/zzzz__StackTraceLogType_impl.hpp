#pragma once
// IWYU pragma private; include "UnityEngine/StackTraceLogType.hpp"
#include "UnityEngine/zzzz__StackTraceLogType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::StackTraceLogType::StackTraceLogType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::StackTraceLogType::StackTraceLogType()   {
}
constexpr ::UnityEngine::StackTraceLogType  UnityEngine::StackTraceLogType::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::StackTraceLogType  UnityEngine::StackTraceLogType::ScriptOnly{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::StackTraceLogType  UnityEngine::StackTraceLogType::Full{static_cast<int32_t>(0x2)};
