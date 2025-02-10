#pragma once
// IWYU pragma private; include "GlobalNamespace/SeasonType.hpp"
#include "GlobalNamespace/zzzz__SeasonType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SeasonType::SeasonType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SeasonType::SeasonType()   {
}
constexpr ::GlobalNamespace::SeasonType  GlobalNamespace::SeasonType::Default{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SeasonType  GlobalNamespace::SeasonType::Winter{static_cast<int32_t>(0x1)};
