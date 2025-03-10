#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StylePropertyValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(StylePropertyValue)
namespace UnityEngine::UIElements {
class StyleSheet;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyValue;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::StylePropertyValue);
// Dependencies UnityEngine.UIElements.StyleValueHandle
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.StylePropertyValue
struct CORDL_TYPE StylePropertyValue {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr StylePropertyValue() ;

// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "", def_value: None }, CppParam { name: "handle", ty: "::UnityEngine::UIElements::StyleValueHandle", modifiers: "", def_value: None }]
constexpr StylePropertyValue(::UnityW<::UnityEngine::UIElements::StyleSheet>  sheet, ::UnityEngine::UIElements::StyleValueHandle  handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4634};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field sheet, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::StyleSheet>  sheet;

/// @brief Field handle, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::UIElements::StyleValueHandle  handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyValue, sheet) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StylePropertyValue, handle) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StylePropertyValue, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StylePropertyValue, "UnityEngine.UIElements.StyleSheets", "StylePropertyValue");
