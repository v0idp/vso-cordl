#pragma once
// IWYU pragma private; include "DG/Tweening/LogBehaviour.hpp"
#include "DG/Tweening/zzzz__LogBehaviour_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::LogBehaviour::LogBehaviour(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DG::Tweening::LogBehaviour::LogBehaviour()   {
}
constexpr ::DG::Tweening::LogBehaviour  DG::Tweening::LogBehaviour::Default{static_cast<int32_t>(0x0)};
constexpr ::DG::Tweening::LogBehaviour  DG::Tweening::LogBehaviour::Verbose{static_cast<int32_t>(0x1)};
constexpr ::DG::Tweening::LogBehaviour  DG::Tweening::LogBehaviour::ErrorsOnly{static_cast<int32_t>(0x2)};
