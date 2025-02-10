#pragma once
// IWYU pragma private; include "Firebase/Auth/FirebaseAuth.hpp"
#include "Firebase/zzzz__InitResult_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Auth/zzzz__FirebaseAuth_def.hpp"
#include "Firebase/Auth/zzzz__FirebaseAuth_def.hpp"
#include "Firebase/Auth/zzzz__FirebaseUser_def.hpp"
#include "Firebase/zzzz__FirebaseApp_def.hpp"
#include "Firebase/zzzz__InitResult_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth_StateChangedDelegate._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth_StateChangedDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Firebase::Auth::FirebaseAuth_StateChangedDelegate::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x18f9e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth_StateChangedDelegate*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth_StateChangedDelegate.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth_StateChangedDelegate::*)(::System::IntPtr)>(&::Firebase::Auth::FirebaseAuth_StateChangedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x18fb694;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth_StateChangedDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth_StateChangedDelegate*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
inline void Firebase::Auth::FirebaseAuth_StateChangedDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth_StateChangedDelegate*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Firebase::Auth::FirebaseAuth_StateChangedDelegate::Invoke(::System::IntPtr  authCPtr)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth_StateChangedDelegate*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, authCPtr);
}
inline ::Firebase::Auth::FirebaseAuth_StateChangedDelegate* Firebase::Auth::FirebaseAuth_StateChangedDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Auth::FirebaseAuth_StateChangedDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Firebase::Auth::FirebaseAuth_StateChangedDelegate::FirebaseAuth_StateChangedDelegate()   {
}
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1::*)()>(&::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18f9e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Firebase::FirebaseApp*& Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1::__cordl_internal_get_app()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___app;
}
constexpr ::Firebase::FirebaseApp* const& Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1::__cordl_internal_get_app() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___app;
}
constexpr void Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1::__cordl_internal_set_app(::Firebase::FirebaseApp*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___app)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::Auth::FirebaseAuth*& Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1::__cordl_internal_get_auth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auth;
}
constexpr ::Firebase::Auth::FirebaseAuth* const& Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1::__cordl_internal_get_auth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auth;
}
constexpr void Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1::__cordl_internal_set_auth(::Firebase::Auth::FirebaseAuth*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___auth)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1* Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1*>());
}
// Ctor Parameters []
constexpr ::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1::FirebaseAuth__GetAuth_c__AnonStorey1()   {
}
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2::*)()>(&::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18f9e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2.__m__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2::*)()>(&::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2::__m__0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x18fb6a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Firebase::InitResult& Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2::__cordl_internal_get_init_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___init_result;
}
constexpr ::Firebase::InitResult const& Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2::__cordl_internal_get_init_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___init_result;
}
constexpr void Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2::__cordl_internal_set_init_result(::Firebase::InitResult  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___init_result = value;
}
constexpr ::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1*& Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2::__cordl_internal_get___f__ref$1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____f__ref$1;
}
constexpr ::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1* const& Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2::__cordl_internal_get___f__ref$1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____f__ref$1;
}
constexpr void Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2::__cordl_internal_set___f__ref$1(::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey1*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____f__ref$1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2::__m__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2* Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2*>());
}
// Ctor Parameters []
constexpr ::Firebase::Auth::FirebaseAuth__GetAuth_c__AnonStorey2::FirebaseAuth__GetAuth_c__AnonStorey2()   {
}
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3::*)()>(&::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18fa35c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Firebase::Auth::FirebaseAuth*>*& Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3::__cordl_internal_get_stateChangeClosure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateChangeClosure;
}
constexpr ::System::Action_1<::Firebase::Auth::FirebaseAuth*>* const& Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3::__cordl_internal_get_stateChangeClosure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateChangeClosure;
}
constexpr void Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3::__cordl_internal_set_stateChangeClosure(::System::Action_1<::Firebase::Auth::FirebaseAuth*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stateChangeClosure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3* Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3*>());
}
// Ctor Parameters []
constexpr ::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3::FirebaseAuth__ForwardStateChange_c__AnonStorey3()   {
}
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4::*)()>(&::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18fa364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4.__m__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4::*)()>(&::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4::__m__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18fb75c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Firebase::Auth::FirebaseAuth*& Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4::__cordl_internal_get_auth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auth;
}
constexpr ::Firebase::Auth::FirebaseAuth* const& Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4::__cordl_internal_get_auth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auth;
}
constexpr void Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4::__cordl_internal_set_auth(::Firebase::Auth::FirebaseAuth*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___auth)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3*& Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4::__cordl_internal_get___f__ref$3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____f__ref$3;
}
constexpr ::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3* const& Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4::__cordl_internal_get___f__ref$3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____f__ref$3;
}
constexpr void Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4::__cordl_internal_set___f__ref$3(::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey3*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____f__ref$3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4::__m__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4* Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4*>());
}
// Ctor Parameters []
constexpr ::Firebase::Auth::FirebaseAuth__ForwardStateChange_c__AnonStorey4::FirebaseAuth__ForwardStateChange_c__AnonStorey4()   {
}
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA::*)()>(&::Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18fa9f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA.__m__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA::*)(::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*)>(&::Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA::__m__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18fb78c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>*& Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA::__cordl_internal_get_taskCompletionSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taskCompletionSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>* const& Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA::__cordl_internal_get_taskCompletionSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taskCompletionSource;
}
constexpr void Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA::__cordl_internal_set_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___taskCompletionSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::Auth::FirebaseAuth*& Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA::__cordl_internal_get_$this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___$this;
}
constexpr ::Firebase::Auth::FirebaseAuth* const& Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA::__cordl_internal_get_$this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___$this;
}
constexpr void Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA::__cordl_internal_set_$this(::Firebase::Auth::FirebaseAuth*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___$this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA::__m__0(::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA* Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA*>());
}
// Ctor Parameters []
constexpr ::Firebase::Auth::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA::FirebaseAuth__SignInWithEmailAndPasswordAsync_c__AnonStoreyA()   {
}
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB::*)()>(&::Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18fac48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB.__m__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB::*)(::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*)>(&::Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB::__m__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18fb7ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>*& Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB::__cordl_internal_get_taskCompletionSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taskCompletionSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>* const& Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB::__cordl_internal_get_taskCompletionSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taskCompletionSource;
}
constexpr void Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB::__cordl_internal_set_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___taskCompletionSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::Auth::FirebaseAuth*& Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB::__cordl_internal_get_$this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___$this;
}
constexpr ::Firebase::Auth::FirebaseAuth* const& Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB::__cordl_internal_get_$this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___$this;
}
constexpr void Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB::__cordl_internal_set_$this(::Firebase::Auth::FirebaseAuth*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___$this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB::__m__0(::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB* Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB*>());
}
// Ctor Parameters []
constexpr ::Firebase::Auth::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB::FirebaseAuth__CreateUserWithEmailAndPasswordAsync_c__AnonStoreyB()   {
}
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth::*)(::System::IntPtr, bool)>(&::Firebase::Auth::FirebaseAuth::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18f9450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.getCPtr
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Firebase::Auth::FirebaseAuth*)>(&::Firebase::Auth::FirebaseAuth::getCPtr)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x18f8fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "getCPtr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseAuth*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.Finalize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth::*)()>(&::Firebase::Auth::FirebaseAuth::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x18f94a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth::*)()>(&::Firebase::Auth::FirebaseAuth::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18f9538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.ProxyFromAppCPtr
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Auth::FirebaseAuth* (*)(::System::IntPtr)>(&::Firebase::Auth::FirebaseAuth::ProxyFromAppCPtr)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x18f989c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "ProxyFromAppCPtr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.ThrowIfNull
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth::*)()>(&::Firebase::Auth::FirebaseAuth::ThrowIfNull)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18f99e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "ThrowIfNull",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.GetAuth
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Auth::FirebaseAuth* (*)(::Firebase::FirebaseApp*)>(&::Firebase::Auth::FirebaseAuth::GetAuth)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x18f9a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "GetAuth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::FirebaseApp*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.OnAppDisposed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth::*)(::System::Object*, ::System::EventArgs*)>(&::Firebase::Auth::FirebaseAuth::OnAppDisposed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18f9f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "OnAppDisposed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.DisposeInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth::*)()>(&::Firebase::Auth::FirebaseAuth::DisposeInternal)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x18f953c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "DisposeInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.ForwardStateChange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::Action_1<::Firebase::Auth::FirebaseAuth*>*)>(&::Firebase::Auth::FirebaseAuth::ForwardStateChange)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x18fa184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "ForwardStateChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Firebase::Auth::FirebaseAuth*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.StateChangedFunction
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::Firebase::Auth::FirebaseAuth::StateChangedFunction)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x18f9298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "StateChangedFunction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.IdTokenChangedFunction
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::Firebase::Auth::FirebaseAuth::IdTokenChangedFunction)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x18f9374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "IdTokenChangedFunction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.get_DefaultInstance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Auth::FirebaseAuth* (*)()>(&::Firebase::Auth::FirebaseAuth::get_DefaultInstance)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x18fa36c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "get_DefaultInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.add_StateChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth::*)(::System::EventHandler*)>(&::Firebase::Auth::FirebaseAuth::add_StateChanged)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x18fa3f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "add_StateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.remove_StateChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth::*)(::System::EventHandler*)>(&::Firebase::Auth::FirebaseAuth::remove_StateChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18fa524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "remove_StateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.add_stateChangedImpl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth::*)(::System::EventHandler*)>(&::Firebase::Auth::FirebaseAuth::add_stateChangedImpl)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x18fa488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "add_stateChangedImpl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.remove_stateChangedImpl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth::*)(::System::EventHandler*)>(&::Firebase::Auth::FirebaseAuth::remove_stateChangedImpl)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x18fa528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "remove_stateChangedImpl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.UpdateCurrentUser
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Auth::FirebaseUser* (::Firebase::Auth::FirebaseAuth::*)(::Firebase::Auth::FirebaseUser*)>(&::Firebase::Auth::FirebaseAuth::UpdateCurrentUser)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18fa5c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "UpdateCurrentUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseUser*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.get_CurrentUser
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Auth::FirebaseUser* (::Firebase::Auth::FirebaseAuth::*)()>(&::Firebase::Auth::FirebaseAuth::get_CurrentUser)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18fa758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "get_CurrentUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.SignInWithEmailAndPasswordAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* (::Firebase::Auth::FirebaseAuth::*)(::StringW, ::StringW)>(&::Firebase::Auth::FirebaseAuth::SignInWithEmailAndPasswordAsync)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x18fa88c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "SignInWithEmailAndPasswordAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.CreateUserWithEmailAndPasswordAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* (::Firebase::Auth::FirebaseAuth::*)(::StringW, ::StringW)>(&::Firebase::Auth::FirebaseAuth::CreateUserWithEmailAndPasswordAsync)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x18faae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "CreateUserWithEmailAndPasswordAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.CompleteFirebaseUserTask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth::*)(::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*, ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>*)>(&::Firebase::Auth::FirebaseAuth::CompleteFirebaseUserTask)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18fad3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "CompleteFirebaseUserTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.SignInWithEmailAndPasswordInternalAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* (::Firebase::Auth::FirebaseAuth::*)(::StringW, ::StringW)>(&::Firebase::Auth::FirebaseAuth::SignInWithEmailAndPasswordInternalAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x18fa9f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "SignInWithEmailAndPasswordInternalAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.CreateUserWithEmailAndPasswordInternalAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* (::Firebase::Auth::FirebaseAuth::*)(::StringW, ::StringW)>(&::Firebase::Auth::FirebaseAuth::CreateUserWithEmailAndPasswordInternalAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x18fac50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "CreateUserWithEmailAndPasswordInternalAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.SignOut
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Auth::FirebaseAuth::*)()>(&::Firebase::Auth::FirebaseAuth::SignOut)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18fb0c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "SignOut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.SendPasswordResetEmailAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Firebase::Auth::FirebaseAuth::*)(::StringW)>(&::Firebase::Auth::FirebaseAuth::SendPasswordResetEmailAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18fb154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "SendPasswordResetEmailAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.GetAuthInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Auth::FirebaseAuth* (*)(::Firebase::FirebaseApp*, ::ByRef<::Firebase::InitResult>)>(&::Firebase::Auth::FirebaseAuth::GetAuthInternal)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x18fb214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "GetAuthInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::FirebaseApp*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Firebase::InitResult>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.ReleaseReferenceInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Firebase::Auth::FirebaseAuth*)>(&::Firebase::Auth::FirebaseAuth::ReleaseReferenceInternal)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18fa0c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "ReleaseReferenceInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseAuth*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth.get_CurrentUserInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Auth::FirebaseUser* (::Firebase::Auth::FirebaseAuth::*)()>(&::Firebase::Auth::FirebaseAuth::get_CurrentUserInternal)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x18fa790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "get_CurrentUserInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth._StateChangedFunction_m__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Firebase::Auth::FirebaseAuth*)>(&::Firebase::Auth::FirebaseAuth::_StateChangedFunction_m__0)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x18fb4b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "<StateChangedFunction>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseAuth*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Auth::FirebaseAuth._IdTokenChangedFunction_m__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Firebase::Auth::FirebaseAuth*)>(&::Firebase::Auth::FirebaseAuth::_IdTokenChangedFunction_m__1)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x18fb60c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "<IdTokenChangedFunction>m__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseAuth*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& Firebase::Auth::FirebaseAuth::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& Firebase::Auth::FirebaseAuth::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void Firebase::Auth::FirebaseAuth::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& Firebase::Auth::FirebaseAuth::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& Firebase::Auth::FirebaseAuth::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void Firebase::Auth::FirebaseAuth::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
constexpr ::Firebase::FirebaseApp*& Firebase::Auth::FirebaseAuth::__cordl_internal_get_appProxy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appProxy;
}
constexpr ::Firebase::FirebaseApp* const& Firebase::Auth::FirebaseAuth::__cordl_internal_get_appProxy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appProxy;
}
constexpr void Firebase::Auth::FirebaseAuth::__cordl_internal_set_appProxy(::Firebase::FirebaseApp*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___appProxy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IntPtr& Firebase::Auth::FirebaseAuth::__cordl_internal_get_appCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appCPtr;
}
constexpr ::System::IntPtr const& Firebase::Auth::FirebaseAuth::__cordl_internal_get_appCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appCPtr;
}
constexpr void Firebase::Auth::FirebaseAuth::__cordl_internal_set_appCPtr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___appCPtr = value;
}
constexpr ::System::IntPtr& Firebase::Auth::FirebaseAuth::__cordl_internal_get_authStateListener()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authStateListener;
}
constexpr ::System::IntPtr const& Firebase::Auth::FirebaseAuth::__cordl_internal_get_authStateListener() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authStateListener;
}
constexpr void Firebase::Auth::FirebaseAuth::__cordl_internal_set_authStateListener(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authStateListener = value;
}
constexpr ::System::IntPtr& Firebase::Auth::FirebaseAuth::__cordl_internal_get_idTokenListener()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idTokenListener;
}
constexpr ::System::IntPtr const& Firebase::Auth::FirebaseAuth::__cordl_internal_get_idTokenListener() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idTokenListener;
}
constexpr void Firebase::Auth::FirebaseAuth::__cordl_internal_set_idTokenListener(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idTokenListener = value;
}
constexpr ::Firebase::Auth::FirebaseUser*& Firebase::Auth::FirebaseAuth::__cordl_internal_get_currentUser()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentUser;
}
constexpr ::Firebase::Auth::FirebaseUser* const& Firebase::Auth::FirebaseAuth::__cordl_internal_get_currentUser() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentUser;
}
constexpr void Firebase::Auth::FirebaseAuth::__cordl_internal_set_currentUser(::Firebase::Auth::FirebaseUser*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentUser)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler*& Firebase::Auth::FirebaseAuth::__cordl_internal_get_stateChangedImpl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateChangedImpl;
}
constexpr ::System::EventHandler* const& Firebase::Auth::FirebaseAuth::__cordl_internal_get_stateChangedImpl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateChangedImpl;
}
constexpr void Firebase::Auth::FirebaseAuth::__cordl_internal_set_stateChangedImpl(::System::EventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stateChangedImpl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler*& Firebase::Auth::FirebaseAuth::__cordl_internal_get_idTokenChangedImpl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idTokenChangedImpl;
}
constexpr ::System::EventHandler* const& Firebase::Auth::FirebaseAuth::__cordl_internal_get_idTokenChangedImpl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idTokenChangedImpl;
}
constexpr void Firebase::Auth::FirebaseAuth::__cordl_internal_set_idTokenChangedImpl(::System::EventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___idTokenChangedImpl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Firebase::Auth::FirebaseAuth::__cordl_internal_get_persistentLoaded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___persistentLoaded;
}
constexpr bool const& Firebase::Auth::FirebaseAuth::__cordl_internal_get_persistentLoaded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___persistentLoaded;
}
constexpr void Firebase::Auth::FirebaseAuth::__cordl_internal_set_persistentLoaded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___persistentLoaded = value;
}
inline void Firebase::Auth::FirebaseAuth::setStaticF_appCPtrToAuth(::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Firebase::Auth::FirebaseAuth*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Firebase::Auth::FirebaseAuth*>*, "appCPtrToAuth", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Firebase::Auth::FirebaseAuth*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Firebase::Auth::FirebaseAuth*>* Firebase::Auth::FirebaseAuth::getStaticF_appCPtrToAuth()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Firebase::Auth::FirebaseAuth*>*, "appCPtrToAuth", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get>();
}
inline void Firebase::Auth::FirebaseAuth::setStaticF___f__mg$cache0(::Firebase::Auth::FirebaseAuth_StateChangedDelegate*  value)  {
::cordl_internals::setStaticField<::Firebase::Auth::FirebaseAuth_StateChangedDelegate*, "<>f__mg$cache0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get>(std::forward<::Firebase::Auth::FirebaseAuth_StateChangedDelegate*>(value));
}
inline ::Firebase::Auth::FirebaseAuth_StateChangedDelegate* Firebase::Auth::FirebaseAuth::getStaticF___f__mg$cache0()  {
return ::cordl_internals::getStaticField<::Firebase::Auth::FirebaseAuth_StateChangedDelegate*, "<>f__mg$cache0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get>();
}
inline void Firebase::Auth::FirebaseAuth::setStaticF___f__mg$cache1(::Firebase::Auth::FirebaseAuth_StateChangedDelegate*  value)  {
::cordl_internals::setStaticField<::Firebase::Auth::FirebaseAuth_StateChangedDelegate*, "<>f__mg$cache1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get>(std::forward<::Firebase::Auth::FirebaseAuth_StateChangedDelegate*>(value));
}
inline ::Firebase::Auth::FirebaseAuth_StateChangedDelegate* Firebase::Auth::FirebaseAuth::getStaticF___f__mg$cache1()  {
return ::cordl_internals::getStaticField<::Firebase::Auth::FirebaseAuth_StateChangedDelegate*, "<>f__mg$cache1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get>();
}
inline void Firebase::Auth::FirebaseAuth::setStaticF___f__am$cache0(::System::Action_1<::Firebase::Auth::FirebaseAuth*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Firebase::Auth::FirebaseAuth*>*, "<>f__am$cache0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get>(std::forward<::System::Action_1<::Firebase::Auth::FirebaseAuth*>*>(value));
}
inline ::System::Action_1<::Firebase::Auth::FirebaseAuth*>* Firebase::Auth::FirebaseAuth::getStaticF___f__am$cache0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Firebase::Auth::FirebaseAuth*>*, "<>f__am$cache0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get>();
}
inline void Firebase::Auth::FirebaseAuth::setStaticF___f__am$cache1(::System::Action_1<::Firebase::Auth::FirebaseAuth*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Firebase::Auth::FirebaseAuth*>*, "<>f__am$cache1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get>(std::forward<::System::Action_1<::Firebase::Auth::FirebaseAuth*>*>(value));
}
inline ::System::Action_1<::Firebase::Auth::FirebaseAuth*>* Firebase::Auth::FirebaseAuth::getStaticF___f__am$cache1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Firebase::Auth::FirebaseAuth*>*, "<>f__am$cache1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get>();
}
inline void Firebase::Auth::FirebaseAuth::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef Firebase::Auth::FirebaseAuth::getCPtr(::Firebase::Auth::FirebaseAuth*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "getCPtr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseAuth*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef, false>(nullptr, ___internal_method, obj);
}
inline void Firebase::Auth::FirebaseAuth::Finalize()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Firebase::Auth::FirebaseAuth::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Auth::FirebaseAuth* Firebase::Auth::FirebaseAuth::ProxyFromAppCPtr(::System::IntPtr  appCPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "ProxyFromAppCPtr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Auth::FirebaseAuth*, false>(nullptr, ___internal_method, appCPtr);
}
inline void Firebase::Auth::FirebaseAuth::ThrowIfNull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "ThrowIfNull",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Auth::FirebaseAuth* Firebase::Auth::FirebaseAuth::GetAuth(::Firebase::FirebaseApp*  app)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "GetAuth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::FirebaseApp*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Auth::FirebaseAuth*, false>(nullptr, ___internal_method, app);
}
inline void Firebase::Auth::FirebaseAuth::OnAppDisposed(::System::Object*  sender, ::System::EventArgs*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "OnAppDisposed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void Firebase::Auth::FirebaseAuth::DisposeInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "DisposeInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Firebase::Auth::FirebaseAuth::ForwardStateChange(::System::IntPtr  appCPtr, ::System::Action_1<::Firebase::Auth::FirebaseAuth*>*  stateChangeClosure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "ForwardStateChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Firebase::Auth::FirebaseAuth*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, appCPtr, stateChangeClosure);
}
inline void Firebase::Auth::FirebaseAuth::StateChangedFunction(::System::IntPtr  appCPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "StateChangedFunction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, appCPtr);
}
inline void Firebase::Auth::FirebaseAuth::IdTokenChangedFunction(::System::IntPtr  appCPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "IdTokenChangedFunction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, appCPtr);
}
inline ::Firebase::Auth::FirebaseAuth* Firebase::Auth::FirebaseAuth::get_DefaultInstance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "get_DefaultInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Auth::FirebaseAuth*, false>(nullptr, ___internal_method);
}
inline void Firebase::Auth::FirebaseAuth::add_StateChanged(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "add_StateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Firebase::Auth::FirebaseAuth::remove_StateChanged(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "remove_StateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Firebase::Auth::FirebaseAuth::add_stateChangedImpl(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "add_stateChangedImpl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Firebase::Auth::FirebaseAuth::remove_stateChangedImpl(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "remove_stateChangedImpl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Firebase::Auth::FirebaseUser* Firebase::Auth::FirebaseAuth::UpdateCurrentUser(::Firebase::Auth::FirebaseUser*  proxy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "UpdateCurrentUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseUser*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Auth::FirebaseUser*, false>(this, ___internal_method, proxy);
}
inline ::Firebase::Auth::FirebaseUser* Firebase::Auth::FirebaseAuth::get_CurrentUser()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "get_CurrentUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Auth::FirebaseUser*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* Firebase::Auth::FirebaseAuth::SignInWithEmailAndPasswordAsync(::StringW  email, ::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "SignInWithEmailAndPasswordAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*, false>(this, ___internal_method, email, password);
}
inline ::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* Firebase::Auth::FirebaseAuth::CreateUserWithEmailAndPasswordAsync(::StringW  email, ::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "CreateUserWithEmailAndPasswordAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*, false>(this, ___internal_method, email, password);
}
inline void Firebase::Auth::FirebaseAuth::CompleteFirebaseUserTask(::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*  task, ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>*  taskCompletionSource)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "CompleteFirebaseUserTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task, taskCompletionSource);
}
inline ::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* Firebase::Auth::FirebaseAuth::SignInWithEmailAndPasswordInternalAsync(::StringW  email, ::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "SignInWithEmailAndPasswordInternalAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*, false>(this, ___internal_method, email, password);
}
inline ::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* Firebase::Auth::FirebaseAuth::CreateUserWithEmailAndPasswordInternalAsync(::StringW  email, ::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "CreateUserWithEmailAndPasswordInternalAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*, false>(this, ___internal_method, email, password);
}
inline void Firebase::Auth::FirebaseAuth::SignOut()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "SignOut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Firebase::Auth::FirebaseAuth::SendPasswordResetEmailAsync(::StringW  email)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "SendPasswordResetEmailAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, email);
}
inline ::Firebase::Auth::FirebaseAuth* Firebase::Auth::FirebaseAuth::GetAuthInternal(::Firebase::FirebaseApp*  app, ::ByRef<::Firebase::InitResult>  init_result_out)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "GetAuthInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::FirebaseApp*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Firebase::InitResult>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Auth::FirebaseAuth*, false>(nullptr, ___internal_method, app, init_result_out);
}
inline void Firebase::Auth::FirebaseAuth::ReleaseReferenceInternal(::Firebase::Auth::FirebaseAuth*  instance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "ReleaseReferenceInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseAuth*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, instance);
}
inline ::Firebase::Auth::FirebaseUser* Firebase::Auth::FirebaseAuth::get_CurrentUserInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "get_CurrentUserInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Auth::FirebaseUser*, false>(this, ___internal_method);
}
inline void Firebase::Auth::FirebaseAuth::_StateChangedFunction_m__0(::Firebase::Auth::FirebaseAuth*  auth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "<StateChangedFunction>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseAuth*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, auth);
}
inline void Firebase::Auth::FirebaseAuth::_IdTokenChangedFunction_m__1(::Firebase::Auth::FirebaseAuth*  auth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Auth::FirebaseAuth*>::get(),
                        "<IdTokenChangedFunction>m__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Auth::FirebaseAuth*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, auth);
}
inline ::Firebase::Auth::FirebaseAuth* Firebase::Auth::FirebaseAuth::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Auth::FirebaseAuth*>(cPtr, cMemoryOwn));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Firebase::Auth::FirebaseAuth::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Firebase::Auth::FirebaseAuth::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Firebase::Auth::FirebaseAuth::FirebaseAuth()   {
}
