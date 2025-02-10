#pragma once
// IWYU pragma private; include "VROSC/HandType.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::HandType::HandType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::HandType::HandType()   {
}
constexpr ::VROSC::HandType  VROSC::HandType::Any{static_cast<int32_t>(0x0)};
constexpr ::VROSC::HandType  VROSC::HandType::Left{static_cast<int32_t>(0x1)};
constexpr ::VROSC::HandType  VROSC::HandType::Right{static_cast<int32_t>(0x2)};
constexpr ::VROSC::HandType  VROSC::HandType::Both{static_cast<int32_t>(0x3)};
