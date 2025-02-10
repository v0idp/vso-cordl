#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AccessTokenExtraClaims.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AccessTokenExtraClaims)
// Forward declare root types
namespace Unity::Services::Authentication {
class AccessTokenExtraClaims;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::AccessTokenExtraClaims);
// Dependencies System.Object
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.AccessTokenExtraClaims
class CORDL_TYPE AccessTokenExtraClaims : public ::System::Object {
public:
// Declarations
static inline ::Unity::Services::Authentication::AccessTokenExtraClaims* New_ctor() ;

/// @brief Method .ctor, addr 0x2e985c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccessTokenExtraClaims() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccessTokenExtraClaims", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AccessTokenExtraClaims(AccessTokenExtraClaims && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccessTokenExtraClaims", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccessTokenExtraClaims(AccessTokenExtraClaims const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11565};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::AccessTokenExtraClaims, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::AccessTokenExtraClaims);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::AccessTokenExtraClaims*, "Unity.Services.Authentication", "AccessTokenExtraClaims");
