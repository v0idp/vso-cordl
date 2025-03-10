#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/ValueTaskAwaiter_1.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_impl.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
template<typename TResult>
inline void System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult>::_ctor(::System::Threading::Tasks::ValueTask_1<TResult>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult>>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::ValueTask_1<TResult>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template<typename TResult>
inline bool System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult>>::get(),
                        "get_IsCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template<typename TResult>
inline TResult System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult>>::get(),
                        "GetResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method);
}
template<typename TResult>
inline void System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult>::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult>>::get(),
                        "OnCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation);
}
template<typename TResult>
inline void System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult>::UnsafeOnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult>>::get(),
                        "UnsafeOnCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
template<typename TResult>
constexpr  System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult>::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
template<typename TResult>
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult>::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
template<typename TResult>
constexpr  System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult>::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
template<typename TResult>
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult>::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask_1<TResult>", modifiers: "", def_value: Some("{}") }]
template<typename TResult>
constexpr ::System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult>::ValueTaskAwaiter_1(::System::Threading::Tasks::ValueTask_1<TResult>  _value) noexcept  {
this->_value = _value;
}
// Ctor Parameters []
template<typename TResult>
constexpr ::System::Runtime::CompilerServices::ValueTaskAwaiter_1<TResult>::ValueTaskAwaiter_1()   {
}
