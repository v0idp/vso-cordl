#pragma once
// IWYU pragma private; include "Vuplex/WebView/PopupMode.hpp"
#include "Vuplex/WebView/zzzz__PopupMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::PopupMode::PopupMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::PopupMode::PopupMode()   {
}
constexpr ::Vuplex::WebView::PopupMode  Vuplex::WebView::PopupMode::LoadInOriginalWebView{static_cast<int32_t>(0x0)};
constexpr ::Vuplex::WebView::PopupMode  Vuplex::WebView::PopupMode::LoadInNewWebView{static_cast<int32_t>(0x1)};
constexpr ::Vuplex::WebView::PopupMode  Vuplex::WebView::PopupMode::NotifyWithoutLoading{static_cast<int32_t>(0x2)};
