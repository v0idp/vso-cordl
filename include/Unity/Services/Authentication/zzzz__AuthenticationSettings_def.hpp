#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Authentication/zzzz__IAuthenticationSettings_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticationSettings)
// Forward declare root types
namespace Unity::Services::Authentication {
class AuthenticationSettings;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::AuthenticationSettings);
// Dependencies System.Object, Unity.Services.Authentication.IAuthenticationSettings
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.AuthenticationSettings
class CORDL_TYPE AuthenticationSettings : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AccessTokenExpiryBuffer, put=set_AccessTokenExpiryBuffer)) int32_t  AccessTokenExpiryBuffer;

 __declspec(property(get=get_AccessTokenRefreshBuffer, put=set_AccessTokenRefreshBuffer)) int32_t  AccessTokenRefreshBuffer;

 __declspec(property(get=get_RefreshAttemptFrequency, put=set_RefreshAttemptFrequency)) int32_t  RefreshAttemptFrequency;

/// @brief Field <AccessTokenExpiryBuffer>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__AccessTokenExpiryBuffer_k__BackingField, put=__cordl_internal_set__AccessTokenExpiryBuffer_k__BackingField)) int32_t  _AccessTokenExpiryBuffer_k__BackingField;

/// @brief Field <AccessTokenRefreshBuffer>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__AccessTokenRefreshBuffer_k__BackingField, put=__cordl_internal_set__AccessTokenRefreshBuffer_k__BackingField)) int32_t  _AccessTokenRefreshBuffer_k__BackingField;

/// @brief Field <RefreshAttemptFrequency>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__RefreshAttemptFrequency_k__BackingField, put=__cordl_internal_set__RefreshAttemptFrequency_k__BackingField)) int32_t  _RefreshAttemptFrequency_k__BackingField;

/// @brief Convert operator to "::Unity::Services::Authentication::IAuthenticationSettings"
constexpr operator  ::Unity::Services::Authentication::IAuthenticationSettings*() noexcept;

static inline ::Unity::Services::Authentication::AuthenticationSettings* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__AccessTokenExpiryBuffer_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__AccessTokenExpiryBuffer_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__AccessTokenRefreshBuffer_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__AccessTokenRefreshBuffer_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__RefreshAttemptFrequency_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__RefreshAttemptFrequency_k__BackingField() ;

constexpr void __cordl_internal_set__AccessTokenExpiryBuffer_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__AccessTokenRefreshBuffer_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__RefreshAttemptFrequency_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x2e96438, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AccessTokenExpiryBuffer, addr 0x2e985e0, size 0x8, virtual true, abstract: false, final true
inline int32_t get_AccessTokenExpiryBuffer() ;

/// @brief Method get_AccessTokenRefreshBuffer, addr 0x2e985d0, size 0x8, virtual true, abstract: false, final true
inline int32_t get_AccessTokenRefreshBuffer() ;

/// @brief Method get_RefreshAttemptFrequency, addr 0x2e985f0, size 0x8, virtual true, abstract: false, final true
inline int32_t get_RefreshAttemptFrequency() ;

/// @brief Convert to "::Unity::Services::Authentication::IAuthenticationSettings"
constexpr ::Unity::Services::Authentication::IAuthenticationSettings* i___Unity__Services__Authentication__IAuthenticationSettings() noexcept;

/// @brief Method set_AccessTokenExpiryBuffer, addr 0x2e985e8, size 0x8, virtual false, abstract: false, final false
inline void set_AccessTokenExpiryBuffer(int32_t  value) ;

/// @brief Method set_AccessTokenRefreshBuffer, addr 0x2e985d8, size 0x8, virtual false, abstract: false, final false
inline void set_AccessTokenRefreshBuffer(int32_t  value) ;

/// @brief Method set_RefreshAttemptFrequency, addr 0x2e985f8, size 0x8, virtual false, abstract: false, final false
inline void set_RefreshAttemptFrequency(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationSettings(AuthenticationSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationSettings(AuthenticationSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11567};

/// @brief Field <AccessTokenRefreshBuffer>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____AccessTokenRefreshBuffer_k__BackingField;

/// @brief Field <AccessTokenExpiryBuffer>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____AccessTokenExpiryBuffer_k__BackingField;

/// @brief Field <RefreshAttemptFrequency>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____RefreshAttemptFrequency_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::AuthenticationSettings, ____AccessTokenRefreshBuffer_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationSettings, ____AccessTokenExpiryBuffer_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationSettings, ____RefreshAttemptFrequency_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::AuthenticationSettings, 0x20>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::AuthenticationSettings);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::AuthenticationSettings*, "Unity.Services.Authentication", "AuthenticationSettings");
