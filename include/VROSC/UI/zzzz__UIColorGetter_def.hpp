#pragma once
// IWYU pragma private; include "VROSC/UI/UIColorGetter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(UIColorGetter)
namespace System {
class Action;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC::UI {
class UIExplicitColor;
}
namespace VROSC {
class Interactable;
}
// Forward declare root types
namespace VROSC::UI {
class UIColorGetter;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::UIColorGetter);
// Dependencies UnityEngine.ScriptableObject
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.UIColorGetter
class CORDL_TYPE UIColorGetter : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field OnColorChange, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnColorChange, put=__cordl_internal_set_OnColorChange)) ::System::Action*  OnColorChange;

/// @brief Field _color, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) ::VROSC::UI::UIExplicitColor*  _color;

/// @brief Method GetColor, addr 0x17e54b0, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor(bool  disabled, bool  hovering) ;

/// @brief Method GetColor, addr 0x17e53c8, size 0xe8, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor(::VROSC::Interactable*  interactable) ;

/// @brief Method GetDefaultColor, addr 0x17e4df8, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetDefaultColor(bool  disabled) ;

static inline ::VROSC::UI::UIColorGetter* New_ctor() ;

/// @brief Method SetColor, addr 0x17e5518, size 0x50, virtual false, abstract: false, final false
inline void SetColor(::VROSC::UI::UIExplicitColor*  color) ;

constexpr ::System::Action* const& __cordl_internal_get_OnColorChange() const;

constexpr ::System::Action*& __cordl_internal_get_OnColorChange() ;

constexpr ::VROSC::UI::UIExplicitColor* const& __cordl_internal_get__color() const;

constexpr ::VROSC::UI::UIExplicitColor*& __cordl_internal_get__color() ;

constexpr void __cordl_internal_set_OnColorChange(::System::Action*  value) ;

constexpr void __cordl_internal_set__color(::VROSC::UI::UIExplicitColor*  value) ;

/// @brief Method .ctor, addr 0x17e5594, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIColorGetter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIColorGetter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIColorGetter(UIColorGetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIColorGetter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIColorGetter(UIColorGetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1604};

/// @brief Field _color, offset: 0x18, size: 0x8, def value: None
 ::VROSC::UI::UIExplicitColor*  ____color;

/// @brief Field OnColorChange, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___OnColorChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::UIColorGetter, ____color) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIColorGetter, ___OnColorChange) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::UIColorGetter, 0x28>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::UIColorGetter);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UIColorGetter*, "VROSC.UI", "UIColorGetter");
