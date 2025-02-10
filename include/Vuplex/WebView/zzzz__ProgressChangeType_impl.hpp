#pragma once
// IWYU pragma private; include "Vuplex/WebView/ProgressChangeType.hpp"
#include "Vuplex/WebView/zzzz__ProgressChangeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::ProgressChangeType::ProgressChangeType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::ProgressChangeType::ProgressChangeType()   {
}
constexpr ::Vuplex::WebView::ProgressChangeType  Vuplex::WebView::ProgressChangeType::Started{static_cast<int32_t>(0x0)};
constexpr ::Vuplex::WebView::ProgressChangeType  Vuplex::WebView::ProgressChangeType::Finished{static_cast<int32_t>(0x1)};
constexpr ::Vuplex::WebView::ProgressChangeType  Vuplex::WebView::ProgressChangeType::Failed{static_cast<int32_t>(0x2)};
constexpr ::Vuplex::WebView::ProgressChangeType  Vuplex::WebView::ProgressChangeType::Updated{static_cast<int32_t>(0x3)};
