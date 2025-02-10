#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/LinkWithSteamRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Authentication/zzzz__LinkWithExternalTokenRequest_def.hpp"
CORDL_MODULE_EXPORT(LinkWithSteamRequest)
// Forward declare root types
namespace Unity::Services::Authentication {
class LinkWithSteamRequest;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::LinkWithSteamRequest);
// Dependencies Unity.Services.Authentication.LinkWithExternalTokenRequest
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.LinkWithSteamRequest
class CORDL_TYPE LinkWithSteamRequest : public ::Unity::Services::Authentication::LinkWithExternalTokenRequest {
public:
// Declarations
static inline ::Unity::Services::Authentication::LinkWithSteamRequest* New_ctor() ;

/// @brief Method .ctor, addr 0x2e98528, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinkWithSteamRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinkWithSteamRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkWithSteamRequest(LinkWithSteamRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkWithSteamRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkWithSteamRequest(LinkWithSteamRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11545};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::LinkWithSteamRequest, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::LinkWithSteamRequest);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::LinkWithSteamRequest*, "Unity.Services.Authentication", "LinkWithSteamRequest");
