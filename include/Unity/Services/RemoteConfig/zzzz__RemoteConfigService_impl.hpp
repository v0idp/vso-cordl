#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/RemoteConfigService.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/RemoteConfig/zzzz__RemoteConfigService_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/RemoteConfig/zzzz__ConfigManagerImpl_def.hpp"
#include "Unity/Services/RemoteConfig/zzzz__ConfigResponse_def.hpp"
#include "Unity/Services/RemoteConfig/zzzz__RemoteConfigService_def.hpp"
#include "Unity/Services/RemoteConfig/zzzz__RuntimeConfig_def.hpp"
//  Writing Method size for method: ::Unity::Services::RemoteConfig::RemoteConfigService___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::RemoteConfigService___c::*)()>(&::Unity::Services::RemoteConfig::RemoteConfigService___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eab498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::RemoteConfigService___c._get_ConfigManagerImpl_b__9_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::RemoteConfig::RemoteConfigService___c::*)(::StringW)>(&::Unity::Services::RemoteConfig::RemoteConfigService___c::_get_ConfigManagerImpl_b__9_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2eab4a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService___c*>::get(),
                        "<get_ConfigManagerImpl>b__9_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::RemoteConfig::RemoteConfigService___c::setStaticF___9(::Unity::Services::RemoteConfig::RemoteConfigService___c*  value)  {
::cordl_internals::setStaticField<::Unity::Services::RemoteConfig::RemoteConfigService___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService___c*>::get>(std::forward<::Unity::Services::RemoteConfig::RemoteConfigService___c*>(value));
}
inline ::Unity::Services::RemoteConfig::RemoteConfigService___c* Unity::Services::RemoteConfig::RemoteConfigService___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Unity::Services::RemoteConfig::RemoteConfigService___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService___c*>::get>();
}
inline void Unity::Services::RemoteConfig::RemoteConfigService___c::setStaticF___9__9_0(::System::Func_2<::StringW,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,bool>*, "<>9__9_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService___c*>::get>(std::forward<::System::Func_2<::StringW,bool>*>(value));
}
inline ::System::Func_2<::StringW,bool>* Unity::Services::RemoteConfig::RemoteConfigService___c::getStaticF___9__9_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,bool>*, "<>9__9_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService___c*>::get>();
}
inline void Unity::Services::RemoteConfig::RemoteConfigService___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Unity::Services::RemoteConfig::RemoteConfigService___c::_get_ConfigManagerImpl_b__9_0(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService___c*>::get(),
                        "<get_ConfigManagerImpl>b__9_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, s);
}
inline ::Unity::Services::RemoteConfig::RemoteConfigService___c* Unity::Services::RemoteConfig::RemoteConfigService___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::RemoteConfig::RemoteConfigService___c*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::RemoteConfig::RemoteConfigService___c::RemoteConfigService___c()   {
}
//  Writing Method size for method: ::Unity::Services::RemoteConfig::RemoteConfigService._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::RemoteConfigService::*)()>(&::Unity::Services::RemoteConfig::RemoteConfigService::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2eaadf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::RemoteConfigService.get_Instance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::RemoteConfig::RemoteConfigService* (*)()>(&::Unity::Services::RemoteConfig::RemoteConfigService::get_Instance)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2eaae00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::RemoteConfigService.get_ConfigManagerImpl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::RemoteConfig::ConfigManagerImpl* (::Unity::Services::RemoteConfig::RemoteConfigService::*)()>(&::Unity::Services::RemoteConfig::RemoteConfigService::get_ConfigManagerImpl)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x2eaaf7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService*>::get(),
                        "get_ConfigManagerImpl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::RemoteConfigService.add_FetchCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::RemoteConfigService::*)(::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*)>(&::Unity::Services::RemoteConfig::RemoteConfigService::add_FetchCompleted)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2eab368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService*>::get(),
                        "add_FetchCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::RemoteConfigService.remove_FetchCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::RemoteConfigService::*)(::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*)>(&::Unity::Services::RemoteConfig::RemoteConfigService::remove_FetchCompleted)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2eab388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService*>::get(),
                        "remove_FetchCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::RemoteConfigService.get_appConfig
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::RemoteConfig::RuntimeConfig* (::Unity::Services::RemoteConfig::RemoteConfigService::*)()>(&::Unity::Services::RemoteConfig::RemoteConfigService::get_appConfig)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2eab3a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService*>::get(),
                        "get_appConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::RemoteConfig::ConfigManagerImpl*& Unity::Services::RemoteConfig::RemoteConfigService::__cordl_internal_get__configManagerImpl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____configManagerImpl;
}
constexpr ::Unity::Services::RemoteConfig::ConfigManagerImpl* const& Unity::Services::RemoteConfig::RemoteConfigService::__cordl_internal_get__configManagerImpl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____configManagerImpl;
}
constexpr void Unity::Services::RemoteConfig::RemoteConfigService::__cordl_internal_set__configManagerImpl(::Unity::Services::RemoteConfig::ConfigManagerImpl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____configManagerImpl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::RemoteConfig::RemoteConfigService::__cordl_internal_get__lastToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastToken;
}
constexpr ::StringW const& Unity::Services::RemoteConfig::RemoteConfigService::__cordl_internal_get__lastToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastToken;
}
constexpr void Unity::Services::RemoteConfig::RemoteConfigService::__cordl_internal_set__lastToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Unity::Services::RemoteConfig::RemoteConfigService::__cordl_internal_get__autoLoadEnvironment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoLoadEnvironment;
}
constexpr bool const& Unity::Services::RemoteConfig::RemoteConfigService::__cordl_internal_get__autoLoadEnvironment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoLoadEnvironment;
}
constexpr void Unity::Services::RemoteConfig::RemoteConfigService::__cordl_internal_set__autoLoadEnvironment(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____autoLoadEnvironment = value;
}
inline void Unity::Services::RemoteConfig::RemoteConfigService::setStaticF_instance(::Unity::Services::RemoteConfig::RemoteConfigService*  value)  {
::cordl_internals::setStaticField<::Unity::Services::RemoteConfig::RemoteConfigService*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService*>::get>(std::forward<::Unity::Services::RemoteConfig::RemoteConfigService*>(value));
}
inline ::Unity::Services::RemoteConfig::RemoteConfigService* Unity::Services::RemoteConfig::RemoteConfigService::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::Unity::Services::RemoteConfig::RemoteConfigService*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService*>::get>();
}
inline void Unity::Services::RemoteConfig::RemoteConfigService::setStaticF_padlock(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "padlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Unity::Services::RemoteConfig::RemoteConfigService::getStaticF_padlock()  {
return ::cordl_internals::getStaticField<::System::Object*, "padlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService*>::get>();
}
inline void Unity::Services::RemoteConfig::RemoteConfigService::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::RemoteConfig::RemoteConfigService* Unity::Services::RemoteConfig::RemoteConfigService::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::RemoteConfig::RemoteConfigService*, false>(nullptr, ___internal_method);
}
inline ::Unity::Services::RemoteConfig::ConfigManagerImpl* Unity::Services::RemoteConfig::RemoteConfigService::get_ConfigManagerImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService*>::get(),
                        "get_ConfigManagerImpl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::RemoteConfig::ConfigManagerImpl*, false>(this, ___internal_method);
}
inline void Unity::Services::RemoteConfig::RemoteConfigService::add_FetchCompleted(::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService*>::get(),
                        "add_FetchCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::RemoteConfig::RemoteConfigService::remove_FetchCompleted(::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService*>::get(),
                        "remove_FetchCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::RemoteConfig::RuntimeConfig* Unity::Services::RemoteConfig::RemoteConfigService::get_appConfig()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService*>::get(),
                        "get_appConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::RemoteConfig::RuntimeConfig*, false>(this, ___internal_method);
}
template<typename T,typename T2>
inline ::System::Threading::Tasks::Task_1<::Unity::Services::RemoteConfig::RuntimeConfig*>* Unity::Services::RemoteConfig::RemoteConfigService::FetchConfigsAsync(T  userAttributes, T2  appAttributes)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::RemoteConfigService*>::get(),
                    "FetchConfigsAsync",
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::RemoteConfig::RuntimeConfig*>*, false>(this, ___internal_method, userAttributes, appAttributes);
}
inline ::Unity::Services::RemoteConfig::RemoteConfigService* Unity::Services::RemoteConfig::RemoteConfigService::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::RemoteConfig::RemoteConfigService*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::RemoteConfig::RemoteConfigService::RemoteConfigService()   {
}
