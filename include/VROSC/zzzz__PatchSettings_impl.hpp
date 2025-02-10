#pragma once
// IWYU pragma private; include "VROSC/PatchSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__PatchSettings_def.hpp"
#include "AudioHelm/zzzz__HelmPatchFormat_def.hpp"
#include "AudioHelm/zzzz__Param_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__PatchSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::PatchSettings_VirtuosoHelmParam::PatchSettings_VirtuosoHelmParam(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::PatchSettings_VirtuosoHelmParam::PatchSettings_VirtuosoHelmParam()   {
}
constexpr ::VROSC::PatchSettings_VirtuosoHelmParam  VROSC::PatchSettings_VirtuosoHelmParam::LinkHands{static_cast<int32_t>(0x0)};
constexpr ::VROSC::PatchSettings_VirtuosoHelmParam  VROSC::PatchSettings_VirtuosoHelmParam::DistortionNormalizeVolume{static_cast<int32_t>(0x1)};
constexpr ::VROSC::PatchSettings_VirtuosoHelmParam  VROSC::PatchSettings_VirtuosoHelmParam::PatchVolume{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::VROSC::PatchSettings._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PatchSettings::*)()>(&::VROSC::PatchSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17cb5b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PatchSettings._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PatchSettings::*)(::AudioHelm::HelmPatchFormat*)>(&::VROSC::PatchSettings::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x17cb5bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::HelmPatchFormat*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PatchSettings.GetVirtuosoAdjustedPercentValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::AudioHelm::Param, float_t)>(&::VROSC::PatchSettings::GetVirtuosoAdjustedPercentValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x17c8acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchSettings*>::get(),
                        "GetVirtuosoAdjustedPercentValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PatchSettings.ConvertHelmPercentToVirtuoso
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::PatchSettings::*)(::AudioHelm::Param, float_t)>(&::VROSC::PatchSettings::ConvertHelmPercentToVirtuoso)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x17cb794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchSettings*>::get(),
                        "ConvertHelmPercentToVirtuoso",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PatchSettings.SetParameterPercent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PatchSettings::*)(::AudioHelm::Param, float_t)>(&::VROSC::PatchSettings::SetParameterPercent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x17ca91c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchSettings*>::get(),
                        "SetParameterPercent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PatchSettings.GetParameterPercent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::PatchSettings::*)(::AudioHelm::Param)>(&::VROSC::PatchSettings::GetParameterPercent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x17cb7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchSettings*>::get(),
                        "GetParameterPercent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PatchSettings.SetVirtuosoParameterValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PatchSettings::*)(::VROSC::PatchSettings_VirtuosoHelmParam, ::System::Object*)>(&::VROSC::PatchSettings::SetVirtuosoParameterValue)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x17cb64c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchSettings*>::get(),
                        "SetVirtuosoParameterValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings_VirtuosoHelmParam>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PatchSettings.GetVirtuosoParameterValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::PatchSettings::*)(::VROSC::PatchSettings_VirtuosoHelmParam)>(&::VROSC::PatchSettings::GetVirtuosoParameterValue)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x17cbfec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchSettings*>::get(),
                        "GetVirtuosoParameterValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings_VirtuosoHelmParam>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PatchSettings.SetParameterValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PatchSettings::*)(::AudioHelm::Param, float_t)>(&::VROSC::PatchSettings::SetParameterValue)> {
  constexpr static std::size_t size = 0xa20;
  constexpr static std::size_t addrs = 0x17c9efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchSettings*>::get(),
                        "SetParameterValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PatchSettings.GetParameterValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::PatchSettings::*)(::AudioHelm::Param)>(&::VROSC::PatchSettings::GetParameterValue)> {
  constexpr static std::size_t size = 0x74c;
  constexpr static std::size_t addrs = 0x17cb8a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchSettings*>::get(),
                        "GetParameterValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::AudioHelm::HelmPatchFormat*& VROSC::PatchSettings::__cordl_internal_get_Patch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Patch;
}
constexpr ::AudioHelm::HelmPatchFormat* const& VROSC::PatchSettings::__cordl_internal_get_Patch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Patch;
}
constexpr void VROSC::PatchSettings::__cordl_internal_set_Patch(::AudioHelm::HelmPatchFormat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Patch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::PatchSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::PatchSettings::_ctor(::AudioHelm::HelmPatchFormat*  patch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::HelmPatchFormat*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, patch);
}
inline float_t VROSC::PatchSettings::GetVirtuosoAdjustedPercentValue(::AudioHelm::Param  parameter, float_t  percent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchSettings*>::get(),
                        "GetVirtuosoAdjustedPercentValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, parameter, percent);
}
inline float_t VROSC::PatchSettings::ConvertHelmPercentToVirtuoso(::AudioHelm::Param  parameter, float_t  percent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchSettings*>::get(),
                        "ConvertHelmPercentToVirtuoso",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, parameter, percent);
}
inline void VROSC::PatchSettings::SetParameterPercent(::AudioHelm::Param  parameter, float_t  percent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchSettings*>::get(),
                        "SetParameterPercent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameter, percent);
}
inline float_t VROSC::PatchSettings::GetParameterPercent(::AudioHelm::Param  parameter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchSettings*>::get(),
                        "GetParameterPercent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, parameter);
}
inline void VROSC::PatchSettings::SetVirtuosoParameterValue(::VROSC::PatchSettings_VirtuosoHelmParam  helmParam, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchSettings*>::get(),
                        "SetVirtuosoParameterValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings_VirtuosoHelmParam>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, helmParam, value);
}
inline ::System::Object* VROSC::PatchSettings::GetVirtuosoParameterValue(::VROSC::PatchSettings_VirtuosoHelmParam  helmParam)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchSettings*>::get(),
                        "GetVirtuosoParameterValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings_VirtuosoHelmParam>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, helmParam);
}
inline void VROSC::PatchSettings::SetParameterValue(::AudioHelm::Param  parameter, float_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchSettings*>::get(),
                        "SetParameterValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameter, newValue);
}
inline float_t VROSC::PatchSettings::GetParameterValue(::AudioHelm::Param  parameter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchSettings*>::get(),
                        "GetParameterValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Param>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, parameter);
}
inline ::VROSC::PatchSettings* VROSC::PatchSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PatchSettings*>());
}
inline ::VROSC::PatchSettings* VROSC::PatchSettings::New_ctor(::AudioHelm::HelmPatchFormat*  patch)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PatchSettings*>(patch));
}
// Ctor Parameters []
constexpr ::VROSC::PatchSettings::PatchSettings()   {
}
