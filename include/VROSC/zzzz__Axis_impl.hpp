#pragma once
// IWYU pragma private; include "VROSC/Axis.hpp"
#include "VROSC/zzzz__Axis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::Axis::Axis(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::Axis::Axis()   {
}
constexpr ::VROSC::Axis  VROSC::Axis::x{static_cast<int32_t>(0x0)};
constexpr ::VROSC::Axis  VROSC::Axis::y{static_cast<int32_t>(0x1)};
constexpr ::VROSC::Axis  VROSC::Axis::z{static_cast<int32_t>(0x2)};
