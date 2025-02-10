#pragma once
// IWYU pragma private; include "AudioHelm/ToggleParameter.hpp"
#include "AudioHelm/zzzz__Param_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "AudioHelm/zzzz__ToggleParameter_def.hpp"
#include "AudioHelm/zzzz__HelmController_def.hpp"
//  Writing Method size for method: ::AudioHelm::ToggleParameter.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::ToggleParameter::*)()>(&::AudioHelm::ToggleParameter::Start)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x181d27c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::ToggleParameter*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::ToggleParameter.Toggle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::ToggleParameter::*)()>(&::AudioHelm::ToggleParameter::Toggle)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x181d2a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::ToggleParameter*>::get(),
                        "Toggle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::ToggleParameter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::ToggleParameter::*)()>(&::AudioHelm::ToggleParameter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181d2ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::ToggleParameter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::AudioHelm::HelmController>& AudioHelm::ToggleParameter::__cordl_internal_get_controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controller;
}
constexpr ::UnityW<::AudioHelm::HelmController> const& AudioHelm::ToggleParameter::__cordl_internal_get_controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controller;
}
constexpr void AudioHelm::ToggleParameter::__cordl_internal_set_controller(::UnityW<::AudioHelm::HelmController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___controller)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::AudioHelm::Param& AudioHelm::ToggleParameter::__cordl_internal_get_param()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___param;
}
constexpr ::AudioHelm::Param const& AudioHelm::ToggleParameter::__cordl_internal_get_param() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___param;
}
constexpr void AudioHelm::ToggleParameter::__cordl_internal_set_param(::AudioHelm::Param  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___param = value;
}
constexpr float_t& AudioHelm::ToggleParameter::__cordl_internal_get_onValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onValue;
}
constexpr float_t const& AudioHelm::ToggleParameter::__cordl_internal_get_onValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onValue;
}
constexpr void AudioHelm::ToggleParameter::__cordl_internal_set_onValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onValue = value;
}
constexpr float_t& AudioHelm::ToggleParameter::__cordl_internal_get_offValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offValue;
}
constexpr float_t const& AudioHelm::ToggleParameter::__cordl_internal_get_offValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offValue;
}
constexpr void AudioHelm::ToggleParameter::__cordl_internal_set_offValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offValue = value;
}
constexpr bool& AudioHelm::ToggleParameter::__cordl_internal_get_isOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOn;
}
constexpr bool const& AudioHelm::ToggleParameter::__cordl_internal_get_isOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOn;
}
constexpr void AudioHelm::ToggleParameter::__cordl_internal_set_isOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOn = value;
}
inline void AudioHelm::ToggleParameter::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::ToggleParameter*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::ToggleParameter::Toggle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::ToggleParameter*>::get(),
                        "Toggle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::ToggleParameter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::ToggleParameter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::ToggleParameter* AudioHelm::ToggleParameter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::ToggleParameter*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::ToggleParameter::ToggleParameter()   {
}
