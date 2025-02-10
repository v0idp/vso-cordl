#pragma once
// IWYU pragma private; include "UnityEngine/UserAuthorization.hpp"
#include "UnityEngine/zzzz__UserAuthorization_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UserAuthorization::UserAuthorization(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UserAuthorization::UserAuthorization()   {
}
constexpr ::UnityEngine::UserAuthorization  UnityEngine::UserAuthorization::WebCam{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UserAuthorization  UnityEngine::UserAuthorization::Microphone{static_cast<int32_t>(0x2)};
