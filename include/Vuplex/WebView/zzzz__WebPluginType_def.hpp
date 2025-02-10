#pragma once
// IWYU pragma private; include "Vuplex/WebView/WebPluginType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebPluginType)
// Forward declare root types
namespace Vuplex::WebView {
struct WebPluginType;
}
// Write type traits
MARK_VAL_T(::Vuplex::WebView::WebPluginType);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.WebPluginType
struct CORDL_TYPE WebPluginType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WebPluginType_Unwrapped
enum struct __WebPluginType_Unwrapped : int32_t {
__E_Android = static_cast<int32_t>(0x0),
__E_AndroidGecko = static_cast<int32_t>(0x1),
__E_iOS = static_cast<int32_t>(0x2),
__E_Mac = static_cast<int32_t>(0x3),
__E_Mock = static_cast<int32_t>(0x4),
__E_WebGL = static_cast<int32_t>(0x5),
__E_Windows = static_cast<int32_t>(0x6),
__E_UniversalWindowsPlatform = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WebPluginType_Unwrapped () const noexcept {
return static_cast<__WebPluginType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WebPluginType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WebPluginType(int32_t  value__) noexcept;

/// @brief Field Android value: I32(0)
static ::Vuplex::WebView::WebPluginType const Android;

/// @brief Field AndroidGecko value: I32(1)
static ::Vuplex::WebView::WebPluginType const AndroidGecko;

/// @brief Field Mac value: I32(3)
static ::Vuplex::WebView::WebPluginType const Mac;

/// @brief Field Mock value: I32(4)
static ::Vuplex::WebView::WebPluginType const Mock;

/// @brief Field UniversalWindowsPlatform value: I32(7)
static ::Vuplex::WebView::WebPluginType const UniversalWindowsPlatform;

/// @brief Field WebGL value: I32(5)
static ::Vuplex::WebView::WebPluginType const WebGL;

/// @brief Field Windows value: I32(6)
static ::Vuplex::WebView::WebPluginType const Windows;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{201};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field iOS value: I32(2)
static ::Vuplex::WebView::WebPluginType const iOS;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::WebPluginType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::WebPluginType, 0x4>, "Size mismatch!");

} // namespace end def Vuplex::WebView
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::WebPluginType, "Vuplex.WebView", "WebPluginType");
