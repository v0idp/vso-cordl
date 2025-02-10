#pragma once
// IWYU pragma private; include "VROSC/LoopStationRecorder.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__SoundSource_impl.hpp"
#include "VROSC/zzzz__WidgetSettings_impl.hpp"
#include "VROSC/zzzz__LoopStationRecorder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "VROSC/zzzz__CurrentlyRecordingLoop_def.hpp"
#include "VROSC/zzzz__LoopStationRecorder_def.hpp"
#include "VROSC/zzzz__LoopStationRecordingUI_def.hpp"
#include "VROSC/zzzz__LoopStation_def.hpp"
#include "VROSC/zzzz__MicrophoneDeviceManager_def.hpp"
#include "VROSC/zzzz__PatchSettings_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::LoopStationRecorder_RecordingState::LoopStationRecorder_RecordingState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationRecorder_RecordingState::LoopStationRecorder_RecordingState()   {
}
constexpr ::VROSC::LoopStationRecorder_RecordingState  VROSC::LoopStationRecorder_RecordingState::Stopped{static_cast<int32_t>(0x0)};
constexpr ::VROSC::LoopStationRecorder_RecordingState  VROSC::LoopStationRecorder_RecordingState::WaitingForNotes{static_cast<int32_t>(0x1)};
constexpr ::VROSC::LoopStationRecorder_RecordingState  VROSC::LoopStationRecorder_RecordingState::Recording{static_cast<int32_t>(0x2)};
constexpr ::VROSC::LoopStationRecorder_RecordingState  VROSC::LoopStationRecorder_RecordingState::FinishingUp{static_cast<int32_t>(0x3)};
constexpr ::VROSC::LoopStationRecorder_RecordingState  VROSC::LoopStationRecorder_RecordingState::Playing{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d::*)()>(&::VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d::MoveNext)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x18a8d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18a8ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::VROSC::LoopStationRecorder___c__DisplayClass37_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::LoopStationRecorder___c__DisplayClass37_0*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d()   {
}
//  Writing Method size for method: ::VROSC::LoopStationRecorder___c__DisplayClass37_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder___c__DisplayClass37_0::*)()>(&::VROSC::LoopStationRecorder___c__DisplayClass37_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a8ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder___c__DisplayClass37_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder___c__DisplayClass37_0._ConcludeRecording_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder___c__DisplayClass37_0::*)()>(&::VROSC::LoopStationRecorder___c__DisplayClass37_0::_ConcludeRecording_b__0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18a8ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder___c__DisplayClass37_0*>::get(),
                        "<ConcludeRecording>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::LoopStationRecorder>& VROSC::LoopStationRecorder___c__DisplayClass37_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::LoopStationRecorder> const& VROSC::LoopStationRecorder___c__DisplayClass37_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::LoopStationRecorder___c__DisplayClass37_0::__cordl_internal_set___4__this(::UnityW<::VROSC::LoopStationRecorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::LoopStationRecorder___c__DisplayClass37_0::__cordl_internal_get_tailIsDoneRecording()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tailIsDoneRecording;
}
constexpr bool const& VROSC::LoopStationRecorder___c__DisplayClass37_0::__cordl_internal_get_tailIsDoneRecording() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tailIsDoneRecording;
}
constexpr void VROSC::LoopStationRecorder___c__DisplayClass37_0::__cordl_internal_set_tailIsDoneRecording(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tailIsDoneRecording = value;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& VROSC::LoopStationRecorder___c__DisplayClass37_0::__cordl_internal_get_instrumentEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instrumentEvents;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& VROSC::LoopStationRecorder___c__DisplayClass37_0::__cordl_internal_get_instrumentEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instrumentEvents;
}
constexpr void VROSC::LoopStationRecorder___c__DisplayClass37_0::__cordl_internal_set_instrumentEvents(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___instrumentEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>& VROSC::LoopStationRecorder___c__DisplayClass37_0::__cordl_internal_get_fullRecordingWithTail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullRecordingWithTail;
}
constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> const& VROSC::LoopStationRecorder___c__DisplayClass37_0::__cordl_internal_get_fullRecordingWithTail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullRecordingWithTail;
}
constexpr void VROSC::LoopStationRecorder___c__DisplayClass37_0::__cordl_internal_set_fullRecordingWithTail(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fullRecordingWithTail)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>& VROSC::LoopStationRecorder___c__DisplayClass37_0::__cordl_internal_get_audioData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioData;
}
constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> const& VROSC::LoopStationRecorder___c__DisplayClass37_0::__cordl_internal_get_audioData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioData;
}
constexpr void VROSC::LoopStationRecorder___c__DisplayClass37_0::__cordl_internal_set_audioData(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::LoopStationRecorder___c__DisplayClass37_0::__cordl_internal_get_playbackLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackLength;
}
constexpr int32_t const& VROSC::LoopStationRecorder___c__DisplayClass37_0::__cordl_internal_get_playbackLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playbackLength;
}
constexpr void VROSC::LoopStationRecorder___c__DisplayClass37_0::__cordl_internal_set_playbackLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playbackLength = value;
}
inline void VROSC::LoopStationRecorder___c__DisplayClass37_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder___c__DisplayClass37_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecorder___c__DisplayClass37_0::_ConcludeRecording_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder___c__DisplayClass37_0*>::get(),
                        "<ConcludeRecording>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopStationRecorder___c__DisplayClass37_0* VROSC::LoopStationRecorder___c__DisplayClass37_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopStationRecorder___c__DisplayClass37_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationRecorder___c__DisplayClass37_0::LoopStationRecorder___c__DisplayClass37_0()   {
}
//  Writing Method size for method: ::VROSC::LoopStationRecorder__ConcludeRecording_d__37.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder__ConcludeRecording_d__37::*)()>(&::VROSC::LoopStationRecorder__ConcludeRecording_d__37::MoveNext)> {
  constexpr static std::size_t size = 0xa3c;
  constexpr static std::size_t addrs = 0x18a9008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder__ConcludeRecording_d__37>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder__ConcludeRecording_d__37.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder__ConcludeRecording_d__37::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::LoopStationRecorder__ConcludeRecording_d__37::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18a9a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder__ConcludeRecording_d__37>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::LoopStationRecorder__ConcludeRecording_d__37::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder__ConcludeRecording_d__37>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecorder__ConcludeRecording_d__37::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder__ConcludeRecording_d__37>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::LoopStationRecorder__ConcludeRecording_d__37::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::LoopStationRecorder__ConcludeRecording_d__37::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::LoopStationRecorder>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty: "::VROSC::LoopStationRecorder___c__DisplayClass37_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_concludeTime_5__2", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_tailInSeconds_5__3", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::LoopStationRecorder__ConcludeRecording_d__37::LoopStationRecorder__ConcludeRecording_d__37(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::LoopStationRecorder>  __4__this, ::VROSC::LoopStationRecorder___c__DisplayClass37_0*  __8__1, double_t  _concludeTime_5__2, double_t  _tailInSeconds_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__8__1 = __8__1;
this->_concludeTime_5__2 = _concludeTime_5__2;
this->_tailInSeconds_5__3 = _tailInSeconds_5__3;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationRecorder__ConcludeRecording_d__37::LoopStationRecorder__ConcludeRecording_d__37()   {
}
//  Writing Method size for method: ::VROSC::LoopStationRecorder__ScheduleButtonPress_d__29.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder__ScheduleButtonPress_d__29::*)()>(&::VROSC::LoopStationRecorder__ScheduleButtonPress_d__29::MoveNext)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x18a9a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder__ScheduleButtonPress_d__29>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder__ScheduleButtonPress_d__29.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder__ScheduleButtonPress_d__29::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::LoopStationRecorder__ScheduleButtonPress_d__29::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18a9d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder__ScheduleButtonPress_d__29>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::LoopStationRecorder__ScheduleButtonPress_d__29::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder__ScheduleButtonPress_d__29>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecorder__ScheduleButtonPress_d__29::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder__ScheduleButtonPress_d__29>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::LoopStationRecorder__ScheduleButtonPress_d__29::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::LoopStationRecorder__ScheduleButtonPress_d__29::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::LoopStationRecorder>", modifiers: "", def_value: Some("{}") }, CppParam { name: "dspTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::LoopStationRecorder__ScheduleButtonPress_d__29::LoopStationRecorder__ScheduleButtonPress_d__29(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::LoopStationRecorder>  __4__this, double_t  dspTime, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->dspTime = dspTime;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationRecorder__ScheduleButtonPress_d__29::LoopStationRecorder__ScheduleButtonPress_d__29()   {
}
//  Writing Method size for method: ::VROSC::LoopStationRecorder__StartRecording_d__34.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder__StartRecording_d__34::*)()>(&::VROSC::LoopStationRecorder__StartRecording_d__34::MoveNext)> {
  constexpr static std::size_t size = 0xa14;
  constexpr static std::size_t addrs = 0x18a9d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder__StartRecording_d__34>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder__StartRecording_d__34.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder__StartRecording_d__34::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::LoopStationRecorder__StartRecording_d__34::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18aa74c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder__StartRecording_d__34>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::LoopStationRecorder__StartRecording_d__34::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder__StartRecording_d__34>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecorder__StartRecording_d__34::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder__StartRecording_d__34>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::LoopStationRecorder__StartRecording_d__34::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::LoopStationRecorder__StartRecording_d__34::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::LoopStationRecorder>", modifiers: "", def_value: Some("{}") }, CppParam { name: "instrumentId", ty: "::VROSC::WidgetSettings_Identifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "patchSettings", ty: "::VROSC::PatchSettings*", modifiers: "", def_value: Some("{}") }, CppParam { name: "predictedDspTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_usingOverdub_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_loopLength_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_audioData_5__4", ty: "::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_trackID_5__5", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::LoopStationRecorder__StartRecording_d__34::LoopStationRecorder__StartRecording_d__34(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::LoopStationRecorder>  __4__this, ::VROSC::WidgetSettings_Identifier  instrumentId, ::VROSC::PatchSettings*  patchSettings, double_t  predictedDspTime, bool  _usingOverdub_5__2, int32_t  _loopLength_5__3, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  _audioData_5__4, ::StringW  _trackID_5__5, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->instrumentId = instrumentId;
this->patchSettings = patchSettings;
this->predictedDspTime = predictedDspTime;
this->_usingOverdub_5__2 = _usingOverdub_5__2;
this->_loopLength_5__3 = _loopLength_5__3;
this->_audioData_5__4 = _audioData_5__4;
this->_trackID_5__5 = _trackID_5__5;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationRecorder__StartRecording_d__34::LoopStationRecorder__StartRecording_d__34()   {
}
//  Writing Method size for method: ::VROSC::LoopStationRecorder.get_LoopStation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::LoopStation> (::VROSC::LoopStationRecorder::*)()>(&::VROSC::LoopStationRecorder::get_LoopStation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a74d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "get_LoopStation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.set_LoopStation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)(::VROSC::LoopStation*)>(&::VROSC::LoopStationRecorder::set_LoopStation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a74e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "set_LoopStation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.get_CurrentlyRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::CurrentlyRecordingLoop> (::VROSC::LoopStationRecorder::*)()>(&::VROSC::LoopStationRecorder::get_CurrentlyRecording)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a74e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "get_CurrentlyRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.get_State
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopStationRecorder_RecordingState (::VROSC::LoopStationRecorder::*)()>(&::VROSC::LoopStationRecorder::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a74f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "get_State",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.set_State
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)(::VROSC::LoopStationRecorder_RecordingState)>(&::VROSC::LoopStationRecorder::set_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a74f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "set_State",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationRecorder_RecordingState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)(::VROSC::LoopStation*)>(&::VROSC::LoopStationRecorder::Setup)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x18a7500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)()>(&::VROSC::LoopStationRecorder::OnDestroy)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x18a7724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.OnActivePatchChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)(::VROSC::PatchSettings*)>(&::VROSC::LoopStationRecorder::OnActivePatchChanged)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x18a7a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "OnActivePatchChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.UpdateLooperState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)()>(&::VROSC::LoopStationRecorder::UpdateLooperState)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18a6a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "UpdateLooperState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.RecordOrStop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)(::VROSC::Signal*)>(&::VROSC::LoopStationRecorder::RecordOrStop)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x18a7b00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "RecordOrStop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Signal*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.RecordOrStop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)()>(&::VROSC::LoopStationRecorder::RecordOrStop)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x18a7bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "RecordOrStop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.ScheduleButtonPress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)(double_t)>(&::VROSC::LoopStationRecorder::ScheduleButtonPress)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x18a7b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "ScheduleButtonPress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.StopRecordingByUser
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)(bool)>(&::VROSC::LoopStationRecorder::StopRecordingByUser)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18a7bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "StopRecordingByUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.PrepareForRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)()>(&::VROSC::LoopStationRecorder::PrepareForRecording)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18a8174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "PrepareForRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.CancelPreparingForRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)()>(&::VROSC::LoopStationRecorder::CancelPreparingForRecording)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x18a7fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "CancelPreparingForRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.StartRecordingMicrophone
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)()>(&::VROSC::LoopStationRecorder::StartRecordingMicrophone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18a83e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "StartRecordingMicrophone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.StartRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)(::VROSC::WidgetSettings_Identifier, ::VROSC::PatchSettings*, double_t)>(&::VROSC::LoopStationRecorder::StartRecording)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x18a83f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "StartRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.OnBPMChange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)(double_t)>(&::VROSC::LoopStationRecorder::OnBPMChange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18a84b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "OnBPMChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.CancelRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)()>(&::VROSC::LoopStationRecorder::CancelRecording)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x18a7c68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "CancelRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.ConcludeRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)()>(&::VROSC::LoopStationRecorder::ConcludeRecording)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18a7a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "ConcludeRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.GetLengthOfSilentStartOfRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::LoopStationRecorder::*)(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>)>(&::VROSC::LoopStationRecorder::GetLengthOfSilentStartOfRecording)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x18a84d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "GetLengthOfSilentStartOfRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.Rerecord
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)()>(&::VROSC::LoopStationRecorder::Rerecord)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18a2bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "Rerecord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.CancelRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)(bool)>(&::VROSC::LoopStationRecorder::CancelRecording)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x18a2c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "CancelRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.ReceiveRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>)>(&::VROSC::LoopStationRecorder::ReceiveRecording)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x18a85d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "ReceiveRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.Finish
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)()>(&::VROSC::LoopStationRecorder::Finish)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18a8660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "Finish",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.CopyAudioDataToLoopTrack
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, ::ByRef<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>)>(&::VROSC::LoopStationRecorder::CopyAudioDataToLoopTrack)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x18a8698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "CopyAudioDataToLoopTrack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.GetLatencyOffset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::LoopStationRecorder::*)()>(&::VROSC::LoopStationRecorder::GetLatencyOffset)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18a87ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "GetLatencyOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.CalculateGlobalSyncOffset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::LoopStationRecorder::*)(int32_t, int32_t)>(&::VROSC::LoopStationRecorder::CalculateGlobalSyncOffset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x18a88ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "CalculateGlobalSyncOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.PlayAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)()>(&::VROSC::LoopStationRecorder::PlayAll)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x18a88c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "PlayAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.SetToIdle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)()>(&::VROSC::LoopStationRecorder::SetToIdle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18a7f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "SetToIdle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.SetState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)(::VROSC::LoopStationRecorder_RecordingState)>(&::VROSC::LoopStationRecorder::SetState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18a8364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "SetState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationRecorder_RecordingState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.SetBPMUsingRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::LoopStationRecorder::*)(int32_t)>(&::VROSC::LoopStationRecorder::SetBPMUsingRecording)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18a88ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "SetBPMUsingRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.RoundRecordingLengthToBars
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::LoopStationRecorder::*)(int32_t)>(&::VROSC::LoopStationRecorder::RoundRecordingLengthToBars)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18a8aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "RoundRecordingLengthToBars",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder.GetMinimumRecordingLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::VROSC::LoopStationRecorder::GetMinimumRecordingLength)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18a8c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "GetMinimumRecordingLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecorder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationRecorder::*)()>(&::VROSC::LoopStationRecorder::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x18a8c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& VROSC::LoopStationRecorder::__cordl_internal_get_OnRerecord()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRerecord;
}
constexpr ::System::Action* const& VROSC::LoopStationRecorder::__cordl_internal_get_OnRerecord() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRerecord;
}
constexpr void VROSC::LoopStationRecorder::__cordl_internal_set_OnRerecord(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnRerecord)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopStation>& VROSC::LoopStationRecorder::__cordl_internal_get__LoopStation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoopStation_k__BackingField;
}
constexpr ::UnityW<::VROSC::LoopStation> const& VROSC::LoopStationRecorder::__cordl_internal_get__LoopStation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoopStation_k__BackingField;
}
constexpr void VROSC::LoopStationRecorder::__cordl_internal_set__LoopStation_k__BackingField(::UnityW<::VROSC::LoopStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____LoopStation_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopStationRecorder_RecordingState& VROSC::LoopStationRecorder::__cordl_internal_get__State_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr ::VROSC::LoopStationRecorder_RecordingState const& VROSC::LoopStationRecorder::__cordl_internal_get__State_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr void VROSC::LoopStationRecorder::__cordl_internal_set__State_k__BackingField(::VROSC::LoopStationRecorder_RecordingState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____State_k__BackingField = value;
}
constexpr ::UnityW<::VROSC::LoopStationRecordingUI>& VROSC::LoopStationRecorder::__cordl_internal_get__ui()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ui;
}
constexpr ::UnityW<::VROSC::LoopStationRecordingUI> const& VROSC::LoopStationRecorder::__cordl_internal_get__ui() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ui;
}
constexpr void VROSC::LoopStationRecorder::__cordl_internal_set__ui(::UnityW<::VROSC::LoopStationRecordingUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ui)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::CurrentlyRecordingLoop>& VROSC::LoopStationRecorder::__cordl_internal_get__currentRecording()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRecording;
}
constexpr ::UnityW<::VROSC::CurrentlyRecordingLoop> const& VROSC::LoopStationRecorder::__cordl_internal_get__currentRecording() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRecording;
}
constexpr void VROSC::LoopStationRecorder::__cordl_internal_set__currentRecording(::UnityW<::VROSC::CurrentlyRecordingLoop>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentRecording)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::LoopStationRecorder::__cordl_internal_get__buttonPressScheduled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonPressScheduled;
}
constexpr bool const& VROSC::LoopStationRecorder::__cordl_internal_get__buttonPressScheduled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonPressScheduled;
}
constexpr void VROSC::LoopStationRecorder::__cordl_internal_set__buttonPressScheduled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonPressScheduled = value;
}
constexpr ::VROSC::SoundSource& VROSC::LoopStationRecorder::__cordl_internal_get__currentRecordingSoundSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRecordingSoundSource;
}
constexpr ::VROSC::SoundSource const& VROSC::LoopStationRecorder::__cordl_internal_get__currentRecordingSoundSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRecordingSoundSource;
}
constexpr void VROSC::LoopStationRecorder::__cordl_internal_set__currentRecordingSoundSource(::VROSC::SoundSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentRecordingSoundSource = value;
}
constexpr int32_t& VROSC::LoopStationRecorder::__cordl_internal_get__recordingStartSample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingStartSample;
}
constexpr int32_t const& VROSC::LoopStationRecorder::__cordl_internal_get__recordingStartSample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingStartSample;
}
constexpr void VROSC::LoopStationRecorder::__cordl_internal_set__recordingStartSample(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordingStartSample = value;
}
constexpr ::UnityW<::VROSC::MicrophoneDeviceManager>& VROSC::LoopStationRecorder::__cordl_internal_get__microphoneDeviceManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneDeviceManager;
}
constexpr ::UnityW<::VROSC::MicrophoneDeviceManager> const& VROSC::LoopStationRecorder::__cordl_internal_get__microphoneDeviceManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneDeviceManager;
}
constexpr void VROSC::LoopStationRecorder::__cordl_internal_set__microphoneDeviceManager(::UnityW<::VROSC::MicrophoneDeviceManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____microphoneDeviceManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::LoopStationRecorder::__cordl_internal_get__silenceCutoff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____silenceCutoff;
}
constexpr float_t const& VROSC::LoopStationRecorder::__cordl_internal_get__silenceCutoff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____silenceCutoff;
}
constexpr void VROSC::LoopStationRecorder::__cordl_internal_set__silenceCutoff(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____silenceCutoff = value;
}
constexpr float_t& VROSC::LoopStationRecorder::__cordl_internal_get__tailInSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tailInSeconds;
}
constexpr float_t const& VROSC::LoopStationRecorder::__cordl_internal_get__tailInSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tailInSeconds;
}
constexpr void VROSC::LoopStationRecorder::__cordl_internal_set__tailInSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tailInSeconds = value;
}
constexpr int32_t& VROSC::LoopStationRecorder::__cordl_internal_get__tailLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tailLength;
}
constexpr int32_t const& VROSC::LoopStationRecorder::__cordl_internal_get__tailLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tailLength;
}
constexpr void VROSC::LoopStationRecorder::__cordl_internal_set__tailLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tailLength = value;
}
constexpr ::VROSC::PatchSettings*& VROSC::LoopStationRecorder::__cordl_internal_get__currentlyRecordingPatchSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentlyRecordingPatchSettings;
}
constexpr ::VROSC::PatchSettings* const& VROSC::LoopStationRecorder::__cordl_internal_get__currentlyRecordingPatchSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentlyRecordingPatchSettings;
}
constexpr void VROSC::LoopStationRecorder::__cordl_internal_set__currentlyRecordingPatchSettings(::VROSC::PatchSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentlyRecordingPatchSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::LoopStationRecorder::setStaticF_OnStateChanged(::System::Action_1<::VROSC::LoopStationRecorder_RecordingState>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::VROSC::LoopStationRecorder_RecordingState>*, "OnStateChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get>(std::forward<::System::Action_1<::VROSC::LoopStationRecorder_RecordingState>*>(value));
}
inline ::System::Action_1<::VROSC::LoopStationRecorder_RecordingState>* VROSC::LoopStationRecorder::getStaticF_OnStateChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<::VROSC::LoopStationRecorder_RecordingState>*, "OnStateChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get>();
}
inline ::UnityW<::VROSC::LoopStation> VROSC::LoopStationRecorder::get_LoopStation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "get_LoopStation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::LoopStation>, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecorder::set_LoopStation(::VROSC::LoopStation*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "set_LoopStation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::VROSC::CurrentlyRecordingLoop> VROSC::LoopStationRecorder::get_CurrentlyRecording()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "get_CurrentlyRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::CurrentlyRecordingLoop>, false>(this, ___internal_method);
}
inline ::VROSC::LoopStationRecorder_RecordingState VROSC::LoopStationRecorder::get_State()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "get_State",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopStationRecorder_RecordingState, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecorder::set_State(::VROSC::LoopStationRecorder_RecordingState  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "set_State",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationRecorder_RecordingState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::LoopStationRecorder::Setup(::VROSC::LoopStation*  loopStation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loopStation);
}
inline void VROSC::LoopStationRecorder::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecorder::OnActivePatchChanged(::VROSC::PatchSettings*  patchSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "OnActivePatchChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, patchSettings);
}
inline void VROSC::LoopStationRecorder::UpdateLooperState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "UpdateLooperState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecorder::RecordOrStop(::VROSC::Signal*  signal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "RecordOrStop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Signal*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::LoopStationRecorder::RecordOrStop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "RecordOrStop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecorder::ScheduleButtonPress(double_t  dspTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "ScheduleButtonPress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dspTime);
}
inline void VROSC::LoopStationRecorder::StopRecordingByUser(bool  restart)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "StopRecordingByUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, restart);
}
inline void VROSC::LoopStationRecorder::PrepareForRecording()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "PrepareForRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecorder::CancelPreparingForRecording()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "CancelPreparingForRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecorder::StartRecordingMicrophone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "StartRecordingMicrophone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecorder::StartRecording(::VROSC::WidgetSettings_Identifier  instrumentId, ::VROSC::PatchSettings*  patchSettings, double_t  predictedDspTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "StartRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PatchSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrumentId, patchSettings, predictedDspTime);
}
inline void VROSC::LoopStationRecorder::OnBPMChange(double_t  newBPM)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "OnBPMChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newBPM);
}
inline void VROSC::LoopStationRecorder::CancelRecording()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "CancelRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecorder::ConcludeRecording()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "ConcludeRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t VROSC::LoopStationRecorder::GetLengthOfSilentStartOfRecording(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "GetLengthOfSilentStartOfRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, audioData);
}
inline void VROSC::LoopStationRecorder::Rerecord()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "Rerecord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecorder::CancelRecording(bool  restart)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "CancelRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, restart);
}
inline void VROSC::LoopStationRecorder::ReceiveRecording(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "ReceiveRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioData);
}
inline void VROSC::LoopStationRecorder::Finish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "Finish",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecorder::CopyAudioDataToLoopTrack(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  sourceData, ::ByRef<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>  targetData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "CopyAudioDataToLoopTrack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sourceData, targetData);
}
inline int32_t VROSC::LoopStationRecorder::GetLatencyOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "GetLatencyOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t VROSC::LoopStationRecorder::CalculateGlobalSyncOffset(int32_t  recordingLengthInSamples, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "CalculateGlobalSyncOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, recordingLengthInSamples, offset);
}
inline void VROSC::LoopStationRecorder::PlayAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "PlayAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecorder::SetToIdle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "SetToIdle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationRecorder::SetState(::VROSC::LoopStationRecorder_RecordingState  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "SetState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationRecorder_RecordingState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline int32_t VROSC::LoopStationRecorder::SetBPMUsingRecording(int32_t  playbackLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "SetBPMUsingRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, playbackLength);
}
inline float_t VROSC::LoopStationRecorder::RoundRecordingLengthToBars(int32_t  recordingFullLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "RoundRecordingLengthToBars",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, recordingFullLength);
}
inline int32_t VROSC::LoopStationRecorder::GetMinimumRecordingLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        "GetMinimumRecordingLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void VROSC::LoopStationRecorder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecorder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopStationRecorder* VROSC::LoopStationRecorder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopStationRecorder*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationRecorder::LoopStationRecorder()   {
}
