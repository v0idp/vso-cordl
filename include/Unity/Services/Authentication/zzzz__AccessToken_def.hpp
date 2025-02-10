#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AccessToken.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Authentication/zzzz__BaseJwt_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AccessToken)
// Forward declare root types
namespace Unity::Services::Authentication {
class AccessToken;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::AccessToken);
// Dependencies Unity.Services.Authentication.BaseJwt
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.AccessToken
class CORDL_TYPE AccessToken : public ::Unity::Services::Authentication::BaseJwt {
public:
// Declarations
/// @brief Field Audience, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Audience, put=__cordl_internal_set_Audience)) ::ArrayW<::StringW,::Array<::StringW>*>  Audience;

static inline ::Unity::Services::Authentication::AccessToken* New_ctor() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __cordl_internal_get_Audience() const;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __cordl_internal_get_Audience() ;

constexpr void __cordl_internal_set_Audience(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

/// @brief Method .ctor, addr 0x2e985b8, size 0x8, virtual false, abstract: false, final false
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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11564};

/// @brief Field Audience, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW,::Array<::StringW>*>  ___Audience;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::AccessToken, ___Audience) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::AccessToken, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::AccessToken);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::AccessToken*, "Unity.Services.Authentication", "AccessToken");
