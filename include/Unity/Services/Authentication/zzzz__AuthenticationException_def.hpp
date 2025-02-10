#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Core/zzzz__RequestFailedException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticationException)
namespace System {
class Exception;
}
namespace Unity::Services::Core {
class RequestFailedException;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class AuthenticationException;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::AuthenticationException);
// Dependencies Unity.Services.Core.RequestFailedException
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.AuthenticationException
class CORDL_TYPE AuthenticationException : public ::Unity::Services::Core::RequestFailedException {
public:
// Declarations
/// @brief Method Create, addr 0x2e94814, size 0xc8, virtual false, abstract: false, final false
static inline ::Unity::Services::Core::RequestFailedException* Create(int32_t  errorCode, ::StringW  message, ::System::Exception*  innerException) ;

static inline ::Unity::Services::Authentication::AuthenticationException* New_ctor(int32_t  errorCode, ::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0x2e97084, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  errorCode, ::StringW  message, ::System::Exception*  innerException) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationException(AuthenticationException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationException(AuthenticationException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11525};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::AuthenticationException, 0x90>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::AuthenticationException);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::AuthenticationException*, "Unity.Services.Authentication", "AuthenticationException");
