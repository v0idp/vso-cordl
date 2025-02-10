#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationNetworkClient.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__IAuthenticationNetworkClient_impl.hpp"
#include "Unity/Services/Authentication/zzzz__AuthenticationNetworkClient_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Unity/Services/Authentication/zzzz__AccessTokenComponent_def.hpp"
#include "Unity/Services/Authentication/zzzz__INetworkHandler_def.hpp"
#include "Unity/Services/Authentication/zzzz__SignInResponse_def.hpp"
#include "Unity/Services/Core/Configuration/Internal/zzzz__ICloudProjectId_def.hpp"
#include "Unity/Services/Core/Environments/Internal/zzzz__IEnvironments_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationNetworkClient.get_CloudProjectIdComponent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Configuration::Internal::ICloudProjectId* (::Unity::Services::Authentication::AuthenticationNetworkClient::*)()>(&::Unity::Services::Authentication::AuthenticationNetworkClient::get_CloudProjectIdComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e98618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationNetworkClient*>::get(),
                        "get_CloudProjectIdComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationNetworkClient.get_EnvironmentComponent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Environments::Internal::IEnvironments* (::Unity::Services::Authentication::AuthenticationNetworkClient::*)()>(&::Unity::Services::Authentication::AuthenticationNetworkClient::get_EnvironmentComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e98620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationNetworkClient*>::get(),
                        "get_EnvironmentComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationNetworkClient.get_NetworkHandler
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Authentication::INetworkHandler* (::Unity::Services::Authentication::AuthenticationNetworkClient::*)()>(&::Unity::Services::Authentication::AuthenticationNetworkClient::get_NetworkHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e98628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationNetworkClient*>::get(),
                        "get_NetworkHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationNetworkClient.get_EnvironmentName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Authentication::AuthenticationNetworkClient::*)()>(&::Unity::Services::Authentication::AuthenticationNetworkClient::get_EnvironmentName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2e98630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationNetworkClient*>::get(),
                        "get_EnvironmentName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationNetworkClient._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationNetworkClient::*)(::StringW, ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*, ::Unity::Services::Core::Environments::Internal::IEnvironments*, ::Unity::Services::Authentication::INetworkHandler*, ::Unity::Services::Authentication::AccessTokenComponent*)>(&::Unity::Services::Authentication::AuthenticationNetworkClient::_ctor)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x2e96af0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationNetworkClient*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Environments::Internal::IEnvironments*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::INetworkHandler*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::AccessTokenComponent*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationNetworkClient.SignInAnonymouslyAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>* (::Unity::Services::Authentication::AuthenticationNetworkClient::*)()>(&::Unity::Services::Authentication::AuthenticationNetworkClient::SignInAnonymouslyAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2e986d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationNetworkClient*>::get(),
                        "SignInAnonymouslyAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationNetworkClient.SignInWithSessionTokenAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>* (::Unity::Services::Authentication::AuthenticationNetworkClient::*)(::StringW)>(&::Unity::Services::Authentication::AuthenticationNetworkClient::SignInWithSessionTokenAsync)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2e988bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationNetworkClient*>::get(),
                        "SignInWithSessionTokenAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationNetworkClient.WithEnvironment
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::Unity::Services::Authentication::AuthenticationNetworkClient::*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Unity::Services::Authentication::AuthenticationNetworkClient::WithEnvironment)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2e9882c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationNetworkClient*>::get(),
                        "WithEnvironment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationNetworkClient.GetCommonHeaders
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::Unity::Services::Authentication::AuthenticationNetworkClient::*)()>(&::Unity::Services::Authentication::AuthenticationNetworkClient::GetCommonHeaders)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e987b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationNetworkClient*>::get(),
                        "GetCommonHeaders",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Authentication::AccessTokenComponent*& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get__AccessTokenComponent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AccessTokenComponent_k__BackingField;
}
constexpr ::Unity::Services::Authentication::AccessTokenComponent* const& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get__AccessTokenComponent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AccessTokenComponent_k__BackingField;
}
constexpr void Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_set__AccessTokenComponent_k__BackingField(::Unity::Services::Authentication::AccessTokenComponent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AccessTokenComponent_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get__CloudProjectIdComponent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CloudProjectIdComponent_k__BackingField;
}
constexpr ::Unity::Services::Core::Configuration::Internal::ICloudProjectId* const& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get__CloudProjectIdComponent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CloudProjectIdComponent_k__BackingField;
}
constexpr void Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_set__CloudProjectIdComponent_k__BackingField(::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CloudProjectIdComponent_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Environments::Internal::IEnvironments*& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get__EnvironmentComponent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentComponent_k__BackingField;
}
constexpr ::Unity::Services::Core::Environments::Internal::IEnvironments* const& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get__EnvironmentComponent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnvironmentComponent_k__BackingField;
}
constexpr void Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_set__EnvironmentComponent_k__BackingField(::Unity::Services::Core::Environments::Internal::IEnvironments*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____EnvironmentComponent_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Authentication::INetworkHandler*& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get__NetworkHandler_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NetworkHandler_k__BackingField;
}
constexpr ::Unity::Services::Authentication::INetworkHandler* const& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get__NetworkHandler_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NetworkHandler_k__BackingField;
}
constexpr void Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_set__NetworkHandler_k__BackingField(::Unity::Services::Authentication::INetworkHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____NetworkHandler_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get_m_AnonymousUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnonymousUrl;
}
constexpr ::StringW const& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get_m_AnonymousUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnonymousUrl;
}
constexpr void Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_set_m_AnonymousUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AnonymousUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get_m_SessionTokenUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SessionTokenUrl;
}
constexpr ::StringW const& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get_m_SessionTokenUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SessionTokenUrl;
}
constexpr void Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_set_m_SessionTokenUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SessionTokenUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get_m_ExternalTokenUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExternalTokenUrl;
}
constexpr ::StringW const& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get_m_ExternalTokenUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExternalTokenUrl;
}
constexpr void Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_set_m_ExternalTokenUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ExternalTokenUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get_m_LinkExternalTokenUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LinkExternalTokenUrl;
}
constexpr ::StringW const& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get_m_LinkExternalTokenUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LinkExternalTokenUrl;
}
constexpr void Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_set_m_LinkExternalTokenUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LinkExternalTokenUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get_m_UnlinkExternalTokenUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnlinkExternalTokenUrl;
}
constexpr ::StringW const& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get_m_UnlinkExternalTokenUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnlinkExternalTokenUrl;
}
constexpr void Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_set_m_UnlinkExternalTokenUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UnlinkExternalTokenUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get_m_UsersUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UsersUrl;
}
constexpr ::StringW const& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get_m_UsersUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UsersUrl;
}
constexpr void Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_set_m_UsersUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UsersUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get_m_UsernamePasswordSignInUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UsernamePasswordSignInUrl;
}
constexpr ::StringW const& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get_m_UsernamePasswordSignInUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UsernamePasswordSignInUrl;
}
constexpr void Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_set_m_UsernamePasswordSignInUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UsernamePasswordSignInUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get_m_UsernamePasswordSignUpUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UsernamePasswordSignUpUrl;
}
constexpr ::StringW const& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get_m_UsernamePasswordSignUpUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UsernamePasswordSignUpUrl;
}
constexpr void Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_set_m_UsernamePasswordSignUpUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UsernamePasswordSignUpUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get_m_UpdatePasswordUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdatePasswordUrl;
}
constexpr ::StringW const& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get_m_UpdatePasswordUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdatePasswordUrl;
}
constexpr void Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_set_m_UpdatePasswordUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UpdatePasswordUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get_m_CommonHeaders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CommonHeaders;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_get_m_CommonHeaders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CommonHeaders;
}
constexpr void Unity::Services::Authentication::AuthenticationNetworkClient::__cordl_internal_set_m_CommonHeaders(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CommonHeaders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Core::Configuration::Internal::ICloudProjectId* Unity::Services::Authentication::AuthenticationNetworkClient::get_CloudProjectIdComponent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationNetworkClient*>::get(),
                        "get_CloudProjectIdComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Environments::Internal::IEnvironments* Unity::Services::Authentication::AuthenticationNetworkClient::get_EnvironmentComponent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationNetworkClient*>::get(),
                        "get_EnvironmentComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Environments::Internal::IEnvironments*, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::INetworkHandler* Unity::Services::Authentication::AuthenticationNetworkClient::get_NetworkHandler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationNetworkClient*>::get(),
                        "get_NetworkHandler",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Authentication::INetworkHandler*, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::Authentication::AuthenticationNetworkClient::get_EnvironmentName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationNetworkClient*>::get(),
                        "get_EnvironmentName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::AuthenticationNetworkClient::_ctor(::StringW  host, ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  cloudProjectId, ::Unity::Services::Core::Environments::Internal::IEnvironments*  environment, ::Unity::Services::Authentication::INetworkHandler*  networkHandler, ::Unity::Services::Authentication::AccessTokenComponent*  accessToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationNetworkClient*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::ICloudProjectId*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Environments::Internal::IEnvironments*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::INetworkHandler*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::AccessTokenComponent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, host, cloudProjectId, environment, networkHandler, accessToken);
}
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>* Unity::Services::Authentication::AuthenticationNetworkClient::SignInAnonymouslyAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationNetworkClient*>::get(),
                        "SignInAnonymouslyAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>* Unity::Services::Authentication::AuthenticationNetworkClient::SignInWithSessionTokenAsync(::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationNetworkClient*>::get(),
                        "SignInWithSessionTokenAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>*, false>(this, ___internal_method, token);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Unity::Services::Authentication::AuthenticationNetworkClient::WithEnvironment(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationNetworkClient*>::get(),
                        "WithEnvironment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, false>(this, ___internal_method, headers);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Unity::Services::Authentication::AuthenticationNetworkClient::GetCommonHeaders()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationNetworkClient*>::get(),
                        "GetCommonHeaders",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::AuthenticationNetworkClient* Unity::Services::Authentication::AuthenticationNetworkClient::New_ctor(::StringW  host, ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  cloudProjectId, ::Unity::Services::Core::Environments::Internal::IEnvironments*  environment, ::Unity::Services::Authentication::INetworkHandler*  networkHandler, ::Unity::Services::Authentication::AccessTokenComponent*  accessToken)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::AuthenticationNetworkClient*>(host, cloudProjectId, environment, networkHandler, accessToken));
}
/// @brief Convert operator to "::Unity::Services::Authentication::IAuthenticationNetworkClient"
constexpr  Unity::Services::Authentication::AuthenticationNetworkClient::operator ::Unity::Services::Authentication::IAuthenticationNetworkClient*() noexcept {
return static_cast<::Unity::Services::Authentication::IAuthenticationNetworkClient*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Authentication::IAuthenticationNetworkClient"
constexpr ::Unity::Services::Authentication::IAuthenticationNetworkClient* Unity::Services::Authentication::AuthenticationNetworkClient::i___Unity__Services__Authentication__IAuthenticationNetworkClient() noexcept {
return static_cast<::Unity::Services::Authentication::IAuthenticationNetworkClient*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::AuthenticationNetworkClient::AuthenticationNetworkClient()   {
}
