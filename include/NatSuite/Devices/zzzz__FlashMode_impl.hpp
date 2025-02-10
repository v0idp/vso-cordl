#pragma once
// IWYU pragma private; include "NatSuite/Devices/FlashMode.hpp"
#include "NatSuite/Devices/zzzz__FlashMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::NatSuite::Devices::FlashMode::FlashMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::NatSuite::Devices::FlashMode::FlashMode()   {
}
constexpr ::NatSuite::Devices::FlashMode  NatSuite::Devices::FlashMode::Off{static_cast<int32_t>(0x0)};
constexpr ::NatSuite::Devices::FlashMode  NatSuite::Devices::FlashMode::On{static_cast<int32_t>(0x1)};
constexpr ::NatSuite::Devices::FlashMode  NatSuite::Devices::FlashMode::Auto{static_cast<int32_t>(0x2)};
