#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/CryptoConvert.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Cryptography/zzzz__CryptoConvert_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::CryptoConvert.ToHex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Mono::Security::Cryptography::CryptoConvert::ToHex)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x25bcd34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::CryptoConvert*>::get(),
                        "ToHex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Mono::Security::Cryptography::CryptoConvert::ToHex(::ArrayW<uint8_t,::Array<uint8_t>*>  input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::CryptoConvert*>::get(),
                        "ToHex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, input);
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::CryptoConvert::CryptoConvert()   {
}
