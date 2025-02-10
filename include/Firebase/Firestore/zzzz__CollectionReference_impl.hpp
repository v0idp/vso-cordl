#pragma once
// IWYU pragma private; include "Firebase/Firestore/CollectionReference.hpp"
#include "Firebase/Firestore/zzzz__Query_impl.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "Firebase/Firestore/zzzz__CollectionReference_def.hpp"
#include "Firebase/Firestore/zzzz__CollectionReferenceProxy_def.hpp"
#include "Firebase/Firestore/zzzz__DocumentReference_def.hpp"
#include "Firebase/Firestore/zzzz__FirebaseFirestore_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::CollectionReference._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::CollectionReference::*)(::Firebase::Firestore::CollectionReferenceProxy*, ::Firebase::Firestore::FirebaseFirestore*)>(&::Firebase::Firestore::CollectionReference::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x191c3d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::CollectionReferenceProxy*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirebaseFirestore*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::CollectionReference.get_Proxy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::CollectionReferenceProxy* (::Firebase::Firestore::CollectionReference::*)()>(&::Firebase::Firestore::CollectionReference::get_Proxy)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x191d9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                        "get_Proxy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::CollectionReference.get_Path
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Firebase::Firestore::CollectionReference::*)()>(&::Firebase::Firestore::CollectionReference::get_Path)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x191da38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                        "get_Path",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::CollectionReference.Document
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::DocumentReference* (::Firebase::Firestore::CollectionReference::*)()>(&::Firebase::Firestore::CollectionReference::Document)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x191da58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                        "Document",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::CollectionReference.Document
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::DocumentReference* (::Firebase::Firestore::CollectionReference::*)(::StringW)>(&::Firebase::Firestore::CollectionReference::Document)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x191dadc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                        "Document",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::CollectionReference.AddAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Firebase::Firestore::DocumentReference*>* (::Firebase::Firestore::CollectionReference::*)(::System::Object*)>(&::Firebase::Firestore::CollectionReference::AddAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x191db90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                        "AddAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::CollectionReference.GetHashCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Firebase::Firestore::CollectionReference::*)()>(&::Firebase::Firestore::CollectionReference::GetHashCode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x191dc3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::CollectionReference.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Firebase::Firestore::CollectionReference::*)(::System::Object*)>(&::Firebase::Firestore::CollectionReference::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x191dc80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::CollectionReference.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Firebase::Firestore::CollectionReference::*)(::Firebase::Firestore::CollectionReference*)>(&::Firebase::Firestore::CollectionReference::Equals)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x191dcf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::CollectionReference*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::CollectionReference.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Firebase::Firestore::CollectionReference::*)()>(&::Firebase::Firestore::CollectionReference::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x191dd08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
inline void Firebase::Firestore::CollectionReference::_ctor(::Firebase::Firestore::CollectionReferenceProxy*  proxy, ::Firebase::Firestore::FirebaseFirestore*  firestore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::CollectionReferenceProxy*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirebaseFirestore*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, proxy, firestore);
}
inline ::Firebase::Firestore::CollectionReferenceProxy* Firebase::Firestore::CollectionReference::get_Proxy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                        "get_Proxy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::CollectionReferenceProxy*, false>(this, ___internal_method);
}
inline ::StringW Firebase::Firestore::CollectionReference::get_Path()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                        "get_Path",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::DocumentReference* Firebase::Firestore::CollectionReference::Document()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                        "Document",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::DocumentReference*, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::DocumentReference* Firebase::Firestore::CollectionReference::Document(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                        "Document",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::DocumentReference*, false>(this, ___internal_method, path);
}
inline ::System::Threading::Tasks::Task_1<::Firebase::Firestore::DocumentReference*>* Firebase::Firestore::CollectionReference::AddAsync(::System::Object*  documentData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                        "AddAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Firebase::Firestore::DocumentReference*>*, false>(this, ___internal_method, documentData);
}
inline int32_t Firebase::Firestore::CollectionReference::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Firebase::Firestore::CollectionReference::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool Firebase::Firestore::CollectionReference::Equals(::Firebase::Firestore::CollectionReference*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::CollectionReference*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::StringW Firebase::Firestore::CollectionReference::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::CollectionReference*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::CollectionReference* Firebase::Firestore::CollectionReference::New_ctor(::Firebase::Firestore::CollectionReferenceProxy*  proxy, ::Firebase::Firestore::FirebaseFirestore*  firestore)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::CollectionReference*>(proxy, firestore));
}
/// @brief Convert operator to "::System::IEquatable_1<::Firebase::Firestore::CollectionReference*>"
constexpr  Firebase::Firestore::CollectionReference::operator ::System::IEquatable_1<::Firebase::Firestore::CollectionReference*>*() noexcept {
return static_cast<::System::IEquatable_1<::Firebase::Firestore::CollectionReference*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::Firebase::Firestore::CollectionReference*>"
constexpr ::System::IEquatable_1<::Firebase::Firestore::CollectionReference*>* Firebase::Firestore::CollectionReference::i___System__IEquatable_1___Firebase__Firestore__CollectionReference__() noexcept {
return static_cast<::System::IEquatable_1<::Firebase::Firestore::CollectionReference*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::CollectionReference::CollectionReference()   {
}
