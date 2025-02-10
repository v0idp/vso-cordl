#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/SignInResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignInResponse)
namespace Unity::Services::Authentication {
class User;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class SignInResponse;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::SignInResponse);
// Dependencies System.Object
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.SignInResponse
class CORDL_TYPE SignInResponse : public ::System::Object {
public:
// Declarations
/// @brief Field ExpiresIn, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ExpiresIn, put=__cordl_internal_set_ExpiresIn)) int32_t  ExpiresIn;

/// @brief Field IdToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_IdToken, put=__cordl_internal_set_IdToken)) ::StringW  IdToken;

/// @brief Field SessionToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SessionToken, put=__cordl_internal_set_SessionToken)) ::StringW  SessionToken;

/// @brief Field User, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_User, put=__cordl_internal_set_User)) ::Unity::Services::Authentication::User*  User;

/// @brief Field UserId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserId, put=__cordl_internal_set_UserId)) ::StringW  UserId;

static inline ::Unity::Services::Authentication::SignInResponse* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_ExpiresIn() const;

constexpr int32_t& __cordl_internal_get_ExpiresIn() ;

constexpr ::StringW const& __cordl_internal_get_IdToken() const;

constexpr ::StringW& __cordl_internal_get_IdToken() ;

constexpr ::StringW const& __cordl_internal_get_SessionToken() const;

constexpr ::StringW& __cordl_internal_get_SessionToken() ;

constexpr ::Unity::Services::Authentication::User* const& __cordl_internal_get_User() const;

constexpr ::Unity::Services::Authentication::User*& __cordl_internal_get_User() ;

constexpr ::StringW const& __cordl_internal_get_UserId() const;

constexpr ::StringW& __cordl_internal_get_UserId() ;

constexpr void __cordl_internal_set_ExpiresIn(int32_t  value) ;

constexpr void __cordl_internal_set_IdToken(::StringW  value) ;

constexpr void __cordl_internal_set_SessionToken(::StringW  value) ;

constexpr void __cordl_internal_set_User(::Unity::Services::Authentication::User*  value) ;

constexpr void __cordl_internal_set_UserId(::StringW  value) ;

/// @brief Method .ctor, addr 0x2e98598, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SignInResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SignInResponse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignInResponse(SignInResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignInResponse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignInResponse(SignInResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11560};

/// @brief Field UserId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___UserId;

/// @brief Field IdToken, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___IdToken;

/// @brief Field SessionToken, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___SessionToken;

/// @brief Field ExpiresIn, offset: 0x28, size: 0x4, def value: None
 int32_t  ___ExpiresIn;

/// @brief Field User, offset: 0x30, size: 0x8, def value: None
 ::Unity::Services::Authentication::User*  ___User;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::SignInResponse, ___UserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::SignInResponse, ___IdToken) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::SignInResponse, ___SessionToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::SignInResponse, ___ExpiresIn) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::SignInResponse, ___User) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::SignInResponse, 0x38>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::SignInResponse);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::SignInResponse*, "Unity.Services.Authentication", "SignInResponse");
