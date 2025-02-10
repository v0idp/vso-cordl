#pragma once
// IWYU pragma private; include "Vuplex/WebView/PopupMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PopupMode)
// Forward declare root types
namespace Vuplex::WebView {
struct PopupMode;
}
// Write type traits
MARK_VAL_T(::Vuplex::WebView::PopupMode);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.PopupMode
struct CORDL_TYPE PopupMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PopupMode_Unwrapped
enum struct __PopupMode_Unwrapped : int32_t {
__E_LoadInOriginalWebView = static_cast<int32_t>(0x0),
__E_LoadInNewWebView = static_cast<int32_t>(0x1),
__E_NotifyWithoutLoading = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PopupMode_Unwrapped () const noexcept {
return static_cast<__PopupMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PopupMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PopupMode(int32_t  value__) noexcept;

/// @brief Field LoadInNewWebView value: I32(1)
static ::Vuplex::WebView::PopupMode const LoadInNewWebView;

/// @brief Field LoadInOriginalWebView value: I32(0)
static ::Vuplex::WebView::PopupMode const LoadInOriginalWebView;

/// @brief Field NotifyWithoutLoading value: I32(2)
static ::Vuplex::WebView::PopupMode const NotifyWithoutLoading;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{179};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::PopupMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::PopupMode, 0x4>, "Size mismatch!");

} // namespace end def Vuplex::WebView
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::PopupMode, "Vuplex.WebView", "PopupMode");
