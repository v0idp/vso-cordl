#pragma once
// IWYU pragma private; include "AudioHelm/HelmPatchSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "AudioHelm/zzzz__HelmPatchSettings_def.hpp"
#include "AudioHelm/zzzz__HelmModulationSetting_def.hpp"
//  Writing Method size for method: ::AudioHelm::HelmPatchSettings.ConvertToPlugin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::AudioHelm::HelmPatchSettings::ConvertToPlugin)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x1820878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmPatchSettings*>::get(),
                        "ConvertToPlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::HelmPatchSettings.GetSourceIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::AudioHelm::HelmPatchSettings::GetSourceIndex)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x18209c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmPatchSettings*>::get(),
                        "GetSourceIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::HelmPatchSettings.GetDestinationIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::AudioHelm::HelmPatchSettings::GetDestinationIndex)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x1820a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmPatchSettings*>::get(),
                        "GetDestinationIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::HelmPatchSettings.Clone
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AudioHelm::HelmPatchSettings* (*)(::AudioHelm::HelmPatchSettings*)>(&::AudioHelm::HelmPatchSettings::Clone)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x1820b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmPatchSettings*>::get(),
                        "Clone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::HelmPatchSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::HelmPatchSettings._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::HelmPatchSettings::*)()>(&::AudioHelm::HelmPatchSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1820da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmPatchSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_amp_attack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amp_attack;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_amp_attack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amp_attack;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_amp_attack(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___amp_attack = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_amp_decay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amp_decay;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_amp_decay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amp_decay;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_amp_decay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___amp_decay = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_amp_release()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amp_release;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_amp_release() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amp_release;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_amp_release(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___amp_release = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_amp_sustain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amp_sustain;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_amp_sustain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amp_sustain;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_amp_sustain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___amp_sustain = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_arp_frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arp_frequency;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_arp_frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arp_frequency;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_arp_frequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arp_frequency = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_arp_gate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arp_gate;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_arp_gate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arp_gate;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_arp_gate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arp_gate = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_arp_octaves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arp_octaves;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_arp_octaves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arp_octaves;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_arp_octaves(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arp_octaves = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_arp_on()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arp_on;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_arp_on() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arp_on;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_arp_on(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arp_on = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_arp_pattern()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arp_pattern;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_arp_pattern() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arp_pattern;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_arp_pattern(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arp_pattern = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_arp_sync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arp_sync;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_arp_sync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arp_sync;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_arp_sync(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arp_sync = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_arp_tempo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arp_tempo;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_arp_tempo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arp_tempo;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_arp_tempo(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arp_tempo = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_beats_per_minute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beats_per_minute;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_beats_per_minute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beats_per_minute;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_beats_per_minute(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beats_per_minute = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_cross_modulation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cross_modulation;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_cross_modulation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cross_modulation;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_cross_modulation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cross_modulation = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_cutoff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cutoff;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_cutoff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cutoff;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_cutoff(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cutoff = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_delay_dry_wet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay_dry_wet;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_delay_dry_wet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay_dry_wet;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_delay_dry_wet(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delay_dry_wet = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_delay_feedback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay_feedback;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_delay_feedback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay_feedback;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_delay_feedback(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delay_feedback = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_delay_frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay_frequency;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_delay_frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay_frequency;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_delay_frequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delay_frequency = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_delay_on()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay_on;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_delay_on() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay_on;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_delay_on(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delay_on = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_delay_sync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay_sync;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_delay_sync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay_sync;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_delay_sync(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delay_sync = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_delay_tempo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay_tempo;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_delay_tempo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay_tempo;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_delay_tempo(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delay_tempo = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_distortion_drive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distortion_drive;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_distortion_drive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distortion_drive;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_distortion_drive(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distortion_drive = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_distortion_mix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distortion_mix;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_distortion_mix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distortion_mix;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_distortion_mix(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distortion_mix = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_distortion_on()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distortion_on;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_distortion_on() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distortion_on;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_distortion_on(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distortion_on = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_distortion_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distortion_type;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_distortion_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distortion_type;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_distortion_type(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distortion_type = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_fil_attack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fil_attack;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_fil_attack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fil_attack;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_fil_attack(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fil_attack = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_fil_decay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fil_decay;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_fil_decay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fil_decay;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_fil_decay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fil_decay = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_fil_env_depth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fil_env_depth;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_fil_env_depth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fil_env_depth;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_fil_env_depth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fil_env_depth = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_fil_release()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fil_release;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_fil_release() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fil_release;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_fil_release(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fil_release = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_fil_sustain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fil_sustain;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_fil_sustain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fil_sustain;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_fil_sustain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fil_sustain = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_filter_blend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter_blend;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_filter_blend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter_blend;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_filter_blend(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filter_blend = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_filter_drive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter_drive;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_filter_drive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter_drive;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_filter_drive(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filter_drive = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_filter_on()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter_on;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_filter_on() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter_on;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_filter_on(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filter_on = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_filter_saturation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter_saturation;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_filter_saturation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter_saturation;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_filter_saturation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filter_saturation = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_filter_shelf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter_shelf;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_filter_shelf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter_shelf;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_filter_shelf(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filter_shelf = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_filter_style()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter_style;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_filter_style() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter_style;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_filter_style(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filter_style = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_filter_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter_type;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_filter_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter_type;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_filter_type(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filter_type = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_formant_on()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formant_on;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_formant_on() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formant_on;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_formant_on(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___formant_on = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_formant_x()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formant_x;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_formant_x() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formant_x;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_formant_x(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___formant_x = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_formant_y()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formant_y;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_formant_y() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formant_y;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_formant_y(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___formant_y = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_keytrack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keytrack;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_keytrack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keytrack;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_keytrack(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keytrack = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_legato()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legato;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_legato() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legato;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_legato(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___legato = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_mod_attack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mod_attack;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_mod_attack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mod_attack;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_mod_attack(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mod_attack = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_mod_decay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mod_decay;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_mod_decay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mod_decay;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_mod_decay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mod_decay = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_mod_release()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mod_release;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_mod_release() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mod_release;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_mod_release(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mod_release = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_mod_sustain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mod_sustain;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_mod_sustain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mod_sustain;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_mod_sustain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mod_sustain = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_1_amplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_1_amplitude;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_1_amplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_1_amplitude;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_mono_lfo_1_amplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mono_lfo_1_amplitude = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_1_frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_1_frequency;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_1_frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_1_frequency;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_mono_lfo_1_frequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mono_lfo_1_frequency = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_1_retrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_1_retrigger;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_1_retrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_1_retrigger;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_mono_lfo_1_retrigger(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mono_lfo_1_retrigger = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_1_sync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_1_sync;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_1_sync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_1_sync;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_mono_lfo_1_sync(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mono_lfo_1_sync = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_1_tempo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_1_tempo;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_1_tempo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_1_tempo;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_mono_lfo_1_tempo(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mono_lfo_1_tempo = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_1_waveform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_1_waveform;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_1_waveform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_1_waveform;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_mono_lfo_1_waveform(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mono_lfo_1_waveform = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_2_amplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_2_amplitude;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_2_amplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_2_amplitude;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_mono_lfo_2_amplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mono_lfo_2_amplitude = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_2_frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_2_frequency;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_2_frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_2_frequency;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_mono_lfo_2_frequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mono_lfo_2_frequency = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_2_retrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_2_retrigger;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_2_retrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_2_retrigger;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_mono_lfo_2_retrigger(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mono_lfo_2_retrigger = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_2_sync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_2_sync;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_2_sync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_2_sync;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_mono_lfo_2_sync(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mono_lfo_2_sync = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_2_tempo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_2_tempo;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_2_tempo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_2_tempo;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_mono_lfo_2_tempo(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mono_lfo_2_tempo = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_2_waveform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_2_waveform;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_mono_lfo_2_waveform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mono_lfo_2_waveform;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_mono_lfo_2_waveform(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mono_lfo_2_waveform = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_noise_volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noise_volume;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_noise_volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noise_volume;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_noise_volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noise_volume = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_num_steps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___num_steps;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_num_steps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___num_steps;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_num_steps(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___num_steps = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_1_transpose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_1_transpose;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_1_transpose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_1_transpose;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_osc_1_transpose(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___osc_1_transpose = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_1_tune()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_1_tune;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_1_tune() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_1_tune;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_osc_1_tune(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___osc_1_tune = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_1_unison_detune()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_1_unison_detune;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_1_unison_detune() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_1_unison_detune;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_osc_1_unison_detune(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___osc_1_unison_detune = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_1_unison_voices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_1_unison_voices;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_1_unison_voices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_1_unison_voices;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_osc_1_unison_voices(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___osc_1_unison_voices = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_1_volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_1_volume;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_1_volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_1_volume;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_osc_1_volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___osc_1_volume = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_1_waveform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_1_waveform;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_1_waveform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_1_waveform;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_osc_1_waveform(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___osc_1_waveform = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_2_transpose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_2_transpose;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_2_transpose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_2_transpose;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_osc_2_transpose(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___osc_2_transpose = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_2_tune()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_2_tune;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_2_tune() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_2_tune;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_osc_2_tune(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___osc_2_tune = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_2_unison_detune()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_2_unison_detune;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_2_unison_detune() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_2_unison_detune;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_osc_2_unison_detune(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___osc_2_unison_detune = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_2_unison_voices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_2_unison_voices;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_2_unison_voices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_2_unison_voices;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_osc_2_unison_voices(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___osc_2_unison_voices = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_2_volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_2_volume;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_2_volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_2_volume;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_osc_2_volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___osc_2_volume = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_2_waveform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_2_waveform;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_2_waveform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_2_waveform;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_osc_2_waveform(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___osc_2_waveform = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_feedback_amount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_feedback_amount;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_feedback_amount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_feedback_amount;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_osc_feedback_amount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___osc_feedback_amount = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_feedback_transpose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_feedback_transpose;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_feedback_transpose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_feedback_transpose;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_osc_feedback_transpose(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___osc_feedback_transpose = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_feedback_tune()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_feedback_tune;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_feedback_tune() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_feedback_tune;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_osc_feedback_tune(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___osc_feedback_tune = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_mix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_mix;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_osc_mix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osc_mix;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_osc_mix(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___osc_mix = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_pitch_bend_range()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitch_bend_range;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_pitch_bend_range() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitch_bend_range;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_pitch_bend_range(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitch_bend_range = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_poly_lfo_amplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poly_lfo_amplitude;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_poly_lfo_amplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poly_lfo_amplitude;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_poly_lfo_amplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poly_lfo_amplitude = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_poly_lfo_frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poly_lfo_frequency;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_poly_lfo_frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poly_lfo_frequency;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_poly_lfo_frequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poly_lfo_frequency = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_poly_lfo_sync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poly_lfo_sync;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_poly_lfo_sync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poly_lfo_sync;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_poly_lfo_sync(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poly_lfo_sync = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_poly_lfo_tempo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poly_lfo_tempo;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_poly_lfo_tempo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poly_lfo_tempo;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_poly_lfo_tempo(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poly_lfo_tempo = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_poly_lfo_waveform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poly_lfo_waveform;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_poly_lfo_waveform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poly_lfo_waveform;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_poly_lfo_waveform(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poly_lfo_waveform = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_polyphony()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___polyphony;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_polyphony() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___polyphony;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_polyphony(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___polyphony = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_portamento()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___portamento;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_portamento() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___portamento;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_portamento(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___portamento = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_portamento_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___portamento_type;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_portamento_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___portamento_type;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_portamento_type(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___portamento_type = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_resonance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resonance;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_resonance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resonance;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_resonance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resonance = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_reverb_damping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverb_damping;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_reverb_damping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverb_damping;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_reverb_damping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverb_damping = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_reverb_dry_wet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverb_dry_wet;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_reverb_dry_wet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverb_dry_wet;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_reverb_dry_wet(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverb_dry_wet = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_reverb_feedback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverb_feedback;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_reverb_feedback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverb_feedback;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_reverb_feedback(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverb_feedback = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_reverb_on()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverb_on;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_reverb_on() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverb_on;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_reverb_on(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverb_on = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_frequency;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_frequency;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_frequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_frequency = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_00()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_00;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_00() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_00;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_00(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_00 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_01()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_01;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_01() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_01;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_01(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_01 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_02()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_02;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_02() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_02;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_02(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_02 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_03()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_03;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_03() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_03;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_03(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_03 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_04()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_04;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_04() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_04;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_04(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_04 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_05()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_05;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_05() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_05;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_05(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_05 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_06()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_06;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_06() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_06;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_06(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_06 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_07()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_07;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_07() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_07;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_07(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_07 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_08()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_08;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_08() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_08;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_08(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_08 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_09()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_09;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_09() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_09;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_09(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_09 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_10()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_10;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_10() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_10;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_10(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_10 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_11()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_11;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_11() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_11;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_11(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_11 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_12()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_12;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_12() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_12;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_12(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_12 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_13()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_13;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_13() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_13;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_13(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_13 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_14()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_14;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_14() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_14;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_14(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_14 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_15()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_15;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_15() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_15;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_15(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_15 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_16()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_16;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_16() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_16;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_16(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_16 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_17()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_17;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_17() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_17;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_17(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_17 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_18()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_18;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_18() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_18;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_18(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_18 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_19()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_19;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_19() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_19;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_19(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_19 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_20()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_20;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_20() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_20;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_20(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_20 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_21()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_21;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_21() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_21;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_21(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_21 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_22()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_22;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_22() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_22;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_22(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_22 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_23()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_23;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_23() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_23;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_23(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_23 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_24()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_24;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_24() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_24;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_24(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_24 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_25()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_25;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_25() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_25;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_25(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_25 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_26()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_26;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_26() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_26;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_26(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_26 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_27()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_27;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_27() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_27;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_27(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_27 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_28()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_28;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_28() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_28;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_28(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_28 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_29()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_29;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_29() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_29;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_29(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_29 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_30()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_30;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_30() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_30;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_30(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_30 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_31()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_31;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_seq_31() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_seq_31;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_seq_31(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_seq_31 = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_sequencer_retrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_sequencer_retrigger;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_sequencer_retrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_sequencer_retrigger;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_sequencer_retrigger(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_sequencer_retrigger = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_sequencer_sync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_sequencer_sync;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_sequencer_sync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_sequencer_sync;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_sequencer_sync(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_sequencer_sync = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_sequencer_tempo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_sequencer_tempo;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_sequencer_tempo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_sequencer_tempo;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_sequencer_tempo(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_sequencer_tempo = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_smoothing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_smoothing;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_step_smoothing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___step_smoothing;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_step_smoothing(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___step_smoothing = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_stutter_frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stutter_frequency;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_stutter_frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stutter_frequency;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_stutter_frequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stutter_frequency = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_stutter_on()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stutter_on;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_stutter_on() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stutter_on;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_stutter_on(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stutter_on = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_stutter_resample_frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stutter_resample_frequency;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_stutter_resample_frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stutter_resample_frequency;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_stutter_resample_frequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stutter_resample_frequency = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_stutter_resample_sync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stutter_resample_sync;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_stutter_resample_sync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stutter_resample_sync;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_stutter_resample_sync(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stutter_resample_sync = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_stutter_resample_tempo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stutter_resample_tempo;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_stutter_resample_tempo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stutter_resample_tempo;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_stutter_resample_tempo(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stutter_resample_tempo = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_stutter_softness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stutter_softness;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_stutter_softness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stutter_softness;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_stutter_softness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stutter_softness = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_stutter_sync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stutter_sync;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_stutter_sync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stutter_sync;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_stutter_sync(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stutter_sync = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_stutter_tempo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stutter_tempo;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_stutter_tempo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stutter_tempo;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_stutter_tempo(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stutter_tempo = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_sub_octave()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sub_octave;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_sub_octave() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sub_octave;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_sub_octave(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sub_octave = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_sub_shuffle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sub_shuffle;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_sub_shuffle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sub_shuffle;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_sub_shuffle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sub_shuffle = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_sub_volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sub_volume;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_sub_volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sub_volume;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_sub_volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sub_volume = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_sub_waveform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sub_waveform;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_sub_waveform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sub_waveform;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_sub_waveform(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sub_waveform = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_unison_1_harmonize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unison_1_harmonize;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_unison_1_harmonize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unison_1_harmonize;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_unison_1_harmonize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unison_1_harmonize = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_unison_2_harmonize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unison_2_harmonize;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_unison_2_harmonize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unison_2_harmonize;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_unison_2_harmonize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unison_2_harmonize = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_velocity_track()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity_track;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_velocity_track() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity_track;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_velocity_track(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity_track = value;
}
constexpr float_t& AudioHelm::HelmPatchSettings::__cordl_internal_get_volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volume;
}
constexpr float_t const& AudioHelm::HelmPatchSettings::__cordl_internal_get_volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volume;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volume = value;
}
constexpr ::ArrayW<::AudioHelm::HelmModulationSetting*,::Array<::AudioHelm::HelmModulationSetting*>*>& AudioHelm::HelmPatchSettings::__cordl_internal_get_modulations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modulations;
}
constexpr ::ArrayW<::AudioHelm::HelmModulationSetting*,::Array<::AudioHelm::HelmModulationSetting*>*> const& AudioHelm::HelmPatchSettings::__cordl_internal_get_modulations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modulations;
}
constexpr void AudioHelm::HelmPatchSettings::__cordl_internal_set_modulations(::ArrayW<::AudioHelm::HelmModulationSetting*,::Array<::AudioHelm::HelmModulationSetting*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___modulations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void AudioHelm::HelmPatchSettings::setStaticF_kModulationSources(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "kModulationSources", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmPatchSettings*>::get>(std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW,::Array<::StringW>*> AudioHelm::HelmPatchSettings::getStaticF_kModulationSources()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "kModulationSources", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmPatchSettings*>::get>();
}
inline void AudioHelm::HelmPatchSettings::setStaticF_kModulationDestinations(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "kModulationDestinations", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmPatchSettings*>::get>(std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW,::Array<::StringW>*> AudioHelm::HelmPatchSettings::getStaticF_kModulationDestinations()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "kModulationDestinations", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmPatchSettings*>::get>();
}
inline void AudioHelm::HelmPatchSettings::setStaticF_kShortenNames(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "kShortenNames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmPatchSettings*>::get>(std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW,::Array<::StringW>*> AudioHelm::HelmPatchSettings::getStaticF_kShortenNames()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "kShortenNames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmPatchSettings*>::get>();
}
inline ::StringW AudioHelm::HelmPatchSettings::ConvertToPlugin(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmPatchSettings*>::get(),
                        "ConvertToPlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, name);
}
inline int32_t AudioHelm::HelmPatchSettings::GetSourceIndex(::StringW  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmPatchSettings*>::get(),
                        "GetSourceIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, source);
}
inline int32_t AudioHelm::HelmPatchSettings::GetDestinationIndex(::StringW  dest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmPatchSettings*>::get(),
                        "GetDestinationIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, dest);
}
inline ::AudioHelm::HelmPatchSettings* AudioHelm::HelmPatchSettings::Clone(::AudioHelm::HelmPatchSettings*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmPatchSettings*>::get(),
                        "Clone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::HelmPatchSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::AudioHelm::HelmPatchSettings*, false>(nullptr, ___internal_method, other);
}
inline void AudioHelm::HelmPatchSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmPatchSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::HelmPatchSettings* AudioHelm::HelmPatchSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::HelmPatchSettings*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::HelmPatchSettings::HelmPatchSettings()   {
}
