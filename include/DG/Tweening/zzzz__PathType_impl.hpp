#pragma once
// IWYU pragma private; include "DG/Tweening/PathType.hpp"
#include "DG/Tweening/zzzz__PathType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::PathType::PathType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DG::Tweening::PathType::PathType()   {
}
constexpr ::DG::Tweening::PathType  DG::Tweening::PathType::Linear{static_cast<int32_t>(0x0)};
constexpr ::DG::Tweening::PathType  DG::Tweening::PathType::CatmullRom{static_cast<int32_t>(0x1)};
constexpr ::DG::Tweening::PathType  DG::Tweening::PathType::CubicBezier{static_cast<int32_t>(0x2)};
