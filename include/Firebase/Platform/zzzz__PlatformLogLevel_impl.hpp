#pragma once
// IWYU pragma private; include "Firebase/Platform/PlatformLogLevel.hpp"
#include "Firebase/Platform/zzzz__PlatformLogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Firebase::Platform::PlatformLogLevel::PlatformLogLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Firebase::Platform::PlatformLogLevel::PlatformLogLevel()   {
}
constexpr ::Firebase::Platform::PlatformLogLevel  Firebase::Platform::PlatformLogLevel::Verbose{static_cast<int32_t>(0x0)};
constexpr ::Firebase::Platform::PlatformLogLevel  Firebase::Platform::PlatformLogLevel::Debug{static_cast<int32_t>(0x1)};
constexpr ::Firebase::Platform::PlatformLogLevel  Firebase::Platform::PlatformLogLevel::Info{static_cast<int32_t>(0x2)};
constexpr ::Firebase::Platform::PlatformLogLevel  Firebase::Platform::PlatformLogLevel::Warning{static_cast<int32_t>(0x3)};
constexpr ::Firebase::Platform::PlatformLogLevel  Firebase::Platform::PlatformLogLevel::Error{static_cast<int32_t>(0x4)};
constexpr ::Firebase::Platform::PlatformLogLevel  Firebase::Platform::PlatformLogLevel::_cordl_Assert{static_cast<int32_t>(0x5)};
