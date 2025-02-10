#pragma once
// IWYU pragma private; include "VROSC/SynthsDataController.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__InstrumentsDataController_impl.hpp"
#include "VROSC/zzzz__SynthsDataController_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__InstrumentsDataController_def.hpp"
#include "VROSC/zzzz__Note_def.hpp"
#include "VROSC/zzzz__Scale_def.hpp"
#include "VROSC/zzzz__SynthData_def.hpp"
#include "VROSC/zzzz__SynthsDataController_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
//  Writing Method size for method: ::VROSC::SynthsDataController___c__DisplayClass5_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController___c__DisplayClass5_0::*)()>(&::VROSC::SynthsDataController___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18481c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController___c__DisplayClass5_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController___c__DisplayClass5_0._SaveData_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController___c__DisplayClass5_0::*)()>(&::VROSC::SynthsDataController___c__DisplayClass5_0::_SaveData_b__0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x18481c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController___c__DisplayClass5_0*>::get(),
                        "<SaveData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController___c__DisplayClass5_0._SaveData_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController___c__DisplayClass5_0::*)(::VROSC::Error)>(&::VROSC::SynthsDataController___c__DisplayClass5_0::_SaveData_b__1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18481fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController___c__DisplayClass5_0*>::get(),
                        "<SaveData>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::SynthsDataController*& VROSC::SynthsDataController___c__DisplayClass5_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::SynthsDataController* const& VROSC::SynthsDataController___c__DisplayClass5_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::SynthsDataController___c__DisplayClass5_0::__cordl_internal_set___4__this(::VROSC::SynthsDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::SynthsDataController___c__DisplayClass5_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::SynthsDataController___c__DisplayClass5_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::SynthsDataController___c__DisplayClass5_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::SynthsDataController___c__DisplayClass5_0::__cordl_internal_get___9__0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr ::System::Action* const& VROSC::SynthsDataController___c__DisplayClass5_0::__cordl_internal_get___9__0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr void VROSC::SynthsDataController___c__DisplayClass5_0::__cordl_internal_set___9__0(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::SynthsDataController___c__DisplayClass5_0::__cordl_internal_get___9__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::SynthsDataController___c__DisplayClass5_0::__cordl_internal_get___9__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr void VROSC::SynthsDataController___c__DisplayClass5_0::__cordl_internal_set___9__1(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SynthsDataController___c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController___c__DisplayClass5_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthsDataController___c__DisplayClass5_0::_SaveData_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController___c__DisplayClass5_0*>::get(),
                        "<SaveData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthsDataController___c__DisplayClass5_0::_SaveData_b__1(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController___c__DisplayClass5_0*>::get(),
                        "<SaveData>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::VROSC::SynthsDataController___c__DisplayClass5_0* VROSC::SynthsDataController___c__DisplayClass5_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SynthsDataController___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::SynthsDataController___c__DisplayClass5_0::SynthsDataController___c__DisplayClass5_0()   {
}
//  Writing Method size for method: ::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d::*)()>(&::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d::MoveNext)> {
  constexpr static std::size_t size = 0x6fc;
  constexpr static std::size_t addrs = 0x18482b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18489c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::VROSC::SynthsDataController___c__DisplayClass6_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty: "::VROSC::SynthsDataController___c__DisplayClass6_1*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__2", ty: "::VROSC::SynthsDataController___c__DisplayClass6_2*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty: "::System::Collections::Generic::List_1_Enumerator<::VROSC::SynthData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_i_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::SynthsDataController___c__DisplayClass6_0*  __4__this, ::StringW  data, ::VROSC::SynthsDataController___c__DisplayClass6_1*  __8__1, ::VROSC::SynthsDataController___c__DisplayClass6_2*  __8__2, ::System::Collections::Generic::List_1_Enumerator<::VROSC::SynthData*>  __7__wrap1, int32_t  _i_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->data = data;
this->__8__1 = __8__1;
this->__8__2 = __8__2;
this->__7__wrap1 = __7__wrap1;
this->_i_5__3 = _i_5__3;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d()   {
}
//  Writing Method size for method: ::VROSC::SynthsDataController___c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController___c__DisplayClass6_0::*)()>(&::VROSC::SynthsDataController___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18452ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController___c__DisplayClass6_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController___c__DisplayClass6_0._LoadData_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController___c__DisplayClass6_0::*)(::StringW)>(&::VROSC::SynthsDataController___c__DisplayClass6_0::_LoadData_b__0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1848218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController___c__DisplayClass6_0*>::get(),
                        "<LoadData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::SynthsDataController*& VROSC::SynthsDataController___c__DisplayClass6_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::SynthsDataController* const& VROSC::SynthsDataController___c__DisplayClass6_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::SynthsDataController___c__DisplayClass6_0::__cordl_internal_set___4__this(::VROSC::SynthsDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::SynthsDataController___c__DisplayClass6_0::__cordl_internal_get_sessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr ::StringW const& VROSC::SynthsDataController___c__DisplayClass6_0::__cordl_internal_get_sessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr void VROSC::SynthsDataController___c__DisplayClass6_0::__cordl_internal_set_sessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::SynthsDataController___c__DisplayClass6_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::SynthsDataController___c__DisplayClass6_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::SynthsDataController___c__DisplayClass6_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::SynthsDataController___c__DisplayClass6_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::SynthsDataController___c__DisplayClass6_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::SynthsDataController___c__DisplayClass6_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SynthsDataController___c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController___c__DisplayClass6_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthsDataController___c__DisplayClass6_0::_LoadData_b__0(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController___c__DisplayClass6_0*>::get(),
                        "<LoadData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::VROSC::SynthsDataController___c__DisplayClass6_0* VROSC::SynthsDataController___c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SynthsDataController___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::SynthsDataController___c__DisplayClass6_0::SynthsDataController___c__DisplayClass6_0()   {
}
//  Writing Method size for method: ::VROSC::SynthsDataController___c__DisplayClass6_1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController___c__DisplayClass6_1::*)()>(&::VROSC::SynthsDataController___c__DisplayClass6_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18489b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController___c__DisplayClass6_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::SynthsDataController___c__DisplayClass6_1::__cordl_internal_get_patchCountToLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patchCountToLoad;
}
constexpr int32_t const& VROSC::SynthsDataController___c__DisplayClass6_1::__cordl_internal_get_patchCountToLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patchCountToLoad;
}
constexpr void VROSC::SynthsDataController___c__DisplayClass6_1::__cordl_internal_set_patchCountToLoad(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patchCountToLoad = value;
}
constexpr ::VROSC::SynthsDataController___c__DisplayClass6_0*& VROSC::SynthsDataController___c__DisplayClass6_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::VROSC::SynthsDataController___c__DisplayClass6_0* const& VROSC::SynthsDataController___c__DisplayClass6_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void VROSC::SynthsDataController___c__DisplayClass6_1::__cordl_internal_set_CS$__8__locals1(::VROSC::SynthsDataController___c__DisplayClass6_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SynthsDataController___c__DisplayClass6_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController___c__DisplayClass6_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SynthsDataController___c__DisplayClass6_1* VROSC::SynthsDataController___c__DisplayClass6_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SynthsDataController___c__DisplayClass6_1*>());
}
// Ctor Parameters []
constexpr ::VROSC::SynthsDataController___c__DisplayClass6_1::SynthsDataController___c__DisplayClass6_1()   {
}
//  Writing Method size for method: ::VROSC::SynthsDataController___c__DisplayClass6_2._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController___c__DisplayClass6_2::*)()>(&::VROSC::SynthsDataController___c__DisplayClass6_2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18489bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController___c__DisplayClass6_2*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController___c__DisplayClass6_2._LoadData_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController___c__DisplayClass6_2::*)(::StringW)>(&::VROSC::SynthsDataController___c__DisplayClass6_2::_LoadData_b__1)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x18489d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController___c__DisplayClass6_2*>::get(),
                        "<LoadData>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::SynthData*& VROSC::SynthsDataController___c__DisplayClass6_2::__cordl_internal_get_instrumentData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instrumentData;
}
constexpr ::VROSC::SynthData* const& VROSC::SynthsDataController___c__DisplayClass6_2::__cordl_internal_get_instrumentData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instrumentData;
}
constexpr void VROSC::SynthsDataController___c__DisplayClass6_2::__cordl_internal_set_instrumentData(::VROSC::SynthData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___instrumentData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::SynthsDataController___c__DisplayClass6_1*& VROSC::SynthsDataController___c__DisplayClass6_2::__cordl_internal_get_CS$__8__locals2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals2;
}
constexpr ::VROSC::SynthsDataController___c__DisplayClass6_1* const& VROSC::SynthsDataController___c__DisplayClass6_2::__cordl_internal_get_CS$__8__locals2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals2;
}
constexpr void VROSC::SynthsDataController___c__DisplayClass6_2::__cordl_internal_set_CS$__8__locals2(::VROSC::SynthsDataController___c__DisplayClass6_1*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& VROSC::SynthsDataController___c__DisplayClass6_2::__cordl_internal_get___9__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr ::System::Action_1<::StringW>* const& VROSC::SynthsDataController___c__DisplayClass6_2::__cordl_internal_get___9__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr void VROSC::SynthsDataController___c__DisplayClass6_2::__cordl_internal_set___9__1(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SynthsDataController___c__DisplayClass6_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController___c__DisplayClass6_2*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthsDataController___c__DisplayClass6_2::_LoadData_b__1(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController___c__DisplayClass6_2*>::get(),
                        "<LoadData>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline ::VROSC::SynthsDataController___c__DisplayClass6_2* VROSC::SynthsDataController___c__DisplayClass6_2::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SynthsDataController___c__DisplayClass6_2*>());
}
// Ctor Parameters []
constexpr ::VROSC::SynthsDataController___c__DisplayClass6_2::SynthsDataController___c__DisplayClass6_2()   {
}
//  Writing Method size for method: ::VROSC::SynthsDataController__SaveData_d__5.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController__SaveData_d__5::*)()>(&::VROSC::SynthsDataController__SaveData_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x594;
  constexpr static std::size_t addrs = 0x1848d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController__SaveData_d__5>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController__SaveData_d__5.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController__SaveData_d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::SynthsDataController__SaveData_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18492a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController__SaveData_d__5>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::SynthsDataController__SaveData_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController__SaveData_d__5>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthsDataController__SaveData_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController__SaveData_d__5>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::SynthsDataController__SaveData_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::SynthsDataController__SaveData_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::VROSC::SynthsDataController*", modifiers: "", def_value: Some("{}") }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "sessionName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty: "::VROSC::SynthsDataController___c__DisplayClass5_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_i_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_instrumentData_5__3", ty: "::VROSC::SynthData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_patchSettingsList_5__4", ty: "::System::Collections::Generic::List_1<::VROSC::InstrumentsDataController_PatchSettings*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_j_5__5", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SynthsDataController__SaveData_d__5::SynthsDataController__SaveData_d__5(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::SynthsDataController*  __4__this, ::System::Action_1<::VROSC::Error>*  onFailure, ::StringW  sessionName, ::VROSC::SynthsDataController___c__DisplayClass5_0*  __8__1, ::System::Action*  onSuccess, int32_t  _i_5__2, ::VROSC::SynthData*  _instrumentData_5__3, ::System::Collections::Generic::List_1<::VROSC::InstrumentsDataController_PatchSettings*>*  _patchSettingsList_5__4, int32_t  _j_5__5, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->onFailure = onFailure;
this->sessionName = sessionName;
this->__8__1 = __8__1;
this->onSuccess = onSuccess;
this->_i_5__2 = _i_5__2;
this->_instrumentData_5__3 = _instrumentData_5__3;
this->_patchSettingsList_5__4 = _patchSettingsList_5__4;
this->_j_5__5 = _j_5__5;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::SynthsDataController__SaveData_d__5::SynthsDataController__SaveData_d__5()   {
}
//  Writing Method size for method: ::VROSC::SynthsDataController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController::*)()>(&::VROSC::SynthsDataController::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18441ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.ApplyDefaults
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings*)>(&::VROSC::SynthsDataController::ApplyDefaults)> {
  constexpr static std::size_t size = 0x7ac;
  constexpr static std::size_t addrs = 0x1844318;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.SaveData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController::*)(::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::SynthsDataController::SaveData)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x18450cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.LoadData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController::*)(::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::SynthsDataController::LoadData)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x1845188;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.GetLoadSteps
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::SynthsDataController::*)()>(&::VROSC::SynthsDataController::GetLoadSteps)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x18452b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.GetSaveSteps
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::SynthsDataController::*)()>(&::VROSC::SynthsDataController::GetSaveSteps)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x184546c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.AddPatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier, ::System::Object*)>(&::VROSC::SynthsDataController::AddPatch)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x1844d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "AddPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.HasPatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier, ::StringW)>(&::VROSC::SynthsDataController::HasPatch)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1845624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "HasPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.GetSelectedPatchSettings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::InstrumentsDataController_PatchSettings* (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier)>(&::VROSC::SynthsDataController::GetSelectedPatchSettings)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x1845854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "GetSelectedPatchSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.GetInstrumentPatches
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::InstrumentsDataController_PatchSettings*>* (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier)>(&::VROSC::SynthsDataController::GetInstrumentPatches)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x18459f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "GetInstrumentPatches",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.SelectPatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier, int32_t)>(&::VROSC::SynthsDataController::SelectPatch)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x1845b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "SelectPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.GetMinOctave
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier)>(&::VROSC::SynthsDataController::GetMinOctave)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1845e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "GetMinOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.GetSelectedOctave
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier)>(&::VROSC::SynthsDataController::GetSelectedOctave)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1845fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "GetSelectedOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.SelectNextOctave
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier)>(&::VROSC::SynthsDataController::SelectNextOctave)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x18460d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "SelectNextOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.SelectPreviousOctave
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier)>(&::VROSC::SynthsDataController::SelectPreviousOctave)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1846214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "SelectPreviousOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.SetScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier, int32_t, ::VROSC::Scale)>(&::VROSC::SynthsDataController::SetScale)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x1846354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "SetScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Scale>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.GetScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Scale (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier, int32_t)>(&::VROSC::SynthsDataController::GetScale)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18464f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "GetScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.SetStartNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier, int32_t, ::VROSC::Note)>(&::VROSC::SynthsDataController::SetStartNote)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x1846688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "SetStartNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Note>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.GetStartNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Note (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier, int32_t)>(&::VROSC::SynthsDataController::GetStartNote)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x184682c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "GetStartNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.SetScaleRowLocked
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier, int32_t, bool)>(&::VROSC::SynthsDataController::SetScaleRowLocked)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x18469bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "SetScaleRowLocked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.GetScaleRowLocked
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier, int32_t)>(&::VROSC::SynthsDataController::GetScaleRowLocked)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x1846b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "GetScaleRowLocked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.SetScaleRowCustomized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier, int32_t, bool)>(&::VROSC::SynthsDataController::SetScaleRowCustomized)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x1846cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "SetScaleRowCustomized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.GetScaleRowCustomized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier, int32_t)>(&::VROSC::SynthsDataController::GetScaleRowCustomized)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x1846ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "GetScaleRowCustomized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.IsOpen
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier)>(&::VROSC::SynthsDataController::IsOpen)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x184703c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.GetPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier)>(&::VROSC::SynthsDataController::GetPosition)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x184716c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.GetRotation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier)>(&::VROSC::SynthsDataController::GetRotation)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18472cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.GetScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier)>(&::VROSC::SynthsDataController::GetScale)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x184742c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.SetOpen
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier, bool)>(&::VROSC::SynthsDataController::SetOpen)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x184758c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.SetPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier, ::UnityEngine::Vector3)>(&::VROSC::SynthsDataController::SetPosition)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x18476c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.SetRotation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier, ::UnityEngine::Quaternion)>(&::VROSC::SynthsDataController::SetRotation)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x1847820;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.SetScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier, ::UnityEngine::Vector3)>(&::VROSC::SynthsDataController::SetScale)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x1847984;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.SetQuantize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier, bool)>(&::VROSC::SynthsDataController::SetQuantize)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1847ae0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.SetQuantizeTolerance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier, float_t)>(&::VROSC::SynthsDataController::SetQuantizeTolerance)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1847c0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.SetQuantizeBeatDivision
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier, int32_t)>(&::VROSC::SynthsDataController::SetQuantizeBeatDivision)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1847d3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.GetQuantize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier)>(&::VROSC::SynthsDataController::GetQuantize)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x1847e64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.GetQuantizeTolerance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier)>(&::VROSC::SynthsDataController::GetQuantizeTolerance)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x1847f88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.GetQuantizeBeatDivision
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::SynthsDataController::*)(::VROSC::WidgetSettings_Identifier)>(&::VROSC::SynthsDataController::GetQuantizeBeatDivision)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x18480a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthsDataController.GetInstrumentData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::SynthData* (::VROSC::SynthsDataController::*)(::StringW)>(&::VROSC::SynthsDataController::GetInstrumentData)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x1844ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "GetInstrumentData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::VROSC::InstrumentsDataController_PatchSettings*>*>*& VROSC::SynthsDataController::__cordl_internal_get__instrumentsPatches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instrumentsPatches;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::VROSC::InstrumentsDataController_PatchSettings*>*>* const& VROSC::SynthsDataController::__cordl_internal_get__instrumentsPatches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instrumentsPatches;
}
constexpr void VROSC::SynthsDataController::__cordl_internal_set__instrumentsPatches(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::VROSC::InstrumentsDataController_PatchSettings*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instrumentsPatches)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& VROSC::SynthsDataController::__cordl_internal_get__selectedPatchesIndexes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedPatchesIndexes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& VROSC::SynthsDataController::__cordl_internal_get__selectedPatchesIndexes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedPatchesIndexes;
}
constexpr void VROSC::SynthsDataController::__cordl_internal_set__selectedPatchesIndexes(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectedPatchesIndexes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SynthsDataController::setStaticF_OnDataLoaded(::System::Action_1<::VROSC::SynthsDataController*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::VROSC::SynthsDataController*>*, "OnDataLoaded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get>(std::forward<::System::Action_1<::VROSC::SynthsDataController*>*>(value));
}
inline ::System::Action_1<::VROSC::SynthsDataController*>* VROSC::SynthsDataController::getStaticF_OnDataLoaded()  {
return ::cordl_internals::getStaticField<::System::Action_1<::VROSC::SynthsDataController*>*, "OnDataLoaded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get>();
}
inline void VROSC::SynthsDataController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthsDataController::ApplyDefaults(::VROSC::WidgetSettings*  widgetDefaultSettings)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, widgetDefaultSettings);
}
inline void VROSC::SynthsDataController::SaveData(::StringW  sessionName, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionName, onSuccess, onFailure);
}
inline void VROSC::SynthsDataController::LoadData(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, onSuccess, onFailure);
}
inline int32_t VROSC::SynthsDataController::GetLoadSteps()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t VROSC::SynthsDataController::GetSaveSteps()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::SynthsDataController::AddPatch(::VROSC::WidgetSettings_Identifier  id, ::System::Object*  patch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "AddPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, patch);
}
inline bool VROSC::SynthsDataController::HasPatch(::VROSC::WidgetSettings_Identifier  id, ::StringW  patchName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "HasPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, patchName);
}
inline ::VROSC::InstrumentsDataController_PatchSettings* VROSC::SynthsDataController::GetSelectedPatchSettings(::VROSC::WidgetSettings_Identifier  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "GetSelectedPatchSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::InstrumentsDataController_PatchSettings*, false>(this, ___internal_method, id);
}
inline ::System::Collections::Generic::List_1<::VROSC::InstrumentsDataController_PatchSettings*>* VROSC::SynthsDataController::GetInstrumentPatches(::VROSC::WidgetSettings_Identifier  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "GetInstrumentPatches",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::VROSC::InstrumentsDataController_PatchSettings*>*, false>(this, ___internal_method, id);
}
inline void VROSC::SynthsDataController::SelectPatch(::VROSC::WidgetSettings_Identifier  id, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "SelectPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, index);
}
inline int32_t VROSC::SynthsDataController::GetMinOctave(::VROSC::WidgetSettings_Identifier  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "GetMinOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, id);
}
inline int32_t VROSC::SynthsDataController::GetSelectedOctave(::VROSC::WidgetSettings_Identifier  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "GetSelectedOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, id);
}
inline void VROSC::SynthsDataController::SelectNextOctave(::VROSC::WidgetSettings_Identifier  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "SelectNextOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline void VROSC::SynthsDataController::SelectPreviousOctave(::VROSC::WidgetSettings_Identifier  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "SelectPreviousOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline void VROSC::SynthsDataController::SetScale(::VROSC::WidgetSettings_Identifier  id, int32_t  scaleIndex, ::VROSC::Scale  scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "SetScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Scale>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, scaleIndex, scale);
}
inline ::VROSC::Scale VROSC::SynthsDataController::GetScale(::VROSC::WidgetSettings_Identifier  id, int32_t  scaleIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "GetScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::Scale, false>(this, ___internal_method, id, scaleIndex);
}
inline void VROSC::SynthsDataController::SetStartNote(::VROSC::WidgetSettings_Identifier  id, int32_t  scaleIndex, ::VROSC::Note  startNote)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "SetStartNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Note>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, scaleIndex, startNote);
}
inline ::VROSC::Note VROSC::SynthsDataController::GetStartNote(::VROSC::WidgetSettings_Identifier  id, int32_t  scaleIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "GetStartNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::Note, false>(this, ___internal_method, id, scaleIndex);
}
inline void VROSC::SynthsDataController::SetScaleRowLocked(::VROSC::WidgetSettings_Identifier  id, int32_t  scaleIndex, bool  locked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "SetScaleRowLocked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, scaleIndex, locked);
}
inline bool VROSC::SynthsDataController::GetScaleRowLocked(::VROSC::WidgetSettings_Identifier  id, int32_t  scaleIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "GetScaleRowLocked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, scaleIndex);
}
inline void VROSC::SynthsDataController::SetScaleRowCustomized(::VROSC::WidgetSettings_Identifier  id, int32_t  scaleIndex, bool  customized)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "SetScaleRowCustomized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, scaleIndex, customized);
}
inline bool VROSC::SynthsDataController::GetScaleRowCustomized(::VROSC::WidgetSettings_Identifier  id, int32_t  scaleIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "GetScaleRowCustomized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, scaleIndex);
}
inline bool VROSC::SynthsDataController::IsOpen(::VROSC::WidgetSettings_Identifier  id)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id);
}
inline ::UnityEngine::Vector3 VROSC::SynthsDataController::GetPosition(::VROSC::WidgetSettings_Identifier  id)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                    18
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, id);
}
inline ::UnityEngine::Quaternion VROSC::SynthsDataController::GetRotation(::VROSC::WidgetSettings_Identifier  id)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                    19
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method, id);
}
inline ::UnityEngine::Vector3 VROSC::SynthsDataController::GetScale(::VROSC::WidgetSettings_Identifier  id)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, id);
}
inline void VROSC::SynthsDataController::SetOpen(::VROSC::WidgetSettings_Identifier  id, bool  isOpen)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, isOpen);
}
inline void VROSC::SynthsDataController::SetPosition(::VROSC::WidgetSettings_Identifier  id, ::UnityEngine::Vector3  position)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                    22
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, position);
}
inline void VROSC::SynthsDataController::SetRotation(::VROSC::WidgetSettings_Identifier  id, ::UnityEngine::Quaternion  rotation)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                    23
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, rotation);
}
inline void VROSC::SynthsDataController::SetScale(::VROSC::WidgetSettings_Identifier  id, ::UnityEngine::Vector3  scale)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                    24
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, scale);
}
inline void VROSC::SynthsDataController::SetQuantize(::VROSC::WidgetSettings_Identifier  id, bool  quantize)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                    25
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, quantize);
}
inline void VROSC::SynthsDataController::SetQuantizeTolerance(::VROSC::WidgetSettings_Identifier  id, float_t  tolerance)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                    26
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, tolerance);
}
inline void VROSC::SynthsDataController::SetQuantizeBeatDivision(::VROSC::WidgetSettings_Identifier  id, int32_t  division)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                    27
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, division);
}
inline bool VROSC::SynthsDataController::GetQuantize(::VROSC::WidgetSettings_Identifier  id)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                    28
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id);
}
inline float_t VROSC::SynthsDataController::GetQuantizeTolerance(::VROSC::WidgetSettings_Identifier  id)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                    29
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, id);
}
inline int32_t VROSC::SynthsDataController::GetQuantizeBeatDivision(::VROSC::WidgetSettings_Identifier  id)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                    30
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, id);
}
inline ::VROSC::SynthData* VROSC::SynthsDataController::GetInstrumentData(::StringW  instrumentId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthsDataController*>::get(),
                        "GetInstrumentData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::SynthData*, false>(this, ___internal_method, instrumentId);
}
inline ::VROSC::SynthsDataController* VROSC::SynthsDataController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SynthsDataController*>());
}
// Ctor Parameters []
constexpr ::VROSC::SynthsDataController::SynthsDataController()   {
}
