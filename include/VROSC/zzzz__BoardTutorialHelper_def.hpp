#pragma once
// IWYU pragma private; include "VROSC/BoardTutorialHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BoardTutorialHelper)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class Grabable;
}
namespace VROSC {
class Interactable;
}
namespace VROSC {
class NoteBoardNoteController;
}
namespace VROSC {
class SynthController;
}
namespace VROSC {
class TutorialBlinkingUIElement;
}
namespace VROSC {
struct TutorialEvent;
}
// Forward declare root types
namespace VROSC {
class BoardTutorialHelper;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::BoardTutorialHelper);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.BoardTutorialHelper
class CORDL_TYPE BoardTutorialHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _boardController, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__boardController, put=__cordl_internal_set__boardController)) ::UnityW<::VROSC::SynthController>  _boardController;

/// @brief Field _boardGrabable, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__boardGrabable, put=__cordl_internal_set__boardGrabable)) ::UnityW<::VROSC::Grabable>  _boardGrabable;

/// @brief Field _closeButtonBlink, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeButtonBlink, put=__cordl_internal_set__closeButtonBlink)) ::UnityW<::VROSC::TutorialBlinkingUIElement>  _closeButtonBlink;

/// @brief Field _closeButtonInteractable, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeButtonInteractable, put=__cordl_internal_set__closeButtonInteractable)) ::UnityW<::VROSC::Interactable>  _closeButtonInteractable;

/// @brief Field _disabledInteractables, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__disabledInteractables, put=__cordl_internal_set__disabledInteractables)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>*  _disabledInteractables;

/// @brief Field _interactablesParent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactablesParent, put=__cordl_internal_set__interactablesParent)) ::UnityW<::UnityEngine::GameObject>  _interactablesParent;

/// @brief Field _noteController, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteController, put=__cordl_internal_set__noteController)) ::UnityW<::VROSC::NoteBoardNoteController>  _noteController;

/// @brief Field _soundButtonBlinkers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__soundButtonBlinkers, put=__cordl_internal_set__soundButtonBlinkers)) ::ArrayW<::UnityW<::VROSC::TutorialBlinkingUIElement>,::Array<::UnityW<::VROSC::TutorialBlinkingUIElement>>*>  _soundButtonBlinkers;

/// @brief Field _soundButtonInteractables, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__soundButtonInteractables, put=__cordl_internal_set__soundButtonInteractables)) ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  _soundButtonInteractables;

/// @brief Field _tempoSyncInteractables, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__tempoSyncInteractables, put=__cordl_internal_set__tempoSyncInteractables)) ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  _tempoSyncInteractables;

/// @brief Method BoardGrabbed, addr 0x16ffe94, size 0x13c, virtual false, abstract: false, final false
inline void BoardGrabbed(bool  grabbed) ;

/// @brief Method BoardToggledAfterCloseEnabled, addr 0x16ffd4c, size 0x148, virtual false, abstract: false, final false
inline void BoardToggledAfterCloseEnabled(bool  active) ;

/// @brief Method DisableAllInteractables, addr 0x16ffa30, size 0x19c, virtual false, abstract: false, final false
inline void DisableAllInteractables() ;

static inline ::VROSC::BoardTutorialHelper* New_ctor() ;

/// @brief Method ResetAll, addr 0x16ff804, size 0x22c, virtual false, abstract: false, final false
inline void ResetAll() ;

/// @brief Method SoundButtonsUsed, addr 0x16ffbcc, size 0x180, virtual false, abstract: false, final false
inline void SoundButtonsUsed(bool  used) ;

/// @brief Method Start, addr 0x16ff22c, size 0xf4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TutorialEventTriggered, addr 0x16ff320, size 0x4e4, virtual false, abstract: false, final false
inline void TutorialEventTriggered(::VROSC::TutorialEvent  tutorialEvent) ;

constexpr ::UnityW<::VROSC::SynthController> const& __cordl_internal_get__boardController() const;

constexpr ::UnityW<::VROSC::SynthController>& __cordl_internal_get__boardController() ;

constexpr ::UnityW<::VROSC::Grabable> const& __cordl_internal_get__boardGrabable() const;

constexpr ::UnityW<::VROSC::Grabable>& __cordl_internal_get__boardGrabable() ;

constexpr ::UnityW<::VROSC::TutorialBlinkingUIElement> const& __cordl_internal_get__closeButtonBlink() const;

constexpr ::UnityW<::VROSC::TutorialBlinkingUIElement>& __cordl_internal_get__closeButtonBlink() ;

constexpr ::UnityW<::VROSC::Interactable> const& __cordl_internal_get__closeButtonInteractable() const;

constexpr ::UnityW<::VROSC::Interactable>& __cordl_internal_get__closeButtonInteractable() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>* const& __cordl_internal_get__disabledInteractables() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>*& __cordl_internal_get__disabledInteractables() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__interactablesParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__interactablesParent() ;

constexpr ::UnityW<::VROSC::NoteBoardNoteController> const& __cordl_internal_get__noteController() const;

constexpr ::UnityW<::VROSC::NoteBoardNoteController>& __cordl_internal_get__noteController() ;

constexpr ::ArrayW<::UnityW<::VROSC::TutorialBlinkingUIElement>,::Array<::UnityW<::VROSC::TutorialBlinkingUIElement>>*> const& __cordl_internal_get__soundButtonBlinkers() const;

constexpr ::ArrayW<::UnityW<::VROSC::TutorialBlinkingUIElement>,::Array<::UnityW<::VROSC::TutorialBlinkingUIElement>>*>& __cordl_internal_get__soundButtonBlinkers() ;

constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*> const& __cordl_internal_get__soundButtonInteractables() const;

constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>& __cordl_internal_get__soundButtonInteractables() ;

constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*> const& __cordl_internal_get__tempoSyncInteractables() const;

constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>& __cordl_internal_get__tempoSyncInteractables() ;

constexpr void __cordl_internal_set__boardController(::UnityW<::VROSC::SynthController>  value) ;

constexpr void __cordl_internal_set__boardGrabable(::UnityW<::VROSC::Grabable>  value) ;

constexpr void __cordl_internal_set__closeButtonBlink(::UnityW<::VROSC::TutorialBlinkingUIElement>  value) ;

constexpr void __cordl_internal_set__closeButtonInteractable(::UnityW<::VROSC::Interactable>  value) ;

constexpr void __cordl_internal_set__disabledInteractables(::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>*  value) ;

constexpr void __cordl_internal_set__interactablesParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__noteController(::UnityW<::VROSC::NoteBoardNoteController>  value) ;

constexpr void __cordl_internal_set__soundButtonBlinkers(::ArrayW<::UnityW<::VROSC::TutorialBlinkingUIElement>,::Array<::UnityW<::VROSC::TutorialBlinkingUIElement>>*>  value) ;

constexpr void __cordl_internal_set__soundButtonInteractables(::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  value) ;

constexpr void __cordl_internal_set__tempoSyncInteractables(::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  value) ;

/// @brief Method .ctor, addr 0x16fffd0, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoardTutorialHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoardTutorialHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BoardTutorialHelper(BoardTutorialHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoardTutorialHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoardTutorialHelper(BoardTutorialHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{842};

/// @brief Field _interactablesParent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____interactablesParent;

/// @brief Field _soundButtonBlinkers, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::TutorialBlinkingUIElement>,::Array<::UnityW<::VROSC::TutorialBlinkingUIElement>>*>  ____soundButtonBlinkers;

/// @brief Field _closeButtonBlink, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::TutorialBlinkingUIElement>  ____closeButtonBlink;

/// @brief Field _soundButtonInteractables, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  ____soundButtonInteractables;

/// @brief Field _tempoSyncInteractables, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  ____tempoSyncInteractables;

/// @brief Field _closeButtonInteractable, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::Interactable>  ____closeButtonInteractable;

/// @brief Field _noteController, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNoteController>  ____noteController;

/// @brief Field _boardController, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::SynthController>  ____boardController;

/// @brief Field _boardGrabable, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::Grabable>  ____boardGrabable;

/// @brief Field _disabledInteractables, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>*  ____disabledInteractables;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BoardTutorialHelper, ____interactablesParent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::BoardTutorialHelper, ____soundButtonBlinkers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::BoardTutorialHelper, ____closeButtonBlink) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::BoardTutorialHelper, ____soundButtonInteractables) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::BoardTutorialHelper, ____tempoSyncInteractables) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::BoardTutorialHelper, ____closeButtonInteractable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::BoardTutorialHelper, ____noteController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::BoardTutorialHelper, ____boardController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::BoardTutorialHelper, ____boardGrabable) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::BoardTutorialHelper, ____disabledInteractables) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BoardTutorialHelper, 0x70>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::BoardTutorialHelper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BoardTutorialHelper*, "VROSC", "BoardTutorialHelper");
