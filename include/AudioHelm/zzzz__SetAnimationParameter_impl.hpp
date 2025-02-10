#pragma once
// IWYU pragma private; include "AudioHelm/SetAnimationParameter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "AudioHelm/zzzz__SetAnimationParameter_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::AudioHelm::SetAnimationParameter.SetValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::SetAnimationParameter::*)()>(&::AudioHelm::SetAnimationParameter::SetValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181cd80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::SetAnimationParameter*>::get(),
                        "SetValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::SetAnimationParameter.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::SetAnimationParameter::*)()>(&::AudioHelm::SetAnimationParameter::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x181ce00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::SetAnimationParameter*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::SetAnimationParameter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::SetAnimationParameter::*)()>(&::AudioHelm::SetAnimationParameter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x181ce04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::SetAnimationParameter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& AudioHelm::SetAnimationParameter::__cordl_internal_get_parameter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameter;
}
constexpr ::StringW const& AudioHelm::SetAnimationParameter::__cordl_internal_get_parameter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameter;
}
constexpr void AudioHelm::SetAnimationParameter::__cordl_internal_set_parameter(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parameter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Animator>& AudioHelm::SetAnimationParameter::__cordl_internal_get_animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& AudioHelm::SetAnimationParameter::__cordl_internal_get_animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr void AudioHelm::SetAnimationParameter::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___animator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void AudioHelm::SetAnimationParameter::SetValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::SetAnimationParameter*>::get(),
                        "SetValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::SetAnimationParameter::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::SetAnimationParameter*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::SetAnimationParameter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::SetAnimationParameter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::SetAnimationParameter* AudioHelm::SetAnimationParameter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::SetAnimationParameter*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::SetAnimationParameter::SetAnimationParameter()   {
}
