#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/ConfigOrigin.hpp"
#include "Unity/Services/RemoteConfig/zzzz__ConfigOrigin_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::RemoteConfig::ConfigOrigin::ConfigOrigin(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::RemoteConfig::ConfigOrigin::ConfigOrigin()   {
}
constexpr ::Unity::Services::RemoteConfig::ConfigOrigin  Unity::Services::RemoteConfig::ConfigOrigin::Default{static_cast<int32_t>(0x0)};
constexpr ::Unity::Services::RemoteConfig::ConfigOrigin  Unity::Services::RemoteConfig::ConfigOrigin::Cached{static_cast<int32_t>(0x1)};
constexpr ::Unity::Services::RemoteConfig::ConfigOrigin  Unity::Services::RemoteConfig::ConfigOrigin::Remote{static_cast<int32_t>(0x2)};
