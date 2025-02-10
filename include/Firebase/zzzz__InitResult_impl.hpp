#pragma once
// IWYU pragma private; include "Firebase/InitResult.hpp"
#include "Firebase/zzzz__InitResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Firebase::InitResult::InitResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Firebase::InitResult::InitResult()   {
}
constexpr ::Firebase::InitResult  Firebase::InitResult::Success{static_cast<int32_t>(0x0)};
constexpr ::Firebase::InitResult  Firebase::InitResult::FailedMissingDependency{static_cast<int32_t>(0x1)};
