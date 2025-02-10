#pragma once
// IWYU pragma private; include "AudioHelm/Oscillate.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "AudioHelm/zzzz__Oscillate_def.hpp"
//  Writing Method size for method: ::AudioHelm::Oscillate.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Oscillate::*)()>(&::AudioHelm::Oscillate::Start)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181b948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Oscillate*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Oscillate.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Oscillate::*)()>(&::AudioHelm::Oscillate::Update)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181b978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Oscillate*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Oscillate._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Oscillate::*)()>(&::AudioHelm::Oscillate::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x181ba08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Oscillate*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& AudioHelm::Oscillate::__cordl_internal_get_oscillationVector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oscillationVector;
}
constexpr ::UnityEngine::Vector3 const& AudioHelm::Oscillate::__cordl_internal_get_oscillationVector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oscillationVector;
}
constexpr void AudioHelm::Oscillate::__cordl_internal_set_oscillationVector(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oscillationVector = value;
}
constexpr float_t& AudioHelm::Oscillate::__cordl_internal_get_freqeuncy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freqeuncy;
}
constexpr float_t const& AudioHelm::Oscillate::__cordl_internal_get_freqeuncy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freqeuncy;
}
constexpr void AudioHelm::Oscillate::__cordl_internal_set_freqeuncy(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___freqeuncy = value;
}
constexpr float_t& AudioHelm::Oscillate::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr float_t const& AudioHelm::Oscillate::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void AudioHelm::Oscillate::__cordl_internal_set_progress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
constexpr ::UnityEngine::Vector3& AudioHelm::Oscillate::__cordl_internal_get_startingPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingPosition;
}
constexpr ::UnityEngine::Vector3 const& AudioHelm::Oscillate::__cordl_internal_get_startingPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingPosition;
}
constexpr void AudioHelm::Oscillate::__cordl_internal_set_startingPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingPosition = value;
}
inline void AudioHelm::Oscillate::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Oscillate*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::Oscillate::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Oscillate*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::Oscillate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Oscillate*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::Oscillate* AudioHelm::Oscillate::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::Oscillate*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::Oscillate::Oscillate()   {
}
