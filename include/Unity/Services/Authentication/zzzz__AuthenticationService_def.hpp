#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AuthenticationService)
namespace Unity::Services::Authentication {
class IAuthenticationService;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class AuthenticationService;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::AuthenticationService);
// Dependencies System.Object
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.AuthenticationService
class CORDL_TYPE AuthenticationService : public ::System::Object {
public:
// Declarations
/// @brief Field s_Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Instance, put=setStaticF_s_Instance)) ::Unity::Services::Authentication::IAuthenticationService*  s_Instance;

static inline ::Unity::Services::Authentication::IAuthenticationService* getStaticF_s_Instance() ;

/// @brief Method get_Instance, addr 0x2e93128, size 0x94, virtual false, abstract: false, final false
static inline ::Unity::Services::Authentication::IAuthenticationService* get_Instance() ;

static inline void setStaticF_s_Instance(::Unity::Services::Authentication::IAuthenticationService*  value) ;

/// @brief Method set_Instance, addr 0x2e931bc, size 0x4c, virtual false, abstract: false, final false
static inline void set_Instance(::Unity::Services::Authentication::IAuthenticationService*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationService() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationService", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationService(AuthenticationService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationService", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationService(AuthenticationService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11516};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::AuthenticationService, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::AuthenticationService);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::AuthenticationService*, "Unity.Services.Authentication", "AuthenticationService");
