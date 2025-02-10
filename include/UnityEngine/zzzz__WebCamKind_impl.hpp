#pragma once
// IWYU pragma private; include "UnityEngine/WebCamKind.hpp"
#include "UnityEngine/zzzz__WebCamKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::WebCamKind::WebCamKind(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::WebCamKind::WebCamKind()   {
}
constexpr ::UnityEngine::WebCamKind  UnityEngine::WebCamKind::WideAngle{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::WebCamKind  UnityEngine::WebCamKind::Telephoto{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::WebCamKind  UnityEngine::WebCamKind::ColorAndDepth{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::WebCamKind  UnityEngine::WebCamKind::UltraWideAngle{static_cast<int32_t>(0x4)};
