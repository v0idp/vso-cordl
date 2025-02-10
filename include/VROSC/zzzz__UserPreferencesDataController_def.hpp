#pragma once
// IWYU pragma private; include "VROSC/UserPreferencesDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__BaseDataController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UserPreferencesDataController)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
struct Metronome_Medium;
}
namespace VROSC {
struct Metronome_Mode;
}
namespace VROSC {
class SettingsDataDefaults;
}
namespace VROSC {
class TransformDataController;
}
namespace VROSC {
class UserPreferencesDataController___c__DisplayClass8_0;
}
namespace VROSC {
class UserPreferencesDataController___c__DisplayClass93_0;
}
namespace VROSC {
class UserPreferencesDataController___c__DisplayClass95_0;
}
namespace VROSC {
class UserPreferencesDataModel;
}
// Forward declare root types
namespace VROSC {
class UserPreferencesDataController;
}
namespace VROSC {
class UserPreferencesDataController___c__DisplayClass8_0;
}
namespace VROSC {
class UserPreferencesDataController___c__DisplayClass93_0;
}
namespace VROSC {
class UserPreferencesDataController___c__DisplayClass95_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UserPreferencesDataController);
MARK_REF_PTR_T(::VROSC::UserPreferencesDataController___c__DisplayClass8_0);
MARK_REF_PTR_T(::VROSC::UserPreferencesDataController___c__DisplayClass93_0);
MARK_REF_PTR_T(::VROSC::UserPreferencesDataController___c__DisplayClass95_0);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserPreferencesDataController/<>c__DisplayClass8_0
class CORDL_TYPE UserPreferencesDataController___c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::UserPreferencesDataController*  __4__this;

/// @brief Field onFailure, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

static inline ::VROSC::UserPreferencesDataController___c__DisplayClass8_0* New_ctor() ;

/// @brief Method <LoadLocalData>b__0, addr 0x187b134, size 0x114, virtual false, abstract: false, final false
inline void _LoadLocalData_b__0(::StringW  data) ;

constexpr ::VROSC::UserPreferencesDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::UserPreferencesDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::VROSC::UserPreferencesDataController*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x1879c8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserPreferencesDataController___c__DisplayClass8_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserPreferencesDataController___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserPreferencesDataController___c__DisplayClass8_0(UserPreferencesDataController___c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserPreferencesDataController___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserPreferencesDataController___c__DisplayClass8_0(UserPreferencesDataController___c__DisplayClass8_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{563};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::UserPreferencesDataController*  _____4__this;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

/// @brief Field onFailure, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserPreferencesDataController___c__DisplayClass8_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataController___c__DisplayClass8_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataController___c__DisplayClass8_0, ___onFailure) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserPreferencesDataController___c__DisplayClass8_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserPreferencesDataController/<>c__DisplayClass93_0
class CORDL_TYPE UserPreferencesDataController___c__DisplayClass93_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::UserPreferencesDataController*  __4__this;

/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

static inline ::VROSC::UserPreferencesDataController___c__DisplayClass93_0* New_ctor() ;

/// @brief Method <LoadCloudData>b__0, addr 0x187b248, size 0xed0, virtual false, abstract: false, final false
inline void _LoadCloudData_b__0(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data) ;

constexpr ::VROSC::UserPreferencesDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::UserPreferencesDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::VROSC::UserPreferencesDataController*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x187a1d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserPreferencesDataController___c__DisplayClass93_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserPreferencesDataController___c__DisplayClass93_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserPreferencesDataController___c__DisplayClass93_0(UserPreferencesDataController___c__DisplayClass93_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserPreferencesDataController___c__DisplayClass93_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserPreferencesDataController___c__DisplayClass93_0(UserPreferencesDataController___c__DisplayClass93_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{564};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::UserPreferencesDataController*  _____4__this;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserPreferencesDataController___c__DisplayClass93_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataController___c__DisplayClass93_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserPreferencesDataController___c__DisplayClass93_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserPreferencesDataController/<>c__DisplayClass95_0
class CORDL_TYPE UserPreferencesDataController___c__DisplayClass95_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::UserPreferencesDataController*  __4__this;

/// @brief Field onSuccess, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

static inline ::VROSC::UserPreferencesDataController___c__DisplayClass95_0* New_ctor() ;

/// @brief Method <SaveAllPreferences>b__0, addr 0x187c118, size 0x40, virtual false, abstract: false, final false
inline void _SaveAllPreferences_b__0() ;

constexpr ::VROSC::UserPreferencesDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::UserPreferencesDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set___4__this(::VROSC::UserPreferencesDataController*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x187a390, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserPreferencesDataController___c__DisplayClass95_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserPreferencesDataController___c__DisplayClass95_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserPreferencesDataController___c__DisplayClass95_0(UserPreferencesDataController___c__DisplayClass95_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserPreferencesDataController___c__DisplayClass95_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserPreferencesDataController___c__DisplayClass95_0(UserPreferencesDataController___c__DisplayClass95_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{565};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::UserPreferencesDataController*  _____4__this;

/// @brief Field onSuccess, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserPreferencesDataController___c__DisplayClass95_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataController___c__DisplayClass95_0, ___onSuccess) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserPreferencesDataController___c__DisplayClass95_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.BaseDataController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserPreferencesDataController
class CORDL_TYPE UserPreferencesDataController : public ::VROSC::BaseDataController {
public:
// Declarations
using __c__DisplayClass8_0 = ::VROSC::UserPreferencesDataController___c__DisplayClass8_0;

using __c__DisplayClass93_0 = ::VROSC::UserPreferencesDataController___c__DisplayClass93_0;

using __c__DisplayClass95_0 = ::VROSC::UserPreferencesDataController___c__DisplayClass95_0;

 __declspec(property(get=get_AllowExternalKeyboard, put=set_AllowExternalKeyboard)) bool  AllowExternalKeyboard;

 __declspec(property(get=get_AutoPlayPreviews, put=set_AutoPlayPreviews)) bool  AutoPlayPreviews;

 __declspec(property(get=get_DataModel)) ::VROSC::UserPreferencesDataModel*  DataModel;

 __declspec(property(get=get_DisableHaptics, put=set_DisableHaptics)) bool  DisableHaptics;

 __declspec(property(get=get_GlobalVolume, put=set_GlobalVolume)) float_t  GlobalVolume;

 __declspec(property(get=get_GrabToActivateMicrophone, put=set_GrabToActivateMicrophone)) bool  GrabToActivateMicrophone;

 __declspec(property(get=get_KeyboardPlaysClickSound, put=set_KeyboardPlaysClickSound)) bool  KeyboardPlaysClickSound;

 __declspec(property(get=get_LaserAutoDimWhenHoldingMallets, put=set_LaserAutoDimWhenHoldingMallets)) bool  LaserAutoDimWhenHoldingMallets;

 __declspec(property(get=get_LinkLatency, put=set_LinkLatency)) float_t  LinkLatency;

 __declspec(property(get=get_MalletAngle, put=set_MalletAngle)) float_t  MalletAngle;

 __declspec(property(get=get_MalletLength, put=set_MalletLength)) float_t  MalletLength;

 __declspec(property(get=get_MetronomeMedium, put=set_MetronomeMedium)) ::VROSC::Metronome_Medium  MetronomeMedium;

 __declspec(property(get=get_MetronomeMode, put=set_MetronomeMode)) ::VROSC::Metronome_Mode  MetronomeMode;

 __declspec(property(get=get_MoveableCameraTransformData)) ::VROSC::TransformDataController*  MoveableCameraTransformData;

 __declspec(property(get=get_Overdub, put=set_Overdub)) bool  Overdub;

 __declspec(property(get=get_OverrideEnvironmentSettingsOnLoad, put=set_OverrideEnvironmentSettingsOnLoad)) bool  OverrideEnvironmentSettingsOnLoad;

 __declspec(property(get=get_PlayAudioWhenUnfocused, put=set_PlayAudioWhenUnfocused)) bool  PlayAudioWhenUnfocused;

 __declspec(property(get=get_PreviewDrums, put=set_PreviewDrums)) bool  PreviewDrums;

 __declspec(property(get=get_PreviewDrumsVolume, put=set_PreviewDrumsVolume)) float_t  PreviewDrumsVolume;

 __declspec(property(get=get_PreviewMicrophoneReverb, put=set_PreviewMicrophoneReverb)) bool  PreviewMicrophoneReverb;

 __declspec(property(get=get_PreviewsVolume, put=set_PreviewsVolume)) float_t  PreviewsVolume;

 __declspec(property(get=get_SelectedEnvironment, put=set_SelectedEnvironment)) ::StringW  SelectedEnvironment;

 __declspec(property(get=get_SelectedSpectatorCamera, put=set_SelectedSpectatorCamera)) int32_t  SelectedSpectatorCamera;

 __declspec(property(get=get_SetRecordingLengthToFirstLoopLength, put=set_SetRecordingLengthToFirstLoopLength)) bool  SetRecordingLengthToFirstLoopLength;

 __declspec(property(get=get_SpectatorHideBackground, put=set_SpectatorHideBackground)) bool  SpectatorHideBackground;

 __declspec(property(get=get_TemplateSessionId, put=set_TemplateSessionId)) ::StringW  TemplateSessionId;

 __declspec(property(get=get_UseClassicControls, put=set_UseClassicControls)) bool  UseClassicControls;

 __declspec(property(get=get_UsePointAndClickForKeyboard, put=set_UsePointAndClickForKeyboard)) bool  UsePointAndClickForKeyboard;

 __declspec(property(get=get_UseTouchForKeyboard, put=set_UseTouchForKeyboard)) bool  UseTouchForKeyboard;

 __declspec(property(get=get_VideoPlayerVolume, put=set_VideoPlayerVolume)) float_t  VideoPlayerVolume;

/// @brief Field _moveableCameraTransformData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__moveableCameraTransformData, put=__cordl_internal_set__moveableCameraTransformData)) ::VROSC::TransformDataController*  _moveableCameraTransformData;

/// @brief Field _settingsDefaults, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsDefaults, put=__cordl_internal_set__settingsDefaults)) ::UnityW<::VROSC::SettingsDataDefaults>  _settingsDefaults;

/// @brief Method ApplyDefaults, addr 0x18794b4, size 0x1ec, virtual false, abstract: false, final false
inline void ApplyDefaults(::VROSC::SettingsDataDefaults*  settingsDefaults) ;

/// @brief Method LoadCloudData, addr 0x187a0b4, size 0x11c, virtual true, abstract: false, final false
inline void LoadCloudData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method LoadLocalData, addr 0x1879b80, size 0x10c, virtual true, abstract: false, final false
inline void LoadLocalData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

static inline ::VROSC::UserPreferencesDataController* New_ctor() ;

/// @brief Method SaveAllPreferences, addr 0x187a1dc, size 0x1b4, virtual false, abstract: false, final false
inline void SaveAllPreferences(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SaveCloudData, addr 0x187a1d8, size 0x4, virtual true, abstract: false, final false
inline void SaveCloudData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SaveGeneralPreferences, addr 0x187a398, size 0x340, virtual false, abstract: false, final false
inline void SaveGeneralPreferences(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SaveKeyboardPreferences, addr 0x187ad4c, size 0x240, virtual false, abstract: false, final false
inline void SaveKeyboardPreferences(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SaveLoopStationPreferences, addr 0x187af8c, size 0x1a8, virtual false, abstract: false, final false
inline void SaveLoopStationPreferences(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SaveMalletsPreferences, addr 0x187a934, size 0x20c, virtual false, abstract: false, final false
inline void SaveMalletsPreferences(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SavePreviewsPreferences, addr 0x187a6d8, size 0x25c, virtual false, abstract: false, final false
inline void SavePreviewsPreferences(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SaveSocialPreferences, addr 0x187ab40, size 0x20c, virtual false, abstract: false, final false
inline void SaveSocialPreferences(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

constexpr ::VROSC::TransformDataController* const& __cordl_internal_get__moveableCameraTransformData() const;

constexpr ::VROSC::TransformDataController*& __cordl_internal_get__moveableCameraTransformData() ;

constexpr ::UnityW<::VROSC::SettingsDataDefaults> const& __cordl_internal_get__settingsDefaults() const;

constexpr ::UnityW<::VROSC::SettingsDataDefaults>& __cordl_internal_get__settingsDefaults() ;

constexpr void __cordl_internal_set__moveableCameraTransformData(::VROSC::TransformDataController*  value) ;

constexpr void __cordl_internal_set__settingsDefaults(::UnityW<::VROSC::SettingsDataDefaults>  value) ;

/// @brief Method .ctor, addr 0x18792f4, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AllowExternalKeyboard, addr 0x1879e54, size 0x1c, virtual false, abstract: false, final false
inline bool get_AllowExternalKeyboard() ;

/// @brief Method get_AutoPlayPreviews, addr 0x1879de4, size 0x1c, virtual false, abstract: false, final false
inline bool get_AutoPlayPreviews() ;

/// @brief Method get_DataModel, addr 0x1879274, size 0x78, virtual false, abstract: false, final false
inline ::VROSC::UserPreferencesDataModel* get_DataModel() ;

/// @brief Method get_DisableHaptics, addr 0x1879d20, size 0x1c, virtual false, abstract: false, final false
inline bool get_DisableHaptics() ;

/// @brief Method get_GlobalVolume, addr 0x1879d74, size 0x1c, virtual false, abstract: false, final false
inline float_t get_GlobalVolume() ;

/// @brief Method get_GrabToActivateMicrophone, addr 0x1879f34, size 0x1c, virtual false, abstract: false, final false
inline bool get_GrabToActivateMicrophone() ;

/// @brief Method get_KeyboardPlaysClickSound, addr 0x1879ea8, size 0x1c, virtual false, abstract: false, final false
inline bool get_KeyboardPlaysClickSound() ;

/// @brief Method get_LaserAutoDimWhenHoldingMallets, addr 0x1879d04, size 0x1c, virtual false, abstract: false, final false
inline bool get_LaserAutoDimWhenHoldingMallets() ;

/// @brief Method get_LinkLatency, addr 0x187a064, size 0x1c, virtual false, abstract: false, final false
inline float_t get_LinkLatency() ;

/// @brief Method get_MalletAngle, addr 0x1879ccc, size 0x1c, virtual false, abstract: false, final false
inline float_t get_MalletAngle() ;

/// @brief Method get_MalletLength, addr 0x1879ce8, size 0x1c, virtual false, abstract: false, final false
inline float_t get_MalletLength() ;

/// @brief Method get_MetronomeMedium, addr 0x1879f18, size 0x1c, virtual false, abstract: false, final false
inline ::VROSC::Metronome_Medium get_MetronomeMedium() ;

/// @brief Method get_MetronomeMode, addr 0x1879efc, size 0x1c, virtual false, abstract: false, final false
inline ::VROSC::Metronome_Mode get_MetronomeMode() ;

/// @brief Method get_MoveableCameraTransformData, addr 0x18792ec, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::TransformDataController* get_MoveableCameraTransformData() ;

/// @brief Method get_Overdub, addr 0x1879ec4, size 0x1c, virtual false, abstract: false, final false
inline bool get_Overdub() ;

/// @brief Method get_OverrideEnvironmentSettingsOnLoad, addr 0x1879ff8, size 0x1c, virtual false, abstract: false, final false
inline bool get_OverrideEnvironmentSettingsOnLoad() ;

/// @brief Method get_PlayAudioWhenUnfocused, addr 0x1879d90, size 0x1c, virtual false, abstract: false, final false
inline bool get_PlayAudioWhenUnfocused() ;

/// @brief Method get_PreviewDrums, addr 0x1879e1c, size 0x1c, virtual false, abstract: false, final false
inline bool get_PreviewDrums() ;

/// @brief Method get_PreviewDrumsVolume, addr 0x1879e38, size 0x1c, virtual false, abstract: false, final false
inline float_t get_PreviewDrumsVolume() ;

/// @brief Method get_PreviewMicrophoneReverb, addr 0x1879f88, size 0x1c, virtual false, abstract: false, final false
inline bool get_PreviewMicrophoneReverb() ;

/// @brief Method get_PreviewsVolume, addr 0x1879e00, size 0x1c, virtual false, abstract: false, final false
inline float_t get_PreviewsVolume() ;

/// @brief Method get_SelectedEnvironment, addr 0x1879fdc, size 0x1c, virtual false, abstract: false, final false
inline ::StringW get_SelectedEnvironment() ;

/// @brief Method get_SelectedSpectatorCamera, addr 0x1879c94, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_SelectedSpectatorCamera() ;

/// @brief Method get_SetRecordingLengthToFirstLoopLength, addr 0x1879ee0, size 0x1c, virtual false, abstract: false, final false
inline bool get_SetRecordingLengthToFirstLoopLength() ;

/// @brief Method get_SpectatorHideBackground, addr 0x1879cb0, size 0x1c, virtual false, abstract: false, final false
inline bool get_SpectatorHideBackground() ;

/// @brief Method get_TemplateSessionId, addr 0x187a014, size 0x1c, virtual false, abstract: false, final false
inline ::StringW get_TemplateSessionId() ;

/// @brief Method get_UseClassicControls, addr 0x1879dac, size 0x1c, virtual false, abstract: false, final false
inline bool get_UseClassicControls() ;

/// @brief Method get_UsePointAndClickForKeyboard, addr 0x1879e8c, size 0x1c, virtual false, abstract: false, final false
inline bool get_UsePointAndClickForKeyboard() ;

/// @brief Method get_UseTouchForKeyboard, addr 0x1879e70, size 0x1c, virtual false, abstract: false, final false
inline bool get_UseTouchForKeyboard() ;

/// @brief Method get_VideoPlayerVolume, addr 0x1879dc8, size 0x1c, virtual false, abstract: false, final false
inline float_t get_VideoPlayerVolume() ;

/// @brief Method set_AllowExternalKeyboard, addr 0x187995c, size 0x38, virtual false, abstract: false, final false
inline void set_AllowExternalKeyboard(bool  value) ;

/// @brief Method set_AutoPlayPreviews, addr 0x1879884, size 0x38, virtual false, abstract: false, final false
inline void set_AutoPlayPreviews(bool  value) ;

/// @brief Method set_DisableHaptics, addr 0x1879d3c, size 0x38, virtual false, abstract: false, final false
inline void set_DisableHaptics(bool  value) ;

/// @brief Method set_GlobalVolume, addr 0x18797ac, size 0x34, virtual false, abstract: false, final false
inline void set_GlobalVolume(float_t  value) ;

/// @brief Method set_GrabToActivateMicrophone, addr 0x1879f50, size 0x38, virtual false, abstract: false, final false
inline void set_GrabToActivateMicrophone(bool  value) ;

/// @brief Method set_KeyboardPlaysClickSound, addr 0x1879a04, size 0x38, virtual false, abstract: false, final false
inline void set_KeyboardPlaysClickSound(bool  value) ;

/// @brief Method set_LaserAutoDimWhenHoldingMallets, addr 0x1879774, size 0x38, virtual false, abstract: false, final false
inline void set_LaserAutoDimWhenHoldingMallets(bool  value) ;

/// @brief Method set_LinkLatency, addr 0x187a080, size 0x34, virtual false, abstract: false, final false
inline void set_LinkLatency(float_t  value) ;

/// @brief Method set_MalletAngle, addr 0x187970c, size 0x34, virtual false, abstract: false, final false
inline void set_MalletAngle(float_t  value) ;

/// @brief Method set_MalletLength, addr 0x1879740, size 0x34, virtual false, abstract: false, final false
inline void set_MalletLength(float_t  value) ;

/// @brief Method set_MetronomeMedium, addr 0x1879b4c, size 0x34, virtual false, abstract: false, final false
inline void set_MetronomeMedium(::VROSC::Metronome_Medium  value) ;

/// @brief Method set_MetronomeMode, addr 0x1879b18, size 0x34, virtual false, abstract: false, final false
inline void set_MetronomeMode(::VROSC::Metronome_Mode  value) ;

/// @brief Method set_Overdub, addr 0x1879aa8, size 0x38, virtual false, abstract: false, final false
inline void set_Overdub(bool  value) ;

/// @brief Method set_OverrideEnvironmentSettingsOnLoad, addr 0x1879a70, size 0x38, virtual false, abstract: false, final false
inline void set_OverrideEnvironmentSettingsOnLoad(bool  value) ;

/// @brief Method set_PlayAudioWhenUnfocused, addr 0x18797e0, size 0x38, virtual false, abstract: false, final false
inline void set_PlayAudioWhenUnfocused(bool  value) ;

/// @brief Method set_PreviewDrums, addr 0x18798f0, size 0x38, virtual false, abstract: false, final false
inline void set_PreviewDrums(bool  value) ;

/// @brief Method set_PreviewDrumsVolume, addr 0x1879928, size 0x34, virtual false, abstract: false, final false
inline void set_PreviewDrumsVolume(float_t  value) ;

/// @brief Method set_PreviewMicrophoneReverb, addr 0x1879fa4, size 0x38, virtual false, abstract: false, final false
inline void set_PreviewMicrophoneReverb(bool  value) ;

/// @brief Method set_PreviewsVolume, addr 0x18798bc, size 0x34, virtual false, abstract: false, final false
inline void set_PreviewsVolume(float_t  value) ;

/// @brief Method set_SelectedEnvironment, addr 0x1879a3c, size 0x34, virtual false, abstract: false, final false
inline void set_SelectedEnvironment(::StringW  value) ;

/// @brief Method set_SelectedSpectatorCamera, addr 0x18796a0, size 0x34, virtual false, abstract: false, final false
inline void set_SelectedSpectatorCamera(int32_t  value) ;

/// @brief Method set_SetRecordingLengthToFirstLoopLength, addr 0x1879ae0, size 0x38, virtual false, abstract: false, final false
inline void set_SetRecordingLengthToFirstLoopLength(bool  value) ;

/// @brief Method set_SpectatorHideBackground, addr 0x18796d4, size 0x38, virtual false, abstract: false, final false
inline void set_SpectatorHideBackground(bool  value) ;

/// @brief Method set_TemplateSessionId, addr 0x187a030, size 0x34, virtual false, abstract: false, final false
inline void set_TemplateSessionId(::StringW  value) ;

/// @brief Method set_UseClassicControls, addr 0x1879818, size 0x38, virtual false, abstract: false, final false
inline void set_UseClassicControls(bool  value) ;

/// @brief Method set_UsePointAndClickForKeyboard, addr 0x18799cc, size 0x38, virtual false, abstract: false, final false
inline void set_UsePointAndClickForKeyboard(bool  value) ;

/// @brief Method set_UseTouchForKeyboard, addr 0x1879994, size 0x38, virtual false, abstract: false, final false
inline void set_UseTouchForKeyboard(bool  value) ;

/// @brief Method set_VideoPlayerVolume, addr 0x1879850, size 0x34, virtual false, abstract: false, final false
inline void set_VideoPlayerVolume(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserPreferencesDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserPreferencesDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserPreferencesDataController(UserPreferencesDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserPreferencesDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserPreferencesDataController(UserPreferencesDataController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{566};

/// @brief Field _settingsDefaults, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::SettingsDataDefaults>  ____settingsDefaults;

/// @brief Field _moveableCameraTransformData, offset: 0x30, size: 0x8, def value: None
 ::VROSC::TransformDataController*  ____moveableCameraTransformData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserPreferencesDataController, ____settingsDefaults) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataController, ____moveableCameraTransformData) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserPreferencesDataController, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UserPreferencesDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserPreferencesDataController*, "VROSC", "UserPreferencesDataController");
NEED_NO_BOX(::VROSC::UserPreferencesDataController___c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserPreferencesDataController___c__DisplayClass8_0*, "VROSC", "UserPreferencesDataController/<>c__DisplayClass8_0");
NEED_NO_BOX(::VROSC::UserPreferencesDataController___c__DisplayClass93_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserPreferencesDataController___c__DisplayClass93_0*, "VROSC", "UserPreferencesDataController/<>c__DisplayClass93_0");
NEED_NO_BOX(::VROSC::UserPreferencesDataController___c__DisplayClass95_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserPreferencesDataController___c__DisplayClass95_0*, "VROSC", "UserPreferencesDataController/<>c__DisplayClass95_0");
