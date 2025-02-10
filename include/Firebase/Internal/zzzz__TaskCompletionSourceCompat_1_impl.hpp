#pragma once
// IWYU pragma private; include "Firebase/Internal/TaskCompletionSourceCompat_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Internal/zzzz__TaskCompletionSourceCompat_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/zzzz__AggregateException_def.hpp"
template<typename T>
inline void Firebase::Internal::TaskCompletionSourceCompat_1<T>::SetExceptionInternal(::System::Threading::Tasks::TaskCompletionSource_1<T>*  tcs, ::System::AggregateException*  exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Internal::TaskCompletionSourceCompat_1<T>*>::get(),
                        "SetExceptionInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AggregateException*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcs, exception);
}
template<typename T>
inline void Firebase::Internal::TaskCompletionSourceCompat_1<T>::SetException(::System::Threading::Tasks::TaskCompletionSource_1<T>*  tcs, ::System::AggregateException*  exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Internal::TaskCompletionSourceCompat_1<T>*>::get(),
                        "SetException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AggregateException*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tcs, exception);
}
// Ctor Parameters []
template<typename T>
constexpr ::Firebase::Internal::TaskCompletionSourceCompat_1<T>::TaskCompletionSourceCompat_1()   {
}
