#pragma once
// IWYU pragma private; include "Vuplex/WebView/TerminationType.hpp"
#include "Vuplex/WebView/zzzz__TerminationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::TerminationType::TerminationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::TerminationType::TerminationType()   {
}
constexpr ::Vuplex::WebView::TerminationType  Vuplex::WebView::TerminationType::Crashed{static_cast<int32_t>(0x0)};
constexpr ::Vuplex::WebView::TerminationType  Vuplex::WebView::TerminationType::Killed{static_cast<int32_t>(0x1)};
constexpr ::Vuplex::WebView::TerminationType  Vuplex::WebView::TerminationType::Unknown{static_cast<int32_t>(0x2)};
