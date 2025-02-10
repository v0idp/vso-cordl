#pragma once
// IWYU pragma private; include "Vuplex/WebView/StandalonePdfMarginType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StandalonePdfMarginType)
// Forward declare root types
namespace Vuplex::WebView {
struct StandalonePdfMarginType;
}
// Write type traits
MARK_VAL_T(::Vuplex::WebView::StandalonePdfMarginType);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.StandalonePdfMarginType
struct CORDL_TYPE StandalonePdfMarginType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StandalonePdfMarginType_Unwrapped
enum struct __StandalonePdfMarginType_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_None = static_cast<int32_t>(0x1),
__E_Custom = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StandalonePdfMarginType_Unwrapped () const noexcept {
return static_cast<__StandalonePdfMarginType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StandalonePdfMarginType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StandalonePdfMarginType(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(2)
static ::Vuplex::WebView::StandalonePdfMarginType const Custom;

/// @brief Field Default value: I32(0)
static ::Vuplex::WebView::StandalonePdfMarginType const Default;

/// @brief Field None value: I32(1)
static ::Vuplex::WebView::StandalonePdfMarginType const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{207};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::StandalonePdfMarginType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::StandalonePdfMarginType, 0x4>, "Size mismatch!");

} // namespace end def Vuplex::WebView
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::StandalonePdfMarginType, "Vuplex.WebView", "StandalonePdfMarginType");
