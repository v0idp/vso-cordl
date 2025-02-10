#pragma once
// IWYU pragma private; include "Firebase/Firestore/Query.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/zzzz__Query_def.hpp"
#include "Firebase/Firestore/zzzz__FirebaseFirestore_def.hpp"
#include "Firebase/Firestore/zzzz__FirestoreError_def.hpp"
#include "Firebase/Firestore/zzzz__ListenerRegistrationMap_1_def.hpp"
#include "Firebase/Firestore/zzzz__QueryProxy_def.hpp"
#include "Firebase/Firestore/zzzz__QuerySnapshotProxy_def.hpp"
#include "Firebase/Firestore/zzzz__QuerySnapshot_def.hpp"
#include "Firebase/Firestore/zzzz__Query_def.hpp"
#include "Firebase/Firestore/zzzz__Source_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::Query_ListenerDelegate._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::Query_ListenerDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Firebase::Firestore::Query_ListenerDelegate::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1919e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query_ListenerDelegate*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Query_ListenerDelegate.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::Query_ListenerDelegate::*)(int32_t, ::System::IntPtr, ::Firebase::Firestore::FirestoreError, ::StringW)>(&::Firebase::Firestore::Query_ListenerDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1919f38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query_ListenerDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query_ListenerDelegate*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
inline void Firebase::Firestore::Query_ListenerDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query_ListenerDelegate*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Firebase::Firestore::Query_ListenerDelegate::Invoke(int32_t  callbackId, ::System::IntPtr  snapshotPtr, ::Firebase::Firestore::FirestoreError  errorCode, ::StringW  errorMessage)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query_ListenerDelegate*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callbackId, snapshotPtr, errorCode, errorMessage);
}
inline ::Firebase::Firestore::Query_ListenerDelegate* Firebase::Firestore::Query_ListenerDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::Query_ListenerDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::Query_ListenerDelegate::Query_ListenerDelegate()   {
}
//  Writing Method size for method: ::Firebase::Firestore::Query._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::Query::*)(::Firebase::Firestore::QueryProxy*, ::Firebase::Firestore::FirebaseFirestore*)>(&::Firebase::Firestore::Query::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1919ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::QueryProxy*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirebaseFirestore*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Query.ClearCallbacksForOwner
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Firebase::Firestore::FirebaseFirestore*)>(&::Firebase::Firestore::Query::ClearCallbacksForOwner)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1919b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get(),
                        "ClearCallbacksForOwner",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirebaseFirestore*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Query.get_Firestore
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FirebaseFirestore* (::Firebase::Firestore::Query::*)()>(&::Firebase::Firestore::Query::get_Firestore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1919be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get(),
                        "get_Firestore",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Query.GetSnapshotAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Firebase::Firestore::QuerySnapshot*>* (::Firebase::Firestore::Query::*)(::Firebase::Firestore::Source)>(&::Firebase::Firestore::Query::GetSnapshotAsync)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1919be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get(),
                        "GetSnapshotAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::Source>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Query.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Firebase::Firestore::Query::*)(::System::Object*)>(&::Firebase::Firestore::Query::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1919cb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Query.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Firebase::Firestore::Query::*)(::Firebase::Firestore::Query*)>(&::Firebase::Firestore::Query::Equals)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1919d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::Query*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Query.GetHashCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Firebase::Firestore::Query::*)()>(&::Firebase::Firestore::Query::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1919d58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Query.QuerySnapshotsHandler
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::System::IntPtr, ::Firebase::Firestore::FirestoreError, ::StringW)>(&::Firebase::Firestore::Query::QuerySnapshotsHandler)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x19198fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get(),
                        "QuerySnapshotsHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirestoreError>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Query._GetSnapshotAsync_m__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::QuerySnapshot* (::Firebase::Firestore::Query::*)(::Firebase::Firestore::QuerySnapshotProxy*)>(&::Firebase::Firestore::Query::_GetSnapshotAsync_m__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1919ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get(),
                        "<GetSnapshotAsync>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::QuerySnapshotProxy*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Firebase::Firestore::QueryProxy*& Firebase::Firestore::Query::__cordl_internal_get__proxy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxy;
}
constexpr ::Firebase::Firestore::QueryProxy* const& Firebase::Firestore::Query::__cordl_internal_get__proxy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxy;
}
constexpr void Firebase::Firestore::Query::__cordl_internal_set__proxy(::Firebase::Firestore::QueryProxy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____proxy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::Firestore::FirebaseFirestore*& Firebase::Firestore::Query::__cordl_internal_get__firestore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firestore;
}
constexpr ::Firebase::Firestore::FirebaseFirestore* const& Firebase::Firestore::Query::__cordl_internal_get__firestore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firestore;
}
constexpr void Firebase::Firestore::Query::__cordl_internal_set__firestore(::Firebase::Firestore::FirebaseFirestore*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____firestore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Firestore::Query::setStaticF_snapshotListenerCallbacks(::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action_3<::Firebase::Firestore::QuerySnapshotProxy*,::Firebase::Firestore::FirestoreError,::StringW>*>*  value)  {
::cordl_internals::setStaticField<::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action_3<::Firebase::Firestore::QuerySnapshotProxy*,::Firebase::Firestore::FirestoreError,::StringW>*>*, "snapshotListenerCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get>(std::forward<::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action_3<::Firebase::Firestore::QuerySnapshotProxy*,::Firebase::Firestore::FirestoreError,::StringW>*>*>(value));
}
inline ::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action_3<::Firebase::Firestore::QuerySnapshotProxy*,::Firebase::Firestore::FirestoreError,::StringW>*>* Firebase::Firestore::Query::getStaticF_snapshotListenerCallbacks()  {
return ::cordl_internals::getStaticField<::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action_3<::Firebase::Firestore::QuerySnapshotProxy*,::Firebase::Firestore::FirestoreError,::StringW>*>*, "snapshotListenerCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get>();
}
inline void Firebase::Firestore::Query::setStaticF_querySnapshotsHandler(::Firebase::Firestore::Query_ListenerDelegate*  value)  {
::cordl_internals::setStaticField<::Firebase::Firestore::Query_ListenerDelegate*, "querySnapshotsHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get>(std::forward<::Firebase::Firestore::Query_ListenerDelegate*>(value));
}
inline ::Firebase::Firestore::Query_ListenerDelegate* Firebase::Firestore::Query::getStaticF_querySnapshotsHandler()  {
return ::cordl_internals::getStaticField<::Firebase::Firestore::Query_ListenerDelegate*, "querySnapshotsHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get>();
}
inline void Firebase::Firestore::Query::_ctor(::Firebase::Firestore::QueryProxy*  proxy, ::Firebase::Firestore::FirebaseFirestore*  firestore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::QueryProxy*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirebaseFirestore*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, proxy, firestore);
}
inline void Firebase::Firestore::Query::ClearCallbacksForOwner(::Firebase::Firestore::FirebaseFirestore*  owner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get(),
                        "ClearCallbacksForOwner",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirebaseFirestore*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, owner);
}
inline ::Firebase::Firestore::FirebaseFirestore* Firebase::Firestore::Query::get_Firestore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get(),
                        "get_Firestore",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FirebaseFirestore*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Firebase::Firestore::QuerySnapshot*>* Firebase::Firestore::Query::GetSnapshotAsync(::Firebase::Firestore::Source  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get(),
                        "GetSnapshotAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::Source>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Firebase::Firestore::QuerySnapshot*>*, false>(this, ___internal_method, source);
}
inline bool Firebase::Firestore::Query::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool Firebase::Firestore::Query::Equals(::Firebase::Firestore::Query*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::Query*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t Firebase::Firestore::Query::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Firebase::Firestore::Query::QuerySnapshotsHandler(int32_t  callbackId, ::System::IntPtr  snapshotPtr, ::Firebase::Firestore::FirestoreError  errorCode, ::StringW  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get(),
                        "QuerySnapshotsHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirestoreError>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callbackId, snapshotPtr, errorCode, errorMessage);
}
inline ::Firebase::Firestore::QuerySnapshot* Firebase::Firestore::Query::_GetSnapshotAsync_m__0(::Firebase::Firestore::QuerySnapshotProxy*  taskResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Query*>::get(),
                        "<GetSnapshotAsync>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::QuerySnapshotProxy*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::QuerySnapshot*, false>(this, ___internal_method, taskResult);
}
inline ::Firebase::Firestore::Query* Firebase::Firestore::Query::New_ctor(::Firebase::Firestore::QueryProxy*  proxy, ::Firebase::Firestore::FirebaseFirestore*  firestore)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::Query*>(proxy, firestore));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::Query::Query()   {
}
