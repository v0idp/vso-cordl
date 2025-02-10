#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/SignInWithAppleGameCenterRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Authentication/zzzz__SignInWithExternalTokenRequest_def.hpp"
CORDL_MODULE_EXPORT(SignInWithAppleGameCenterRequest)
// Forward declare root types
namespace Unity::Services::Authentication {
class SignInWithAppleGameCenterRequest;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::SignInWithAppleGameCenterRequest);
// Dependencies Unity.Services.Authentication.SignInWithExternalTokenRequest
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.SignInWithAppleGameCenterRequest
class CORDL_TYPE SignInWithAppleGameCenterRequest : public ::Unity::Services::Authentication::SignInWithExternalTokenRequest {
public:
// Declarations
static inline ::Unity::Services::Authentication::SignInWithAppleGameCenterRequest* New_ctor() ;

/// @brief Method .ctor, addr 0x2e98518, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SignInWithAppleGameCenterRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SignInWithAppleGameCenterRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignInWithAppleGameCenterRequest(SignInWithAppleGameCenterRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignInWithAppleGameCenterRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignInWithAppleGameCenterRequest(SignInWithAppleGameCenterRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11543};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::SignInWithAppleGameCenterRequest, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::SignInWithAppleGameCenterRequest);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::SignInWithAppleGameCenterRequest*, "Unity.Services.Authentication", "SignInWithAppleGameCenterRequest");
