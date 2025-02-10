#pragma once
// IWYU pragma private; include "Vuplex/WebView/ChromiumLogLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChromiumLogLevel)
// Forward declare root types
namespace Vuplex::WebView {
struct ChromiumLogLevel;
}
// Write type traits
MARK_VAL_T(::Vuplex::WebView::ChromiumLogLevel);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.ChromiumLogLevel
struct CORDL_TYPE ChromiumLogLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ChromiumLogLevel_Unwrapped
enum struct __ChromiumLogLevel_Unwrapped : int32_t {
__E_Verbose = static_cast<int32_t>(0x0),
__E_Info = static_cast<int32_t>(0x1),
__E_Warning = static_cast<int32_t>(0x2),
__E_Error = static_cast<int32_t>(0x3),
__E_Fatal = static_cast<int32_t>(0x4),
__E_Disabled = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ChromiumLogLevel_Unwrapped () const noexcept {
return static_cast<__ChromiumLogLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ChromiumLogLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ChromiumLogLevel(int32_t  value__) noexcept;

/// @brief Field Disabled value: I32(5)
static ::Vuplex::WebView::ChromiumLogLevel const Disabled;

/// @brief Field Error value: I32(3)
static ::Vuplex::WebView::ChromiumLogLevel const Error;

/// @brief Field Fatal value: I32(4)
static ::Vuplex::WebView::ChromiumLogLevel const Fatal;

/// @brief Field Info value: I32(1)
static ::Vuplex::WebView::ChromiumLogLevel const Info;

/// @brief Field Verbose value: I32(0)
static ::Vuplex::WebView::ChromiumLogLevel const Verbose;

/// @brief Field Warning value: I32(2)
static ::Vuplex::WebView::ChromiumLogLevel const Warning;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{206};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::ChromiumLogLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::ChromiumLogLevel, 0x4>, "Size mismatch!");

} // namespace end def Vuplex::WebView
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::ChromiumLogLevel, "Vuplex.WebView", "ChromiumLogLevel");
