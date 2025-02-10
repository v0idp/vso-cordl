#pragma once
// IWYU pragma private; include "BeautifyEffect/BEAUTIFY_TMO.hpp"
#include "BeautifyEffect/zzzz__BEAUTIFY_TMO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeautifyEffect::BEAUTIFY_TMO::BEAUTIFY_TMO(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeautifyEffect::BEAUTIFY_TMO::BEAUTIFY_TMO()   {
}
constexpr ::BeautifyEffect::BEAUTIFY_TMO  BeautifyEffect::BEAUTIFY_TMO::Linear{static_cast<int32_t>(0x0)};
constexpr ::BeautifyEffect::BEAUTIFY_TMO  BeautifyEffect::BEAUTIFY_TMO::ACES{static_cast<int32_t>(0xa)};
