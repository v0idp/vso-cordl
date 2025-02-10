#pragma once
// IWYU pragma private; include "VROSC/HmdModel.hpp"
#include "VROSC/zzzz__HmdModel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::HmdModel::HmdModel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::HmdModel::HmdModel()   {
}
constexpr ::VROSC::HmdModel  VROSC::HmdModel::Unknown{static_cast<int32_t>(0x0)};
constexpr ::VROSC::HmdModel  VROSC::HmdModel::RiftLegacy{static_cast<int32_t>(0x1)};
constexpr ::VROSC::HmdModel  VROSC::HmdModel::RiftS{static_cast<int32_t>(0x2)};
constexpr ::VROSC::HmdModel  VROSC::HmdModel::QuestAndroid{static_cast<int32_t>(0x3)};
constexpr ::VROSC::HmdModel  VROSC::HmdModel::Quest2Android{static_cast<int32_t>(0x4)};
constexpr ::VROSC::HmdModel  VROSC::HmdModel::QuestLink{static_cast<int32_t>(0x5)};
constexpr ::VROSC::HmdModel  VROSC::HmdModel::Quest2Link{static_cast<int32_t>(0x6)};
constexpr ::VROSC::HmdModel  VROSC::HmdModel::QuestProAndroid{static_cast<int32_t>(0x7)};
constexpr ::VROSC::HmdModel  VROSC::HmdModel::QuestProLink{static_cast<int32_t>(0x8)};
constexpr ::VROSC::HmdModel  VROSC::HmdModel::Quest3Android{static_cast<int32_t>(0x9)};
constexpr ::VROSC::HmdModel  VROSC::HmdModel::Quest3Link{static_cast<int32_t>(0xa)};
