#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/AsyncStateMachineAttribute.hpp"
#include "System/Runtime/CompilerServices/zzzz__StateMachineAttribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncStateMachineAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncStateMachineAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::AsyncStateMachineAttribute::*)(::System::Type*)>(&::System::Runtime::CompilerServices::AsyncStateMachineAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x267fac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncStateMachineAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::AsyncStateMachineAttribute::_ctor(::System::Type*  stateMachineType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncStateMachineAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachineType);
}
inline ::System::Runtime::CompilerServices::AsyncStateMachineAttribute* System::Runtime::CompilerServices::AsyncStateMachineAttribute::New_ctor(::System::Type*  stateMachineType)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::AsyncStateMachineAttribute*>(stateMachineType));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::AsyncStateMachineAttribute::AsyncStateMachineAttribute()   {
}
