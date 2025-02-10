#pragma once
// IWYU pragma private; include "Vuplex/WebView/MouseButton.hpp"
#include "Vuplex/WebView/zzzz__MouseButton_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::MouseButton::MouseButton(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::MouseButton::MouseButton()   {
}
constexpr ::Vuplex::WebView::MouseButton  Vuplex::WebView::MouseButton::Left{static_cast<int32_t>(0x0)};
constexpr ::Vuplex::WebView::MouseButton  Vuplex::WebView::MouseButton::Right{static_cast<int32_t>(0x1)};
constexpr ::Vuplex::WebView::MouseButton  Vuplex::WebView::MouseButton::Middle{static_cast<int32_t>(0x2)};
