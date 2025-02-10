#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/Generated/PlayerNamesApi.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Authentication/Generated/zzzz__IPlayerNamesApi_def.hpp"
CORDL_MODULE_EXPORT(PlayerNamesApi)
namespace Unity::Services::Authentication::Shared {
class IApiClient;
}
namespace Unity::Services::Authentication::Shared {
class IApiConfiguration;
}
// Forward declare root types
namespace Unity::Services::Authentication::Generated {
class PlayerNamesApi;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::Generated::PlayerNamesApi);
// Dependencies System.Object, Unity.Services.Authentication.Generated.IPlayerNamesApi
namespace Unity::Services::Authentication::Generated {
// Is value type: false
// CS Name: Unity.Services.Authentication.Generated.PlayerNamesApi
class CORDL_TYPE PlayerNamesApi : public ::System::Object {
public:
// Declarations
/// @brief Field <Client>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Client_k__BackingField, put=__cordl_internal_set__Client_k__BackingField)) ::Unity::Services::Authentication::Shared::IApiClient*  _Client_k__BackingField;

/// @brief Field <Configuration>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Configuration_k__BackingField, put=__cordl_internal_set__Configuration_k__BackingField)) ::Unity::Services::Authentication::Shared::IApiConfiguration*  _Configuration_k__BackingField;

/// @brief Convert operator to "::Unity::Services::Authentication::Generated::IPlayerNamesApi"
constexpr operator  ::Unity::Services::Authentication::Generated::IPlayerNamesApi*() noexcept;

static inline ::Unity::Services::Authentication::Generated::PlayerNamesApi* New_ctor(::Unity::Services::Authentication::Shared::IApiClient*  apiClient, ::Unity::Services::Authentication::Shared::IApiConfiguration*  apiConfiguration) ;

constexpr ::Unity::Services::Authentication::Shared::IApiClient* const& __cordl_internal_get__Client_k__BackingField() const;

constexpr ::Unity::Services::Authentication::Shared::IApiClient*& __cordl_internal_get__Client_k__BackingField() ;

constexpr ::Unity::Services::Authentication::Shared::IApiConfiguration* const& __cordl_internal_get__Configuration_k__BackingField() const;

constexpr ::Unity::Services::Authentication::Shared::IApiConfiguration*& __cordl_internal_get__Configuration_k__BackingField() ;

constexpr void __cordl_internal_set__Client_k__BackingField(::Unity::Services::Authentication::Shared::IApiClient*  value) ;

constexpr void __cordl_internal_set__Configuration_k__BackingField(::Unity::Services::Authentication::Shared::IApiConfiguration*  value) ;

/// @brief Method .ctor, addr 0x2e96a54, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Authentication::Shared::IApiClient*  apiClient, ::Unity::Services::Authentication::Shared::IApiConfiguration*  apiConfiguration) ;

/// @brief Convert to "::Unity::Services::Authentication::Generated::IPlayerNamesApi"
constexpr ::Unity::Services::Authentication::Generated::IPlayerNamesApi* i___Unity__Services__Authentication__Generated__IPlayerNamesApi() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerNamesApi() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerNamesApi", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerNamesApi(PlayerNamesApi && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerNamesApi", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerNamesApi(PlayerNamesApi const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11595};

/// @brief Field <Client>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Authentication::Shared::IApiClient*  ____Client_k__BackingField;

/// @brief Field <Configuration>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Unity::Services::Authentication::Shared::IApiConfiguration*  ____Configuration_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::Generated::PlayerNamesApi, ____Client_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::Generated::PlayerNamesApi, ____Configuration_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::Generated::PlayerNamesApi, 0x20>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication::Generated
NEED_NO_BOX(::Unity::Services::Authentication::Generated::PlayerNamesApi);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::Generated::PlayerNamesApi*, "Unity.Services.Authentication.Generated", "PlayerNamesApi");
