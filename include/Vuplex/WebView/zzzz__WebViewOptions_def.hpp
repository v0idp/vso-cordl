#pragma once
// IWYU pragma private; include "Vuplex/WebView/WebViewOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(WebViewOptions)
namespace Vuplex::WebView {
struct WebPluginType;
}
// Forward declare root types
namespace Vuplex::WebView {
struct WebViewOptions;
}
// Write type traits
MARK_VAL_T(::Vuplex::WebView::WebViewOptions);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.WebViewOptions
struct CORDL_TYPE WebViewOptions {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr WebViewOptions() ;

// Ctor Parameters [CppParam { name: "clickWithoutStealingFocus", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "disableVideo", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "preferredPlugins", ty: "::ArrayW<::Vuplex::WebView::WebPluginType,::Array<::Vuplex::WebView::WebPluginType>*>", modifiers: "", def_value: None }]
constexpr WebViewOptions(bool  clickWithoutStealingFocus, bool  disableVideo, ::ArrayW<::Vuplex::WebView::WebPluginType,::Array<::Vuplex::WebView::WebPluginType>*>  preferredPlugins) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{202};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field clickWithoutStealingFocus, offset: 0x0, size: 0x1, def value: None
 bool  clickWithoutStealingFocus;

/// @brief Field disableVideo, offset: 0x1, size: 0x1, def value: None
 bool  disableVideo;

/// @brief Field preferredPlugins, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::Vuplex::WebView::WebPluginType,::Array<::Vuplex::WebView::WebPluginType>*>  preferredPlugins;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::WebViewOptions, clickWithoutStealingFocus) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::WebViewOptions, disableVideo) == 0x1, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::WebViewOptions, preferredPlugins) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::WebViewOptions, 0x10>, "Size mismatch!");

} // namespace end def Vuplex::WebView
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::WebViewOptions, "Vuplex.WebView", "WebViewOptions");
