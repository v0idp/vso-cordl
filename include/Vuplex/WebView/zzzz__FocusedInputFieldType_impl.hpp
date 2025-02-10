#pragma once
// IWYU pragma private; include "Vuplex/WebView/FocusedInputFieldType.hpp"
#include "Vuplex/WebView/zzzz__FocusedInputFieldType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::FocusedInputFieldType::FocusedInputFieldType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::FocusedInputFieldType::FocusedInputFieldType()   {
}
constexpr ::Vuplex::WebView::FocusedInputFieldType  Vuplex::WebView::FocusedInputFieldType::Text{static_cast<int32_t>(0x0)};
constexpr ::Vuplex::WebView::FocusedInputFieldType  Vuplex::WebView::FocusedInputFieldType::None{static_cast<int32_t>(0x1)};
constexpr ::Vuplex::WebView::FocusedInputFieldType  Vuplex::WebView::FocusedInputFieldType::IFrame{static_cast<int32_t>(0x2)};
