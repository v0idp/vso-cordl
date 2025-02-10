#pragma once
// IWYU pragma private; include "Firebase/Firestore/SetOptionsProxy.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/zzzz__SetOptionsProxy_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::SetOptionsProxy._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::SetOptionsProxy::*)(::System::IntPtr, bool)>(&::Firebase::Firestore::SetOptionsProxy::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x190a50c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptionsProxy*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::SetOptionsProxy._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::SetOptionsProxy::*)()>(&::Firebase::Firestore::SetOptionsProxy::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x190a560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptionsProxy*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::SetOptionsProxy.getCPtr
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Firebase::Firestore::SetOptionsProxy*)>(&::Firebase::Firestore::SetOptionsProxy::getCPtr)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x18fe150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptionsProxy*>::get(),
                        "getCPtr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::SetOptionsProxy*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::SetOptionsProxy.Finalize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::SetOptionsProxy::*)()>(&::Firebase::Firestore::SetOptionsProxy::Finalize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x190a61c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptionsProxy*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptionsProxy*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::SetOptionsProxy.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::SetOptionsProxy::*)()>(&::Firebase::Firestore::SetOptionsProxy::Dispose)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x190a6b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptionsProxy*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptionsProxy*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::SetOptionsProxy.Merge
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::SetOptionsProxy* (*)()>(&::Firebase::Firestore::SetOptionsProxy::Merge)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x190a854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptionsProxy*>::get(),
                        "Merge",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& Firebase::Firestore::SetOptionsProxy::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& Firebase::Firestore::SetOptionsProxy::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void Firebase::Firestore::SetOptionsProxy::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& Firebase::Firestore::SetOptionsProxy::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& Firebase::Firestore::SetOptionsProxy::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void Firebase::Firestore::SetOptionsProxy::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void Firebase::Firestore::SetOptionsProxy::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptionsProxy*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline void Firebase::Firestore::SetOptionsProxy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptionsProxy*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::InteropServices::HandleRef Firebase::Firestore::SetOptionsProxy::getCPtr(::Firebase::Firestore::SetOptionsProxy*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptionsProxy*>::get(),
                        "getCPtr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::SetOptionsProxy*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef, false>(nullptr, ___internal_method, obj);
}
inline void Firebase::Firestore::SetOptionsProxy::Finalize()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptionsProxy*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Firebase::Firestore::SetOptionsProxy::Dispose()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptionsProxy*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::SetOptionsProxy* Firebase::Firestore::SetOptionsProxy::Merge()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SetOptionsProxy*>::get(),
                        "Merge",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::SetOptionsProxy*, false>(nullptr, ___internal_method);
}
inline ::Firebase::Firestore::SetOptionsProxy* Firebase::Firestore::SetOptionsProxy::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::SetOptionsProxy*>(cPtr, cMemoryOwn));
}
inline ::Firebase::Firestore::SetOptionsProxy* Firebase::Firestore::SetOptionsProxy::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::SetOptionsProxy*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Firebase::Firestore::SetOptionsProxy::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Firebase::Firestore::SetOptionsProxy::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::SetOptionsProxy::SetOptionsProxy()   {
}
