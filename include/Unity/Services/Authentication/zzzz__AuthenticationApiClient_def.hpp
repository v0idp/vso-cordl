#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationApiClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Authentication/Shared/zzzz__IApiClient_def.hpp"
CORDL_MODULE_EXPORT(AuthenticationApiClient)
namespace Unity::Services::Authentication {
class INetworkConfiguration;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class AuthenticationApiClient;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::AuthenticationApiClient);
// Dependencies System.Object, Unity.Services.Authentication.Shared.IApiClient
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.AuthenticationApiClient
class CORDL_TYPE AuthenticationApiClient : public ::System::Object {
public:
// Declarations
/// @brief Field <Configuration>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Configuration_k__BackingField, put=__cordl_internal_set__Configuration_k__BackingField)) ::Unity::Services::Authentication::INetworkConfiguration*  _Configuration_k__BackingField;

/// @brief Convert operator to "::Unity::Services::Authentication::Shared::IApiClient"
constexpr operator  ::Unity::Services::Authentication::Shared::IApiClient*() noexcept;

static inline ::Unity::Services::Authentication::AuthenticationApiClient* New_ctor(::Unity::Services::Authentication::INetworkConfiguration*  configuration) ;

constexpr ::Unity::Services::Authentication::INetworkConfiguration* const& __cordl_internal_get__Configuration_k__BackingField() const;

constexpr ::Unity::Services::Authentication::INetworkConfiguration*& __cordl_internal_get__Configuration_k__BackingField() ;

constexpr void __cordl_internal_set__Configuration_k__BackingField(::Unity::Services::Authentication::INetworkConfiguration*  value) ;

/// @brief Method .ctor, addr 0x2e96778, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Authentication::INetworkConfiguration*  configuration) ;

/// @brief Convert to "::Unity::Services::Authentication::Shared::IApiClient"
constexpr ::Unity::Services::Authentication::Shared::IApiClient* i___Unity__Services__Authentication__Shared__IApiClient() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationApiClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationApiClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationApiClient(AuthenticationApiClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationApiClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationApiClient(AuthenticationApiClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11572};

/// @brief Field <Configuration>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Authentication::INetworkConfiguration*  ____Configuration_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::AuthenticationApiClient, ____Configuration_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::AuthenticationApiClient, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::AuthenticationApiClient);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::AuthenticationApiClient*, "Unity.Services.Authentication", "AuthenticationApiClient");
