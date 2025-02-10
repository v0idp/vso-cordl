#pragma once
// IWYU pragma private; include "AudioHelm/BounceAudio2d.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "AudioHelm/zzzz__BounceAudio2d_def.hpp"
#include "AudioHelm/zzzz__HelmController_def.hpp"
#include "UnityEngine/zzzz__Collision2D_def.hpp"
//  Writing Method size for method: ::AudioHelm::BounceAudio2d.GetCollisionStrength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::AudioHelm::BounceAudio2d::*)(::UnityEngine::Collision2D*)>(&::AudioHelm::BounceAudio2d::GetCollisionStrength)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x181993c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::BounceAudio2d*>::get(),
                        "GetCollisionStrength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collision2D*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::BounceAudio2d.GetNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::AudioHelm::BounceAudio2d::*)()>(&::AudioHelm::BounceAudio2d::GetNote)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1819ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::BounceAudio2d*>::get(),
                        "GetNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::BounceAudio2d.OnCollisionEnter2D
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::BounceAudio2d::*)(::UnityEngine::Collision2D*)>(&::AudioHelm::BounceAudio2d::OnCollisionEnter2D)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1819bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::BounceAudio2d*>::get(),
                        "OnCollisionEnter2D",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collision2D*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::BounceAudio2d._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::BounceAudio2d::*)()>(&::AudioHelm::BounceAudio2d::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1819de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::BounceAudio2d*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::AudioHelm::HelmController>& AudioHelm::BounceAudio2d::__cordl_internal_get_synth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synth;
}
constexpr ::UnityW<::AudioHelm::HelmController> const& AudioHelm::BounceAudio2d::__cordl_internal_get_synth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synth;
}
constexpr void AudioHelm::BounceAudio2d::__cordl_internal_set_synth(::UnityW<::AudioHelm::HelmController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___synth)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& AudioHelm::BounceAudio2d::__cordl_internal_get_scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& AudioHelm::BounceAudio2d::__cordl_internal_get_scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr void AudioHelm::BounceAudio2d::__cordl_internal_set_scale(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scale)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& AudioHelm::BounceAudio2d::__cordl_internal_get_minNote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minNote;
}
constexpr int32_t const& AudioHelm::BounceAudio2d::__cordl_internal_get_minNote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minNote;
}
constexpr void AudioHelm::BounceAudio2d::__cordl_internal_set_minNote(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minNote = value;
}
constexpr float_t& AudioHelm::BounceAudio2d::__cordl_internal_get_maxSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSize;
}
constexpr float_t const& AudioHelm::BounceAudio2d::__cordl_internal_get_maxSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSize;
}
constexpr void AudioHelm::BounceAudio2d::__cordl_internal_set_maxSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSize = value;
}
constexpr float_t& AudioHelm::BounceAudio2d::__cordl_internal_get_noteLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noteLength;
}
constexpr float_t const& AudioHelm::BounceAudio2d::__cordl_internal_get_noteLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noteLength;
}
constexpr void AudioHelm::BounceAudio2d::__cordl_internal_set_noteLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noteLength = value;
}
constexpr float_t& AudioHelm::BounceAudio2d::__cordl_internal_get_maxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr float_t const& AudioHelm::BounceAudio2d::__cordl_internal_get_maxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr void AudioHelm::BounceAudio2d::__cordl_internal_set_maxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpeed = value;
}
inline float_t AudioHelm::BounceAudio2d::GetCollisionStrength(::UnityEngine::Collision2D*  collision)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::BounceAudio2d*>::get(),
                        "GetCollisionStrength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collision2D*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, collision);
}
inline int32_t AudioHelm::BounceAudio2d::GetNote()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::BounceAudio2d*>::get(),
                        "GetNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void AudioHelm::BounceAudio2d::OnCollisionEnter2D(::UnityEngine::Collision2D*  collision)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::BounceAudio2d*>::get(),
                        "OnCollisionEnter2D",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collision2D*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collision);
}
inline void AudioHelm::BounceAudio2d::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::BounceAudio2d*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::BounceAudio2d* AudioHelm::BounceAudio2d::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::BounceAudio2d*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::BounceAudio2d::BounceAudio2d()   {
}
