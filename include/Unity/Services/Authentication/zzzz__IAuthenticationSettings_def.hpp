#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/IAuthenticationSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IAuthenticationSettings)
// Forward declare root types
namespace Unity::Services::Authentication {
class IAuthenticationSettings;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::IAuthenticationSettings);
// Dependencies 
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.IAuthenticationSettings
class CORDL_TYPE IAuthenticationSettings {
public:
// Declarations
 __declspec(property(get=get_AccessTokenExpiryBuffer)) int32_t  AccessTokenExpiryBuffer;

 __declspec(property(get=get_AccessTokenRefreshBuffer)) int32_t  AccessTokenRefreshBuffer;

 __declspec(property(get=get_RefreshAttemptFrequency)) int32_t  RefreshAttemptFrequency;

/// @brief Method get_AccessTokenExpiryBuffer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_AccessTokenExpiryBuffer() ;

/// @brief Method get_AccessTokenRefreshBuffer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_AccessTokenRefreshBuffer() ;

/// @brief Method get_RefreshAttemptFrequency, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_RefreshAttemptFrequency() ;

// Ctor Parameters [CppParam { name: "", ty: "IAuthenticationSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAuthenticationSettings(IAuthenticationSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11568};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::IAuthenticationSettings);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::IAuthenticationSettings*, "Unity.Services.Authentication", "IAuthenticationSettings");
