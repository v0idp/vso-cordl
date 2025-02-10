#pragma once
// IWYU pragma private; include "Firebase/Auth/FirebaseUser.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Auth/zzzz__FirebaseUser_def.hpp"
#include "Firebase/Auth/zzzz__FirebaseAuth_def.hpp"
#include "Firebase/Auth/zzzz__UserProfile_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Firebase::Auth::FirebaseUser._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseUser::*)(::System::IntPtr, bool)>(&::Firebase::Auth::FirebaseUser::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x18fb3d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseUser.getCPtr
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Firebase::Auth::FirebaseUser*)>(&::Firebase::Auth::FirebaseUser::getCPtr)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x18fa714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                        "getCPtr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseUser*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseUser.Finalize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseUser::*)()>(&::Firebase::Auth::FirebaseUser::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x18fbc14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseUser.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseUser::*)()>(&::Firebase::Auth::FirebaseUser::Dispose)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x18f9f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseUser.UpdateEmailAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Firebase::Auth::FirebaseUser::*)(::StringW)>(&::Firebase::Auth::FirebaseUser::UpdateEmailAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18fbca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                        "UpdateEmailAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseUser.UpdatePasswordAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Firebase::Auth::FirebaseUser::*)(::StringW)>(&::Firebase::Auth::FirebaseUser::UpdatePasswordAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18fbd68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                        "UpdatePasswordAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseUser.SendEmailVerificationAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Firebase::Auth::FirebaseUser::*)()>(&::Firebase::Auth::FirebaseUser::SendEmailVerificationAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18fbe28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                        "SendEmailVerificationAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseUser.UpdateUserProfileAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Firebase::Auth::FirebaseUser::*)(::Firebase::Auth::UserProfile*)>(&::Firebase::Auth::FirebaseUser::UpdateUserProfileAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x18fbed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                        "UpdateUserProfileAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::UserProfile*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseUser.ReloadAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Firebase::Auth::FirebaseUser::*)()>(&::Firebase::Auth::FirebaseUser::ReloadAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18fbfac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                        "ReloadAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseUser.get_IsEmailVerified
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Firebase::Auth::FirebaseUser::*)()>(&::Firebase::Auth::FirebaseUser::get_IsEmailVerified)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x18fc05c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                        "get_IsEmailVerified",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseUser.get_UserId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Firebase::Auth::FirebaseUser::*)()>(&::Firebase::Auth::FirebaseUser::get_UserId)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x18fc0f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                        "get_UserId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& Firebase::Auth::FirebaseUser::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& Firebase::Auth::FirebaseUser::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void Firebase::Auth::FirebaseUser::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
constexpr ::System::Runtime::InteropServices::HandleRef& Firebase::Auth::FirebaseUser::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& Firebase::Auth::FirebaseUser::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void Firebase::Auth::FirebaseUser::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr ::Firebase::Auth::FirebaseAuth*& Firebase::Auth::FirebaseUser::__cordl_internal_get_authProxy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authProxy;
}
constexpr ::Firebase::Auth::FirebaseAuth* const& Firebase::Auth::FirebaseUser::__cordl_internal_get_authProxy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authProxy;
}
constexpr void Firebase::Auth::FirebaseUser::__cordl_internal_set_authProxy(::Firebase::Auth::FirebaseAuth*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___authProxy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Auth::FirebaseUser::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef Firebase::Auth::FirebaseUser::getCPtr(::Firebase::Auth::FirebaseUser*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                        "getCPtr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseUser*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef, false>(nullptr, ___internal_method, obj);
}
inline void Firebase::Auth::FirebaseUser::Finalize()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Firebase::Auth::FirebaseUser::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Firebase::Auth::FirebaseUser::UpdateEmailAsync(::StringW  email)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                        "UpdateEmailAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, email);
}
inline ::System::Threading::Tasks::Task* Firebase::Auth::FirebaseUser::UpdatePasswordAsync(::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                        "UpdatePasswordAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, password);
}
inline ::System::Threading::Tasks::Task* Firebase::Auth::FirebaseUser::SendEmailVerificationAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                        "SendEmailVerificationAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Firebase::Auth::FirebaseUser::UpdateUserProfileAsync(::Firebase::Auth::UserProfile*  profile)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                        "UpdateUserProfileAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::UserProfile*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, profile);
}
inline ::System::Threading::Tasks::Task* Firebase::Auth::FirebaseUser::ReloadAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                        "ReloadAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline bool Firebase::Auth::FirebaseUser::get_IsEmailVerified()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                        "get_IsEmailVerified",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Firebase::Auth::FirebaseUser::get_UserId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseUser*>::get(),
                        "get_UserId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Firebase::Auth::FirebaseUser* Firebase::Auth::FirebaseUser::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Auth::FirebaseUser*>(cPtr, cMemoryOwn));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Firebase::Auth::FirebaseUser::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Firebase::Auth::FirebaseUser::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Firebase::Auth::FirebaseUser::FirebaseUser()   {
}
