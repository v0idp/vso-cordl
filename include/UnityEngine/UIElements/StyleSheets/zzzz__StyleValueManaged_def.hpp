#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StyleValueManaged.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(StyleValueManaged)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct StyleValueManaged;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::StyleValueManaged);
// Dependencies UnityEngine.UIElements.StyleKeyword, UnityEngine.UIElements.StyleSheets.StylePropertyId
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.StyleValueManaged
struct CORDL_TYPE StyleValueManaged {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr StyleValueManaged() ;

// Ctor Parameters [CppParam { name: "id", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: None }, CppParam { name: "keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::Object*", modifiers: "", def_value: None }]
constexpr StyleValueManaged(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, ::UnityEngine::UIElements::StyleKeyword  keyword, ::System::Object*  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4647};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field id, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id;

/// @brief Field keyword, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::UIElements::StyleKeyword  keyword;

/// @brief Field value, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StyleValueManaged, id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StyleValueManaged, keyword) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StyleValueManaged, value) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StyleValueManaged, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StyleValueManaged, "UnityEngine.UIElements.StyleSheets", "StyleValueManaged");
