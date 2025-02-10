#pragma once
// IWYU pragma private; include "VROSC/Core.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__Core_def.hpp"
#include "GlobalNamespace/zzzz__PunchKeyboard_def.hpp"
#include "LIV/SDK/Unity/zzzz__LIV_def.hpp"
#include "VROSC/zzzz__AppController_def.hpp"
#include "VROSC/zzzz__AppValidityChecker_def.hpp"
#include "VROSC/zzzz__AudioMixManager_def.hpp"
#include "VROSC/zzzz__AudioRecorder_def.hpp"
#include "VROSC/zzzz__AuthenticationManager_def.hpp"
#include "VROSC/zzzz__BeatCounter_def.hpp"
#include "VROSC/zzzz__Dashboard_def.hpp"
#include "VROSC/zzzz__EnvironmentController_def.hpp"
#include "VROSC/zzzz__GarbageManager_def.hpp"
#include "VROSC/zzzz__HapticManager_def.hpp"
#include "VROSC/zzzz__InputManager_def.hpp"
#include "VROSC/zzzz__InstrumentHub_def.hpp"
#include "VROSC/zzzz__MalletManager_def.hpp"
#include "VROSC/zzzz__NoteManager_def.hpp"
#include "VROSC/zzzz__PlatformSelector_def.hpp"
#include "VROSC/zzzz__RemoteConfigManager_def.hpp"
#include "VROSC/zzzz__SaveLoadManager_def.hpp"
#include "VROSC/zzzz__SpatialAnchorsManager_def.hpp"
#include "VROSC/zzzz__SpectatorCameraController_def.hpp"
#include "VROSC/zzzz__StaticData_def.hpp"
#include "VROSC/zzzz__TutorialManager_def.hpp"
#include "VROSC/zzzz__UserDataControllers_def.hpp"
#include "VROSC/zzzz__VRPlayer_def.hpp"
//  Writing Method size for method: ::VROSC::Core.get_VRPlayer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::VRPlayer> (*)()>(&::VROSC::Core::get_VRPlayer)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x183c318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get(),
                        "get_VRPlayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Core.FetchReferences
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::VROSC::Core::FetchReferences)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x183c36c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get(),
                        "FetchReferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void VROSC::Core::setStaticF_AppController(::UnityW<::VROSC::AppController>  value)  {
::cordl_internals::setStaticField<::UnityW<::VROSC::AppController>, "AppController", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::UnityW<::VROSC::AppController>>(value));
}
inline ::UnityW<::VROSC::AppController> VROSC::Core::getStaticF_AppController()  {
return ::cordl_internals::getStaticField<::UnityW<::VROSC::AppController>, "AppController", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_InputManager(::UnityW<::VROSC::InputManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::VROSC::InputManager>, "InputManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::UnityW<::VROSC::InputManager>>(value));
}
inline ::UnityW<::VROSC::InputManager> VROSC::Core::getStaticF_InputManager()  {
return ::cordl_internals::getStaticField<::UnityW<::VROSC::InputManager>, "InputManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_PlatformSelector(::UnityW<::VROSC::PlatformSelector>  value)  {
::cordl_internals::setStaticField<::UnityW<::VROSC::PlatformSelector>, "PlatformSelector", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::UnityW<::VROSC::PlatformSelector>>(value));
}
inline ::UnityW<::VROSC::PlatformSelector> VROSC::Core::getStaticF_PlatformSelector()  {
return ::cordl_internals::getStaticField<::UnityW<::VROSC::PlatformSelector>, "PlatformSelector", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_NoteManager(::UnityW<::VROSC::NoteManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::VROSC::NoteManager>, "NoteManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::UnityW<::VROSC::NoteManager>>(value));
}
inline ::UnityW<::VROSC::NoteManager> VROSC::Core::getStaticF_NoteManager()  {
return ::cordl_internals::getStaticField<::UnityW<::VROSC::NoteManager>, "NoteManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_AudioMixManager(::UnityW<::VROSC::AudioMixManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::VROSC::AudioMixManager>, "AudioMixManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::UnityW<::VROSC::AudioMixManager>>(value));
}
inline ::UnityW<::VROSC::AudioMixManager> VROSC::Core::getStaticF_AudioMixManager()  {
return ::cordl_internals::getStaticField<::UnityW<::VROSC::AudioMixManager>, "AudioMixManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_MalletManager(::UnityW<::VROSC::MalletManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::VROSC::MalletManager>, "MalletManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::UnityW<::VROSC::MalletManager>>(value));
}
inline ::UnityW<::VROSC::MalletManager> VROSC::Core::getStaticF_MalletManager()  {
return ::cordl_internals::getStaticField<::UnityW<::VROSC::MalletManager>, "MalletManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_InstrumentHub(::UnityW<::VROSC::InstrumentHub>  value)  {
::cordl_internals::setStaticField<::UnityW<::VROSC::InstrumentHub>, "InstrumentHub", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::UnityW<::VROSC::InstrumentHub>>(value));
}
inline ::UnityW<::VROSC::InstrumentHub> VROSC::Core::getStaticF_InstrumentHub()  {
return ::cordl_internals::getStaticField<::UnityW<::VROSC::InstrumentHub>, "InstrumentHub", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_HapticManager(::UnityW<::VROSC::HapticManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::VROSC::HapticManager>, "HapticManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::UnityW<::VROSC::HapticManager>>(value));
}
inline ::UnityW<::VROSC::HapticManager> VROSC::Core::getStaticF_HapticManager()  {
return ::cordl_internals::getStaticField<::UnityW<::VROSC::HapticManager>, "HapticManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_SpectatorCameraController(::UnityW<::VROSC::SpectatorCameraController>  value)  {
::cordl_internals::setStaticField<::UnityW<::VROSC::SpectatorCameraController>, "SpectatorCameraController", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::UnityW<::VROSC::SpectatorCameraController>>(value));
}
inline ::UnityW<::VROSC::SpectatorCameraController> VROSC::Core::getStaticF_SpectatorCameraController()  {
return ::cordl_internals::getStaticField<::UnityW<::VROSC::SpectatorCameraController>, "SpectatorCameraController", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_BeatCounter(::UnityW<::VROSC::BeatCounter>  value)  {
::cordl_internals::setStaticField<::UnityW<::VROSC::BeatCounter>, "BeatCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::UnityW<::VROSC::BeatCounter>>(value));
}
inline ::UnityW<::VROSC::BeatCounter> VROSC::Core::getStaticF_BeatCounter()  {
return ::cordl_internals::getStaticField<::UnityW<::VROSC::BeatCounter>, "BeatCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_UserDataControllers(::VROSC::UserDataControllers*  value)  {
::cordl_internals::setStaticField<::VROSC::UserDataControllers*, "UserDataControllers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::VROSC::UserDataControllers*>(value));
}
inline ::VROSC::UserDataControllers* VROSC::Core::getStaticF_UserDataControllers()  {
return ::cordl_internals::getStaticField<::VROSC::UserDataControllers*, "UserDataControllers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_EnvironmentController(::UnityW<::VROSC::EnvironmentController>  value)  {
::cordl_internals::setStaticField<::UnityW<::VROSC::EnvironmentController>, "EnvironmentController", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::UnityW<::VROSC::EnvironmentController>>(value));
}
inline ::UnityW<::VROSC::EnvironmentController> VROSC::Core::getStaticF_EnvironmentController()  {
return ::cordl_internals::getStaticField<::UnityW<::VROSC::EnvironmentController>, "EnvironmentController", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_SaveLoadManager(::UnityW<::VROSC::SaveLoadManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::VROSC::SaveLoadManager>, "SaveLoadManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::UnityW<::VROSC::SaveLoadManager>>(value));
}
inline ::UnityW<::VROSC::SaveLoadManager> VROSC::Core::getStaticF_SaveLoadManager()  {
return ::cordl_internals::getStaticField<::UnityW<::VROSC::SaveLoadManager>, "SaveLoadManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_AuthenticationManager(::UnityW<::VROSC::AuthenticationManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::VROSC::AuthenticationManager>, "AuthenticationManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::UnityW<::VROSC::AuthenticationManager>>(value));
}
inline ::UnityW<::VROSC::AuthenticationManager> VROSC::Core::getStaticF_AuthenticationManager()  {
return ::cordl_internals::getStaticField<::UnityW<::VROSC::AuthenticationManager>, "AuthenticationManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_AudioRecorder(::UnityW<::VROSC::AudioRecorder>  value)  {
::cordl_internals::setStaticField<::UnityW<::VROSC::AudioRecorder>, "AudioRecorder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::UnityW<::VROSC::AudioRecorder>>(value));
}
inline ::UnityW<::VROSC::AudioRecorder> VROSC::Core::getStaticF_AudioRecorder()  {
return ::cordl_internals::getStaticField<::UnityW<::VROSC::AudioRecorder>, "AudioRecorder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_AppValidityChecker(::VROSC::AppValidityChecker*  value)  {
::cordl_internals::setStaticField<::VROSC::AppValidityChecker*, "AppValidityChecker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::VROSC::AppValidityChecker*>(value));
}
inline ::VROSC::AppValidityChecker* VROSC::Core::getStaticF_AppValidityChecker()  {
return ::cordl_internals::getStaticField<::VROSC::AppValidityChecker*, "AppValidityChecker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_LIV(::UnityW<::LIV::SDK::Unity::LIV>  value)  {
::cordl_internals::setStaticField<::UnityW<::LIV::SDK::Unity::LIV>, "LIV", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::UnityW<::LIV::SDK::Unity::LIV>>(value));
}
inline ::UnityW<::LIV::SDK::Unity::LIV> VROSC::Core::getStaticF_LIV()  {
return ::cordl_internals::getStaticField<::UnityW<::LIV::SDK::Unity::LIV>, "LIV", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_GarbageManager(::UnityW<::VROSC::GarbageManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::VROSC::GarbageManager>, "GarbageManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::UnityW<::VROSC::GarbageManager>>(value));
}
inline ::UnityW<::VROSC::GarbageManager> VROSC::Core::getStaticF_GarbageManager()  {
return ::cordl_internals::getStaticField<::UnityW<::VROSC::GarbageManager>, "GarbageManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_TutorialManager(::UnityW<::VROSC::TutorialManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::VROSC::TutorialManager>, "TutorialManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::UnityW<::VROSC::TutorialManager>>(value));
}
inline ::UnityW<::VROSC::TutorialManager> VROSC::Core::getStaticF_TutorialManager()  {
return ::cordl_internals::getStaticField<::UnityW<::VROSC::TutorialManager>, "TutorialManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_StaticData(::UnityW<::VROSC::StaticData>  value)  {
::cordl_internals::setStaticField<::UnityW<::VROSC::StaticData>, "StaticData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::UnityW<::VROSC::StaticData>>(value));
}
inline ::UnityW<::VROSC::StaticData> VROSC::Core::getStaticF_StaticData()  {
return ::cordl_internals::getStaticField<::UnityW<::VROSC::StaticData>, "StaticData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_RemoteConfigManager(::VROSC::RemoteConfigManager*  value)  {
::cordl_internals::setStaticField<::VROSC::RemoteConfigManager*, "RemoteConfigManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::VROSC::RemoteConfigManager*>(value));
}
inline ::VROSC::RemoteConfigManager* VROSC::Core::getStaticF_RemoteConfigManager()  {
return ::cordl_internals::getStaticField<::VROSC::RemoteConfigManager*, "RemoteConfigManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_SpatialAnchorsManager(::UnityW<::VROSC::SpatialAnchorsManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::VROSC::SpatialAnchorsManager>, "SpatialAnchorsManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::UnityW<::VROSC::SpatialAnchorsManager>>(value));
}
inline ::UnityW<::VROSC::SpatialAnchorsManager> VROSC::Core::getStaticF_SpatialAnchorsManager()  {
return ::cordl_internals::getStaticField<::UnityW<::VROSC::SpatialAnchorsManager>, "SpatialAnchorsManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_Dashboard(::UnityW<::VROSC::Dashboard>  value)  {
::cordl_internals::setStaticField<::UnityW<::VROSC::Dashboard>, "Dashboard", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::UnityW<::VROSC::Dashboard>>(value));
}
inline ::UnityW<::VROSC::Dashboard> VROSC::Core::getStaticF_Dashboard()  {
return ::cordl_internals::getStaticField<::UnityW<::VROSC::Dashboard>, "Dashboard", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline void VROSC::Core::setStaticF_Keyboard(::UnityW<::GlobalNamespace::PunchKeyboard>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::PunchKeyboard>, "Keyboard", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>(std::forward<::UnityW<::GlobalNamespace::PunchKeyboard>>(value));
}
inline ::UnityW<::GlobalNamespace::PunchKeyboard> VROSC::Core::getStaticF_Keyboard()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::PunchKeyboard>, "Keyboard", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get>();
}
inline ::UnityW<::VROSC::VRPlayer> VROSC::Core::get_VRPlayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get(),
                        "get_VRPlayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::VRPlayer>, false>(nullptr, ___internal_method);
}
inline void VROSC::Core::FetchReferences()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Core*>::get(),
                        "FetchReferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::VROSC::Core::Core()   {
}
