#pragma once
// IWYU pragma private; include "VROSC/SettingsDataDefaults.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "VROSC/zzzz__Metronome_impl.hpp"
#include "VROSC/zzzz__SettingsDataDefaults_def.hpp"
#include "VROSC/zzzz__EnvironmentData_def.hpp"
#include "VROSC/zzzz__MalletSettings_def.hpp"
#include "VROSC/zzzz__ScalePresets_def.hpp"
//  Writing Method size for method: ::VROSC::SettingsDataDefaults.GetEnvironmentData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::EnvironmentData> (::VROSC::SettingsDataDefaults::*)(::StringW)>(&::VROSC::SettingsDataDefaults::GetEnvironmentData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1869524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SettingsDataDefaults*>::get(),
                        "GetEnvironmentData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SettingsDataDefaults._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SettingsDataDefaults::*)()>(&::VROSC::SettingsDataDefaults::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x18695a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SettingsDataDefaults*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::MalletSettings>& VROSC::SettingsDataDefaults::__cordl_internal_get_MalletSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MalletSettings;
}
constexpr ::UnityW<::VROSC::MalletSettings> const& VROSC::SettingsDataDefaults::__cordl_internal_get_MalletSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MalletSettings;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_MalletSettings(::UnityW<::VROSC::MalletSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MalletSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ScalePresets>& VROSC::SettingsDataDefaults::__cordl_internal_get_ScalePresets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScalePresets;
}
constexpr ::UnityW<::VROSC::ScalePresets> const& VROSC::SettingsDataDefaults::__cordl_internal_get_ScalePresets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScalePresets;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_ScalePresets(::UnityW<::VROSC::ScalePresets>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ScalePresets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::Metronome_Mode& VROSC::SettingsDataDefaults::__cordl_internal_get_MetronomeMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MetronomeMode;
}
constexpr ::VROSC::Metronome_Mode const& VROSC::SettingsDataDefaults::__cordl_internal_get_MetronomeMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MetronomeMode;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_MetronomeMode(::VROSC::Metronome_Mode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MetronomeMode = value;
}
constexpr ::VROSC::Metronome_Medium& VROSC::SettingsDataDefaults::__cordl_internal_get_MetronomeMedium()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MetronomeMedium;
}
constexpr ::VROSC::Metronome_Medium const& VROSC::SettingsDataDefaults::__cordl_internal_get_MetronomeMedium() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MetronomeMedium;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_MetronomeMedium(::VROSC::Metronome_Medium  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MetronomeMedium = value;
}
constexpr bool& VROSC::SettingsDataDefaults::__cordl_internal_get_UseExternalSynthesizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseExternalSynthesizer;
}
constexpr bool const& VROSC::SettingsDataDefaults::__cordl_internal_get_UseExternalSynthesizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseExternalSynthesizer;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_UseExternalSynthesizer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseExternalSynthesizer = value;
}
constexpr int32_t& VROSC::SettingsDataDefaults::__cordl_internal_get_SelectedSpectatorCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedSpectatorCamera;
}
constexpr int32_t const& VROSC::SettingsDataDefaults::__cordl_internal_get_SelectedSpectatorCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedSpectatorCamera;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_SelectedSpectatorCamera(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SelectedSpectatorCamera = value;
}
constexpr float_t& VROSC::SettingsDataDefaults::__cordl_internal_get_GlobalVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalVolume;
}
constexpr float_t const& VROSC::SettingsDataDefaults::__cordl_internal_get_GlobalVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalVolume;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_GlobalVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GlobalVolume = value;
}
constexpr bool& VROSC::SettingsDataDefaults::__cordl_internal_get_PlayAudioWhenUnfocused()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayAudioWhenUnfocused;
}
constexpr bool const& VROSC::SettingsDataDefaults::__cordl_internal_get_PlayAudioWhenUnfocused() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayAudioWhenUnfocused;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_PlayAudioWhenUnfocused(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayAudioWhenUnfocused = value;
}
constexpr bool& VROSC::SettingsDataDefaults::__cordl_internal_get_UseClassicControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseClassicControls;
}
constexpr bool const& VROSC::SettingsDataDefaults::__cordl_internal_get_UseClassicControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseClassicControls;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_UseClassicControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseClassicControls = value;
}
constexpr bool& VROSC::SettingsDataDefaults::__cordl_internal_get_DisableHaptics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableHaptics;
}
constexpr bool const& VROSC::SettingsDataDefaults::__cordl_internal_get_DisableHaptics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableHaptics;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_DisableHaptics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisableHaptics = value;
}
constexpr float_t& VROSC::SettingsDataDefaults::__cordl_internal_get_VideoPlayerVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VideoPlayerVolume;
}
constexpr float_t const& VROSC::SettingsDataDefaults::__cordl_internal_get_VideoPlayerVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VideoPlayerVolume;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_VideoPlayerVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VideoPlayerVolume = value;
}
constexpr bool& VROSC::SettingsDataDefaults::__cordl_internal_get_AutoPlayPreviews()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoPlayPreviews;
}
constexpr bool const& VROSC::SettingsDataDefaults::__cordl_internal_get_AutoPlayPreviews() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoPlayPreviews;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_AutoPlayPreviews(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoPlayPreviews = value;
}
constexpr float_t& VROSC::SettingsDataDefaults::__cordl_internal_get_PreviewsVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviewsVolume;
}
constexpr float_t const& VROSC::SettingsDataDefaults::__cordl_internal_get_PreviewsVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviewsVolume;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_PreviewsVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviewsVolume = value;
}
constexpr bool& VROSC::SettingsDataDefaults::__cordl_internal_get_SpectatorHideBackground()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpectatorHideBackground;
}
constexpr bool const& VROSC::SettingsDataDefaults::__cordl_internal_get_SpectatorHideBackground() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpectatorHideBackground;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_SpectatorHideBackground(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpectatorHideBackground = value;
}
constexpr bool& VROSC::SettingsDataDefaults::__cordl_internal_get_PreviewDrums()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviewDrums;
}
constexpr bool const& VROSC::SettingsDataDefaults::__cordl_internal_get_PreviewDrums() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviewDrums;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_PreviewDrums(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviewDrums = value;
}
constexpr float_t& VROSC::SettingsDataDefaults::__cordl_internal_get_PreviewDrumsVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviewDrumsVolume;
}
constexpr float_t const& VROSC::SettingsDataDefaults::__cordl_internal_get_PreviewDrumsVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviewDrumsVolume;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_PreviewDrumsVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviewDrumsVolume = value;
}
constexpr bool& VROSC::SettingsDataDefaults::__cordl_internal_get_AllowExternalKeyboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowExternalKeyboard;
}
constexpr bool const& VROSC::SettingsDataDefaults::__cordl_internal_get_AllowExternalKeyboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowExternalKeyboard;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_AllowExternalKeyboard(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllowExternalKeyboard = value;
}
constexpr bool& VROSC::SettingsDataDefaults::__cordl_internal_get_UseTouchForKeyboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseTouchForKeyboard;
}
constexpr bool const& VROSC::SettingsDataDefaults::__cordl_internal_get_UseTouchForKeyboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseTouchForKeyboard;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_UseTouchForKeyboard(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseTouchForKeyboard = value;
}
constexpr bool& VROSC::SettingsDataDefaults::__cordl_internal_get_UsePointAndClickForKeyboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UsePointAndClickForKeyboard;
}
constexpr bool const& VROSC::SettingsDataDefaults::__cordl_internal_get_UsePointAndClickForKeyboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UsePointAndClickForKeyboard;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_UsePointAndClickForKeyboard(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UsePointAndClickForKeyboard = value;
}
constexpr bool& VROSC::SettingsDataDefaults::__cordl_internal_get_KeyboardPlaysClickSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyboardPlaysClickSound;
}
constexpr bool const& VROSC::SettingsDataDefaults::__cordl_internal_get_KeyboardPlaysClickSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyboardPlaysClickSound;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_KeyboardPlaysClickSound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KeyboardPlaysClickSound = value;
}
constexpr bool& VROSC::SettingsDataDefaults::__cordl_internal_get_Overdub()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Overdub;
}
constexpr bool const& VROSC::SettingsDataDefaults::__cordl_internal_get_Overdub() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Overdub;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_Overdub(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Overdub = value;
}
constexpr bool& VROSC::SettingsDataDefaults::__cordl_internal_get_SetRecordingLengthToFirstLoopLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetRecordingLengthToFirstLoopLength;
}
constexpr bool const& VROSC::SettingsDataDefaults::__cordl_internal_get_SetRecordingLengthToFirstLoopLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetRecordingLengthToFirstLoopLength;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_SetRecordingLengthToFirstLoopLength(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SetRecordingLengthToFirstLoopLength = value;
}
constexpr ::StringW& VROSC::SettingsDataDefaults::__cordl_internal_get_SelectedEnvironment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedEnvironment;
}
constexpr ::StringW const& VROSC::SettingsDataDefaults::__cordl_internal_get_SelectedEnvironment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedEnvironment;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_SelectedEnvironment(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SelectedEnvironment)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::SettingsDataDefaults::__cordl_internal_get_OverrideEnvironmentSettingsOnLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideEnvironmentSettingsOnLoad;
}
constexpr bool const& VROSC::SettingsDataDefaults::__cordl_internal_get_OverrideEnvironmentSettingsOnLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideEnvironmentSettingsOnLoad;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_OverrideEnvironmentSettingsOnLoad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OverrideEnvironmentSettingsOnLoad = value;
}
constexpr ::ArrayW<::UnityW<::VROSC::EnvironmentData>,::Array<::UnityW<::VROSC::EnvironmentData>>*>& VROSC::SettingsDataDefaults::__cordl_internal_get_Environments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Environments;
}
constexpr ::ArrayW<::UnityW<::VROSC::EnvironmentData>,::Array<::UnityW<::VROSC::EnvironmentData>>*> const& VROSC::SettingsDataDefaults::__cordl_internal_get_Environments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Environments;
}
constexpr void VROSC::SettingsDataDefaults::__cordl_internal_set_Environments(::ArrayW<::UnityW<::VROSC::EnvironmentData>,::Array<::UnityW<::VROSC::EnvironmentData>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Environments)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::VROSC::EnvironmentData> VROSC::SettingsDataDefaults::GetEnvironmentData(::StringW  environment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SettingsDataDefaults*>::get(),
                        "GetEnvironmentData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::EnvironmentData>, false>(this, ___internal_method, environment);
}
inline void VROSC::SettingsDataDefaults::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SettingsDataDefaults*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SettingsDataDefaults* VROSC::SettingsDataDefaults::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SettingsDataDefaults*>());
}
// Ctor Parameters []
constexpr ::VROSC::SettingsDataDefaults::SettingsDataDefaults()   {
}
