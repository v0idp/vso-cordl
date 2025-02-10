#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationErrorCodes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticationErrorCodes)
// Forward declare root types
namespace Unity::Services::Authentication {
class AuthenticationErrorCodes;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::AuthenticationErrorCodes);
// Dependencies System.Object
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.AuthenticationErrorCodes
class CORDL_TYPE AuthenticationErrorCodes : public ::System::Object {
public:
// Declarations
/// @brief Field AccountAlreadyLinked, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_AccountAlreadyLinked, put=setStaticF_AccountAlreadyLinked)) int32_t  AccountAlreadyLinked;

/// @brief Field AccountLinkLimitExceeded, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_AccountLinkLimitExceeded, put=setStaticF_AccountLinkLimitExceeded)) int32_t  AccountLinkLimitExceeded;

/// @brief Field ClientInvalidProfile, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ClientInvalidProfile, put=setStaticF_ClientInvalidProfile)) int32_t  ClientInvalidProfile;

/// @brief Field ClientInvalidUserState, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ClientInvalidUserState, put=setStaticF_ClientInvalidUserState)) int32_t  ClientInvalidUserState;

/// @brief Field ClientNoActiveSession, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ClientNoActiveSession, put=setStaticF_ClientNoActiveSession)) int32_t  ClientNoActiveSession;

/// @brief Field ClientUnlinkExternalIdNotFound, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ClientUnlinkExternalIdNotFound, put=setStaticF_ClientUnlinkExternalIdNotFound)) int32_t  ClientUnlinkExternalIdNotFound;

/// @brief Field InvalidParameters, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_InvalidParameters, put=setStaticF_InvalidParameters)) int32_t  InvalidParameters;

/// @brief Field InvalidSessionToken, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_InvalidSessionToken, put=setStaticF_InvalidSessionToken)) int32_t  InvalidSessionToken;

/// @brief Field MinValue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MinValue, put=setStaticF_MinValue)) int32_t  MinValue;

static inline int32_t getStaticF_AccountAlreadyLinked() ;

static inline int32_t getStaticF_AccountLinkLimitExceeded() ;

static inline int32_t getStaticF_ClientInvalidProfile() ;

static inline int32_t getStaticF_ClientInvalidUserState() ;

static inline int32_t getStaticF_ClientNoActiveSession() ;

static inline int32_t getStaticF_ClientUnlinkExternalIdNotFound() ;

static inline int32_t getStaticF_InvalidParameters() ;

static inline int32_t getStaticF_InvalidSessionToken() ;

static inline int32_t getStaticF_MinValue() ;

static inline void setStaticF_AccountAlreadyLinked(int32_t  value) ;

static inline void setStaticF_AccountLinkLimitExceeded(int32_t  value) ;

static inline void setStaticF_ClientInvalidProfile(int32_t  value) ;

static inline void setStaticF_ClientInvalidUserState(int32_t  value) ;

static inline void setStaticF_ClientNoActiveSession(int32_t  value) ;

static inline void setStaticF_ClientUnlinkExternalIdNotFound(int32_t  value) ;

static inline void setStaticF_InvalidParameters(int32_t  value) ;

static inline void setStaticF_InvalidSessionToken(int32_t  value) ;

static inline void setStaticF_MinValue(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationErrorCodes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationErrorCodes", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationErrorCodes(AuthenticationErrorCodes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationErrorCodes", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationErrorCodes(AuthenticationErrorCodes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11524};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::AuthenticationErrorCodes, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::AuthenticationErrorCodes);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::AuthenticationErrorCodes*, "Unity.Services.Authentication", "AuthenticationErrorCodes");
