#pragma once
// IWYU pragma private; include "System/Threading/Tasks/TaskExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskExtensions_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::TaskExtensions.Unwrap
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*)>(&::System::Threading::Tasks::TaskExtensions::Unwrap)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2a02514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExtensions*>::get(),
                        "Unwrap",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task* System::Threading::Tasks::TaskExtensions::Unwrap(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExtensions*>::get(),
                        "Unwrap",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, task);
}
template<typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::TaskExtensions::Unwrap(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task_1<TResult>*>*  task)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExtensions*>::get(),
                    "Unwrap",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task_1<TResult>*>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(nullptr, ___internal_method, task);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskExtensions::TaskExtensions()   {
}
