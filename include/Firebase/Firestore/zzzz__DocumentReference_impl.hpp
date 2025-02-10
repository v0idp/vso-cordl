#pragma once
// IWYU pragma private; include "Firebase/Firestore/DocumentReference.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/zzzz__DocumentReference_def.hpp"
#include "Firebase/Firestore/zzzz__CollectionReference_def.hpp"
#include "Firebase/Firestore/zzzz__DocumentReferenceProxy_def.hpp"
#include "Firebase/Firestore/zzzz__DocumentReference_def.hpp"
#include "Firebase/Firestore/zzzz__DocumentSnapshotProxy_def.hpp"
#include "Firebase/Firestore/zzzz__DocumentSnapshot_def.hpp"
#include "Firebase/Firestore/zzzz__FirebaseFirestore_def.hpp"
#include "Firebase/Firestore/zzzz__FirestoreError_def.hpp"
#include "Firebase/Firestore/zzzz__ListenerRegistrationMap_1_def.hpp"
#include "Firebase/Firestore/zzzz__SetOptions_def.hpp"
#include "Firebase/Firestore/zzzz__Source_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::DocumentReference_ListenerDelegate._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::DocumentReference_ListenerDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Firebase::Firestore::DocumentReference_ListenerDelegate::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x191d8b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference_ListenerDelegate*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentReference_ListenerDelegate.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::DocumentReference_ListenerDelegate::*)(int32_t, ::System::IntPtr, ::Firebase::Firestore::FirestoreError, ::StringW)>(&::Firebase::Firestore::DocumentReference_ListenerDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x191d9ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference_ListenerDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference_ListenerDelegate*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
inline void Firebase::Firestore::DocumentReference_ListenerDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference_ListenerDelegate*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Firebase::Firestore::DocumentReference_ListenerDelegate::Invoke(int32_t  callbackId, ::System::IntPtr  snapshotPtr, ::Firebase::Firestore::FirestoreError  errorCode, ::StringW  errorMessage)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference_ListenerDelegate*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callbackId, snapshotPtr, errorCode, errorMessage);
}
inline ::Firebase::Firestore::DocumentReference_ListenerDelegate* Firebase::Firestore::DocumentReference_ListenerDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::DocumentReference_ListenerDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::DocumentReference_ListenerDelegate::DocumentReference_ListenerDelegate()   {
}
//  Writing Method size for method: ::Firebase::Firestore::DocumentReference._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::DocumentReference::*)(::Firebase::Firestore::DocumentReferenceProxy*, ::Firebase::Firestore::FirebaseFirestore*)>(&::Firebase::Firestore::DocumentReference::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x19154c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReferenceProxy*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirebaseFirestore*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentReference.get_Proxy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::DocumentReferenceProxy* (::Firebase::Firestore::DocumentReference::*)()>(&::Firebase::Firestore::DocumentReference::get_Proxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x191d134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "get_Proxy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentReference.ClearCallbacksForOwner
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Firebase::Firestore::FirebaseFirestore*)>(&::Firebase::Firestore::DocumentReference::ClearCallbacksForOwner)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x191b6ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "ClearCallbacksForOwner",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirebaseFirestore*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentReference.get_Firestore
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FirebaseFirestore* (::Firebase::Firestore::DocumentReference::*)()>(&::Firebase::Firestore::DocumentReference::get_Firestore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x191d13c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "get_Firestore",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentReference.get_Id
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Firebase::Firestore::DocumentReference::*)()>(&::Firebase::Firestore::DocumentReference::get_Id)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x191744c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "get_Id",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentReference.get_Path
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Firebase::Firestore::DocumentReference::*)()>(&::Firebase::Firestore::DocumentReference::get_Path)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x191d144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "get_Path",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentReference.Collection
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::CollectionReference* (::Firebase::Firestore::DocumentReference::*)(::StringW)>(&::Firebase::Firestore::DocumentReference::Collection)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x191d164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "Collection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentReference.GetHashCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Firebase::Firestore::DocumentReference::*)()>(&::Firebase::Firestore::DocumentReference::GetHashCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x191d22c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentReference.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Firebase::Firestore::DocumentReference::*)(::System::Object*)>(&::Firebase::Firestore::DocumentReference::Equals)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x191d28c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentReference.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Firebase::Firestore::DocumentReference::*)(::Firebase::Firestore::DocumentReference*)>(&::Firebase::Firestore::DocumentReference::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x191d2f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReference*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentReference.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Firebase::Firestore::DocumentReference::*)()>(&::Firebase::Firestore::DocumentReference::ToString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x191d370;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentReference.DeleteAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Firebase::Firestore::DocumentReference::*)()>(&::Firebase::Firestore::DocumentReference::DeleteAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x191d460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "DeleteAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentReference.UpdateAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Firebase::Firestore::DocumentReference::*)(::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*)>(&::Firebase::Firestore::DocumentReference::UpdateAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x191d480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "UpdateAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentReference.SetAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Firebase::Firestore::DocumentReference::*)(::System::Object*, ::Firebase::Firestore::SetOptions*)>(&::Firebase::Firestore::DocumentReference::SetAsync)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x191d56c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "SetAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::SetOptions*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentReference.GetSnapshotAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Firebase::Firestore::DocumentSnapshot*>* (::Firebase::Firestore::DocumentReference::*)(::Firebase::Firestore::Source)>(&::Firebase::Firestore::DocumentReference::GetSnapshotAsync)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x191d708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "GetSnapshotAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::Source>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentReference.DocumentSnapshotsHandler
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::System::IntPtr, ::Firebase::Firestore::FirestoreError, ::StringW)>(&::Firebase::Firestore::DocumentReference::DocumentSnapshotsHandler)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x191cf70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "DocumentSnapshotsHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirestoreError>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentReference._GetSnapshotAsync_m__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::DocumentSnapshot* (::Firebase::Firestore::DocumentReference::*)(::Firebase::Firestore::DocumentSnapshotProxy*)>(&::Firebase::Firestore::DocumentReference::_GetSnapshotAsync_m__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x191d940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "<GetSnapshotAsync>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentSnapshotProxy*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Firebase::Firestore::DocumentReferenceProxy*& Firebase::Firestore::DocumentReference::__cordl_internal_get__proxy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxy;
}
constexpr ::Firebase::Firestore::DocumentReferenceProxy* const& Firebase::Firestore::DocumentReference::__cordl_internal_get__proxy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxy;
}
constexpr void Firebase::Firestore::DocumentReference::__cordl_internal_set__proxy(::Firebase::Firestore::DocumentReferenceProxy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____proxy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::Firestore::FirebaseFirestore*& Firebase::Firestore::DocumentReference::__cordl_internal_get__firestore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firestore;
}
constexpr ::Firebase::Firestore::FirebaseFirestore* const& Firebase::Firestore::DocumentReference::__cordl_internal_get__firestore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firestore;
}
constexpr void Firebase::Firestore::DocumentReference::__cordl_internal_set__firestore(::Firebase::Firestore::FirebaseFirestore*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____firestore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Firestore::DocumentReference::setStaticF_snapshotListenerCallbacks(::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action_3<::Firebase::Firestore::DocumentSnapshotProxy*,::Firebase::Firestore::FirestoreError,::StringW>*>*  value)  {
::cordl_internals::setStaticField<::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action_3<::Firebase::Firestore::DocumentSnapshotProxy*,::Firebase::Firestore::FirestoreError,::StringW>*>*, "snapshotListenerCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get>(std::forward<::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action_3<::Firebase::Firestore::DocumentSnapshotProxy*,::Firebase::Firestore::FirestoreError,::StringW>*>*>(value));
}
inline ::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action_3<::Firebase::Firestore::DocumentSnapshotProxy*,::Firebase::Firestore::FirestoreError,::StringW>*>* Firebase::Firestore::DocumentReference::getStaticF_snapshotListenerCallbacks()  {
return ::cordl_internals::getStaticField<::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action_3<::Firebase::Firestore::DocumentSnapshotProxy*,::Firebase::Firestore::FirestoreError,::StringW>*>*, "snapshotListenerCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get>();
}
inline void Firebase::Firestore::DocumentReference::setStaticF_documentSnapshotsHandler(::Firebase::Firestore::DocumentReference_ListenerDelegate*  value)  {
::cordl_internals::setStaticField<::Firebase::Firestore::DocumentReference_ListenerDelegate*, "documentSnapshotsHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get>(std::forward<::Firebase::Firestore::DocumentReference_ListenerDelegate*>(value));
}
inline ::Firebase::Firestore::DocumentReference_ListenerDelegate* Firebase::Firestore::DocumentReference::getStaticF_documentSnapshotsHandler()  {
return ::cordl_internals::getStaticField<::Firebase::Firestore::DocumentReference_ListenerDelegate*, "documentSnapshotsHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get>();
}
inline void Firebase::Firestore::DocumentReference::_ctor(::Firebase::Firestore::DocumentReferenceProxy*  proxy, ::Firebase::Firestore::FirebaseFirestore*  firestore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReferenceProxy*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirebaseFirestore*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, proxy, firestore);
}
inline ::Firebase::Firestore::DocumentReferenceProxy* Firebase::Firestore::DocumentReference::get_Proxy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "get_Proxy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::DocumentReferenceProxy*, false>(this, ___internal_method);
}
inline void Firebase::Firestore::DocumentReference::ClearCallbacksForOwner(::Firebase::Firestore::FirebaseFirestore*  owner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "ClearCallbacksForOwner",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirebaseFirestore*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, owner);
}
inline ::Firebase::Firestore::FirebaseFirestore* Firebase::Firestore::DocumentReference::get_Firestore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "get_Firestore",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FirebaseFirestore*, false>(this, ___internal_method);
}
inline ::StringW Firebase::Firestore::DocumentReference::get_Id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "get_Id",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Firebase::Firestore::DocumentReference::get_Path()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "get_Path",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::CollectionReference* Firebase::Firestore::DocumentReference::Collection(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "Collection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::CollectionReference*, false>(this, ___internal_method, path);
}
inline int32_t Firebase::Firestore::DocumentReference::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Firebase::Firestore::DocumentReference::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool Firebase::Firestore::DocumentReference::Equals(::Firebase::Firestore::DocumentReference*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReference*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::StringW Firebase::Firestore::DocumentReference::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Firebase::Firestore::DocumentReference::DeleteAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "DeleteAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Firebase::Firestore::DocumentReference::UpdateAsync(::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  updates)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "UpdateAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, updates);
}
inline ::System::Threading::Tasks::Task* Firebase::Firestore::DocumentReference::SetAsync(::System::Object*  documentData, ::Firebase::Firestore::SetOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "SetAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::SetOptions*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, documentData, options);
}
inline ::System::Threading::Tasks::Task_1<::Firebase::Firestore::DocumentSnapshot*>* Firebase::Firestore::DocumentReference::GetSnapshotAsync(::Firebase::Firestore::Source  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "GetSnapshotAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::Source>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Firebase::Firestore::DocumentSnapshot*>*, false>(this, ___internal_method, source);
}
inline void Firebase::Firestore::DocumentReference::DocumentSnapshotsHandler(int32_t  callbackId, ::System::IntPtr  snapshotPtr, ::Firebase::Firestore::FirestoreError  errorCode, ::StringW  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "DocumentSnapshotsHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirestoreError>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callbackId, snapshotPtr, errorCode, errorMessage);
}
inline ::Firebase::Firestore::DocumentSnapshot* Firebase::Firestore::DocumentReference::_GetSnapshotAsync_m__0(::Firebase::Firestore::DocumentSnapshotProxy*  taskResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentReference*>::get(),
                        "<GetSnapshotAsync>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentSnapshotProxy*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::DocumentSnapshot*, false>(this, ___internal_method, taskResult);
}
inline ::Firebase::Firestore::DocumentReference* Firebase::Firestore::DocumentReference::New_ctor(::Firebase::Firestore::DocumentReferenceProxy*  proxy, ::Firebase::Firestore::FirebaseFirestore*  firestore)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::DocumentReference*>(proxy, firestore));
}
/// @brief Convert operator to "::System::IEquatable_1<::Firebase::Firestore::DocumentReference*>"
constexpr  Firebase::Firestore::DocumentReference::operator ::System::IEquatable_1<::Firebase::Firestore::DocumentReference*>*() noexcept {
return static_cast<::System::IEquatable_1<::Firebase::Firestore::DocumentReference*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::Firebase::Firestore::DocumentReference*>"
constexpr ::System::IEquatable_1<::Firebase::Firestore::DocumentReference*>* Firebase::Firestore::DocumentReference::i___System__IEquatable_1___Firebase__Firestore__DocumentReference__() noexcept {
return static_cast<::System::IEquatable_1<::Firebase::Firestore::DocumentReference*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::DocumentReference::DocumentReference()   {
}
