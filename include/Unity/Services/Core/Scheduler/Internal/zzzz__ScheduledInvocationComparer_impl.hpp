#pragma once
// IWYU pragma private; include "Unity/Services/Core/Scheduler/Internal/ScheduledInvocationComparer.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__ScheduledInvocationComparer_def.hpp"
#include "Unity/Services/Core/Scheduler/Internal/zzzz__ScheduledInvocation_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer.Compare
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer::*)(::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*, ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*)>(&::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer::Compare)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2ea6e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer*>::get(),
                        "Compare",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer::*)()>(&::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ea61ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline int32_t Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer::Compare(::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*  x, ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*  y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer*>::get(),
                        "Compare",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
inline void Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer* Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>"
constexpr  Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer::operator ::System::Collections::Generic::IComparer_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>"
constexpr ::System::Collections::Generic::IComparer_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>* Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer::i___System__Collections__Generic__IComparer_1___Unity__Services__Core__Scheduler__Internal__ScheduledInvocation__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Unity::Services::Core::Scheduler::Internal::ScheduledInvocation*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Scheduler::Internal::ScheduledInvocationComparer::ScheduledInvocationComparer()   {
}
