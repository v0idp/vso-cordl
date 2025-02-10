#pragma once
// IWYU pragma private; include "VROSC/TriggerFrame.hpp"
#include "VROSC/zzzz__TriggerFrame_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::TriggerFrame::TriggerFrame(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::TriggerFrame::TriggerFrame()   {
}
constexpr ::VROSC::TriggerFrame  VROSC::TriggerFrame::Stay{static_cast<int32_t>(0x0)};
constexpr ::VROSC::TriggerFrame  VROSC::TriggerFrame::Begin{static_cast<int32_t>(0x1)};
constexpr ::VROSC::TriggerFrame  VROSC::TriggerFrame::End{static_cast<int32_t>(0x2)};
