#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Options/OrientType.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__OrientType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::Plugins::Options::OrientType::OrientType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DG::Tweening::Plugins::Options::OrientType::OrientType()   {
}
constexpr ::DG::Tweening::Plugins::Options::OrientType  DG::Tweening::Plugins::Options::OrientType::None{static_cast<int32_t>(0x0)};
constexpr ::DG::Tweening::Plugins::Options::OrientType  DG::Tweening::Plugins::Options::OrientType::ToPath{static_cast<int32_t>(0x1)};
constexpr ::DG::Tweening::Plugins::Options::OrientType  DG::Tweening::Plugins::Options::OrientType::LookAtTransform{static_cast<int32_t>(0x2)};
constexpr ::DG::Tweening::Plugins::Options::OrientType  DG::Tweening::Plugins::Options::OrientType::LookAtPosition{static_cast<int32_t>(0x3)};
