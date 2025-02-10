#pragma once
// IWYU pragma private; include "VROSC/UserPreferencesDataModel.hpp"
#include "VROSC/zzzz__BaseDataModel_impl.hpp"
#include "VROSC/zzzz__Metronome_impl.hpp"
#include "VROSC/zzzz__UserPreferencesDataModel_def.hpp"
#include "VROSC/zzzz__TransformDataModel_def.hpp"
//  Writing Method size for method: ::VROSC::UserPreferencesDataModel.get_Key
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::UserPreferencesDataModel::*)()>(&::VROSC::UserPreferencesDataModel::get_Key)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x187c158;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataModel*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataModel.get_Version
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::UserPreferencesDataModel::*)()>(&::VROSC::UserPreferencesDataModel::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x187c198;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataModel*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserPreferencesDataModel._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserPreferencesDataModel::*)()>(&::VROSC::UserPreferencesDataModel::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18793e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::UserPreferencesDataModel::__cordl_internal_get_GlobalVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalVolume;
}
constexpr float_t const& VROSC::UserPreferencesDataModel::__cordl_internal_get_GlobalVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalVolume;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_GlobalVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GlobalVolume = value;
}
constexpr bool& VROSC::UserPreferencesDataModel::__cordl_internal_get_PlayAudioWhenUnfocused()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayAudioWhenUnfocused;
}
constexpr bool const& VROSC::UserPreferencesDataModel::__cordl_internal_get_PlayAudioWhenUnfocused() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayAudioWhenUnfocused;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_PlayAudioWhenUnfocused(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayAudioWhenUnfocused = value;
}
constexpr float_t& VROSC::UserPreferencesDataModel::__cordl_internal_get_VideoPlayerVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VideoPlayerVolume;
}
constexpr float_t const& VROSC::UserPreferencesDataModel::__cordl_internal_get_VideoPlayerVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VideoPlayerVolume;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_VideoPlayerVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VideoPlayerVolume = value;
}
constexpr bool& VROSC::UserPreferencesDataModel::__cordl_internal_get_UseClassicControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseClassicControls;
}
constexpr bool const& VROSC::UserPreferencesDataModel::__cordl_internal_get_UseClassicControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseClassicControls;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_UseClassicControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseClassicControls = value;
}
constexpr bool& VROSC::UserPreferencesDataModel::__cordl_internal_get_DisableHaptics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableHaptics;
}
constexpr bool const& VROSC::UserPreferencesDataModel::__cordl_internal_get_DisableHaptics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableHaptics;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_DisableHaptics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisableHaptics = value;
}
constexpr bool& VROSC::UserPreferencesDataModel::__cordl_internal_get_AutoPlayPreviews()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoPlayPreviews;
}
constexpr bool const& VROSC::UserPreferencesDataModel::__cordl_internal_get_AutoPlayPreviews() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoPlayPreviews;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_AutoPlayPreviews(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoPlayPreviews = value;
}
constexpr float_t& VROSC::UserPreferencesDataModel::__cordl_internal_get_PreviewsVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviewsVolume;
}
constexpr float_t const& VROSC::UserPreferencesDataModel::__cordl_internal_get_PreviewsVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviewsVolume;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_PreviewsVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviewsVolume = value;
}
constexpr bool& VROSC::UserPreferencesDataModel::__cordl_internal_get_PreviewDrums()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviewDrums;
}
constexpr bool const& VROSC::UserPreferencesDataModel::__cordl_internal_get_PreviewDrums() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviewDrums;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_PreviewDrums(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviewDrums = value;
}
constexpr float_t& VROSC::UserPreferencesDataModel::__cordl_internal_get_PreviewDrumsVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviewDrumsVolume;
}
constexpr float_t const& VROSC::UserPreferencesDataModel::__cordl_internal_get_PreviewDrumsVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviewDrumsVolume;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_PreviewDrumsVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviewDrumsVolume = value;
}
constexpr float_t& VROSC::UserPreferencesDataModel::__cordl_internal_get_MalletAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MalletAngle;
}
constexpr float_t const& VROSC::UserPreferencesDataModel::__cordl_internal_get_MalletAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MalletAngle;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_MalletAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MalletAngle = value;
}
constexpr float_t& VROSC::UserPreferencesDataModel::__cordl_internal_get_MalletLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MalletLength;
}
constexpr float_t const& VROSC::UserPreferencesDataModel::__cordl_internal_get_MalletLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MalletLength;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_MalletLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MalletLength = value;
}
constexpr bool& VROSC::UserPreferencesDataModel::__cordl_internal_get_LaserAutoDimWhenHoldingMallets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LaserAutoDimWhenHoldingMallets;
}
constexpr bool const& VROSC::UserPreferencesDataModel::__cordl_internal_get_LaserAutoDimWhenHoldingMallets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LaserAutoDimWhenHoldingMallets;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_LaserAutoDimWhenHoldingMallets(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LaserAutoDimWhenHoldingMallets = value;
}
constexpr float_t& VROSC::UserPreferencesDataModel::__cordl_internal_get_LinkLatency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinkLatency;
}
constexpr float_t const& VROSC::UserPreferencesDataModel::__cordl_internal_get_LinkLatency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinkLatency;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_LinkLatency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LinkLatency = value;
}
constexpr int32_t& VROSC::UserPreferencesDataModel::__cordl_internal_get_SelectedSpectatorCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedSpectatorCamera;
}
constexpr int32_t const& VROSC::UserPreferencesDataModel::__cordl_internal_get_SelectedSpectatorCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedSpectatorCamera;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_SelectedSpectatorCamera(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SelectedSpectatorCamera = value;
}
constexpr bool& VROSC::UserPreferencesDataModel::__cordl_internal_get_SpectatorHideBackground()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpectatorHideBackground;
}
constexpr bool const& VROSC::UserPreferencesDataModel::__cordl_internal_get_SpectatorHideBackground() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpectatorHideBackground;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_SpectatorHideBackground(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpectatorHideBackground = value;
}
constexpr bool& VROSC::UserPreferencesDataModel::__cordl_internal_get_SpectatorHideLasers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpectatorHideLasers;
}
constexpr bool const& VROSC::UserPreferencesDataModel::__cordl_internal_get_SpectatorHideLasers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpectatorHideLasers;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_SpectatorHideLasers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpectatorHideLasers = value;
}
constexpr ::VROSC::TransformDataModel*& VROSC::UserPreferencesDataModel::__cordl_internal_get_MoveableCameraTransformData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MoveableCameraTransformData;
}
constexpr ::VROSC::TransformDataModel* const& VROSC::UserPreferencesDataModel::__cordl_internal_get_MoveableCameraTransformData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MoveableCameraTransformData;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_MoveableCameraTransformData(::VROSC::TransformDataModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MoveableCameraTransformData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::UserPreferencesDataModel::__cordl_internal_get_AllowExternalKeyboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowExternalKeyboard;
}
constexpr bool const& VROSC::UserPreferencesDataModel::__cordl_internal_get_AllowExternalKeyboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowExternalKeyboard;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_AllowExternalKeyboard(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllowExternalKeyboard = value;
}
constexpr bool& VROSC::UserPreferencesDataModel::__cordl_internal_get_UseTouchForKeyboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseTouchForKeyboard;
}
constexpr bool const& VROSC::UserPreferencesDataModel::__cordl_internal_get_UseTouchForKeyboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseTouchForKeyboard;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_UseTouchForKeyboard(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseTouchForKeyboard = value;
}
constexpr bool& VROSC::UserPreferencesDataModel::__cordl_internal_get_UsePointAndClickForKeyboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UsePointAndClickForKeyboard;
}
constexpr bool const& VROSC::UserPreferencesDataModel::__cordl_internal_get_UsePointAndClickForKeyboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UsePointAndClickForKeyboard;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_UsePointAndClickForKeyboard(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UsePointAndClickForKeyboard = value;
}
constexpr bool& VROSC::UserPreferencesDataModel::__cordl_internal_get_KeyboardPlaysClickSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyboardPlaysClickSound;
}
constexpr bool const& VROSC::UserPreferencesDataModel::__cordl_internal_get_KeyboardPlaysClickSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyboardPlaysClickSound;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_KeyboardPlaysClickSound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KeyboardPlaysClickSound = value;
}
constexpr bool& VROSC::UserPreferencesDataModel::__cordl_internal_get_GrabToActivateMicrophone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GrabToActivateMicrophone;
}
constexpr bool const& VROSC::UserPreferencesDataModel::__cordl_internal_get_GrabToActivateMicrophone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GrabToActivateMicrophone;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_GrabToActivateMicrophone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GrabToActivateMicrophone = value;
}
constexpr bool& VROSC::UserPreferencesDataModel::__cordl_internal_get_PreviewMicrophoneReverb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviewMicrophoneReverb;
}
constexpr bool const& VROSC::UserPreferencesDataModel::__cordl_internal_get_PreviewMicrophoneReverb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviewMicrophoneReverb;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_PreviewMicrophoneReverb(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviewMicrophoneReverb = value;
}
constexpr bool& VROSC::UserPreferencesDataModel::__cordl_internal_get_Overdub()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Overdub;
}
constexpr bool const& VROSC::UserPreferencesDataModel::__cordl_internal_get_Overdub() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Overdub;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_Overdub(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Overdub = value;
}
constexpr bool& VROSC::UserPreferencesDataModel::__cordl_internal_get_SetRecordingLengthToFirstLoopLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetRecordingLengthToFirstLoopLength;
}
constexpr bool const& VROSC::UserPreferencesDataModel::__cordl_internal_get_SetRecordingLengthToFirstLoopLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetRecordingLengthToFirstLoopLength;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_SetRecordingLengthToFirstLoopLength(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SetRecordingLengthToFirstLoopLength = value;
}
constexpr ::VROSC::Metronome_Mode& VROSC::UserPreferencesDataModel::__cordl_internal_get_MetronomeMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MetronomeMode;
}
constexpr ::VROSC::Metronome_Mode const& VROSC::UserPreferencesDataModel::__cordl_internal_get_MetronomeMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MetronomeMode;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_MetronomeMode(::VROSC::Metronome_Mode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MetronomeMode = value;
}
constexpr ::VROSC::Metronome_Medium& VROSC::UserPreferencesDataModel::__cordl_internal_get_MetronomeMedium()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MetronomeMedium;
}
constexpr ::VROSC::Metronome_Medium const& VROSC::UserPreferencesDataModel::__cordl_internal_get_MetronomeMedium() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MetronomeMedium;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_MetronomeMedium(::VROSC::Metronome_Medium  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MetronomeMedium = value;
}
constexpr ::StringW& VROSC::UserPreferencesDataModel::__cordl_internal_get_SelectedEnvironment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedEnvironment;
}
constexpr ::StringW const& VROSC::UserPreferencesDataModel::__cordl_internal_get_SelectedEnvironment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedEnvironment;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_SelectedEnvironment(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SelectedEnvironment)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::UserPreferencesDataModel::__cordl_internal_get_OverrideEnvironmentSettingsOnLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideEnvironmentSettingsOnLoad;
}
constexpr bool const& VROSC::UserPreferencesDataModel::__cordl_internal_get_OverrideEnvironmentSettingsOnLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideEnvironmentSettingsOnLoad;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_OverrideEnvironmentSettingsOnLoad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OverrideEnvironmentSettingsOnLoad = value;
}
constexpr ::StringW& VROSC::UserPreferencesDataModel::__cordl_internal_get_DefaultSessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultSessionId;
}
constexpr ::StringW const& VROSC::UserPreferencesDataModel::__cordl_internal_get_DefaultSessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultSessionId;
}
constexpr void VROSC::UserPreferencesDataModel::__cordl_internal_set_DefaultSessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DefaultSessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW VROSC::UserPreferencesDataModel::get_Key()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataModel*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t VROSC::UserPreferencesDataModel::get_Version()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataModel*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::UserPreferencesDataModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserPreferencesDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UserPreferencesDataModel* VROSC::UserPreferencesDataModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UserPreferencesDataModel*>());
}
// Ctor Parameters []
constexpr ::VROSC::UserPreferencesDataModel::UserPreferencesDataModel()   {
}
