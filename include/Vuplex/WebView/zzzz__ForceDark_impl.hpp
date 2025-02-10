#pragma once
// IWYU pragma private; include "Vuplex/WebView/ForceDark.hpp"
#include "Vuplex/WebView/zzzz__ForceDark_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::ForceDark::ForceDark(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::ForceDark::ForceDark()   {
}
constexpr ::Vuplex::WebView::ForceDark  Vuplex::WebView::ForceDark::Off{static_cast<int32_t>(0x0)};
constexpr ::Vuplex::WebView::ForceDark  Vuplex::WebView::ForceDark::Auto{static_cast<int32_t>(0x1)};
constexpr ::Vuplex::WebView::ForceDark  Vuplex::WebView::ForceDark::On{static_cast<int32_t>(0x2)};
