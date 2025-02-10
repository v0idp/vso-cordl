#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/LinkWithOculusRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Authentication/zzzz__LinkWithExternalTokenRequest_def.hpp"
CORDL_MODULE_EXPORT(LinkWithOculusRequest)
// Forward declare root types
namespace Unity::Services::Authentication {
class LinkWithOculusRequest;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::LinkWithOculusRequest);
// Dependencies Unity.Services.Authentication.LinkWithExternalTokenRequest
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.LinkWithOculusRequest
class CORDL_TYPE LinkWithOculusRequest : public ::Unity::Services::Authentication::LinkWithExternalTokenRequest {
public:
// Declarations
static inline ::Unity::Services::Authentication::LinkWithOculusRequest* New_ctor() ;

/// @brief Method .ctor, addr 0x2e98530, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinkWithOculusRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinkWithOculusRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkWithOculusRequest(LinkWithOculusRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkWithOculusRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkWithOculusRequest(LinkWithOculusRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11546};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::LinkWithOculusRequest, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::LinkWithOculusRequest);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::LinkWithOculusRequest*, "Unity.Services.Authentication", "LinkWithOculusRequest");
