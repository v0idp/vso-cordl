#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/NetworkConfiguration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Authentication/zzzz__INetworkConfiguration_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkConfiguration)
// Forward declare root types
namespace Unity::Services::Authentication {
class NetworkConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::NetworkConfiguration);
// Dependencies System.Object, Unity.Services.Authentication.INetworkConfiguration
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.NetworkConfiguration
class CORDL_TYPE NetworkConfiguration : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Retries)) int32_t  Retries;

 __declspec(property(get=get_Timeout)) int32_t  Timeout;

/// @brief Field <Retries>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Retries_k__BackingField, put=__cordl_internal_set__Retries_k__BackingField)) int32_t  _Retries_k__BackingField;

/// @brief Field <Timeout>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Timeout_k__BackingField, put=__cordl_internal_set__Timeout_k__BackingField)) int32_t  _Timeout_k__BackingField;

/// @brief Convert operator to "::Unity::Services::Authentication::INetworkConfiguration"
constexpr operator  ::Unity::Services::Authentication::INetworkConfiguration*() noexcept;

static inline ::Unity::Services::Authentication::NetworkConfiguration* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__Retries_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Retries_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Timeout_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Timeout_k__BackingField() ;

constexpr void __cordl_internal_set__Retries_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Timeout_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x2e9661c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Retries, addr 0x2e98600, size 0x8, virtual true, abstract: false, final true
inline int32_t get_Retries() ;

/// @brief Method get_Timeout, addr 0x2e98608, size 0x8, virtual true, abstract: false, final true
inline int32_t get_Timeout() ;

/// @brief Convert to "::Unity::Services::Authentication::INetworkConfiguration"
constexpr ::Unity::Services::Authentication::INetworkConfiguration* i___Unity__Services__Authentication__INetworkConfiguration() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkConfiguration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkConfiguration", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkConfiguration(NetworkConfiguration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkConfiguration", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkConfiguration(NetworkConfiguration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11570};

/// @brief Field <Retries>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Retries_k__BackingField;

/// @brief Field <Timeout>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____Timeout_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::NetworkConfiguration, ____Retries_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::NetworkConfiguration, ____Timeout_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::NetworkConfiguration, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::NetworkConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::NetworkConfiguration*, "Unity.Services.Authentication", "NetworkConfiguration");
