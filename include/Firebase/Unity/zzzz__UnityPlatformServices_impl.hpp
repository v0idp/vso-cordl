#pragma once
// IWYU pragma private; include "Firebase/Unity/UnityPlatformServices.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Unity/zzzz__UnityPlatformServices_def.hpp"
//  Writing Method size for method: ::Firebase::Unity::UnityPlatformServices.SetupServices
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Firebase::Unity::UnityPlatformServices::SetupServices)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x191f844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Unity::UnityPlatformServices*>::get(),
                        "SetupServices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Firebase::Unity::UnityPlatformServices::SetupServices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Unity::UnityPlatformServices*>::get(),
                        "SetupServices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Firebase::Unity::UnityPlatformServices::UnityPlatformServices()   {
}
