#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DESCryptoServiceProvider.hpp"
#include "System/Security/Cryptography/zzzz__DES_impl.hpp"
#include "System/Security/Cryptography/zzzz__DESCryptoServiceProvider_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::DESCryptoServiceProvider._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DESCryptoServiceProvider::*)()>(&::System::Security::Cryptography::DESCryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2611adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DESCryptoServiceProvider.CreateEncryptor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform* (::System::Security::Cryptography::DESCryptoServiceProvider::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::System::Security::Cryptography::DESCryptoServiceProvider::CreateEncryptor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2611d68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DESCryptoServiceProvider.CreateDecryptor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform* (::System::Security::Cryptography::DESCryptoServiceProvider::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::System::Security::Cryptography::DESCryptoServiceProvider::CreateDecryptor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2611e98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DESCryptoServiceProvider.GenerateKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DESCryptoServiceProvider::*)()>(&::System::Security::Cryptography::DESCryptoServiceProvider::GenerateKey)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2611fc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DESCryptoServiceProvider.GenerateIV
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DESCryptoServiceProvider::*)()>(&::System::Security::Cryptography::DESCryptoServiceProvider::GenerateIV)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26120a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::DESCryptoServiceProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::DESCryptoServiceProvider::CreateEncryptor(::ArrayW<uint8_t,::Array<uint8_t>*>  rgbKey, ::ArrayW<uint8_t,::Array<uint8_t>*>  rgbIV)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*, false>(this, ___internal_method, rgbKey, rgbIV);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::DESCryptoServiceProvider::CreateDecryptor(::ArrayW<uint8_t,::Array<uint8_t>*>  rgbKey, ::ArrayW<uint8_t,::Array<uint8_t>*>  rgbIV)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(),
                    23
                )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*, false>(this, ___internal_method, rgbKey, rgbIV);
}
inline void System::Security::Cryptography::DESCryptoServiceProvider::GenerateKey()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(),
                    24
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::DESCryptoServiceProvider::GenerateIV()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DESCryptoServiceProvider*>::get(),
                    25
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::DESCryptoServiceProvider* System::Security::Cryptography::DESCryptoServiceProvider::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::DESCryptoServiceProvider*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::DESCryptoServiceProvider::DESCryptoServiceProvider()   {
}
