#pragma once
// IWYU pragma private; include "Vuplex/WebView/StandalonePdfMarginType.hpp"
#include "Vuplex/WebView/zzzz__StandalonePdfMarginType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::StandalonePdfMarginType::StandalonePdfMarginType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::StandalonePdfMarginType::StandalonePdfMarginType()   {
}
constexpr ::Vuplex::WebView::StandalonePdfMarginType  Vuplex::WebView::StandalonePdfMarginType::Default{static_cast<int32_t>(0x0)};
constexpr ::Vuplex::WebView::StandalonePdfMarginType  Vuplex::WebView::StandalonePdfMarginType::None{static_cast<int32_t>(0x1)};
constexpr ::Vuplex::WebView::StandalonePdfMarginType  Vuplex::WebView::StandalonePdfMarginType::Custom{static_cast<int32_t>(0x2)};
