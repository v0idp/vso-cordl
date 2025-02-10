#pragma once
// IWYU pragma private; include "VROSC/AppController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AppController)
namespace GlobalNamespace {
class PunchKeyboard;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class AppController___c;
}
namespace VROSC {
class Dashboard;
}
namespace VROSC {
class FailedEntitlementState;
}
namespace VROSC {
class FailedStartMenu;
}
namespace VROSC {
class FullScreenFxController;
}
namespace VROSC {
class IntroVideoPlayer;
}
namespace VROSC {
class MainState;
}
namespace VROSC {
class MicrophoneDeviceManager;
}
namespace VROSC {
class SettingsDataDefaults;
}
namespace VROSC {
class StartMenu;
}
namespace VROSC {
class StartState;
}
namespace VROSC {
class StateMachine;
}
namespace VROSC {
class UISchemeController;
}
// Forward declare root types
namespace VROSC {
class AppController;
}
namespace VROSC {
class AppController___c;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AppController);
MARK_REF_PTR_T(::VROSC::AppController___c);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AppController/<>c
class CORDL_TYPE AppController___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::AppController___c*  __9;

/// @brief Field <>9__29_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__29_10, put=setStaticF___9__29_10)) ::System::Func_1<bool>*  __9__29_10;

/// @brief Field <>9__29_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__29_11, put=setStaticF___9__29_11)) ::System::Func_1<bool>*  __9__29_11;

/// @brief Field <>9__29_12, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__29_12, put=setStaticF___9__29_12)) ::System::Func_1<bool>*  __9__29_12;

/// @brief Field <>9__29_13, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__29_13, put=setStaticF___9__29_13)) ::System::Func_1<bool>*  __9__29_13;

/// @brief Field <>9__29_14, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__29_14, put=setStaticF___9__29_14)) ::System::Func_1<bool>*  __9__29_14;

/// @brief Field <>9__29_16, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__29_16, put=setStaticF___9__29_16)) ::System::Func_1<bool>*  __9__29_16;

/// @brief Field <>9__29_17, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__29_17, put=setStaticF___9__29_17)) ::System::Func_1<bool>*  __9__29_17;

/// @brief Field <>9__29_19, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__29_19, put=setStaticF___9__29_19)) ::System::Func_1<bool>*  __9__29_19;

static inline ::VROSC::AppController___c* New_ctor() ;

/// @brief Method <Awake>b__29_10, addr 0x17c7038, size 0x8, virtual false, abstract: false, final false
inline bool _Awake_b__29_10() ;

/// @brief Method <Awake>b__29_11, addr 0x17c7040, size 0x54, virtual false, abstract: false, final false
inline bool _Awake_b__29_11() ;

/// @brief Method <Awake>b__29_12, addr 0x17c7094, size 0x6c, virtual false, abstract: false, final false
inline bool _Awake_b__29_12() ;

/// @brief Method <Awake>b__29_13, addr 0x17c7100, size 0x6c, virtual false, abstract: false, final false
inline bool _Awake_b__29_13() ;

/// @brief Method <Awake>b__29_14, addr 0x17c716c, size 0x54, virtual false, abstract: false, final false
inline bool _Awake_b__29_14() ;

/// @brief Method <Awake>b__29_16, addr 0x17c71c0, size 0x54, virtual false, abstract: false, final false
inline bool _Awake_b__29_16() ;

/// @brief Method <Awake>b__29_17, addr 0x17c7214, size 0x54, virtual false, abstract: false, final false
inline bool _Awake_b__29_17() ;

/// @brief Method <Awake>b__29_19, addr 0x17c7268, size 0x54, virtual false, abstract: false, final false
inline bool _Awake_b__29_19() ;

/// @brief Method .ctor, addr 0x17c7030, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::AppController___c* getStaticF___9() ;

static inline ::System::Func_1<bool>* getStaticF___9__29_10() ;

static inline ::System::Func_1<bool>* getStaticF___9__29_11() ;

static inline ::System::Func_1<bool>* getStaticF___9__29_12() ;

static inline ::System::Func_1<bool>* getStaticF___9__29_13() ;

static inline ::System::Func_1<bool>* getStaticF___9__29_14() ;

static inline ::System::Func_1<bool>* getStaticF___9__29_16() ;

static inline ::System::Func_1<bool>* getStaticF___9__29_17() ;

static inline ::System::Func_1<bool>* getStaticF___9__29_19() ;

static inline void setStaticF___9(::VROSC::AppController___c*  value) ;

static inline void setStaticF___9__29_10(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__29_11(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__29_12(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__29_13(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__29_14(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__29_16(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__29_17(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__29_19(::System::Func_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppController___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppController___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AppController___c(AppController___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppController___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppController___c(AppController___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{276};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::AppController___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AppController
class CORDL_TYPE AppController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::VROSC::AppController___c;

 __declspec(property(get=get_FullScreenFxController)) ::UnityW<::VROSC::FullScreenFxController>  FullScreenFxController;

 __declspec(property(get=get_IsFailedEntitlement)) bool  IsFailedEntitlement;

 __declspec(property(get=get_IsPaused, put=set_IsPaused)) bool  IsPaused;

 __declspec(property(get=get_IsReady)) bool  IsReady;

/// @brief Field OnAppPaused, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnAppPaused, put=setStaticF_OnAppPaused)) ::System::Action_1<bool>*  OnAppPaused;

/// @brief Field OnStartCreating, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnStartCreating, put=setStaticF_OnStartCreating)) ::System::Action*  OnStartCreating;

 __declspec(property(get=get_SessionsLibraryWindow)) ::UnityW<::UnityEngine::GameObject>  SessionsLibraryWindow;

/// @brief Field <IsPaused>k__BackingField, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsPaused_k__BackingField, put=__cordl_internal_set__IsPaused_k__BackingField)) bool  _IsPaused_k__BackingField;

/// @brief Field _dashboardPrefab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__dashboardPrefab, put=__cordl_internal_set__dashboardPrefab)) ::UnityW<::VROSC::Dashboard>  _dashboardPrefab;

/// @brief Field _failedEntitlementState, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__failedEntitlementState, put=__cordl_internal_set__failedEntitlementState)) ::VROSC::FailedEntitlementState*  _failedEntitlementState;

/// @brief Field _failedStartMenuPrefab, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__failedStartMenuPrefab, put=__cordl_internal_set__failedStartMenuPrefab)) ::UnityW<::VROSC::FailedStartMenu>  _failedStartMenuPrefab;

/// @brief Field _fullScreenFxController, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__fullScreenFxController, put=__cordl_internal_set__fullScreenFxController)) ::UnityW<::VROSC::FullScreenFxController>  _fullScreenFxController;

/// @brief Field _introVideoPlayer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__introVideoPlayer, put=__cordl_internal_set__introVideoPlayer)) ::UnityW<::VROSC::IntroVideoPlayer>  _introVideoPlayer;

/// @brief Field _keyboardPrefab, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__keyboardPrefab, put=__cordl_internal_set__keyboardPrefab)) ::UnityW<::GlobalNamespace::PunchKeyboard>  _keyboardPrefab;

/// @brief Field _mainState, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__mainState, put=__cordl_internal_set__mainState)) ::VROSC::MainState*  _mainState;

/// @brief Field _microphoneDeviceManager, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__microphoneDeviceManager, put=__cordl_internal_set__microphoneDeviceManager)) ::UnityW<::VROSC::MicrophoneDeviceManager>  _microphoneDeviceManager;

/// @brief Field _sessionsLibraryWindow, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__sessionsLibraryWindow, put=__cordl_internal_set__sessionsLibraryWindow)) ::UnityW<::UnityEngine::GameObject>  _sessionsLibraryWindow;

/// @brief Field _settingsDataDefaults, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsDataDefaults, put=__cordl_internal_set__settingsDataDefaults)) ::UnityW<::VROSC::SettingsDataDefaults>  _settingsDataDefaults;

/// @brief Field _startMenuMusic, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__startMenuMusic, put=__cordl_internal_set__startMenuMusic)) ::UnityW<::UnityEngine::AudioSource>  _startMenuMusic;

/// @brief Field _startMenuPrefab, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__startMenuPrefab, put=__cordl_internal_set__startMenuPrefab)) ::UnityW<::VROSC::StartMenu>  _startMenuPrefab;

/// @brief Field _startState, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__startState, put=__cordl_internal_set__startState)) ::VROSC::StartState*  _startState;

/// @brief Field _stateMachine, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__stateMachine, put=__cordl_internal_set__stateMachine)) ::VROSC::StateMachine*  _stateMachine;

/// @brief Field _uiSchemeController, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__uiSchemeController, put=__cordl_internal_set__uiSchemeController)) ::VROSC::UISchemeController*  _uiSchemeController;

/// @brief Method Awake, addr 0x17c5a88, size 0x7e8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InitializeApp, addr 0x17c6ecc, size 0xa8, virtual false, abstract: false, final false
inline void InitializeApp() ;

static inline ::VROSC::AppController* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17c6f74, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetWebUserAgent, addr 0x17c6270, size 0x190, virtual false, abstract: false, final false
inline void SetWebUserAgent() ;

/// @brief Method Start, addr 0x17c6b38, size 0x7c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x17c6f78, size 0x1c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method <Awake>b__29_15, addr 0x17c6f9c, size 0x1c, virtual false, abstract: false, final false
inline bool _Awake_b__29_15() ;

/// @brief Method <Awake>b__29_18, addr 0x17c6fb8, size 0x1c, virtual false, abstract: false, final false
inline bool _Awake_b__29_18() ;

/// @brief Method <Awake>g__Continue|29_0, addr 0x17c6400, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Func_1<bool>* _Awake_g__Continue_29_0() ;

/// @brief Method <Awake>g__HasNotPassedEntitlement|29_3, addr 0x17c6658, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Func_1<bool>* _Awake_g__HasNotPassedEntitlement_29_3() ;

/// @brief Method <Awake>g__HasPassedEntitlement|29_2, addr 0x17c6590, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Func_1<bool>* _Awake_g__HasPassedEntitlement_29_2() ;

/// @brief Method <Awake>g__HasSplashVideoFinished|29_8, addr 0x17c6abc, size 0x7c, virtual false, abstract: false, final false
inline ::System::Func_1<bool>* _Awake_g__HasSplashVideoFinished_29_8() ;

/// @brief Method <Awake>g__IsAppValid|29_9, addr 0x17c6720, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Func_1<bool>* _Awake_g__IsAppValid_29_9() ;

/// @brief Method <Awake>g__IsLocalDataLoaded|29_6, addr 0x17c692c, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Func_1<bool>* _Awake_g__IsLocalDataLoaded_29_6() ;

/// @brief Method <Awake>g__IsMicrophoneInitialized|29_5, addr 0x17c68b0, size 0x7c, virtual false, abstract: false, final false
inline ::System::Func_1<bool>* _Awake_g__IsMicrophoneInitialized_29_5() ;

/// @brief Method <Awake>g__IsNoteManagerReady|29_4, addr 0x17c67e8, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Func_1<bool>* _Awake_g__IsNoteManagerReady_29_4() ;

/// @brief Method <Awake>g__IsRemoteConfigReady|29_1, addr 0x17c64c8, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Func_1<bool>* _Awake_g__IsRemoteConfigReady_29_1() ;

/// @brief Method <Awake>g__IsScenesLoaded|29_7, addr 0x17c69f4, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Func_1<bool>* _Awake_g__IsScenesLoaded_29_7() ;

constexpr bool const& __cordl_internal_get__IsPaused_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsPaused_k__BackingField() ;

constexpr ::UnityW<::VROSC::Dashboard> const& __cordl_internal_get__dashboardPrefab() const;

constexpr ::UnityW<::VROSC::Dashboard>& __cordl_internal_get__dashboardPrefab() ;

constexpr ::VROSC::FailedEntitlementState* const& __cordl_internal_get__failedEntitlementState() const;

constexpr ::VROSC::FailedEntitlementState*& __cordl_internal_get__failedEntitlementState() ;

constexpr ::UnityW<::VROSC::FailedStartMenu> const& __cordl_internal_get__failedStartMenuPrefab() const;

constexpr ::UnityW<::VROSC::FailedStartMenu>& __cordl_internal_get__failedStartMenuPrefab() ;

constexpr ::UnityW<::VROSC::FullScreenFxController> const& __cordl_internal_get__fullScreenFxController() const;

constexpr ::UnityW<::VROSC::FullScreenFxController>& __cordl_internal_get__fullScreenFxController() ;

constexpr ::UnityW<::VROSC::IntroVideoPlayer> const& __cordl_internal_get__introVideoPlayer() const;

constexpr ::UnityW<::VROSC::IntroVideoPlayer>& __cordl_internal_get__introVideoPlayer() ;

constexpr ::UnityW<::GlobalNamespace::PunchKeyboard> const& __cordl_internal_get__keyboardPrefab() const;

constexpr ::UnityW<::GlobalNamespace::PunchKeyboard>& __cordl_internal_get__keyboardPrefab() ;

constexpr ::VROSC::MainState* const& __cordl_internal_get__mainState() const;

constexpr ::VROSC::MainState*& __cordl_internal_get__mainState() ;

constexpr ::UnityW<::VROSC::MicrophoneDeviceManager> const& __cordl_internal_get__microphoneDeviceManager() const;

constexpr ::UnityW<::VROSC::MicrophoneDeviceManager>& __cordl_internal_get__microphoneDeviceManager() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__sessionsLibraryWindow() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__sessionsLibraryWindow() ;

constexpr ::UnityW<::VROSC::SettingsDataDefaults> const& __cordl_internal_get__settingsDataDefaults() const;

constexpr ::UnityW<::VROSC::SettingsDataDefaults>& __cordl_internal_get__settingsDataDefaults() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__startMenuMusic() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__startMenuMusic() ;

constexpr ::UnityW<::VROSC::StartMenu> const& __cordl_internal_get__startMenuPrefab() const;

constexpr ::UnityW<::VROSC::StartMenu>& __cordl_internal_get__startMenuPrefab() ;

constexpr ::VROSC::StartState* const& __cordl_internal_get__startState() const;

constexpr ::VROSC::StartState*& __cordl_internal_get__startState() ;

constexpr ::VROSC::StateMachine* const& __cordl_internal_get__stateMachine() const;

constexpr ::VROSC::StateMachine*& __cordl_internal_get__stateMachine() ;

constexpr ::VROSC::UISchemeController* const& __cordl_internal_get__uiSchemeController() const;

constexpr ::VROSC::UISchemeController*& __cordl_internal_get__uiSchemeController() ;

constexpr void __cordl_internal_set__IsPaused_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__dashboardPrefab(::UnityW<::VROSC::Dashboard>  value) ;

constexpr void __cordl_internal_set__failedEntitlementState(::VROSC::FailedEntitlementState*  value) ;

constexpr void __cordl_internal_set__failedStartMenuPrefab(::UnityW<::VROSC::FailedStartMenu>  value) ;

constexpr void __cordl_internal_set__fullScreenFxController(::UnityW<::VROSC::FullScreenFxController>  value) ;

constexpr void __cordl_internal_set__introVideoPlayer(::UnityW<::VROSC::IntroVideoPlayer>  value) ;

constexpr void __cordl_internal_set__keyboardPrefab(::UnityW<::GlobalNamespace::PunchKeyboard>  value) ;

constexpr void __cordl_internal_set__mainState(::VROSC::MainState*  value) ;

constexpr void __cordl_internal_set__microphoneDeviceManager(::UnityW<::VROSC::MicrophoneDeviceManager>  value) ;

constexpr void __cordl_internal_set__sessionsLibraryWindow(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__settingsDataDefaults(::UnityW<::VROSC::SettingsDataDefaults>  value) ;

constexpr void __cordl_internal_set__startMenuMusic(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__startMenuPrefab(::UnityW<::VROSC::StartMenu>  value) ;

constexpr void __cordl_internal_set__startState(::VROSC::StartState*  value) ;

constexpr void __cordl_internal_set__stateMachine(::VROSC::StateMachine*  value) ;

constexpr void __cordl_internal_set__uiSchemeController(::VROSC::UISchemeController*  value) ;

/// @brief Method .ctor, addr 0x17c6f94, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<bool>* getStaticF_OnAppPaused() ;

static inline ::System::Action* getStaticF_OnStartCreating() ;

/// @brief Method get_FullScreenFxController, addr 0x17c5a24, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::FullScreenFxController> get_FullScreenFxController() ;

/// @brief Method get_IsFailedEntitlement, addr 0x17c5a64, size 0x24, virtual false, abstract: false, final false
inline bool get_IsFailedEntitlement() ;

/// @brief Method get_IsPaused, addr 0x17c5a2c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsPaused() ;

/// @brief Method get_IsReady, addr 0x17c5a40, size 0x24, virtual false, abstract: false, final false
inline bool get_IsReady() ;

/// @brief Method get_SessionsLibraryWindow, addr 0x17c5a1c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_SessionsLibraryWindow() ;

static inline void setStaticF_OnAppPaused(::System::Action_1<bool>*  value) ;

static inline void setStaticF_OnStartCreating(::System::Action*  value) ;

/// @brief Method set_IsPaused, addr 0x17c5a34, size 0xc, virtual false, abstract: false, final false
inline void set_IsPaused(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AppController(AppController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppController(AppController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{277};

/// @brief Field _uiSchemeController, offset: 0x20, size: 0x8, def value: None
 ::VROSC::UISchemeController*  ____uiSchemeController;

/// @brief Field _settingsDataDefaults, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::SettingsDataDefaults>  ____settingsDataDefaults;

/// @brief Field _dashboardPrefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::Dashboard>  ____dashboardPrefab;

/// @brief Field _sessionsLibraryWindow, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____sessionsLibraryWindow;

/// @brief Field _keyboardPrefab, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PunchKeyboard>  ____keyboardPrefab;

/// @brief Field _startMenuPrefab, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::StartMenu>  ____startMenuPrefab;

/// @brief Field _failedStartMenuPrefab, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::FailedStartMenu>  ____failedStartMenuPrefab;

/// @brief Field _startMenuMusic, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____startMenuMusic;

/// @brief Field _fullScreenFxController, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::FullScreenFxController>  ____fullScreenFxController;

/// @brief Field _microphoneDeviceManager, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::MicrophoneDeviceManager>  ____microphoneDeviceManager;

/// @brief Field _introVideoPlayer, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::VROSC::IntroVideoPlayer>  ____introVideoPlayer;

/// @brief Field _stateMachine, offset: 0x78, size: 0x8, def value: None
 ::VROSC::StateMachine*  ____stateMachine;

/// @brief Field _startState, offset: 0x80, size: 0x8, def value: None
 ::VROSC::StartState*  ____startState;

/// @brief Field _mainState, offset: 0x88, size: 0x8, def value: None
 ::VROSC::MainState*  ____mainState;

/// @brief Field _failedEntitlementState, offset: 0x90, size: 0x8, def value: None
 ::VROSC::FailedEntitlementState*  ____failedEntitlementState;

/// @brief Field <IsPaused>k__BackingField, offset: 0x98, size: 0x1, def value: None
 bool  ____IsPaused_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AppController, ____uiSchemeController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppController, ____settingsDataDefaults) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppController, ____dashboardPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppController, ____sessionsLibraryWindow) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppController, ____keyboardPrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppController, ____startMenuPrefab) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppController, ____failedStartMenuPrefab) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppController, ____startMenuMusic) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppController, ____fullScreenFxController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppController, ____microphoneDeviceManager) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppController, ____introVideoPlayer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppController, ____stateMachine) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppController, ____startState) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppController, ____mainState) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppController, ____failedEntitlementState) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::AppController, ____IsPaused_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AppController, 0xa0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AppController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AppController*, "VROSC", "AppController");
NEED_NO_BOX(::VROSC::AppController___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AppController___c*, "VROSC", "AppController/<>c");
