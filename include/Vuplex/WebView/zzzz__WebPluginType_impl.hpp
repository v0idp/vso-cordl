#pragma once
// IWYU pragma private; include "Vuplex/WebView/WebPluginType.hpp"
#include "Vuplex/WebView/zzzz__WebPluginType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::WebPluginType::WebPluginType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::WebPluginType::WebPluginType()   {
}
constexpr ::Vuplex::WebView::WebPluginType  Vuplex::WebView::WebPluginType::Android{static_cast<int32_t>(0x0)};
constexpr ::Vuplex::WebView::WebPluginType  Vuplex::WebView::WebPluginType::AndroidGecko{static_cast<int32_t>(0x1)};
constexpr ::Vuplex::WebView::WebPluginType  Vuplex::WebView::WebPluginType::iOS{static_cast<int32_t>(0x2)};
constexpr ::Vuplex::WebView::WebPluginType  Vuplex::WebView::WebPluginType::Mac{static_cast<int32_t>(0x3)};
constexpr ::Vuplex::WebView::WebPluginType  Vuplex::WebView::WebPluginType::Mock{static_cast<int32_t>(0x4)};
constexpr ::Vuplex::WebView::WebPluginType  Vuplex::WebView::WebPluginType::WebGL{static_cast<int32_t>(0x5)};
constexpr ::Vuplex::WebView::WebPluginType  Vuplex::WebView::WebPluginType::Windows{static_cast<int32_t>(0x6)};
constexpr ::Vuplex::WebView::WebPluginType  Vuplex::WebView::WebPluginType::UniversalWindowsPlatform{static_cast<int32_t>(0x7)};
