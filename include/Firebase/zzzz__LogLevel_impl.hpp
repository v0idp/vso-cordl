#pragma once
// IWYU pragma private; include "Firebase/LogLevel.hpp"
#include "Firebase/zzzz__LogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Firebase::LogLevel::LogLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Firebase::LogLevel::LogLevel()   {
}
constexpr ::Firebase::LogLevel  Firebase::LogLevel::Verbose{static_cast<int32_t>(0x0)};
constexpr ::Firebase::LogLevel  Firebase::LogLevel::Debug{static_cast<int32_t>(0x1)};
constexpr ::Firebase::LogLevel  Firebase::LogLevel::Info{static_cast<int32_t>(0x2)};
constexpr ::Firebase::LogLevel  Firebase::LogLevel::Warning{static_cast<int32_t>(0x3)};
constexpr ::Firebase::LogLevel  Firebase::LogLevel::Error{static_cast<int32_t>(0x4)};
constexpr ::Firebase::LogLevel  Firebase::LogLevel::_cordl_Assert{static_cast<int32_t>(0x5)};
