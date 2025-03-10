#pragma once
// IWYU pragma private; include "System/IO/Stream.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/zzzz__IAsyncResult_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/zzzz__Memory_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_NullStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Func_5_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
// Ctor Parameters [CppParam { name: "Buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Stream_ReadWriteParameters::Stream_ReadWriteParameters(::ArrayW<uint8_t,::Array<uint8_t>*>  Buffer, int32_t  Offset, int32_t  Count) noexcept  {
this->Buffer = Buffer;
this->Offset = Offset;
this->Count = Count;
}
// Ctor Parameters []
constexpr ::System::IO::Stream_ReadWriteParameters::Stream_ReadWriteParameters()   {
}
//  Writing Method size for method: ::System::IO::Stream_ReadWriteTask.ClearBeginState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream_ReadWriteTask::*)()>(&::System::IO::Stream_ReadWriteTask::ClearBeginState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b6498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_ReadWriteTask*>::get(),
                        "ClearBeginState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_ReadWriteTask._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream_ReadWriteTask::*)(bool, bool, ::System::Func_2<::System::Object*,int32_t>*, ::System::Object*, ::System::IO::Stream*, ::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*)>(&::System::IO::Stream_ReadWriteTask::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x26b46e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_ReadWriteTask*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 9>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Object*,int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_ReadWriteTask.InvokeAsyncCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::IO::Stream_ReadWriteTask::InvokeAsyncCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26b64a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_ReadWriteTask*>::get(),
                        "InvokeAsyncCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_ReadWriteTask.System_Threading_Tasks_ITaskCompletionAction_Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream_ReadWriteTask::*)(::System::Threading::Tasks::Task*)>(&::System::IO::Stream_ReadWriteTask::System_Threading_Tasks_ITaskCompletionAction_Invoke)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x26b651c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_ReadWriteTask*>::get(),
                        "System.Threading.Tasks.ITaskCompletionAction.Invoke",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_ReadWriteTask.System_Threading_Tasks_ITaskCompletionAction_get_InvokeMayRunArbitraryCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Stream_ReadWriteTask::*)()>(&::System::IO::Stream_ReadWriteTask::System_Threading_Tasks_ITaskCompletionAction_get_InvokeMayRunArbitraryCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b6638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_ReadWriteTask*>::get(),
                        "System.Threading.Tasks.ITaskCompletionAction.get_InvokeMayRunArbitraryCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& System::IO::Stream_ReadWriteTask::__cordl_internal_get__isRead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRead;
}
constexpr bool const& System::IO::Stream_ReadWriteTask::__cordl_internal_get__isRead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRead;
}
constexpr void System::IO::Stream_ReadWriteTask::__cordl_internal_set__isRead(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isRead = value;
}
constexpr bool& System::IO::Stream_ReadWriteTask::__cordl_internal_get__apm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____apm;
}
constexpr bool const& System::IO::Stream_ReadWriteTask::__cordl_internal_get__apm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____apm;
}
constexpr void System::IO::Stream_ReadWriteTask::__cordl_internal_set__apm(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____apm = value;
}
constexpr ::System::IO::Stream*& System::IO::Stream_ReadWriteTask::__cordl_internal_get__stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr ::System::IO::Stream* const& System::IO::Stream_ReadWriteTask::__cordl_internal_get__stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr void System::IO::Stream_ReadWriteTask::__cordl_internal_set__stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::IO::Stream_ReadWriteTask::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::IO::Stream_ReadWriteTask::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr void System::IO::Stream_ReadWriteTask::__cordl_internal_set__buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::IO::Stream_ReadWriteTask::__cordl_internal_get__offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr int32_t const& System::IO::Stream_ReadWriteTask::__cordl_internal_get__offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr void System::IO::Stream_ReadWriteTask::__cordl_internal_set__offset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offset = value;
}
constexpr int32_t& System::IO::Stream_ReadWriteTask::__cordl_internal_get__count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
constexpr int32_t const& System::IO::Stream_ReadWriteTask::__cordl_internal_get__count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
constexpr void System::IO::Stream_ReadWriteTask::__cordl_internal_set__count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____count = value;
}
constexpr ::System::AsyncCallback*& System::IO::Stream_ReadWriteTask::__cordl_internal_get__callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callback;
}
constexpr ::System::AsyncCallback* const& System::IO::Stream_ReadWriteTask::__cordl_internal_get__callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callback;
}
constexpr void System::IO::Stream_ReadWriteTask::__cordl_internal_set__callback(::System::AsyncCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::ExecutionContext*& System::IO::Stream_ReadWriteTask::__cordl_internal_get__context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____context;
}
constexpr ::System::Threading::ExecutionContext* const& System::IO::Stream_ReadWriteTask::__cordl_internal_get__context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____context;
}
constexpr void System::IO::Stream_ReadWriteTask::__cordl_internal_set__context(::System::Threading::ExecutionContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::IO::Stream_ReadWriteTask::setStaticF_s_invokeAsyncCallback(::System::Threading::ContextCallback*  value)  {
::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "s_invokeAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_ReadWriteTask*>::get>(std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::IO::Stream_ReadWriteTask::getStaticF_s_invokeAsyncCallback()  {
return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "s_invokeAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_ReadWriteTask*>::get>();
}
inline void System::IO::Stream_ReadWriteTask::ClearBeginState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_ReadWriteTask*>::get(),
                        "ClearBeginState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Stream_ReadWriteTask::_ctor(bool  isRead, bool  apm, ::System::Func_2<::System::Object*,int32_t>*  function, ::System::Object*  state, ::System::IO::Stream*  stream, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_ReadWriteTask*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 9>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Object*,int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isRead, apm, function, state, stream, buffer, offset, count, callback);
}
inline void System::IO::Stream_ReadWriteTask::InvokeAsyncCallback(::System::Object*  completedTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_ReadWriteTask*>::get(),
                        "InvokeAsyncCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, completedTask);
}
inline void System::IO::Stream_ReadWriteTask::System_Threading_Tasks_ITaskCompletionAction_Invoke(::System::Threading::Tasks::Task*  completingTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_ReadWriteTask*>::get(),
                        "System.Threading.Tasks.ITaskCompletionAction.Invoke",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, completingTask);
}
inline bool System::IO::Stream_ReadWriteTask::System_Threading_Tasks_ITaskCompletionAction_get_InvokeMayRunArbitraryCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_ReadWriteTask*>::get(),
                        "System.Threading.Tasks.ITaskCompletionAction.get_InvokeMayRunArbitraryCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IO::Stream_ReadWriteTask* System::IO::Stream_ReadWriteTask::New_ctor(bool  isRead, bool  apm, ::System::Func_2<::System::Object*,int32_t>*  function, ::System::Object*  state, ::System::IO::Stream*  stream, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Stream_ReadWriteTask*>(isRead, apm, function, state, stream, buffer, offset, count, callback));
}
/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr  System::IO::Stream_ReadWriteTask::operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept {
return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr ::System::Threading::Tasks::ITaskCompletionAction* System::IO::Stream_ReadWriteTask::i___System__Threading__Tasks__ITaskCompletionAction() noexcept {
return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::IO::Stream_ReadWriteTask::Stream_ReadWriteTask()   {
}
//  Writing Method size for method: ::System::IO::SynchronousAsyncResult_Stream___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::SynchronousAsyncResult_Stream___c::*)()>(&::System::IO::SynchronousAsyncResult_Stream___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b6e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::SynchronousAsyncResult_Stream___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::SynchronousAsyncResult_Stream___c._get_AsyncWaitHandle_b__12_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ManualResetEvent* (::System::IO::SynchronousAsyncResult_Stream___c::*)()>(&::System::IO::SynchronousAsyncResult_Stream___c::_get_AsyncWaitHandle_b__12_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26b6e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::SynchronousAsyncResult_Stream___c*>::get(),
                        "<get_AsyncWaitHandle>b__12_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void System::IO::SynchronousAsyncResult_Stream___c::setStaticF___9(::System::IO::SynchronousAsyncResult_Stream___c*  value)  {
::cordl_internals::setStaticField<::System::IO::SynchronousAsyncResult_Stream___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::SynchronousAsyncResult_Stream___c*>::get>(std::forward<::System::IO::SynchronousAsyncResult_Stream___c*>(value));
}
inline ::System::IO::SynchronousAsyncResult_Stream___c* System::IO::SynchronousAsyncResult_Stream___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::IO::SynchronousAsyncResult_Stream___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::SynchronousAsyncResult_Stream___c*>::get>();
}
inline void System::IO::SynchronousAsyncResult_Stream___c::setStaticF___9__12_0(::System::Func_1<::System::Threading::ManualResetEvent*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Threading::ManualResetEvent*>*, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::SynchronousAsyncResult_Stream___c*>::get>(std::forward<::System::Func_1<::System::Threading::ManualResetEvent*>*>(value));
}
inline ::System::Func_1<::System::Threading::ManualResetEvent*>* System::IO::SynchronousAsyncResult_Stream___c::getStaticF___9__12_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Threading::ManualResetEvent*>*, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::SynchronousAsyncResult_Stream___c*>::get>();
}
inline void System::IO::SynchronousAsyncResult_Stream___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::SynchronousAsyncResult_Stream___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::ManualResetEvent* System::IO::SynchronousAsyncResult_Stream___c::_get_AsyncWaitHandle_b__12_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::SynchronousAsyncResult_Stream___c*>::get(),
                        "<get_AsyncWaitHandle>b__12_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::ManualResetEvent*, false>(this, ___internal_method);
}
inline ::System::IO::SynchronousAsyncResult_Stream___c* System::IO::SynchronousAsyncResult_Stream___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::SynchronousAsyncResult_Stream___c*>());
}
// Ctor Parameters []
constexpr ::System::IO::SynchronousAsyncResult_Stream___c::SynchronousAsyncResult_Stream___c()   {
}
//  Writing Method size for method: ::System::IO::Stream_SynchronousAsyncResult._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream_SynchronousAsyncResult::*)(int32_t, ::System::Object*)>(&::System::IO::Stream_SynchronousAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26b5fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_SynchronousAsyncResult*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_SynchronousAsyncResult._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream_SynchronousAsyncResult::*)(::System::Object*)>(&::System::IO::Stream_SynchronousAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26b62b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_SynchronousAsyncResult*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_SynchronousAsyncResult._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream_SynchronousAsyncResult::*)(::System::Exception*, ::System::Object*, bool)>(&::System::IO::Stream_SynchronousAsyncResult::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x26b6018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_SynchronousAsyncResult*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_SynchronousAsyncResult.get_IsCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Stream_SynchronousAsyncResult::*)()>(&::System::IO::Stream_SynchronousAsyncResult::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b6c9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_SynchronousAsyncResult*>::get(),
                        "get_IsCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_SynchronousAsyncResult.get_AsyncWaitHandle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle* (::System::IO::Stream_SynchronousAsyncResult::*)()>(&::System::IO::Stream_SynchronousAsyncResult::get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x26b6ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_SynchronousAsyncResult*>::get(),
                        "get_AsyncWaitHandle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_SynchronousAsyncResult.get_AsyncState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::IO::Stream_SynchronousAsyncResult::*)()>(&::System::IO::Stream_SynchronousAsyncResult::get_AsyncState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b6d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_SynchronousAsyncResult*>::get(),
                        "get_AsyncState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_SynchronousAsyncResult.get_CompletedSynchronously
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Stream_SynchronousAsyncResult::*)()>(&::System::IO::Stream_SynchronousAsyncResult::get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b6d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_SynchronousAsyncResult*>::get(),
                        "get_CompletedSynchronously",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_SynchronousAsyncResult.ThrowIfError
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream_SynchronousAsyncResult::*)()>(&::System::IO::Stream_SynchronousAsyncResult::ThrowIfError)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26b6da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_SynchronousAsyncResult*>::get(),
                        "ThrowIfError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_SynchronousAsyncResult.EndRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IAsyncResult*)>(&::System::IO::Stream_SynchronousAsyncResult::EndRead)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x26b6068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_SynchronousAsyncResult*>::get(),
                        "EndRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream_SynchronousAsyncResult.EndWrite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::IO::Stream_SynchronousAsyncResult::EndWrite)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x26b62e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_SynchronousAsyncResult*>::get(),
                        "EndWrite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__stateObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateObject;
}
constexpr ::System::Object* const& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__stateObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateObject;
}
constexpr void System::IO::Stream_SynchronousAsyncResult::__cordl_internal_set__stateObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stateObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__isWrite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isWrite;
}
constexpr bool const& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__isWrite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isWrite;
}
constexpr void System::IO::Stream_SynchronousAsyncResult::__cordl_internal_set__isWrite(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isWrite = value;
}
constexpr ::System::Threading::ManualResetEvent*& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__waitHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitHandle;
}
constexpr ::System::Threading::ManualResetEvent* const& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__waitHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitHandle;
}
constexpr void System::IO::Stream_SynchronousAsyncResult::__cordl_internal_set__waitHandle(::System::Threading::ManualResetEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____waitHandle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__exceptionInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exceptionInfo;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__exceptionInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exceptionInfo;
}
constexpr void System::IO::Stream_SynchronousAsyncResult::__cordl_internal_set__exceptionInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exceptionInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__endXxxCalled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endXxxCalled;
}
constexpr bool const& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__endXxxCalled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endXxxCalled;
}
constexpr void System::IO::Stream_SynchronousAsyncResult::__cordl_internal_set__endXxxCalled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____endXxxCalled = value;
}
constexpr int32_t& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__bytesRead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bytesRead;
}
constexpr int32_t const& System::IO::Stream_SynchronousAsyncResult::__cordl_internal_get__bytesRead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bytesRead;
}
constexpr void System::IO::Stream_SynchronousAsyncResult::__cordl_internal_set__bytesRead(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bytesRead = value;
}
inline void System::IO::Stream_SynchronousAsyncResult::_ctor(int32_t  bytesRead, ::System::Object*  asyncStateObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_SynchronousAsyncResult*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bytesRead, asyncStateObject);
}
inline void System::IO::Stream_SynchronousAsyncResult::_ctor(::System::Object*  asyncStateObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_SynchronousAsyncResult*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncStateObject);
}
inline void System::IO::Stream_SynchronousAsyncResult::_ctor(::System::Exception*  ex, ::System::Object*  asyncStateObject, bool  isWrite)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_SynchronousAsyncResult*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ex, asyncStateObject, isWrite);
}
inline bool System::IO::Stream_SynchronousAsyncResult::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_SynchronousAsyncResult*>::get(),
                        "get_IsCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Threading::WaitHandle* System::IO::Stream_SynchronousAsyncResult::get_AsyncWaitHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_SynchronousAsyncResult*>::get(),
                        "get_AsyncWaitHandle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle*, false>(this, ___internal_method);
}
inline ::System::Object* System::IO::Stream_SynchronousAsyncResult::get_AsyncState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_SynchronousAsyncResult*>::get(),
                        "get_AsyncState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::IO::Stream_SynchronousAsyncResult::get_CompletedSynchronously()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_SynchronousAsyncResult*>::get(),
                        "get_CompletedSynchronously",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::IO::Stream_SynchronousAsyncResult::ThrowIfError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_SynchronousAsyncResult*>::get(),
                        "ThrowIfError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::IO::Stream_SynchronousAsyncResult::EndRead(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_SynchronousAsyncResult*>::get(),
                        "EndRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, asyncResult);
}
inline void System::IO::Stream_SynchronousAsyncResult::EndWrite(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream_SynchronousAsyncResult*>::get(),
                        "EndWrite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncResult);
}
inline ::System::IO::Stream_SynchronousAsyncResult* System::IO::Stream_SynchronousAsyncResult::New_ctor(int32_t  bytesRead, ::System::Object*  asyncStateObject)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Stream_SynchronousAsyncResult*>(bytesRead, asyncStateObject));
}
inline ::System::IO::Stream_SynchronousAsyncResult* System::IO::Stream_SynchronousAsyncResult::New_ctor(::System::Object*  asyncStateObject)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Stream_SynchronousAsyncResult*>(asyncStateObject));
}
inline ::System::IO::Stream_SynchronousAsyncResult* System::IO::Stream_SynchronousAsyncResult::New_ctor(::System::Exception*  ex, ::System::Object*  asyncStateObject, bool  isWrite)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Stream_SynchronousAsyncResult*>(ex, asyncStateObject, isWrite));
}
/// @brief Convert operator to "::System::IAsyncResult"
constexpr  System::IO::Stream_SynchronousAsyncResult::operator ::System::IAsyncResult*() noexcept {
return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IAsyncResult"
constexpr ::System::IAsyncResult* System::IO::Stream_SynchronousAsyncResult::i___System__IAsyncResult() noexcept {
return static_cast<::System::IAsyncResult*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::IO::Stream_SynchronousAsyncResult::Stream_SynchronousAsyncResult()   {
}
//  Writing Method size for method: ::System::IO::Stream___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream___c::*)()>(&::System::IO::Stream___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b6ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream___c._EnsureAsyncActiveSemaphoreInitialized_b__4_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SemaphoreSlim* (::System::IO::Stream___c::*)()>(&::System::IO::Stream___c::_EnsureAsyncActiveSemaphoreInitialized_b__4_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x26b6ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get(),
                        "<EnsureAsyncActiveSemaphoreInitialized>b__4_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream___c._FlushAsync_b__37_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream___c::*)(::System::Object*)>(&::System::IO::Stream___c::_FlushAsync_b__37_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x26b6f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get(),
                        "<FlushAsync>b__37_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream___c._BeginReadInternal_b__40_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Stream___c::*)(::System::Object*)>(&::System::IO::Stream___c::_BeginReadInternal_b__40_0)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x26b6fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get(),
                        "<BeginReadInternal>b__40_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream___c._BeginEndReadAsync_b__45_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::IO::Stream___c::*)(::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*)>(&::System::IO::Stream___c::_BeginEndReadAsync_b__45_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x26b7148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get(),
                        "<BeginEndReadAsync>b__45_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream_ReadWriteParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream___c._BeginEndReadAsync_b__45_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Stream___c::*)(::System::IO::Stream*, ::System::IAsyncResult*)>(&::System::IO::Stream___c::_BeginEndReadAsync_b__45_1)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26b717c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get(),
                        "<BeginEndReadAsync>b__45_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream___c._BeginWriteInternal_b__48_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Stream___c::*)(::System::Object*)>(&::System::IO::Stream___c::_BeginWriteInternal_b__48_0)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x26b71a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get(),
                        "<BeginWriteInternal>b__48_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream___c._RunReadWriteTaskWhenReady_b__49_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream___c::*)(::System::Threading::Tasks::Task*, ::System::Object*)>(&::System::IO::Stream___c::_RunReadWriteTaskWhenReady_b__49_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26b7324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get(),
                        "<RunReadWriteTaskWhenReady>b__49_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream___c._BeginEndWriteAsync_b__58_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::IO::Stream___c::*)(::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*)>(&::System::IO::Stream___c::_BeginEndWriteAsync_b__58_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x26b7390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get(),
                        "<BeginEndWriteAsync>b__58_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream_ReadWriteParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream___c._BeginEndWriteAsync_b__58_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::VoidTaskResult (::System::IO::Stream___c::*)(::System::IO::Stream*, ::System::IAsyncResult*)>(&::System::IO::Stream___c::_BeginEndWriteAsync_b__58_1)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x26b73c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get(),
                        "<BeginEndWriteAsync>b__58_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::Stream___c::setStaticF___9(::System::IO::Stream___c*  value)  {
::cordl_internals::setStaticField<::System::IO::Stream___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get>(std::forward<::System::IO::Stream___c*>(value));
}
inline ::System::IO::Stream___c* System::IO::Stream___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::IO::Stream___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get>();
}
inline void System::IO::Stream___c::setStaticF___9__4_0(::System::Func_1<::System::Threading::SemaphoreSlim*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Threading::SemaphoreSlim*>*, "<>9__4_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get>(std::forward<::System::Func_1<::System::Threading::SemaphoreSlim*>*>(value));
}
inline ::System::Func_1<::System::Threading::SemaphoreSlim*>* System::IO::Stream___c::getStaticF___9__4_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Threading::SemaphoreSlim*>*, "<>9__4_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get>();
}
inline void System::IO::Stream___c::setStaticF___9__37_0(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__37_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::IO::Stream___c::getStaticF___9__37_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__37_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get>();
}
inline void System::IO::Stream___c::setStaticF___9__40_0(::System::Func_2<::System::Object*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Object*,int32_t>*, "<>9__40_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get>(std::forward<::System::Func_2<::System::Object*,int32_t>*>(value));
}
inline ::System::Func_2<::System::Object*,int32_t>* System::IO::Stream___c::getStaticF___9__40_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*,int32_t>*, "<>9__40_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get>();
}
inline void System::IO::Stream___c::setStaticF___9__45_0(::System::Func_5<::System::IO::Stream*,::System::IO::Stream_ReadWriteParameters,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  value)  {
::cordl_internals::setStaticField<::System::Func_5<::System::IO::Stream*,::System::IO::Stream_ReadWriteParameters,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*, "<>9__45_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get>(std::forward<::System::Func_5<::System::IO::Stream*,::System::IO::Stream_ReadWriteParameters,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*>(value));
}
inline ::System::Func_5<::System::IO::Stream*,::System::IO::Stream_ReadWriteParameters,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>* System::IO::Stream___c::getStaticF___9__45_0()  {
return ::cordl_internals::getStaticField<::System::Func_5<::System::IO::Stream*,::System::IO::Stream_ReadWriteParameters,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*, "<>9__45_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get>();
}
inline void System::IO::Stream___c::setStaticF___9__45_1(::System::Func_3<::System::IO::Stream*,::System::IAsyncResult*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::System::IO::Stream*,::System::IAsyncResult*,int32_t>*, "<>9__45_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get>(std::forward<::System::Func_3<::System::IO::Stream*,::System::IAsyncResult*,int32_t>*>(value));
}
inline ::System::Func_3<::System::IO::Stream*,::System::IAsyncResult*,int32_t>* System::IO::Stream___c::getStaticF___9__45_1()  {
return ::cordl_internals::getStaticField<::System::Func_3<::System::IO::Stream*,::System::IAsyncResult*,int32_t>*, "<>9__45_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get>();
}
inline void System::IO::Stream___c::setStaticF___9__48_0(::System::Func_2<::System::Object*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Object*,int32_t>*, "<>9__48_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get>(std::forward<::System::Func_2<::System::Object*,int32_t>*>(value));
}
inline ::System::Func_2<::System::Object*,int32_t>* System::IO::Stream___c::getStaticF___9__48_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*,int32_t>*, "<>9__48_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get>();
}
inline void System::IO::Stream___c::setStaticF___9__49_0(::System::Action_2<::System::Threading::Tasks::Task*,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::System::Threading::Tasks::Task*,::System::Object*>*, "<>9__49_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get>(std::forward<::System::Action_2<::System::Threading::Tasks::Task*,::System::Object*>*>(value));
}
inline ::System::Action_2<::System::Threading::Tasks::Task*,::System::Object*>* System::IO::Stream___c::getStaticF___9__49_0()  {
return ::cordl_internals::getStaticField<::System::Action_2<::System::Threading::Tasks::Task*,::System::Object*>*, "<>9__49_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get>();
}
inline void System::IO::Stream___c::setStaticF___9__58_0(::System::Func_5<::System::IO::Stream*,::System::IO::Stream_ReadWriteParameters,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*  value)  {
::cordl_internals::setStaticField<::System::Func_5<::System::IO::Stream*,::System::IO::Stream_ReadWriteParameters,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*, "<>9__58_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get>(std::forward<::System::Func_5<::System::IO::Stream*,::System::IO::Stream_ReadWriteParameters,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*>(value));
}
inline ::System::Func_5<::System::IO::Stream*,::System::IO::Stream_ReadWriteParameters,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>* System::IO::Stream___c::getStaticF___9__58_0()  {
return ::cordl_internals::getStaticField<::System::Func_5<::System::IO::Stream*,::System::IO::Stream_ReadWriteParameters,::System::AsyncCallback*,::System::Object*,::System::IAsyncResult*>*, "<>9__58_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get>();
}
inline void System::IO::Stream___c::setStaticF___9__58_1(::System::Func_3<::System::IO::Stream*,::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::System::IO::Stream*,::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*, "<>9__58_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get>(std::forward<::System::Func_3<::System::IO::Stream*,::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*>(value));
}
inline ::System::Func_3<::System::IO::Stream*,::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>* System::IO::Stream___c::getStaticF___9__58_1()  {
return ::cordl_internals::getStaticField<::System::Func_3<::System::IO::Stream*,::System::IAsyncResult*,::System::Threading::Tasks::VoidTaskResult>*, "<>9__58_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get>();
}
inline void System::IO::Stream___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::SemaphoreSlim* System::IO::Stream___c::_EnsureAsyncActiveSemaphoreInitialized_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get(),
                        "<EnsureAsyncActiveSemaphoreInitialized>b__4_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SemaphoreSlim*, false>(this, ___internal_method);
}
inline void System::IO::Stream___c::_FlushAsync_b__37_0(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get(),
                        "<FlushAsync>b__37_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline int32_t System::IO::Stream___c::_BeginReadInternal_b__40_0(::System::Object*  _p0_)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get(),
                        "<BeginReadInternal>b__40_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, _p0_);
}
inline ::System::IAsyncResult* System::IO::Stream___c::_BeginEndReadAsync_b__45_0(::System::IO::Stream*  stream, ::System::IO::Stream_ReadWriteParameters  args, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get(),
                        "<BeginEndReadAsync>b__45_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream_ReadWriteParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, stream, args, callback, state);
}
inline int32_t System::IO::Stream___c::_BeginEndReadAsync_b__45_1(::System::IO::Stream*  stream, ::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get(),
                        "<BeginEndReadAsync>b__45_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, stream, asyncResult);
}
inline int32_t System::IO::Stream___c::_BeginWriteInternal_b__48_0(::System::Object*  _p0_)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get(),
                        "<BeginWriteInternal>b__48_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, _p0_);
}
inline void System::IO::Stream___c::_RunReadWriteTaskWhenReady_b__49_0(::System::Threading::Tasks::Task*  t, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get(),
                        "<RunReadWriteTaskWhenReady>b__49_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t, state);
}
inline ::System::IAsyncResult* System::IO::Stream___c::_BeginEndWriteAsync_b__58_0(::System::IO::Stream*  stream, ::System::IO::Stream_ReadWriteParameters  args, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get(),
                        "<BeginEndWriteAsync>b__58_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream_ReadWriteParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, stream, args, callback, state);
}
inline ::System::Threading::Tasks::VoidTaskResult System::IO::Stream___c::_BeginEndWriteAsync_b__58_1(::System::IO::Stream*  stream, ::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___c*>::get(),
                        "<BeginEndWriteAsync>b__58_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::VoidTaskResult, false>(this, ___internal_method, stream, asyncResult);
}
inline ::System::IO::Stream___c* System::IO::Stream___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Stream___c*>());
}
// Ctor Parameters []
constexpr ::System::IO::Stream___c::Stream___c()   {
}
//  Writing Method size for method: ::System::IO::Stream__FinishWriteAsync_d__57.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream__FinishWriteAsync_d__57::*)()>(&::System::IO::Stream__FinishWriteAsync_d__57::MoveNext)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x26b73f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream__FinishWriteAsync_d__57>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream__FinishWriteAsync_d__57.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream__FinishWriteAsync_d__57::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::IO::Stream__FinishWriteAsync_d__57::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26b7670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream__FinishWriteAsync_d__57>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::Stream__FinishWriteAsync_d__57::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream__FinishWriteAsync_d__57>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Stream__FinishWriteAsync_d__57::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream__FinishWriteAsync_d__57>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  System::IO::Stream__FinishWriteAsync_d__57::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::IO::Stream__FinishWriteAsync_d__57::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "writeTask", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: Some("{}") }, CppParam { name: "localBuffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Stream__FinishWriteAsync_d__57::Stream__FinishWriteAsync_d__57(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::Tasks::Task*  writeTask, ::ArrayW<uint8_t,::Array<uint8_t>*>  localBuffer, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->writeTask = writeTask;
this->localBuffer = localBuffer;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::IO::Stream__FinishWriteAsync_d__57::Stream__FinishWriteAsync_d__57()   {
}
//  Writing Method size for method: ::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d::*)()>(&::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x26b76d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26b7a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "readTask", ty: "::System::Threading::Tasks::Task_1<int32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "localBuffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "localDestination", ty: "::System::Memory_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d::Stream___ReadAsync_g__FinishReadAsync_44_0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>  __t__builder, ::System::Threading::Tasks::Task_1<int32_t>*  readTask, ::ArrayW<uint8_t,::Array<uint8_t>*>  localBuffer, ::System::Memory_1<uint8_t>  localDestination, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->readTask = readTask;
this->localBuffer = localBuffer;
this->localDestination = localDestination;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::IO::Stream___ReadAsync_g__FinishReadAsync_44_0_d::Stream___ReadAsync_g__FinishReadAsync_44_0_d()   {
}
//  Writing Method size for method: ::System::IO::Stream.EnsureAsyncActiveSemaphoreInitialized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SemaphoreSlim* (::System::IO::Stream::*)()>(&::System::IO::Stream::EnsureAsyncActiveSemaphoreInitialized)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x26b3db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "EnsureAsyncActiveSemaphoreInitialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.get_CanRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Stream::*)()>(&::System::IO::Stream::get_CanRead)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.get_CanSeek
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Stream::*)()>(&::System::IO::Stream::get_CanSeek)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.get_CanTimeout
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Stream::*)()>(&::System::IO::Stream::get_CanTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b3ea0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.get_CanWrite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Stream::*)()>(&::System::IO::Stream::get_CanWrite)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.get_Length
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::IO::Stream::*)()>(&::System::IO::Stream::get_Length)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.get_Position
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::IO::Stream::*)()>(&::System::IO::Stream::get_Position)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.set_Position
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream::*)(int64_t)>(&::System::IO::Stream::set_Position)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.get_ReadTimeout
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Stream::*)()>(&::System::IO::Stream::get_ReadTimeout)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x26b3ea8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.set_ReadTimeout
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream::*)(int32_t)>(&::System::IO::Stream::set_ReadTimeout)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x26b3ef4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.get_WriteTimeout
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Stream::*)()>(&::System::IO::Stream::get_WriteTimeout)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x26b3f40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.set_WriteTimeout
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream::*)(int32_t)>(&::System::IO::Stream::set_WriteTimeout)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x26b3f8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.CopyTo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream::*)(::System::IO::Stream*)>(&::System::IO::Stream::CopyTo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x26b3fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "CopyTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.CopyTo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream::*)(::System::IO::Stream*, int32_t)>(&::System::IO::Stream::CopyTo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x26b40d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.GetCopyBufferSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Stream::*)()>(&::System::IO::Stream::GetCopyBufferSize)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26b4010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "GetCopyBufferSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.Close
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream::*)()>(&::System::IO::Stream::Close)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x26b4294;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream::*)()>(&::System::IO::Stream::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26b4304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream::*)(bool)>(&::System::IO::Stream::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26ab45c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.Flush
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream::*)()>(&::System::IO::Stream::Flush)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.FlushAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::Stream::*)(::System::Threading::CancellationToken)>(&::System::IO::Stream::FlushAsync)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x26b4314;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.BeginRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::IO::Stream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::IO::Stream::BeginRead)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26b44d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.BeginReadInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::IO::Stream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*, bool, bool)>(&::System::IO::Stream::BeginReadInternal)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x26b44f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "BeginReadInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.EndRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Stream::*)(::System::IAsyncResult*)>(&::System::IO::Stream::EndRead)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x26b4a60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.ReadAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::IO::Stream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::Stream::ReadAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x26b4c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "ReadAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.ReadAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::IO::Stream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::Stream::ReadAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x26b4cb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.ReadAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::System::IO::Stream::*)(::System::Memory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::IO::Stream::ReadAsync)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x26b4f40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.BeginEndReadAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::IO::Stream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::Stream::BeginEndReadAsync)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x26b4d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "BeginEndReadAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.BeginWrite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::IO::Stream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::IO::Stream::BeginWrite)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26b5300;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.BeginWriteInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::IO::Stream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*, bool, bool)>(&::System::IO::Stream::BeginWriteInternal)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x26b5320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "BeginWriteInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.RunReadWriteTaskWhenReady
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream::*)(::System::Threading::Tasks::Task*, ::System::IO::Stream_ReadWriteTask*)>(&::System::IO::Stream::RunReadWriteTaskWhenReady)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x26b482c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "RunReadWriteTaskWhenReady",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream_ReadWriteTask*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.RunReadWriteTask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream::*)(::System::IO::Stream_ReadWriteTask*)>(&::System::IO::Stream::RunReadWriteTask)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x26b49ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "RunReadWriteTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream_ReadWriteTask*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.FinishTrackingAsyncOperation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream::*)()>(&::System::IO::Stream::FinishTrackingAsyncOperation)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26b5504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "FinishTrackingAsyncOperation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.EndWrite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream::*)(::System::IAsyncResult*)>(&::System::IO::Stream::EndWrite)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x26b5528;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.WriteAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::Stream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::Stream::WriteAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x26b56d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "WriteAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.WriteAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::Stream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::Stream::WriteAsync)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x26b576c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.WriteAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask (::System::IO::Stream::*)(::System::ReadOnlyMemory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::IO::Stream::WriteAsync)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x26b59e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.FinishWriteAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::Stream::*)(::System::Threading::Tasks::Task*, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::System::IO::Stream::FinishWriteAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x26b5c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "FinishWriteAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.BeginEndWriteAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::Stream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::Stream::BeginEndWriteAsync)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x26b5838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "BeginEndWriteAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.Seek
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::IO::Stream::*)(int64_t, ::System::IO::SeekOrigin)>(&::System::IO::Stream::Seek)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.SetLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream::*)(int64_t)>(&::System::IO::Stream::SetLength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.Read
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Stream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::Stream::Read)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.Read
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Stream::*)(::System::Span_1<uint8_t>)>(&::System::IO::Stream::Read)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x26abd10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.ReadByte
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Stream::*)()>(&::System::IO::Stream::ReadByte)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x26b5d58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.Write
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::Stream::Write)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.Write
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::System::IO::Stream::Write)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x26aceec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.WriteByte
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream::*)(uint8_t)>(&::System::IO::Stream::WriteByte)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26b5dec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.BlockingBeginRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::IO::Stream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::IO::Stream::BlockingBeginRead)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x26b5e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "BlockingBeginRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.BlockingEndRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IAsyncResult*)>(&::System::IO::Stream::BlockingEndRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26b6064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "BlockingEndRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.BlockingBeginWrite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::IO::Stream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::IO::Stream::BlockingBeginWrite)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x26b6150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "BlockingBeginWrite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.BlockingEndWrite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::IO::Stream::BlockingEndWrite)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26b62e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "BlockingEndWrite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.HasOverriddenBeginEndRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Stream::*)()>(&::System::IO::Stream::HasOverriddenBeginEndRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b52f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "HasOverriddenBeginEndRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream.HasOverriddenBeginEndWrite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Stream::*)()>(&::System::IO::Stream::HasOverriddenBeginEndWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b5d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "HasOverriddenBeginEndWrite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Stream::*)()>(&::System::IO::Stream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ab18c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Stream._ReadAsync_g__FinishReadAsync_44_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (*)(::System::Threading::Tasks::Task_1<int32_t>*, ::ArrayW<uint8_t,::Array<uint8_t>*>, ::System::Memory_1<uint8_t>)>(&::System::IO::Stream::_ReadAsync_g__FinishReadAsync_44_0)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x26b51c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "<ReadAsync>g__FinishReadAsync|44_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream_ReadWriteTask*& System::IO::Stream::__cordl_internal_get__activeReadWriteTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeReadWriteTask;
}
constexpr ::System::IO::Stream_ReadWriteTask* const& System::IO::Stream::__cordl_internal_get__activeReadWriteTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeReadWriteTask;
}
constexpr void System::IO::Stream::__cordl_internal_set__activeReadWriteTask(::System::IO::Stream_ReadWriteTask*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeReadWriteTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::SemaphoreSlim*& System::IO::Stream::__cordl_internal_get__asyncActiveSemaphore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncActiveSemaphore;
}
constexpr ::System::Threading::SemaphoreSlim* const& System::IO::Stream::__cordl_internal_get__asyncActiveSemaphore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncActiveSemaphore;
}
constexpr void System::IO::Stream::__cordl_internal_set__asyncActiveSemaphore(::System::Threading::SemaphoreSlim*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____asyncActiveSemaphore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::IO::Stream::setStaticF_Null(::System::IO::Stream*  value)  {
::cordl_internals::setStaticField<::System::IO::Stream*, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get>(std::forward<::System::IO::Stream*>(value));
}
inline ::System::IO::Stream* System::IO::Stream::getStaticF_Null()  {
return ::cordl_internals::getStaticField<::System::IO::Stream*, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get>();
}
inline ::System::Threading::SemaphoreSlim* System::IO::Stream::EnsureAsyncActiveSemaphoreInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "EnsureAsyncActiveSemaphoreInitialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SemaphoreSlim*, false>(this, ___internal_method);
}
inline bool System::IO::Stream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::IO::Stream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::IO::Stream::get_CanTimeout()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::IO::Stream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t System::IO::Stream::get_Length()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t System::IO::Stream::get_Position()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void System::IO::Stream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::IO::Stream::get_ReadTimeout()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::IO::Stream::set_ReadTimeout(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::IO::Stream::get_WriteTimeout()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::IO::Stream::set_WriteTimeout(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::IO::Stream::CopyTo(::System::IO::Stream*  destination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "CopyTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destination);
}
inline void System::IO::Stream::CopyTo(::System::IO::Stream*  destination, int32_t  bufferSize)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    18
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destination, bufferSize);
}
inline int32_t System::IO::Stream::GetCopyBufferSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "GetCopyBufferSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::IO::Stream::Close()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    19
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Stream::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Stream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::IO::Stream::Flush()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::IO::Stream::FlushAsync(::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    22
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline ::System::IAsyncResult* System::IO::Stream::BeginRead(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    23
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline ::System::IAsyncResult* System::IO::Stream::BeginReadInternal(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state, bool  serializeAsynchronously, bool  apm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "BeginReadInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, count, callback, state, serializeAsynchronously, apm);
}
inline int32_t System::IO::Stream::EndRead(::System::IAsyncResult*  asyncResult)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    24
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, asyncResult);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::IO::Stream::ReadAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "ReadAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, buffer, offset, count);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::IO::Stream::ReadAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    25
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::IO::Stream::ReadAsync(::System::Memory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    26
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>, false>(this, ___internal_method, buffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::IO::Stream::BeginEndReadAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "BeginEndReadAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, buffer, offset, count);
}
inline ::System::IAsyncResult* System::IO::Stream::BeginWrite(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    27
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline ::System::IAsyncResult* System::IO::Stream::BeginWriteInternal(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state, bool  serializeAsynchronously, bool  apm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "BeginWriteInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, count, callback, state, serializeAsynchronously, apm);
}
inline void System::IO::Stream::RunReadWriteTaskWhenReady(::System::Threading::Tasks::Task*  asyncWaiter, ::System::IO::Stream_ReadWriteTask*  readWriteTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "RunReadWriteTaskWhenReady",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream_ReadWriteTask*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncWaiter, readWriteTask);
}
inline void System::IO::Stream::RunReadWriteTask(::System::IO::Stream_ReadWriteTask*  readWriteTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "RunReadWriteTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream_ReadWriteTask*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, readWriteTask);
}
inline void System::IO::Stream::FinishTrackingAsyncOperation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "FinishTrackingAsyncOperation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Stream::EndWrite(::System::IAsyncResult*  asyncResult)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    28
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncResult);
}
inline ::System::Threading::Tasks::Task* System::IO::Stream::WriteAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "WriteAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, buffer, offset, count);
}
inline ::System::Threading::Tasks::Task* System::IO::Stream::WriteAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    29
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask System::IO::Stream::WriteAsync(::System::ReadOnlyMemory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    30
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask, false>(this, ___internal_method, buffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::IO::Stream::FinishWriteAsync(::System::Threading::Tasks::Task*  writeTask, ::ArrayW<uint8_t,::Array<uint8_t>*>  localBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "FinishWriteAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, writeTask, localBuffer);
}
inline ::System::Threading::Tasks::Task* System::IO::Stream::BeginEndWriteAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "BeginEndWriteAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, buffer, offset, count);
}
inline int64_t System::IO::Stream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    31
                )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, offset, origin);
}
inline void System::IO::Stream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    32
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::IO::Stream::Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    33
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, count);
}
inline int32_t System::IO::Stream::Read(::System::Span_1<uint8_t>  buffer)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    34
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer);
}
inline int32_t System::IO::Stream::ReadByte()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    35
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::IO::Stream::Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    36
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, count);
}
inline void System::IO::Stream::Write(::System::ReadOnlySpan_1<uint8_t>  buffer)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    37
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer);
}
inline void System::IO::Stream::WriteByte(uint8_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                    38
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::IAsyncResult* System::IO::Stream::BlockingBeginRead(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "BlockingBeginRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline int32_t System::IO::Stream::BlockingEndRead(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "BlockingEndRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, asyncResult);
}
inline ::System::IAsyncResult* System::IO::Stream::BlockingBeginWrite(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "BlockingBeginWrite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline void System::IO::Stream::BlockingEndWrite(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "BlockingEndWrite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncResult);
}
inline bool System::IO::Stream::HasOverriddenBeginEndRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "HasOverriddenBeginEndRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::IO::Stream::HasOverriddenBeginEndWrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "HasOverriddenBeginEndWrite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::IO::Stream::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::IO::Stream::_ReadAsync_g__FinishReadAsync_44_0(::System::Threading::Tasks::Task_1<int32_t>*  readTask, ::ArrayW<uint8_t,::Array<uint8_t>*>  localBuffer, ::System::Memory_1<uint8_t>  localDestination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Stream*>::get(),
                        "<ReadAsync>g__FinishReadAsync|44_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>, false>(nullptr, ___internal_method, readTask, localBuffer, localDestination);
}
inline ::System::IO::Stream* System::IO::Stream::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Stream*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::IO::Stream::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::IO::Stream::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::IO::Stream::Stream()   {
}
