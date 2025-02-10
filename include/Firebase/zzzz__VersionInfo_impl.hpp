#pragma once
// IWYU pragma private; include "Firebase/VersionInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/zzzz__VersionInfo_def.hpp"
//  Writing Method size for method: ::Firebase::VersionInfo.get_SdkVersion
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Firebase::VersionInfo::get_SdkVersion)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18f35c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::VersionInfo*>::get(),
                        "get_SdkVersion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::StringW Firebase::VersionInfo::get_SdkVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::VersionInfo*>::get(),
                        "get_SdkVersion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Firebase::VersionInfo::VersionInfo()   {
}
