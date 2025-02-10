#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerHighlighter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LoopPlayerHighlighter)
namespace VROSC::UI {
class UIAdjustableMeshColoring;
}
namespace VROSC::UI {
class UIColorGetter;
}
// Forward declare root types
namespace VROSC {
class LoopPlayerHighlighter;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopPlayerHighlighter);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlayerHighlighter
class CORDL_TYPE LoopPlayerHighlighter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _highlightColor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__highlightColor, put=__cordl_internal_set__highlightColor)) ::UnityW<::VROSC::UI::UIColorGetter>  _highlightColor;

/// @brief Field _highlightingObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__highlightingObject, put=__cordl_internal_set__highlightingObject)) ::UnityW<::VROSC::UI::UIAdjustableMeshColoring>  _highlightingObject;

/// @brief Field _highlightingObjectDefaultGetter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__highlightingObjectDefaultGetter, put=__cordl_internal_set__highlightingObjectDefaultGetter)) ::UnityW<::VROSC::UI::UIColorGetter>  _highlightingObjectDefaultGetter;

/// @brief Method Awake, addr 0x18a18fc, size 0x20, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Highlight, addr 0x18a1924, size 0x34, virtual false, abstract: false, final false
inline void Highlight(bool  highlight) ;

static inline ::VROSC::LoopPlayerHighlighter* New_ctor() ;

/// @brief Method OnEnable, addr 0x18a191c, size 0x8, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& __cordl_internal_get__highlightColor() const;

constexpr ::UnityW<::VROSC::UI::UIColorGetter>& __cordl_internal_get__highlightColor() ;

constexpr ::UnityW<::VROSC::UI::UIAdjustableMeshColoring> const& __cordl_internal_get__highlightingObject() const;

constexpr ::UnityW<::VROSC::UI::UIAdjustableMeshColoring>& __cordl_internal_get__highlightingObject() ;

constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& __cordl_internal_get__highlightingObjectDefaultGetter() const;

constexpr ::UnityW<::VROSC::UI::UIColorGetter>& __cordl_internal_get__highlightingObjectDefaultGetter() ;

constexpr void __cordl_internal_set__highlightColor(::UnityW<::VROSC::UI::UIColorGetter>  value) ;

constexpr void __cordl_internal_set__highlightingObject(::UnityW<::VROSC::UI::UIAdjustableMeshColoring>  value) ;

constexpr void __cordl_internal_set__highlightingObjectDefaultGetter(::UnityW<::VROSC::UI::UIColorGetter>  value) ;

/// @brief Method .ctor, addr 0x18a1958, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlayerHighlighter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerHighlighter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlayerHighlighter(LoopPlayerHighlighter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerHighlighter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlayerHighlighter(LoopPlayerHighlighter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{673};

/// @brief Field _highlightColor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIColorGetter>  ____highlightColor;

/// @brief Field _highlightingObject, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIAdjustableMeshColoring>  ____highlightingObject;

/// @brief Field _highlightingObjectDefaultGetter, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIColorGetter>  ____highlightingObjectDefaultGetter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlayerHighlighter, ____highlightColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerHighlighter, ____highlightingObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerHighlighter, ____highlightingObjectDefaultGetter) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlayerHighlighter, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopPlayerHighlighter);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerHighlighter*, "VROSC", "LoopPlayerHighlighter");
