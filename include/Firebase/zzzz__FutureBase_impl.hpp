#pragma once
// IWYU pragma private; include "Firebase/FutureBase.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/zzzz__FutureBase_def.hpp"
#include "Firebase/zzzz__FutureStatus_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Firebase::FutureBase._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::FutureBase::*)(::System::IntPtr, bool)>(&::Firebase::FutureBase::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18f4494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::FutureBase*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::FutureBase.Finalize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::FutureBase::*)()>(&::Firebase::FutureBase::Finalize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x18f6414;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::FutureBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::FutureBase*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::FutureBase.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::FutureBase::*)()>(&::Firebase::FutureBase::Dispose)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x18f4764;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::FutureBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::FutureBase*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::FutureBase.status
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::FutureStatus (::Firebase::FutureBase::*)()>(&::Firebase::FutureBase::status)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18f4ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::FutureBase*>::get(),
                        "status",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::FutureBase.error
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Firebase::FutureBase::*)()>(&::Firebase::FutureBase::error)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18f5384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::FutureBase*>::get(),
                        "error",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::FutureBase.error_message
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Firebase::FutureBase::*)()>(&::Firebase::FutureBase::error_message)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18f5414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::FutureBase*>::get(),
                        "error_message",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& Firebase::FutureBase::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& Firebase::FutureBase::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void Firebase::FutureBase::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& Firebase::FutureBase::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& Firebase::FutureBase::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void Firebase::FutureBase::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void Firebase::FutureBase::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::FutureBase*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline void Firebase::FutureBase::Finalize()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::FutureBase*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Firebase::FutureBase::Dispose()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::FutureBase*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::FutureStatus Firebase::FutureBase::status()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::FutureBase*>::get(),
                        "status",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::FutureStatus, false>(this, ___internal_method);
}
inline int32_t Firebase::FutureBase::error()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::FutureBase*>::get(),
                        "error",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW Firebase::FutureBase::error_message()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::FutureBase*>::get(),
                        "error_message",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Firebase::FutureBase* Firebase::FutureBase::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::FutureBase*>(cPtr, cMemoryOwn));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Firebase::FutureBase::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Firebase::FutureBase::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Firebase::FutureBase::FutureBase()   {
}
