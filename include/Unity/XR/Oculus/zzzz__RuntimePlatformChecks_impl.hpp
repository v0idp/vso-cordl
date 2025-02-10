#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/RuntimePlatformChecks.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/Oculus/zzzz__RuntimePlatformChecks_def.hpp"
//  Writing Method size for method: ::Unity::XR::Oculus::RuntimePlatformChecks.IsSupportedPlatform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::RuntimePlatformChecks::IsSupportedPlatform)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2f3c29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::RuntimePlatformChecks*>::get(),
                        "IsSupportedPlatform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::Oculus::RuntimePlatformChecks::setStaticF_isRuntimeUnsupportedPlatform(bool  value)  {
::cordl_internals::setStaticField<bool, "isRuntimeUnsupportedPlatform", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::RuntimePlatformChecks*>::get>(std::forward<bool>(value));
}
inline bool Unity::XR::Oculus::RuntimePlatformChecks::getStaticF_isRuntimeUnsupportedPlatform()  {
return ::cordl_internals::getStaticField<bool, "isRuntimeUnsupportedPlatform", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::RuntimePlatformChecks*>::get>();
}
inline bool Unity::XR::Oculus::RuntimePlatformChecks::IsSupportedPlatform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::RuntimePlatformChecks*>::get(),
                        "IsSupportedPlatform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::RuntimePlatformChecks::RuntimePlatformChecks()   {
}
