#pragma once
// IWYU pragma private; include "Unity/Services/Core/Environments/EnvironmentsOptionsExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Environments/zzzz__EnvironmentsOptionsExtensions_def.hpp"
#include "Unity/Services/Core/zzzz__InitializationOptions_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Environments::EnvironmentsOptionsExtensions.SetEnvironmentName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::InitializationOptions* (*)(::Unity::Services::Core::InitializationOptions*, ::StringW)>(&::Unity::Services::Core::Environments::EnvironmentsOptionsExtensions::SetEnvironmentName)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2e9d7d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Environments::EnvironmentsOptionsExtensions*>::get(),
                        "SetEnvironmentName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::InitializationOptions*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Services::Core::InitializationOptions* Unity::Services::Core::Environments::EnvironmentsOptionsExtensions::SetEnvironmentName(::Unity::Services::Core::InitializationOptions*  self, ::StringW  environmentName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Environments::EnvironmentsOptionsExtensions*>::get(),
                        "SetEnvironmentName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::InitializationOptions*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::InitializationOptions*, false>(nullptr, ___internal_method, self, environmentName);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Environments::EnvironmentsOptionsExtensions::EnvironmentsOptionsExtensions()   {
}
