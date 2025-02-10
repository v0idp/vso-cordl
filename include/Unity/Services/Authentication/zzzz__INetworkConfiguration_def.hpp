#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/INetworkConfiguration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(INetworkConfiguration)
// Forward declare root types
namespace Unity::Services::Authentication {
class INetworkConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::INetworkConfiguration);
// Dependencies 
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.INetworkConfiguration
class CORDL_TYPE INetworkConfiguration {
public:
// Declarations
 __declspec(property(get=get_Retries)) int32_t  Retries;

 __declspec(property(get=get_Timeout)) int32_t  Timeout;

/// @brief Method get_Retries, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_Retries() ;

/// @brief Method get_Timeout, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_Timeout() ;

// Ctor Parameters [CppParam { name: "", ty: "INetworkConfiguration", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
INetworkConfiguration(INetworkConfiguration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11569};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::INetworkConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::INetworkConfiguration*, "Unity.Services.Authentication", "INetworkConfiguration");
