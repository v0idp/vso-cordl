#pragma once
// IWYU pragma private; include "Vuplex/WebView/DragMode.hpp"
#include "Vuplex/WebView/zzzz__DragMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::DragMode::DragMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::DragMode::DragMode()   {
}
constexpr ::Vuplex::WebView::DragMode  Vuplex::WebView::DragMode::DragToScroll{static_cast<int32_t>(0x0)};
constexpr ::Vuplex::WebView::DragMode  Vuplex::WebView::DragMode::DragWithinPage{static_cast<int32_t>(0x1)};
constexpr ::Vuplex::WebView::DragMode  Vuplex::WebView::DragMode::Disabled{static_cast<int32_t>(0x2)};
