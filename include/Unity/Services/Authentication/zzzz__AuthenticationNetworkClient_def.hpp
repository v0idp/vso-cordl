#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationNetworkClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Authentication/zzzz__IAuthenticationNetworkClient_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AuthenticationNetworkClient)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace Unity::Services::Authentication {
class AccessTokenComponent;
}
namespace Unity::Services::Authentication {
class INetworkHandler;
}
namespace Unity::Services::Authentication {
class SignInResponse;
}
namespace Unity::Services::Core::Configuration::Internal {
class ICloudProjectId;
}
namespace Unity::Services::Core::Environments::Internal {
class IEnvironments;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class AuthenticationNetworkClient;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::AuthenticationNetworkClient);
// Dependencies System.Object, Unity.Services.Authentication.IAuthenticationNetworkClient
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.AuthenticationNetworkClient
class CORDL_TYPE AuthenticationNetworkClient : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CloudProjectIdComponent)) ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  CloudProjectIdComponent;

 __declspec(property(get=get_EnvironmentComponent)) ::Unity::Services::Core::Environments::Internal::IEnvironments*  EnvironmentComponent;

 __declspec(property(get=get_EnvironmentName)) ::StringW  EnvironmentName;

 __declspec(property(get=get_NetworkHandler)) ::Unity::Services::Authentication::INetworkHandler*  NetworkHandler;

/// @brief Field <AccessTokenComponent>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__AccessTokenComponent_k__BackingField, put=__cordl_internal_set__AccessTokenComponent_k__BackingField)) ::Unity::Services::Authentication::AccessTokenComponent*  _AccessTokenComponent_k__BackingField;

/// @brief Field <CloudProjectIdComponent>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__CloudProjectIdComponent_k__BackingField, put=__cordl_internal_set__CloudProjectIdComponent_k__BackingField)) ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  _CloudProjectIdComponent_k__BackingField;

/// @brief Field <EnvironmentComponent>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__EnvironmentComponent_k__BackingField, put=__cordl_internal_set__EnvironmentComponent_k__BackingField)) ::Unity::Services::Core::Environments::Internal::IEnvironments*  _EnvironmentComponent_k__BackingField;

/// @brief Field <NetworkHandler>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__NetworkHandler_k__BackingField, put=__cordl_internal_set__NetworkHandler_k__BackingField)) ::Unity::Services::Authentication::INetworkHandler*  _NetworkHandler_k__BackingField;

/// @brief Field m_AnonymousUrl, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AnonymousUrl, put=__cordl_internal_set_m_AnonymousUrl)) ::StringW  m_AnonymousUrl;

/// @brief Field m_CommonHeaders, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CommonHeaders, put=__cordl_internal_set_m_CommonHeaders)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  m_CommonHeaders;

/// @brief Field m_ExternalTokenUrl, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ExternalTokenUrl, put=__cordl_internal_set_m_ExternalTokenUrl)) ::StringW  m_ExternalTokenUrl;

/// @brief Field m_LinkExternalTokenUrl, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LinkExternalTokenUrl, put=__cordl_internal_set_m_LinkExternalTokenUrl)) ::StringW  m_LinkExternalTokenUrl;

/// @brief Field m_SessionTokenUrl, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SessionTokenUrl, put=__cordl_internal_set_m_SessionTokenUrl)) ::StringW  m_SessionTokenUrl;

/// @brief Field m_UnlinkExternalTokenUrl, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UnlinkExternalTokenUrl, put=__cordl_internal_set_m_UnlinkExternalTokenUrl)) ::StringW  m_UnlinkExternalTokenUrl;

/// @brief Field m_UpdatePasswordUrl, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UpdatePasswordUrl, put=__cordl_internal_set_m_UpdatePasswordUrl)) ::StringW  m_UpdatePasswordUrl;

/// @brief Field m_UsernamePasswordSignInUrl, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UsernamePasswordSignInUrl, put=__cordl_internal_set_m_UsernamePasswordSignInUrl)) ::StringW  m_UsernamePasswordSignInUrl;

/// @brief Field m_UsernamePasswordSignUpUrl, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UsernamePasswordSignUpUrl, put=__cordl_internal_set_m_UsernamePasswordSignUpUrl)) ::StringW  m_UsernamePasswordSignUpUrl;

/// @brief Field m_UsersUrl, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UsersUrl, put=__cordl_internal_set_m_UsersUrl)) ::StringW  m_UsersUrl;

/// @brief Convert operator to "::Unity::Services::Authentication::IAuthenticationNetworkClient"
constexpr operator  ::Unity::Services::Authentication::IAuthenticationNetworkClient*() noexcept;

/// @brief Method GetCommonHeaders, addr 0x2e987b0, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GetCommonHeaders() ;

static inline ::Unity::Services::Authentication::AuthenticationNetworkClient* New_ctor(::StringW  host, ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  cloudProjectId, ::Unity::Services::Core::Environments::Internal::IEnvironments*  environment, ::Unity::Services::Authentication::INetworkHandler*  networkHandler, ::Unity::Services::Authentication::AccessTokenComponent*  accessToken) ;

/// @brief Method SignInAnonymouslyAsync, addr 0x2e986d0, size 0xe0, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>* SignInAnonymouslyAsync() ;

/// @brief Method SignInWithSessionTokenAsync, addr 0x2e988bc, size 0x11c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>* SignInWithSessionTokenAsync(::StringW  token) ;

/// @brief Method WithEnvironment, addr 0x2e9882c, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* WithEnvironment(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers) ;

constexpr ::Unity::Services::Authentication::AccessTokenComponent* const& __cordl_internal_get__AccessTokenComponent_k__BackingField() const;

constexpr ::Unity::Services::Authentication::AccessTokenComponent*& __cordl_internal_get__AccessTokenComponent_k__BackingField() ;

constexpr ::Unity::Services::Core::Configuration::Internal::ICloudProjectId* const& __cordl_internal_get__CloudProjectIdComponent_k__BackingField() const;

constexpr ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*& __cordl_internal_get__CloudProjectIdComponent_k__BackingField() ;

constexpr ::Unity::Services::Core::Environments::Internal::IEnvironments* const& __cordl_internal_get__EnvironmentComponent_k__BackingField() const;

constexpr ::Unity::Services::Core::Environments::Internal::IEnvironments*& __cordl_internal_get__EnvironmentComponent_k__BackingField() ;

constexpr ::Unity::Services::Authentication::INetworkHandler* const& __cordl_internal_get__NetworkHandler_k__BackingField() const;

constexpr ::Unity::Services::Authentication::INetworkHandler*& __cordl_internal_get__NetworkHandler_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_m_AnonymousUrl() const;

constexpr ::StringW& __cordl_internal_get_m_AnonymousUrl() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_m_CommonHeaders() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_m_CommonHeaders() ;

constexpr ::StringW const& __cordl_internal_get_m_ExternalTokenUrl() const;

constexpr ::StringW& __cordl_internal_get_m_ExternalTokenUrl() ;

constexpr ::StringW const& __cordl_internal_get_m_LinkExternalTokenUrl() const;

constexpr ::StringW& __cordl_internal_get_m_LinkExternalTokenUrl() ;

constexpr ::StringW const& __cordl_internal_get_m_SessionTokenUrl() const;

constexpr ::StringW& __cordl_internal_get_m_SessionTokenUrl() ;

constexpr ::StringW const& __cordl_internal_get_m_UnlinkExternalTokenUrl() const;

constexpr ::StringW& __cordl_internal_get_m_UnlinkExternalTokenUrl() ;

constexpr ::StringW const& __cordl_internal_get_m_UpdatePasswordUrl() const;

constexpr ::StringW& __cordl_internal_get_m_UpdatePasswordUrl() ;

constexpr ::StringW const& __cordl_internal_get_m_UsernamePasswordSignInUrl() const;

constexpr ::StringW& __cordl_internal_get_m_UsernamePasswordSignInUrl() ;

constexpr ::StringW const& __cordl_internal_get_m_UsernamePasswordSignUpUrl() const;

constexpr ::StringW& __cordl_internal_get_m_UsernamePasswordSignUpUrl() ;

constexpr ::StringW const& __cordl_internal_get_m_UsersUrl() const;

constexpr ::StringW& __cordl_internal_get_m_UsersUrl() ;

constexpr void __cordl_internal_set__AccessTokenComponent_k__BackingField(::Unity::Services::Authentication::AccessTokenComponent*  value) ;

constexpr void __cordl_internal_set__CloudProjectIdComponent_k__BackingField(::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  value) ;

constexpr void __cordl_internal_set__EnvironmentComponent_k__BackingField(::Unity::Services::Core::Environments::Internal::IEnvironments*  value) ;

constexpr void __cordl_internal_set__NetworkHandler_k__BackingField(::Unity::Services::Authentication::INetworkHandler*  value) ;

constexpr void __cordl_internal_set_m_AnonymousUrl(::StringW  value) ;

constexpr void __cordl_internal_set_m_CommonHeaders(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_m_ExternalTokenUrl(::StringW  value) ;

constexpr void __cordl_internal_set_m_LinkExternalTokenUrl(::StringW  value) ;

constexpr void __cordl_internal_set_m_SessionTokenUrl(::StringW  value) ;

constexpr void __cordl_internal_set_m_UnlinkExternalTokenUrl(::StringW  value) ;

constexpr void __cordl_internal_set_m_UpdatePasswordUrl(::StringW  value) ;

constexpr void __cordl_internal_set_m_UsernamePasswordSignInUrl(::StringW  value) ;

constexpr void __cordl_internal_set_m_UsernamePasswordSignUpUrl(::StringW  value) ;

constexpr void __cordl_internal_set_m_UsersUrl(::StringW  value) ;

/// @brief Method .ctor, addr 0x2e96af0, size 0x310, virtual false, abstract: false, final false
inline void _ctor(::StringW  host, ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  cloudProjectId, ::Unity::Services::Core::Environments::Internal::IEnvironments*  environment, ::Unity::Services::Authentication::INetworkHandler*  networkHandler, ::Unity::Services::Authentication::AccessTokenComponent*  accessToken) ;

/// @brief Method get_CloudProjectIdComponent, addr 0x2e98618, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Core::Configuration::Internal::ICloudProjectId* get_CloudProjectIdComponent() ;

/// @brief Method get_EnvironmentComponent, addr 0x2e98620, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Core::Environments::Internal::IEnvironments* get_EnvironmentComponent() ;

/// @brief Method get_EnvironmentName, addr 0x2e98630, size 0xa0, virtual false, abstract: false, final false
inline ::StringW get_EnvironmentName() ;

/// @brief Method get_NetworkHandler, addr 0x2e98628, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Authentication::INetworkHandler* get_NetworkHandler() ;

/// @brief Convert to "::Unity::Services::Authentication::IAuthenticationNetworkClient"
constexpr ::Unity::Services::Authentication::IAuthenticationNetworkClient* i___Unity__Services__Authentication__IAuthenticationNetworkClient() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationNetworkClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationNetworkClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationNetworkClient(AuthenticationNetworkClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationNetworkClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationNetworkClient(AuthenticationNetworkClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11573};

/// @brief Field <AccessTokenComponent>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Authentication::AccessTokenComponent*  ____AccessTokenComponent_k__BackingField;

/// @brief Field <CloudProjectIdComponent>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  ____CloudProjectIdComponent_k__BackingField;

/// @brief Field <EnvironmentComponent>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Core::Environments::Internal::IEnvironments*  ____EnvironmentComponent_k__BackingField;

/// @brief Field <NetworkHandler>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Unity::Services::Authentication::INetworkHandler*  ____NetworkHandler_k__BackingField;

/// @brief Field m_AnonymousUrl, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___m_AnonymousUrl;

/// @brief Field m_SessionTokenUrl, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___m_SessionTokenUrl;

/// @brief Field m_ExternalTokenUrl, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___m_ExternalTokenUrl;

/// @brief Field m_LinkExternalTokenUrl, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___m_LinkExternalTokenUrl;

/// @brief Field m_UnlinkExternalTokenUrl, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___m_UnlinkExternalTokenUrl;

/// @brief Field m_UsersUrl, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___m_UsersUrl;

/// @brief Field m_UsernamePasswordSignInUrl, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___m_UsernamePasswordSignInUrl;

/// @brief Field m_UsernamePasswordSignUpUrl, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___m_UsernamePasswordSignUpUrl;

/// @brief Field m_UpdatePasswordUrl, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___m_UpdatePasswordUrl;

/// @brief Field m_CommonHeaders, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___m_CommonHeaders;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::AuthenticationNetworkClient, ____AccessTokenComponent_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationNetworkClient, ____CloudProjectIdComponent_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationNetworkClient, ____EnvironmentComponent_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationNetworkClient, ____NetworkHandler_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationNetworkClient, ___m_AnonymousUrl) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationNetworkClient, ___m_SessionTokenUrl) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationNetworkClient, ___m_ExternalTokenUrl) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationNetworkClient, ___m_LinkExternalTokenUrl) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationNetworkClient, ___m_UnlinkExternalTokenUrl) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationNetworkClient, ___m_UsersUrl) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationNetworkClient, ___m_UsernamePasswordSignInUrl) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationNetworkClient, ___m_UsernamePasswordSignUpUrl) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationNetworkClient, ___m_UpdatePasswordUrl) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationNetworkClient, ___m_CommonHeaders) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::AuthenticationNetworkClient, 0x80>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::AuthenticationNetworkClient);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::AuthenticationNetworkClient*, "Unity.Services.Authentication", "AuthenticationNetworkClient");
