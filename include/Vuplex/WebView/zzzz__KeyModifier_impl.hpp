#pragma once
// IWYU pragma private; include "Vuplex/WebView/KeyModifier.hpp"
#include "Vuplex/WebView/zzzz__KeyModifier_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::KeyModifier::KeyModifier(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::KeyModifier::KeyModifier()   {
}
constexpr ::Vuplex::WebView::KeyModifier  Vuplex::WebView::KeyModifier::None{static_cast<int32_t>(0x0)};
constexpr ::Vuplex::WebView::KeyModifier  Vuplex::WebView::KeyModifier::Shift{static_cast<int32_t>(0x1)};
constexpr ::Vuplex::WebView::KeyModifier  Vuplex::WebView::KeyModifier::Control{static_cast<int32_t>(0x2)};
constexpr ::Vuplex::WebView::KeyModifier  Vuplex::WebView::KeyModifier::Alt{static_cast<int32_t>(0x4)};
constexpr ::Vuplex::WebView::KeyModifier  Vuplex::WebView::KeyModifier::Meta{static_cast<int32_t>(0x8)};
