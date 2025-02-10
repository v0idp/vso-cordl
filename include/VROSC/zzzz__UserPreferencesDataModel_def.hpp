#pragma once
// IWYU pragma private; include "VROSC/UserPreferencesDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__BaseDataModel_def.hpp"
#include "VROSC/zzzz__Metronome_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UserPreferencesDataModel)
namespace VROSC {
class TransformDataModel;
}
// Forward declare root types
namespace VROSC {
class UserPreferencesDataModel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UserPreferencesDataModel);
// Dependencies VROSC.BaseDataModel, VROSC.Metronome::Medium, VROSC.Metronome::Mode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserPreferencesDataModel
class CORDL_TYPE UserPreferencesDataModel : public ::VROSC::BaseDataModel {
public:
// Declarations
/// @brief Field AllowExternalKeyboard, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_AllowExternalKeyboard, put=__cordl_internal_set_AllowExternalKeyboard)) bool  AllowExternalKeyboard;

/// @brief Field AutoPlayPreviews, offset 0x26, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoPlayPreviews, put=__cordl_internal_set_AutoPlayPreviews)) bool  AutoPlayPreviews;

/// @brief Field DefaultSessionId, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_DefaultSessionId, put=__cordl_internal_set_DefaultSessionId)) ::StringW  DefaultSessionId;

/// @brief Field DisableHaptics, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_DisableHaptics, put=__cordl_internal_set_DisableHaptics)) bool  DisableHaptics;

/// @brief Field GlobalVolume, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_GlobalVolume, put=__cordl_internal_set_GlobalVolume)) float_t  GlobalVolume;

/// @brief Field GrabToActivateMicrophone, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_GrabToActivateMicrophone, put=__cordl_internal_set_GrabToActivateMicrophone)) bool  GrabToActivateMicrophone;

 __declspec(property(get=get_Key)) ::StringW  Key;

/// @brief Field KeyboardPlaysClickSound, offset 0x5b, size 0x1 
 __declspec(property(get=__cordl_internal_get_KeyboardPlaysClickSound, put=__cordl_internal_set_KeyboardPlaysClickSound)) bool  KeyboardPlaysClickSound;

/// @brief Field LaserAutoDimWhenHoldingMallets, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_LaserAutoDimWhenHoldingMallets, put=__cordl_internal_set_LaserAutoDimWhenHoldingMallets)) bool  LaserAutoDimWhenHoldingMallets;

/// @brief Field LinkLatency, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_LinkLatency, put=__cordl_internal_set_LinkLatency)) float_t  LinkLatency;

/// @brief Field MalletAngle, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_MalletAngle, put=__cordl_internal_set_MalletAngle)) float_t  MalletAngle;

/// @brief Field MalletLength, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_MalletLength, put=__cordl_internal_set_MalletLength)) float_t  MalletLength;

/// @brief Field MetronomeMedium, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_MetronomeMedium, put=__cordl_internal_set_MetronomeMedium)) ::VROSC::Metronome_Medium  MetronomeMedium;

/// @brief Field MetronomeMode, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_MetronomeMode, put=__cordl_internal_set_MetronomeMode)) ::VROSC::Metronome_Mode  MetronomeMode;

/// @brief Field MoveableCameraTransformData, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_MoveableCameraTransformData, put=__cordl_internal_set_MoveableCameraTransformData)) ::VROSC::TransformDataModel*  MoveableCameraTransformData;

/// @brief Field Overdub, offset 0x5e, size 0x1 
 __declspec(property(get=__cordl_internal_get_Overdub, put=__cordl_internal_set_Overdub)) bool  Overdub;

/// @brief Field OverrideEnvironmentSettingsOnLoad, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_OverrideEnvironmentSettingsOnLoad, put=__cordl_internal_set_OverrideEnvironmentSettingsOnLoad)) bool  OverrideEnvironmentSettingsOnLoad;

/// @brief Field PlayAudioWhenUnfocused, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_PlayAudioWhenUnfocused, put=__cordl_internal_set_PlayAudioWhenUnfocused)) bool  PlayAudioWhenUnfocused;

/// @brief Field PreviewDrums, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_PreviewDrums, put=__cordl_internal_set_PreviewDrums)) bool  PreviewDrums;

/// @brief Field PreviewDrumsVolume, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_PreviewDrumsVolume, put=__cordl_internal_set_PreviewDrumsVolume)) float_t  PreviewDrumsVolume;

/// @brief Field PreviewMicrophoneReverb, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get_PreviewMicrophoneReverb, put=__cordl_internal_set_PreviewMicrophoneReverb)) bool  PreviewMicrophoneReverb;

/// @brief Field PreviewsVolume, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_PreviewsVolume, put=__cordl_internal_set_PreviewsVolume)) float_t  PreviewsVolume;

/// @brief Field SelectedEnvironment, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_SelectedEnvironment, put=__cordl_internal_set_SelectedEnvironment)) ::StringW  SelectedEnvironment;

/// @brief Field SelectedSpectatorCamera, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_SelectedSpectatorCamera, put=__cordl_internal_set_SelectedSpectatorCamera)) int32_t  SelectedSpectatorCamera;

/// @brief Field SetRecordingLengthToFirstLoopLength, offset 0x5f, size 0x1 
 __declspec(property(get=__cordl_internal_get_SetRecordingLengthToFirstLoopLength, put=__cordl_internal_set_SetRecordingLengthToFirstLoopLength)) bool  SetRecordingLengthToFirstLoopLength;

/// @brief Field SpectatorHideBackground, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_SpectatorHideBackground, put=__cordl_internal_set_SpectatorHideBackground)) bool  SpectatorHideBackground;

/// @brief Field SpectatorHideLasers, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_SpectatorHideLasers, put=__cordl_internal_set_SpectatorHideLasers)) bool  SpectatorHideLasers;

/// @brief Field UseClassicControls, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseClassicControls, put=__cordl_internal_set_UseClassicControls)) bool  UseClassicControls;

/// @brief Field UsePointAndClickForKeyboard, offset 0x5a, size 0x1 
 __declspec(property(get=__cordl_internal_get_UsePointAndClickForKeyboard, put=__cordl_internal_set_UsePointAndClickForKeyboard)) bool  UsePointAndClickForKeyboard;

/// @brief Field UseTouchForKeyboard, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseTouchForKeyboard, put=__cordl_internal_set_UseTouchForKeyboard)) bool  UseTouchForKeyboard;

 __declspec(property(get=get_Version)) int32_t  Version;

/// @brief Field VideoPlayerVolume, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_VideoPlayerVolume, put=__cordl_internal_set_VideoPlayerVolume)) float_t  VideoPlayerVolume;

static inline ::VROSC::UserPreferencesDataModel* New_ctor() ;

constexpr bool const& __cordl_internal_get_AllowExternalKeyboard() const;

constexpr bool& __cordl_internal_get_AllowExternalKeyboard() ;

constexpr bool const& __cordl_internal_get_AutoPlayPreviews() const;

constexpr bool& __cordl_internal_get_AutoPlayPreviews() ;

constexpr ::StringW const& __cordl_internal_get_DefaultSessionId() const;

constexpr ::StringW& __cordl_internal_get_DefaultSessionId() ;

constexpr bool const& __cordl_internal_get_DisableHaptics() const;

constexpr bool& __cordl_internal_get_DisableHaptics() ;

constexpr float_t const& __cordl_internal_get_GlobalVolume() const;

constexpr float_t& __cordl_internal_get_GlobalVolume() ;

constexpr bool const& __cordl_internal_get_GrabToActivateMicrophone() const;

constexpr bool& __cordl_internal_get_GrabToActivateMicrophone() ;

constexpr bool const& __cordl_internal_get_KeyboardPlaysClickSound() const;

constexpr bool& __cordl_internal_get_KeyboardPlaysClickSound() ;

constexpr bool const& __cordl_internal_get_LaserAutoDimWhenHoldingMallets() const;

constexpr bool& __cordl_internal_get_LaserAutoDimWhenHoldingMallets() ;

constexpr float_t const& __cordl_internal_get_LinkLatency() const;

constexpr float_t& __cordl_internal_get_LinkLatency() ;

constexpr float_t const& __cordl_internal_get_MalletAngle() const;

constexpr float_t& __cordl_internal_get_MalletAngle() ;

constexpr float_t const& __cordl_internal_get_MalletLength() const;

constexpr float_t& __cordl_internal_get_MalletLength() ;

constexpr ::VROSC::Metronome_Medium const& __cordl_internal_get_MetronomeMedium() const;

constexpr ::VROSC::Metronome_Medium& __cordl_internal_get_MetronomeMedium() ;

constexpr ::VROSC::Metronome_Mode const& __cordl_internal_get_MetronomeMode() const;

constexpr ::VROSC::Metronome_Mode& __cordl_internal_get_MetronomeMode() ;

constexpr ::VROSC::TransformDataModel* const& __cordl_internal_get_MoveableCameraTransformData() const;

constexpr ::VROSC::TransformDataModel*& __cordl_internal_get_MoveableCameraTransformData() ;

constexpr bool const& __cordl_internal_get_Overdub() const;

constexpr bool& __cordl_internal_get_Overdub() ;

constexpr bool const& __cordl_internal_get_OverrideEnvironmentSettingsOnLoad() const;

constexpr bool& __cordl_internal_get_OverrideEnvironmentSettingsOnLoad() ;

constexpr bool const& __cordl_internal_get_PlayAudioWhenUnfocused() const;

constexpr bool& __cordl_internal_get_PlayAudioWhenUnfocused() ;

constexpr bool const& __cordl_internal_get_PreviewDrums() const;

constexpr bool& __cordl_internal_get_PreviewDrums() ;

constexpr float_t const& __cordl_internal_get_PreviewDrumsVolume() const;

constexpr float_t& __cordl_internal_get_PreviewDrumsVolume() ;

constexpr bool const& __cordl_internal_get_PreviewMicrophoneReverb() const;

constexpr bool& __cordl_internal_get_PreviewMicrophoneReverb() ;

constexpr float_t const& __cordl_internal_get_PreviewsVolume() const;

constexpr float_t& __cordl_internal_get_PreviewsVolume() ;

constexpr ::StringW const& __cordl_internal_get_SelectedEnvironment() const;

constexpr ::StringW& __cordl_internal_get_SelectedEnvironment() ;

constexpr int32_t const& __cordl_internal_get_SelectedSpectatorCamera() const;

constexpr int32_t& __cordl_internal_get_SelectedSpectatorCamera() ;

constexpr bool const& __cordl_internal_get_SetRecordingLengthToFirstLoopLength() const;

constexpr bool& __cordl_internal_get_SetRecordingLengthToFirstLoopLength() ;

constexpr bool const& __cordl_internal_get_SpectatorHideBackground() const;

constexpr bool& __cordl_internal_get_SpectatorHideBackground() ;

constexpr bool const& __cordl_internal_get_SpectatorHideLasers() const;

constexpr bool& __cordl_internal_get_SpectatorHideLasers() ;

constexpr bool const& __cordl_internal_get_UseClassicControls() const;

constexpr bool& __cordl_internal_get_UseClassicControls() ;

constexpr bool const& __cordl_internal_get_UsePointAndClickForKeyboard() const;

constexpr bool& __cordl_internal_get_UsePointAndClickForKeyboard() ;

constexpr bool const& __cordl_internal_get_UseTouchForKeyboard() const;

constexpr bool& __cordl_internal_get_UseTouchForKeyboard() ;

constexpr float_t const& __cordl_internal_get_VideoPlayerVolume() const;

constexpr float_t& __cordl_internal_get_VideoPlayerVolume() ;

constexpr void __cordl_internal_set_AllowExternalKeyboard(bool  value) ;

constexpr void __cordl_internal_set_AutoPlayPreviews(bool  value) ;

constexpr void __cordl_internal_set_DefaultSessionId(::StringW  value) ;

constexpr void __cordl_internal_set_DisableHaptics(bool  value) ;

constexpr void __cordl_internal_set_GlobalVolume(float_t  value) ;

constexpr void __cordl_internal_set_GrabToActivateMicrophone(bool  value) ;

constexpr void __cordl_internal_set_KeyboardPlaysClickSound(bool  value) ;

constexpr void __cordl_internal_set_LaserAutoDimWhenHoldingMallets(bool  value) ;

constexpr void __cordl_internal_set_LinkLatency(float_t  value) ;

constexpr void __cordl_internal_set_MalletAngle(float_t  value) ;

constexpr void __cordl_internal_set_MalletLength(float_t  value) ;

constexpr void __cordl_internal_set_MetronomeMedium(::VROSC::Metronome_Medium  value) ;

constexpr void __cordl_internal_set_MetronomeMode(::VROSC::Metronome_Mode  value) ;

constexpr void __cordl_internal_set_MoveableCameraTransformData(::VROSC::TransformDataModel*  value) ;

constexpr void __cordl_internal_set_Overdub(bool  value) ;

constexpr void __cordl_internal_set_OverrideEnvironmentSettingsOnLoad(bool  value) ;

constexpr void __cordl_internal_set_PlayAudioWhenUnfocused(bool  value) ;

constexpr void __cordl_internal_set_PreviewDrums(bool  value) ;

constexpr void __cordl_internal_set_PreviewDrumsVolume(float_t  value) ;

constexpr void __cordl_internal_set_PreviewMicrophoneReverb(bool  value) ;

constexpr void __cordl_internal_set_PreviewsVolume(float_t  value) ;

constexpr void __cordl_internal_set_SelectedEnvironment(::StringW  value) ;

constexpr void __cordl_internal_set_SelectedSpectatorCamera(int32_t  value) ;

constexpr void __cordl_internal_set_SetRecordingLengthToFirstLoopLength(bool  value) ;

constexpr void __cordl_internal_set_SpectatorHideBackground(bool  value) ;

constexpr void __cordl_internal_set_SpectatorHideLasers(bool  value) ;

constexpr void __cordl_internal_set_UseClassicControls(bool  value) ;

constexpr void __cordl_internal_set_UsePointAndClickForKeyboard(bool  value) ;

constexpr void __cordl_internal_set_UseTouchForKeyboard(bool  value) ;

constexpr void __cordl_internal_set_VideoPlayerVolume(float_t  value) ;

/// @brief Method .ctor, addr 0x18793e4, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Key, addr 0x187c158, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Key() ;

/// @brief Method get_Version, addr 0x187c198, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Version() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserPreferencesDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserPreferencesDataModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserPreferencesDataModel(UserPreferencesDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserPreferencesDataModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserPreferencesDataModel(UserPreferencesDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{567};

/// @brief Field GlobalVolume, offset: 0x18, size: 0x4, def value: None
 float_t  ___GlobalVolume;

/// @brief Field PlayAudioWhenUnfocused, offset: 0x1c, size: 0x1, def value: None
 bool  ___PlayAudioWhenUnfocused;

/// @brief Field VideoPlayerVolume, offset: 0x20, size: 0x4, def value: None
 float_t  ___VideoPlayerVolume;

/// @brief Field UseClassicControls, offset: 0x24, size: 0x1, def value: None
 bool  ___UseClassicControls;

/// @brief Field DisableHaptics, offset: 0x25, size: 0x1, def value: None
 bool  ___DisableHaptics;

/// @brief Field AutoPlayPreviews, offset: 0x26, size: 0x1, def value: None
 bool  ___AutoPlayPreviews;

/// @brief Field PreviewsVolume, offset: 0x28, size: 0x4, def value: None
 float_t  ___PreviewsVolume;

/// @brief Field PreviewDrums, offset: 0x2c, size: 0x1, def value: None
 bool  ___PreviewDrums;

/// @brief Field PreviewDrumsVolume, offset: 0x30, size: 0x4, def value: None
 float_t  ___PreviewDrumsVolume;

/// @brief Field MalletAngle, offset: 0x34, size: 0x4, def value: None
 float_t  ___MalletAngle;

/// @brief Field MalletLength, offset: 0x38, size: 0x4, def value: None
 float_t  ___MalletLength;

/// @brief Field LaserAutoDimWhenHoldingMallets, offset: 0x3c, size: 0x1, def value: None
 bool  ___LaserAutoDimWhenHoldingMallets;

/// @brief Field LinkLatency, offset: 0x40, size: 0x4, def value: None
 float_t  ___LinkLatency;

/// @brief Field SelectedSpectatorCamera, offset: 0x44, size: 0x4, def value: None
 int32_t  ___SelectedSpectatorCamera;

/// @brief Field SpectatorHideBackground, offset: 0x48, size: 0x1, def value: None
 bool  ___SpectatorHideBackground;

/// @brief Field SpectatorHideLasers, offset: 0x49, size: 0x1, def value: None
 bool  ___SpectatorHideLasers;

/// @brief Field MoveableCameraTransformData, offset: 0x50, size: 0x8, def value: None
 ::VROSC::TransformDataModel*  ___MoveableCameraTransformData;

/// @brief Field AllowExternalKeyboard, offset: 0x58, size: 0x1, def value: None
 bool  ___AllowExternalKeyboard;

/// @brief Field UseTouchForKeyboard, offset: 0x59, size: 0x1, def value: None
 bool  ___UseTouchForKeyboard;

/// @brief Field UsePointAndClickForKeyboard, offset: 0x5a, size: 0x1, def value: None
 bool  ___UsePointAndClickForKeyboard;

/// @brief Field KeyboardPlaysClickSound, offset: 0x5b, size: 0x1, def value: None
 bool  ___KeyboardPlaysClickSound;

/// @brief Field GrabToActivateMicrophone, offset: 0x5c, size: 0x1, def value: None
 bool  ___GrabToActivateMicrophone;

/// @brief Field PreviewMicrophoneReverb, offset: 0x5d, size: 0x1, def value: None
 bool  ___PreviewMicrophoneReverb;

/// @brief Field Overdub, offset: 0x5e, size: 0x1, def value: None
 bool  ___Overdub;

/// @brief Field SetRecordingLengthToFirstLoopLength, offset: 0x5f, size: 0x1, def value: None
 bool  ___SetRecordingLengthToFirstLoopLength;

/// @brief Field MetronomeMode, offset: 0x60, size: 0x4, def value: None
 ::VROSC::Metronome_Mode  ___MetronomeMode;

/// @brief Field MetronomeMedium, offset: 0x64, size: 0x4, def value: None
 ::VROSC::Metronome_Medium  ___MetronomeMedium;

/// @brief Field SelectedEnvironment, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___SelectedEnvironment;

/// @brief Field OverrideEnvironmentSettingsOnLoad, offset: 0x70, size: 0x1, def value: None
 bool  ___OverrideEnvironmentSettingsOnLoad;

/// @brief Field DefaultSessionId, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___DefaultSessionId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___GlobalVolume) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___PlayAudioWhenUnfocused) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___VideoPlayerVolume) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___UseClassicControls) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___DisableHaptics) == 0x25, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___AutoPlayPreviews) == 0x26, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___PreviewsVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___PreviewDrums) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___PreviewDrumsVolume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___MalletAngle) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___MalletLength) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___LaserAutoDimWhenHoldingMallets) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___LinkLatency) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___SelectedSpectatorCamera) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___SpectatorHideBackground) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___SpectatorHideLasers) == 0x49, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___MoveableCameraTransformData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___AllowExternalKeyboard) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___UseTouchForKeyboard) == 0x59, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___UsePointAndClickForKeyboard) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___KeyboardPlaysClickSound) == 0x5b, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___GrabToActivateMicrophone) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___PreviewMicrophoneReverb) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___Overdub) == 0x5e, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___SetRecordingLengthToFirstLoopLength) == 0x5f, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___MetronomeMode) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___MetronomeMedium) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___SelectedEnvironment) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___OverrideEnvironmentSettingsOnLoad) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserPreferencesDataModel, ___DefaultSessionId) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserPreferencesDataModel, 0x80>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UserPreferencesDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserPreferencesDataModel*, "VROSC", "UserPreferencesDataModel");
