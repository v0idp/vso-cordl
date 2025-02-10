#pragma once
// IWYU pragma private; include "VROSC/Note.hpp"
#include "VROSC/zzzz__Note_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::Note::Note(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::Note::Note()   {
}
constexpr ::VROSC::Note  VROSC::Note::C{static_cast<int32_t>(0x0)};
constexpr ::VROSC::Note  VROSC::Note::Db{static_cast<int32_t>(0x1)};
constexpr ::VROSC::Note  VROSC::Note::D{static_cast<int32_t>(0x2)};
constexpr ::VROSC::Note  VROSC::Note::Eb{static_cast<int32_t>(0x3)};
constexpr ::VROSC::Note  VROSC::Note::E{static_cast<int32_t>(0x4)};
constexpr ::VROSC::Note  VROSC::Note::F{static_cast<int32_t>(0x5)};
constexpr ::VROSC::Note  VROSC::Note::Gb{static_cast<int32_t>(0x6)};
constexpr ::VROSC::Note  VROSC::Note::G{static_cast<int32_t>(0x7)};
constexpr ::VROSC::Note  VROSC::Note::Ab{static_cast<int32_t>(0x8)};
constexpr ::VROSC::Note  VROSC::Note::A{static_cast<int32_t>(0x9)};
constexpr ::VROSC::Note  VROSC::Note::Bb{static_cast<int32_t>(0xa)};
constexpr ::VROSC::Note  VROSC::Note::B{static_cast<int32_t>(0xb)};
