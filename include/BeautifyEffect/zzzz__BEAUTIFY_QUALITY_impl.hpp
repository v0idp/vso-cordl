#pragma once
// IWYU pragma private; include "BeautifyEffect/BEAUTIFY_QUALITY.hpp"
#include "BeautifyEffect/zzzz__BEAUTIFY_QUALITY_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeautifyEffect::BEAUTIFY_QUALITY::BEAUTIFY_QUALITY(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeautifyEffect::BEAUTIFY_QUALITY::BEAUTIFY_QUALITY()   {
}
constexpr ::BeautifyEffect::BEAUTIFY_QUALITY  BeautifyEffect::BEAUTIFY_QUALITY::BestQuality{static_cast<int32_t>(0x0)};
constexpr ::BeautifyEffect::BEAUTIFY_QUALITY  BeautifyEffect::BEAUTIFY_QUALITY::BestPerformance{static_cast<int32_t>(0x1)};
constexpr ::BeautifyEffect::BEAUTIFY_QUALITY  BeautifyEffect::BEAUTIFY_QUALITY::Basic{static_cast<int32_t>(0x2)};
