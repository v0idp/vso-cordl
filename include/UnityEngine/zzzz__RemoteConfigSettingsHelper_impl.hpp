#pragma once
// IWYU pragma private; include "UnityEngine/RemoteConfigSettingsHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__RemoteConfigSettingsHelper_def.hpp"
#include "UnityEngine/zzzz__RemoteConfigSettingsHelper_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RemoteConfigSettingsHelper_Tag::RemoteConfigSettingsHelper_Tag(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::RemoteConfigSettingsHelper_Tag::RemoteConfigSettingsHelper_Tag()   {
}
constexpr ::UnityEngine::RemoteConfigSettingsHelper_Tag  UnityEngine::RemoteConfigSettingsHelper_Tag::kUnknown{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::RemoteConfigSettingsHelper_Tag  UnityEngine::RemoteConfigSettingsHelper_Tag::kIntVal{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::RemoteConfigSettingsHelper_Tag  UnityEngine::RemoteConfigSettingsHelper_Tag::kInt64Val{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::RemoteConfigSettingsHelper_Tag  UnityEngine::RemoteConfigSettingsHelper_Tag::kUInt64Val{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::RemoteConfigSettingsHelper_Tag  UnityEngine::RemoteConfigSettingsHelper_Tag::kDoubleVal{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::RemoteConfigSettingsHelper_Tag  UnityEngine::RemoteConfigSettingsHelper_Tag::kBoolVal{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::RemoteConfigSettingsHelper_Tag  UnityEngine::RemoteConfigSettingsHelper_Tag::kStringVal{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::RemoteConfigSettingsHelper_Tag  UnityEngine::RemoteConfigSettingsHelper_Tag::kArrayVal{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::RemoteConfigSettingsHelper_Tag  UnityEngine::RemoteConfigSettingsHelper_Tag::kMixedArrayVal{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::RemoteConfigSettingsHelper_Tag  UnityEngine::RemoteConfigSettingsHelper_Tag::kMapVal{static_cast<int32_t>(0x9)};
constexpr ::UnityEngine::RemoteConfigSettingsHelper_Tag  UnityEngine::RemoteConfigSettingsHelper_Tag::kMaxTags{static_cast<int32_t>(0xa)};
// Ctor Parameters []
constexpr ::UnityEngine::RemoteConfigSettingsHelper::RemoteConfigSettingsHelper()   {
}
