#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/AccessToken.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AccessToken)
// Forward declare root types
namespace Unity::Services::RemoteConfig {
class AccessToken;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::RemoteConfig::AccessToken);
// Dependencies System.Object
namespace Unity::Services::RemoteConfig {
// Is value type: false
// CS Name: Unity.Services.RemoteConfig.AccessToken
class CORDL_TYPE AccessToken : public ::System::Object {
public:
// Declarations
/// @brief Field aud, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_aud, put=__cordl_internal_set_aud)) ::ArrayW<::StringW,::Array<::StringW>*>  aud;

static inline ::Unity::Services::RemoteConfig::AccessToken* New_ctor() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __cordl_internal_get_aud() const;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __cordl_internal_get_aud() ;

constexpr void __cordl_internal_set_aud(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

/// @brief Method .ctor, addr 0x2eaad10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccessToken() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccessToken", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AccessToken(AccessToken && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccessToken", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccessToken(AccessToken const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12226};

/// @brief Field aud, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW,::Array<::StringW>*>  ___aud;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::RemoteConfig::AccessToken, ___aud) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::RemoteConfig::AccessToken, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::RemoteConfig
NEED_NO_BOX(::Unity::Services::RemoteConfig::AccessToken);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::RemoteConfig::AccessToken*, "Unity.Services.RemoteConfig", "AccessToken");
