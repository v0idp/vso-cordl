#pragma once
// IWYU pragma private; include "VROSC/TutorialManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TutorialManager)
namespace GlobalNamespace {
class TutorialSettings;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class StateMachine;
}
namespace VROSC {
class TutorialCompletedState;
}
namespace VROSC {
struct TutorialEvent;
}
namespace VROSC {
class TutorialPanel;
}
namespace VROSC {
class TutorialStep;
}
namespace VROSC {
class Tutorial;
}
// Forward declare root types
namespace VROSC {
class TutorialManager;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TutorialManager);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TutorialManager
class CORDL_TYPE TutorialManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_HasRecordedCowbell, put=set_HasRecordedCowbell)) bool  HasRecordedCowbell;

/// @brief Field OnEvent, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEvent, put=__cordl_internal_set_OnEvent)) ::System::Action_1<::VROSC::TutorialEvent>*  OnEvent;

 __declspec(property(get=get_ReplayVOSource)) ::UnityW<::UnityEngine::AudioSource>  ReplayVOSource;

 __declspec(property(get=get_Settings)) ::UnityW<::GlobalNamespace::TutorialSettings>  Settings;

 __declspec(property(get=get_TimelineVOSource)) ::UnityW<::UnityEngine::AudioSource>  TimelineVOSource;

/// @brief Field <HasRecordedCowbell>k__BackingField, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasRecordedCowbell_k__BackingField, put=__cordl_internal_set__HasRecordedCowbell_k__BackingField)) bool  _HasRecordedCowbell_k__BackingField;

/// @brief Field _completedState, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__completedState, put=__cordl_internal_set__completedState)) ::VROSC::TutorialCompletedState*  _completedState;

/// @brief Field _currentStep, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentStep, put=__cordl_internal_set__currentStep)) ::UnityW<::VROSC::TutorialStep>  _currentStep;

/// @brief Field _isRunning, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRunning, put=__cordl_internal_set__isRunning)) bool  _isRunning;

/// @brief Field _replayVOSource, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__replayVOSource, put=__cordl_internal_set__replayVOSource)) ::UnityW<::UnityEngine::AudioSource>  _replayVOSource;

/// @brief Field _settings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::UnityW<::GlobalNamespace::TutorialSettings>  _settings;

/// @brief Field _spectatorCameraModeAtStart, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__spectatorCameraModeAtStart, put=__cordl_internal_set__spectatorCameraModeAtStart)) int32_t  _spectatorCameraModeAtStart;

/// @brief Field _stateMachine, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__stateMachine, put=__cordl_internal_set__stateMachine)) ::VROSC::StateMachine*  _stateMachine;

/// @brief Field _timelineVOSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__timelineVOSource, put=__cordl_internal_set__timelineVOSource)) ::UnityW<::UnityEngine::AudioSource>  _timelineVOSource;

/// @brief Field _tutorial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__tutorial, put=__cordl_internal_set__tutorial)) ::VROSC::Tutorial*  _tutorial;

/// @brief Field _tutorialPanel, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__tutorialPanel, put=__cordl_internal_set__tutorialPanel)) ::UnityW<::VROSC::TutorialPanel>  _tutorialPanel;

/// @brief Method ActivateStep, addr 0x17061bc, size 0xd8, virtual false, abstract: false, final false
inline void ActivateStep(::VROSC::TutorialStep*  tutorialStep) ;

/// @brief Method Awake, addr 0x17051f8, size 0x190, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::TutorialManager* New_ctor() ;

/// @brief Method OnAppPaused, addr 0x170678c, size 0x8c, virtual false, abstract: false, final false
inline void OnAppPaused(bool  paused) ;

/// @brief Method ReEnableEverything, addr 0x17060e4, size 0xd8, virtual false, abstract: false, final false
inline void ReEnableEverything() ;

/// @brief Method SendEvent, addr 0x1705b94, size 0xdc, virtual false, abstract: false, final false
inline void SendEvent(::VROSC::TutorialEvent  tutorialEvent) ;

/// @brief Method SetHasRecordedCowbell, addr 0x17068d4, size 0xc, virtual false, abstract: false, final false
inline void SetHasRecordedCowbell(bool  hasRecordedCowbell) ;

/// @brief Method SetSpectatorCameraToFirstPerson, addr 0x1705768, size 0x64, virtual false, abstract: false, final false
inline void SetSpectatorCameraToFirstPerson() ;

/// @brief Method StartTutorial, addr 0x1705388, size 0x364, virtual false, abstract: false, final false
inline void StartTutorial(::UnityEngine::Transform*  startMenuTransform) ;

/// @brief Method StopTutorial, addr 0x1705c70, size 0xec, virtual false, abstract: false, final false
inline void StopTutorial(bool  isCancel) ;

/// @brief Method TutorialEventTriggered, addr 0x1706818, size 0xbc, virtual false, abstract: false, final false
inline void TutorialEventTriggered(::VROSC::TutorialEvent  tutorialEvent) ;

/// @brief Method Update, addr 0x1706738, size 0x54, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Action_1<::VROSC::TutorialEvent>* const& __cordl_internal_get_OnEvent() const;

constexpr ::System::Action_1<::VROSC::TutorialEvent>*& __cordl_internal_get_OnEvent() ;

constexpr bool const& __cordl_internal_get__HasRecordedCowbell_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasRecordedCowbell_k__BackingField() ;

constexpr ::VROSC::TutorialCompletedState* const& __cordl_internal_get__completedState() const;

constexpr ::VROSC::TutorialCompletedState*& __cordl_internal_get__completedState() ;

constexpr ::UnityW<::VROSC::TutorialStep> const& __cordl_internal_get__currentStep() const;

constexpr ::UnityW<::VROSC::TutorialStep>& __cordl_internal_get__currentStep() ;

constexpr bool const& __cordl_internal_get__isRunning() const;

constexpr bool& __cordl_internal_get__isRunning() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__replayVOSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__replayVOSource() ;

constexpr ::UnityW<::GlobalNamespace::TutorialSettings> const& __cordl_internal_get__settings() const;

constexpr ::UnityW<::GlobalNamespace::TutorialSettings>& __cordl_internal_get__settings() ;

constexpr int32_t const& __cordl_internal_get__spectatorCameraModeAtStart() const;

constexpr int32_t& __cordl_internal_get__spectatorCameraModeAtStart() ;

constexpr ::VROSC::StateMachine* const& __cordl_internal_get__stateMachine() const;

constexpr ::VROSC::StateMachine*& __cordl_internal_get__stateMachine() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__timelineVOSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__timelineVOSource() ;

constexpr ::VROSC::Tutorial* const& __cordl_internal_get__tutorial() const;

constexpr ::VROSC::Tutorial*& __cordl_internal_get__tutorial() ;

constexpr ::UnityW<::VROSC::TutorialPanel> const& __cordl_internal_get__tutorialPanel() const;

constexpr ::UnityW<::VROSC::TutorialPanel>& __cordl_internal_get__tutorialPanel() ;

constexpr void __cordl_internal_set_OnEvent(::System::Action_1<::VROSC::TutorialEvent>*  value) ;

constexpr void __cordl_internal_set__HasRecordedCowbell_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__completedState(::VROSC::TutorialCompletedState*  value) ;

constexpr void __cordl_internal_set__currentStep(::UnityW<::VROSC::TutorialStep>  value) ;

constexpr void __cordl_internal_set__isRunning(bool  value) ;

constexpr void __cordl_internal_set__replayVOSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__settings(::UnityW<::GlobalNamespace::TutorialSettings>  value) ;

constexpr void __cordl_internal_set__spectatorCameraModeAtStart(int32_t  value) ;

constexpr void __cordl_internal_set__stateMachine(::VROSC::StateMachine*  value) ;

constexpr void __cordl_internal_set__timelineVOSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__tutorial(::VROSC::Tutorial*  value) ;

constexpr void __cordl_internal_set__tutorialPanel(::UnityW<::VROSC::TutorialPanel>  value) ;

/// @brief Method .ctor, addr 0x17068e0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasRecordedCowbell, addr 0x17051e4, size 0x8, virtual false, abstract: false, final false
inline bool get_HasRecordedCowbell() ;

/// @brief Method get_ReplayVOSource, addr 0x17051dc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioSource> get_ReplayVOSource() ;

/// @brief Method get_Settings, addr 0x17051cc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::TutorialSettings> get_Settings() ;

/// @brief Method get_TimelineVOSource, addr 0x17051d4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioSource> get_TimelineVOSource() ;

/// @brief Method set_HasRecordedCowbell, addr 0x17051ec, size 0xc, virtual false, abstract: false, final false
inline void set_HasRecordedCowbell(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TutorialManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TutorialManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialManager(TutorialManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialManager(TutorialManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{854};

/// @brief Field _tutorial, offset: 0x20, size: 0x8, def value: None
 ::VROSC::Tutorial*  ____tutorial;

/// @brief Field _settings, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TutorialSettings>  ____settings;

/// @brief Field _tutorialPanel, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::TutorialPanel>  ____tutorialPanel;

/// @brief Field _timelineVOSource, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____timelineVOSource;

/// @brief Field _replayVOSource, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____replayVOSource;

/// @brief Field _stateMachine, offset: 0x48, size: 0x8, def value: None
 ::VROSC::StateMachine*  ____stateMachine;

/// @brief Field _completedState, offset: 0x50, size: 0x8, def value: None
 ::VROSC::TutorialCompletedState*  ____completedState;

/// @brief Field _isRunning, offset: 0x58, size: 0x1, def value: None
 bool  ____isRunning;

/// @brief Field _spectatorCameraModeAtStart, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____spectatorCameraModeAtStart;

/// @brief Field _currentStep, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::TutorialStep>  ____currentStep;

/// @brief Field <HasRecordedCowbell>k__BackingField, offset: 0x68, size: 0x1, def value: None
 bool  ____HasRecordedCowbell_k__BackingField;

/// @brief Field OnEvent, offset: 0x70, size: 0x8, def value: None
 ::System::Action_1<::VROSC::TutorialEvent>*  ___OnEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TutorialManager, ____tutorial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialManager, ____settings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialManager, ____tutorialPanel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialManager, ____timelineVOSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialManager, ____replayVOSource) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialManager, ____stateMachine) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialManager, ____completedState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialManager, ____isRunning) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialManager, ____spectatorCameraModeAtStart) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialManager, ____currentStep) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialManager, ____HasRecordedCowbell_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialManager, ___OnEvent) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TutorialManager, 0x78>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TutorialManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialManager*, "VROSC", "TutorialManager");
