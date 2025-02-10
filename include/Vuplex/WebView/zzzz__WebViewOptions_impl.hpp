#pragma once
// IWYU pragma private; include "Vuplex/WebView/WebViewOptions.hpp"
#include "Vuplex/WebView/zzzz__WebViewOptions_def.hpp"
#include "Vuplex/WebView/zzzz__WebPluginType_def.hpp"
// Ctor Parameters [CppParam { name: "clickWithoutStealingFocus", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "disableVideo", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "preferredPlugins", ty: "::ArrayW<::Vuplex::WebView::WebPluginType,::Array<::Vuplex::WebView::WebPluginType>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::WebViewOptions::WebViewOptions(bool  clickWithoutStealingFocus, bool  disableVideo, ::ArrayW<::Vuplex::WebView::WebPluginType,::Array<::Vuplex::WebView::WebPluginType>*>  preferredPlugins) noexcept  {
this->clickWithoutStealingFocus = clickWithoutStealingFocus;
this->disableVideo = disableVideo;
this->preferredPlugins = preferredPlugins;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::WebViewOptions::WebViewOptions()   {
}
