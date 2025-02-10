#pragma once
// IWYU pragma private; include "DG/Tweening/TweenType.hpp"
#include "DG/Tweening/zzzz__TweenType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::TweenType::TweenType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DG::Tweening::TweenType::TweenType()   {
}
constexpr ::DG::Tweening::TweenType  DG::Tweening::TweenType::Tweener{static_cast<int32_t>(0x0)};
constexpr ::DG::Tweening::TweenType  DG::Tweening::TweenType::Sequence{static_cast<int32_t>(0x1)};
constexpr ::DG::Tweening::TweenType  DG::Tweening::TweenType::Callback{static_cast<int32_t>(0x2)};
