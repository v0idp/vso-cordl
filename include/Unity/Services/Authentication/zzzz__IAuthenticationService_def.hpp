#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/IAuthenticationService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAuthenticationService)
namespace System::Threading::Tasks {
class Task;
}
namespace Unity::Services::Authentication {
class SignInOptions;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class IAuthenticationService;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::IAuthenticationService);
// Dependencies 
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.IAuthenticationService
class CORDL_TYPE IAuthenticationService {
public:
// Declarations
 __declspec(property(get=get_IsSignedIn)) bool  IsSignedIn;

/// @brief Method SignInAnonymouslyAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* SignInAnonymouslyAsync(::Unity::Services::Authentication::SignInOptions*  options) ;

/// @brief Method get_IsSignedIn, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsSignedIn() ;

// Ctor Parameters [CppParam { name: "", ty: "IAuthenticationService", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAuthenticationService(IAuthenticationService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11528};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::IAuthenticationService);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::IAuthenticationService*, "Unity.Services.Authentication", "IAuthenticationService");
