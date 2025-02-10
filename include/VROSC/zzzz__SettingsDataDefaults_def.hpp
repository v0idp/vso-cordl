#pragma once
// IWYU pragma private; include "VROSC/SettingsDataDefaults.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "VROSC/zzzz__Metronome_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsDataDefaults)
namespace VROSC {
class EnvironmentData;
}
namespace VROSC {
class MalletSettings;
}
namespace VROSC {
class ScalePresets;
}
// Forward declare root types
namespace VROSC {
class SettingsDataDefaults;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SettingsDataDefaults);
// Dependencies UnityEngine.ScriptableObject, VROSC.Metronome::Medium, VROSC.Metronome::Mode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SettingsDataDefaults
class CORDL_TYPE SettingsDataDefaults : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field AllowExternalKeyboard, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_AllowExternalKeyboard, put=__cordl_internal_set_AllowExternalKeyboard)) bool  AllowExternalKeyboard;

/// @brief Field AutoPlayPreviews, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoPlayPreviews, put=__cordl_internal_set_AutoPlayPreviews)) bool  AutoPlayPreviews;

/// @brief Field DisableHaptics, offset 0x3e, size 0x1 
 __declspec(property(get=__cordl_internal_get_DisableHaptics, put=__cordl_internal_set_DisableHaptics)) bool  DisableHaptics;

/// @brief Field Environments, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_Environments, put=__cordl_internal_set_Environments)) ::ArrayW<::UnityW<::VROSC::EnvironmentData>,::Array<::UnityW<::VROSC::EnvironmentData>>*>  Environments;

/// @brief Field GlobalVolume, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_GlobalVolume, put=__cordl_internal_set_GlobalVolume)) float_t  GlobalVolume;

/// @brief Field KeyboardPlaysClickSound, offset 0x57, size 0x1 
 __declspec(property(get=__cordl_internal_get_KeyboardPlaysClickSound, put=__cordl_internal_set_KeyboardPlaysClickSound)) bool  KeyboardPlaysClickSound;

/// @brief Field MalletSettings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MalletSettings, put=__cordl_internal_set_MalletSettings)) ::UnityW<::VROSC::MalletSettings>  MalletSettings;

/// @brief Field MetronomeMedium, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_MetronomeMedium, put=__cordl_internal_set_MetronomeMedium)) ::VROSC::Metronome_Medium  MetronomeMedium;

/// @brief Field MetronomeMode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_MetronomeMode, put=__cordl_internal_set_MetronomeMode)) ::VROSC::Metronome_Mode  MetronomeMode;

/// @brief Field Overdub, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_Overdub, put=__cordl_internal_set_Overdub)) bool  Overdub;

/// @brief Field OverrideEnvironmentSettingsOnLoad, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_OverrideEnvironmentSettingsOnLoad, put=__cordl_internal_set_OverrideEnvironmentSettingsOnLoad)) bool  OverrideEnvironmentSettingsOnLoad;

/// @brief Field PlayAudioWhenUnfocused, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_PlayAudioWhenUnfocused, put=__cordl_internal_set_PlayAudioWhenUnfocused)) bool  PlayAudioWhenUnfocused;

/// @brief Field PreviewDrums, offset 0x4d, size 0x1 
 __declspec(property(get=__cordl_internal_get_PreviewDrums, put=__cordl_internal_set_PreviewDrums)) bool  PreviewDrums;

/// @brief Field PreviewDrumsVolume, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_PreviewDrumsVolume, put=__cordl_internal_set_PreviewDrumsVolume)) float_t  PreviewDrumsVolume;

/// @brief Field PreviewsVolume, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_PreviewsVolume, put=__cordl_internal_set_PreviewsVolume)) float_t  PreviewsVolume;

/// @brief Field ScalePresets, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScalePresets, put=__cordl_internal_set_ScalePresets)) ::UnityW<::VROSC::ScalePresets>  ScalePresets;

/// @brief Field SelectedEnvironment, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_SelectedEnvironment, put=__cordl_internal_set_SelectedEnvironment)) ::StringW  SelectedEnvironment;

/// @brief Field SelectedSpectatorCamera, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_SelectedSpectatorCamera, put=__cordl_internal_set_SelectedSpectatorCamera)) int32_t  SelectedSpectatorCamera;

/// @brief Field SetRecordingLengthToFirstLoopLength, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_SetRecordingLengthToFirstLoopLength, put=__cordl_internal_set_SetRecordingLengthToFirstLoopLength)) bool  SetRecordingLengthToFirstLoopLength;

/// @brief Field SpectatorHideBackground, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_SpectatorHideBackground, put=__cordl_internal_set_SpectatorHideBackground)) bool  SpectatorHideBackground;

/// @brief Field UseClassicControls, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseClassicControls, put=__cordl_internal_set_UseClassicControls)) bool  UseClassicControls;

/// @brief Field UseExternalSynthesizer, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseExternalSynthesizer, put=__cordl_internal_set_UseExternalSynthesizer)) bool  UseExternalSynthesizer;

/// @brief Field UsePointAndClickForKeyboard, offset 0x56, size 0x1 
 __declspec(property(get=__cordl_internal_get_UsePointAndClickForKeyboard, put=__cordl_internal_set_UsePointAndClickForKeyboard)) bool  UsePointAndClickForKeyboard;

/// @brief Field UseTouchForKeyboard, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseTouchForKeyboard, put=__cordl_internal_set_UseTouchForKeyboard)) bool  UseTouchForKeyboard;

/// @brief Field VideoPlayerVolume, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_VideoPlayerVolume, put=__cordl_internal_set_VideoPlayerVolume)) float_t  VideoPlayerVolume;

/// @brief Method GetEnvironmentData, addr 0x1869524, size 0x84, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::EnvironmentData> GetEnvironmentData(::StringW  environment) ;

static inline ::VROSC::SettingsDataDefaults* New_ctor() ;

constexpr bool const& __cordl_internal_get_AllowExternalKeyboard() const;

constexpr bool& __cordl_internal_get_AllowExternalKeyboard() ;

constexpr bool const& __cordl_internal_get_AutoPlayPreviews() const;

constexpr bool& __cordl_internal_get_AutoPlayPreviews() ;

constexpr bool const& __cordl_internal_get_DisableHaptics() const;

constexpr bool& __cordl_internal_get_DisableHaptics() ;

constexpr ::ArrayW<::UnityW<::VROSC::EnvironmentData>,::Array<::UnityW<::VROSC::EnvironmentData>>*> const& __cordl_internal_get_Environments() const;

constexpr ::ArrayW<::UnityW<::VROSC::EnvironmentData>,::Array<::UnityW<::VROSC::EnvironmentData>>*>& __cordl_internal_get_Environments() ;

constexpr float_t const& __cordl_internal_get_GlobalVolume() const;

constexpr float_t& __cordl_internal_get_GlobalVolume() ;

constexpr bool const& __cordl_internal_get_KeyboardPlaysClickSound() const;

constexpr bool& __cordl_internal_get_KeyboardPlaysClickSound() ;

constexpr ::UnityW<::VROSC::MalletSettings> const& __cordl_internal_get_MalletSettings() const;

constexpr ::UnityW<::VROSC::MalletSettings>& __cordl_internal_get_MalletSettings() ;

constexpr ::VROSC::Metronome_Medium const& __cordl_internal_get_MetronomeMedium() const;

constexpr ::VROSC::Metronome_Medium& __cordl_internal_get_MetronomeMedium() ;

constexpr ::VROSC::Metronome_Mode const& __cordl_internal_get_MetronomeMode() const;

constexpr ::VROSC::Metronome_Mode& __cordl_internal_get_MetronomeMode() ;

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

constexpr float_t const& __cordl_internal_get_PreviewsVolume() const;

constexpr float_t& __cordl_internal_get_PreviewsVolume() ;

constexpr ::UnityW<::VROSC::ScalePresets> const& __cordl_internal_get_ScalePresets() const;

constexpr ::UnityW<::VROSC::ScalePresets>& __cordl_internal_get_ScalePresets() ;

constexpr ::StringW const& __cordl_internal_get_SelectedEnvironment() const;

constexpr ::StringW& __cordl_internal_get_SelectedEnvironment() ;

constexpr int32_t const& __cordl_internal_get_SelectedSpectatorCamera() const;

constexpr int32_t& __cordl_internal_get_SelectedSpectatorCamera() ;

constexpr bool const& __cordl_internal_get_SetRecordingLengthToFirstLoopLength() const;

constexpr bool& __cordl_internal_get_SetRecordingLengthToFirstLoopLength() ;

constexpr bool const& __cordl_internal_get_SpectatorHideBackground() const;

constexpr bool& __cordl_internal_get_SpectatorHideBackground() ;

constexpr bool const& __cordl_internal_get_UseClassicControls() const;

constexpr bool& __cordl_internal_get_UseClassicControls() ;

constexpr bool const& __cordl_internal_get_UseExternalSynthesizer() const;

constexpr bool& __cordl_internal_get_UseExternalSynthesizer() ;

constexpr bool const& __cordl_internal_get_UsePointAndClickForKeyboard() const;

constexpr bool& __cordl_internal_get_UsePointAndClickForKeyboard() ;

constexpr bool const& __cordl_internal_get_UseTouchForKeyboard() const;

constexpr bool& __cordl_internal_get_UseTouchForKeyboard() ;

constexpr float_t const& __cordl_internal_get_VideoPlayerVolume() const;

constexpr float_t& __cordl_internal_get_VideoPlayerVolume() ;

constexpr void __cordl_internal_set_AllowExternalKeyboard(bool  value) ;

constexpr void __cordl_internal_set_AutoPlayPreviews(bool  value) ;

constexpr void __cordl_internal_set_DisableHaptics(bool  value) ;

constexpr void __cordl_internal_set_Environments(::ArrayW<::UnityW<::VROSC::EnvironmentData>,::Array<::UnityW<::VROSC::EnvironmentData>>*>  value) ;

constexpr void __cordl_internal_set_GlobalVolume(float_t  value) ;

constexpr void __cordl_internal_set_KeyboardPlaysClickSound(bool  value) ;

constexpr void __cordl_internal_set_MalletSettings(::UnityW<::VROSC::MalletSettings>  value) ;

constexpr void __cordl_internal_set_MetronomeMedium(::VROSC::Metronome_Medium  value) ;

constexpr void __cordl_internal_set_MetronomeMode(::VROSC::Metronome_Mode  value) ;

constexpr void __cordl_internal_set_Overdub(bool  value) ;

constexpr void __cordl_internal_set_OverrideEnvironmentSettingsOnLoad(bool  value) ;

constexpr void __cordl_internal_set_PlayAudioWhenUnfocused(bool  value) ;

constexpr void __cordl_internal_set_PreviewDrums(bool  value) ;

constexpr void __cordl_internal_set_PreviewDrumsVolume(float_t  value) ;

constexpr void __cordl_internal_set_PreviewsVolume(float_t  value) ;

constexpr void __cordl_internal_set_ScalePresets(::UnityW<::VROSC::ScalePresets>  value) ;

constexpr void __cordl_internal_set_SelectedEnvironment(::StringW  value) ;

constexpr void __cordl_internal_set_SelectedSpectatorCamera(int32_t  value) ;

constexpr void __cordl_internal_set_SetRecordingLengthToFirstLoopLength(bool  value) ;

constexpr void __cordl_internal_set_SpectatorHideBackground(bool  value) ;

constexpr void __cordl_internal_set_UseClassicControls(bool  value) ;

constexpr void __cordl_internal_set_UseExternalSynthesizer(bool  value) ;

constexpr void __cordl_internal_set_UsePointAndClickForKeyboard(bool  value) ;

constexpr void __cordl_internal_set_UseTouchForKeyboard(bool  value) ;

constexpr void __cordl_internal_set_VideoPlayerVolume(float_t  value) ;

/// @brief Method .ctor, addr 0x18695a8, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsDataDefaults() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsDataDefaults", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsDataDefaults(SettingsDataDefaults && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsDataDefaults", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsDataDefaults(SettingsDataDefaults const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{511};

/// @brief Field MalletSettings, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::MalletSettings>  ___MalletSettings;

/// @brief Field ScalePresets, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::ScalePresets>  ___ScalePresets;

/// @brief Field MetronomeMode, offset: 0x28, size: 0x4, def value: None
 ::VROSC::Metronome_Mode  ___MetronomeMode;

/// @brief Field MetronomeMedium, offset: 0x2c, size: 0x4, def value: None
 ::VROSC::Metronome_Medium  ___MetronomeMedium;

/// @brief Field UseExternalSynthesizer, offset: 0x30, size: 0x1, def value: None
 bool  ___UseExternalSynthesizer;

/// @brief Field SelectedSpectatorCamera, offset: 0x34, size: 0x4, def value: None
 int32_t  ___SelectedSpectatorCamera;

/// @brief Field GlobalVolume, offset: 0x38, size: 0x4, def value: None
 float_t  ___GlobalVolume;

/// @brief Field PlayAudioWhenUnfocused, offset: 0x3c, size: 0x1, def value: None
 bool  ___PlayAudioWhenUnfocused;

/// @brief Field UseClassicControls, offset: 0x3d, size: 0x1, def value: None
 bool  ___UseClassicControls;

/// @brief Field DisableHaptics, offset: 0x3e, size: 0x1, def value: None
 bool  ___DisableHaptics;

/// @brief Field VideoPlayerVolume, offset: 0x40, size: 0x4, def value: None
 float_t  ___VideoPlayerVolume;

/// @brief Field AutoPlayPreviews, offset: 0x44, size: 0x1, def value: None
 bool  ___AutoPlayPreviews;

/// @brief Field PreviewsVolume, offset: 0x48, size: 0x4, def value: None
 float_t  ___PreviewsVolume;

/// @brief Field SpectatorHideBackground, offset: 0x4c, size: 0x1, def value: None
 bool  ___SpectatorHideBackground;

/// @brief Field PreviewDrums, offset: 0x4d, size: 0x1, def value: None
 bool  ___PreviewDrums;

/// @brief Field PreviewDrumsVolume, offset: 0x50, size: 0x4, def value: None
 float_t  ___PreviewDrumsVolume;

/// @brief Field AllowExternalKeyboard, offset: 0x54, size: 0x1, def value: None
 bool  ___AllowExternalKeyboard;

/// @brief Field UseTouchForKeyboard, offset: 0x55, size: 0x1, def value: None
 bool  ___UseTouchForKeyboard;

/// @brief Field UsePointAndClickForKeyboard, offset: 0x56, size: 0x1, def value: None
 bool  ___UsePointAndClickForKeyboard;

/// @brief Field KeyboardPlaysClickSound, offset: 0x57, size: 0x1, def value: None
 bool  ___KeyboardPlaysClickSound;

/// @brief Field Overdub, offset: 0x58, size: 0x1, def value: None
 bool  ___Overdub;

/// @brief Field SetRecordingLengthToFirstLoopLength, offset: 0x59, size: 0x1, def value: None
 bool  ___SetRecordingLengthToFirstLoopLength;

/// @brief Field SelectedEnvironment, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___SelectedEnvironment;

/// @brief Field OverrideEnvironmentSettingsOnLoad, offset: 0x68, size: 0x1, def value: None
 bool  ___OverrideEnvironmentSettingsOnLoad;

/// @brief Field Environments, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::EnvironmentData>,::Array<::UnityW<::VROSC::EnvironmentData>>*>  ___Environments;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SettingsDataDefaults, ___MalletSettings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___ScalePresets) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___MetronomeMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___MetronomeMedium) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___UseExternalSynthesizer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___SelectedSpectatorCamera) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___GlobalVolume) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___PlayAudioWhenUnfocused) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___UseClassicControls) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___DisableHaptics) == 0x3e, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___VideoPlayerVolume) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___AutoPlayPreviews) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___PreviewsVolume) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___SpectatorHideBackground) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___PreviewDrums) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___PreviewDrumsVolume) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___AllowExternalKeyboard) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___UseTouchForKeyboard) == 0x55, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___UsePointAndClickForKeyboard) == 0x56, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___KeyboardPlaysClickSound) == 0x57, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___Overdub) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___SetRecordingLengthToFirstLoopLength) == 0x59, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___SelectedEnvironment) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___OverrideEnvironmentSettingsOnLoad) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::SettingsDataDefaults, ___Environments) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SettingsDataDefaults, 0x78>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SettingsDataDefaults);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SettingsDataDefaults*, "VROSC", "SettingsDataDefaults");
