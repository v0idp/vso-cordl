#pragma once
// IWYU pragma private; include "AudioHelm/Keyzone.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "AudioHelm/zzzz__Keyzone_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerGroup_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::AudioHelm::Keyzone.ValidForNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::AudioHelm::Keyzone::*)(int32_t)>(&::AudioHelm::Keyzone::ValidForNote)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x182399c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Keyzone*>::get(),
                        "ValidForNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Keyzone.ValidForNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::AudioHelm::Keyzone::*)(int32_t, float_t)>(&::AudioHelm::Keyzone::ValidForNote)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1823a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Keyzone*>::get(),
                        "ValidForNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Keyzone._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Keyzone::*)()>(&::AudioHelm::Keyzone::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1823a6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Keyzone*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioClip>& AudioHelm::Keyzone::__cordl_internal_get_audioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& AudioHelm::Keyzone::__cordl_internal_get_audioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClip;
}
constexpr void AudioHelm::Keyzone::__cordl_internal_set_audioClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& AudioHelm::Keyzone::__cordl_internal_get_mixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixer;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& AudioHelm::Keyzone::__cordl_internal_get_mixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixer;
}
constexpr void AudioHelm::Keyzone::__cordl_internal_set_mixer(::UnityW<::UnityEngine::Audio::AudioMixerGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mixer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& AudioHelm::Keyzone::__cordl_internal_get_rootKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rootKey;
}
constexpr int32_t const& AudioHelm::Keyzone::__cordl_internal_get_rootKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rootKey;
}
constexpr void AudioHelm::Keyzone::__cordl_internal_set_rootKey(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rootKey = value;
}
constexpr int32_t& AudioHelm::Keyzone::__cordl_internal_get_minKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minKey;
}
constexpr int32_t const& AudioHelm::Keyzone::__cordl_internal_get_minKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minKey;
}
constexpr void AudioHelm::Keyzone::__cordl_internal_set_minKey(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minKey = value;
}
constexpr int32_t& AudioHelm::Keyzone::__cordl_internal_get_maxKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxKey;
}
constexpr int32_t const& AudioHelm::Keyzone::__cordl_internal_get_maxKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxKey;
}
constexpr void AudioHelm::Keyzone::__cordl_internal_set_maxKey(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxKey = value;
}
constexpr float_t& AudioHelm::Keyzone::__cordl_internal_get_minVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minVelocity;
}
constexpr float_t const& AudioHelm::Keyzone::__cordl_internal_get_minVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minVelocity;
}
constexpr void AudioHelm::Keyzone::__cordl_internal_set_minVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minVelocity = value;
}
constexpr float_t& AudioHelm::Keyzone::__cordl_internal_get_maxVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVelocity;
}
constexpr float_t const& AudioHelm::Keyzone::__cordl_internal_get_maxVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVelocity;
}
constexpr void AudioHelm::Keyzone::__cordl_internal_set_maxVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxVelocity = value;
}
constexpr double_t& AudioHelm::Keyzone::__cordl_internal_get_lastScheduled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastScheduled;
}
constexpr double_t const& AudioHelm::Keyzone::__cordl_internal_get_lastScheduled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastScheduled;
}
constexpr void AudioHelm::Keyzone::__cordl_internal_set_lastScheduled(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastScheduled = value;
}
inline bool AudioHelm::Keyzone::ValidForNote(int32_t  note)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Keyzone*>::get(),
                        "ValidForNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, note);
}
inline bool AudioHelm::Keyzone::ValidForNote(int32_t  note, float_t  velocity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Keyzone*>::get(),
                        "ValidForNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, note, velocity);
}
inline void AudioHelm::Keyzone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Keyzone*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::Keyzone* AudioHelm::Keyzone::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::Keyzone*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::Keyzone::Keyzone()   {
}
