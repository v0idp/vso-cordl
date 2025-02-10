#pragma once
// IWYU pragma private; include "AudioHelm/RepetitiveSpawner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "AudioHelm/zzzz__RepetitiveSpawner_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::AudioHelm::RepetitiveSpawner.Spawn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::RepetitiveSpawner::*)()>(&::AudioHelm::RepetitiveSpawner::Spawn)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x181c37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::RepetitiveSpawner*>::get(),
                        "Spawn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::RepetitiveSpawner.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::RepetitiveSpawner::*)()>(&::AudioHelm::RepetitiveSpawner::Update)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x181c4e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::RepetitiveSpawner*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::RepetitiveSpawner._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::RepetitiveSpawner::*)()>(&::AudioHelm::RepetitiveSpawner::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181c53c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::RepetitiveSpawner*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& AudioHelm::RepetitiveSpawner::__cordl_internal_get_model()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___model;
}
constexpr ::UnityW<::UnityEngine::Transform> const& AudioHelm::RepetitiveSpawner::__cordl_internal_get_model() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___model;
}
constexpr void AudioHelm::RepetitiveSpawner::__cordl_internal_set_model(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___model)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& AudioHelm::RepetitiveSpawner::__cordl_internal_get_rate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rate;
}
constexpr float_t const& AudioHelm::RepetitiveSpawner::__cordl_internal_get_rate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rate;
}
constexpr void AudioHelm::RepetitiveSpawner::__cordl_internal_set_rate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rate = value;
}
constexpr float_t& AudioHelm::RepetitiveSpawner::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr float_t const& AudioHelm::RepetitiveSpawner::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void AudioHelm::RepetitiveSpawner::__cordl_internal_set_progress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
inline void AudioHelm::RepetitiveSpawner::Spawn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::RepetitiveSpawner*>::get(),
                        "Spawn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::RepetitiveSpawner::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::RepetitiveSpawner*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::RepetitiveSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::RepetitiveSpawner*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::RepetitiveSpawner* AudioHelm::RepetitiveSpawner::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::RepetitiveSpawner*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::RepetitiveSpawner::RepetitiveSpawner()   {
}
