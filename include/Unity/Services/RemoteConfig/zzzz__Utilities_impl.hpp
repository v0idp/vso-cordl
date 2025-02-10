#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/Utilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/RemoteConfig/zzzz__Utilities_def.hpp"
//  Writing Method size for method: ::Unity::Services::RemoteConfig::Utilities.CheckForInternetConnection
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::Services::RemoteConfig::Utilities::CheckForInternetConnection)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x2eab7c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::Utilities*>::get(),
                        "CheckForInternetConnection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline bool Unity::Services::RemoteConfig::Utilities::CheckForInternetConnection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::Utilities*>::get(),
                        "CheckForInternetConnection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::RemoteConfig::Utilities::Utilities()   {
}
