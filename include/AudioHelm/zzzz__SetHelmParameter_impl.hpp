#pragma once
// IWYU pragma private; include "AudioHelm/SetHelmParameter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "AudioHelm/zzzz__SetHelmParameter_def.hpp"
#include "AudioHelm/zzzz__HelmController_def.hpp"
//  Writing Method size for method: ::AudioHelm::SetHelmParameter.SetPercent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::SetHelmParameter::*)()>(&::AudioHelm::SetHelmParameter::SetPercent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ce0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::SetHelmParameter*>::get(),
                        "SetPercent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::SetHelmParameter.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::SetHelmParameter::*)()>(&::AudioHelm::SetHelmParameter::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x181cf8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::SetHelmParameter*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::SetHelmParameter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::SetHelmParameter::*)()>(&::AudioHelm::SetHelmParameter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x181cf90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::SetHelmParameter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& AudioHelm::SetHelmParameter::__cordl_internal_get_parameterIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameterIndex;
}
constexpr int32_t const& AudioHelm::SetHelmParameter::__cordl_internal_get_parameterIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameterIndex;
}
constexpr void AudioHelm::SetHelmParameter::__cordl_internal_set_parameterIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parameterIndex = value;
}
constexpr ::UnityW<::AudioHelm::HelmController>& AudioHelm::SetHelmParameter::__cordl_internal_get_controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controller;
}
constexpr ::UnityW<::AudioHelm::HelmController> const& AudioHelm::SetHelmParameter::__cordl_internal_get_controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controller;
}
constexpr void AudioHelm::SetHelmParameter::__cordl_internal_set_controller(::UnityW<::AudioHelm::HelmController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___controller)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void AudioHelm::SetHelmParameter::SetPercent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::SetHelmParameter*>::get(),
                        "SetPercent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::SetHelmParameter::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::SetHelmParameter*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::SetHelmParameter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::SetHelmParameter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::SetHelmParameter* AudioHelm::SetHelmParameter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::SetHelmParameter*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::SetHelmParameter::SetHelmParameter()   {
}
