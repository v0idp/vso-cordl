#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/JwtDecoder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__IJwtDecoder_impl.hpp"
#include "Unity/Services/Authentication/zzzz__JwtDecoder_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::JwtDecoder.Base64UrlDecode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Unity::Services::Authentication::JwtDecoder::*)(::StringW)>(&::Unity::Services::Authentication::JwtDecoder::Base64UrlDecode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2e9a050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::JwtDecoder*>::get(),
                        "Base64UrlDecode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::JwtDecoder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::JwtDecoder::*)()>(&::Unity::Services::Authentication::JwtDecoder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e96560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::JwtDecoder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Authentication::JwtDecoder::setStaticF_k_JwtSeparator(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "k_JwtSeparator", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::JwtDecoder*>::get>(std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t,::Array<char16_t>*> Unity::Services::Authentication::JwtDecoder::getStaticF_k_JwtSeparator()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "k_JwtSeparator", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::JwtDecoder*>::get>();
}
template<typename T>
inline T Unity::Services::Authentication::JwtDecoder::Decode(::StringW  token)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::JwtDecoder*>::get(),
                    "Decode",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, token);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Unity::Services::Authentication::JwtDecoder::Base64UrlDecode(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::JwtDecoder*>::get(),
                        "Base64UrlDecode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(this, ___internal_method, input);
}
inline void Unity::Services::Authentication::JwtDecoder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::JwtDecoder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::JwtDecoder* Unity::Services::Authentication::JwtDecoder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::JwtDecoder*>());
}
/// @brief Convert operator to "::Unity::Services::Authentication::IJwtDecoder"
constexpr  Unity::Services::Authentication::JwtDecoder::operator ::Unity::Services::Authentication::IJwtDecoder*() noexcept {
return static_cast<::Unity::Services::Authentication::IJwtDecoder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Authentication::IJwtDecoder"
constexpr ::Unity::Services::Authentication::IJwtDecoder* Unity::Services::Authentication::JwtDecoder::i___Unity__Services__Authentication__IJwtDecoder() noexcept {
return static_cast<::Unity::Services::Authentication::IJwtDecoder*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::JwtDecoder::JwtDecoder()   {
}
