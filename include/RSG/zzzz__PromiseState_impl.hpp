#pragma once
// IWYU pragma private; include "RSG/PromiseState.hpp"
#include "RSG/zzzz__PromiseState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RSG::PromiseState::PromiseState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::RSG::PromiseState::PromiseState()   {
}
constexpr ::RSG::PromiseState  RSG::PromiseState::Pending{static_cast<int32_t>(0x0)};
constexpr ::RSG::PromiseState  RSG::PromiseState::Rejected{static_cast<int32_t>(0x1)};
constexpr ::RSG::PromiseState  RSG::PromiseState::Resolved{static_cast<int32_t>(0x2)};
