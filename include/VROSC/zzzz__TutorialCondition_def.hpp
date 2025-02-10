#pragma once
// IWYU pragma private; include "VROSC/TutorialCondition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TutorialCondition)
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class TutorialStep_Condition;
}
// Forward declare root types
namespace VROSC {
class TutorialCondition;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TutorialCondition);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TutorialCondition
class CORDL_TYPE TutorialCondition : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _completeIcon, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__completeIcon, put=__cordl_internal_set__completeIcon)) ::UnityW<::UnityEngine::GameObject>  _completeIcon;

/// @brief Field _condition, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__condition, put=__cordl_internal_set__condition)) ::VROSC::TutorialStep_Condition*  _condition;

/// @brief Field _conditionText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__conditionText, put=__cordl_internal_set__conditionText)) ::UnityW<::TMPro::TextMeshPro>  _conditionText;

/// @brief Field _conditionTextCompleteColor, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__conditionTextCompleteColor, put=__cordl_internal_set__conditionTextCompleteColor)) ::UnityEngine::Color  _conditionTextCompleteColor;

/// @brief Field _conditionTextIncompleteColor, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__conditionTextIncompleteColor, put=__cordl_internal_set__conditionTextIncompleteColor)) ::UnityEngine::Color  _conditionTextIncompleteColor;

/// @brief Field _incompleteIcon, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__incompleteIcon, put=__cordl_internal_set__incompleteIcon)) ::UnityW<::UnityEngine::GameObject>  _incompleteIcon;

/// @brief Method ConditionCompleted, addr 0x170448c, size 0xd0, virtual false, abstract: false, final false
inline void ConditionCompleted() ;

/// @brief Method Deactivate, addr 0x1704284, size 0x58, virtual false, abstract: false, final false
inline void Deactivate() ;

/// @brief Method DisplayConditionText, addr 0x17042dc, size 0x1b0, virtual false, abstract: false, final false
inline void DisplayConditionText(bool  conditionComplete) ;

static inline ::VROSC::TutorialCondition* New_ctor() ;

/// @brief Method SetupTutorialStep, addr 0x17041b8, size 0xcc, virtual false, abstract: false, final false
inline void SetupTutorialStep(::VROSC::TutorialStep_Condition*  condition) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__completeIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__completeIcon() ;

constexpr ::VROSC::TutorialStep_Condition* const& __cordl_internal_get__condition() const;

constexpr ::VROSC::TutorialStep_Condition*& __cordl_internal_get__condition() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__conditionText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__conditionText() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__conditionTextCompleteColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__conditionTextCompleteColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__conditionTextIncompleteColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__conditionTextIncompleteColor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__incompleteIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__incompleteIcon() ;

constexpr void __cordl_internal_set__completeIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__condition(::VROSC::TutorialStep_Condition*  value) ;

constexpr void __cordl_internal_set__conditionText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__conditionTextCompleteColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__conditionTextIncompleteColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__incompleteIcon(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x170455c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TutorialCondition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TutorialCondition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialCondition(TutorialCondition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialCondition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialCondition(TutorialCondition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{849};

/// @brief Field _conditionText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____conditionText;

/// @brief Field _incompleteIcon, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____incompleteIcon;

/// @brief Field _completeIcon, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____completeIcon;

/// @brief Field _conditionTextIncompleteColor, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ____conditionTextIncompleteColor;

/// @brief Field _conditionTextCompleteColor, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  ____conditionTextCompleteColor;

/// @brief Field _condition, offset: 0x58, size: 0x8, def value: None
 ::VROSC::TutorialStep_Condition*  ____condition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TutorialCondition, ____conditionText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialCondition, ____incompleteIcon) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialCondition, ____completeIcon) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialCondition, ____conditionTextIncompleteColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialCondition, ____conditionTextCompleteColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialCondition, ____condition) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TutorialCondition, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TutorialCondition);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialCondition*, "VROSC", "TutorialCondition");
