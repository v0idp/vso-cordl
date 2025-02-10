#pragma once
// IWYU pragma private; include "RSG/Promise.hpp"
#include "RSG/zzzz__IPendingPromise_impl.hpp"
#include "RSG/zzzz__IPromiseInfo_impl.hpp"
#include "RSG/zzzz__IPromise_impl.hpp"
#include "RSG/zzzz__IRejectable_impl.hpp"
#include "RSG/zzzz__PromiseState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "RSG/zzzz__Promise_def.hpp"
#include "RSG/zzzz__ExceptionEventArgs_def.hpp"
#include "RSG/zzzz__IPromiseInfo_def.hpp"
#include "RSG/zzzz__IPromise_1_def.hpp"
#include "RSG/zzzz__IPromise_def.hpp"
#include "RSG/zzzz__IRejectable_def.hpp"
#include "RSG/zzzz__ProgressHandler_def.hpp"
#include "RSG/zzzz__PromiseState_def.hpp"
#include "RSG/zzzz__Promise_1_def.hpp"
#include "RSG/zzzz__Promise_def.hpp"
#include "RSG/zzzz__RejectHandler_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "callback", ty: "::System::Action*", modifiers: "", def_value: Some("{}") }, CppParam { name: "rejectable", ty: "::RSG::IRejectable*", modifiers: "", def_value: Some("{}") }]
constexpr ::RSG::Promise_ResolveHandler::Promise_ResolveHandler(::System::Action*  callback, ::RSG::IRejectable*  rejectable) noexcept  {
this->callback = callback;
this->rejectable = rejectable;
}
// Ctor Parameters []
constexpr ::RSG::Promise_ResolveHandler::Promise_ResolveHandler()   {
}
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass34_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass34_0::*)()>(&::RSG::Promise___c__DisplayClass34_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f62c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass34_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass34_0._InvokeRejectHandlers_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass34_0::*)(::RSG::RejectHandler)>(&::RSG::Promise___c__DisplayClass34_0::_InvokeRejectHandlers_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x17f62c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass34_0*>::get(),
                        "<InvokeRejectHandlers>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::RejectHandler>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::RSG::Promise*& RSG::Promise___c__DisplayClass34_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::RSG::Promise* const& RSG::Promise___c__DisplayClass34_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void RSG::Promise___c__DisplayClass34_0::__cordl_internal_set___4__this(::RSG::Promise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Exception*& RSG::Promise___c__DisplayClass34_0::__cordl_internal_get_ex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ex;
}
constexpr ::System::Exception* const& RSG::Promise___c__DisplayClass34_0::__cordl_internal_get_ex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ex;
}
constexpr void RSG::Promise___c__DisplayClass34_0::__cordl_internal_set_ex(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RSG::Promise___c__DisplayClass34_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass34_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Promise___c__DisplayClass34_0::_InvokeRejectHandlers_b__0(::RSG::RejectHandler  handler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass34_0*>::get(),
                        "<InvokeRejectHandlers>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::RejectHandler>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handler);
}
inline ::RSG::Promise___c__DisplayClass34_0* RSG::Promise___c__DisplayClass34_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Promise___c__DisplayClass34_0*>());
}
// Ctor Parameters []
constexpr ::RSG::Promise___c__DisplayClass34_0::Promise___c__DisplayClass34_0()   {
}
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass36_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass36_0::*)()>(&::RSG::Promise___c__DisplayClass36_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f62ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass36_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass36_0._InvokeProgressHandlers_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass36_0::*)(::RSG::ProgressHandler)>(&::RSG::Promise___c__DisplayClass36_0::_InvokeProgressHandlers_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x17f62f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass36_0*>::get(),
                        "<InvokeProgressHandlers>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::ProgressHandler>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::RSG::Promise*& RSG::Promise___c__DisplayClass36_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::RSG::Promise* const& RSG::Promise___c__DisplayClass36_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void RSG::Promise___c__DisplayClass36_0::__cordl_internal_set___4__this(::RSG::Promise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RSG::Promise___c__DisplayClass36_0::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr float_t const& RSG::Promise___c__DisplayClass36_0::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void RSG::Promise___c__DisplayClass36_0::__cordl_internal_set_progress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
inline void RSG::Promise___c__DisplayClass36_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass36_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Promise___c__DisplayClass36_0::_InvokeProgressHandlers_b__0(::RSG::ProgressHandler  handler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass36_0*>::get(),
                        "<InvokeProgressHandlers>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::ProgressHandler>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handler);
}
inline ::RSG::Promise___c__DisplayClass36_0* RSG::Promise___c__DisplayClass36_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Promise___c__DisplayClass36_0*>());
}
// Ctor Parameters []
constexpr ::RSG::Promise___c__DisplayClass36_0::Promise___c__DisplayClass36_0()   {
}
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass44_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass44_0::*)()>(&::RSG::Promise___c__DisplayClass44_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f6318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass44_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass44_0._Catch_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass44_0::*)()>(&::RSG::Promise___c__DisplayClass44_0::_Catch_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17f6320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass44_0*>::get(),
                        "<Catch>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass44_0._Catch_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass44_0::*)(::System::Exception*)>(&::RSG::Promise___c__DisplayClass44_0::_Catch_b__1)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x17f633c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass44_0*>::get(),
                        "<Catch>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass44_0._Catch_b__2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass44_0::*)(float_t)>(&::RSG::Promise___c__DisplayClass44_0::_Catch_b__2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17f6418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass44_0*>::get(),
                        "<Catch>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::RSG::Promise*& RSG::Promise___c__DisplayClass44_0::__cordl_internal_get_resultPromise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultPromise;
}
constexpr ::RSG::Promise* const& RSG::Promise___c__DisplayClass44_0::__cordl_internal_get_resultPromise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultPromise;
}
constexpr void RSG::Promise___c__DisplayClass44_0::__cordl_internal_set_resultPromise(::RSG::Promise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resultPromise)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Exception*>*& RSG::Promise___c__DisplayClass44_0::__cordl_internal_get_onRejected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRejected;
}
constexpr ::System::Action_1<::System::Exception*>* const& RSG::Promise___c__DisplayClass44_0::__cordl_internal_get_onRejected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRejected;
}
constexpr void RSG::Promise___c__DisplayClass44_0::__cordl_internal_set_onRejected(::System::Action_1<::System::Exception*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onRejected)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RSG::Promise___c__DisplayClass44_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass44_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Promise___c__DisplayClass44_0::_Catch_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass44_0*>::get(),
                        "<Catch>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Promise___c__DisplayClass44_0::_Catch_b__1(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass44_0*>::get(),
                        "<Catch>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ex);
}
inline void RSG::Promise___c__DisplayClass44_0::_Catch_b__2(float_t  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass44_0*>::get(),
                        "<Catch>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
inline ::RSG::Promise___c__DisplayClass44_0* RSG::Promise___c__DisplayClass44_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Promise___c__DisplayClass44_0*>());
}
// Ctor Parameters []
constexpr ::RSG::Promise___c__DisplayClass44_0::Promise___c__DisplayClass44_0()   {
}
template<typename ConvertedT>
constexpr ::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*& RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_get_onResolved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onResolved;
}
template<typename ConvertedT>
constexpr ::System::Func_1<::RSG::IPromise_1<ConvertedT>*>* const& RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_get_onResolved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onResolved;
}
template<typename ConvertedT>
constexpr void RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_set_onResolved(::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___onResolved, value);
}
template<typename ConvertedT>
constexpr ::RSG::Promise_1<ConvertedT>*& RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_get_resultPromise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultPromise;
}
template<typename ConvertedT>
constexpr ::RSG::Promise_1<ConvertedT>* const& RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_get_resultPromise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultPromise;
}
template<typename ConvertedT>
constexpr void RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_set_resultPromise(::RSG::Promise_1<ConvertedT>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___resultPromise, value);
}
template<typename ConvertedT>
constexpr ::System::Func_2<::System::Exception*,::RSG::IPromise_1<ConvertedT>*>*& RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_get_onRejected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRejected;
}
template<typename ConvertedT>
constexpr ::System::Func_2<::System::Exception*,::RSG::IPromise_1<ConvertedT>*>* const& RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_get_onRejected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRejected;
}
template<typename ConvertedT>
constexpr void RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_set_onRejected(::System::Func_2<::System::Exception*,::RSG::IPromise_1<ConvertedT>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___onRejected, value);
}
template<typename ConvertedT>
constexpr ::System::Action_1<float_t>*& RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_get___9__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__2;
}
template<typename ConvertedT>
constexpr ::System::Action_1<float_t>* const& RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_get___9__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__2;
}
template<typename ConvertedT>
constexpr void RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_set___9__2(::System::Action_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->_____9__2, value);
}
template<typename ConvertedT>
constexpr ::System::Action_1<ConvertedT>*& RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_get___9__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__3;
}
template<typename ConvertedT>
constexpr ::System::Action_1<ConvertedT>* const& RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_get___9__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__3;
}
template<typename ConvertedT>
constexpr void RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_set___9__3(::System::Action_1<ConvertedT>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->_____9__3, value);
}
template<typename ConvertedT>
constexpr ::System::Action_1<::System::Exception*>*& RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_get___9__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__4;
}
template<typename ConvertedT>
constexpr ::System::Action_1<::System::Exception*>* const& RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_get___9__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__4;
}
template<typename ConvertedT>
constexpr void RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_set___9__4(::System::Action_1<::System::Exception*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->_____9__4, value);
}
template<typename ConvertedT>
constexpr ::System::Action_1<ConvertedT>*& RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_get___9__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__5;
}
template<typename ConvertedT>
constexpr ::System::Action_1<ConvertedT>* const& RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_get___9__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__5;
}
template<typename ConvertedT>
constexpr void RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_set___9__5(::System::Action_1<ConvertedT>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->_____9__5, value);
}
template<typename ConvertedT>
constexpr ::System::Action_1<::System::Exception*>*& RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_get___9__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__6;
}
template<typename ConvertedT>
constexpr ::System::Action_1<::System::Exception*>* const& RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_get___9__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__6;
}
template<typename ConvertedT>
constexpr void RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::__cordl_internal_set___9__6(::System::Action_1<::System::Exception*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->_____9__6, value);
}
template<typename ConvertedT>
inline void RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass51_0_1<ConvertedT>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename ConvertedT>
inline void RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::_Then_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass51_0_1<ConvertedT>*>::get(),
                        "<Then>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename ConvertedT>
inline void RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::_Then_b__2(float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass51_0_1<ConvertedT>*>::get(),
                        "<Then>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, progress);
}
template<typename ConvertedT>
inline void RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::_Then_b__3(ConvertedT  chainedValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass51_0_1<ConvertedT>*>::get(),
                        "<Then>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ConvertedT>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chainedValue);
}
template<typename ConvertedT>
inline void RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::_Then_b__4(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass51_0_1<ConvertedT>*>::get(),
                        "<Then>b__4",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ex);
}
template<typename ConvertedT>
inline void RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::_Then_b__1(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass51_0_1<ConvertedT>*>::get(),
                        "<Then>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ex);
}
template<typename ConvertedT>
inline void RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::_Then_b__5(ConvertedT  chainedValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass51_0_1<ConvertedT>*>::get(),
                        "<Then>b__5",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ConvertedT>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chainedValue);
}
template<typename ConvertedT>
inline void RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::_Then_b__6(::System::Exception*  callbackEx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass51_0_1<ConvertedT>*>::get(),
                        "<Then>b__6",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callbackEx);
}
template<typename ConvertedT>
inline ::RSG::Promise___c__DisplayClass51_0_1<ConvertedT>* RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Promise___c__DisplayClass51_0_1<ConvertedT>*>());
}
// Ctor Parameters []
template<typename ConvertedT>
constexpr ::RSG::Promise___c__DisplayClass51_0_1<ConvertedT>::Promise___c__DisplayClass51_0_1()   {
}
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass52_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass52_0::*)()>(&::RSG::Promise___c__DisplayClass52_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f6434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass52_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass52_0._Then_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass52_0::*)()>(&::RSG::Promise___c__DisplayClass52_0::_Then_b__0)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x17f643c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass52_0*>::get(),
                        "<Then>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass52_0._Then_b__2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass52_0::*)(float_t)>(&::RSG::Promise___c__DisplayClass52_0::_Then_b__2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17f667c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass52_0*>::get(),
                        "<Then>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass52_0._Then_b__3
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass52_0::*)()>(&::RSG::Promise___c__DisplayClass52_0::_Then_b__3)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17f6698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass52_0*>::get(),
                        "<Then>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass52_0._Then_b__4
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass52_0::*)(::System::Exception*)>(&::RSG::Promise___c__DisplayClass52_0::_Then_b__4)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17f66b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass52_0*>::get(),
                        "<Then>b__4",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass52_0._Then_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass52_0::*)(::System::Exception*)>(&::RSG::Promise___c__DisplayClass52_0::_Then_b__1)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x17f66d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass52_0*>::get(),
                        "<Then>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<::RSG::IPromise*>*& RSG::Promise___c__DisplayClass52_0::__cordl_internal_get_onResolved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onResolved;
}
constexpr ::System::Func_1<::RSG::IPromise*>* const& RSG::Promise___c__DisplayClass52_0::__cordl_internal_get_onResolved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onResolved;
}
constexpr void RSG::Promise___c__DisplayClass52_0::__cordl_internal_set_onResolved(::System::Func_1<::RSG::IPromise*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onResolved)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RSG::Promise*& RSG::Promise___c__DisplayClass52_0::__cordl_internal_get_resultPromise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultPromise;
}
constexpr ::RSG::Promise* const& RSG::Promise___c__DisplayClass52_0::__cordl_internal_get_resultPromise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultPromise;
}
constexpr void RSG::Promise___c__DisplayClass52_0::__cordl_internal_set_resultPromise(::RSG::Promise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resultPromise)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Exception*>*& RSG::Promise___c__DisplayClass52_0::__cordl_internal_get_onRejected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRejected;
}
constexpr ::System::Action_1<::System::Exception*>* const& RSG::Promise___c__DisplayClass52_0::__cordl_internal_get_onRejected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRejected;
}
constexpr void RSG::Promise___c__DisplayClass52_0::__cordl_internal_set_onRejected(::System::Action_1<::System::Exception*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onRejected)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<float_t>*& RSG::Promise___c__DisplayClass52_0::__cordl_internal_get___9__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__2;
}
constexpr ::System::Action_1<float_t>* const& RSG::Promise___c__DisplayClass52_0::__cordl_internal_get___9__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__2;
}
constexpr void RSG::Promise___c__DisplayClass52_0::__cordl_internal_set___9__2(::System::Action_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& RSG::Promise___c__DisplayClass52_0::__cordl_internal_get___9__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__3;
}
constexpr ::System::Action* const& RSG::Promise___c__DisplayClass52_0::__cordl_internal_get___9__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__3;
}
constexpr void RSG::Promise___c__DisplayClass52_0::__cordl_internal_set___9__3(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Exception*>*& RSG::Promise___c__DisplayClass52_0::__cordl_internal_get___9__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__4;
}
constexpr ::System::Action_1<::System::Exception*>* const& RSG::Promise___c__DisplayClass52_0::__cordl_internal_get___9__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__4;
}
constexpr void RSG::Promise___c__DisplayClass52_0::__cordl_internal_set___9__4(::System::Action_1<::System::Exception*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__4)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RSG::Promise___c__DisplayClass52_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass52_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Promise___c__DisplayClass52_0::_Then_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass52_0*>::get(),
                        "<Then>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Promise___c__DisplayClass52_0::_Then_b__2(float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass52_0*>::get(),
                        "<Then>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, progress);
}
inline void RSG::Promise___c__DisplayClass52_0::_Then_b__3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass52_0*>::get(),
                        "<Then>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Promise___c__DisplayClass52_0::_Then_b__4(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass52_0*>::get(),
                        "<Then>b__4",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ex);
}
inline void RSG::Promise___c__DisplayClass52_0::_Then_b__1(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass52_0*>::get(),
                        "<Then>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ex);
}
inline ::RSG::Promise___c__DisplayClass52_0* RSG::Promise___c__DisplayClass52_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Promise___c__DisplayClass52_0*>());
}
// Ctor Parameters []
constexpr ::RSG::Promise___c__DisplayClass52_0::Promise___c__DisplayClass52_0()   {
}
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass53_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass53_0::*)()>(&::RSG::Promise___c__DisplayClass53_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f671c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass53_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass53_0._Then_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass53_0::*)()>(&::RSG::Promise___c__DisplayClass53_0::_Then_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x17f6724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass53_0*>::get(),
                        "<Then>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass53_0._Then_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass53_0::*)(::System::Exception*)>(&::RSG::Promise___c__DisplayClass53_0::_Then_b__1)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x17f675c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass53_0*>::get(),
                        "<Then>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& RSG::Promise___c__DisplayClass53_0::__cordl_internal_get_onResolved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onResolved;
}
constexpr ::System::Action* const& RSG::Promise___c__DisplayClass53_0::__cordl_internal_get_onResolved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onResolved;
}
constexpr void RSG::Promise___c__DisplayClass53_0::__cordl_internal_set_onResolved(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onResolved)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RSG::Promise*& RSG::Promise___c__DisplayClass53_0::__cordl_internal_get_resultPromise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultPromise;
}
constexpr ::RSG::Promise* const& RSG::Promise___c__DisplayClass53_0::__cordl_internal_get_resultPromise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultPromise;
}
constexpr void RSG::Promise___c__DisplayClass53_0::__cordl_internal_set_resultPromise(::RSG::Promise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resultPromise)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Exception*>*& RSG::Promise___c__DisplayClass53_0::__cordl_internal_get_onRejected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRejected;
}
constexpr ::System::Action_1<::System::Exception*>* const& RSG::Promise___c__DisplayClass53_0::__cordl_internal_get_onRejected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRejected;
}
constexpr void RSG::Promise___c__DisplayClass53_0::__cordl_internal_set_onRejected(::System::Action_1<::System::Exception*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onRejected)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RSG::Promise___c__DisplayClass53_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass53_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Promise___c__DisplayClass53_0::_Then_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass53_0*>::get(),
                        "<Then>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Promise___c__DisplayClass53_0::_Then_b__1(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass53_0*>::get(),
                        "<Then>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ex);
}
inline ::RSG::Promise___c__DisplayClass53_0* RSG::Promise___c__DisplayClass53_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Promise___c__DisplayClass53_0*>());
}
// Ctor Parameters []
constexpr ::RSG::Promise___c__DisplayClass53_0::Promise___c__DisplayClass53_0()   {
}
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass56_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass56_0::*)()>(&::RSG::Promise___c__DisplayClass56_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f67a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass56_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass56_0._ThenAll_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::Promise___c__DisplayClass56_0::*)()>(&::RSG::Promise___c__DisplayClass56_0::_ThenAll_b__0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17f67b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass56_0*>::get(),
                        "<ThenAll>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*& RSG::Promise___c__DisplayClass56_0::__cordl_internal_get_chain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chain;
}
constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>* const& RSG::Promise___c__DisplayClass56_0::__cordl_internal_get_chain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chain;
}
constexpr void RSG::Promise___c__DisplayClass56_0::__cordl_internal_set_chain(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RSG::Promise___c__DisplayClass56_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass56_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RSG::IPromise* RSG::Promise___c__DisplayClass56_0::_ThenAll_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass56_0*>::get(),
                        "<ThenAll>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method);
}
inline ::RSG::Promise___c__DisplayClass56_0* RSG::Promise___c__DisplayClass56_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Promise___c__DisplayClass56_0*>());
}
// Ctor Parameters []
constexpr ::RSG::Promise___c__DisplayClass56_0::Promise___c__DisplayClass56_0()   {
}
template<typename ConvertedT>
constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*& RSG::Promise___c__DisplayClass57_0_1<ConvertedT>::__cordl_internal_get_chain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chain;
}
template<typename ConvertedT>
constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>* const& RSG::Promise___c__DisplayClass57_0_1<ConvertedT>::__cordl_internal_get_chain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chain;
}
template<typename ConvertedT>
constexpr void RSG::Promise___c__DisplayClass57_0_1<ConvertedT>::__cordl_internal_set_chain(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___chain, value);
}
template<typename ConvertedT>
inline void RSG::Promise___c__DisplayClass57_0_1<ConvertedT>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass57_0_1<ConvertedT>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename ConvertedT>
inline ::RSG::IPromise_1<::System::Collections::Generic::IEnumerable_1<ConvertedT>*>* RSG::Promise___c__DisplayClass57_0_1<ConvertedT>::_ThenAll_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass57_0_1<ConvertedT>*>::get(),
                        "<ThenAll>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise_1<::System::Collections::Generic::IEnumerable_1<ConvertedT>*>*, false>(this, ___internal_method);
}
template<typename ConvertedT>
inline ::RSG::Promise___c__DisplayClass57_0_1<ConvertedT>* RSG::Promise___c__DisplayClass57_0_1<ConvertedT>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Promise___c__DisplayClass57_0_1<ConvertedT>*>());
}
// Ctor Parameters []
template<typename ConvertedT>
constexpr ::RSG::Promise___c__DisplayClass57_0_1<ConvertedT>::Promise___c__DisplayClass57_0_1()   {
}
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass59_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass59_0::*)()>(&::RSG::Promise___c__DisplayClass59_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f682c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass59_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass59_0._All_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass59_0::*)(::RSG::IPromise*, int32_t)>(&::RSG::Promise___c__DisplayClass59_0::_All_b__0)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x17f6834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass59_0*>::get(),
                        "<All>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IPromise*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass59_0._All_b__3
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass59_0::*)(::System::Exception*)>(&::RSG::Promise___c__DisplayClass59_0::_All_b__3)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x17f6b3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass59_0*>::get(),
                        "<All>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t,::Array<float_t>*>& RSG::Promise___c__DisplayClass59_0::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& RSG::Promise___c__DisplayClass59_0::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void RSG::Promise___c__DisplayClass59_0::__cordl_internal_set_progress(::ArrayW<float_t,::Array<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___progress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RSG::Promise*& RSG::Promise___c__DisplayClass59_0::__cordl_internal_get_resultPromise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultPromise;
}
constexpr ::RSG::Promise* const& RSG::Promise___c__DisplayClass59_0::__cordl_internal_get_resultPromise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultPromise;
}
constexpr void RSG::Promise___c__DisplayClass59_0::__cordl_internal_set_resultPromise(::RSG::Promise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resultPromise)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& RSG::Promise___c__DisplayClass59_0::__cordl_internal_get_remainingCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainingCount;
}
constexpr int32_t const& RSG::Promise___c__DisplayClass59_0::__cordl_internal_get_remainingCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainingCount;
}
constexpr void RSG::Promise___c__DisplayClass59_0::__cordl_internal_set_remainingCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remainingCount = value;
}
constexpr ::System::Action_1<::System::Exception*>*& RSG::Promise___c__DisplayClass59_0::__cordl_internal_get___9__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__3;
}
constexpr ::System::Action_1<::System::Exception*>* const& RSG::Promise___c__DisplayClass59_0::__cordl_internal_get___9__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__3;
}
constexpr void RSG::Promise___c__DisplayClass59_0::__cordl_internal_set___9__3(::System::Action_1<::System::Exception*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RSG::Promise___c__DisplayClass59_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass59_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Promise___c__DisplayClass59_0::_All_b__0(::RSG::IPromise*  promise, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass59_0*>::get(),
                        "<All>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IPromise*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, promise, index);
}
inline void RSG::Promise___c__DisplayClass59_0::_All_b__3(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass59_0*>::get(),
                        "<All>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ex);
}
inline ::RSG::Promise___c__DisplayClass59_0* RSG::Promise___c__DisplayClass59_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Promise___c__DisplayClass59_0*>());
}
// Ctor Parameters []
constexpr ::RSG::Promise___c__DisplayClass59_0::Promise___c__DisplayClass59_0()   {
}
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass59_1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass59_1::*)()>(&::RSG::Promise___c__DisplayClass59_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f6b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass59_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass59_1._All_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass59_1::*)(float_t)>(&::RSG::Promise___c__DisplayClass59_1::_All_b__1)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x17f6b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass59_1*>::get(),
                        "<All>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass59_1._All_b__2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass59_1::*)()>(&::RSG::Promise___c__DisplayClass59_1::_All_b__2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x17f6bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass59_1*>::get(),
                        "<All>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& RSG::Promise___c__DisplayClass59_1::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& RSG::Promise___c__DisplayClass59_1::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void RSG::Promise___c__DisplayClass59_1::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
constexpr ::RSG::Promise___c__DisplayClass59_0*& RSG::Promise___c__DisplayClass59_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::RSG::Promise___c__DisplayClass59_0* const& RSG::Promise___c__DisplayClass59_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void RSG::Promise___c__DisplayClass59_1::__cordl_internal_set_CS$__8__locals1(::RSG::Promise___c__DisplayClass59_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RSG::Promise___c__DisplayClass59_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass59_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Promise___c__DisplayClass59_1::_All_b__1(float_t  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass59_1*>::get(),
                        "<All>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
inline void RSG::Promise___c__DisplayClass59_1::_All_b__2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass59_1*>::get(),
                        "<All>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RSG::Promise___c__DisplayClass59_1* RSG::Promise___c__DisplayClass59_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Promise___c__DisplayClass59_1*>());
}
// Ctor Parameters []
constexpr ::RSG::Promise___c__DisplayClass59_1::Promise___c__DisplayClass59_1()   {
}
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass60_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass60_0::*)()>(&::RSG::Promise___c__DisplayClass60_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f6c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass60_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass60_0._ThenSequence_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::Promise___c__DisplayClass60_0::*)()>(&::RSG::Promise___c__DisplayClass60_0::_ThenSequence_b__0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17f6c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass60_0*>::get(),
                        "<ThenSequence>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RSG::IPromise*>*>*>*& RSG::Promise___c__DisplayClass60_0::__cordl_internal_get_chain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chain;
}
constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RSG::IPromise*>*>*>* const& RSG::Promise___c__DisplayClass60_0::__cordl_internal_get_chain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chain;
}
constexpr void RSG::Promise___c__DisplayClass60_0::__cordl_internal_set_chain(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RSG::IPromise*>*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RSG::Promise___c__DisplayClass60_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass60_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RSG::IPromise* RSG::Promise___c__DisplayClass60_0::_ThenSequence_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass60_0*>::get(),
                        "<ThenSequence>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method);
}
inline ::RSG::Promise___c__DisplayClass60_0* RSG::Promise___c__DisplayClass60_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Promise___c__DisplayClass60_0*>());
}
// Ctor Parameters []
constexpr ::RSG::Promise___c__DisplayClass60_0::Promise___c__DisplayClass60_0()   {
}
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass62_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass62_0::*)()>(&::RSG::Promise___c__DisplayClass62_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f6cc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass62_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass62_0._Sequence_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::Promise___c__DisplayClass62_0::*)(::RSG::IPromise*, ::System::Func_1<::RSG::IPromise*>*)>(&::RSG::Promise___c__DisplayClass62_0::_Sequence_b__0)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x17f6ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass62_0*>::get(),
                        "<Sequence>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IPromise*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::RSG::IPromise*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass62_0._Sequence_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass62_0::*)()>(&::RSG::Promise___c__DisplayClass62_0::_Sequence_b__1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17f6ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass62_0*>::get(),
                        "<Sequence>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& RSG::Promise___c__DisplayClass62_0::__cordl_internal_get_count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
constexpr int32_t const& RSG::Promise___c__DisplayClass62_0::__cordl_internal_get_count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
constexpr void RSG::Promise___c__DisplayClass62_0::__cordl_internal_set_count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___count = value;
}
constexpr ::RSG::Promise*& RSG::Promise___c__DisplayClass62_0::__cordl_internal_get_promise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promise;
}
constexpr ::RSG::Promise* const& RSG::Promise___c__DisplayClass62_0::__cordl_internal_get_promise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promise;
}
constexpr void RSG::Promise___c__DisplayClass62_0::__cordl_internal_set_promise(::RSG::Promise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___promise)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RSG::Promise___c__DisplayClass62_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass62_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RSG::IPromise* RSG::Promise___c__DisplayClass62_0::_Sequence_b__0(::RSG::IPromise*  prevPromise, ::System::Func_1<::RSG::IPromise*>*  fn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass62_0*>::get(),
                        "<Sequence>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IPromise*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::RSG::IPromise*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, prevPromise, fn);
}
inline void RSG::Promise___c__DisplayClass62_0::_Sequence_b__1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass62_0*>::get(),
                        "<Sequence>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RSG::Promise___c__DisplayClass62_0* RSG::Promise___c__DisplayClass62_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Promise___c__DisplayClass62_0*>());
}
// Ctor Parameters []
constexpr ::RSG::Promise___c__DisplayClass62_0::Promise___c__DisplayClass62_0()   {
}
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass62_1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass62_1::*)()>(&::RSG::Promise___c__DisplayClass62_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f6ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass62_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass62_1._Sequence_b__2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::Promise___c__DisplayClass62_1::*)()>(&::RSG::Promise___c__DisplayClass62_1::_Sequence_b__2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x17f6ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass62_1*>::get(),
                        "<Sequence>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass62_1._Sequence_b__3
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass62_1::*)(float_t)>(&::RSG::Promise___c__DisplayClass62_1::_Sequence_b__3)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x17f6f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass62_1*>::get(),
                        "<Sequence>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& RSG::Promise___c__DisplayClass62_1::__cordl_internal_get_itemSequence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemSequence;
}
constexpr int32_t const& RSG::Promise___c__DisplayClass62_1::__cordl_internal_get_itemSequence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemSequence;
}
constexpr void RSG::Promise___c__DisplayClass62_1::__cordl_internal_set_itemSequence(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemSequence = value;
}
constexpr ::System::Func_1<::RSG::IPromise*>*& RSG::Promise___c__DisplayClass62_1::__cordl_internal_get_fn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fn;
}
constexpr ::System::Func_1<::RSG::IPromise*>* const& RSG::Promise___c__DisplayClass62_1::__cordl_internal_get_fn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fn;
}
constexpr void RSG::Promise___c__DisplayClass62_1::__cordl_internal_set_fn(::System::Func_1<::RSG::IPromise*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RSG::Promise___c__DisplayClass62_0*& RSG::Promise___c__DisplayClass62_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::RSG::Promise___c__DisplayClass62_0* const& RSG::Promise___c__DisplayClass62_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void RSG::Promise___c__DisplayClass62_1::__cordl_internal_set_CS$__8__locals1(::RSG::Promise___c__DisplayClass62_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RSG::Promise___c__DisplayClass62_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass62_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RSG::IPromise* RSG::Promise___c__DisplayClass62_1::_Sequence_b__2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass62_1*>::get(),
                        "<Sequence>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method);
}
inline void RSG::Promise___c__DisplayClass62_1::_Sequence_b__3(float_t  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass62_1*>::get(),
                        "<Sequence>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
inline ::RSG::Promise___c__DisplayClass62_1* RSG::Promise___c__DisplayClass62_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Promise___c__DisplayClass62_1*>());
}
// Ctor Parameters []
constexpr ::RSG::Promise___c__DisplayClass62_1::Promise___c__DisplayClass62_1()   {
}
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass63_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass63_0::*)()>(&::RSG::Promise___c__DisplayClass63_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f6f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass63_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass63_0._ThenRace_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::Promise___c__DisplayClass63_0::*)()>(&::RSG::Promise___c__DisplayClass63_0::_ThenRace_b__0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17f6f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass63_0*>::get(),
                        "<ThenRace>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*& RSG::Promise___c__DisplayClass63_0::__cordl_internal_get_chain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chain;
}
constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>* const& RSG::Promise___c__DisplayClass63_0::__cordl_internal_get_chain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chain;
}
constexpr void RSG::Promise___c__DisplayClass63_0::__cordl_internal_set_chain(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RSG::Promise___c__DisplayClass63_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass63_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RSG::IPromise* RSG::Promise___c__DisplayClass63_0::_ThenRace_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass63_0*>::get(),
                        "<ThenRace>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method);
}
inline ::RSG::Promise___c__DisplayClass63_0* RSG::Promise___c__DisplayClass63_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Promise___c__DisplayClass63_0*>());
}
// Ctor Parameters []
constexpr ::RSG::Promise___c__DisplayClass63_0::Promise___c__DisplayClass63_0()   {
}
template<typename ConvertedT>
constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*& RSG::Promise___c__DisplayClass64_0_1<ConvertedT>::__cordl_internal_get_chain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chain;
}
template<typename ConvertedT>
constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>* const& RSG::Promise___c__DisplayClass64_0_1<ConvertedT>::__cordl_internal_get_chain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chain;
}
template<typename ConvertedT>
constexpr void RSG::Promise___c__DisplayClass64_0_1<ConvertedT>::__cordl_internal_set_chain(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___chain, value);
}
template<typename ConvertedT>
inline void RSG::Promise___c__DisplayClass64_0_1<ConvertedT>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass64_0_1<ConvertedT>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* RSG::Promise___c__DisplayClass64_0_1<ConvertedT>::_ThenRace_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass64_0_1<ConvertedT>*>::get(),
                        "<ThenRace>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise_1<ConvertedT>*, false>(this, ___internal_method);
}
template<typename ConvertedT>
inline ::RSG::Promise___c__DisplayClass64_0_1<ConvertedT>* RSG::Promise___c__DisplayClass64_0_1<ConvertedT>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Promise___c__DisplayClass64_0_1<ConvertedT>*>());
}
// Ctor Parameters []
template<typename ConvertedT>
constexpr ::RSG::Promise___c__DisplayClass64_0_1<ConvertedT>::Promise___c__DisplayClass64_0_1()   {
}
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass66_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass66_0::*)()>(&::RSG::Promise___c__DisplayClass66_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f7008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass66_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass66_0._Race_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass66_0::*)(::RSG::IPromise*, int32_t)>(&::RSG::Promise___c__DisplayClass66_0::_Race_b__0)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x17f7010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass66_0*>::get(),
                        "<Race>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IPromise*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass66_0._Race_b__2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass66_0::*)(::System::Exception*)>(&::RSG::Promise___c__DisplayClass66_0::_Race_b__2)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x17f7318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass66_0*>::get(),
                        "<Race>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass66_0._Race_b__3
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass66_0::*)()>(&::RSG::Promise___c__DisplayClass66_0::_Race_b__3)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x17f7344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass66_0*>::get(),
                        "<Race>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t,::Array<float_t>*>& RSG::Promise___c__DisplayClass66_0::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& RSG::Promise___c__DisplayClass66_0::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void RSG::Promise___c__DisplayClass66_0::__cordl_internal_set_progress(::ArrayW<float_t,::Array<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___progress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RSG::Promise*& RSG::Promise___c__DisplayClass66_0::__cordl_internal_get_resultPromise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultPromise;
}
constexpr ::RSG::Promise* const& RSG::Promise___c__DisplayClass66_0::__cordl_internal_get_resultPromise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultPromise;
}
constexpr void RSG::Promise___c__DisplayClass66_0::__cordl_internal_set_resultPromise(::RSG::Promise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resultPromise)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Exception*>*& RSG::Promise___c__DisplayClass66_0::__cordl_internal_get___9__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__2;
}
constexpr ::System::Action_1<::System::Exception*>* const& RSG::Promise___c__DisplayClass66_0::__cordl_internal_get___9__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__2;
}
constexpr void RSG::Promise___c__DisplayClass66_0::__cordl_internal_set___9__2(::System::Action_1<::System::Exception*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& RSG::Promise___c__DisplayClass66_0::__cordl_internal_get___9__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__3;
}
constexpr ::System::Action* const& RSG::Promise___c__DisplayClass66_0::__cordl_internal_get___9__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__3;
}
constexpr void RSG::Promise___c__DisplayClass66_0::__cordl_internal_set___9__3(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RSG::Promise___c__DisplayClass66_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass66_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Promise___c__DisplayClass66_0::_Race_b__0(::RSG::IPromise*  promise, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass66_0*>::get(),
                        "<Race>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IPromise*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, promise, index);
}
inline void RSG::Promise___c__DisplayClass66_0::_Race_b__2(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass66_0*>::get(),
                        "<Race>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ex);
}
inline void RSG::Promise___c__DisplayClass66_0::_Race_b__3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass66_0*>::get(),
                        "<Race>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RSG::Promise___c__DisplayClass66_0* RSG::Promise___c__DisplayClass66_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Promise___c__DisplayClass66_0*>());
}
// Ctor Parameters []
constexpr ::RSG::Promise___c__DisplayClass66_0::Promise___c__DisplayClass66_0()   {
}
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass66_1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass66_1::*)()>(&::RSG::Promise___c__DisplayClass66_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f7310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass66_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass66_1._Race_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass66_1::*)(float_t)>(&::RSG::Promise___c__DisplayClass66_1::_Race_b__1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x17f7370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass66_1*>::get(),
                        "<Race>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& RSG::Promise___c__DisplayClass66_1::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& RSG::Promise___c__DisplayClass66_1::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void RSG::Promise___c__DisplayClass66_1::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
constexpr ::RSG::Promise___c__DisplayClass66_0*& RSG::Promise___c__DisplayClass66_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::RSG::Promise___c__DisplayClass66_0* const& RSG::Promise___c__DisplayClass66_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void RSG::Promise___c__DisplayClass66_1::__cordl_internal_set_CS$__8__locals1(::RSG::Promise___c__DisplayClass66_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RSG::Promise___c__DisplayClass66_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass66_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Promise___c__DisplayClass66_1::_Race_b__1(float_t  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass66_1*>::get(),
                        "<Race>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
inline ::RSG::Promise___c__DisplayClass66_1* RSG::Promise___c__DisplayClass66_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Promise___c__DisplayClass66_1*>());
}
// Ctor Parameters []
constexpr ::RSG::Promise___c__DisplayClass66_1::Promise___c__DisplayClass66_1()   {
}
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass69_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass69_0::*)()>(&::RSG::Promise___c__DisplayClass69_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f73c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass69_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass69_0._Finally_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass69_0::*)()>(&::RSG::Promise___c__DisplayClass69_0::_Finally_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17f73d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass69_0*>::get(),
                        "<Finally>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass69_0._Finally_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass69_0::*)(::System::Exception*)>(&::RSG::Promise___c__DisplayClass69_0::_Finally_b__1)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x17f73ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass69_0*>::get(),
                        "<Finally>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::RSG::Promise*& RSG::Promise___c__DisplayClass69_0::__cordl_internal_get_promise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promise;
}
constexpr ::RSG::Promise* const& RSG::Promise___c__DisplayClass69_0::__cordl_internal_get_promise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promise;
}
constexpr void RSG::Promise___c__DisplayClass69_0::__cordl_internal_set_promise(::RSG::Promise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___promise)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& RSG::Promise___c__DisplayClass69_0::__cordl_internal_get_onComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr ::System::Action* const& RSG::Promise___c__DisplayClass69_0::__cordl_internal_get_onComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr void RSG::Promise___c__DisplayClass69_0::__cordl_internal_set_onComplete(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RSG::Promise___c__DisplayClass69_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass69_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Promise___c__DisplayClass69_0::_Finally_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass69_0*>::get(),
                        "<Finally>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Promise___c__DisplayClass69_0::_Finally_b__1(::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass69_0*>::get(),
                        "<Finally>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline ::RSG::Promise___c__DisplayClass69_0* RSG::Promise___c__DisplayClass69_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Promise___c__DisplayClass69_0*>());
}
// Ctor Parameters []
constexpr ::RSG::Promise___c__DisplayClass69_0::Promise___c__DisplayClass69_0()   {
}
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass70_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass70_0::*)()>(&::RSG::Promise___c__DisplayClass70_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f74d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass70_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass70_0._ContinueWith_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass70_0::*)()>(&::RSG::Promise___c__DisplayClass70_0::_ContinueWith_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17f74d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass70_0*>::get(),
                        "<ContinueWith>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise___c__DisplayClass70_0._ContinueWith_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise___c__DisplayClass70_0::*)(::System::Exception*)>(&::RSG::Promise___c__DisplayClass70_0::_ContinueWith_b__1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17f74f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass70_0*>::get(),
                        "<ContinueWith>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::RSG::Promise*& RSG::Promise___c__DisplayClass70_0::__cordl_internal_get_promise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promise;
}
constexpr ::RSG::Promise* const& RSG::Promise___c__DisplayClass70_0::__cordl_internal_get_promise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promise;
}
constexpr void RSG::Promise___c__DisplayClass70_0::__cordl_internal_set_promise(::RSG::Promise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___promise)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RSG::Promise___c__DisplayClass70_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass70_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Promise___c__DisplayClass70_0::_ContinueWith_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass70_0*>::get(),
                        "<ContinueWith>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Promise___c__DisplayClass70_0::_ContinueWith_b__1(::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass70_0*>::get(),
                        "<ContinueWith>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline ::RSG::Promise___c__DisplayClass70_0* RSG::Promise___c__DisplayClass70_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Promise___c__DisplayClass70_0*>());
}
// Ctor Parameters []
constexpr ::RSG::Promise___c__DisplayClass70_0::Promise___c__DisplayClass70_0()   {
}
template<typename ConvertedT>
constexpr ::RSG::Promise*& RSG::Promise___c__DisplayClass71_0_1<ConvertedT>::__cordl_internal_get_promise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promise;
}
template<typename ConvertedT>
constexpr ::RSG::Promise* const& RSG::Promise___c__DisplayClass71_0_1<ConvertedT>::__cordl_internal_get_promise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promise;
}
template<typename ConvertedT>
constexpr void RSG::Promise___c__DisplayClass71_0_1<ConvertedT>::__cordl_internal_set_promise(::RSG::Promise*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___promise, value);
}
template<typename ConvertedT>
inline void RSG::Promise___c__DisplayClass71_0_1<ConvertedT>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass71_0_1<ConvertedT>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename ConvertedT>
inline void RSG::Promise___c__DisplayClass71_0_1<ConvertedT>::_ContinueWith_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass71_0_1<ConvertedT>*>::get(),
                        "<ContinueWith>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename ConvertedT>
inline void RSG::Promise___c__DisplayClass71_0_1<ConvertedT>::_ContinueWith_b__1(::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise___c__DisplayClass71_0_1<ConvertedT>*>::get(),
                        "<ContinueWith>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
template<typename ConvertedT>
inline ::RSG::Promise___c__DisplayClass71_0_1<ConvertedT>* RSG::Promise___c__DisplayClass71_0_1<ConvertedT>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Promise___c__DisplayClass71_0_1<ConvertedT>*>());
}
// Ctor Parameters []
template<typename ConvertedT>
constexpr ::RSG::Promise___c__DisplayClass71_0_1<ConvertedT>::Promise___c__DisplayClass71_0_1()   {
}
//  Writing Method size for method: ::RSG::Promise.add_UnhandledException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::EventHandler_1<::RSG::ExceptionEventArgs*>*)>(&::RSG::Promise::add_UnhandledException)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x17f3a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "add_UnhandledException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::RSG::ExceptionEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.remove_UnhandledException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::EventHandler_1<::RSG::ExceptionEventArgs*>*)>(&::RSG::Promise::remove_UnhandledException)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x17f3b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "remove_UnhandledException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::RSG::ExceptionEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.GetPendingPromises
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::RSG::IPromiseInfo*>* (*)()>(&::RSG::Promise::GetPendingPromises)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x17f3be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "GetPendingPromises",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.get_Id
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::RSG::Promise::*)()>(&::RSG::Promise::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f3c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "get_Id",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.get_Name
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::RSG::Promise::*)()>(&::RSG::Promise::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f3c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "get_Name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.set_Name
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)(::StringW)>(&::RSG::Promise::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f3c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "set_Name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.get_CurState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::PromiseState (::RSG::Promise::*)()>(&::RSG::Promise::get_CurState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f3c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "get_CurState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.set_CurState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)(::RSG::PromiseState)>(&::RSG::Promise::set_CurState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f3c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "set_CurState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::PromiseState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)()>(&::RSG::Promise::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x17f3214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)(::System::Action_2<::System::Action*,::System::Action_1<::System::Exception*>*>*)>(&::RSG::Promise::_ctor)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x17f3cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Action*,::System::Action_1<::System::Exception*>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.NextId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::RSG::Promise::NextId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x17f3c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "NextId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.AddRejectHandler
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)(::System::Action_1<::System::Exception*>*, ::RSG::IRejectable*)>(&::RSG::Promise::AddRejectHandler)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x17f4024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "AddRejectHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Exception*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IRejectable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.AddResolveHandler
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)(::System::Action*, ::RSG::IRejectable*)>(&::RSG::Promise::AddResolveHandler)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x17f4124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "AddResolveHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IRejectable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.AddProgressHandler
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)(::System::Action_1<float_t>*, ::RSG::IRejectable*)>(&::RSG::Promise::AddProgressHandler)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x17f4224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "AddProgressHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IRejectable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.InvokeRejectHandler
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)(::System::Action_1<::System::Exception*>*, ::RSG::IRejectable*, ::System::Exception*)>(&::RSG::Promise::InvokeRejectHandler)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x17f4324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "InvokeRejectHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Exception*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IRejectable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.InvokeResolveHandler
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)(::System::Action*, ::RSG::IRejectable*)>(&::RSG::Promise::InvokeResolveHandler)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x17f4440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "InvokeResolveHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IRejectable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.InvokeProgressHandler
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)(::System::Action_1<float_t>*, ::RSG::IRejectable*, float_t)>(&::RSG::Promise::InvokeProgressHandler)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x17f4558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "InvokeProgressHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IRejectable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.ClearHandlers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)()>(&::RSG::Promise::ClearHandlers)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17f4670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "ClearHandlers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.InvokeRejectHandlers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)(::System::Exception*)>(&::RSG::Promise::InvokeRejectHandlers)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x17f467c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "InvokeRejectHandlers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.InvokeResolveHandlers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)()>(&::RSG::Promise::InvokeResolveHandlers)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x17f4760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "InvokeResolveHandlers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.InvokeProgressHandlers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)(float_t)>(&::RSG::Promise::InvokeProgressHandlers)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x17f480c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "InvokeProgressHandlers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.Reject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)(::System::Exception*)>(&::RSG::Promise::Reject)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x17f3e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Reject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.Resolve
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)()>(&::RSG::Promise::Resolve)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x17f4904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Resolve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.ReportProgress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)(float_t)>(&::RSG::Promise::ReportProgress)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x17f4a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "ReportProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.Done
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)(::System::Action*, ::System::Action_1<::System::Exception*>*)>(&::RSG::Promise::Done)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x17f4b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Done",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Exception*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.Done
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)(::System::Action*)>(&::RSG::Promise::Done)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x17f4c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Done",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.Done
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)()>(&::RSG::Promise::Done)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x17f4d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Done",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.WithName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::Promise::*)(::StringW)>(&::RSG::Promise::WithName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f4fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "WithName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.Catch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::Promise::*)(::System::Action_1<::System::Exception*>*)>(&::RSG::Promise::Catch)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x17f4e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Catch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Exception*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.Then
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::Promise::*)(::System::Func_1<::RSG::IPromise*>*)>(&::RSG::Promise::Then)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17f506c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Then",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::RSG::IPromise*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.Then
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::Promise::*)(::System::Action*)>(&::RSG::Promise::Then)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17f4d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Then",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.Then
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::Promise::*)(::System::Func_1<::RSG::IPromise*>*, ::System::Action_1<::System::Exception*>*)>(&::RSG::Promise::Then)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f5358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Then",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::RSG::IPromise*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Exception*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.Then
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::Promise::*)(::System::Action*, ::System::Action_1<::System::Exception*>*)>(&::RSG::Promise::Then)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f4c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Then",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Exception*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.Then
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::Promise::*)(::System::Func_1<::RSG::IPromise*>*, ::System::Action_1<::System::Exception*>*, ::System::Action_1<float_t>*)>(&::RSG::Promise::Then)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x17f5078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Then",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::RSG::IPromise*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Exception*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.Then
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::Promise::*)(::System::Action*, ::System::Action_1<::System::Exception*>*, ::System::Action_1<float_t>*)>(&::RSG::Promise::Then)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x17f51e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Then",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Exception*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.ActionHandlers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)(::RSG::IRejectable*, ::System::Action*, ::System::Action_1<::System::Exception*>*)>(&::RSG::Promise::ActionHandlers)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17f4fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "ActionHandlers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IRejectable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Exception*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.ProgressHandlers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)(::RSG::IRejectable*, ::System::Action_1<float_t>*)>(&::RSG::Promise::ProgressHandlers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17f5050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "ProgressHandlers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IRejectable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.ThenAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::Promise::*)(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*)>(&::RSG::Promise::ThenAll)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x17f5360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "ThenAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.All
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (*)(::ArrayW<::RSG::IPromise*,::Array<::RSG::IPromise*>*>)>(&::RSG::Promise::All)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x17f5420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "All",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RSG::IPromise*,::Array<::RSG::IPromise*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.All
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (*)(::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*)>(&::RSG::Promise::All)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x17f5474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "All",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.ThenSequence
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::Promise::*)(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RSG::IPromise*>*>*>*)>(&::RSG::Promise::ThenSequence)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x17f5664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "ThenSequence",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RSG::IPromise*>*>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.Sequence
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (*)(::ArrayW<::System::Func_1<::RSG::IPromise*>*,::Array<::System::Func_1<::RSG::IPromise*>*>*>)>(&::RSG::Promise::Sequence)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x17f5724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Sequence",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Func_1<::RSG::IPromise*>*,::Array<::System::Func_1<::RSG::IPromise*>*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.Sequence
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (*)(::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RSG::IPromise*>*>*)>(&::RSG::Promise::Sequence)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x17f5778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Sequence",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RSG::IPromise*>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.ThenRace
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::Promise::*)(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*)>(&::RSG::Promise::ThenRace)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x17f5a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "ThenRace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.Race
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (*)(::ArrayW<::RSG::IPromise*,::Array<::RSG::IPromise*>*>)>(&::RSG::Promise::Race)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x17f5ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Race",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RSG::IPromise*,::Array<::RSG::IPromise*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.Race
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (*)(::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*)>(&::RSG::Promise::Race)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x17f5b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Race",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.Resolved
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (*)()>(&::RSG::Promise::Resolved)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x17f5604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Resolved",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.Rejected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (*)(::System::Exception*)>(&::RSG::Promise::Rejected)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x17f5cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Rejected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.Finally
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::Promise::*)(::System::Action*)>(&::RSG::Promise::Finally)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x17f5d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Finally",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.ContinueWith
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::Promise::*)(::System::Func_1<::RSG::IPromise*>*)>(&::RSG::Promise::ContinueWith)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x17f5e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "ContinueWith",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::RSG::IPromise*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.Progress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (::RSG::Promise::*)(::System::Action_1<float_t>*)>(&::RSG::Promise::Progress)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x17f5ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Progress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise.PropagateUnhandledException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::System::Exception*)>(&::RSG::Promise::PropagateUnhandledException)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x17f6020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "PropagateUnhandledException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise._InvokeResolveHandlers_b__35_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)(::RSG::Promise_ResolveHandler)>(&::RSG::Promise::_InvokeResolveHandlers_b__35_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17f6190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "<InvokeResolveHandlers>b__35_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::Promise_ResolveHandler>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise._Done_b__40_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)(::System::Exception*)>(&::RSG::Promise::_Done_b__40_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x17f6194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "<Done>b__40_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise._Done_b__41_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)(::System::Exception*)>(&::RSG::Promise::_Done_b__41_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x17f61f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "<Done>b__41_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::Promise._Done_b__42_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Promise::*)(::System::Exception*)>(&::RSG::Promise::_Done_b__42_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x17f625c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "<Done>b__42_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Exception*& RSG::Promise::__cordl_internal_get_rejectionException()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rejectionException;
}
constexpr ::System::Exception* const& RSG::Promise::__cordl_internal_get_rejectionException() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rejectionException;
}
constexpr void RSG::Promise::__cordl_internal_set_rejectionException(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rejectionException)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::RSG::RejectHandler>*& RSG::Promise::__cordl_internal_get_rejectHandlers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rejectHandlers;
}
constexpr ::System::Collections::Generic::List_1<::RSG::RejectHandler>* const& RSG::Promise::__cordl_internal_get_rejectHandlers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rejectHandlers;
}
constexpr void RSG::Promise::__cordl_internal_set_rejectHandlers(::System::Collections::Generic::List_1<::RSG::RejectHandler>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rejectHandlers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::RSG::Promise_ResolveHandler>*& RSG::Promise::__cordl_internal_get_resolveHandlers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolveHandlers;
}
constexpr ::System::Collections::Generic::List_1<::RSG::Promise_ResolveHandler>* const& RSG::Promise::__cordl_internal_get_resolveHandlers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolveHandlers;
}
constexpr void RSG::Promise::__cordl_internal_set_resolveHandlers(::System::Collections::Generic::List_1<::RSG::Promise_ResolveHandler>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resolveHandlers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::RSG::ProgressHandler>*& RSG::Promise::__cordl_internal_get_progressHandlers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressHandlers;
}
constexpr ::System::Collections::Generic::List_1<::RSG::ProgressHandler>* const& RSG::Promise::__cordl_internal_get_progressHandlers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressHandlers;
}
constexpr void RSG::Promise::__cordl_internal_set_progressHandlers(::System::Collections::Generic::List_1<::RSG::ProgressHandler>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___progressHandlers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& RSG::Promise::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr int32_t const& RSG::Promise::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void RSG::Promise::__cordl_internal_set_id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr ::StringW& RSG::Promise::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& RSG::Promise::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void RSG::Promise::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Name_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RSG::PromiseState& RSG::Promise::__cordl_internal_get__CurState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurState_k__BackingField;
}
constexpr ::RSG::PromiseState const& RSG::Promise::__cordl_internal_get__CurState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurState_k__BackingField;
}
constexpr void RSG::Promise::__cordl_internal_set__CurState_k__BackingField(::RSG::PromiseState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurState_k__BackingField = value;
}
inline void RSG::Promise::setStaticF_EnablePromiseTracking(bool  value)  {
::cordl_internals::setStaticField<bool, "EnablePromiseTracking", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get>(std::forward<bool>(value));
}
inline bool RSG::Promise::getStaticF_EnablePromiseTracking()  {
return ::cordl_internals::getStaticField<bool, "EnablePromiseTracking", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get>();
}
inline void RSG::Promise::setStaticF_unhandlerException(::System::EventHandler_1<::RSG::ExceptionEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::EventHandler_1<::RSG::ExceptionEventArgs*>*, "unhandlerException", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get>(std::forward<::System::EventHandler_1<::RSG::ExceptionEventArgs*>*>(value));
}
inline ::System::EventHandler_1<::RSG::ExceptionEventArgs*>* RSG::Promise::getStaticF_unhandlerException()  {
return ::cordl_internals::getStaticField<::System::EventHandler_1<::RSG::ExceptionEventArgs*>*, "unhandlerException", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get>();
}
inline void RSG::Promise::setStaticF_nextPromiseId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "nextPromiseId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get>(std::forward<int32_t>(value));
}
inline int32_t RSG::Promise::getStaticF_nextPromiseId()  {
return ::cordl_internals::getStaticField<int32_t, "nextPromiseId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get>();
}
inline void RSG::Promise::setStaticF_PendingPromises(::System::Collections::Generic::HashSet_1<::RSG::IPromiseInfo*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::RSG::IPromiseInfo*>*, "PendingPromises", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get>(std::forward<::System::Collections::Generic::HashSet_1<::RSG::IPromiseInfo*>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::RSG::IPromiseInfo*>* RSG::Promise::getStaticF_PendingPromises()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::RSG::IPromiseInfo*>*, "PendingPromises", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get>();
}
inline void RSG::Promise::add_UnhandledException(::System::EventHandler_1<::RSG::ExceptionEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "add_UnhandledException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::RSG::ExceptionEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void RSG::Promise::remove_UnhandledException(::System::EventHandler_1<::RSG::ExceptionEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "remove_UnhandledException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::RSG::ExceptionEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::RSG::IPromiseInfo*>* RSG::Promise::GetPendingPromises()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "GetPendingPromises",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::RSG::IPromiseInfo*>*, false>(nullptr, ___internal_method);
}
inline int32_t RSG::Promise::get_Id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "get_Id",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW RSG::Promise::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "get_Name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void RSG::Promise::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "set_Name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::RSG::PromiseState RSG::Promise::get_CurState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "get_CurState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::PromiseState, false>(this, ___internal_method);
}
inline void RSG::Promise::set_CurState(::RSG::PromiseState  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "set_CurState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::PromiseState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void RSG::Promise::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Promise::_ctor(::System::Action_2<::System::Action*,::System::Action_1<::System::Exception*>*>*  resolver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Action*,::System::Action_1<::System::Exception*>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resolver);
}
inline int32_t RSG::Promise::NextId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "NextId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void RSG::Promise::AddRejectHandler(::System::Action_1<::System::Exception*>*  onRejected, ::RSG::IRejectable*  rejectable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "AddRejectHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Exception*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IRejectable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onRejected, rejectable);
}
inline void RSG::Promise::AddResolveHandler(::System::Action*  onResolved, ::RSG::IRejectable*  rejectable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "AddResolveHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IRejectable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onResolved, rejectable);
}
inline void RSG::Promise::AddProgressHandler(::System::Action_1<float_t>*  onProgress, ::RSG::IRejectable*  rejectable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "AddProgressHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IRejectable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onProgress, rejectable);
}
inline void RSG::Promise::InvokeRejectHandler(::System::Action_1<::System::Exception*>*  callback, ::RSG::IRejectable*  rejectable, ::System::Exception*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "InvokeRejectHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Exception*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IRejectable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, rejectable, value);
}
inline void RSG::Promise::InvokeResolveHandler(::System::Action*  callback, ::RSG::IRejectable*  rejectable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "InvokeResolveHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IRejectable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, rejectable);
}
inline void RSG::Promise::InvokeProgressHandler(::System::Action_1<float_t>*  callback, ::RSG::IRejectable*  rejectable, float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "InvokeProgressHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IRejectable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, rejectable, progress);
}
inline void RSG::Promise::ClearHandlers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "ClearHandlers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Promise::InvokeRejectHandlers(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "InvokeRejectHandlers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ex);
}
inline void RSG::Promise::InvokeResolveHandlers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "InvokeResolveHandlers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Promise::InvokeProgressHandlers(float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "InvokeProgressHandlers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, progress);
}
inline void RSG::Promise::Reject(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Reject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ex);
}
inline void RSG::Promise::Resolve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Resolve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::Promise::ReportProgress(float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "ReportProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, progress);
}
inline void RSG::Promise::Done(::System::Action*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Done",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Exception*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onResolved, onRejected);
}
inline void RSG::Promise::Done(::System::Action*  onResolved)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Done",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onResolved);
}
inline void RSG::Promise::Done()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Done",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RSG::IPromise* RSG::Promise::WithName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "WithName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, name);
}
inline ::RSG::IPromise* RSG::Promise::Catch(::System::Action_1<::System::Exception*>*  onRejected)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Catch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Exception*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, onRejected);
}
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* RSG::Promise::Then(::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*  onResolved)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                    "Then",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConvertedT>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConvertedT>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise_1<ConvertedT>*, false>(this, ___internal_method, onResolved);
}
inline ::RSG::IPromise* RSG::Promise::Then(::System::Func_1<::RSG::IPromise*>*  onResolved)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Then",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::RSG::IPromise*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, onResolved);
}
inline ::RSG::IPromise* RSG::Promise::Then(::System::Action*  onResolved)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Then",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, onResolved);
}
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* RSG::Promise::Then(::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*  onResolved, ::System::Func_2<::System::Exception*,::RSG::IPromise_1<ConvertedT>*>*  onRejected)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                    "Then",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConvertedT>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Exception*,::RSG::IPromise_1<ConvertedT>*>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConvertedT>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise_1<ConvertedT>*, false>(this, ___internal_method, onResolved, onRejected);
}
inline ::RSG::IPromise* RSG::Promise::Then(::System::Func_1<::RSG::IPromise*>*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Then",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::RSG::IPromise*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Exception*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, onResolved, onRejected);
}
inline ::RSG::IPromise* RSG::Promise::Then(::System::Action*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Then",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Exception*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, onResolved, onRejected);
}
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* RSG::Promise::Then(::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*  onResolved, ::System::Func_2<::System::Exception*,::RSG::IPromise_1<ConvertedT>*>*  onRejected, ::System::Action_1<float_t>*  onProgress)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                    "Then",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConvertedT>::get()},
                    ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Exception*,::RSG::IPromise_1<ConvertedT>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConvertedT>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise_1<ConvertedT>*, false>(this, ___internal_method, onResolved, onRejected, onProgress);
}
inline ::RSG::IPromise* RSG::Promise::Then(::System::Func_1<::RSG::IPromise*>*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected, ::System::Action_1<float_t>*  onProgress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Then",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::RSG::IPromise*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Exception*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, onResolved, onRejected, onProgress);
}
inline ::RSG::IPromise* RSG::Promise::Then(::System::Action*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected, ::System::Action_1<float_t>*  onProgress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Then",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Exception*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, onResolved, onRejected, onProgress);
}
inline void RSG::Promise::ActionHandlers(::RSG::IRejectable*  resultPromise, ::System::Action*  resolveHandler, ::System::Action_1<::System::Exception*>*  rejectHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "ActionHandlers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IRejectable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Exception*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resultPromise, resolveHandler, rejectHandler);
}
inline void RSG::Promise::ProgressHandlers(::RSG::IRejectable*  resultPromise, ::System::Action_1<float_t>*  progressHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "ProgressHandlers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::IRejectable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resultPromise, progressHandler);
}
inline ::RSG::IPromise* RSG::Promise::ThenAll(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  chain)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "ThenAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, chain);
}
template<typename ConvertedT>
inline ::RSG::IPromise_1<::System::Collections::Generic::IEnumerable_1<ConvertedT>*>* RSG::Promise::ThenAll(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  chain)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                    "ThenAll",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConvertedT>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConvertedT>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise_1<::System::Collections::Generic::IEnumerable_1<ConvertedT>*>*, false>(this, ___internal_method, chain);
}
inline ::RSG::IPromise* RSG::Promise::All(::ArrayW<::RSG::IPromise*,::Array<::RSG::IPromise*>*>  promises)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "All",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RSG::IPromise*,::Array<::RSG::IPromise*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(nullptr, ___internal_method, promises);
}
inline ::RSG::IPromise* RSG::Promise::All(::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*  promises)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "All",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(nullptr, ___internal_method, promises);
}
inline ::RSG::IPromise* RSG::Promise::ThenSequence(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RSG::IPromise*>*>*>*  chain)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "ThenSequence",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RSG::IPromise*>*>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, chain);
}
inline ::RSG::IPromise* RSG::Promise::Sequence(::ArrayW<::System::Func_1<::RSG::IPromise*>*,::Array<::System::Func_1<::RSG::IPromise*>*>*>  fns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Sequence",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Func_1<::RSG::IPromise*>*,::Array<::System::Func_1<::RSG::IPromise*>*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(nullptr, ___internal_method, fns);
}
inline ::RSG::IPromise* RSG::Promise::Sequence(::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RSG::IPromise*>*>*  fns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Sequence",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RSG::IPromise*>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(nullptr, ___internal_method, fns);
}
inline ::RSG::IPromise* RSG::Promise::ThenRace(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  chain)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "ThenRace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, chain);
}
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* RSG::Promise::ThenRace(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  chain)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                    "ThenRace",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConvertedT>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConvertedT>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise_1<ConvertedT>*, false>(this, ___internal_method, chain);
}
inline ::RSG::IPromise* RSG::Promise::Race(::ArrayW<::RSG::IPromise*,::Array<::RSG::IPromise*>*>  promises)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Race",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RSG::IPromise*,::Array<::RSG::IPromise*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(nullptr, ___internal_method, promises);
}
inline ::RSG::IPromise* RSG::Promise::Race(::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*  promises)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Race",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(nullptr, ___internal_method, promises);
}
inline ::RSG::IPromise* RSG::Promise::Resolved()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Resolved",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(nullptr, ___internal_method);
}
inline ::RSG::IPromise* RSG::Promise::Rejected(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Rejected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(nullptr, ___internal_method, ex);
}
inline ::RSG::IPromise* RSG::Promise::Finally(::System::Action*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Finally",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, onComplete);
}
inline ::RSG::IPromise* RSG::Promise::ContinueWith(::System::Func_1<::RSG::IPromise*>*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "ContinueWith",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::RSG::IPromise*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, onComplete);
}
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* RSG::Promise::ContinueWith(::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*  onComplete)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                    "ContinueWith",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConvertedT>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConvertedT>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise_1<ConvertedT>*, false>(this, ___internal_method, onComplete);
}
inline ::RSG::IPromise* RSG::Promise::Progress(::System::Action_1<float_t>*  onProgress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "Progress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, onProgress);
}
inline void RSG::Promise::PropagateUnhandledException(::System::Object*  sender, ::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "PropagateUnhandledException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sender, ex);
}
inline void RSG::Promise::_InvokeResolveHandlers_b__35_0(::RSG::Promise_ResolveHandler  handler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "<InvokeResolveHandlers>b__35_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RSG::Promise_ResolveHandler>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handler);
}
inline void RSG::Promise::_Done_b__40_0(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "<Done>b__40_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ex);
}
inline void RSG::Promise::_Done_b__41_0(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "<Done>b__41_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ex);
}
inline void RSG::Promise::_Done_b__42_0(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Promise*>::get(),
                        "<Done>b__42_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ex);
}
inline ::RSG::Promise* RSG::Promise::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Promise*>());
}
inline ::RSG::Promise* RSG::Promise::New_ctor(::System::Action_2<::System::Action*,::System::Action_1<::System::Exception*>*>*  resolver)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Promise*>(resolver));
}
/// @brief Convert operator to "::RSG::IPromise"
constexpr  RSG::Promise::operator ::RSG::IPromise*() noexcept {
return static_cast<::RSG::IPromise*>(static_cast<void*>(this));
}
/// @brief Convert to "::RSG::IPromise"
constexpr ::RSG::IPromise* RSG::Promise::i___RSG__IPromise() noexcept {
return static_cast<::RSG::IPromise*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::RSG::IPendingPromise"
constexpr  RSG::Promise::operator ::RSG::IPendingPromise*() noexcept {
return static_cast<::RSG::IPendingPromise*>(static_cast<void*>(this));
}
/// @brief Convert to "::RSG::IPendingPromise"
constexpr ::RSG::IPendingPromise* RSG::Promise::i___RSG__IPendingPromise() noexcept {
return static_cast<::RSG::IPendingPromise*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::RSG::IRejectable"
constexpr  RSG::Promise::operator ::RSG::IRejectable*() noexcept {
return static_cast<::RSG::IRejectable*>(static_cast<void*>(this));
}
/// @brief Convert to "::RSG::IRejectable"
constexpr ::RSG::IRejectable* RSG::Promise::i___RSG__IRejectable() noexcept {
return static_cast<::RSG::IRejectable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::RSG::IPromiseInfo"
constexpr  RSG::Promise::operator ::RSG::IPromiseInfo*() noexcept {
return static_cast<::RSG::IPromiseInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::RSG::IPromiseInfo"
constexpr ::RSG::IPromiseInfo* RSG::Promise::i___RSG__IPromiseInfo() noexcept {
return static_cast<::RSG::IPromiseInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::RSG::Promise::Promise()   {
}
