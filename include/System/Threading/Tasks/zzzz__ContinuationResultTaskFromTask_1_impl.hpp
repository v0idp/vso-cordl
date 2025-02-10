#pragma once
// IWYU pragma private; include "System/Threading/Tasks/ContinuationResultTaskFromTask_1.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__ContinuationResultTaskFromTask_1_def.hpp"
#include "System/Threading/Tasks/zzzz__InternalTaskOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TResult>
constexpr ::System::Threading::Tasks::Task*& System::Threading::Tasks::ContinuationResultTaskFromTask_1<TResult>::__cordl_internal_get_m_antecedent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_antecedent;
}
template<typename TResult>
constexpr ::System::Threading::Tasks::Task* const& System::Threading::Tasks::ContinuationResultTaskFromTask_1<TResult>::__cordl_internal_get_m_antecedent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_antecedent;
}
template<typename TResult>
constexpr void System::Threading::Tasks::ContinuationResultTaskFromTask_1<TResult>::__cordl_internal_set_m_antecedent(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___m_antecedent, value);
}
template<typename TResult>
inline void System::Threading::Tasks::ContinuationResultTaskFromTask_1<TResult>::_ctor(::System::Threading::Tasks::Task*  antecedent, ::System::Delegate*  function, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromTask_1<TResult>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, antecedent, function, state, creationOptions, internalOptions);
}
template<typename TResult>
inline void System::Threading::Tasks::ContinuationResultTaskFromTask_1<TResult>::InnerInvoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromTask_1<TResult>*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TResult>
inline ::System::Threading::Tasks::ContinuationResultTaskFromTask_1<TResult>* System::Threading::Tasks::ContinuationResultTaskFromTask_1<TResult>::New_ctor(::System::Threading::Tasks::Task*  antecedent, ::System::Delegate*  function, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::Tasks::ContinuationResultTaskFromTask_1<TResult>*>(antecedent, function, state, creationOptions, internalOptions));
}
// Ctor Parameters []
template<typename TResult>
constexpr ::System::Threading::Tasks::ContinuationResultTaskFromTask_1<TResult>::ContinuationResultTaskFromTask_1()   {
}
