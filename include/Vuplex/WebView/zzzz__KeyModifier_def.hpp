#pragma once
// IWYU pragma private; include "Vuplex/WebView/KeyModifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyModifier)
// Forward declare root types
namespace Vuplex::WebView {
struct KeyModifier;
}
// Write type traits
MARK_VAL_T(::Vuplex::WebView::KeyModifier);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.KeyModifier
struct CORDL_TYPE KeyModifier {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __KeyModifier_Unwrapped
enum struct __KeyModifier_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Shift = static_cast<int32_t>(0x1),
__E_Control = static_cast<int32_t>(0x2),
__E_Alt = static_cast<int32_t>(0x4),
__E_Meta = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KeyModifier_Unwrapped () const noexcept {
return static_cast<__KeyModifier_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr KeyModifier() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr KeyModifier(int32_t  value__) noexcept;

/// @brief Field Alt value: I32(4)
static ::Vuplex::WebView::KeyModifier const Alt;

/// @brief Field Control value: I32(2)
static ::Vuplex::WebView::KeyModifier const Control;

/// @brief Field Meta value: I32(8)
static ::Vuplex::WebView::KeyModifier const Meta;

/// @brief Field None value: I32(0)
static ::Vuplex::WebView::KeyModifier const None;

/// @brief Field Shift value: I32(1)
static ::Vuplex::WebView::KeyModifier const Shift;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{169};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::KeyModifier, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::KeyModifier, 0x4>, "Size mismatch!");

} // namespace end def Vuplex::WebView
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::KeyModifier, "Vuplex.WebView", "KeyModifier");
