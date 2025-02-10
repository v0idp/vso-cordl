#pragma once
// IWYU pragma private; include "DG/Tweening/ScrambleMode.hpp"
#include "DG/Tweening/zzzz__ScrambleMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::ScrambleMode::ScrambleMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DG::Tweening::ScrambleMode::ScrambleMode()   {
}
constexpr ::DG::Tweening::ScrambleMode  DG::Tweening::ScrambleMode::None{static_cast<int32_t>(0x0)};
constexpr ::DG::Tweening::ScrambleMode  DG::Tweening::ScrambleMode::All{static_cast<int32_t>(0x1)};
constexpr ::DG::Tweening::ScrambleMode  DG::Tweening::ScrambleMode::Uppercase{static_cast<int32_t>(0x2)};
constexpr ::DG::Tweening::ScrambleMode  DG::Tweening::ScrambleMode::Lowercase{static_cast<int32_t>(0x3)};
constexpr ::DG::Tweening::ScrambleMode  DG::Tweening::ScrambleMode::Numerals{static_cast<int32_t>(0x4)};
constexpr ::DG::Tweening::ScrambleMode  DG::Tweening::ScrambleMode::Custom{static_cast<int32_t>(0x5)};
