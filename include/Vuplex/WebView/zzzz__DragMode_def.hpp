#pragma once
// IWYU pragma private; include "Vuplex/WebView/DragMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DragMode)
// Forward declare root types
namespace Vuplex::WebView {
struct DragMode;
}
// Write type traits
MARK_VAL_T(::Vuplex::WebView::DragMode);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.DragMode
struct CORDL_TYPE DragMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DragMode_Unwrapped
enum struct __DragMode_Unwrapped : int32_t {
__E_DragToScroll = static_cast<int32_t>(0x0),
__E_DragWithinPage = static_cast<int32_t>(0x1),
__E_Disabled = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DragMode_Unwrapped () const noexcept {
return static_cast<__DragMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DragMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DragMode(int32_t  value__) noexcept;

/// @brief Field Disabled value: I32(2)
static ::Vuplex::WebView::DragMode const Disabled;

/// @brief Field DragToScroll value: I32(0)
static ::Vuplex::WebView::DragMode const DragToScroll;

/// @brief Field DragWithinPage value: I32(1)
static ::Vuplex::WebView::DragMode const DragWithinPage;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{136};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::DragMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::DragMode, 0x4>, "Size mismatch!");

} // namespace end def Vuplex::WebView
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::DragMode, "Vuplex.WebView", "DragMode");
