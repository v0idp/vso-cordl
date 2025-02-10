#pragma once
// IWYU pragma private; include "GlobalNamespace/TimeOfDayType.hpp"
#include "GlobalNamespace/zzzz__TimeOfDayType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TimeOfDayType::TimeOfDayType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimeOfDayType::TimeOfDayType()   {
}
constexpr ::GlobalNamespace::TimeOfDayType  GlobalNamespace::TimeOfDayType::Day{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TimeOfDayType  GlobalNamespace::TimeOfDayType::Sunset{static_cast<int32_t>(0x1)};
