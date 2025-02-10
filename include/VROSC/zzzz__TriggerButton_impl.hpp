#pragma once
// IWYU pragma private; include "VROSC/TriggerButton.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::TriggerButton::TriggerButton(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::TriggerButton::TriggerButton()   {
}
constexpr ::VROSC::TriggerButton  VROSC::TriggerButton::None{static_cast<int32_t>(0x0)};
constexpr ::VROSC::TriggerButton  VROSC::TriggerButton::Trigger{static_cast<int32_t>(0x1)};
constexpr ::VROSC::TriggerButton  VROSC::TriggerButton::Grip{static_cast<int32_t>(0x2)};
constexpr ::VROSC::TriggerButton  VROSC::TriggerButton::AppMenuYB{static_cast<int32_t>(0x4)};
constexpr ::VROSC::TriggerButton  VROSC::TriggerButton::TouchpadXA{static_cast<int32_t>(0x8)};
constexpr ::VROSC::TriggerButton  VROSC::TriggerButton::MenuButton{static_cast<int32_t>(0x10)};
constexpr ::VROSC::TriggerButton  VROSC::TriggerButton::ThumbStickDown{static_cast<int32_t>(0x20)};
