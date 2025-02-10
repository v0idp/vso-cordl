#pragma once
// IWYU pragma private; include "VROSC/AuthenticationManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticationManager)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace VROSC {
class AuthenticationManager_FirebaseUserData;
}
namespace VROSC {
class AuthenticationManager_LocalUserData;
}
namespace VROSC {
class AuthenticationManager___c;
}
namespace VROSC {
class AuthenticationManager___c__DisplayClass37_0;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class IState;
}
namespace VROSC {
class LoginWithEmailState;
}
namespace VROSC {
class StateMachine;
}
// Forward declare root types
namespace VROSC {
class AuthenticationManager;
}
namespace VROSC {
class AuthenticationManager_FirebaseUserData;
}
namespace VROSC {
class AuthenticationManager_LocalUserData;
}
namespace VROSC {
class AuthenticationManager___c;
}
namespace VROSC {
class AuthenticationManager___c__DisplayClass37_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AuthenticationManager);
MARK_REF_PTR_T(::VROSC::AuthenticationManager_FirebaseUserData);
MARK_REF_PTR_T(::VROSC::AuthenticationManager_LocalUserData);
MARK_REF_PTR_T(::VROSC::AuthenticationManager___c);
MARK_REF_PTR_T(::VROSC::AuthenticationManager___c__DisplayClass37_0);
// Dependencies System.DateTime, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AuthenticationManager/LocalUserData
class CORDL_TYPE AuthenticationManager_LocalUserData : public ::System::Object {
public:
// Declarations
/// @brief Field Email, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Email, put=__cordl_internal_set_Email)) ::StringW  Email;

 __declspec(property(get=get_HasData)) bool  HasData;

/// @brief Field LastLoginDate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_LastLoginDate, put=__cordl_internal_set_LastLoginDate)) ::System::DateTime  LastLoginDate;

/// @brief Field Password, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Password, put=__cordl_internal_set_Password)) ::StringW  Password;

/// @brief Field RememberMe, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_RememberMe, put=__cordl_internal_set_RememberMe)) bool  RememberMe;

/// @brief Field SentVerificationEmail, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_SentVerificationEmail, put=__cordl_internal_set_SentVerificationEmail)) bool  SentVerificationEmail;

static inline ::VROSC::AuthenticationManager_LocalUserData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Email() const;

constexpr ::StringW& __cordl_internal_get_Email() ;

constexpr ::System::DateTime const& __cordl_internal_get_LastLoginDate() const;

constexpr ::System::DateTime& __cordl_internal_get_LastLoginDate() ;

constexpr ::StringW const& __cordl_internal_get_Password() const;

constexpr ::StringW& __cordl_internal_get_Password() ;

constexpr bool const& __cordl_internal_get_RememberMe() const;

constexpr bool& __cordl_internal_get_RememberMe() ;

constexpr bool const& __cordl_internal_get_SentVerificationEmail() const;

constexpr bool& __cordl_internal_get_SentVerificationEmail() ;

constexpr void __cordl_internal_set_Email(::StringW  value) ;

constexpr void __cordl_internal_set_LastLoginDate(::System::DateTime  value) ;

constexpr void __cordl_internal_set_Password(::StringW  value) ;

constexpr void __cordl_internal_set_RememberMe(bool  value) ;

constexpr void __cordl_internal_set_SentVerificationEmail(bool  value) ;

/// @brief Method .ctor, addr 0x182e4f0, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasData, addr 0x182ec00, size 0x20, virtual false, abstract: false, final false
inline bool get_HasData() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationManager_LocalUserData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationManager_LocalUserData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationManager_LocalUserData(AuthenticationManager_LocalUserData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationManager_LocalUserData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationManager_LocalUserData(AuthenticationManager_LocalUserData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{308};

/// @brief Field Email, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Email;

/// @brief Field Password, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Password;

/// @brief Field LastLoginDate, offset: 0x20, size: 0x8, def value: None
 ::System::DateTime  ___LastLoginDate;

/// @brief Field RememberMe, offset: 0x28, size: 0x1, def value: None
 bool  ___RememberMe;

/// @brief Field SentVerificationEmail, offset: 0x29, size: 0x1, def value: None
 bool  ___SentVerificationEmail;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AuthenticationManager_LocalUserData, ___Email) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AuthenticationManager_LocalUserData, ___Password) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AuthenticationManager_LocalUserData, ___LastLoginDate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AuthenticationManager_LocalUserData, ___RememberMe) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AuthenticationManager_LocalUserData, ___SentVerificationEmail) == 0x29, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AuthenticationManager_LocalUserData, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AuthenticationManager/FirebaseUserData
class CORDL_TYPE AuthenticationManager_FirebaseUserData : public ::System::Object {
public:
// Declarations
/// @brief Field Email, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Email, put=__cordl_internal_set_Email)) ::StringW  Email;

 __declspec(property(get=get_HasData)) bool  HasData;

/// @brief Field IsLoggedIn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsLoggedIn, put=__cordl_internal_set_IsLoggedIn)) bool  IsLoggedIn;

/// @brief Field IsVerified, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsVerified, put=__cordl_internal_set_IsVerified)) bool  IsVerified;

/// @brief Field UserId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserId, put=__cordl_internal_set_UserId)) ::StringW  UserId;

static inline ::VROSC::AuthenticationManager_FirebaseUserData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Email() const;

constexpr ::StringW& __cordl_internal_get_Email() ;

constexpr bool const& __cordl_internal_get_IsLoggedIn() const;

constexpr bool& __cordl_internal_get_IsLoggedIn() ;

constexpr bool const& __cordl_internal_get_IsVerified() const;

constexpr bool& __cordl_internal_get_IsVerified() ;

constexpr ::StringW const& __cordl_internal_get_UserId() const;

constexpr ::StringW& __cordl_internal_get_UserId() ;

constexpr void __cordl_internal_set_Email(::StringW  value) ;

constexpr void __cordl_internal_set_IsLoggedIn(bool  value) ;

constexpr void __cordl_internal_set_IsVerified(bool  value) ;

constexpr void __cordl_internal_set_UserId(::StringW  value) ;

/// @brief Method .ctor, addr 0x182e4a0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasData, addr 0x182ec20, size 0x20, virtual false, abstract: false, final false
inline bool get_HasData() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationManager_FirebaseUserData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationManager_FirebaseUserData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationManager_FirebaseUserData(AuthenticationManager_FirebaseUserData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationManager_FirebaseUserData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationManager_FirebaseUserData(AuthenticationManager_FirebaseUserData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{309};

/// @brief Field UserId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___UserId;

/// @brief Field Email, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Email;

/// @brief Field IsLoggedIn, offset: 0x20, size: 0x1, def value: None
 bool  ___IsLoggedIn;

/// @brief Field IsVerified, offset: 0x21, size: 0x1, def value: None
 bool  ___IsVerified;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AuthenticationManager_FirebaseUserData, ___UserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AuthenticationManager_FirebaseUserData, ___Email) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AuthenticationManager_FirebaseUserData, ___IsLoggedIn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AuthenticationManager_FirebaseUserData, ___IsVerified) == 0x21, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AuthenticationManager_FirebaseUserData, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AuthenticationManager/<>c
class CORDL_TYPE AuthenticationManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::AuthenticationManager___c*  __9;

/// @brief Field <>9__27_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_5, put=setStaticF___9__27_5)) ::System::Func_1<bool>*  __9__27_5;

/// @brief Field <>9__42_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__42_0, put=setStaticF___9__42_0)) ::System::Action_1<::VROSC::Error>*  __9__42_0;

static inline ::VROSC::AuthenticationManager___c* New_ctor() ;

/// @brief Method <Awake>b__27_5, addr 0x182eca4, size 0x8, virtual false, abstract: false, final false
inline bool _Awake_b__27_5() ;

/// @brief Method <UserEmailChangeSuccess>b__42_0, addr 0x182ecac, size 0x4, virtual false, abstract: false, final false
inline void _UserEmailChangeSuccess_b__42_0(::VROSC::Error  error) ;

/// @brief Method .ctor, addr 0x182ec9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::AuthenticationManager___c* getStaticF___9() ;

static inline ::System::Func_1<bool>* getStaticF___9__27_5() ;

static inline ::System::Action_1<::VROSC::Error>* getStaticF___9__42_0() ;

static inline void setStaticF___9(::VROSC::AuthenticationManager___c*  value) ;

static inline void setStaticF___9__27_5(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__42_0(::System::Action_1<::VROSC::Error>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationManager___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationManager___c(AuthenticationManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationManager___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationManager___c(AuthenticationManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{310};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::AuthenticationManager___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AuthenticationManager/<>c__DisplayClass37_0
class CORDL_TYPE AuthenticationManager___c__DisplayClass37_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::AuthenticationManager>  __4__this;

/// @brief Field newPassword, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_newPassword, put=__cordl_internal_set_newPassword)) ::StringW  newPassword;

static inline ::VROSC::AuthenticationManager___c__DisplayClass37_0* New_ctor() ;

/// @brief Method <ChangeUserPassword>b__0, addr 0x182ecb0, size 0x10c, virtual false, abstract: false, final false
inline void _ChangeUserPassword_b__0(::StringW  email, bool  isVerified) ;

constexpr ::UnityW<::VROSC::AuthenticationManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::AuthenticationManager>& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_newPassword() const;

constexpr ::StringW& __cordl_internal_get_newPassword() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::AuthenticationManager>  value) ;

constexpr void __cordl_internal_set_newPassword(::StringW  value) ;

/// @brief Method .ctor, addr 0x182dda4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationManager___c__DisplayClass37_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationManager___c__DisplayClass37_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationManager___c__DisplayClass37_0(AuthenticationManager___c__DisplayClass37_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationManager___c__DisplayClass37_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationManager___c__DisplayClass37_0(AuthenticationManager___c__DisplayClass37_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{311};

/// @brief Field newPassword, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___newPassword;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::AuthenticationManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AuthenticationManager___c__DisplayClass37_0, ___newPassword) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AuthenticationManager___c__DisplayClass37_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AuthenticationManager___c__DisplayClass37_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AuthenticationManager
class CORDL_TYPE AuthenticationManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FirebaseUserData = ::VROSC::AuthenticationManager_FirebaseUserData;

using LocalUserData = ::VROSC::AuthenticationManager_LocalUserData;

using __c = ::VROSC::AuthenticationManager___c;

using __c__DisplayClass37_0 = ::VROSC::AuthenticationManager___c__DisplayClass37_0;

/// @brief Field FirebaseUser, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_FirebaseUser, put=__cordl_internal_set_FirebaseUser)) ::VROSC::AuthenticationManager_FirebaseUserData*  FirebaseUser;

 __declspec(property(get=get_IsWaitingForCredentials, put=set_IsWaitingForCredentials)) bool  IsWaitingForCredentials;

/// @brief Field LocalUser, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_LocalUser, put=__cordl_internal_set_LocalUser)) ::VROSC::AuthenticationManager_LocalUserData*  LocalUser;

/// @brief Field OnRefreshFirebaseAccessTokenFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnRefreshFirebaseAccessTokenFailure, put=setStaticF_OnRefreshFirebaseAccessTokenFailure)) ::System::Action_1<::VROSC::Error>*  OnRefreshFirebaseAccessTokenFailure;

/// @brief Field OnRefreshFirebaseAccessTokenSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnRefreshFirebaseAccessTokenSuccess, put=setStaticF_OnRefreshFirebaseAccessTokenSuccess)) ::System::Action_3<::StringW,::StringW,::StringW>*  OnRefreshFirebaseAccessTokenSuccess;

/// @brief Field OnResetPasswordFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnResetPasswordFailure, put=setStaticF_OnResetPasswordFailure)) ::System::Action_1<::VROSC::Error>*  OnResetPasswordFailure;

/// @brief Field OnResetPasswordSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnResetPasswordSuccess, put=setStaticF_OnResetPasswordSuccess)) ::System::Action*  OnResetPasswordSuccess;

/// @brief Field OnSendVerificationEmailFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSendVerificationEmailFailure, put=setStaticF_OnSendVerificationEmailFailure)) ::System::Action_1<::VROSC::Error>*  OnSendVerificationEmailFailure;

/// @brief Field OnSendVerificationEmailSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSendVerificationEmailSuccess, put=setStaticF_OnSendVerificationEmailSuccess)) ::System::Action*  OnSendVerificationEmailSuccess;

/// @brief Field OnUserEmailChangeFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnUserEmailChangeFailure, put=setStaticF_OnUserEmailChangeFailure)) ::System::Action_1<::VROSC::Error>*  OnUserEmailChangeFailure;

/// @brief Field OnUserEmailChangeSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnUserEmailChangeSuccess, put=setStaticF_OnUserEmailChangeSuccess)) ::System::Action*  OnUserEmailChangeSuccess;

/// @brief Field OnUserLoginFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnUserLoginFailure, put=setStaticF_OnUserLoginFailure)) ::System::Action_1<::VROSC::Error>*  OnUserLoginFailure;

/// @brief Field OnUserLoginSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnUserLoginSuccess, put=setStaticF_OnUserLoginSuccess)) ::System::Action_2<::StringW,bool>*  OnUserLoginSuccess;

/// @brief Field OnUserLogout, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnUserLogout, put=setStaticF_OnUserLogout)) ::System::Action*  OnUserLogout;

/// @brief Field OnUserPasswordChangeFailure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnUserPasswordChangeFailure, put=setStaticF_OnUserPasswordChangeFailure)) ::System::Action_1<::VROSC::Error>*  OnUserPasswordChangeFailure;

/// @brief Field OnUserPasswordChangeSuccess, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnUserPasswordChangeSuccess, put=setStaticF_OnUserPasswordChangeSuccess)) ::System::Action*  OnUserPasswordChangeSuccess;

/// @brief Field OnVerifiedUserLogin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnVerifiedUserLogin, put=setStaticF_OnVerifiedUserLogin)) ::System::Action*  OnVerifiedUserLogin;

/// @brief Field <IsWaitingForCredentials>k__BackingField, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsWaitingForCredentials_k__BackingField, put=__cordl_internal_set__IsWaitingForCredentials_k__BackingField)) bool  _IsWaitingForCredentials_k__BackingField;

/// @brief Field _loginWithEmailState, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__loginWithEmailState, put=__cordl_internal_set__loginWithEmailState)) ::VROSC::LoginWithEmailState*  _loginWithEmailState;

/// @brief Field _startState, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__startState, put=__cordl_internal_set__startState)) ::VROSC::IState*  _startState;

/// @brief Field _stateMachine, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__stateMachine, put=__cordl_internal_set__stateMachine)) ::VROSC::StateMachine*  _stateMachine;

/// @brief Method AuthenticateWithEmail, addr 0x182d434, size 0x174, virtual false, abstract: false, final false
inline void AuthenticateWithEmail(::StringW  email, ::StringW  password, bool  rememberMe) ;

/// @brief Method Awake, addr 0x182cc60, size 0x328, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ChangeUserEmail, addr 0x182d9f0, size 0x108, virtual false, abstract: false, final false
inline void ChangeUserEmail(::StringW  email) ;

/// @brief Method ChangeUserPassword, addr 0x182dc58, size 0x14c, virtual false, abstract: false, final false
inline void ChangeUserPassword(::StringW  currentPassword, ::StringW  newPassword) ;

/// @brief Method CreateUserWithEmail, addr 0x182d6f0, size 0x178, virtual false, abstract: false, final false
inline void CreateUserWithEmail(::StringW  email, ::StringW  password, bool  rememberMe) ;

/// @brief Method LogoutUser, addr 0x182d978, size 0x5c, virtual false, abstract: false, final false
inline void LogoutUser() ;

static inline ::VROSC::AuthenticationManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x182d330, size 0xe8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ResetPassword, addr 0x182e124, size 0x108, virtual false, abstract: false, final false
inline void ResetPassword(::StringW  email) ;

/// @brief Method ResetPasswordFailure, addr 0x182e960, size 0x6c, virtual false, abstract: false, final false
inline void ResetPasswordFailure(::VROSC::Error  error) ;

/// @brief Method ResetPasswordSuccess, addr 0x182e8fc, size 0x64, virtual false, abstract: false, final false
inline void ResetPasswordSuccess() ;

/// @brief Method SendVerificationEmail, addr 0x182deb8, size 0xf8, virtual false, abstract: false, final false
inline void SendVerificationEmail() ;

/// @brief Method SendVerificationEmailFailure, addr 0x182ea30, size 0x6c, virtual false, abstract: false, final false
inline void SendVerificationEmailFailure(::VROSC::Error  error) ;

/// @brief Method SendVerificationEmailSuccess, addr 0x182e9cc, size 0x64, virtual false, abstract: false, final false
inline void SendVerificationEmailSuccess() ;

/// @brief Method Setup, addr 0x182d288, size 0xa8, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method Update, addr 0x182d418, size 0x1c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UserEmailChangeFailure, addr 0x182e77c, size 0x6c, virtual false, abstract: false, final false
inline void UserEmailChangeFailure(::VROSC::Error  error) ;

/// @brief Method UserEmailChangeSuccess, addr 0x182e578, size 0x204, virtual false, abstract: false, final false
inline void UserEmailChangeSuccess(::StringW  email) ;

/// @brief Method UserHasVerified, addr 0x182e0c0, size 0x64, virtual false, abstract: false, final false
inline void UserHasVerified() ;

/// @brief Method UserLoggedOut, addr 0x182e318, size 0x188, virtual false, abstract: false, final false
inline void UserLoggedOut() ;

/// @brief Method UserLoginFailure, addr 0x182d90c, size 0x6c, virtual false, abstract: false, final false
inline void UserLoginFailure(::VROSC::Error  error) ;

/// @brief Method UserLoginSuccess, addr 0x182d868, size 0xa4, virtual false, abstract: false, final false
inline void UserLoginSuccess(::StringW  email, bool  isVerified) ;

/// @brief Method UserPasswordChangeFailure, addr 0x182e890, size 0x6c, virtual false, abstract: false, final false
inline void UserPasswordChangeFailure(::VROSC::Error  error) ;

/// @brief Method UserPasswordChangeSuccess, addr 0x182e7e8, size 0xa8, virtual false, abstract: false, final false
inline void UserPasswordChangeSuccess(::StringW  password) ;

/// @brief Method <Awake>b__27_0, addr 0x182eb28, size 0x34, virtual false, abstract: false, final false
inline bool _Awake_b__27_0() ;

/// @brief Method <Awake>b__27_6, addr 0x182eb5c, size 0x34, virtual false, abstract: false, final false
inline bool _Awake_b__27_6() ;

/// @brief Method <Awake>b__27_7, addr 0x182eb90, size 0x34, virtual false, abstract: false, final false
inline bool _Awake_b__27_7() ;

/// @brief Method <Awake>b__27_8, addr 0x182ebc4, size 0x3c, virtual false, abstract: false, final false
inline bool _Awake_b__27_8() ;

/// @brief Method <Awake>g__Continue|27_1, addr 0x182d04c, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Func_1<bool>* _Awake_g__Continue_27_1() ;

/// @brief Method <Awake>g__HasUnverifiedUserLoggedIn|27_3, addr 0x182d114, size 0x7c, virtual false, abstract: false, final false
inline ::System::Func_1<bool>* _Awake_g__HasUnverifiedUserLoggedIn_27_3() ;

/// @brief Method <Awake>g__HasUserLoggedOut|27_4, addr 0x182d20c, size 0x7c, virtual false, abstract: false, final false
inline ::System::Func_1<bool>* _Awake_g__HasUserLoggedOut_27_4() ;

/// @brief Method <Awake>g__HasVerifiedUserLoggedIn|27_2, addr 0x182d190, size 0x7c, virtual false, abstract: false, final false
inline ::System::Func_1<bool>* _Awake_g__HasVerifiedUserLoggedIn_27_2() ;

constexpr ::VROSC::AuthenticationManager_FirebaseUserData* const& __cordl_internal_get_FirebaseUser() const;

constexpr ::VROSC::AuthenticationManager_FirebaseUserData*& __cordl_internal_get_FirebaseUser() ;

constexpr ::VROSC::AuthenticationManager_LocalUserData* const& __cordl_internal_get_LocalUser() const;

constexpr ::VROSC::AuthenticationManager_LocalUserData*& __cordl_internal_get_LocalUser() ;

constexpr bool const& __cordl_internal_get__IsWaitingForCredentials_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsWaitingForCredentials_k__BackingField() ;

constexpr ::VROSC::LoginWithEmailState* const& __cordl_internal_get__loginWithEmailState() const;

constexpr ::VROSC::LoginWithEmailState*& __cordl_internal_get__loginWithEmailState() ;

constexpr ::VROSC::IState* const& __cordl_internal_get__startState() const;

constexpr ::VROSC::IState*& __cordl_internal_get__startState() ;

constexpr ::VROSC::StateMachine* const& __cordl_internal_get__stateMachine() const;

constexpr ::VROSC::StateMachine*& __cordl_internal_get__stateMachine() ;

constexpr void __cordl_internal_set_FirebaseUser(::VROSC::AuthenticationManager_FirebaseUserData*  value) ;

constexpr void __cordl_internal_set_LocalUser(::VROSC::AuthenticationManager_LocalUserData*  value) ;

constexpr void __cordl_internal_set__IsWaitingForCredentials_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__loginWithEmailState(::VROSC::LoginWithEmailState*  value) ;

constexpr void __cordl_internal_set__startState(::VROSC::IState*  value) ;

constexpr void __cordl_internal_set__stateMachine(::VROSC::StateMachine*  value) ;

/// @brief Method .ctor, addr 0x182ea9c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::VROSC::Error>* getStaticF_OnRefreshFirebaseAccessTokenFailure() ;

static inline ::System::Action_3<::StringW,::StringW,::StringW>* getStaticF_OnRefreshFirebaseAccessTokenSuccess() ;

static inline ::System::Action_1<::VROSC::Error>* getStaticF_OnResetPasswordFailure() ;

static inline ::System::Action* getStaticF_OnResetPasswordSuccess() ;

static inline ::System::Action_1<::VROSC::Error>* getStaticF_OnSendVerificationEmailFailure() ;

static inline ::System::Action* getStaticF_OnSendVerificationEmailSuccess() ;

static inline ::System::Action_1<::VROSC::Error>* getStaticF_OnUserEmailChangeFailure() ;

static inline ::System::Action* getStaticF_OnUserEmailChangeSuccess() ;

static inline ::System::Action_1<::VROSC::Error>* getStaticF_OnUserLoginFailure() ;

static inline ::System::Action_2<::StringW,bool>* getStaticF_OnUserLoginSuccess() ;

static inline ::System::Action* getStaticF_OnUserLogout() ;

static inline ::System::Action_1<::VROSC::Error>* getStaticF_OnUserPasswordChangeFailure() ;

static inline ::System::Action* getStaticF_OnUserPasswordChangeSuccess() ;

static inline ::System::Action* getStaticF_OnVerifiedUserLogin() ;

/// @brief Method get_IsWaitingForCredentials, addr 0x182cc4c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsWaitingForCredentials() ;

static inline void setStaticF_OnRefreshFirebaseAccessTokenFailure(::System::Action_1<::VROSC::Error>*  value) ;

static inline void setStaticF_OnRefreshFirebaseAccessTokenSuccess(::System::Action_3<::StringW,::StringW,::StringW>*  value) ;

static inline void setStaticF_OnResetPasswordFailure(::System::Action_1<::VROSC::Error>*  value) ;

static inline void setStaticF_OnResetPasswordSuccess(::System::Action*  value) ;

static inline void setStaticF_OnSendVerificationEmailFailure(::System::Action_1<::VROSC::Error>*  value) ;

static inline void setStaticF_OnSendVerificationEmailSuccess(::System::Action*  value) ;

static inline void setStaticF_OnUserEmailChangeFailure(::System::Action_1<::VROSC::Error>*  value) ;

static inline void setStaticF_OnUserEmailChangeSuccess(::System::Action*  value) ;

static inline void setStaticF_OnUserLoginFailure(::System::Action_1<::VROSC::Error>*  value) ;

static inline void setStaticF_OnUserLoginSuccess(::System::Action_2<::StringW,bool>*  value) ;

static inline void setStaticF_OnUserLogout(::System::Action*  value) ;

static inline void setStaticF_OnUserPasswordChangeFailure(::System::Action_1<::VROSC::Error>*  value) ;

static inline void setStaticF_OnUserPasswordChangeSuccess(::System::Action*  value) ;

static inline void setStaticF_OnVerifiedUserLogin(::System::Action*  value) ;

/// @brief Method set_IsWaitingForCredentials, addr 0x182cc54, size 0xc, virtual false, abstract: false, final false
inline void set_IsWaitingForCredentials(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationManager(AuthenticationManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationManager(AuthenticationManager const& ) = delete;

/// @brief Field MAX_RETRY_ATTEMPTS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_RETRY_ATTEMPTS{static_cast<int32_t>(0x5)};

/// @brief Field RETRY_ATTEMPT_TIMEOUT offset 0xffffffff size 0x4
static constexpr float_t  RETRY_ATTEMPT_TIMEOUT{static_cast<float_t>(1.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{312};

/// @brief Field LocalUser, offset: 0x20, size: 0x8, def value: None
 ::VROSC::AuthenticationManager_LocalUserData*  ___LocalUser;

/// @brief Field FirebaseUser, offset: 0x28, size: 0x8, def value: None
 ::VROSC::AuthenticationManager_FirebaseUserData*  ___FirebaseUser;

/// @brief Field _stateMachine, offset: 0x30, size: 0x8, def value: None
 ::VROSC::StateMachine*  ____stateMachine;

/// @brief Field _startState, offset: 0x38, size: 0x8, def value: None
 ::VROSC::IState*  ____startState;

/// @brief Field _loginWithEmailState, offset: 0x40, size: 0x8, def value: None
 ::VROSC::LoginWithEmailState*  ____loginWithEmailState;

/// @brief Field <IsWaitingForCredentials>k__BackingField, offset: 0x48, size: 0x1, def value: None
 bool  ____IsWaitingForCredentials_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AuthenticationManager, ___LocalUser) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AuthenticationManager, ___FirebaseUser) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AuthenticationManager, ____stateMachine) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AuthenticationManager, ____startState) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AuthenticationManager, ____loginWithEmailState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::AuthenticationManager, ____IsWaitingForCredentials_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AuthenticationManager, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AuthenticationManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AuthenticationManager*, "VROSC", "AuthenticationManager");
NEED_NO_BOX(::VROSC::AuthenticationManager_FirebaseUserData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AuthenticationManager_FirebaseUserData*, "VROSC", "AuthenticationManager/FirebaseUserData");
NEED_NO_BOX(::VROSC::AuthenticationManager_LocalUserData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AuthenticationManager_LocalUserData*, "VROSC", "AuthenticationManager/LocalUserData");
NEED_NO_BOX(::VROSC::AuthenticationManager___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AuthenticationManager___c*, "VROSC", "AuthenticationManager/<>c");
NEED_NO_BOX(::VROSC::AuthenticationManager___c__DisplayClass37_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AuthenticationManager___c__DisplayClass37_0*, "VROSC", "AuthenticationManager/<>c__DisplayClass37_0");
