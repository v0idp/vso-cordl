#pragma once
// IWYU pragma private; include "Vuplex/WebView/TerminationType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerminationType)
// Forward declare root types
namespace Vuplex::WebView {
struct TerminationType;
}
// Write type traits
MARK_VAL_T(::Vuplex::WebView::TerminationType);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.TerminationType
struct CORDL_TYPE TerminationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TerminationType_Unwrapped
enum struct __TerminationType_Unwrapped : int32_t {
__E_Crashed = static_cast<int32_t>(0x0),
__E_Killed = static_cast<int32_t>(0x1),
__E_Unknown = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TerminationType_Unwrapped () const noexcept {
return static_cast<__TerminationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TerminationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TerminationType(int32_t  value__) noexcept;

/// @brief Field Crashed value: I32(0)
static ::Vuplex::WebView::TerminationType const Crashed;

/// @brief Field Killed value: I32(1)
static ::Vuplex::WebView::TerminationType const Killed;

/// @brief Field Unknown value: I32(2)
static ::Vuplex::WebView::TerminationType const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{187};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::TerminationType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::TerminationType, 0x4>, "Size mismatch!");

} // namespace end def Vuplex::WebView
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::TerminationType, "Vuplex.WebView", "TerminationType");
