#pragma once
// IWYU pragma private; include "Vuplex/WebView/TouchEventType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchEventType)
// Forward declare root types
namespace Vuplex::WebView {
struct TouchEventType;
}
// Write type traits
MARK_VAL_T(::Vuplex::WebView::TouchEventType);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.TouchEventType
struct CORDL_TYPE TouchEventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TouchEventType_Unwrapped
enum struct __TouchEventType_Unwrapped : int32_t {
__E_End = static_cast<int32_t>(0x0),
__E_Start = static_cast<int32_t>(0x1),
__E_Move = static_cast<int32_t>(0x2),
__E_Cancel = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchEventType_Unwrapped () const noexcept {
return static_cast<__TouchEventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TouchEventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchEventType(int32_t  value__) noexcept;

/// @brief Field Cancel value: I32(3)
static ::Vuplex::WebView::TouchEventType const Cancel;

/// @brief Field End value: I32(0)
static ::Vuplex::WebView::TouchEventType const End;

/// @brief Field Move value: I32(2)
static ::Vuplex::WebView::TouchEventType const Move;

/// @brief Field Start value: I32(1)
static ::Vuplex::WebView::TouchEventType const Start;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{189};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::TouchEventType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::TouchEventType, 0x4>, "Size mismatch!");

} // namespace end def Vuplex::WebView
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::TouchEventType, "Vuplex.WebView", "TouchEventType");
