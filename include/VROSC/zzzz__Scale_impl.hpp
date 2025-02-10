#pragma once
// IWYU pragma private; include "VROSC/Scale.hpp"
#include "VROSC/zzzz__Scale_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::Scale::Scale(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::Scale::Scale()   {
}
constexpr ::VROSC::Scale  VROSC::Scale::C{static_cast<int32_t>(0x1)};
constexpr ::VROSC::Scale  VROSC::Scale::Db{static_cast<int32_t>(0x2)};
constexpr ::VROSC::Scale  VROSC::Scale::D{static_cast<int32_t>(0x4)};
constexpr ::VROSC::Scale  VROSC::Scale::Eb{static_cast<int32_t>(0x8)};
constexpr ::VROSC::Scale  VROSC::Scale::E{static_cast<int32_t>(0x10)};
constexpr ::VROSC::Scale  VROSC::Scale::F{static_cast<int32_t>(0x20)};
constexpr ::VROSC::Scale  VROSC::Scale::Gb{static_cast<int32_t>(0x40)};
constexpr ::VROSC::Scale  VROSC::Scale::G{static_cast<int32_t>(0x80)};
constexpr ::VROSC::Scale  VROSC::Scale::Ab{static_cast<int32_t>(0x100)};
constexpr ::VROSC::Scale  VROSC::Scale::A{static_cast<int32_t>(0x200)};
constexpr ::VROSC::Scale  VROSC::Scale::Bb{static_cast<int32_t>(0x400)};
constexpr ::VROSC::Scale  VROSC::Scale::B{static_cast<int32_t>(0x800)};
