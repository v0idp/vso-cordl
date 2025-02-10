#pragma once
// IWYU pragma private; include "Mono/Unity/X509ChainImplUnityTls.hpp"
#include "Mono/Unity/zzzz__UnityTls_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainImpl_impl.hpp"
#include "Mono/Unity/zzzz__X509ChainImplUnityTls_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainElementCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainPolicy_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatusFlags_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatus_def.hpp"
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::X509ChainImplUnityTls::*)(::Mono::Unity::UnityTls_unitytls_x509list_ref, bool)>(&::Mono::Unity::X509ChainImplUnityTls::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2a07d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::UnityTls_unitytls_x509list_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::X509ChainImplUnityTls::*)(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list>, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>, bool)>(&::Mono::Unity::X509ChainImplUnityTls::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2a09148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.get_IsValid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Unity::X509ChainImplUnityTls::*)()>(&::Mono::Unity::X509ChainImplUnityTls::get_IsValid)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a093a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.get_NativeCertificateChain
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::UnityTls_unitytls_x509list_ref (::Mono::Unity::X509ChainImplUnityTls::*)()>(&::Mono::Unity::X509ChainImplUnityTls::get_NativeCertificateChain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a093c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                        "get_NativeCertificateChain",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.get_ChainElements
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* (::Mono::Unity::X509ChainImplUnityTls::*)()>(&::Mono::Unity::X509ChainImplUnityTls::get_ChainElements)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x2a093d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.AddStatus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::X509ChainImplUnityTls::*)(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&::Mono::Unity::X509ChainImplUnityTls::AddStatus)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2a096a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.get_ChainPolicy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainPolicy* (::Mono::Unity::X509ChainImplUnityTls::*)()>(&::Mono::Unity::X509ChainImplUnityTls::get_ChainPolicy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a097a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.Build
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Unity::X509ChainImplUnityTls::*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(&::Mono::Unity::X509ChainImplUnityTls::Build)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a097ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::X509ChainImplUnityTls::*)()>(&::Mono::Unity::X509ChainImplUnityTls::Reset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a097b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::X509ChainImplUnityTls.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::X509ChainImplUnityTls::*)(bool)>(&::Mono::Unity::X509ChainImplUnityTls::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2a09824;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_elements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elements;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* const& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_elements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elements;
}
constexpr void Mono::Unity::X509ChainImplUnityTls::__cordl_internal_set_elements(::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list>& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_ownedList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownedList;
}
constexpr ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list> const& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_ownedList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownedList;
}
constexpr void Mono::Unity::X509ChainImplUnityTls::__cordl_internal_set_ownedList(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ownedList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::UnityTls_unitytls_x509list_ref& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_nativeCertificateChain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nativeCertificateChain;
}
constexpr ::Mono::Unity::UnityTls_unitytls_x509list_ref const& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_nativeCertificateChain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nativeCertificateChain;
}
constexpr void Mono::Unity::X509ChainImplUnityTls::__cordl_internal_set_nativeCertificateChain(::Mono::Unity::UnityTls_unitytls_x509list_ref  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nativeCertificateChain = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainPolicy*& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_policy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___policy;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* const& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_policy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___policy;
}
constexpr void Mono::Unity::X509ChainImplUnityTls::__cordl_internal_set_policy(::System::Security::Cryptography::X509Certificates::X509ChainPolicy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___policy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_chainStatusList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chainStatusList;
}
constexpr ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus>* const& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_chainStatusList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chainStatusList;
}
constexpr void Mono::Unity::X509ChainImplUnityTls::__cordl_internal_set_chainStatusList(::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chainStatusList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_reverseOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseOrder;
}
constexpr bool const& Mono::Unity::X509ChainImplUnityTls::__cordl_internal_get_reverseOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseOrder;
}
constexpr void Mono::Unity::X509ChainImplUnityTls::__cordl_internal_set_reverseOrder(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseOrder = value;
}
inline void Mono::Unity::X509ChainImplUnityTls::_ctor(::Mono::Unity::UnityTls_unitytls_x509list_ref  nativeCertificateChain, bool  reverseOrder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::UnityTls_unitytls_x509list_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nativeCertificateChain, reverseOrder);
}
inline void Mono::Unity::X509ChainImplUnityTls::_ctor(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list>  ownedList, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>  errorState, bool  reverseOrder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ownedList, errorState, reverseOrder);
}
inline bool Mono::Unity::X509ChainImplUnityTls::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Mono::Unity::UnityTls_unitytls_x509list_ref Mono::Unity::X509ChainImplUnityTls::get_NativeCertificateChain()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                        "get_NativeCertificateChain",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Unity::UnityTls_unitytls_x509list_ref, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* Mono::Unity::X509ChainImplUnityTls::get_ChainElements()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*, false>(this, ___internal_method);
}
inline void Mono::Unity::X509ChainImplUnityTls::AddStatus(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  error)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* Mono::Unity::X509ChainImplUnityTls::get_ChainPolicy()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainPolicy*, false>(this, ___internal_method);
}
inline bool Mono::Unity::X509ChainImplUnityTls::Build(::System::Security::Cryptography::X509Certificates::X509Certificate2*  certificate)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, certificate);
}
inline void Mono::Unity::X509ChainImplUnityTls::Reset()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Unity::X509ChainImplUnityTls::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::X509ChainImplUnityTls*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::Mono::Unity::X509ChainImplUnityTls* Mono::Unity::X509ChainImplUnityTls::New_ctor(::Mono::Unity::UnityTls_unitytls_x509list_ref  nativeCertificateChain, bool  reverseOrder)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::X509ChainImplUnityTls*>(nativeCertificateChain, reverseOrder));
}
inline ::Mono::Unity::X509ChainImplUnityTls* Mono::Unity::X509ChainImplUnityTls::New_ctor(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list>  ownedList, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>  errorState, bool  reverseOrder)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::X509ChainImplUnityTls*>(ownedList, errorState, reverseOrder));
}
// Ctor Parameters []
constexpr ::Mono::Unity::X509ChainImplUnityTls::X509ChainImplUnityTls()   {
}
