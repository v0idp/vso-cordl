#pragma once
// IWYU pragma private; include "UnityEngine/RemoteSettings.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__RemoteSettings_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RemoteSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::RemoteSettings_UpdatedEventHandler._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RemoteSettings_UpdatedEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::RemoteSettings_UpdatedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3190adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings_UpdatedEventHandler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RemoteSettings_UpdatedEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RemoteSettings_UpdatedEventHandler::*)()>(&::UnityEngine::RemoteSettings_UpdatedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3190b64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings_UpdatedEventHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings_UpdatedEventHandler*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
inline void UnityEngine::RemoteSettings_UpdatedEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings_UpdatedEventHandler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::RemoteSettings_UpdatedEventHandler::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings_UpdatedEventHandler*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::RemoteSettings_UpdatedEventHandler* UnityEngine::RemoteSettings_UpdatedEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::RemoteSettings_UpdatedEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::RemoteSettings_UpdatedEventHandler::RemoteSettings_UpdatedEventHandler()   {
}
//  Writing Method size for method: ::UnityEngine::RemoteSettings.RemoteSettingsUpdated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::RemoteSettings::RemoteSettingsUpdated)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x319098c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get(),
                        "RemoteSettingsUpdated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RemoteSettings.RemoteSettingsBeforeFetchFromServer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::RemoteSettings::RemoteSettingsBeforeFetchFromServer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x31909f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get(),
                        "RemoteSettingsBeforeFetchFromServer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RemoteSettings.RemoteSettingsUpdateCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, bool, int32_t)>(&::UnityEngine::RemoteSettings::RemoteSettingsUpdateCompleted)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3190a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get(),
                        "RemoteSettingsUpdateCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::RemoteSettings::setStaticF_Updated(::UnityEngine::RemoteSettings_UpdatedEventHandler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::RemoteSettings_UpdatedEventHandler*, "Updated", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get>(std::forward<::UnityEngine::RemoteSettings_UpdatedEventHandler*>(value));
}
inline ::UnityEngine::RemoteSettings_UpdatedEventHandler* UnityEngine::RemoteSettings::getStaticF_Updated()  {
return ::cordl_internals::getStaticField<::UnityEngine::RemoteSettings_UpdatedEventHandler*, "Updated", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get>();
}
inline void UnityEngine::RemoteSettings::setStaticF_BeforeFetchFromServer(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "BeforeFetchFromServer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::RemoteSettings::getStaticF_BeforeFetchFromServer()  {
return ::cordl_internals::getStaticField<::System::Action*, "BeforeFetchFromServer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get>();
}
inline void UnityEngine::RemoteSettings::setStaticF_Completed(::System::Action_3<bool,bool,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_3<bool,bool,int32_t>*, "Completed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get>(std::forward<::System::Action_3<bool,bool,int32_t>*>(value));
}
inline ::System::Action_3<bool,bool,int32_t>* UnityEngine::RemoteSettings::getStaticF_Completed()  {
return ::cordl_internals::getStaticField<::System::Action_3<bool,bool,int32_t>*, "Completed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get>();
}
inline void UnityEngine::RemoteSettings::RemoteSettingsUpdated(bool  wasLastUpdatedFromServer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get(),
                        "RemoteSettingsUpdated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, wasLastUpdatedFromServer);
}
inline void UnityEngine::RemoteSettings::RemoteSettingsBeforeFetchFromServer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get(),
                        "RemoteSettingsBeforeFetchFromServer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::RemoteSettings::RemoteSettingsUpdateCompleted(bool  wasLastUpdatedFromServer, bool  settingsChanged, int32_t  response)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RemoteSettings*>::get(),
                        "RemoteSettingsUpdateCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, wasLastUpdatedFromServer, settingsChanged, response);
}
// Ctor Parameters []
constexpr ::UnityEngine::RemoteSettings::RemoteSettings()   {
}
