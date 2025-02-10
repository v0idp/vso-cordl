#pragma once
// IWYU pragma private; include "GlobalNamespace/FirebaseHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FirebaseHelper)
namespace GlobalNamespace {
class FirebaseHelper_ErrorLog;
}
namespace GlobalNamespace {
class FirebaseHelper_LinkUserEmail;
}
namespace GlobalNamespace {
class FirebaseHelper_LinkedUser;
}
namespace GlobalNamespace {
class FirebaseHelper_NewUser;
}
namespace GlobalNamespace {
class FirebaseHelper_RefreshUser;
}
namespace GlobalNamespace {
class FirebaseHelper_RefreshedUser;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class FirebaseHelper;
}
namespace GlobalNamespace {
class FirebaseHelper_ErrorLog;
}
namespace GlobalNamespace {
class FirebaseHelper_LinkUserEmail;
}
namespace GlobalNamespace {
class FirebaseHelper_LinkedUser;
}
namespace GlobalNamespace {
class FirebaseHelper_NewUser;
}
namespace GlobalNamespace {
class FirebaseHelper_RefreshUser;
}
namespace GlobalNamespace {
class FirebaseHelper_RefreshedUser;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FirebaseHelper);
MARK_REF_PTR_T(::GlobalNamespace::FirebaseHelper_ErrorLog);
MARK_REF_PTR_T(::GlobalNamespace::FirebaseHelper_LinkUserEmail);
MARK_REF_PTR_T(::GlobalNamespace::FirebaseHelper_LinkedUser);
MARK_REF_PTR_T(::GlobalNamespace::FirebaseHelper_NewUser);
MARK_REF_PTR_T(::GlobalNamespace::FirebaseHelper_RefreshUser);
MARK_REF_PTR_T(::GlobalNamespace::FirebaseHelper_RefreshedUser);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FirebaseHelper/NewUser
class CORDL_TYPE FirebaseHelper_NewUser : public ::System::Object {
public:
// Declarations
/// @brief Field expiresIn, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_expiresIn, put=__cordl_internal_set_expiresIn)) ::StringW  expiresIn;

/// @brief Field idToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_idToken, put=__cordl_internal_set_idToken)) ::StringW  idToken;

/// @brief Field kind, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_kind, put=__cordl_internal_set_kind)) ::StringW  kind;

/// @brief Field localId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_localId, put=__cordl_internal_set_localId)) ::StringW  localId;

/// @brief Field refreshToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_refreshToken, put=__cordl_internal_set_refreshToken)) ::StringW  refreshToken;

static inline ::GlobalNamespace::FirebaseHelper_NewUser* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_expiresIn() const;

constexpr ::StringW& __cordl_internal_get_expiresIn() ;

constexpr ::StringW const& __cordl_internal_get_idToken() const;

constexpr ::StringW& __cordl_internal_get_idToken() ;

constexpr ::StringW const& __cordl_internal_get_kind() const;

constexpr ::StringW& __cordl_internal_get_kind() ;

constexpr ::StringW const& __cordl_internal_get_localId() const;

constexpr ::StringW& __cordl_internal_get_localId() ;

constexpr ::StringW const& __cordl_internal_get_refreshToken() const;

constexpr ::StringW& __cordl_internal_get_refreshToken() ;

constexpr void __cordl_internal_set_expiresIn(::StringW  value) ;

constexpr void __cordl_internal_set_idToken(::StringW  value) ;

constexpr void __cordl_internal_set_kind(::StringW  value) ;

constexpr void __cordl_internal_set_localId(::StringW  value) ;

constexpr void __cordl_internal_set_refreshToken(::StringW  value) ;

/// @brief Method .ctor, addr 0x16c1d48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseHelper_NewUser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseHelper_NewUser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseHelper_NewUser(FirebaseHelper_NewUser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseHelper_NewUser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseHelper_NewUser(FirebaseHelper_NewUser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{39};

/// @brief Field kind, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___kind;

/// @brief Field idToken, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___idToken;

/// @brief Field refreshToken, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___refreshToken;

/// @brief Field expiresIn, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___expiresIn;

/// @brief Field localId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___localId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FirebaseHelper_NewUser, ___kind) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_NewUser, ___idToken) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_NewUser, ___refreshToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_NewUser, ___expiresIn) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_NewUser, ___localId) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FirebaseHelper_NewUser, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FirebaseHelper/RefreshedUser
class CORDL_TYPE FirebaseHelper_RefreshedUser : public ::System::Object {
public:
// Declarations
/// @brief Field access_token, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_access_token, put=__cordl_internal_set_access_token)) ::StringW  access_token;

/// @brief Field expires_in, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_expires_in, put=__cordl_internal_set_expires_in)) ::StringW  expires_in;

/// @brief Field id_token, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_id_token, put=__cordl_internal_set_id_token)) ::StringW  id_token;

/// @brief Field project_id, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_project_id, put=__cordl_internal_set_project_id)) ::StringW  project_id;

/// @brief Field refresh_token, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_refresh_token, put=__cordl_internal_set_refresh_token)) ::StringW  refresh_token;

/// @brief Field token_type, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_token_type, put=__cordl_internal_set_token_type)) ::StringW  token_type;

/// @brief Field user_id, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_user_id, put=__cordl_internal_set_user_id)) ::StringW  user_id;

static inline ::GlobalNamespace::FirebaseHelper_RefreshedUser* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_access_token() const;

constexpr ::StringW& __cordl_internal_get_access_token() ;

constexpr ::StringW const& __cordl_internal_get_expires_in() const;

constexpr ::StringW& __cordl_internal_get_expires_in() ;

constexpr ::StringW const& __cordl_internal_get_id_token() const;

constexpr ::StringW& __cordl_internal_get_id_token() ;

constexpr ::StringW const& __cordl_internal_get_project_id() const;

constexpr ::StringW& __cordl_internal_get_project_id() ;

constexpr ::StringW const& __cordl_internal_get_refresh_token() const;

constexpr ::StringW& __cordl_internal_get_refresh_token() ;

constexpr ::StringW const& __cordl_internal_get_token_type() const;

constexpr ::StringW& __cordl_internal_get_token_type() ;

constexpr ::StringW const& __cordl_internal_get_user_id() const;

constexpr ::StringW& __cordl_internal_get_user_id() ;

constexpr void __cordl_internal_set_access_token(::StringW  value) ;

constexpr void __cordl_internal_set_expires_in(::StringW  value) ;

constexpr void __cordl_internal_set_id_token(::StringW  value) ;

constexpr void __cordl_internal_set_project_id(::StringW  value) ;

constexpr void __cordl_internal_set_refresh_token(::StringW  value) ;

constexpr void __cordl_internal_set_token_type(::StringW  value) ;

constexpr void __cordl_internal_set_user_id(::StringW  value) ;

/// @brief Method .ctor, addr 0x16c1d50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseHelper_RefreshedUser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseHelper_RefreshedUser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseHelper_RefreshedUser(FirebaseHelper_RefreshedUser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseHelper_RefreshedUser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseHelper_RefreshedUser(FirebaseHelper_RefreshedUser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{40};

/// @brief Field access_token, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___access_token;

/// @brief Field expires_in, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___expires_in;

/// @brief Field token_type, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___token_type;

/// @brief Field refresh_token, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___refresh_token;

/// @brief Field id_token, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___id_token;

/// @brief Field user_id, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___user_id;

/// @brief Field project_id, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___project_id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FirebaseHelper_RefreshedUser, ___access_token) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_RefreshedUser, ___expires_in) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_RefreshedUser, ___token_type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_RefreshedUser, ___refresh_token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_RefreshedUser, ___id_token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_RefreshedUser, ___user_id) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_RefreshedUser, ___project_id) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FirebaseHelper_RefreshedUser, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FirebaseHelper/RefreshUser
class CORDL_TYPE FirebaseHelper_RefreshUser : public ::System::Object {
public:
// Declarations
/// @brief Field grant_type, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_grant_type, put=__cordl_internal_set_grant_type)) ::StringW  grant_type;

/// @brief Field refresh_token, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_refresh_token, put=__cordl_internal_set_refresh_token)) ::StringW  refresh_token;

static inline ::GlobalNamespace::FirebaseHelper_RefreshUser* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_grant_type() const;

constexpr ::StringW& __cordl_internal_get_grant_type() ;

constexpr ::StringW const& __cordl_internal_get_refresh_token() const;

constexpr ::StringW& __cordl_internal_get_refresh_token() ;

constexpr void __cordl_internal_set_grant_type(::StringW  value) ;

constexpr void __cordl_internal_set_refresh_token(::StringW  value) ;

/// @brief Method .ctor, addr 0x16c1d58, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseHelper_RefreshUser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseHelper_RefreshUser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseHelper_RefreshUser(FirebaseHelper_RefreshUser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseHelper_RefreshUser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseHelper_RefreshUser(FirebaseHelper_RefreshUser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{41};

/// @brief Field refresh_token, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___refresh_token;

/// @brief Field grant_type, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___grant_type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FirebaseHelper_RefreshUser, ___refresh_token) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_RefreshUser, ___grant_type) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FirebaseHelper_RefreshUser, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FirebaseHelper/LinkUserEmail
class CORDL_TYPE FirebaseHelper_LinkUserEmail : public ::System::Object {
public:
// Declarations
/// @brief Field email, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_email, put=__cordl_internal_set_email)) ::StringW  email;

/// @brief Field idToken, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_idToken, put=__cordl_internal_set_idToken)) ::StringW  idToken;

/// @brief Field password, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_password, put=__cordl_internal_set_password)) ::StringW  password;

/// @brief Field returnSecureToken, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_returnSecureToken, put=__cordl_internal_set_returnSecureToken)) bool  returnSecureToken;

static inline ::GlobalNamespace::FirebaseHelper_LinkUserEmail* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_email() const;

constexpr ::StringW& __cordl_internal_get_email() ;

constexpr ::StringW const& __cordl_internal_get_idToken() const;

constexpr ::StringW& __cordl_internal_get_idToken() ;

constexpr ::StringW const& __cordl_internal_get_password() const;

constexpr ::StringW& __cordl_internal_get_password() ;

constexpr bool const& __cordl_internal_get_returnSecureToken() const;

constexpr bool& __cordl_internal_get_returnSecureToken() ;

constexpr void __cordl_internal_set_email(::StringW  value) ;

constexpr void __cordl_internal_set_idToken(::StringW  value) ;

constexpr void __cordl_internal_set_password(::StringW  value) ;

constexpr void __cordl_internal_set_returnSecureToken(bool  value) ;

/// @brief Method .ctor, addr 0x16c1da8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseHelper_LinkUserEmail() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseHelper_LinkUserEmail", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseHelper_LinkUserEmail(FirebaseHelper_LinkUserEmail && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseHelper_LinkUserEmail", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseHelper_LinkUserEmail(FirebaseHelper_LinkUserEmail const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{42};

/// @brief Field idToken, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___idToken;

/// @brief Field email, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___email;

/// @brief Field password, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___password;

/// @brief Field returnSecureToken, offset: 0x28, size: 0x1, def value: None
 bool  ___returnSecureToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FirebaseHelper_LinkUserEmail, ___idToken) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_LinkUserEmail, ___email) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_LinkUserEmail, ___password) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_LinkUserEmail, ___returnSecureToken) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FirebaseHelper_LinkUserEmail, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FirebaseHelper/LinkedUser
class CORDL_TYPE FirebaseHelper_LinkedUser : public ::System::Object {
public:
// Declarations
/// @brief Field displayName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayName, put=__cordl_internal_set_displayName)) ::StringW  displayName;

/// @brief Field email, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_email, put=__cordl_internal_set_email)) ::StringW  email;

/// @brief Field emailVerified, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_emailVerified, put=__cordl_internal_set_emailVerified)) bool  emailVerified;

/// @brief Field expiresIn, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_expiresIn, put=__cordl_internal_set_expiresIn)) ::StringW  expiresIn;

/// @brief Field idToken, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_idToken, put=__cordl_internal_set_idToken)) ::StringW  idToken;

/// @brief Field localId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_localId, put=__cordl_internal_set_localId)) ::StringW  localId;

/// @brief Field passwordHash, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_passwordHash, put=__cordl_internal_set_passwordHash)) ::StringW  passwordHash;

/// @brief Field photoUrl, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_photoUrl, put=__cordl_internal_set_photoUrl)) ::StringW  photoUrl;

/// @brief Field providerUserInfo, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_providerUserInfo, put=__cordl_internal_set_providerUserInfo)) ::System::Collections::Generic::List_1<::System::Object*>*  providerUserInfo;

/// @brief Field refreshToken, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_refreshToken, put=__cordl_internal_set_refreshToken)) ::StringW  refreshToken;

static inline ::GlobalNamespace::FirebaseHelper_LinkedUser* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_displayName() const;

constexpr ::StringW& __cordl_internal_get_displayName() ;

constexpr ::StringW const& __cordl_internal_get_email() const;

constexpr ::StringW& __cordl_internal_get_email() ;

constexpr bool const& __cordl_internal_get_emailVerified() const;

constexpr bool& __cordl_internal_get_emailVerified() ;

constexpr ::StringW const& __cordl_internal_get_expiresIn() const;

constexpr ::StringW& __cordl_internal_get_expiresIn() ;

constexpr ::StringW const& __cordl_internal_get_idToken() const;

constexpr ::StringW& __cordl_internal_get_idToken() ;

constexpr ::StringW const& __cordl_internal_get_localId() const;

constexpr ::StringW& __cordl_internal_get_localId() ;

constexpr ::StringW const& __cordl_internal_get_passwordHash() const;

constexpr ::StringW& __cordl_internal_get_passwordHash() ;

constexpr ::StringW const& __cordl_internal_get_photoUrl() const;

constexpr ::StringW& __cordl_internal_get_photoUrl() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get_providerUserInfo() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get_providerUserInfo() ;

constexpr ::StringW const& __cordl_internal_get_refreshToken() const;

constexpr ::StringW& __cordl_internal_get_refreshToken() ;

constexpr void __cordl_internal_set_displayName(::StringW  value) ;

constexpr void __cordl_internal_set_email(::StringW  value) ;

constexpr void __cordl_internal_set_emailVerified(bool  value) ;

constexpr void __cordl_internal_set_expiresIn(::StringW  value) ;

constexpr void __cordl_internal_set_idToken(::StringW  value) ;

constexpr void __cordl_internal_set_localId(::StringW  value) ;

constexpr void __cordl_internal_set_passwordHash(::StringW  value) ;

constexpr void __cordl_internal_set_photoUrl(::StringW  value) ;

constexpr void __cordl_internal_set_providerUserInfo(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set_refreshToken(::StringW  value) ;

/// @brief Method .ctor, addr 0x16c1db0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseHelper_LinkedUser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseHelper_LinkedUser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseHelper_LinkedUser(FirebaseHelper_LinkedUser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseHelper_LinkedUser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseHelper_LinkedUser(FirebaseHelper_LinkedUser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{43};

/// @brief Field localId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___localId;

/// @brief Field email, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___email;

/// @brief Field displayName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___displayName;

/// @brief Field photoUrl, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___photoUrl;

/// @brief Field passwordHash, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___passwordHash;

/// @brief Field providerUserInfo, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ___providerUserInfo;

/// @brief Field emailVerified, offset: 0x40, size: 0x1, def value: None
 bool  ___emailVerified;

/// @brief Field idToken, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___idToken;

/// @brief Field refreshToken, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___refreshToken;

/// @brief Field expiresIn, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___expiresIn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FirebaseHelper_LinkedUser, ___localId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_LinkedUser, ___email) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_LinkedUser, ___displayName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_LinkedUser, ___photoUrl) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_LinkedUser, ___passwordHash) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_LinkedUser, ___providerUserInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_LinkedUser, ___emailVerified) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_LinkedUser, ___idToken) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_LinkedUser, ___refreshToken) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_LinkedUser, ___expiresIn) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FirebaseHelper_LinkedUser, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FirebaseHelper/ErrorLog
class CORDL_TYPE FirebaseHelper_ErrorLog : public ::System::Object {
public:
// Declarations
/// @brief Field AppVersion, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_AppVersion, put=__cordl_internal_set_AppVersion)) ::StringW  AppVersion;

/// @brief Field Date, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Date, put=__cordl_internal_set_Date)) ::StringW  Date;

/// @brief Field Device, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Device, put=__cordl_internal_set_Device)) ::StringW  Device;

/// @brief Field Message, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Message, put=__cordl_internal_set_Message)) ::StringW  Message;

/// @brief Field OperatingSystem, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OperatingSystem, put=__cordl_internal_set_OperatingSystem)) ::StringW  OperatingSystem;

/// @brief Field Stack, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Stack, put=__cordl_internal_set_Stack)) ::StringW  Stack;

static inline ::GlobalNamespace::FirebaseHelper_ErrorLog* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AppVersion() const;

constexpr ::StringW& __cordl_internal_get_AppVersion() ;

constexpr ::StringW const& __cordl_internal_get_Date() const;

constexpr ::StringW& __cordl_internal_get_Date() ;

constexpr ::StringW const& __cordl_internal_get_Device() const;

constexpr ::StringW& __cordl_internal_get_Device() ;

constexpr ::StringW const& __cordl_internal_get_Message() const;

constexpr ::StringW& __cordl_internal_get_Message() ;

constexpr ::StringW const& __cordl_internal_get_OperatingSystem() const;

constexpr ::StringW& __cordl_internal_get_OperatingSystem() ;

constexpr ::StringW const& __cordl_internal_get_Stack() const;

constexpr ::StringW& __cordl_internal_get_Stack() ;

constexpr void __cordl_internal_set_AppVersion(::StringW  value) ;

constexpr void __cordl_internal_set_Date(::StringW  value) ;

constexpr void __cordl_internal_set_Device(::StringW  value) ;

constexpr void __cordl_internal_set_Message(::StringW  value) ;

constexpr void __cordl_internal_set_OperatingSystem(::StringW  value) ;

constexpr void __cordl_internal_set_Stack(::StringW  value) ;

/// @brief Method .ctor, addr 0x16c1db8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseHelper_ErrorLog() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseHelper_ErrorLog", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseHelper_ErrorLog(FirebaseHelper_ErrorLog && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseHelper_ErrorLog", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseHelper_ErrorLog(FirebaseHelper_ErrorLog const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{44};

/// @brief Field AppVersion, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___AppVersion;

/// @brief Field Date, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Date;

/// @brief Field Device, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Device;

/// @brief Field OperatingSystem, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___OperatingSystem;

/// @brief Field Message, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___Message;

/// @brief Field Stack, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___Stack;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FirebaseHelper_ErrorLog, ___AppVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_ErrorLog, ___Date) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_ErrorLog, ___Device) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_ErrorLog, ___OperatingSystem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_ErrorLog, ___Message) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirebaseHelper_ErrorLog, ___Stack) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FirebaseHelper_ErrorLog, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FirebaseHelper
class CORDL_TYPE FirebaseHelper : public ::System::Object {
public:
// Declarations
using ErrorLog = ::GlobalNamespace::FirebaseHelper_ErrorLog;

using LinkUserEmail = ::GlobalNamespace::FirebaseHelper_LinkUserEmail;

using LinkedUser = ::GlobalNamespace::FirebaseHelper_LinkedUser;

using NewUser = ::GlobalNamespace::FirebaseHelper_NewUser;

using RefreshUser = ::GlobalNamespace::FirebaseHelper_RefreshUser;

using RefreshedUser = ::GlobalNamespace::FirebaseHelper_RefreshedUser;

static inline ::GlobalNamespace::FirebaseHelper* New_ctor() ;

/// @brief Method .ctor, addr 0x16c1d40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseHelper(FirebaseHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseHelper(FirebaseHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{45};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FirebaseHelper, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FirebaseHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FirebaseHelper*, "", "FirebaseHelper");
NEED_NO_BOX(::GlobalNamespace::FirebaseHelper_ErrorLog);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FirebaseHelper_ErrorLog*, "", "FirebaseHelper/ErrorLog");
NEED_NO_BOX(::GlobalNamespace::FirebaseHelper_LinkUserEmail);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FirebaseHelper_LinkUserEmail*, "", "FirebaseHelper/LinkUserEmail");
NEED_NO_BOX(::GlobalNamespace::FirebaseHelper_LinkedUser);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FirebaseHelper_LinkedUser*, "", "FirebaseHelper/LinkedUser");
NEED_NO_BOX(::GlobalNamespace::FirebaseHelper_NewUser);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FirebaseHelper_NewUser*, "", "FirebaseHelper/NewUser");
NEED_NO_BOX(::GlobalNamespace::FirebaseHelper_RefreshUser);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FirebaseHelper_RefreshUser*, "", "FirebaseHelper/RefreshUser");
NEED_NO_BOX(::GlobalNamespace::FirebaseHelper_RefreshedUser);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FirebaseHelper_RefreshedUser*, "", "FirebaseHelper/RefreshedUser");
