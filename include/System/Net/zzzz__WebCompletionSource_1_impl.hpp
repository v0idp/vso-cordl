#pragma once
// IWYU pragma private; include "System/Net/WebCompletionSource_1.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebCompletionSource_1_def.hpp"
#include "System/Net/zzzz__WebCompletionSource_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__OperationCanceledException_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::System::Net::WebCompletionSource_1_Status<T>::WebCompletionSource_1_Status(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Net::WebCompletionSource_1_Status<T>::WebCompletionSource_1_Status()   {
}
template<typename T>
constexpr ::System::Net::WebCompletionSource_1_Status<T>  System::Net::WebCompletionSource_1_Status<T>::Running{static_cast<int32_t>(0x0)};
template<typename T>
constexpr ::System::Net::WebCompletionSource_1_Status<T>  System::Net::WebCompletionSource_1_Status<T>::Completed{static_cast<int32_t>(0x1)};
template<typename T>
constexpr ::System::Net::WebCompletionSource_1_Status<T>  System::Net::WebCompletionSource_1_Status<T>::Canceled{static_cast<int32_t>(0x2)};
template<typename T>
constexpr ::System::Net::WebCompletionSource_1_Status<T>  System::Net::WebCompletionSource_1_Status<T>::Faulted{static_cast<int32_t>(0x3)};
template<typename T>
constexpr ::System::Net::WebCompletionSource_1_Status<T>& System::Net::WebCompletionSource_1_Result<T>::__cordl_internal_get__Status_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
template<typename T>
constexpr ::System::Net::WebCompletionSource_1_Status<T> const& System::Net::WebCompletionSource_1_Result<T>::__cordl_internal_get__Status_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
template<typename T>
constexpr void System::Net::WebCompletionSource_1_Result<T>::__cordl_internal_set__Status_k__BackingField(::System::Net::WebCompletionSource_1_Status<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Status_k__BackingField = value;
}
template<typename T>
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& System::Net::WebCompletionSource_1_Result<T>::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
template<typename T>
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& System::Net::WebCompletionSource_1_Result<T>::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
template<typename T>
constexpr void System::Net::WebCompletionSource_1_Result<T>::__cordl_internal_set__Error_k__BackingField(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____Error_k__BackingField, value);
}
template<typename T>
constexpr T& System::Net::WebCompletionSource_1_Result<T>::__cordl_internal_get__Argument_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Argument_k__BackingField;
}
template<typename T>
constexpr T const& System::Net::WebCompletionSource_1_Result<T>::__cordl_internal_get__Argument_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Argument_k__BackingField;
}
template<typename T>
constexpr void System::Net::WebCompletionSource_1_Result<T>::__cordl_internal_set__Argument_k__BackingField(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____Argument_k__BackingField, value);
}
template<typename T>
inline ::System::Net::WebCompletionSource_1_Status<T> System::Net::WebCompletionSource_1_Result<T>::get_Status()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1_Result<T>*>::get(),
                        "get_Status",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebCompletionSource_1_Status<T>, false>(this, ___internal_method);
}
template<typename T>
inline bool System::Net::WebCompletionSource_1_Result<T>::get_Success()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1_Result<T>*>::get(),
                        "get_Success",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template<typename T>
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* System::Net::WebCompletionSource_1_Result<T>::get_Error()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1_Result<T>*>::get(),
                        "get_Error",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, false>(this, ___internal_method);
}
template<typename T>
inline T System::Net::WebCompletionSource_1_Result<T>::get_Argument()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1_Result<T>*>::get(),
                        "get_Argument",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template<typename T>
inline void System::Net::WebCompletionSource_1_Result<T>::_ctor(T  argument)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1_Result<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, argument);
}
template<typename T>
inline void System::Net::WebCompletionSource_1_Result<T>::_ctor(::System::Net::WebCompletionSource_1_Status<T>  state, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1_Result<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebCompletionSource_1_Status<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, error);
}
template<typename T>
inline ::System::Net::WebCompletionSource_1_Result<T>* System::Net::WebCompletionSource_1_Result<T>::New_ctor(T  argument)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::WebCompletionSource_1_Result<T>*>(argument));
}
template<typename T>
inline ::System::Net::WebCompletionSource_1_Result<T>* System::Net::WebCompletionSource_1_Result<T>::New_ctor(::System::Net::WebCompletionSource_1_Status<T>  state, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  error)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::WebCompletionSource_1_Result<T>*>(state, error));
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Net::WebCompletionSource_1_Result<T>::WebCompletionSource_1_Result()   {
}
template<typename T>
inline void System::Net::WebCompletionSource_1__WaitForCompletion_d__15<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1__WaitForCompletion_d__15<T>>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T>
inline void System::Net::WebCompletionSource_1__WaitForCompletion_d__15<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1__WaitForCompletion_d__15<T>>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr  System::Net::WebCompletionSource_1__WaitForCompletion_d__15<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::Net::WebCompletionSource_1__WaitForCompletion_d__15<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebCompletionSource_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebCompletionSource_1_Result<T>*>", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::System::Net::WebCompletionSource_1__WaitForCompletion_d__15<T>::WebCompletionSource_1__WaitForCompletion_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>  __t__builder, ::System::Net::WebCompletionSource_1<T>*  __4__this, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebCompletionSource_1_Result<T>*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Net::WebCompletionSource_1__WaitForCompletion_d__15<T>::WebCompletionSource_1__WaitForCompletion_d__15()   {
}
template<typename T>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::WebCompletionSource_1_Result<T>*>*& System::Net::WebCompletionSource_1<T>::__cordl_internal_get_completion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completion;
}
template<typename T>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::WebCompletionSource_1_Result<T>*>* const& System::Net::WebCompletionSource_1<T>::__cordl_internal_get_completion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completion;
}
template<typename T>
constexpr void System::Net::WebCompletionSource_1<T>::__cordl_internal_set_completion(::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::WebCompletionSource_1_Result<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___completion, value);
}
template<typename T>
constexpr ::System::Net::WebCompletionSource_1_Result<T>*& System::Net::WebCompletionSource_1<T>::__cordl_internal_get_currentResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentResult;
}
template<typename T>
constexpr ::System::Net::WebCompletionSource_1_Result<T>* const& System::Net::WebCompletionSource_1<T>::__cordl_internal_get_currentResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentResult;
}
template<typename T>
constexpr void System::Net::WebCompletionSource_1<T>::__cordl_internal_set_currentResult(::System::Net::WebCompletionSource_1_Result<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___currentResult, value);
}
template<typename T>
inline void System::Net::WebCompletionSource_1<T>::_ctor(bool  runAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, runAsync);
}
template<typename T>
inline ::System::Net::WebCompletionSource_1_Result<T>* System::Net::WebCompletionSource_1<T>::get_CurrentResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(),
                        "get_CurrentResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebCompletionSource_1_Result<T>*, false>(this, ___internal_method);
}
template<typename T>
inline ::System::Threading::Tasks::Task* System::Net::WebCompletionSource_1<T>::get_Task()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(),
                        "get_Task",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
template<typename T>
inline bool System::Net::WebCompletionSource_1<T>::TrySetCompleted(T  argument)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(),
                        "TrySetCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, argument);
}
template<typename T>
inline bool System::Net::WebCompletionSource_1<T>::TrySetCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(),
                        "TrySetCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template<typename T>
inline bool System::Net::WebCompletionSource_1<T>::TrySetCanceled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(),
                        "TrySetCanceled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template<typename T>
inline bool System::Net::WebCompletionSource_1<T>::TrySetCanceled(::System::OperationCanceledException*  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(),
                        "TrySetCanceled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::OperationCanceledException*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, error);
}
template<typename T>
inline bool System::Net::WebCompletionSource_1<T>::TrySetException(::System::Exception*  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(),
                        "TrySetException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, error);
}
template<typename T>
inline void System::Net::WebCompletionSource_1<T>::ThrowOnError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(),
                        "ThrowOnError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* System::Net::WebCompletionSource_1<T>::WaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(),
                        "WaitForCompletion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method);
}
template<typename T>
inline ::System::Net::WebCompletionSource_1<T>* System::Net::WebCompletionSource_1<T>::New_ctor(bool  runAsync)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::WebCompletionSource_1<T>*>(runAsync));
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Net::WebCompletionSource_1<T>::WebCompletionSource_1()   {
}
