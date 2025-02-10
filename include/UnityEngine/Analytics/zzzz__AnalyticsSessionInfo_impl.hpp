#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/AnalyticsSessionInfo.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsSessionInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsSessionInfo_def.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsSessionState_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3190cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged::*)(::UnityEngine::Analytics::AnalyticsSessionState, int64_t, int64_t, bool)>(&::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3190d40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged::Invoke(::UnityEngine::Analytics::AnalyticsSessionState  sessionState, int64_t  sessionId, int64_t  sessionElapsedTime, bool  sessionChanged)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionState, sessionId, sessionElapsedTime, sessionChanged);
}
inline ::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged* UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged::AnalyticsSessionInfo_SessionStateChanged()   {
}
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3190d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged::*)(::StringW)>(&::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3190df4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged::Invoke(::StringW  token)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token);
}
inline ::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged* UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged::AnalyticsSessionInfo_IdentityTokenChanged()   {
}
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsSessionInfo.CallSessionStateChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Analytics::AnalyticsSessionState, int64_t, int64_t, bool)>(&::UnityEngine::Analytics::AnalyticsSessionInfo::CallSessionStateChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3190bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsSessionInfo*>::get(),
                        "CallSessionStateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Analytics::AnalyticsSessionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsSessionInfo.CallIdentityTokenChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::Analytics::AnalyticsSessionInfo::CallIdentityTokenChanged)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3190c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsSessionInfo*>::get(),
                        "CallIdentityTokenChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Analytics::AnalyticsSessionInfo::setStaticF_sessionStateChanged(::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*, "sessionStateChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsSessionInfo*>::get>(std::forward<::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*>(value));
}
inline ::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged* UnityEngine::Analytics::AnalyticsSessionInfo::getStaticF_sessionStateChanged()  {
return ::cordl_internals::getStaticField<::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*, "sessionStateChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsSessionInfo*>::get>();
}
inline void UnityEngine::Analytics::AnalyticsSessionInfo::setStaticF_identityTokenChanged(::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*, "identityTokenChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsSessionInfo*>::get>(std::forward<::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*>(value));
}
inline ::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged* UnityEngine::Analytics::AnalyticsSessionInfo::getStaticF_identityTokenChanged()  {
return ::cordl_internals::getStaticField<::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*, "identityTokenChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsSessionInfo*>::get>();
}
inline void UnityEngine::Analytics::AnalyticsSessionInfo::CallSessionStateChanged(::UnityEngine::Analytics::AnalyticsSessionState  sessionState, int64_t  sessionId, int64_t  sessionElapsedTime, bool  sessionChanged)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsSessionInfo*>::get(),
                        "CallSessionStateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Analytics::AnalyticsSessionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sessionState, sessionId, sessionElapsedTime, sessionChanged);
}
inline void UnityEngine::Analytics::AnalyticsSessionInfo::CallIdentityTokenChanged(::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsSessionInfo*>::get(),
                        "CallIdentityTokenChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, token);
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::AnalyticsSessionInfo::AnalyticsSessionInfo()   {
}
