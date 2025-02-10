#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationState.hpp"
#include "Unity/Services/Authentication/zzzz__AuthenticationState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Authentication::AuthenticationState::AuthenticationState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::AuthenticationState::AuthenticationState()   {
}
constexpr ::Unity::Services::Authentication::AuthenticationState  Unity::Services::Authentication::AuthenticationState::SignedOut{static_cast<int32_t>(0x0)};
constexpr ::Unity::Services::Authentication::AuthenticationState  Unity::Services::Authentication::AuthenticationState::SigningIn{static_cast<int32_t>(0x1)};
constexpr ::Unity::Services::Authentication::AuthenticationState  Unity::Services::Authentication::AuthenticationState::Authorized{static_cast<int32_t>(0x2)};
constexpr ::Unity::Services::Authentication::AuthenticationState  Unity::Services::Authentication::AuthenticationState::Refreshing{static_cast<int32_t>(0x3)};
constexpr ::Unity::Services::Authentication::AuthenticationState  Unity::Services::Authentication::AuthenticationState::Expired{static_cast<int32_t>(0x4)};
