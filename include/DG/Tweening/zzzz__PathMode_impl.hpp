#pragma once
// IWYU pragma private; include "DG/Tweening/PathMode.hpp"
#include "DG/Tweening/zzzz__PathMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::PathMode::PathMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DG::Tweening::PathMode::PathMode()   {
}
constexpr ::DG::Tweening::PathMode  DG::Tweening::PathMode::Ignore{static_cast<int32_t>(0x0)};
constexpr ::DG::Tweening::PathMode  DG::Tweening::PathMode::Full3D{static_cast<int32_t>(0x1)};
constexpr ::DG::Tweening::PathMode  DG::Tweening::PathMode::TopDown2D{static_cast<int32_t>(0x2)};
constexpr ::DG::Tweening::PathMode  DG::Tweening::PathMode::Sidescroller2D{static_cast<int32_t>(0x3)};
