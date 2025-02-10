#pragma once
// IWYU pragma private; include "Vuplex/WebView/FocusedInputFieldType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FocusedInputFieldType)
// Forward declare root types
namespace Vuplex::WebView {
struct FocusedInputFieldType;
}
// Write type traits
MARK_VAL_T(::Vuplex::WebView::FocusedInputFieldType);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.FocusedInputFieldType
struct CORDL_TYPE FocusedInputFieldType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FocusedInputFieldType_Unwrapped
enum struct __FocusedInputFieldType_Unwrapped : int32_t {
__E_Text = static_cast<int32_t>(0x0),
__E_None = static_cast<int32_t>(0x1),
__E_IFrame = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FocusedInputFieldType_Unwrapped () const noexcept {
return static_cast<__FocusedInputFieldType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FocusedInputFieldType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FocusedInputFieldType(int32_t  value__) noexcept;

/// @brief Field IFrame value: I32(2)
static ::Vuplex::WebView::FocusedInputFieldType const IFrame;

/// @brief Field None value: I32(1)
static ::Vuplex::WebView::FocusedInputFieldType const None;

/// @brief Field Text value: I32(0)
static ::Vuplex::WebView::FocusedInputFieldType const Text;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{140};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::FocusedInputFieldType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::FocusedInputFieldType, 0x4>, "Size mismatch!");

} // namespace end def Vuplex::WebView
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::FocusedInputFieldType, "Vuplex.WebView", "FocusedInputFieldType");
