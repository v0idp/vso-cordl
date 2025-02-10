#pragma once
// IWYU pragma private; include "DG/Tweening/UpdateType.hpp"
#include "DG/Tweening/zzzz__UpdateType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::UpdateType::UpdateType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DG::Tweening::UpdateType::UpdateType()   {
}
constexpr ::DG::Tweening::UpdateType  DG::Tweening::UpdateType::Normal{static_cast<int32_t>(0x0)};
constexpr ::DG::Tweening::UpdateType  DG::Tweening::UpdateType::Late{static_cast<int32_t>(0x1)};
constexpr ::DG::Tweening::UpdateType  DG::Tweening::UpdateType::Fixed{static_cast<int32_t>(0x2)};
constexpr ::DG::Tweening::UpdateType  DG::Tweening::UpdateType::Manual{static_cast<int32_t>(0x3)};
