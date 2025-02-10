#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/RuntimeConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/RemoteConfig/zzzz__ConfigOrigin_impl.hpp"
#include "Unity/Services/RemoteConfig/zzzz__ConfigRequestStatus_impl.hpp"
#include "Unity/Services/RemoteConfig/zzzz__ConfigResponse_impl.hpp"
#include "Unity/Services/RemoteConfig/zzzz__RuntimeConfig_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JObject_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JProperty_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializerSettings_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Unity/Services/RemoteConfig/zzzz__ConfigOrigin_def.hpp"
#include "Unity/Services/RemoteConfig/zzzz__ConfigResponse_def.hpp"
#include "Unity/Services/RemoteConfig/zzzz__RuntimeConfig_def.hpp"
//  Writing Method size for method: ::Unity::Services::RemoteConfig::RuntimeConfig___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::RuntimeConfig___c::*)()>(&::Unity::Services::RemoteConfig::RuntimeConfig___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eab7a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::RuntimeConfig___c._GetKeys_b__34_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::RemoteConfig::RuntimeConfig___c::*)(::Newtonsoft::Json::Linq::JProperty*)>(&::Unity::Services::RemoteConfig::RuntimeConfig___c::_GetKeys_b__34_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2eab7a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig___c*>::get(),
                        "<GetKeys>b__34_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JProperty*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::RemoteConfig::RuntimeConfig___c::setStaticF___9(::Unity::Services::RemoteConfig::RuntimeConfig___c*  value)  {
::cordl_internals::setStaticField<::Unity::Services::RemoteConfig::RuntimeConfig___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig___c*>::get>(std::forward<::Unity::Services::RemoteConfig::RuntimeConfig___c*>(value));
}
inline ::Unity::Services::RemoteConfig::RuntimeConfig___c* Unity::Services::RemoteConfig::RuntimeConfig___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Unity::Services::RemoteConfig::RuntimeConfig___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig___c*>::get>();
}
inline void Unity::Services::RemoteConfig::RuntimeConfig___c::setStaticF___9__34_0(::System::Func_2<::Newtonsoft::Json::Linq::JProperty*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Newtonsoft::Json::Linq::JProperty*,::StringW>*, "<>9__34_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig___c*>::get>(std::forward<::System::Func_2<::Newtonsoft::Json::Linq::JProperty*,::StringW>*>(value));
}
inline ::System::Func_2<::Newtonsoft::Json::Linq::JProperty*,::StringW>* Unity::Services::RemoteConfig::RuntimeConfig___c::getStaticF___9__34_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Newtonsoft::Json::Linq::JProperty*,::StringW>*, "<>9__34_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig___c*>::get>();
}
inline void Unity::Services::RemoteConfig::RuntimeConfig___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::RemoteConfig::RuntimeConfig___c::_GetKeys_b__34_0(::Newtonsoft::Json::Linq::JProperty*  prop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig___c*>::get(),
                        "<GetKeys>b__34_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JProperty*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prop);
}
inline ::Unity::Services::RemoteConfig::RuntimeConfig___c* Unity::Services::RemoteConfig::RuntimeConfig___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::RemoteConfig::RuntimeConfig___c*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::RemoteConfig::RuntimeConfig___c::RuntimeConfig___c()   {
}
//  Writing Method size for method: ::Unity::Services::RemoteConfig::RuntimeConfig.set_origin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::RuntimeConfig::*)(::Unity::Services::RemoteConfig::ConfigOrigin)>(&::Unity::Services::RemoteConfig::RuntimeConfig::set_origin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eab4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig*>::get(),
                        "set_origin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::RemoteConfig::ConfigOrigin>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::RuntimeConfig.set_environmentId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::RuntimeConfig::*)(::StringW)>(&::Unity::Services::RemoteConfig::RuntimeConfig::set_environmentId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eab4fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig*>::get(),
                        "set_environmentId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::RuntimeConfig.set_assignmentId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::RuntimeConfig::*)(::StringW)>(&::Unity::Services::RemoteConfig::RuntimeConfig::set_assignmentId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eab504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig*>::get(),
                        "set_assignmentId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::RuntimeConfig.set_configAssignmentHash
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::RuntimeConfig::*)(::StringW)>(&::Unity::Services::RemoteConfig::RuntimeConfig::set_configAssignmentHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eab50c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig*>::get(),
                        "set_configAssignmentHash",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::RuntimeConfig._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::RuntimeConfig::*)(::StringW)>(&::Unity::Services::RemoteConfig::RuntimeConfig::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ea77a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::RuntimeConfig.HandleConfigResponse
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::RuntimeConfig::*)(::Unity::Services::RemoteConfig::ConfigResponse)>(&::Unity::Services::RemoteConfig::RuntimeConfig::HandleConfigResponse)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x2ea90a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig*>::get(),
                        "HandleConfigResponse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::RemoteConfig::ConfigResponse>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::RuntimeConfig.GetString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::RemoteConfig::RuntimeConfig::*)(::StringW, ::StringW)>(&::Unity::Services::RemoteConfig::RuntimeConfig::GetString)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2eab514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig*>::get(),
                        "GetString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::RuntimeConfig.GetKeys
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW,::Array<::StringW>*> (::Unity::Services::RemoteConfig::RuntimeConfig::*)()>(&::Unity::Services::RemoteConfig::RuntimeConfig::GetKeys)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2ea9da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig*>::get(),
                        "GetKeys",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::RemoteConfig::ConfigOrigin& Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_get__origin_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____origin_k__BackingField;
}
constexpr ::Unity::Services::RemoteConfig::ConfigOrigin const& Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_get__origin_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____origin_k__BackingField;
}
constexpr void Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_set__origin_k__BackingField(::Unity::Services::RemoteConfig::ConfigOrigin  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____origin_k__BackingField = value;
}
constexpr ::StringW& Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_get__environmentId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____environmentId_k__BackingField;
}
constexpr ::StringW const& Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_get__environmentId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____environmentId_k__BackingField;
}
constexpr void Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_set__environmentId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_get__assignmentId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assignmentId_k__BackingField;
}
constexpr ::StringW const& Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_get__assignmentId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assignmentId_k__BackingField;
}
constexpr void Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_set__assignmentId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assignmentId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_get__configAssignmentHash_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____configAssignmentHash_k__BackingField;
}
constexpr ::StringW const& Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_get__configAssignmentHash_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____configAssignmentHash_k__BackingField;
}
constexpr void Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_set__configAssignmentHash_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____configAssignmentHash_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_get_configType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___configType;
}
constexpr ::StringW const& Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_get_configType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___configType;
}
constexpr void Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_set_configType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___configType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::RemoteConfig::ConfigResponse& Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_get_ConfigResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConfigResponse;
}
constexpr ::Unity::Services::RemoteConfig::ConfigResponse const& Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_get_ConfigResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConfigResponse;
}
constexpr void Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_set_ConfigResponse(::Unity::Services::RemoteConfig::ConfigResponse  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConfigResponse = value;
}
constexpr ::Unity::Services::RemoteConfig::ConfigRequestStatus& Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_get_RequestStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestStatus;
}
constexpr ::Unity::Services::RemoteConfig::ConfigRequestStatus const& Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_get_RequestStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestStatus;
}
constexpr void Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_set_RequestStatus(::Unity::Services::RemoteConfig::ConfigRequestStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RequestStatus = value;
}
constexpr ::Newtonsoft::Json::Linq::JObject*& Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_get__config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr ::Newtonsoft::Json::Linq::JObject* const& Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_get__config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr void Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_set__config(::Newtonsoft::Json::Linq::JObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____config)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::JsonSerializerSettings*& Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_get_rawDateSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawDateSettings;
}
constexpr ::Newtonsoft::Json::JsonSerializerSettings* const& Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_get_rawDateSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawDateSettings;
}
constexpr void Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_set_rawDateSettings(::Newtonsoft::Json::JsonSerializerSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rawDateSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*& Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_get_FetchCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FetchCompleted;
}
constexpr ::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>* const& Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_get_FetchCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FetchCompleted;
}
constexpr void Unity::Services::RemoteConfig::RuntimeConfig::__cordl_internal_set_FetchCompleted(::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FetchCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::RemoteConfig::RuntimeConfig::set_origin(::Unity::Services::RemoteConfig::ConfigOrigin  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig*>::get(),
                        "set_origin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::RemoteConfig::ConfigOrigin>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::RemoteConfig::RuntimeConfig::set_environmentId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig*>::get(),
                        "set_environmentId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::RemoteConfig::RuntimeConfig::set_assignmentId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig*>::get(),
                        "set_assignmentId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::RemoteConfig::RuntimeConfig::set_configAssignmentHash(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig*>::get(),
                        "set_configAssignmentHash",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::RemoteConfig::RuntimeConfig::_ctor(::StringW  configType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, configType);
}
inline void Unity::Services::RemoteConfig::RuntimeConfig::HandleConfigResponse(::Unity::Services::RemoteConfig::ConfigResponse  configResponse)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig*>::get(),
                        "HandleConfigResponse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::RemoteConfig::ConfigResponse>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, configResponse);
}
inline ::StringW Unity::Services::RemoteConfig::RuntimeConfig::GetString(::StringW  key, ::StringW  defaultValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig*>::get(),
                        "GetString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key, defaultValue);
}
inline ::ArrayW<::StringW,::Array<::StringW>*> Unity::Services::RemoteConfig::RuntimeConfig::GetKeys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RuntimeConfig*>::get(),
                        "GetKeys",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW,::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::Unity::Services::RemoteConfig::RuntimeConfig* Unity::Services::RemoteConfig::RuntimeConfig::New_ctor(::StringW  configType)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::RemoteConfig::RuntimeConfig*>(configType));
}
// Ctor Parameters []
constexpr ::Unity::Services::RemoteConfig::RuntimeConfig::RuntimeConfig()   {
}
