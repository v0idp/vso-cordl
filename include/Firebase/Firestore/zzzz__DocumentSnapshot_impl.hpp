#pragma once
// IWYU pragma private; include "Firebase/Firestore/DocumentSnapshot.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/zzzz__DocumentSnapshot_def.hpp"
#include "Firebase/Firestore/zzzz__DocumentReference_def.hpp"
#include "Firebase/Firestore/zzzz__DocumentSnapshotProxy_def.hpp"
#include "Firebase/Firestore/zzzz__FieldPath_def.hpp"
#include "Firebase/Firestore/zzzz__FirebaseFirestore_def.hpp"
#include "Firebase/Firestore/zzzz__ServerTimestampBehavior_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::DocumentSnapshot._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::DocumentSnapshot::*)(::Firebase::Firestore::DocumentSnapshotProxy*, ::Firebase::Firestore::FirebaseFirestore*)>(&::Firebase::Firestore::DocumentSnapshot::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x191985c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshot*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentSnapshotProxy*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirebaseFirestore*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentSnapshot.get_Reference
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::DocumentReference* (::Firebase::Firestore::DocumentSnapshot::*)()>(&::Firebase::Firestore::DocumentSnapshot::get_Reference)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x190f038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshot*>::get(),
                        "get_Reference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentSnapshot.get_Id
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Firebase::Firestore::DocumentSnapshot::*)()>(&::Firebase::Firestore::DocumentSnapshot::get_Id)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x191ce48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshot*>::get(),
                        "get_Id",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentSnapshot.get_Exists
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Firebase::Firestore::DocumentSnapshot::*)()>(&::Firebase::Firestore::DocumentSnapshot::get_Exists)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x191ce68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshot*>::get(),
                        "get_Exists",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentSnapshot.ToDictionary
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* (::Firebase::Firestore::DocumentSnapshot::*)(::Firebase::Firestore::ServerTimestampBehavior)>(&::Firebase::Firestore::DocumentSnapshot::ToDictionary)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x191ce88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshot*>::get(),
                        "ToDictionary",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::ServerTimestampBehavior>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentSnapshot.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Firebase::Firestore::DocumentSnapshot::*)(::System::Object*)>(&::Firebase::Firestore::DocumentSnapshot::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x191cee0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshot*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshot*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentSnapshot.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Firebase::Firestore::DocumentSnapshot::*)(::Firebase::Firestore::DocumentSnapshot*)>(&::Firebase::Firestore::DocumentSnapshot::Equals)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x191cf50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshot*>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentSnapshot*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentSnapshot.GetHashCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Firebase::Firestore::DocumentSnapshot::*)()>(&::Firebase::Firestore::DocumentSnapshot::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x191cf68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshot*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshot*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
constexpr ::Firebase::Firestore::DocumentSnapshotProxy*& Firebase::Firestore::DocumentSnapshot::__cordl_internal_get__proxy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxy;
}
constexpr ::Firebase::Firestore::DocumentSnapshotProxy* const& Firebase::Firestore::DocumentSnapshot::__cordl_internal_get__proxy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxy;
}
constexpr void Firebase::Firestore::DocumentSnapshot::__cordl_internal_set__proxy(::Firebase::Firestore::DocumentSnapshotProxy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____proxy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::Firestore::FirebaseFirestore*& Firebase::Firestore::DocumentSnapshot::__cordl_internal_get__firestore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firestore;
}
constexpr ::Firebase::Firestore::FirebaseFirestore* const& Firebase::Firestore::DocumentSnapshot::__cordl_internal_get__firestore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firestore;
}
constexpr void Firebase::Firestore::DocumentSnapshot::__cordl_internal_set__firestore(::Firebase::Firestore::FirebaseFirestore*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____firestore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Firestore::DocumentSnapshot::_ctor(::Firebase::Firestore::DocumentSnapshotProxy*  proxy, ::Firebase::Firestore::FirebaseFirestore*  firestore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshot*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentSnapshotProxy*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirebaseFirestore*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, proxy, firestore);
}
inline ::Firebase::Firestore::DocumentReference* Firebase::Firestore::DocumentSnapshot::get_Reference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshot*>::get(),
                        "get_Reference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::DocumentReference*, false>(this, ___internal_method);
}
inline ::StringW Firebase::Firestore::DocumentSnapshot::get_Id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshot*>::get(),
                        "get_Id",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Firebase::Firestore::DocumentSnapshot::get_Exists()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshot*>::get(),
                        "get_Exists",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* Firebase::Firestore::DocumentSnapshot::ToDictionary(::Firebase::Firestore::ServerTimestampBehavior  serverTimestampBehavior)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshot*>::get(),
                        "ToDictionary",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::ServerTimestampBehavior>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, false>(this, ___internal_method, serverTimestampBehavior);
}
template<typename T>
inline T Firebase::Firestore::DocumentSnapshot::ConvertTo(::Firebase::Firestore::ServerTimestampBehavior  serverTimestampBehavior)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshot*>::get(),
                    "ConvertTo",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::ServerTimestampBehavior>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, serverTimestampBehavior);
}
template<typename T>
inline T Firebase::Firestore::DocumentSnapshot::GetValue(::StringW  path, ::Firebase::Firestore::ServerTimestampBehavior  serverTimestampBehavior)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshot*>::get(),
                    "GetValue",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::ServerTimestampBehavior>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, path, serverTimestampBehavior);
}
template<typename T>
inline T Firebase::Firestore::DocumentSnapshot::GetValue(::Firebase::Firestore::FieldPath*  path, ::Firebase::Firestore::ServerTimestampBehavior  serverTimestampBehavior)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshot*>::get(),
                    "GetValue",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FieldPath*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::ServerTimestampBehavior>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, path, serverTimestampBehavior);
}
template<typename T>
inline bool Firebase::Firestore::DocumentSnapshot::TryGetValue(::Firebase::Firestore::FieldPath*  path, ::ByRef<T>  value, ::Firebase::Firestore::ServerTimestampBehavior  serverTimestampBehavior)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshot*>::get(),
                    "TryGetValue",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FieldPath*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::ServerTimestampBehavior>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, path, value, serverTimestampBehavior);
}
inline bool Firebase::Firestore::DocumentSnapshot::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshot*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool Firebase::Firestore::DocumentSnapshot::Equals(::Firebase::Firestore::DocumentSnapshot*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshot*>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentSnapshot*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t Firebase::Firestore::DocumentSnapshot::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshot*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::DocumentSnapshot* Firebase::Firestore::DocumentSnapshot::New_ctor(::Firebase::Firestore::DocumentSnapshotProxy*  proxy, ::Firebase::Firestore::FirebaseFirestore*  firestore)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::DocumentSnapshot*>(proxy, firestore));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::DocumentSnapshot::DocumentSnapshot()   {
}
