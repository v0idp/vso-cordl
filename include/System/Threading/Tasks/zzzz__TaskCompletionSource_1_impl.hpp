#pragma once
// IWYU pragma private; include "System/Threading/Tasks/TaskCompletionSource_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__AggregateException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TResult>
constexpr ::System::Threading::Tasks::Task_1<TResult>*& System::Threading::Tasks::TaskCompletionSource_1<TResult>::__cordl_internal_get__task()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____task;
}
template<typename TResult>
constexpr ::System::Threading::Tasks::Task_1<TResult>* const& System::Threading::Tasks::TaskCompletionSource_1<TResult>::__cordl_internal_get__task() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____task;
}
template<typename TResult>
constexpr void System::Threading::Tasks::TaskCompletionSource_1<TResult>::__cordl_internal_set__task(::System::Threading::Tasks::Task_1<TResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____task, value);
}
template<typename TResult>
inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TResult>
inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::_ctor(::System::Threading::Tasks::TaskCreationOptions  creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, creationOptions);
}
template<typename TResult>
inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::_ctor(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
template<typename TResult>
inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, creationOptions);
}
template<typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::TaskCompletionSource_1<TResult>::get_Task()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(),
                        "get_Task",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(this, ___internal_method);
}
template<typename TResult>
inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::SpinUntilCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(),
                        "SpinUntilCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TResult>
inline bool System::Threading::Tasks::TaskCompletionSource_1<TResult>::TrySetException(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(),
                        "TrySetException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, exception);
}
template<typename TResult>
inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::SetException(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(),
                        "SetException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
template<typename TResult>
inline bool System::Threading::Tasks::TaskCompletionSource_1<TResult>::TrySetResult(TResult  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(),
                        "TrySetResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
template<typename TResult>
inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::SetResult(TResult  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(),
                        "SetResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
template<typename TResult>
inline bool System::Threading::Tasks::TaskCompletionSource_1<TResult>::TrySetCanceled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(),
                        "TrySetCanceled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template<typename TResult>
inline bool System::Threading::Tasks::TaskCompletionSource_1<TResult>::TrySetCanceled(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(),
                        "TrySetCanceled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cancellationToken);
}
template<typename TResult>
inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::SetCanceled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(),
                        "SetCanceled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TResult>
inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::SetException(::System::AggregateException*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(),
                        "SetException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AggregateException*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TResult>
inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>* System::Threading::Tasks::TaskCompletionSource_1<TResult>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>());
}
template<typename TResult>
inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>* System::Threading::Tasks::TaskCompletionSource_1<TResult>::New_ctor(::System::Threading::Tasks::TaskCreationOptions  creationOptions)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>(creationOptions));
}
template<typename TResult>
inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>* System::Threading::Tasks::TaskCompletionSource_1<TResult>::New_ctor(::System::Object*  state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>(state));
}
template<typename TResult>
inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>* System::Threading::Tasks::TaskCompletionSource_1<TResult>::New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>(state, creationOptions));
}
// Ctor Parameters []
template<typename TResult>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<TResult>::TaskCompletionSource_1()   {
}
