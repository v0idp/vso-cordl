#pragma once
// IWYU pragma private; include "Vuplex/WebView/MixedContentMode.hpp"
#include "Vuplex/WebView/zzzz__MixedContentMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::MixedContentMode::MixedContentMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::MixedContentMode::MixedContentMode()   {
}
constexpr ::Vuplex::WebView::MixedContentMode  Vuplex::WebView::MixedContentMode::AlwaysAllow{static_cast<int32_t>(0x0)};
constexpr ::Vuplex::WebView::MixedContentMode  Vuplex::WebView::MixedContentMode::NeverAllow{static_cast<int32_t>(0x1)};
constexpr ::Vuplex::WebView::MixedContentMode  Vuplex::WebView::MixedContentMode::CompatibilityMode{static_cast<int32_t>(0x2)};
