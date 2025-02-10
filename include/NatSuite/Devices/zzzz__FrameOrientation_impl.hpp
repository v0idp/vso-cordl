#pragma once
// IWYU pragma private; include "NatSuite/Devices/FrameOrientation.hpp"
#include "NatSuite/Devices/zzzz__FrameOrientation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::NatSuite::Devices::FrameOrientation::FrameOrientation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::NatSuite::Devices::FrameOrientation::FrameOrientation()   {
}
constexpr ::NatSuite::Devices::FrameOrientation  NatSuite::Devices::FrameOrientation::LandscapeLeft{static_cast<int32_t>(0x0)};
constexpr ::NatSuite::Devices::FrameOrientation  NatSuite::Devices::FrameOrientation::Portrait{static_cast<int32_t>(0x1)};
constexpr ::NatSuite::Devices::FrameOrientation  NatSuite::Devices::FrameOrientation::LandscapeRight{static_cast<int32_t>(0x2)};
constexpr ::NatSuite::Devices::FrameOrientation  NatSuite::Devices::FrameOrientation::PortraitUpsideDown{static_cast<int32_t>(0x3)};
