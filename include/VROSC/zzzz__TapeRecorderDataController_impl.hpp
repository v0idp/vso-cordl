#pragma once
// IWYU pragma private; include "VROSC/TapeRecorderDataController.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__ToolDataController_impl.hpp"
#include "VROSC/zzzz__TapeRecorderDataController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__TapeRecorderDataController_def.hpp"
#include "VROSC/zzzz__TapeRecorderDataModel_def.hpp"
#include "VROSC/zzzz__TransformDataController_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
//  Writing Method size for method: ::VROSC::TapeRecorderDataController___c__DisplayClass44_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController___c__DisplayClass44_0::*)()>(&::VROSC::TapeRecorderDataController___c__DisplayClass44_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1874ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController___c__DisplayClass44_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController___c__DisplayClass44_0._SaveData_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController___c__DisplayClass44_0::*)()>(&::VROSC::TapeRecorderDataController___c__DisplayClass44_0::_SaveData_b__0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1874ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController___c__DisplayClass44_0*>::get(),
                        "<SaveData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController___c__DisplayClass44_0._SaveData_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController___c__DisplayClass44_0::*)(::VROSC::Error)>(&::VROSC::TapeRecorderDataController___c__DisplayClass44_0::_SaveData_b__1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x187502c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController___c__DisplayClass44_0*>::get(),
                        "<SaveData>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::TapeRecorderDataController*& VROSC::TapeRecorderDataController___c__DisplayClass44_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::TapeRecorderDataController* const& VROSC::TapeRecorderDataController___c__DisplayClass44_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::TapeRecorderDataController___c__DisplayClass44_0::__cordl_internal_set___4__this(::VROSC::TapeRecorderDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::TapeRecorderDataController___c__DisplayClass44_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::TapeRecorderDataController___c__DisplayClass44_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::TapeRecorderDataController___c__DisplayClass44_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::TapeRecorderDataController___c__DisplayClass44_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController___c__DisplayClass44_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderDataController___c__DisplayClass44_0::_SaveData_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController___c__DisplayClass44_0*>::get(),
                        "<SaveData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderDataController___c__DisplayClass44_0::_SaveData_b__1(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController___c__DisplayClass44_0*>::get(),
                        "<SaveData>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::VROSC::TapeRecorderDataController___c__DisplayClass44_0* VROSC::TapeRecorderDataController___c__DisplayClass44_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TapeRecorderDataController___c__DisplayClass44_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::TapeRecorderDataController___c__DisplayClass44_0::TapeRecorderDataController___c__DisplayClass44_0()   {
}
//  Writing Method size for method: ::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d::*)()>(&::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d::MoveNext)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x18751e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18754f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::VROSC::TapeRecorderDataController___c__DisplayClass45_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::TapeRecorderDataController___c__DisplayClass45_0*  __4__this, ::StringW  data, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->data = data;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d()   {
}
//  Writing Method size for method: ::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d::*)()>(&::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d::MoveNext)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x18754fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18757e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::VROSC::TapeRecorderDataController___c__DisplayClass45_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "channels", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::TapeRecorderDataController___c__DisplayClass45_0*  __4__this, int32_t  channels, int32_t  length, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->channels = channels;
this->length = length;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d()   {
}
//  Writing Method size for method: ::VROSC::TapeRecorderDataController___c__DisplayClass45_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController___c__DisplayClass45_0::*)()>(&::VROSC::TapeRecorderDataController___c__DisplayClass45_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1875048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController___c__DisplayClass45_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController___c__DisplayClass45_0._LoadData_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController___c__DisplayClass45_0::*)(::StringW)>(&::VROSC::TapeRecorderDataController___c__DisplayClass45_0::_LoadData_b__0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1875050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController___c__DisplayClass45_0*>::get(),
                        "<LoadData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController___c__DisplayClass45_0._LoadData_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController___c__DisplayClass45_0::*)(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, int32_t, int32_t)>(&::VROSC::TapeRecorderDataController___c__DisplayClass45_0::_LoadData_b__1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18750e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController___c__DisplayClass45_0*>::get(),
                        "<LoadData>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController___c__DisplayClass45_0._LoadData_b__2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController___c__DisplayClass45_0::*)(::VROSC::Error)>(&::VROSC::TapeRecorderDataController___c__DisplayClass45_0::_LoadData_b__2)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1875188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController___c__DisplayClass45_0*>::get(),
                        "<LoadData>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::TapeRecorderDataController*& VROSC::TapeRecorderDataController___c__DisplayClass45_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::TapeRecorderDataController* const& VROSC::TapeRecorderDataController___c__DisplayClass45_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::TapeRecorderDataController___c__DisplayClass45_0::__cordl_internal_set___4__this(::VROSC::TapeRecorderDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::TapeRecorderDataController___c__DisplayClass45_0::__cordl_internal_get_sessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr ::StringW const& VROSC::TapeRecorderDataController___c__DisplayClass45_0::__cordl_internal_get_sessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr void VROSC::TapeRecorderDataController___c__DisplayClass45_0::__cordl_internal_set_sessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::TapeRecorderDataController___c__DisplayClass45_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::TapeRecorderDataController___c__DisplayClass45_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::TapeRecorderDataController___c__DisplayClass45_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_3<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>,int32_t,int32_t>*& VROSC::TapeRecorderDataController___c__DisplayClass45_0::__cordl_internal_get___9__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr ::System::Action_3<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>,int32_t,int32_t>* const& VROSC::TapeRecorderDataController___c__DisplayClass45_0::__cordl_internal_get___9__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr void VROSC::TapeRecorderDataController___c__DisplayClass45_0::__cordl_internal_set___9__1(::System::Action_3<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>,int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::TapeRecorderDataController___c__DisplayClass45_0::__cordl_internal_get___9__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__2;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::TapeRecorderDataController___c__DisplayClass45_0::__cordl_internal_get___9__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__2;
}
constexpr void VROSC::TapeRecorderDataController___c__DisplayClass45_0::__cordl_internal_set___9__2(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::TapeRecorderDataController___c__DisplayClass45_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController___c__DisplayClass45_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderDataController___c__DisplayClass45_0::_LoadData_b__0(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController___c__DisplayClass45_0*>::get(),
                        "<LoadData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void VROSC::TapeRecorderDataController___c__DisplayClass45_0::_LoadData_b__1(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  length, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController___c__DisplayClass45_0*>::get(),
                        "<LoadData>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioData, length, channels);
}
inline void VROSC::TapeRecorderDataController___c__DisplayClass45_0::_LoadData_b__2(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController___c__DisplayClass45_0*>::get(),
                        "<LoadData>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::VROSC::TapeRecorderDataController___c__DisplayClass45_0* VROSC::TapeRecorderDataController___c__DisplayClass45_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TapeRecorderDataController___c__DisplayClass45_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::TapeRecorderDataController___c__DisplayClass45_0::TapeRecorderDataController___c__DisplayClass45_0()   {
}
//  Writing Method size for method: ::VROSC::TapeRecorderDataController___c__DisplayClass45_1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController___c__DisplayClass45_1::*)()>(&::VROSC::TapeRecorderDataController___c__DisplayClass45_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18757dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController___c__DisplayClass45_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController___c__DisplayClass45_1._LoadData_b__3
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController___c__DisplayClass45_1::*)()>(&::VROSC::TapeRecorderDataController___c__DisplayClass45_1::_LoadData_b__3)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x18757f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController___c__DisplayClass45_1*>::get(),
                        "<LoadData>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::TapeRecorderDataController___c__DisplayClass45_1::__cordl_internal_get_channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
constexpr int32_t const& VROSC::TapeRecorderDataController___c__DisplayClass45_1::__cordl_internal_get_channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
constexpr void VROSC::TapeRecorderDataController___c__DisplayClass45_1::__cordl_internal_set_channels(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channels = value;
}
constexpr int32_t& VROSC::TapeRecorderDataController___c__DisplayClass45_1::__cordl_internal_get_length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___length;
}
constexpr int32_t const& VROSC::TapeRecorderDataController___c__DisplayClass45_1::__cordl_internal_get_length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___length;
}
constexpr void VROSC::TapeRecorderDataController___c__DisplayClass45_1::__cordl_internal_set_length(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___length = value;
}
constexpr ::VROSC::TapeRecorderDataController___c__DisplayClass45_0*& VROSC::TapeRecorderDataController___c__DisplayClass45_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::VROSC::TapeRecorderDataController___c__DisplayClass45_0* const& VROSC::TapeRecorderDataController___c__DisplayClass45_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void VROSC::TapeRecorderDataController___c__DisplayClass45_1::__cordl_internal_set_CS$__8__locals1(::VROSC::TapeRecorderDataController___c__DisplayClass45_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::TapeRecorderDataController___c__DisplayClass45_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController___c__DisplayClass45_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderDataController___c__DisplayClass45_1::_LoadData_b__3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController___c__DisplayClass45_1*>::get(),
                        "<LoadData>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TapeRecorderDataController___c__DisplayClass45_1* VROSC::TapeRecorderDataController___c__DisplayClass45_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TapeRecorderDataController___c__DisplayClass45_1*>());
}
// Ctor Parameters []
constexpr ::VROSC::TapeRecorderDataController___c__DisplayClass45_1::TapeRecorderDataController___c__DisplayClass45_1()   {
}
//  Writing Method size for method: ::VROSC::TapeRecorderDataController___c__DisplayClass46_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController___c__DisplayClass46_0::*)()>(&::VROSC::TapeRecorderDataController___c__DisplayClass46_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18758c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController___c__DisplayClass46_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController___c__DisplayClass46_0._SaveAudioPreview_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController___c__DisplayClass46_0::*)()>(&::VROSC::TapeRecorderDataController___c__DisplayClass46_0::_SaveAudioPreview_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x18758cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController___c__DisplayClass46_0*>::get(),
                        "<SaveAudioPreview>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<bool,float_t>*& VROSC::TapeRecorderDataController___c__DisplayClass46_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_2<bool,float_t>* const& VROSC::TapeRecorderDataController___c__DisplayClass46_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::TapeRecorderDataController___c__DisplayClass46_0::__cordl_internal_set_onSuccess(::System::Action_2<bool,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::TapeRecorderDataController___c__DisplayClass46_0::__cordl_internal_get_normalizeMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalizeMultiplier;
}
constexpr float_t const& VROSC::TapeRecorderDataController___c__DisplayClass46_0::__cordl_internal_get_normalizeMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalizeMultiplier;
}
constexpr void VROSC::TapeRecorderDataController___c__DisplayClass46_0::__cordl_internal_set_normalizeMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalizeMultiplier = value;
}
inline void VROSC::TapeRecorderDataController___c__DisplayClass46_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController___c__DisplayClass46_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderDataController___c__DisplayClass46_0::_SaveAudioPreview_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController___c__DisplayClass46_0*>::get(),
                        "<SaveAudioPreview>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TapeRecorderDataController___c__DisplayClass46_0* VROSC::TapeRecorderDataController___c__DisplayClass46_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TapeRecorderDataController___c__DisplayClass46_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::TapeRecorderDataController___c__DisplayClass46_0::TapeRecorderDataController___c__DisplayClass46_0()   {
}
//  Writing Method size for method: ::VROSC::TapeRecorderDataController__ClearAudioData_d__30.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController__ClearAudioData_d__30::*)()>(&::VROSC::TapeRecorderDataController__ClearAudioData_d__30::MoveNext)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x18758f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController__ClearAudioData_d__30>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController__ClearAudioData_d__30.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController__ClearAudioData_d__30::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::TapeRecorderDataController__ClearAudioData_d__30::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1875b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController__ClearAudioData_d__30>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::TapeRecorderDataController__ClearAudioData_d__30::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController__ClearAudioData_d__30>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderDataController__ClearAudioData_d__30::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController__ClearAudioData_d__30>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::TapeRecorderDataController__ClearAudioData_d__30::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::TapeRecorderDataController__ClearAudioData_d__30::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::VROSC::TapeRecorderDataController*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::TapeRecorderDataController__ClearAudioData_d__30::TapeRecorderDataController__ClearAudioData_d__30(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::VROSC::TapeRecorderDataController*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::TapeRecorderDataController__ClearAudioData_d__30::TapeRecorderDataController__ClearAudioData_d__30()   {
}
//  Writing Method size for method: ::VROSC::TapeRecorderDataController__LoadData_d__45.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController__LoadData_d__45::*)()>(&::VROSC::TapeRecorderDataController__LoadData_d__45::MoveNext)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x1875bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController__LoadData_d__45>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController__LoadData_d__45.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController__LoadData_d__45::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::TapeRecorderDataController__LoadData_d__45::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1875e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController__LoadData_d__45>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::TapeRecorderDataController__LoadData_d__45::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController__LoadData_d__45>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderDataController__LoadData_d__45::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController__LoadData_d__45>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::TapeRecorderDataController__LoadData_d__45::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::TapeRecorderDataController__LoadData_d__45::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::VROSC::TapeRecorderDataController*", modifiers: "", def_value: Some("{}") }, CppParam { name: "sessionId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty: "::VROSC::TapeRecorderDataController___c__DisplayClass45_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::TapeRecorderDataController__LoadData_d__45::TapeRecorderDataController__LoadData_d__45(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::TapeRecorderDataController*  __4__this, ::StringW  sessionId, ::System::Action*  onSuccess, ::VROSC::TapeRecorderDataController___c__DisplayClass45_0*  __8__1, ::System::Action_1<::VROSC::Error>*  onFailure, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->sessionId = sessionId;
this->onSuccess = onSuccess;
this->__8__1 = __8__1;
this->onFailure = onFailure;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::TapeRecorderDataController__LoadData_d__45::TapeRecorderDataController__LoadData_d__45()   {
}
//  Writing Method size for method: ::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46::*)()>(&::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46::MoveNext)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x1875e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x18761fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::TapeRecorderDataController__SaveAudioPreview_d__46::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderDataController__SaveAudioPreview_d__46::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::TapeRecorderDataController__SaveAudioPreview_d__46::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::TapeRecorderDataController__SaveAudioPreview_d__46::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "onSuccess", ty: "::System::Action_2<bool,float_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::VROSC::TapeRecorderDataController*", modifiers: "", def_value: Some("{}") }, CppParam { name: "folderName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "useOgg", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "onProgress", ty: "::System::Action_1<float_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46::TapeRecorderDataController__SaveAudioPreview_d__46(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Action_2<bool,float_t>*  onSuccess, ::VROSC::TapeRecorderDataController*  __4__this, ::StringW  folderName, ::StringW  fileName, bool  useOgg, ::System::Action_1<::VROSC::Error>*  onFailure, ::System::Action_1<float_t>*  onProgress, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->onSuccess = onSuccess;
this->__4__this = __4__this;
this->folderName = folderName;
this->fileName = fileName;
this->useOgg = useOgg;
this->onFailure = onFailure;
this->onProgress = onProgress;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46::TapeRecorderDataController__SaveAudioPreview_d__46()   {
}
//  Writing Method size for method: ::VROSC::TapeRecorderDataController__SaveData_d__44.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController__SaveData_d__44::*)()>(&::VROSC::TapeRecorderDataController__SaveData_d__44::MoveNext)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x1876264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController__SaveData_d__44>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController__SaveData_d__44.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController__SaveData_d__44::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::TapeRecorderDataController__SaveData_d__44::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x187662c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController__SaveData_d__44>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::TapeRecorderDataController__SaveData_d__44::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController__SaveData_d__44>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderDataController__SaveData_d__44::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController__SaveData_d__44>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::TapeRecorderDataController__SaveData_d__44::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::TapeRecorderDataController__SaveData_d__44::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::VROSC::TapeRecorderDataController*", modifiers: "", def_value: Some("{}") }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "sessionName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::TapeRecorderDataController__SaveData_d__44::TapeRecorderDataController__SaveData_d__44(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::TapeRecorderDataController*  __4__this, ::System::Action_1<::VROSC::Error>*  onFailure, ::StringW  sessionName, ::System::Action*  onSuccess, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->onFailure = onFailure;
this->sessionName = sessionName;
this->onSuccess = onSuccess;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::TapeRecorderDataController__SaveData_d__44::TapeRecorderDataController__SaveData_d__44()   {
}
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.get_DataModel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::TapeRecorderDataModel* (::VROSC::TapeRecorderDataController::*)()>(&::VROSC::TapeRecorderDataController::get_DataModel)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1874748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "get_DataModel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.get_MaxRecordingLengthSeconds
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::TapeRecorderDataController::*)()>(&::VROSC::TapeRecorderDataController::get_MaxRecordingLengthSeconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18747c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "get_MaxRecordingLengthSeconds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.set_MaxRecordingLengthSeconds
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController::*)(float_t)>(&::VROSC::TapeRecorderDataController::set_MaxRecordingLengthSeconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18747c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "set_MaxRecordingLengthSeconds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.get_RecordingLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::TapeRecorderDataController::*)()>(&::VROSC::TapeRecorderDataController::get_RecordingLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18747d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "get_RecordingLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.set_RecordingLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController::*)(int32_t)>(&::VROSC::TapeRecorderDataController::set_RecordingLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18747d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "set_RecordingLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.get_RecordingStartSample
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::TapeRecorderDataController::*)()>(&::VROSC::TapeRecorderDataController::get_RecordingStartSample)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18747e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "get_RecordingStartSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.set_RecordingStartSample
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController::*)(int32_t)>(&::VROSC::TapeRecorderDataController::set_RecordingStartSample)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18747e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "set_RecordingStartSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.get_RecordingEndSample
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::TapeRecorderDataController::*)()>(&::VROSC::TapeRecorderDataController::get_RecordingEndSample)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18747f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "get_RecordingEndSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.set_RecordingEndSample
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController::*)(int32_t)>(&::VROSC::TapeRecorderDataController::set_RecordingEndSample)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18747f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "set_RecordingEndSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.get_CurrentAudioData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> (::VROSC::TapeRecorderDataController::*)()>(&::VROSC::TapeRecorderDataController::get_CurrentAudioData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1874800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "get_CurrentAudioData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.set_CurrentAudioData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController::*)(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>)>(&::VROSC::TapeRecorderDataController::set_CurrentAudioData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1874808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "set_CurrentAudioData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.get_HasAudioData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::TapeRecorderDataController::*)()>(&::VROSC::TapeRecorderDataController::get_HasAudioData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1874810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "get_HasAudioData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.set_HasAudioData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController::*)(bool)>(&::VROSC::TapeRecorderDataController::set_HasAudioData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1874818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "set_HasAudioData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.get_TransformData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::TransformDataController* (::VROSC::TapeRecorderDataController::*)()>(&::VROSC::TapeRecorderDataController::get_TransformData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1874824;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController::*)()>(&::VROSC::TapeRecorderDataController::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x187482c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.ClearAudioData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::VROSC::TapeRecorderDataController::*)()>(&::VROSC::TapeRecorderDataController::ClearAudioData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18749fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "ClearAudioData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.get_IsOpen
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::TapeRecorderDataController::*)()>(&::VROSC::TapeRecorderDataController::get_IsOpen)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1874abc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.set_IsOpen
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController::*)(bool)>(&::VROSC::TapeRecorderDataController::set_IsOpen)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1874ae0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.get_HasBeenOpened
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::TapeRecorderDataController::*)()>(&::VROSC::TapeRecorderDataController::get_HasBeenOpened)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1874b20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.set_HasBeenOpened
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController::*)(bool)>(&::VROSC::TapeRecorderDataController::set_HasBeenOpened)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1874b3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.ApplyDefaults
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController::*)(::VROSC::WidgetSettings*)>(&::VROSC::TapeRecorderDataController::ApplyDefaults)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1874b74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.get_NormalizeMultiplier
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::TapeRecorderDataController::*)()>(&::VROSC::TapeRecorderDataController::get_NormalizeMultiplier)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1874c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "get_NormalizeMultiplier",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.set_NormalizeMultiplier
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController::*)(float_t)>(&::VROSC::TapeRecorderDataController::set_NormalizeMultiplier)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1874c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "set_NormalizeMultiplier",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.get_UseAsPreview
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::TapeRecorderDataController::*)()>(&::VROSC::TapeRecorderDataController::get_UseAsPreview)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1874c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "get_UseAsPreview",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.set_UseAsPreview
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController::*)(bool)>(&::VROSC::TapeRecorderDataController::set_UseAsPreview)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1874c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "set_UseAsPreview",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.SaveData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController::*)(::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::TapeRecorderDataController::SaveData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1874cc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.LoadData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController::*)(::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::TapeRecorderDataController::LoadData)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1874d74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController.SaveAudioPreview
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::VROSC::TapeRecorderDataController::*)(::StringW, ::StringW, bool, ::System::Action_2<bool,float_t>*, ::System::Action_1<::VROSC::Error>*, ::System::Action_1<float_t>*)>(&::VROSC::TapeRecorderDataController::SaveAudioPreview)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1874e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "SaveAudioPreview",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<bool,float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderDataController._ClearAudioData_b__30_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderDataController::*)()>(&::VROSC::TapeRecorderDataController::_ClearAudioData_b__30_0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1874f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "<ClearAudioData>b__30_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::TapeRecorderDataController::__cordl_internal_get__MaxRecordingLengthSeconds_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxRecordingLengthSeconds_k__BackingField;
}
constexpr float_t const& VROSC::TapeRecorderDataController::__cordl_internal_get__MaxRecordingLengthSeconds_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxRecordingLengthSeconds_k__BackingField;
}
constexpr void VROSC::TapeRecorderDataController::__cordl_internal_set__MaxRecordingLengthSeconds_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaxRecordingLengthSeconds_k__BackingField = value;
}
constexpr int32_t& VROSC::TapeRecorderDataController::__cordl_internal_get__RecordingLength_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecordingLength_k__BackingField;
}
constexpr int32_t const& VROSC::TapeRecorderDataController::__cordl_internal_get__RecordingLength_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecordingLength_k__BackingField;
}
constexpr void VROSC::TapeRecorderDataController::__cordl_internal_set__RecordingLength_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RecordingLength_k__BackingField = value;
}
constexpr int32_t& VROSC::TapeRecorderDataController::__cordl_internal_get__RecordingStartSample_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecordingStartSample_k__BackingField;
}
constexpr int32_t const& VROSC::TapeRecorderDataController::__cordl_internal_get__RecordingStartSample_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecordingStartSample_k__BackingField;
}
constexpr void VROSC::TapeRecorderDataController::__cordl_internal_set__RecordingStartSample_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RecordingStartSample_k__BackingField = value;
}
constexpr int32_t& VROSC::TapeRecorderDataController::__cordl_internal_get__RecordingEndSample_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecordingEndSample_k__BackingField;
}
constexpr int32_t const& VROSC::TapeRecorderDataController::__cordl_internal_get__RecordingEndSample_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecordingEndSample_k__BackingField;
}
constexpr void VROSC::TapeRecorderDataController::__cordl_internal_set__RecordingEndSample_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RecordingEndSample_k__BackingField = value;
}
constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>& VROSC::TapeRecorderDataController::__cordl_internal_get__CurrentAudioData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentAudioData_k__BackingField;
}
constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> const& VROSC::TapeRecorderDataController::__cordl_internal_get__CurrentAudioData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentAudioData_k__BackingField;
}
constexpr void VROSC::TapeRecorderDataController::__cordl_internal_set__CurrentAudioData_k__BackingField(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CurrentAudioData_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::TapeRecorderDataController::__cordl_internal_get__HasAudioData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasAudioData_k__BackingField;
}
constexpr bool const& VROSC::TapeRecorderDataController::__cordl_internal_get__HasAudioData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasAudioData_k__BackingField;
}
constexpr void VROSC::TapeRecorderDataController::__cordl_internal_set__HasAudioData_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasAudioData_k__BackingField = value;
}
constexpr ::VROSC::TransformDataController*& VROSC::TapeRecorderDataController::__cordl_internal_get__transformData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformData;
}
constexpr ::VROSC::TransformDataController* const& VROSC::TapeRecorderDataController::__cordl_internal_get__transformData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformData;
}
constexpr void VROSC::TapeRecorderDataController::__cordl_internal_set__transformData(::VROSC::TransformDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transformData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::VROSC::TapeRecorderDataModel* VROSC::TapeRecorderDataController::get_DataModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "get_DataModel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::TapeRecorderDataModel*, false>(this, ___internal_method);
}
inline float_t VROSC::TapeRecorderDataController::get_MaxRecordingLengthSeconds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "get_MaxRecordingLengthSeconds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderDataController::set_MaxRecordingLengthSeconds(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "set_MaxRecordingLengthSeconds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t VROSC::TapeRecorderDataController::get_RecordingLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "get_RecordingLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderDataController::set_RecordingLength(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "set_RecordingLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t VROSC::TapeRecorderDataController::get_RecordingStartSample()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "get_RecordingStartSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderDataController::set_RecordingStartSample(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "set_RecordingStartSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t VROSC::TapeRecorderDataController::get_RecordingEndSample()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "get_RecordingEndSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderDataController::set_RecordingEndSample(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "set_RecordingEndSample",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> VROSC::TapeRecorderDataController::get_CurrentAudioData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "get_CurrentAudioData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderDataController::set_CurrentAudioData(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "set_CurrentAudioData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::TapeRecorderDataController::get_HasAudioData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "get_HasAudioData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderDataController::set_HasAudioData(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "set_HasAudioData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::TransformDataController* VROSC::TapeRecorderDataController::get_TransformData()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<::VROSC::TransformDataController*, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderDataController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* VROSC::TapeRecorderDataController::ClearAudioData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "ClearAudioData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline bool VROSC::TapeRecorderDataController::get_IsOpen()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderDataController::set_IsOpen(bool  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                    18
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::TapeRecorderDataController::get_HasBeenOpened()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                    19
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderDataController::set_HasBeenOpened(bool  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::TapeRecorderDataController::ApplyDefaults(::VROSC::WidgetSettings*  widgetDefaultSettings)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, widgetDefaultSettings);
}
inline float_t VROSC::TapeRecorderDataController::get_NormalizeMultiplier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "get_NormalizeMultiplier",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderDataController::set_NormalizeMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "set_NormalizeMultiplier",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::TapeRecorderDataController::get_UseAsPreview()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "get_UseAsPreview",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderDataController::set_UseAsPreview(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "set_UseAsPreview",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::TapeRecorderDataController::SaveData(::StringW  sessionName, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionName, onSuccess, onFailure);
}
inline void VROSC::TapeRecorderDataController::LoadData(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, onSuccess, onFailure);
}
inline ::System::Threading::Tasks::Task* VROSC::TapeRecorderDataController::SaveAudioPreview(::StringW  folderName, ::StringW  fileName, bool  useOgg, ::System::Action_2<bool,float_t>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure, ::System::Action_1<float_t>*  onProgress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "SaveAudioPreview",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<bool,float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, folderName, fileName, useOgg, onSuccess, onFailure, onProgress);
}
inline void VROSC::TapeRecorderDataController::_ClearAudioData_b__30_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderDataController*>::get(),
                        "<ClearAudioData>b__30_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TapeRecorderDataController* VROSC::TapeRecorderDataController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TapeRecorderDataController*>());
}
// Ctor Parameters []
constexpr ::VROSC::TapeRecorderDataController::TapeRecorderDataController()   {
}
