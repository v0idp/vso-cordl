#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/IAuthenticationExceptionHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAuthenticationExceptionHandler)
namespace Unity::Services::Authentication {
struct AuthenticationState;
}
namespace Unity::Services::Authentication {
class WebRequestException;
}
namespace Unity::Services::Core {
class RequestFailedException;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class IAuthenticationExceptionHandler;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::IAuthenticationExceptionHandler);
// Dependencies 
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.IAuthenticationExceptionHandler
class CORDL_TYPE IAuthenticationExceptionHandler {
public:
// Declarations
/// @brief Method BuildClientInvalidStateException, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Unity::Services::Core::RequestFailedException* BuildClientInvalidStateException(::Unity::Services::Authentication::AuthenticationState  state) ;

/// @brief Method BuildClientSessionTokenNotExistsException, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Unity::Services::Core::RequestFailedException* BuildClientSessionTokenNotExistsException() ;

/// @brief Method ConvertException, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Unity::Services::Core::RequestFailedException* ConvertException(::Unity::Services::Authentication::WebRequestException*  exception) ;

// Ctor Parameters [CppParam { name: "", ty: "IAuthenticationExceptionHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAuthenticationExceptionHandler(IAuthenticationExceptionHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11527};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::IAuthenticationExceptionHandler);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::IAuthenticationExceptionHandler*, "Unity.Services.Authentication", "IAuthenticationExceptionHandler");
