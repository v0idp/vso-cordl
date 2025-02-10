#pragma once
// IWYU pragma private; include "Firebase/Auth/UserProfile.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Auth/zzzz__UserProfile_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Firebase::Auth::UserProfile._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::UserProfile::*)(::System::IntPtr, bool)>(&::Firebase::Auth::UserProfile::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18fb7cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::UserProfile*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::UserProfile._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::UserProfile::*)()>(&::Firebase::Auth::UserProfile::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x18fb820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::UserProfile*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::UserProfile.getCPtr
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Firebase::Auth::UserProfile*)>(&::Firebase::Auth::UserProfile::getCPtr)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x18fb8e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::UserProfile*>::get(),
                        "getCPtr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::UserProfile*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::UserProfile.Finalize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::UserProfile::*)()>(&::Firebase::Auth::UserProfile::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x18fb928;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::UserProfile*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::UserProfile*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::UserProfile.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::UserProfile::*)()>(&::Firebase::Auth::UserProfile::Dispose)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x18fb9bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::UserProfile*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::UserProfile.set_DisplayName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::UserProfile::*)(::StringW)>(&::Firebase::Auth::UserProfile::set_DisplayName)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x18fbb58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::UserProfile*>::get(),
                        "set_DisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& Firebase::Auth::UserProfile::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& Firebase::Auth::UserProfile::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void Firebase::Auth::UserProfile::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& Firebase::Auth::UserProfile::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& Firebase::Auth::UserProfile::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void Firebase::Auth::UserProfile::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void Firebase::Auth::UserProfile::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::UserProfile*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline void Firebase::Auth::UserProfile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::UserProfile*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::InteropServices::HandleRef Firebase::Auth::UserProfile::getCPtr(::Firebase::Auth::UserProfile*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::UserProfile*>::get(),
                        "getCPtr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::UserProfile*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef, false>(nullptr, ___internal_method, obj);
}
inline void Firebase::Auth::UserProfile::Finalize()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::UserProfile*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Firebase::Auth::UserProfile::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::UserProfile*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Firebase::Auth::UserProfile::set_DisplayName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::UserProfile*>::get(),
                        "set_DisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Firebase::Auth::UserProfile* Firebase::Auth::UserProfile::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Auth::UserProfile*>(cPtr, cMemoryOwn));
}
inline ::Firebase::Auth::UserProfile* Firebase::Auth::UserProfile::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Auth::UserProfile*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Firebase::Auth::UserProfile::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Firebase::Auth::UserProfile::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Firebase::Auth::UserProfile::UserProfile()   {
}
