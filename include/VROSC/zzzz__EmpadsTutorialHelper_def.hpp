#pragma once
// IWYU pragma private; include "VROSC/EmpadsTutorialHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EmpadsTutorialHelper)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class DrumPadEffectOnSignal;
}
namespace VROSC {
class Interactable;
}
namespace VROSC {
struct LoopStationRecorder_RecordingState;
}
namespace VROSC {
class ModularDrumpads;
}
namespace VROSC {
class ModularDrumsController;
}
namespace VROSC {
class PatchSettings;
}
namespace VROSC {
class TutorialBlinkingUIElement;
}
namespace VROSC {
struct TutorialEvent;
}
namespace VROSC {
struct WidgetSettings_Identifier;
}
// Forward declare root types
namespace VROSC {
class EmpadsTutorialHelper;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::EmpadsTutorialHelper);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.EmpadsTutorialHelper
class CORDL_TYPE EmpadsTutorialHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _closeButtonInteractable, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeButtonInteractable, put=__cordl_internal_set__closeButtonInteractable)) ::UnityW<::VROSC::Interactable>  _closeButtonInteractable;

/// @brief Field _countSpawnedPads, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__countSpawnedPads, put=__cordl_internal_set__countSpawnedPads)) bool  _countSpawnedPads;

/// @brief Field _cowbellClip, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__cowbellClip, put=__cordl_internal_set__cowbellClip)) ::UnityW<::UnityEngine::AudioClip>  _cowbellClip;

/// @brief Field _disabledInteractables, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__disabledInteractables, put=__cordl_internal_set__disabledInteractables)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>*  _disabledInteractables;

/// @brief Field _drumpadEffects, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__drumpadEffects, put=__cordl_internal_set__drumpadEffects)) ::ArrayW<::UnityW<::VROSC::DrumPadEffectOnSignal>,::Array<::UnityW<::VROSC::DrumPadEffectOnSignal>>*>  _drumpadEffects;

/// @brief Field _drumpadSpawners, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__drumpadSpawners, put=__cordl_internal_set__drumpadSpawners)) ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  _drumpadSpawners;

/// @brief Field _empads, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__empads, put=__cordl_internal_set__empads)) ::UnityW<::VROSC::ModularDrumpads>  _empads;

/// @brief Field _empadsController, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__empadsController, put=__cordl_internal_set__empadsController)) ::UnityW<::VROSC::ModularDrumsController>  _empadsController;

/// @brief Field _interactablesParent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactablesParent, put=__cordl_internal_set__interactablesParent)) ::UnityW<::UnityEngine::GameObject>  _interactablesParent;

/// @brief Field _padsHighlighted, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__padsHighlighted, put=__cordl_internal_set__padsHighlighted)) bool  _padsHighlighted;

/// @brief Field _recordingFirstRecording, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get__recordingFirstRecording, put=__cordl_internal_set__recordingFirstRecording)) bool  _recordingFirstRecording;

/// @brief Field _tempoSyncButtonBlinkers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__tempoSyncButtonBlinkers, put=__cordl_internal_set__tempoSyncButtonBlinkers)) ::ArrayW<::UnityW<::VROSC::TutorialBlinkingUIElement>,::Array<::UnityW<::VROSC::TutorialBlinkingUIElement>>*>  _tempoSyncButtonBlinkers;

/// @brief Field _tempoSyncButtonInteractables, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__tempoSyncButtonInteractables, put=__cordl_internal_set__tempoSyncButtonInteractables)) ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  _tempoSyncButtonInteractables;

/// @brief Field _waitingForSyncDivider, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__waitingForSyncDivider, put=__cordl_internal_set__waitingForSyncDivider)) int32_t  _waitingForSyncDivider;

/// @brief Method DisableAllInteractables, addr 0x1701b38, size 0x248, virtual false, abstract: false, final false
inline void DisableAllInteractables() ;

/// @brief Method DisableTempoSync, addr 0x17026d0, size 0xfc, virtual false, abstract: false, final false
inline void DisableTempoSync() ;

/// @brief Method DrumSamplePlayed, addr 0x1702a44, size 0xb0, virtual false, abstract: false, final false
inline void DrumSamplePlayed(::UnityEngine::AudioClip*  audioClip) ;

/// @brief Method EnableEmpadExtraction, addr 0x1701eec, size 0xb8, virtual false, abstract: false, final false
inline void EnableEmpadExtraction() ;

/// @brief Method EnableTempoSync, addr 0x1701fa4, size 0xb8, virtual false, abstract: false, final false
inline void EnableTempoSync() ;

/// @brief Method LoopStationRecorderStateChanged, addr 0x1702a20, size 0x24, virtual false, abstract: false, final false
inline void LoopStationRecorderStateChanged(::VROSC::LoopStationRecorder_RecordingState  state) ;

static inline ::VROSC::EmpadsTutorialHelper* New_ctor() ;

/// @brief Method ResetAll, addr 0x170237c, size 0x1f4, virtual false, abstract: false, final false
inline void ResetAll() ;

/// @brief Method Start, addr 0x170144c, size 0x1b8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartHighlightPads, addr 0x1701d80, size 0x68, virtual false, abstract: false, final false
inline void StartHighlightPads() ;

/// @brief Method StartHighlightPadsWithText, addr 0x1701de8, size 0x104, virtual false, abstract: false, final false
inline void StartHighlightPadsWithText() ;

/// @brief Method StartTempoSyncBlinking, addr 0x170205c, size 0xc8, virtual false, abstract: false, final false
inline void StartTempoSyncBlinking() ;

/// @brief Method StopHighlightPads, addr 0x170266c, size 0x64, virtual false, abstract: false, final false
inline void StopHighlightPads() ;

/// @brief Method StopHighlightPads, addr 0x1702570, size 0xfc, virtual false, abstract: false, final false
inline void StopHighlightPads(::VROSC::WidgetSettings_Identifier  id, ::VROSC::PatchSettings*  settings, double_t  predictedDspTime) ;

/// @brief Method StopHighlightPadsWithText, addr 0x17016c0, size 0xfc, virtual false, abstract: false, final false
inline void StopHighlightPadsWithText() ;

/// @brief Method StopTempoSyncBlinking, addr 0x17027cc, size 0x78, virtual false, abstract: false, final false
inline void StopTempoSyncBlinking() ;

/// @brief Method TempoSyncButtonsUsed, addr 0x1702844, size 0x1dc, virtual false, abstract: false, final false
inline void TempoSyncButtonsUsed(bool  used) ;

/// @brief Method TutorialEventTriggered, addr 0x17017bc, size 0x37c, virtual false, abstract: false, final false
inline void TutorialEventTriggered(::VROSC::TutorialEvent  tutorialEvent) ;

/// @brief Method Update, addr 0x1701604, size 0xbc, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method WaitForQuarterSync, addr 0x1702124, size 0x12c, virtual false, abstract: false, final false
inline void WaitForQuarterSync() ;

/// @brief Method WaitForSixteenthSync, addr 0x1702250, size 0x12c, virtual false, abstract: false, final false
inline void WaitForSixteenthSync() ;

constexpr ::UnityW<::VROSC::Interactable> const& __cordl_internal_get__closeButtonInteractable() const;

constexpr ::UnityW<::VROSC::Interactable>& __cordl_internal_get__closeButtonInteractable() ;

constexpr bool const& __cordl_internal_get__countSpawnedPads() const;

constexpr bool& __cordl_internal_get__countSpawnedPads() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__cowbellClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__cowbellClip() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>* const& __cordl_internal_get__disabledInteractables() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>*& __cordl_internal_get__disabledInteractables() ;

constexpr ::ArrayW<::UnityW<::VROSC::DrumPadEffectOnSignal>,::Array<::UnityW<::VROSC::DrumPadEffectOnSignal>>*> const& __cordl_internal_get__drumpadEffects() const;

constexpr ::ArrayW<::UnityW<::VROSC::DrumPadEffectOnSignal>,::Array<::UnityW<::VROSC::DrumPadEffectOnSignal>>*>& __cordl_internal_get__drumpadEffects() ;

constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*> const& __cordl_internal_get__drumpadSpawners() const;

constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>& __cordl_internal_get__drumpadSpawners() ;

constexpr ::UnityW<::VROSC::ModularDrumpads> const& __cordl_internal_get__empads() const;

constexpr ::UnityW<::VROSC::ModularDrumpads>& __cordl_internal_get__empads() ;

constexpr ::UnityW<::VROSC::ModularDrumsController> const& __cordl_internal_get__empadsController() const;

constexpr ::UnityW<::VROSC::ModularDrumsController>& __cordl_internal_get__empadsController() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__interactablesParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__interactablesParent() ;

constexpr bool const& __cordl_internal_get__padsHighlighted() const;

constexpr bool& __cordl_internal_get__padsHighlighted() ;

constexpr bool const& __cordl_internal_get__recordingFirstRecording() const;

constexpr bool& __cordl_internal_get__recordingFirstRecording() ;

constexpr ::ArrayW<::UnityW<::VROSC::TutorialBlinkingUIElement>,::Array<::UnityW<::VROSC::TutorialBlinkingUIElement>>*> const& __cordl_internal_get__tempoSyncButtonBlinkers() const;

constexpr ::ArrayW<::UnityW<::VROSC::TutorialBlinkingUIElement>,::Array<::UnityW<::VROSC::TutorialBlinkingUIElement>>*>& __cordl_internal_get__tempoSyncButtonBlinkers() ;

constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*> const& __cordl_internal_get__tempoSyncButtonInteractables() const;

constexpr ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>& __cordl_internal_get__tempoSyncButtonInteractables() ;

constexpr int32_t const& __cordl_internal_get__waitingForSyncDivider() const;

constexpr int32_t& __cordl_internal_get__waitingForSyncDivider() ;

constexpr void __cordl_internal_set__closeButtonInteractable(::UnityW<::VROSC::Interactable>  value) ;

constexpr void __cordl_internal_set__countSpawnedPads(bool  value) ;

constexpr void __cordl_internal_set__cowbellClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__disabledInteractables(::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>*  value) ;

constexpr void __cordl_internal_set__drumpadEffects(::ArrayW<::UnityW<::VROSC::DrumPadEffectOnSignal>,::Array<::UnityW<::VROSC::DrumPadEffectOnSignal>>*>  value) ;

constexpr void __cordl_internal_set__drumpadSpawners(::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  value) ;

constexpr void __cordl_internal_set__empads(::UnityW<::VROSC::ModularDrumpads>  value) ;

constexpr void __cordl_internal_set__empadsController(::UnityW<::VROSC::ModularDrumsController>  value) ;

constexpr void __cordl_internal_set__interactablesParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__padsHighlighted(bool  value) ;

constexpr void __cordl_internal_set__recordingFirstRecording(bool  value) ;

constexpr void __cordl_internal_set__tempoSyncButtonBlinkers(::ArrayW<::UnityW<::VROSC::TutorialBlinkingUIElement>,::Array<::UnityW<::VROSC::TutorialBlinkingUIElement>>*>  value) ;

constexpr void __cordl_internal_set__tempoSyncButtonInteractables(::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  value) ;

constexpr void __cordl_internal_set__waitingForSyncDivider(int32_t  value) ;

/// @brief Method .ctor, addr 0x1702af4, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EmpadsTutorialHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EmpadsTutorialHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmpadsTutorialHelper(EmpadsTutorialHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmpadsTutorialHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmpadsTutorialHelper(EmpadsTutorialHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{845};

/// @brief Field _interactablesParent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____interactablesParent;

/// @brief Field _tempoSyncButtonBlinkers, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::TutorialBlinkingUIElement>,::Array<::UnityW<::VROSC::TutorialBlinkingUIElement>>*>  ____tempoSyncButtonBlinkers;

/// @brief Field _drumpadEffects, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::DrumPadEffectOnSignal>,::Array<::UnityW<::VROSC::DrumPadEffectOnSignal>>*>  ____drumpadEffects;

/// @brief Field _drumpadSpawners, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  ____drumpadSpawners;

/// @brief Field _tempoSyncButtonInteractables, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::Interactable>,::Array<::UnityW<::VROSC::Interactable>>*>  ____tempoSyncButtonInteractables;

/// @brief Field _closeButtonInteractable, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::Interactable>  ____closeButtonInteractable;

/// @brief Field _empadsController, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::ModularDrumsController>  ____empadsController;

/// @brief Field _empads, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::ModularDrumpads>  ____empads;

/// @brief Field _cowbellClip, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____cowbellClip;

/// @brief Field _disabledInteractables, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::Interactable>>*  ____disabledInteractables;

/// @brief Field _countSpawnedPads, offset: 0x70, size: 0x1, def value: None
 bool  ____countSpawnedPads;

/// @brief Field _waitingForSyncDivider, offset: 0x74, size: 0x4, def value: None
 int32_t  ____waitingForSyncDivider;

/// @brief Field _padsHighlighted, offset: 0x78, size: 0x1, def value: None
 bool  ____padsHighlighted;

/// @brief Field _recordingFirstRecording, offset: 0x79, size: 0x1, def value: None
 bool  ____recordingFirstRecording;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::EmpadsTutorialHelper, ____interactablesParent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadsTutorialHelper, ____tempoSyncButtonBlinkers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadsTutorialHelper, ____drumpadEffects) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadsTutorialHelper, ____drumpadSpawners) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadsTutorialHelper, ____tempoSyncButtonInteractables) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadsTutorialHelper, ____closeButtonInteractable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadsTutorialHelper, ____empadsController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadsTutorialHelper, ____empads) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadsTutorialHelper, ____cowbellClip) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadsTutorialHelper, ____disabledInteractables) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadsTutorialHelper, ____countSpawnedPads) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadsTutorialHelper, ____waitingForSyncDivider) == 0x74, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadsTutorialHelper, ____padsHighlighted) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmpadsTutorialHelper, ____recordingFirstRecording) == 0x79, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::EmpadsTutorialHelper, 0x80>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::EmpadsTutorialHelper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EmpadsTutorialHelper*, "VROSC", "EmpadsTutorialHelper");
