#pragma once
// IWYU pragma private; include "RSG/TimeData.hpp"
#include "RSG/zzzz__TimeData_def.hpp"
// Ctor Parameters [CppParam { name: "elapsedTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "deltaTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "elapsedUpdates", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RSG::TimeData::TimeData(float_t  elapsedTime, float_t  deltaTime, int32_t  elapsedUpdates) noexcept  {
this->elapsedTime = elapsedTime;
this->deltaTime = deltaTime;
this->elapsedUpdates = elapsedUpdates;
}
// Ctor Parameters []
constexpr ::RSG::TimeData::TimeData()   {
}
