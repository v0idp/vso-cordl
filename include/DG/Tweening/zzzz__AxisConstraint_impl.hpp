#pragma once
// IWYU pragma private; include "DG/Tweening/AxisConstraint.hpp"
#include "DG/Tweening/zzzz__AxisConstraint_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::AxisConstraint::AxisConstraint(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DG::Tweening::AxisConstraint::AxisConstraint()   {
}
constexpr ::DG::Tweening::AxisConstraint  DG::Tweening::AxisConstraint::None{static_cast<int32_t>(0x0)};
constexpr ::DG::Tweening::AxisConstraint  DG::Tweening::AxisConstraint::X{static_cast<int32_t>(0x2)};
constexpr ::DG::Tweening::AxisConstraint  DG::Tweening::AxisConstraint::Y{static_cast<int32_t>(0x4)};
constexpr ::DG::Tweening::AxisConstraint  DG::Tweening::AxisConstraint::Z{static_cast<int32_t>(0x8)};
constexpr ::DG::Tweening::AxisConstraint  DG::Tweening::AxisConstraint::W{static_cast<int32_t>(0x10)};
