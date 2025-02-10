#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/JwtDecoder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/RemoteConfig/zzzz__JwtDecoder_def.hpp"
//  Writing Method size for method: ::Unity::Services::RemoteConfig::JwtDecoder.Base64UrlDecode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (*)(::StringW)>(&::Unity::Services::RemoteConfig::JwtDecoder::Base64UrlDecode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2eaad18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::JwtDecoder*>::get(),
                        "Base64UrlDecode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Unity::Services::RemoteConfig::JwtDecoder::Base64UrlDecode(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::JwtDecoder*>::get(),
                        "Base64UrlDecode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(nullptr, ___internal_method, input);
}
// Ctor Parameters []
constexpr ::Unity::Services::RemoteConfig::JwtDecoder::JwtDecoder()   {
}
