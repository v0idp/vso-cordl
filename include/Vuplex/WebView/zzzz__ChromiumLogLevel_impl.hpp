#pragma once
// IWYU pragma private; include "Vuplex/WebView/ChromiumLogLevel.hpp"
#include "Vuplex/WebView/zzzz__ChromiumLogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::ChromiumLogLevel::ChromiumLogLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::ChromiumLogLevel::ChromiumLogLevel()   {
}
constexpr ::Vuplex::WebView::ChromiumLogLevel  Vuplex::WebView::ChromiumLogLevel::Verbose{static_cast<int32_t>(0x0)};
constexpr ::Vuplex::WebView::ChromiumLogLevel  Vuplex::WebView::ChromiumLogLevel::Info{static_cast<int32_t>(0x1)};
constexpr ::Vuplex::WebView::ChromiumLogLevel  Vuplex::WebView::ChromiumLogLevel::Warning{static_cast<int32_t>(0x2)};
constexpr ::Vuplex::WebView::ChromiumLogLevel  Vuplex::WebView::ChromiumLogLevel::Error{static_cast<int32_t>(0x3)};
constexpr ::Vuplex::WebView::ChromiumLogLevel  Vuplex::WebView::ChromiumLogLevel::Fatal{static_cast<int32_t>(0x4)};
constexpr ::Vuplex::WebView::ChromiumLogLevel  Vuplex::WebView::ChromiumLogLevel::Disabled{static_cast<int32_t>(0x5)};
