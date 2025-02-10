#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509Helper2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Helper2_def.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainImpl_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Helper2.GetMonoCertificate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Certificate* (*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(&::System::Security::Cryptography::X509Certificates::X509Helper2::GetMonoCertificate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2d0ef30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Helper2*>::get(),
                        "GetMonoCertificate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Helper2.CreateChainImpl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainImpl* (*)(bool)>(&::System::Security::Cryptography::X509Certificates::X509Helper2::CreateChainImpl)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d0babc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Helper2*>::get(),
                        "CreateChainImpl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Helper2.IsValid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Security::Cryptography::X509Certificates::X509ChainImpl*)>(&::System::Security::Cryptography::X509Certificates::X509Helper2::IsValid)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d11104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Helper2*>::get(),
                        "IsValid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509ChainImpl*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Helper2.ThrowIfContextInvalid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Security::Cryptography::X509Certificates::X509ChainImpl*)>(&::System::Security::Cryptography::X509Certificates::X509Helper2::ThrowIfContextInvalid)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2d0ba28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Helper2*>::get(),
                        "ThrowIfContextInvalid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509ChainImpl*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Helper2.GetInvalidChainContextException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)()>(&::System::Security::Cryptography::X509Certificates::X509Helper2::GetInvalidChainContextException)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d0ca50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Helper2*>::get(),
                        "GetInvalidChainContextException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::Mono::Security::X509::X509Certificate* System::Security::Cryptography::X509Certificates::X509Helper2::GetMonoCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2*  certificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Helper2*>::get(),
                        "GetMonoCertificate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*, false>(nullptr, ___internal_method, certificate);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainImpl* System::Security::Cryptography::X509Certificates::X509Helper2::CreateChainImpl(bool  useMachineContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Helper2*>::get(),
                        "CreateChainImpl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainImpl*, false>(nullptr, ___internal_method, useMachineContext);
}
inline bool System::Security::Cryptography::X509Certificates::X509Helper2::IsValid(::System::Security::Cryptography::X509Certificates::X509ChainImpl*  impl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Helper2*>::get(),
                        "IsValid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509ChainImpl*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, impl);
}
inline void System::Security::Cryptography::X509Certificates::X509Helper2::ThrowIfContextInvalid(::System::Security::Cryptography::X509Certificates::X509ChainImpl*  impl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Helper2*>::get(),
                        "ThrowIfContextInvalid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509ChainImpl*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, impl);
}
inline ::System::Exception* System::Security::Cryptography::X509Certificates::X509Helper2::GetInvalidChainContextException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509Helper2*>::get(),
                        "GetInvalidChainContextException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509Helper2::X509Helper2()   {
}
