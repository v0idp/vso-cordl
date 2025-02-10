#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/SignInWithSteamRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Authentication/zzzz__SignInWithExternalTokenRequest_def.hpp"
CORDL_MODULE_EXPORT(SignInWithSteamRequest)
// Forward declare root types
namespace Unity::Services::Authentication {
class SignInWithSteamRequest;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::SignInWithSteamRequest);
// Dependencies Unity.Services.Authentication.SignInWithExternalTokenRequest
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.SignInWithSteamRequest
class CORDL_TYPE SignInWithSteamRequest : public ::Unity::Services::Authentication::SignInWithExternalTokenRequest {
public:
// Declarations
static inline ::Unity::Services::Authentication::SignInWithSteamRequest* New_ctor() ;

/// @brief Method .ctor, addr 0x2e98550, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SignInWithSteamRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SignInWithSteamRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignInWithSteamRequest(SignInWithSteamRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignInWithSteamRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignInWithSteamRequest(SignInWithSteamRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11551};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::SignInWithSteamRequest, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::SignInWithSteamRequest);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::SignInWithSteamRequest*, "Unity.Services.Authentication", "SignInWithSteamRequest");
