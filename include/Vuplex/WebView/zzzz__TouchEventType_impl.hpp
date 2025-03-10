#pragma once
// IWYU pragma private; include "Vuplex/WebView/TouchEventType.hpp"
#include "Vuplex/WebView/zzzz__TouchEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::TouchEventType::TouchEventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::TouchEventType::TouchEventType()   {
}
constexpr ::Vuplex::WebView::TouchEventType  Vuplex::WebView::TouchEventType::End{static_cast<int32_t>(0x0)};
constexpr ::Vuplex::WebView::TouchEventType  Vuplex::WebView::TouchEventType::Start{static_cast<int32_t>(0x1)};
constexpr ::Vuplex::WebView::TouchEventType  Vuplex::WebView::TouchEventType::Move{static_cast<int32_t>(0x2)};
constexpr ::Vuplex::WebView::TouchEventType  Vuplex::WebView::TouchEventType::Cancel{static_cast<int32_t>(0x3)};
