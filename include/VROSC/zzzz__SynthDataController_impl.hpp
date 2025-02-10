#pragma once
// IWYU pragma private; include "VROSC/SynthDataController.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__InstrumentDataController_impl.hpp"
#include "VROSC/zzzz__SynthDataController_def.hpp"
#include "AudioHelm/zzzz__HelmPatchFormat_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__PatchSettings_def.hpp"
#include "VROSC/zzzz__Scale_def.hpp"
#include "VROSC/zzzz__SynthDataController_def.hpp"
#include "VROSC/zzzz__SynthDataModel_def.hpp"
#include "VROSC/zzzz__SynthData_def.hpp"
#include "VROSC/zzzz__TransformDataController_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
//  Writing Method size for method: ::VROSC::SynthDataController___c__DisplayClass11_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController___c__DisplayClass11_0::*)()>(&::VROSC::SynthDataController___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x184361c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController___c__DisplayClass11_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController___c__DisplayClass11_0._SaveData_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController___c__DisplayClass11_0::*)()>(&::VROSC::SynthDataController___c__DisplayClass11_0::_SaveData_b__0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1843624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController___c__DisplayClass11_0*>::get(),
                        "<SaveData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController___c__DisplayClass11_0._SaveData_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController___c__DisplayClass11_0::*)(::VROSC::Error)>(&::VROSC::SynthDataController___c__DisplayClass11_0::_SaveData_b__1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1843658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController___c__DisplayClass11_0*>::get(),
                        "<SaveData>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::SynthDataController*& VROSC::SynthDataController___c__DisplayClass11_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::SynthDataController* const& VROSC::SynthDataController___c__DisplayClass11_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::SynthDataController___c__DisplayClass11_0::__cordl_internal_set___4__this(::VROSC::SynthDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::SynthDataController___c__DisplayClass11_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::SynthDataController___c__DisplayClass11_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::SynthDataController___c__DisplayClass11_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::SynthDataController___c__DisplayClass11_0::__cordl_internal_get___9__0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr ::System::Action* const& VROSC::SynthDataController___c__DisplayClass11_0::__cordl_internal_get___9__0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
constexpr void VROSC::SynthDataController___c__DisplayClass11_0::__cordl_internal_set___9__0(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::SynthDataController___c__DisplayClass11_0::__cordl_internal_get___9__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::SynthDataController___c__DisplayClass11_0::__cordl_internal_get___9__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr void VROSC::SynthDataController___c__DisplayClass11_0::__cordl_internal_set___9__1(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SynthDataController___c__DisplayClass11_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController___c__DisplayClass11_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthDataController___c__DisplayClass11_0::_SaveData_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController___c__DisplayClass11_0*>::get(),
                        "<SaveData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthDataController___c__DisplayClass11_0::_SaveData_b__1(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController___c__DisplayClass11_0*>::get(),
                        "<SaveData>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::VROSC::SynthDataController___c__DisplayClass11_0* VROSC::SynthDataController___c__DisplayClass11_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SynthDataController___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::SynthDataController___c__DisplayClass11_0::SynthDataController___c__DisplayClass11_0()   {
}
//  Writing Method size for method: ::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d::*)()>(&::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d::MoveNext)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x1843710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1843b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::VROSC::SynthDataController___c__DisplayClass12_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty: "::VROSC::SynthDataController___c__DisplayClass12_1*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_i_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::SynthDataController___c__DisplayClass12_0*  __4__this, ::StringW  data, ::VROSC::SynthDataController___c__DisplayClass12_1*  __8__1, int32_t  _i_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->data = data;
this->__8__1 = __8__1;
this->_i_5__2 = _i_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d()   {
}
//  Writing Method size for method: ::VROSC::SynthDataController___c__DisplayClass12_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController___c__DisplayClass12_0::*)()>(&::VROSC::SynthDataController___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1842184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController___c__DisplayClass12_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController___c__DisplayClass12_0._LoadData_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController___c__DisplayClass12_0::*)(::StringW)>(&::VROSC::SynthDataController___c__DisplayClass12_0::_LoadData_b__0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1843674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController___c__DisplayClass12_0*>::get(),
                        "<LoadData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::SynthDataController*& VROSC::SynthDataController___c__DisplayClass12_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::SynthDataController* const& VROSC::SynthDataController___c__DisplayClass12_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::SynthDataController___c__DisplayClass12_0::__cordl_internal_set___4__this(::VROSC::SynthDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::SynthDataController___c__DisplayClass12_0::__cordl_internal_get_sessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr ::StringW const& VROSC::SynthDataController___c__DisplayClass12_0::__cordl_internal_get_sessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr void VROSC::SynthDataController___c__DisplayClass12_0::__cordl_internal_set_sessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::SynthDataController___c__DisplayClass12_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::SynthDataController___c__DisplayClass12_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::SynthDataController___c__DisplayClass12_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::SynthDataController___c__DisplayClass12_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::SynthDataController___c__DisplayClass12_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::SynthDataController___c__DisplayClass12_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SynthDataController___c__DisplayClass12_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController___c__DisplayClass12_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthDataController___c__DisplayClass12_0::_LoadData_b__0(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController___c__DisplayClass12_0*>::get(),
                        "<LoadData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::VROSC::SynthDataController___c__DisplayClass12_0* VROSC::SynthDataController___c__DisplayClass12_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SynthDataController___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::SynthDataController___c__DisplayClass12_0::SynthDataController___c__DisplayClass12_0()   {
}
//  Writing Method size for method: ::VROSC::SynthDataController___c__DisplayClass12_1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController___c__DisplayClass12_1::*)()>(&::VROSC::SynthDataController___c__DisplayClass12_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1843b24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController___c__DisplayClass12_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController___c__DisplayClass12_1._LoadData_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController___c__DisplayClass12_1::*)(::StringW)>(&::VROSC::SynthDataController___c__DisplayClass12_1::_LoadData_b__1)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x1843b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController___c__DisplayClass12_1*>::get(),
                        "<LoadData>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::SynthDataController___c__DisplayClass12_1::__cordl_internal_get_patchCountToLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patchCountToLoad;
}
constexpr int32_t const& VROSC::SynthDataController___c__DisplayClass12_1::__cordl_internal_get_patchCountToLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patchCountToLoad;
}
constexpr void VROSC::SynthDataController___c__DisplayClass12_1::__cordl_internal_set_patchCountToLoad(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patchCountToLoad = value;
}
constexpr ::VROSC::SynthDataController___c__DisplayClass12_0*& VROSC::SynthDataController___c__DisplayClass12_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::VROSC::SynthDataController___c__DisplayClass12_0* const& VROSC::SynthDataController___c__DisplayClass12_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void VROSC::SynthDataController___c__DisplayClass12_1::__cordl_internal_set_CS$__8__locals1(::VROSC::SynthDataController___c__DisplayClass12_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& VROSC::SynthDataController___c__DisplayClass12_1::__cordl_internal_get___9__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr ::System::Action_1<::StringW>* const& VROSC::SynthDataController___c__DisplayClass12_1::__cordl_internal_get___9__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr void VROSC::SynthDataController___c__DisplayClass12_1::__cordl_internal_set___9__1(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SynthDataController___c__DisplayClass12_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController___c__DisplayClass12_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthDataController___c__DisplayClass12_1::_LoadData_b__1(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController___c__DisplayClass12_1*>::get(),
                        "<LoadData>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline ::VROSC::SynthDataController___c__DisplayClass12_1* VROSC::SynthDataController___c__DisplayClass12_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SynthDataController___c__DisplayClass12_1*>());
}
// Ctor Parameters []
constexpr ::VROSC::SynthDataController___c__DisplayClass12_1::SynthDataController___c__DisplayClass12_1()   {
}
//  Writing Method size for method: ::VROSC::SynthDataController__SaveData_d__11.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController__SaveData_d__11::*)()>(&::VROSC::SynthDataController__SaveData_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x1843d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController__SaveData_d__11>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController__SaveData_d__11.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController__SaveData_d__11::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::SynthDataController__SaveData_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x184414c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController__SaveData_d__11>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::SynthDataController__SaveData_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController__SaveData_d__11>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthDataController__SaveData_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController__SaveData_d__11>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::SynthDataController__SaveData_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::SynthDataController__SaveData_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::VROSC::SynthDataController*", modifiers: "", def_value: Some("{}") }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "sessionName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty: "::VROSC::SynthDataController___c__DisplayClass11_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_i_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SynthDataController__SaveData_d__11::SynthDataController__SaveData_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::SynthDataController*  __4__this, ::System::Action_1<::VROSC::Error>*  onFailure, ::StringW  sessionName, ::VROSC::SynthDataController___c__DisplayClass11_0*  __8__1, ::System::Action*  onSuccess, int32_t  _i_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->onFailure = onFailure;
this->sessionName = sessionName;
this->__8__1 = __8__1;
this->onSuccess = onSuccess;
this->_i_5__2 = _i_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::SynthDataController__SaveData_d__11::SynthDataController__SaveData_d__11()   {
}
//  Writing Method size for method: ::VROSC::SynthDataController.get_SynthDataModel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::SynthDataModel* (::VROSC::SynthDataController::*)()>(&::VROSC::SynthDataController::get_SynthDataModel)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1841044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "get_SynthDataModel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.get_TransformData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::TransformDataController* (::VROSC::SynthDataController::*)()>(&::VROSC::SynthDataController::get_TransformData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18410bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController::*)()>(&::VROSC::SynthDataController::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x18410c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.CopyOldSynthData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController::*)(::VROSC::SynthData*)>(&::VROSC::SynthDataController::CopyOldSynthData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1841334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "CopyOldSynthData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SynthData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.ApplyDefaults
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController::*)(::VROSC::WidgetSettings*)>(&::VROSC::SynthDataController::ApplyDefaults)> {
  constexpr static std::size_t size = 0x6c8;
  constexpr static std::size_t addrs = 0x1841640;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.SaveData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController::*)(::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::SynthDataController::SaveData)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1841fa8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.LoadData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController::*)(::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::SynthDataController::LoadData)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x184205c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.GetLoadSteps
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::SynthDataController::*)()>(&::VROSC::SynthDataController::GetLoadSteps)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18421b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.GetSaveSteps
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::SynthDataController::*)()>(&::VROSC::SynthDataController::GetSaveSteps)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x184220c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.AddPatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController::*)(::AudioHelm::HelmPatchFormat*)>(&::VROSC::SynthDataController::AddPatch)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x1841d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "AddPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::HelmPatchFormat*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.HasPatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::SynthDataController::*)(::StringW)>(&::VROSC::SynthDataController::HasPatch)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x1842260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "HasPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.get_SelectedPatchIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::SynthDataController::*)()>(&::VROSC::SynthDataController::get_SelectedPatchIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18423ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "get_SelectedPatchIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.get_SelectedPatchSettings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::PatchSettings* (::VROSC::SynthDataController::*)()>(&::VROSC::SynthDataController::get_SelectedPatchSettings)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18423f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "get_SelectedPatchSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.SelectPatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController::*)(int32_t)>(&::VROSC::SynthDataController::SelectPatch)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1842448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "SelectPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.GetSelectedPatchDefaultSettings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::PatchSettings* (::VROSC::SynthDataController::*)()>(&::VROSC::SynthDataController::GetSelectedPatchDefaultSettings)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1842638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "GetSelectedPatchDefaultSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.GetSelectedPatchName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::SynthDataController::*)()>(&::VROSC::SynthDataController::GetSelectedPatchName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1842738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "GetSelectedPatchName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.GetPatchesNames
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::VROSC::SynthDataController::*)()>(&::VROSC::SynthDataController::GetPatchesNames)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x1842754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "GetPatchesNames",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.get_MinOctave
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::SynthDataController::*)()>(&::VROSC::SynthDataController::get_MinOctave)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1842898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "get_MinOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.get_MaxOctave
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::SynthDataController::*)()>(&::VROSC::SynthDataController::get_MaxOctave)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x18428bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "get_MaxOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.get_SelectedOctave
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::SynthDataController::*)()>(&::VROSC::SynthDataController::get_SelectedOctave)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x18428e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "get_SelectedOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.set_SelectedOctave
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController::*)(int32_t)>(&::VROSC::SynthDataController::set_SelectedOctave)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1842904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "set_SelectedOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.SelectNextOctave
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController::*)()>(&::VROSC::SynthDataController::SelectNextOctave)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1842940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "SelectNextOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.SelectPreviousOctave
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController::*)()>(&::VROSC::SynthDataController::SelectPreviousOctave)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x18429b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "SelectPreviousOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.SetScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController::*)(int32_t, ::VROSC::Scale)>(&::VROSC::SynthDataController::SetScale)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x1842a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "SetScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Scale>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.GetScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Scale (::VROSC::SynthDataController::*)(int32_t)>(&::VROSC::SynthDataController::GetScale)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1842b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "GetScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.SetStartNoteOffset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController::*)(int32_t, int32_t)>(&::VROSC::SynthDataController::SetStartNoteOffset)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x1842ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "SetStartNoteOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.GetStartNoteOffset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::SynthDataController::*)(int32_t)>(&::VROSC::SynthDataController::GetStartNoteOffset)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1842dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "GetStartNoteOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.SetIsScaleRowLocked
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController::*)(int32_t, bool)>(&::VROSC::SynthDataController::SetIsScaleRowLocked)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x1842f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "SetIsScaleRowLocked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.IsScaleRowLocked
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::SynthDataController::*)(int32_t)>(&::VROSC::SynthDataController::IsScaleRowLocked)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x184306c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "IsScaleRowLocked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.SetIsScaleRowCustomized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController::*)(int32_t, bool)>(&::VROSC::SynthDataController::SetIsScaleRowCustomized)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x18431a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "SetIsScaleRowCustomized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.IsScaleRowCustomized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::SynthDataController::*)(int32_t)>(&::VROSC::SynthDataController::IsScaleRowCustomized)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x18432f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "IsScaleRowCustomized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.get_Quantize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::SynthDataController::*)()>(&::VROSC::SynthDataController::get_Quantize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1843430;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.set_Quantize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController::*)(bool)>(&::VROSC::SynthDataController::set_Quantize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x184344c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.get_QuantizeTolerance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::SynthDataController::*)()>(&::VROSC::SynthDataController::get_QuantizeTolerance)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1843484;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.set_QuantizeTolerance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController::*)(float_t)>(&::VROSC::SynthDataController::set_QuantizeTolerance)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x18434a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.get_QuantizeBeatDivision
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::SynthDataController::*)()>(&::VROSC::SynthDataController::get_QuantizeBeatDivision)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18434d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.set_QuantizeBeatDivision
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController::*)(int32_t)>(&::VROSC::SynthDataController::set_QuantizeBeatDivision)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x18434f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.get_FrameIsActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::SynthDataController::*)()>(&::VROSC::SynthDataController::get_FrameIsActive)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1843524;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.set_FrameIsActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController::*)(bool)>(&::VROSC::SynthDataController::set_FrameIsActive)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1843540;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.get_HasBeenOpened
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::SynthDataController::*)()>(&::VROSC::SynthDataController::get_HasBeenOpened)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1843578;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.set_HasBeenOpened
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController::*)(bool)>(&::VROSC::SynthDataController::set_HasBeenOpened)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1843594;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.get_Volume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::SynthDataController::*)()>(&::VROSC::SynthDataController::get_Volume)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18435cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthDataController.set_Volume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthDataController::*)(float_t)>(&::VROSC::SynthDataController::set_Volume)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x18435e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::VROSC::PatchSettings*>*& VROSC::SynthDataController::__cordl_internal_get__patches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____patches;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::PatchSettings*>* const& VROSC::SynthDataController::__cordl_internal_get__patches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____patches;
}
constexpr void VROSC::SynthDataController::__cordl_internal_set__patches(::System::Collections::Generic::List_1<::VROSC::PatchSettings*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____patches)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::PatchSettings*>*& VROSC::SynthDataController::__cordl_internal_get__defaultPatches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultPatches;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::PatchSettings*>* const& VROSC::SynthDataController::__cordl_internal_get__defaultPatches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultPatches;
}
constexpr void VROSC::SynthDataController::__cordl_internal_set__defaultPatches(::System::Collections::Generic::List_1<::VROSC::PatchSettings*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultPatches)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::SynthDataController::__cordl_internal_get__selectedPatchIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedPatchIndex;
}
constexpr int32_t const& VROSC::SynthDataController::__cordl_internal_get__selectedPatchIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedPatchIndex;
}
constexpr void VROSC::SynthDataController::__cordl_internal_set__selectedPatchIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectedPatchIndex = value;
}
constexpr ::VROSC::TransformDataController*& VROSC::SynthDataController::__cordl_internal_get__transformData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformData;
}
constexpr ::VROSC::TransformDataController* const& VROSC::SynthDataController::__cordl_internal_get__transformData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformData;
}
constexpr void VROSC::SynthDataController::__cordl_internal_set__transformData(::VROSC::TransformDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transformData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::VROSC::SynthDataModel* VROSC::SynthDataController::get_SynthDataModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "get_SynthDataModel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::SynthDataModel*, false>(this, ___internal_method);
}
inline ::VROSC::TransformDataController* VROSC::SynthDataController::get_TransformData()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<::VROSC::TransformDataController*, false>(this, ___internal_method);
}
inline void VROSC::SynthDataController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthDataController::CopyOldSynthData(::VROSC::SynthData*  oldSynthData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "CopyOldSynthData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SynthData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldSynthData);
}
inline void VROSC::SynthDataController::ApplyDefaults(::VROSC::WidgetSettings*  widgetDefaultSettings)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, widgetDefaultSettings);
}
inline void VROSC::SynthDataController::SaveData(::StringW  sessionName, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionName, onSuccess, onFailure);
}
inline void VROSC::SynthDataController::LoadData(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, onSuccess, onFailure);
}
inline int32_t VROSC::SynthDataController::GetLoadSteps()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t VROSC::SynthDataController::GetSaveSteps()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::SynthDataController::AddPatch(::AudioHelm::HelmPatchFormat*  patch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "AddPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::HelmPatchFormat*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, patch);
}
inline bool VROSC::SynthDataController::HasPatch(::StringW  patchName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "HasPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, patchName);
}
inline int32_t VROSC::SynthDataController::get_SelectedPatchIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "get_SelectedPatchIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::VROSC::PatchSettings* VROSC::SynthDataController::get_SelectedPatchSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "get_SelectedPatchSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::PatchSettings*, false>(this, ___internal_method);
}
inline void VROSC::SynthDataController::SelectPatch(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "SelectPatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline ::VROSC::PatchSettings* VROSC::SynthDataController::GetSelectedPatchDefaultSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "GetSelectedPatchDefaultSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::PatchSettings*, false>(this, ___internal_method);
}
inline ::StringW VROSC::SynthDataController::GetSelectedPatchName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "GetSelectedPatchName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* VROSC::SynthDataController::GetPatchesNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "GetPatchesNames",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline int32_t VROSC::SynthDataController::get_MinOctave()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "get_MinOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t VROSC::SynthDataController::get_MaxOctave()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "get_MaxOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t VROSC::SynthDataController::get_SelectedOctave()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "get_SelectedOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::SynthDataController::set_SelectedOctave(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "set_SelectedOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::SynthDataController::SelectNextOctave()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "SelectNextOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthDataController::SelectPreviousOctave()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "SelectPreviousOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SynthDataController::SetScale(int32_t  scaleIndex, ::VROSC::Scale  scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "SetScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Scale>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scaleIndex, scale);
}
inline ::VROSC::Scale VROSC::SynthDataController::GetScale(int32_t  scaleIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "GetScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::Scale, false>(this, ___internal_method, scaleIndex);
}
inline void VROSC::SynthDataController::SetStartNoteOffset(int32_t  scaleIndex, int32_t  startNoteOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "SetStartNoteOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scaleIndex, startNoteOffset);
}
inline int32_t VROSC::SynthDataController::GetStartNoteOffset(int32_t  scaleIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "GetStartNoteOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, scaleIndex);
}
inline void VROSC::SynthDataController::SetIsScaleRowLocked(int32_t  scaleIndex, bool  locked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "SetIsScaleRowLocked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scaleIndex, locked);
}
inline bool VROSC::SynthDataController::IsScaleRowLocked(int32_t  scaleIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "IsScaleRowLocked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, scaleIndex);
}
inline void VROSC::SynthDataController::SetIsScaleRowCustomized(int32_t  scaleIndex, bool  customized)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "SetIsScaleRowCustomized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scaleIndex, customized);
}
inline bool VROSC::SynthDataController::IsScaleRowCustomized(int32_t  scaleIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                        "IsScaleRowCustomized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, scaleIndex);
}
inline bool VROSC::SynthDataController::get_Quantize()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::SynthDataController::set_Quantize(bool  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t VROSC::SynthDataController::get_QuantizeTolerance()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                    22
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::SynthDataController::set_QuantizeTolerance(float_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                    23
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t VROSC::SynthDataController::get_QuantizeBeatDivision()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                    24
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::SynthDataController::set_QuantizeBeatDivision(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                    25
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::SynthDataController::get_FrameIsActive()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                    26
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::SynthDataController::set_FrameIsActive(bool  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                    27
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::SynthDataController::get_HasBeenOpened()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                    18
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::SynthDataController::set_HasBeenOpened(bool  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                    19
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t VROSC::SynthDataController::get_Volume()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                    28
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::SynthDataController::set_Volume(float_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthDataController*>::get(),
                    29
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::SynthDataController* VROSC::SynthDataController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SynthDataController*>());
}
// Ctor Parameters []
constexpr ::VROSC::SynthDataController::SynthDataController()   {
}
