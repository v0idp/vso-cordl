#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/Syntax/ExpressionCombinator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExpressionCombinator)
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionCombinator;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator);
// Dependencies 
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.Syntax.ExpressionCombinator
struct CORDL_TYPE ExpressionCombinator {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ExpressionCombinator_Unwrapped
enum struct __ExpressionCombinator_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Or = static_cast<int32_t>(0x1),
__E_OrOr = static_cast<int32_t>(0x2),
__E_AndAnd = static_cast<int32_t>(0x3),
__E_Juxtaposition = static_cast<int32_t>(0x4),
__E_Group = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExpressionCombinator_Unwrapped () const noexcept {
return static_cast<__ExpressionCombinator_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ExpressionCombinator() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ExpressionCombinator(int32_t  value__) noexcept;

/// @brief Field AndAnd value: I32(3)
static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator const AndAnd;

/// @brief Field Group value: I32(5)
static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator const Group;

/// @brief Field Juxtaposition value: I32(4)
static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator const Juxtaposition;

/// @brief Field None value: I32(0)
static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator const None;

/// @brief Field Or value: I32(1)
static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator const Or;

/// @brief Field OrOr value: I32(2)
static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator const OrOr;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4656};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets::Syntax
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator, "UnityEngine.UIElements.StyleSheets.Syntax", "ExpressionCombinator");
