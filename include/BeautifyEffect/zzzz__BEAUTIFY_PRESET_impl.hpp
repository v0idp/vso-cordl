#pragma once
// IWYU pragma private; include "BeautifyEffect/BEAUTIFY_PRESET.hpp"
#include "BeautifyEffect/zzzz__BEAUTIFY_PRESET_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeautifyEffect::BEAUTIFY_PRESET::BEAUTIFY_PRESET(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeautifyEffect::BEAUTIFY_PRESET::BEAUTIFY_PRESET()   {
}
constexpr ::BeautifyEffect::BEAUTIFY_PRESET  BeautifyEffect::BEAUTIFY_PRESET::Soft{static_cast<int32_t>(0xa)};
constexpr ::BeautifyEffect::BEAUTIFY_PRESET  BeautifyEffect::BEAUTIFY_PRESET::Medium{static_cast<int32_t>(0x14)};
constexpr ::BeautifyEffect::BEAUTIFY_PRESET  BeautifyEffect::BEAUTIFY_PRESET::Strong{static_cast<int32_t>(0x1e)};
constexpr ::BeautifyEffect::BEAUTIFY_PRESET  BeautifyEffect::BEAUTIFY_PRESET::Exaggerated{static_cast<int32_t>(0x28)};
constexpr ::BeautifyEffect::BEAUTIFY_PRESET  BeautifyEffect::BEAUTIFY_PRESET::Custom{static_cast<int32_t>(0x3e7)};
