#pragma once
// IWYU pragma private; include "VROSC/TutorialBlinkingUIElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TutorialBlinkingUIElement)
namespace UnityEngine {
struct Color;
}
namespace VROSC::UI {
class UIInteractableColoring;
}
namespace VROSC {
class TutorialVisualBlinking;
}
// Forward declare root types
namespace VROSC {
class TutorialBlinkingUIElement;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TutorialBlinkingUIElement);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TutorialBlinkingUIElement
class CORDL_TYPE TutorialBlinkingUIElement : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Blinking)) ::VROSC::TutorialVisualBlinking*  Blinking;

/// @brief Field <Blinking>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Blinking_k__BackingField, put=__cordl_internal_set__Blinking_k__BackingField)) ::VROSC::TutorialVisualBlinking*  _Blinking_k__BackingField;

/// @brief Field _isSetup, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__isSetup, put=__cordl_internal_set__isSetup)) bool  _isSetup;

/// @brief Field _target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::VROSC::UI::UIInteractableColoring>  _target;

/// @brief Method GetCurrentColor, addr 0x16fec80, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetCurrentColor() ;

/// @brief Method GetNormalColor, addr 0x16fec64, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetNormalColor() ;

static inline ::VROSC::TutorialBlinkingUIElement* New_ctor() ;

/// @brief Method OnEnable, addr 0x16feca0, size 0x20, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Setup, addr 0x16feb9c, size 0xc0, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method Start, addr 0x16feb8c, size 0x10, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TestOff, addr 0x16fed6c, size 0x1c, virtual false, abstract: false, final false
inline void TestOff() ;

/// @brief Method TestOn, addr 0x16fed20, size 0x34, virtual false, abstract: false, final false
inline void TestOn() ;

/// @brief Method Update, addr 0x16fecc0, size 0x44, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::VROSC::TutorialVisualBlinking* const& __cordl_internal_get__Blinking_k__BackingField() const;

constexpr ::VROSC::TutorialVisualBlinking*& __cordl_internal_get__Blinking_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isSetup() const;

constexpr bool& __cordl_internal_get__isSetup() ;

constexpr ::UnityW<::VROSC::UI::UIInteractableColoring> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::VROSC::UI::UIInteractableColoring>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__Blinking_k__BackingField(::VROSC::TutorialVisualBlinking*  value) ;

constexpr void __cordl_internal_set__isSetup(bool  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::VROSC::UI::UIInteractableColoring>  value) ;

/// @brief Method .ctor, addr 0x16fedec, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Blinking, addr 0x16feb84, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::TutorialVisualBlinking* get_Blinking() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TutorialBlinkingUIElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TutorialBlinkingUIElement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialBlinkingUIElement(TutorialBlinkingUIElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialBlinkingUIElement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialBlinkingUIElement(TutorialBlinkingUIElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{840};

/// @brief Field _target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIInteractableColoring>  ____target;

/// @brief Field _isSetup, offset: 0x28, size: 0x1, def value: None
 bool  ____isSetup;

/// @brief Field <Blinking>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::VROSC::TutorialVisualBlinking*  ____Blinking_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TutorialBlinkingUIElement, ____target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialBlinkingUIElement, ____isSetup) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialBlinkingUIElement, ____Blinking_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TutorialBlinkingUIElement, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TutorialBlinkingUIElement);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialBlinkingUIElement*, "VROSC", "TutorialBlinkingUIElement");
