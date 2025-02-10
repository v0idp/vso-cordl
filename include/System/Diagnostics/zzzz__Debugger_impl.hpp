#pragma once
// IWYU pragma private; include "System/Diagnostics/Debugger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__Debugger_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::Debugger.NotifyOfCrossThreadDependency
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Diagnostics::Debugger::NotifyOfCrossThreadDependency)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2712424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Debugger*>::get(),
                        "NotifyOfCrossThreadDependency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void System::Diagnostics::Debugger::setStaticF_DefaultCategory(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "DefaultCategory", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Debugger*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Diagnostics::Debugger::getStaticF_DefaultCategory()  {
return ::cordl_internals::getStaticField<::StringW, "DefaultCategory", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Debugger*>::get>();
}
inline void System::Diagnostics::Debugger::NotifyOfCrossThreadDependency()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Debugger*>::get(),
                        "NotifyOfCrossThreadDependency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Debugger::Debugger()   {
}
