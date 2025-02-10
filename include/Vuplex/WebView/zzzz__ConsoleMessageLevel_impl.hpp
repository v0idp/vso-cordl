#pragma once
// IWYU pragma private; include "Vuplex/WebView/ConsoleMessageLevel.hpp"
#include "Vuplex/WebView/zzzz__ConsoleMessageLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::ConsoleMessageLevel::ConsoleMessageLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::ConsoleMessageLevel::ConsoleMessageLevel()   {
}
constexpr ::Vuplex::WebView::ConsoleMessageLevel  Vuplex::WebView::ConsoleMessageLevel::Debug{static_cast<int32_t>(0x0)};
constexpr ::Vuplex::WebView::ConsoleMessageLevel  Vuplex::WebView::ConsoleMessageLevel::Error{static_cast<int32_t>(0x1)};
constexpr ::Vuplex::WebView::ConsoleMessageLevel  Vuplex::WebView::ConsoleMessageLevel::Log{static_cast<int32_t>(0x2)};
constexpr ::Vuplex::WebView::ConsoleMessageLevel  Vuplex::WebView::ConsoleMessageLevel::Warning{static_cast<int32_t>(0x3)};
