#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/IAuthenticationNetworkClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IAuthenticationNetworkClient)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace Unity::Services::Authentication {
class SignInResponse;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class IAuthenticationNetworkClient;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::IAuthenticationNetworkClient);
// Dependencies 
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.IAuthenticationNetworkClient
class CORDL_TYPE IAuthenticationNetworkClient {
public:
// Declarations
/// @brief Method SignInAnonymouslyAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>* SignInAnonymouslyAsync() ;

/// @brief Method SignInWithSessionTokenAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>* SignInWithSessionTokenAsync(::StringW  token) ;

// Ctor Parameters [CppParam { name: "", ty: "IAuthenticationNetworkClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAuthenticationNetworkClient(IAuthenticationNetworkClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11574};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::IAuthenticationNetworkClient);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::IAuthenticationNetworkClient*, "Unity.Services.Authentication", "IAuthenticationNetworkClient");
