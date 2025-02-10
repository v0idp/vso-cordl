#pragma once
// IWYU pragma private; include "VROSC/LooperTutorialHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LooperTutorialHelper)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class InstrumentSettings;
}
namespace VROSC {
class Interactable;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class LoopStation;
}
namespace VROSC {
class TutorialBlinkingUIElement;
}
namespace VROSC {
struct TutorialEvent;
}
// Forward declare root types
namespace VROSC {
class LooperTutorialHelper;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LooperTutorialHelper);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LooperTutorialHelper
class CORDL_TYPE LooperTutorialHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _boardSettings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__boardSettings, put=__cordl_internal_set__boardSettings)) ::UnityW<::VROSC::InstrumentSettings>  _boardSettings;

/// @brief Field _disabledInteractables, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__disabledInteractables, put=__cordl_internal_set__disabledInteractables)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>*  _disabledInteractables;

/// @brief Field _interactablesToDisable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactablesToDisable, put=__cordl_internal_set__interactablesToDisable)) ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  _interactablesToDisable;

/// @brief Field _loopStation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStation, put=__cordl_internal_set__loopStation)) ::UnityW<::VROSC::LoopStation>  _loopStation;

/// @brief Field _rerecordBlinker, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rerecordBlinker, put=__cordl_internal_set__rerecordBlinker)) ::UnityW<::VROSC::TutorialBlinkingUIElement>  _rerecordBlinker;

/// @brief Field _waitingForFirstRecording, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__waitingForFirstRecording, put=__cordl_internal_set__waitingForFirstRecording)) bool  _waitingForFirstRecording;

/// @brief Method AdditionalLoopRecorded, addr 0x17033f4, size 0x150, virtual false, abstract: false, final false
inline void AdditionalLoopRecorded(::VROSC::LoopPlayer*  loopPlayer) ;

/// @brief Method DisableAllInteractables, addr 0x17030a0, size 0x134, virtual false, abstract: false, final false
inline void DisableAllInteractables() ;

/// @brief Method FirstLoopRecorded, addr 0x17032c4, size 0x130, virtual false, abstract: false, final false
inline void FirstLoopRecorded(::VROSC::LoopPlayer*  loopPlayer) ;

static inline ::VROSC::LooperTutorialHelper* New_ctor() ;

/// @brief Method RerecordStarted, addr 0x1703544, size 0x118, virtual false, abstract: false, final false
inline void RerecordStarted() ;

/// @brief Method ResetAll, addr 0x1702f10, size 0x190, virtual false, abstract: false, final false
inline void ResetAll() ;

/// @brief Method Start, addr 0x1702b70, size 0xf4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TutorialEventTriggered, addr 0x1702c64, size 0x2ac, virtual false, abstract: false, final false
inline void TutorialEventTriggered(::VROSC::TutorialEvent  tutorialEvent) ;

/// @brief Method WaitForFirstRecording, addr 0x17031d4, size 0xf0, virtual false, abstract: false, final false
inline void WaitForFirstRecording() ;

constexpr ::UnityW<::VROSC::InstrumentSettings> const& __cordl_internal_get__boardSettings() const;

constexpr ::UnityW<::VROSC::InstrumentSettings>& __cordl_internal_get__boardSettings() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>* const& __cordl_internal_get__disabledInteractables() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>*& __cordl_internal_get__disabledInteractables() ;

constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*> const& __cordl_internal_get__interactablesToDisable() const;

constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>& __cordl_internal_get__interactablesToDisable() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__loopStation() ;

constexpr ::UnityW<::VROSC::TutorialBlinkingUIElement> const& __cordl_internal_get__rerecordBlinker() const;

constexpr ::UnityW<::VROSC::TutorialBlinkingUIElement>& __cordl_internal_get__rerecordBlinker() ;

constexpr bool const& __cordl_internal_get__waitingForFirstRecording() const;

constexpr bool& __cordl_internal_get__waitingForFirstRecording() ;

constexpr void __cordl_internal_set__boardSettings(::UnityW<::VROSC::InstrumentSettings>  value) ;

constexpr void __cordl_internal_set__disabledInteractables(::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>*  value) ;

constexpr void __cordl_internal_set__interactablesToDisable(::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  value) ;

constexpr void __cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value) ;

constexpr void __cordl_internal_set__rerecordBlinker(::UnityW<::VROSC::TutorialBlinkingUIElement>  value) ;

constexpr void __cordl_internal_set__waitingForFirstRecording(bool  value) ;

/// @brief Method .ctor, addr 0x170365c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LooperTutorialHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LooperTutorialHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LooperTutorialHelper(LooperTutorialHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LooperTutorialHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LooperTutorialHelper(LooperTutorialHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{846};

/// @brief Field _interactablesToDisable, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  ____interactablesToDisable;

/// @brief Field _loopStation, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____loopStation;

/// @brief Field _rerecordBlinker, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::TutorialBlinkingUIElement>  ____rerecordBlinker;

/// @brief Field _boardSettings, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::InstrumentSettings>  ____boardSettings;

/// @brief Field _disabledInteractables, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>*  ____disabledInteractables;

/// @brief Field _waitingForFirstRecording, offset: 0x48, size: 0x1, def value: None
 bool  ____waitingForFirstRecording;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LooperTutorialHelper, ____interactablesToDisable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperTutorialHelper, ____loopStation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperTutorialHelper, ____rerecordBlinker) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperTutorialHelper, ____boardSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperTutorialHelper, ____disabledInteractables) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperTutorialHelper, ____waitingForFirstRecording) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LooperTutorialHelper, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LooperTutorialHelper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LooperTutorialHelper*, "VROSC", "LooperTutorialHelper");
