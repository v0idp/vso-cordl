#pragma once
// IWYU pragma private; include "DG/Tweening/AutoPlay.hpp"
#include "DG/Tweening/zzzz__AutoPlay_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::AutoPlay::AutoPlay(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DG::Tweening::AutoPlay::AutoPlay()   {
}
constexpr ::DG::Tweening::AutoPlay  DG::Tweening::AutoPlay::None{static_cast<int32_t>(0x0)};
constexpr ::DG::Tweening::AutoPlay  DG::Tweening::AutoPlay::AutoPlaySequences{static_cast<int32_t>(0x1)};
constexpr ::DG::Tweening::AutoPlay  DG::Tweening::AutoPlay::AutoPlayTweeners{static_cast<int32_t>(0x2)};
constexpr ::DG::Tweening::AutoPlay  DG::Tweening::AutoPlay::All{static_cast<int32_t>(0x3)};
