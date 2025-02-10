#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/TaskAsyncOperation.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationBase_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__TaskAsyncOperation_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::TaskAsyncOperation.get_IsCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Core::Internal::TaskAsyncOperation::*)()>(&::Unity::Services::Core::Internal::TaskAsyncOperation::get_IsCompleted)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2e9d8d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::TaskAsyncOperation.SetScheduler
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Services::Core::Internal::TaskAsyncOperation::SetScheduler)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2e9d8f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(),
                        "SetScheduler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task*& Unity::Services::Core::Internal::TaskAsyncOperation::__cordl_internal_get_m_Task()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Task;
}
constexpr ::System::Threading::Tasks::Task* const& Unity::Services::Core::Internal::TaskAsyncOperation::__cordl_internal_get_m_Task() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Task;
}
constexpr void Unity::Services::Core::Internal::TaskAsyncOperation::__cordl_internal_set_m_Task(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Task)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Core::Internal::TaskAsyncOperation::setStaticF_Scheduler(::System::Threading::Tasks::TaskScheduler*  value)  {
::cordl_internals::setStaticField<::System::Threading::Tasks::TaskScheduler*, "Scheduler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get>(std::forward<::System::Threading::Tasks::TaskScheduler*>(value));
}
inline ::System::Threading::Tasks::TaskScheduler* Unity::Services::Core::Internal::TaskAsyncOperation::getStaticF_Scheduler()  {
return ::cordl_internals::getStaticField<::System::Threading::Tasks::TaskScheduler*, "Scheduler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get>();
}
inline bool Unity::Services::Core::Internal::TaskAsyncOperation::get_IsCompleted()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::TaskAsyncOperation::SetScheduler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::TaskAsyncOperation*>::get(),
                        "SetScheduler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::TaskAsyncOperation::TaskAsyncOperation()   {
}
