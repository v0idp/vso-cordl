#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/ConsentStatus.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__ConsentStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Analytics::Internal::ConsentStatus::ConsentStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::Internal::ConsentStatus::ConsentStatus()   {
}
constexpr ::Unity::Services::Analytics::Internal::ConsentStatus  Unity::Services::Analytics::Internal::ConsentStatus::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Unity::Services::Analytics::Internal::ConsentStatus  Unity::Services::Analytics::Internal::ConsentStatus::Forgetting{static_cast<int32_t>(0x1)};
constexpr ::Unity::Services::Analytics::Internal::ConsentStatus  Unity::Services::Analytics::Internal::ConsentStatus::OptedOut{static_cast<int32_t>(0x2)};
constexpr ::Unity::Services::Analytics::Internal::ConsentStatus  Unity::Services::Analytics::Internal::ConsentStatus::NotRequired{static_cast<int32_t>(0x3)};
constexpr ::Unity::Services::Analytics::Internal::ConsentStatus  Unity::Services::Analytics::Internal::ConsentStatus::RequiredButUnchecked{static_cast<int32_t>(0x4)};
constexpr ::Unity::Services::Analytics::Internal::ConsentStatus  Unity::Services::Analytics::Internal::ConsentStatus::ConsentGiven{static_cast<int32_t>(0x5)};
constexpr ::Unity::Services::Analytics::Internal::ConsentStatus  Unity::Services::Analytics::Internal::ConsentStatus::ConsentDenied{static_cast<int32_t>(0x6)};
