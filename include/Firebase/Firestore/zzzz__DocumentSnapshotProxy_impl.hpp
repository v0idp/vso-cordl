#pragma once
// IWYU pragma private; include "Firebase/Firestore/DocumentSnapshotProxy.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/zzzz__DocumentSnapshotProxy_def.hpp"
#include "Firebase/Firestore/zzzz__DocumentReferenceProxy_def.hpp"
#include "Firebase/Firestore/zzzz__DocumentSnapshotProxy_def.hpp"
#include "Firebase/Firestore/zzzz__FieldPathProxy_def.hpp"
#include "Firebase/Firestore/zzzz__FieldValueProxy_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior::DocumentSnapshotProxy_ServerTimestampBehavior(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior::DocumentSnapshotProxy_ServerTimestampBehavior()   {
}
constexpr ::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior  Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior::None{static_cast<int32_t>(0x0)};
constexpr ::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior  Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior::Estimate{static_cast<int32_t>(0x1)};
constexpr ::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior  Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior::Previous{static_cast<int32_t>(0x2)};
constexpr ::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior  Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior::Default{static_cast<int32_t>(0x0)};
//  Writing Method size for method: ::Firebase::Firestore::DocumentSnapshotProxy._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::DocumentSnapshotProxy::*)(::System::IntPtr, bool)>(&::Firebase::Firestore::DocumentSnapshotProxy::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1904710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshotProxy*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentSnapshotProxy.getCPtr
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Firebase::Firestore::DocumentSnapshotProxy*)>(&::Firebase::Firestore::DocumentSnapshotProxy::getCPtr)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x18fd4a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshotProxy*>::get(),
                        "getCPtr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentSnapshotProxy*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentSnapshotProxy.Finalize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::DocumentSnapshotProxy::*)()>(&::Firebase::Firestore::DocumentSnapshotProxy::Finalize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x19096c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshotProxy*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshotProxy*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentSnapshotProxy.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::DocumentSnapshotProxy::*)()>(&::Firebase::Firestore::DocumentSnapshotProxy::Dispose)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x190975c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshotProxy*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshotProxy*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentSnapshotProxy.id
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Firebase::Firestore::DocumentSnapshotProxy::*)()>(&::Firebase::Firestore::DocumentSnapshotProxy::id)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x19098f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshotProxy*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshotProxy*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentSnapshotProxy.reference
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::DocumentReferenceProxy* (::Firebase::Firestore::DocumentSnapshotProxy::*)()>(&::Firebase::Firestore::DocumentSnapshotProxy::reference)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x1909988;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshotProxy*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshotProxy*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentSnapshotProxy.exists
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Firebase::Firestore::DocumentSnapshotProxy::*)()>(&::Firebase::Firestore::DocumentSnapshotProxy::exists)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1909a74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshotProxy*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshotProxy*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::DocumentSnapshotProxy.Get
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (::Firebase::Firestore::DocumentSnapshotProxy::*)(::Firebase::Firestore::FieldPathProxy*, ::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior)>(&::Firebase::Firestore::DocumentSnapshotProxy::Get)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1909b04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshotProxy*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshotProxy*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& Firebase::Firestore::DocumentSnapshotProxy::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& Firebase::Firestore::DocumentSnapshotProxy::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void Firebase::Firestore::DocumentSnapshotProxy::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& Firebase::Firestore::DocumentSnapshotProxy::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& Firebase::Firestore::DocumentSnapshotProxy::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void Firebase::Firestore::DocumentSnapshotProxy::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void Firebase::Firestore::DocumentSnapshotProxy::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshotProxy*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef Firebase::Firestore::DocumentSnapshotProxy::getCPtr(::Firebase::Firestore::DocumentSnapshotProxy*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshotProxy*>::get(),
                        "getCPtr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentSnapshotProxy*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef, false>(nullptr, ___internal_method, obj);
}
inline void Firebase::Firestore::DocumentSnapshotProxy::Finalize()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshotProxy*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Firebase::Firestore::DocumentSnapshotProxy::Dispose()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshotProxy*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Firebase::Firestore::DocumentSnapshotProxy::id()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshotProxy*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::DocumentReferenceProxy* Firebase::Firestore::DocumentSnapshotProxy::reference()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshotProxy*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::DocumentReferenceProxy*, false>(this, ___internal_method);
}
inline bool Firebase::Firestore::DocumentSnapshotProxy::exists()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshotProxy*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::FieldValueProxy* Firebase::Firestore::DocumentSnapshotProxy::Get(::Firebase::Firestore::FieldPathProxy*  field, ::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior  stb)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::DocumentSnapshotProxy*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FieldValueProxy*, false>(this, ___internal_method, field, stb);
}
inline ::Firebase::Firestore::DocumentSnapshotProxy* Firebase::Firestore::DocumentSnapshotProxy::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::DocumentSnapshotProxy*>(cPtr, cMemoryOwn));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Firebase::Firestore::DocumentSnapshotProxy::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Firebase::Firestore::DocumentSnapshotProxy::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::DocumentSnapshotProxy::DocumentSnapshotProxy()   {
}
