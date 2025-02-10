#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/Consent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__Consent_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::Consent.get_Pipl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Unity::Services::Analytics::Internal::Consent::get_Pipl)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2e9194c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::Consent*>::get(),
                        "get_Pipl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::StringW Unity::Services::Analytics::Internal::Consent::get_Pipl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::Consent*>::get(),
                        "get_Pipl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::Internal::Consent::Consent()   {
}
