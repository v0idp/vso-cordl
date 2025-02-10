#pragma once
// IWYU pragma private; include "AudioHelm/HelmParameter.hpp"
#include "AudioHelm/zzzz__Param_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "AudioHelm/zzzz__HelmParameter_def.hpp"
#include "AudioHelm/zzzz__HelmController_def.hpp"
#include "AudioHelm/zzzz__HelmParameter_def.hpp"
#include "AudioHelm/zzzz__Param_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::AudioHelm::HelmParameter_ScaleType::HelmParameter_ScaleType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::AudioHelm::HelmParameter_ScaleType::HelmParameter_ScaleType()   {
}
constexpr ::AudioHelm::HelmParameter_ScaleType  AudioHelm::HelmParameter_ScaleType::kByValue{static_cast<int32_t>(0x0)};
constexpr ::AudioHelm::HelmParameter_ScaleType  AudioHelm::HelmParameter_ScaleType::kByPercent{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::AudioHelm::HelmParameter.get_parameter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AudioHelm::Param (::AudioHelm::HelmParameter::*)()>(&::AudioHelm::HelmParameter::get_parameter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1820540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmParameter*>::get(),
                        "get_parameter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::HelmParameter.set_parameter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::HelmParameter::*)(::AudioHelm::Param)>(&::AudioHelm::HelmParameter::set_parameter)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1820548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmParameter*>::get(),
                        "set_parameter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::HelmParameter.get_paramValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::AudioHelm::HelmParameter::*)()>(&::AudioHelm::HelmParameter::get_paramValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18205e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmParameter*>::get(),
                        "get_paramValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::HelmParameter.set_paramValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::HelmParameter::*)(float_t)>(&::AudioHelm::HelmParameter::set_paramValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x181f374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmParameter*>::get(),
                        "set_paramValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::HelmParameter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::HelmParameter::*)()>(&::AudioHelm::HelmParameter::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x18206c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmParameter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::HelmParameter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::HelmParameter::*)(::AudioHelm::HelmController*)>(&::AudioHelm::HelmParameter::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181f560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmParameter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::HelmController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::HelmParameter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::HelmParameter::*)(::AudioHelm::HelmController*, ::AudioHelm::Param)>(&::AudioHelm::HelmParameter::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181f6a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmParameter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::HelmController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::HelmParameter.GetMinimumRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::AudioHelm::HelmParameter::*)()>(&::AudioHelm::HelmParameter::GetMinimumRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18206fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmParameter*>::get(),
                        "GetMinimumRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::HelmParameter.GetMaximumRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::AudioHelm::HelmParameter::*)()>(&::AudioHelm::HelmParameter::GetMaximumRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1820704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmParameter*>::get(),
                        "GetMaximumRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::HelmParameter.UpdateMinMax
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::HelmParameter::*)()>(&::AudioHelm::HelmParameter::UpdateMinMax)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1820560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmParameter*>::get(),
                        "UpdateMinMax",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::HelmParameter.UpdateNative
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::HelmParameter::*)()>(&::AudioHelm::HelmParameter::UpdateNative)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18205e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmParameter*>::get(),
                        "UpdateNative",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::AudioHelm::Param& AudioHelm::HelmParameter::__cordl_internal_get_parameter_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameter_;
}
constexpr ::AudioHelm::Param const& AudioHelm::HelmParameter::__cordl_internal_get_parameter_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameter_;
}
constexpr void AudioHelm::HelmParameter::__cordl_internal_set_parameter_(::AudioHelm::Param  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parameter_ = value;
}
constexpr ::AudioHelm::HelmParameter_ScaleType& AudioHelm::HelmParameter::__cordl_internal_get_scaleType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleType;
}
constexpr ::AudioHelm::HelmParameter_ScaleType const& AudioHelm::HelmParameter::__cordl_internal_get_scaleType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleType;
}
constexpr void AudioHelm::HelmParameter::__cordl_internal_set_scaleType(::AudioHelm::HelmParameter_ScaleType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleType = value;
}
constexpr ::UnityW<::AudioHelm::HelmController>& AudioHelm::HelmParameter::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr ::UnityW<::AudioHelm::HelmController> const& AudioHelm::HelmParameter::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr void AudioHelm::HelmParameter::__cordl_internal_set_parent(::UnityW<::AudioHelm::HelmController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& AudioHelm::HelmParameter::__cordl_internal_get_lastValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastValue;
}
constexpr float_t const& AudioHelm::HelmParameter::__cordl_internal_get_lastValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastValue;
}
constexpr void AudioHelm::HelmParameter::__cordl_internal_set_lastValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastValue = value;
}
constexpr float_t& AudioHelm::HelmParameter::__cordl_internal_get_minimumRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumRange;
}
constexpr float_t const& AudioHelm::HelmParameter::__cordl_internal_get_minimumRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumRange;
}
constexpr void AudioHelm::HelmParameter::__cordl_internal_set_minimumRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minimumRange = value;
}
constexpr float_t& AudioHelm::HelmParameter::__cordl_internal_get_maximumRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumRange;
}
constexpr float_t const& AudioHelm::HelmParameter::__cordl_internal_get_maximumRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumRange;
}
constexpr void AudioHelm::HelmParameter::__cordl_internal_set_maximumRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maximumRange = value;
}
constexpr float_t& AudioHelm::HelmParameter::__cordl_internal_get_paramValue_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paramValue_;
}
constexpr float_t const& AudioHelm::HelmParameter::__cordl_internal_get_paramValue_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paramValue_;
}
constexpr void AudioHelm::HelmParameter::__cordl_internal_set_paramValue_(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___paramValue_ = value;
}
inline ::AudioHelm::Param AudioHelm::HelmParameter::get_parameter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmParameter*>::get(),
                        "get_parameter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::AudioHelm::Param, false>(this, ___internal_method);
}
inline void AudioHelm::HelmParameter::set_parameter(::AudioHelm::Param  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmParameter*>::get(),
                        "set_parameter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t AudioHelm::HelmParameter::get_paramValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmParameter*>::get(),
                        "get_paramValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void AudioHelm::HelmParameter::set_paramValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmParameter*>::get(),
                        "set_paramValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void AudioHelm::HelmParameter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmParameter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::HelmParameter::_ctor(::AudioHelm::HelmController*  par)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmParameter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::HelmController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, par);
}
inline void AudioHelm::HelmParameter::_ctor(::AudioHelm::HelmController*  par, ::AudioHelm::Param  param)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmParameter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::HelmController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, par, param);
}
inline float_t AudioHelm::HelmParameter::GetMinimumRange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmParameter*>::get(),
                        "GetMinimumRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t AudioHelm::HelmParameter::GetMaximumRange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmParameter*>::get(),
                        "GetMaximumRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void AudioHelm::HelmParameter::UpdateMinMax()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmParameter*>::get(),
                        "UpdateMinMax",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::HelmParameter::UpdateNative()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmParameter*>::get(),
                        "UpdateNative",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::HelmParameter* AudioHelm::HelmParameter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::HelmParameter*>());
}
inline ::AudioHelm::HelmParameter* AudioHelm::HelmParameter::New_ctor(::AudioHelm::HelmController*  par)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::HelmParameter*>(par));
}
inline ::AudioHelm::HelmParameter* AudioHelm::HelmParameter::New_ctor(::AudioHelm::HelmController*  par, ::AudioHelm::Param  param)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::HelmParameter*>(par, param));
}
// Ctor Parameters []
constexpr ::AudioHelm::HelmParameter::HelmParameter()   {
}
