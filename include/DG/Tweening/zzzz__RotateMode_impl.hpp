#pragma once
// IWYU pragma private; include "DG/Tweening/RotateMode.hpp"
#include "DG/Tweening/zzzz__RotateMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::RotateMode::RotateMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DG::Tweening::RotateMode::RotateMode()   {
}
constexpr ::DG::Tweening::RotateMode  DG::Tweening::RotateMode::Fast{static_cast<int32_t>(0x0)};
constexpr ::DG::Tweening::RotateMode  DG::Tweening::RotateMode::FastBeyond360{static_cast<int32_t>(0x1)};
constexpr ::DG::Tweening::RotateMode  DG::Tweening::RotateMode::WorldAxisAdd{static_cast<int32_t>(0x2)};
constexpr ::DG::Tweening::RotateMode  DG::Tweening::RotateMode::LocalAxisAdd{static_cast<int32_t>(0x3)};
