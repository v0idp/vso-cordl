#pragma once
// IWYU pragma private; include "VROSC/ChangeFlags.hpp"
#include "VROSC/zzzz__ChangeFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::ChangeFlags::ChangeFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::ChangeFlags::ChangeFlags()   {
}
constexpr ::VROSC::ChangeFlags  VROSC::ChangeFlags::NoChange{static_cast<int32_t>(0x0)};
constexpr ::VROSC::ChangeFlags  VROSC::ChangeFlags::Changed{static_cast<int32_t>(0x1)};
constexpr ::VROSC::ChangeFlags  VROSC::ChangeFlags::CriticalChange{static_cast<int32_t>(0x2)};
