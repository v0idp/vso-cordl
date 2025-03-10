#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/Syntax/ExpressionType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExpressionType)
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType);
// Dependencies 
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.Syntax.ExpressionType
struct CORDL_TYPE ExpressionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ExpressionType_Unwrapped
enum struct __ExpressionType_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Data = static_cast<int32_t>(0x1),
__E_Keyword = static_cast<int32_t>(0x2),
__E_Combinator = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExpressionType_Unwrapped () const noexcept {
return static_cast<__ExpressionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ExpressionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ExpressionType(int32_t  value__) noexcept;

/// @brief Field Combinator value: I32(3)
static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType const Combinator;

/// @brief Field Data value: I32(1)
static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType const Data;

/// @brief Field Keyword value: I32(2)
static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType const Keyword;

/// @brief Field Unknown value: I32(0)
static ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4654};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets::Syntax
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType, "UnityEngine.UIElements.StyleSheets.Syntax", "ExpressionType");
