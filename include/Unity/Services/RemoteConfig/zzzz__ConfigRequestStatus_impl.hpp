#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/ConfigRequestStatus.hpp"
#include "Unity/Services/RemoteConfig/zzzz__ConfigRequestStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::RemoteConfig::ConfigRequestStatus::ConfigRequestStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::RemoteConfig::ConfigRequestStatus::ConfigRequestStatus()   {
}
constexpr ::Unity::Services::RemoteConfig::ConfigRequestStatus  Unity::Services::RemoteConfig::ConfigRequestStatus::None{static_cast<int32_t>(0x0)};
constexpr ::Unity::Services::RemoteConfig::ConfigRequestStatus  Unity::Services::RemoteConfig::ConfigRequestStatus::Failed{static_cast<int32_t>(0x1)};
constexpr ::Unity::Services::RemoteConfig::ConfigRequestStatus  Unity::Services::RemoteConfig::ConfigRequestStatus::Success{static_cast<int32_t>(0x2)};
constexpr ::Unity::Services::RemoteConfig::ConfigRequestStatus  Unity::Services::RemoteConfig::ConfigRequestStatus::Pending{static_cast<int32_t>(0x3)};
