#pragma once
// IWYU pragma private; include "AudioHelm/HelmAudioInit.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "AudioHelm/zzzz__HelmAudioInit_def.hpp"
#include "AudioHelm/zzzz__HelmAudioReceive_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerGroup_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::AudioHelm::HelmAudioInit.GetChannel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::AudioHelm::HelmAudioInit::*)()>(&::AudioHelm::HelmAudioInit::GetChannel)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x181dc94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmAudioInit*>::get(),
                        "GetChannel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::HelmAudioInit.SetupSpatialization
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::HelmAudioInit::*)(::UnityEngine::AudioSource*)>(&::AudioHelm::HelmAudioInit::SetupSpatialization)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x181dd8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmAudioInit*>::get(),
                        "SetupSpatialization",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::HelmAudioInit.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::HelmAudioInit::*)()>(&::AudioHelm::HelmAudioInit::Awake)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x181e1b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmAudioInit*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::HelmAudioInit.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::HelmAudioInit::*)()>(&::AudioHelm::HelmAudioInit::Update)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x181e2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmAudioInit*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::HelmAudioInit._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::HelmAudioInit::*)()>(&::AudioHelm::HelmAudioInit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x181e590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmAudioInit*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& AudioHelm::HelmAudioInit::__cordl_internal_get_warnedNoAudioGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warnedNoAudioGroup;
}
constexpr bool const& AudioHelm::HelmAudioInit::__cordl_internal_get_warnedNoAudioGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warnedNoAudioGroup;
}
constexpr void AudioHelm::HelmAudioInit::__cordl_internal_set_warnedNoAudioGroup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___warnedNoAudioGroup = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& AudioHelm::HelmAudioInit::__cordl_internal_get_synthesizerMixerGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synthesizerMixerGroup;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& AudioHelm::HelmAudioInit::__cordl_internal_get_synthesizerMixerGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synthesizerMixerGroup;
}
constexpr void AudioHelm::HelmAudioInit::__cordl_internal_set_synthesizerMixerGroup(::UnityW<::UnityEngine::Audio::AudioMixerGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___synthesizerMixerGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& AudioHelm::HelmAudioInit::__cordl_internal_get_spatializerMixerGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spatializerMixerGroup;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& AudioHelm::HelmAudioInit::__cordl_internal_get_spatializerMixerGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spatializerMixerGroup;
}
constexpr void AudioHelm::HelmAudioInit::__cordl_internal_set_spatializerMixerGroup(::UnityW<::UnityEngine::Audio::AudioMixerGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___spatializerMixerGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioSource>& AudioHelm::HelmAudioInit::__cordl_internal_get_sendAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& AudioHelm::HelmAudioInit::__cordl_internal_get_sendAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendAudioSource;
}
constexpr void AudioHelm::HelmAudioInit::__cordl_internal_set_sendAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sendAudioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& AudioHelm::HelmAudioInit::__cordl_internal_get_wasSpatialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasSpatialized;
}
constexpr bool const& AudioHelm::HelmAudioInit::__cordl_internal_get_wasSpatialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasSpatialized;
}
constexpr void AudioHelm::HelmAudioInit::__cordl_internal_set_wasSpatialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasSpatialized = value;
}
constexpr ::UnityW<::AudioHelm::HelmAudioReceive>& AudioHelm::HelmAudioInit::__cordl_internal_get_receiveAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receiveAudio;
}
constexpr ::UnityW<::AudioHelm::HelmAudioReceive> const& AudioHelm::HelmAudioInit::__cordl_internal_get_receiveAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receiveAudio;
}
constexpr void AudioHelm::HelmAudioInit::__cordl_internal_set_receiveAudio(::UnityW<::AudioHelm::HelmAudioReceive>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___receiveAudio)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t AudioHelm::HelmAudioInit::GetChannel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmAudioInit*>::get(),
                        "GetChannel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void AudioHelm::HelmAudioInit::SetupSpatialization(::UnityEngine::AudioSource*  audioComponent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmAudioInit*>::get(),
                        "SetupSpatialization",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioComponent);
}
inline void AudioHelm::HelmAudioInit::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmAudioInit*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::HelmAudioInit::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmAudioInit*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::HelmAudioInit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmAudioInit*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::HelmAudioInit* AudioHelm::HelmAudioInit::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::HelmAudioInit*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::HelmAudioInit::HelmAudioInit()   {
}
