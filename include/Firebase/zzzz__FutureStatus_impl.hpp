#pragma once
// IWYU pragma private; include "Firebase/FutureStatus.hpp"
#include "Firebase/zzzz__FutureStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Firebase::FutureStatus::FutureStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Firebase::FutureStatus::FutureStatus()   {
}
constexpr ::Firebase::FutureStatus  Firebase::FutureStatus::Complete{static_cast<int32_t>(0x0)};
constexpr ::Firebase::FutureStatus  Firebase::FutureStatus::Pending{static_cast<int32_t>(0x1)};
constexpr ::Firebase::FutureStatus  Firebase::FutureStatus::Invalid{static_cast<int32_t>(0x2)};
