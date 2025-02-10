#pragma once
// IWYU pragma private; include "Firebase/Dispatcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/zzzz__Dispatcher_def.hpp"
#include "Firebase/zzzz__Dispatcher_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__EventWaitHandle_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
template<typename TResult>
constexpr TResult& Firebase::Dispatcher_CallbackStorage_1<TResult>::__cordl_internal_get__Result_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Result_k__BackingField;
}
template<typename TResult>
constexpr TResult const& Firebase::Dispatcher_CallbackStorage_1<TResult>::__cordl_internal_get__Result_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Result_k__BackingField;
}
template<typename TResult>
constexpr void Firebase::Dispatcher_CallbackStorage_1<TResult>::__cordl_internal_set__Result_k__BackingField(TResult  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____Result_k__BackingField, value);
}
template<typename TResult>
constexpr ::System::Exception*& Firebase::Dispatcher_CallbackStorage_1<TResult>::__cordl_internal_get__Exception_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Exception_k__BackingField;
}
template<typename TResult>
constexpr ::System::Exception* const& Firebase::Dispatcher_CallbackStorage_1<TResult>::__cordl_internal_get__Exception_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Exception_k__BackingField;
}
template<typename TResult>
constexpr void Firebase::Dispatcher_CallbackStorage_1<TResult>::__cordl_internal_set__Exception_k__BackingField(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____Exception_k__BackingField, value);
}
template<typename TResult>
inline void Firebase::Dispatcher_CallbackStorage_1<TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Dispatcher_CallbackStorage_1<TResult>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TResult>
inline TResult Firebase::Dispatcher_CallbackStorage_1<TResult>::get_Result()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Dispatcher_CallbackStorage_1<TResult>*>::get(),
                        "get_Result",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method);
}
template<typename TResult>
inline void Firebase::Dispatcher_CallbackStorage_1<TResult>::set_Result(TResult  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Dispatcher_CallbackStorage_1<TResult>*>::get(),
                        "set_Result",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template<typename TResult>
inline ::System::Exception* Firebase::Dispatcher_CallbackStorage_1<TResult>::get_Exception()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Dispatcher_CallbackStorage_1<TResult>*>::get(),
                        "get_Exception",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
template<typename TResult>
inline void Firebase::Dispatcher_CallbackStorage_1<TResult>::set_Exception(::System::Exception*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Dispatcher_CallbackStorage_1<TResult>*>::get(),
                        "set_Exception",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template<typename TResult>
inline ::Firebase::Dispatcher_CallbackStorage_1<TResult>* Firebase::Dispatcher_CallbackStorage_1<TResult>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Dispatcher_CallbackStorage_1<TResult>*>());
}
// Ctor Parameters []
template<typename TResult>
constexpr ::Firebase::Dispatcher_CallbackStorage_1<TResult>::Dispatcher_CallbackStorage_1()   {
}
template<typename TResult>
constexpr ::System::Func_1<TResult>*& Firebase::Dispatcher__Run_c__AnonStorey0_1<TResult>::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
template<typename TResult>
constexpr ::System::Func_1<TResult>* const& Firebase::Dispatcher__Run_c__AnonStorey0_1<TResult>::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
template<typename TResult>
constexpr void Firebase::Dispatcher__Run_c__AnonStorey0_1<TResult>::__cordl_internal_set_callback(::System::Func_1<TResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___callback, value);
}
template<typename TResult>
constexpr ::Firebase::Dispatcher_CallbackStorage_1<TResult>*& Firebase::Dispatcher__Run_c__AnonStorey0_1<TResult>::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
template<typename TResult>
constexpr ::Firebase::Dispatcher_CallbackStorage_1<TResult>* const& Firebase::Dispatcher__Run_c__AnonStorey0_1<TResult>::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
template<typename TResult>
constexpr void Firebase::Dispatcher__Run_c__AnonStorey0_1<TResult>::__cordl_internal_set_result(::Firebase::Dispatcher_CallbackStorage_1<TResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___result, value);
}
template<typename TResult>
constexpr ::System::Threading::EventWaitHandle*& Firebase::Dispatcher__Run_c__AnonStorey0_1<TResult>::__cordl_internal_get_waitHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitHandle;
}
template<typename TResult>
constexpr ::System::Threading::EventWaitHandle* const& Firebase::Dispatcher__Run_c__AnonStorey0_1<TResult>::__cordl_internal_get_waitHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitHandle;
}
template<typename TResult>
constexpr void Firebase::Dispatcher__Run_c__AnonStorey0_1<TResult>::__cordl_internal_set_waitHandle(::System::Threading::EventWaitHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___waitHandle, value);
}
template<typename TResult>
inline void Firebase::Dispatcher__Run_c__AnonStorey0_1<TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Dispatcher__Run_c__AnonStorey0_1<TResult>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TResult>
inline void Firebase::Dispatcher__Run_c__AnonStorey0_1<TResult>::__m__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Dispatcher__Run_c__AnonStorey0_1<TResult>*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TResult>
inline ::Firebase::Dispatcher__Run_c__AnonStorey0_1<TResult>* Firebase::Dispatcher__Run_c__AnonStorey0_1<TResult>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Dispatcher__Run_c__AnonStorey0_1<TResult>*>());
}
// Ctor Parameters []
template<typename TResult>
constexpr ::Firebase::Dispatcher__Run_c__AnonStorey0_1<TResult>::Dispatcher__Run_c__AnonStorey0_1()   {
}
template<typename TResult>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<TResult>*& Firebase::Dispatcher__RunAsync_c__AnonStorey1_1<TResult>::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
template<typename TResult>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<TResult>* const& Firebase::Dispatcher__RunAsync_c__AnonStorey1_1<TResult>::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
template<typename TResult>
constexpr void Firebase::Dispatcher__RunAsync_c__AnonStorey1_1<TResult>::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<TResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___tcs, value);
}
template<typename TResult>
constexpr ::System::Func_1<TResult>*& Firebase::Dispatcher__RunAsync_c__AnonStorey1_1<TResult>::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
template<typename TResult>
constexpr ::System::Func_1<TResult>* const& Firebase::Dispatcher__RunAsync_c__AnonStorey1_1<TResult>::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
template<typename TResult>
constexpr void Firebase::Dispatcher__RunAsync_c__AnonStorey1_1<TResult>::__cordl_internal_set_callback(::System::Func_1<TResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___callback, value);
}
template<typename TResult>
inline void Firebase::Dispatcher__RunAsync_c__AnonStorey1_1<TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Dispatcher__RunAsync_c__AnonStorey1_1<TResult>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TResult>
inline void Firebase::Dispatcher__RunAsync_c__AnonStorey1_1<TResult>::__m__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Dispatcher__RunAsync_c__AnonStorey1_1<TResult>*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TResult>
inline ::Firebase::Dispatcher__RunAsync_c__AnonStorey1_1<TResult>* Firebase::Dispatcher__RunAsync_c__AnonStorey1_1<TResult>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Dispatcher__RunAsync_c__AnonStorey1_1<TResult>*>());
}
// Ctor Parameters []
template<typename TResult>
constexpr ::Firebase::Dispatcher__RunAsync_c__AnonStorey1_1<TResult>::Dispatcher__RunAsync_c__AnonStorey1_1()   {
}
//  Writing Method size for method: ::Firebase::Dispatcher._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Dispatcher::*)()>(&::Firebase::Dispatcher::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x19201fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Dispatcher*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Dispatcher.ManagesThisThread
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Firebase::Dispatcher::*)()>(&::Firebase::Dispatcher::ManagesThisThread)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1922630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Dispatcher*>::get(),
                        "ManagesThisThread",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Dispatcher.PollJobs
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Dispatcher::*)()>(&::Firebase::Dispatcher::PollJobs)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x191f9cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Dispatcher*>::get(),
                        "PollJobs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Firebase::Dispatcher::__cordl_internal_get_ownerThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerThreadId;
}
constexpr int32_t const& Firebase::Dispatcher::__cordl_internal_get_ownerThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerThreadId;
}
constexpr void Firebase::Dispatcher::__cordl_internal_set_ownerThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ownerThreadId = value;
}
constexpr ::System::Collections::Generic::Queue_1<::System::Action*>*& Firebase::Dispatcher::__cordl_internal_get_queue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queue;
}
constexpr ::System::Collections::Generic::Queue_1<::System::Action*>* const& Firebase::Dispatcher::__cordl_internal_get_queue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queue;
}
constexpr void Firebase::Dispatcher::__cordl_internal_set_queue(::System::Collections::Generic::Queue_1<::System::Action*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___queue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Dispatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Dispatcher*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TResult>
inline TResult Firebase::Dispatcher::Run(::System::Func_1<TResult>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Dispatcher*>::get(),
                    "Run",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TResult>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method, callback);
}
template<typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* Firebase::Dispatcher::RunAsync(::System::Func_1<TResult>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Dispatcher*>::get(),
                    "RunAsync",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TResult>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(this, ___internal_method, callback);
}
template<typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* Firebase::Dispatcher::RunAsyncNow(::System::Func_1<TResult>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Dispatcher*>::get(),
                    "RunAsyncNow",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TResult>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(nullptr, ___internal_method, callback);
}
inline bool Firebase::Dispatcher::ManagesThisThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Dispatcher*>::get(),
                        "ManagesThisThread",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Firebase::Dispatcher::PollJobs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Dispatcher*>::get(),
                        "PollJobs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Dispatcher* Firebase::Dispatcher::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Dispatcher*>());
}
// Ctor Parameters []
constexpr ::Firebase::Dispatcher::Dispatcher()   {
}
