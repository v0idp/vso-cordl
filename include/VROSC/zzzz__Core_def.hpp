#pragma once
// IWYU pragma private; include "VROSC/Core.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Core)
namespace GlobalNamespace {
class PunchKeyboard;
}
namespace LIV::SDK::Unity {
class LIV;
}
namespace VROSC {
class AppController;
}
namespace VROSC {
class AppValidityChecker;
}
namespace VROSC {
class AudioMixManager;
}
namespace VROSC {
class AudioRecorder;
}
namespace VROSC {
class AuthenticationManager;
}
namespace VROSC {
class BeatCounter;
}
namespace VROSC {
class Dashboard;
}
namespace VROSC {
class EnvironmentController;
}
namespace VROSC {
class GarbageManager;
}
namespace VROSC {
class HapticManager;
}
namespace VROSC {
class InputManager;
}
namespace VROSC {
class InstrumentHub;
}
namespace VROSC {
class MalletManager;
}
namespace VROSC {
class NoteManager;
}
namespace VROSC {
class PlatformSelector;
}
namespace VROSC {
class RemoteConfigManager;
}
namespace VROSC {
class SaveLoadManager;
}
namespace VROSC {
class SpatialAnchorsManager;
}
namespace VROSC {
class SpectatorCameraController;
}
namespace VROSC {
class StaticData;
}
namespace VROSC {
class TutorialManager;
}
namespace VROSC {
class UserDataControllers;
}
namespace VROSC {
class VRPlayer;
}
// Forward declare root types
namespace VROSC {
class Core;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Core);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Core
class CORDL_TYPE Core : public ::System::Object {
public:
// Declarations
/// @brief Field AppController, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AppController, put=setStaticF_AppController)) ::UnityW<::VROSC::AppController>  AppController;

/// @brief Field AppValidityChecker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AppValidityChecker, put=setStaticF_AppValidityChecker)) ::VROSC::AppValidityChecker*  AppValidityChecker;

/// @brief Field AudioMixManager, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AudioMixManager, put=setStaticF_AudioMixManager)) ::UnityW<::VROSC::AudioMixManager>  AudioMixManager;

/// @brief Field AudioRecorder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AudioRecorder, put=setStaticF_AudioRecorder)) ::UnityW<::VROSC::AudioRecorder>  AudioRecorder;

/// @brief Field AuthenticationManager, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AuthenticationManager, put=setStaticF_AuthenticationManager)) ::UnityW<::VROSC::AuthenticationManager>  AuthenticationManager;

/// @brief Field BeatCounter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BeatCounter, put=setStaticF_BeatCounter)) ::UnityW<::VROSC::BeatCounter>  BeatCounter;

/// @brief Field Dashboard, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Dashboard, put=setStaticF_Dashboard)) ::UnityW<::VROSC::Dashboard>  Dashboard;

/// @brief Field EnvironmentController, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EnvironmentController, put=setStaticF_EnvironmentController)) ::UnityW<::VROSC::EnvironmentController>  EnvironmentController;

/// @brief Field GarbageManager, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GarbageManager, put=setStaticF_GarbageManager)) ::UnityW<::VROSC::GarbageManager>  GarbageManager;

/// @brief Field HapticManager, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HapticManager, put=setStaticF_HapticManager)) ::UnityW<::VROSC::HapticManager>  HapticManager;

/// @brief Field InputManager, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InputManager, put=setStaticF_InputManager)) ::UnityW<::VROSC::InputManager>  InputManager;

/// @brief Field InstrumentHub, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InstrumentHub, put=setStaticF_InstrumentHub)) ::UnityW<::VROSC::InstrumentHub>  InstrumentHub;

/// @brief Field Keyboard, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Keyboard, put=setStaticF_Keyboard)) ::UnityW<::GlobalNamespace::PunchKeyboard>  Keyboard;

/// @brief Field LIV, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LIV, put=setStaticF_LIV)) ::UnityW<::LIV::SDK::Unity::LIV>  LIV;

/// @brief Field MalletManager, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MalletManager, put=setStaticF_MalletManager)) ::UnityW<::VROSC::MalletManager>  MalletManager;

/// @brief Field NoteManager, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NoteManager, put=setStaticF_NoteManager)) ::UnityW<::VROSC::NoteManager>  NoteManager;

/// @brief Field PlatformSelector, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PlatformSelector, put=setStaticF_PlatformSelector)) ::UnityW<::VROSC::PlatformSelector>  PlatformSelector;

/// @brief Field RemoteConfigManager, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RemoteConfigManager, put=setStaticF_RemoteConfigManager)) ::VROSC::RemoteConfigManager*  RemoteConfigManager;

/// @brief Field SaveLoadManager, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SaveLoadManager, put=setStaticF_SaveLoadManager)) ::UnityW<::VROSC::SaveLoadManager>  SaveLoadManager;

/// @brief Field SpatialAnchorsManager, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SpatialAnchorsManager, put=setStaticF_SpatialAnchorsManager)) ::UnityW<::VROSC::SpatialAnchorsManager>  SpatialAnchorsManager;

/// @brief Field SpectatorCameraController, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SpectatorCameraController, put=setStaticF_SpectatorCameraController)) ::UnityW<::VROSC::SpectatorCameraController>  SpectatorCameraController;

/// @brief Field StaticData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_StaticData, put=setStaticF_StaticData)) ::UnityW<::VROSC::StaticData>  StaticData;

/// @brief Field TutorialManager, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TutorialManager, put=setStaticF_TutorialManager)) ::UnityW<::VROSC::TutorialManager>  TutorialManager;

/// @brief Field UserDataControllers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UserDataControllers, put=setStaticF_UserDataControllers)) ::VROSC::UserDataControllers*  UserDataControllers;

/// @brief Method FetchReferences, addr 0x183c36c, size 0x460, virtual false, abstract: false, final false
static inline void FetchReferences() ;

static inline ::UnityW<::VROSC::AppController> getStaticF_AppController() ;

static inline ::VROSC::AppValidityChecker* getStaticF_AppValidityChecker() ;

static inline ::UnityW<::VROSC::AudioMixManager> getStaticF_AudioMixManager() ;

static inline ::UnityW<::VROSC::AudioRecorder> getStaticF_AudioRecorder() ;

static inline ::UnityW<::VROSC::AuthenticationManager> getStaticF_AuthenticationManager() ;

static inline ::UnityW<::VROSC::BeatCounter> getStaticF_BeatCounter() ;

static inline ::UnityW<::VROSC::Dashboard> getStaticF_Dashboard() ;

static inline ::UnityW<::VROSC::EnvironmentController> getStaticF_EnvironmentController() ;

static inline ::UnityW<::VROSC::GarbageManager> getStaticF_GarbageManager() ;

static inline ::UnityW<::VROSC::HapticManager> getStaticF_HapticManager() ;

static inline ::UnityW<::VROSC::InputManager> getStaticF_InputManager() ;

static inline ::UnityW<::VROSC::InstrumentHub> getStaticF_InstrumentHub() ;

static inline ::UnityW<::GlobalNamespace::PunchKeyboard> getStaticF_Keyboard() ;

static inline ::UnityW<::LIV::SDK::Unity::LIV> getStaticF_LIV() ;

static inline ::UnityW<::VROSC::MalletManager> getStaticF_MalletManager() ;

static inline ::UnityW<::VROSC::NoteManager> getStaticF_NoteManager() ;

static inline ::UnityW<::VROSC::PlatformSelector> getStaticF_PlatformSelector() ;

static inline ::VROSC::RemoteConfigManager* getStaticF_RemoteConfigManager() ;

static inline ::UnityW<::VROSC::SaveLoadManager> getStaticF_SaveLoadManager() ;

static inline ::UnityW<::VROSC::SpatialAnchorsManager> getStaticF_SpatialAnchorsManager() ;

static inline ::UnityW<::VROSC::SpectatorCameraController> getStaticF_SpectatorCameraController() ;

static inline ::UnityW<::VROSC::StaticData> getStaticF_StaticData() ;

static inline ::UnityW<::VROSC::TutorialManager> getStaticF_TutorialManager() ;

static inline ::VROSC::UserDataControllers* getStaticF_UserDataControllers() ;

/// @brief Method get_VRPlayer, addr 0x183c318, size 0x54, virtual false, abstract: false, final false
static inline ::UnityW<::VROSC::VRPlayer> get_VRPlayer() ;

static inline void setStaticF_AppController(::UnityW<::VROSC::AppController>  value) ;

static inline void setStaticF_AppValidityChecker(::VROSC::AppValidityChecker*  value) ;

static inline void setStaticF_AudioMixManager(::UnityW<::VROSC::AudioMixManager>  value) ;

static inline void setStaticF_AudioRecorder(::UnityW<::VROSC::AudioRecorder>  value) ;

static inline void setStaticF_AuthenticationManager(::UnityW<::VROSC::AuthenticationManager>  value) ;

static inline void setStaticF_BeatCounter(::UnityW<::VROSC::BeatCounter>  value) ;

static inline void setStaticF_Dashboard(::UnityW<::VROSC::Dashboard>  value) ;

static inline void setStaticF_EnvironmentController(::UnityW<::VROSC::EnvironmentController>  value) ;

static inline void setStaticF_GarbageManager(::UnityW<::VROSC::GarbageManager>  value) ;

static inline void setStaticF_HapticManager(::UnityW<::VROSC::HapticManager>  value) ;

static inline void setStaticF_InputManager(::UnityW<::VROSC::InputManager>  value) ;

static inline void setStaticF_InstrumentHub(::UnityW<::VROSC::InstrumentHub>  value) ;

static inline void setStaticF_Keyboard(::UnityW<::GlobalNamespace::PunchKeyboard>  value) ;

static inline void setStaticF_LIV(::UnityW<::LIV::SDK::Unity::LIV>  value) ;

static inline void setStaticF_MalletManager(::UnityW<::VROSC::MalletManager>  value) ;

static inline void setStaticF_NoteManager(::UnityW<::VROSC::NoteManager>  value) ;

static inline void setStaticF_PlatformSelector(::UnityW<::VROSC::PlatformSelector>  value) ;

static inline void setStaticF_RemoteConfigManager(::VROSC::RemoteConfigManager*  value) ;

static inline void setStaticF_SaveLoadManager(::UnityW<::VROSC::SaveLoadManager>  value) ;

static inline void setStaticF_SpatialAnchorsManager(::UnityW<::VROSC::SpatialAnchorsManager>  value) ;

static inline void setStaticF_SpectatorCameraController(::UnityW<::VROSC::SpectatorCameraController>  value) ;

static inline void setStaticF_StaticData(::UnityW<::VROSC::StaticData>  value) ;

static inline void setStaticF_TutorialManager(::UnityW<::VROSC::TutorialManager>  value) ;

static inline void setStaticF_UserDataControllers(::VROSC::UserDataControllers*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Core() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Core", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Core(Core && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Core", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Core(Core const& ) = delete;

/// @brief Field HostingURL offset 0xffffffff size 0x8
static constexpr ::ConstString  HostingURL{u"https://virtuoso-c845b.web.app/"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{377};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::Core, 0x10>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::Core);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Core*, "VROSC", "Core");
