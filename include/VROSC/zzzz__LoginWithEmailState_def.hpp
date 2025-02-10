#pragma once
// IWYU pragma private; include "VROSC/LoginWithEmailState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoginWithEmailState)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace VROSC {
class AuthenticationManager;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class LoginWithEmailState___c;
}
namespace VROSC {
class LoginWithEmailState___c__DisplayClass20_0;
}
// Forward declare root types
namespace VROSC {
class LoginWithEmailState;
}
namespace VROSC {
class LoginWithEmailState___c;
}
namespace VROSC {
class LoginWithEmailState___c__DisplayClass20_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoginWithEmailState);
MARK_REF_PTR_T(::VROSC::LoginWithEmailState___c);
MARK_REF_PTR_T(::VROSC::LoginWithEmailState___c__DisplayClass20_0);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoginWithEmailState/<>c
class CORDL_TYPE LoginWithEmailState___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::LoginWithEmailState___c*  __9;

/// @brief Field <>9__20_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_2, put=setStaticF___9__20_2)) ::System::Action_1<::VROSC::Error>*  __9__20_2;

static inline ::VROSC::LoginWithEmailState___c* New_ctor() ;

/// @brief Method <FirebaseLoginUserWithEmailSuccess>b__20_2, addr 0x182f94c, size 0xb8, virtual false, abstract: false, final false
inline void _FirebaseLoginUserWithEmailSuccess_b__20_2(::VROSC::Error  error) ;

/// @brief Method .ctor, addr 0x182f944, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::LoginWithEmailState___c* getStaticF___9() ;

static inline ::System::Action_1<::VROSC::Error>* getStaticF___9__20_2() ;

static inline void setStaticF___9(::VROSC::LoginWithEmailState___c*  value) ;

static inline void setStaticF___9__20_2(::System::Action_1<::VROSC::Error>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoginWithEmailState___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoginWithEmailState___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoginWithEmailState___c(LoginWithEmailState___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoginWithEmailState___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoginWithEmailState___c(LoginWithEmailState___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{315};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::LoginWithEmailState___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoginWithEmailState/<>c__DisplayClass20_0
class CORDL_TYPE LoginWithEmailState___c__DisplayClass20_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::LoginWithEmailState*  __4__this;

/// @brief Field <>9__3, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__3, put=__cordl_internal_set___9__3)) ::System::Action*  __9__3;

/// @brief Field <>9__4, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__4, put=__cordl_internal_set___9__4)) ::System::Action_1<::VROSC::Error>*  __9__4;

/// @brief Field isEmailVerified, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isEmailVerified, put=__cordl_internal_set_isEmailVerified)) bool  isEmailVerified;

/// @brief Field userId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_userId, put=__cordl_internal_set_userId)) ::StringW  userId;

static inline ::VROSC::LoginWithEmailState___c__DisplayClass20_0* New_ctor() ;

/// @brief Method <FirebaseLoginUserWithEmailSuccess>b__0, addr 0x182fa04, size 0x218, virtual false, abstract: false, final false
inline void _FirebaseLoginUserWithEmailSuccess_b__0() ;

/// @brief Method <FirebaseLoginUserWithEmailSuccess>b__1, addr 0x182fc1c, size 0x2f0, virtual false, abstract: false, final false
inline void _FirebaseLoginUserWithEmailSuccess_b__1(::VROSC::Error  error) ;

/// @brief Method <FirebaseLoginUserWithEmailSuccess>b__3, addr 0x182ff0c, size 0x28, virtual false, abstract: false, final false
inline void _FirebaseLoginUserWithEmailSuccess_b__3() ;

/// @brief Method <FirebaseLoginUserWithEmailSuccess>b__4, addr 0x182ff34, size 0xe0, virtual false, abstract: false, final false
inline void _FirebaseLoginUserWithEmailSuccess_b__4(::VROSC::Error  error2) ;

constexpr ::VROSC::LoginWithEmailState* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::LoginWithEmailState*& __cordl_internal_get___4__this() ;

constexpr ::System::Action* const& __cordl_internal_get___9__3() const;

constexpr ::System::Action*& __cordl_internal_get___9__3() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__4() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__4() ;

constexpr bool const& __cordl_internal_get_isEmailVerified() const;

constexpr bool& __cordl_internal_get_isEmailVerified() ;

constexpr ::StringW const& __cordl_internal_get_userId() const;

constexpr ::StringW& __cordl_internal_get_userId() ;

constexpr void __cordl_internal_set___4__this(::VROSC::LoginWithEmailState*  value) ;

constexpr void __cordl_internal_set___9__3(::System::Action*  value) ;

constexpr void __cordl_internal_set___9__4(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_isEmailVerified(bool  value) ;

constexpr void __cordl_internal_set_userId(::StringW  value) ;

/// @brief Method .ctor, addr 0x182f8e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoginWithEmailState___c__DisplayClass20_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoginWithEmailState___c__DisplayClass20_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoginWithEmailState___c__DisplayClass20_0(LoginWithEmailState___c__DisplayClass20_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoginWithEmailState___c__DisplayClass20_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoginWithEmailState___c__DisplayClass20_0(LoginWithEmailState___c__DisplayClass20_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{316};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::LoginWithEmailState*  _____4__this;

/// @brief Field userId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___userId;

/// @brief Field isEmailVerified, offset: 0x20, size: 0x1, def value: None
 bool  ___isEmailVerified;

/// @brief Field <>9__3, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  _____9__3;

/// @brief Field <>9__4, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoginWithEmailState___c__DisplayClass20_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginWithEmailState___c__DisplayClass20_0, ___userId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginWithEmailState___c__DisplayClass20_0, ___isEmailVerified) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginWithEmailState___c__DisplayClass20_0, _____9__3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginWithEmailState___c__DisplayClass20_0, _____9__4) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoginWithEmailState___c__DisplayClass20_0, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoginWithEmailState
class CORDL_TYPE LoginWithEmailState : public ::System::Object {
public:
// Declarations
using __c = ::VROSC::LoginWithEmailState___c;

using __c__DisplayClass20_0 = ::VROSC::LoginWithEmailState___c__DisplayClass20_0;

 __declspec(property(get=get_HasLoggedIn, put=set_HasLoggedIn)) bool  HasLoggedIn;

/// @brief Field <HasLoggedIn>k__BackingField, offset 0x36, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasLoggedIn_k__BackingField, put=__cordl_internal_set__HasLoggedIn_k__BackingField)) bool  _HasLoggedIn_k__BackingField;

/// @brief Field _attemptsCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__attemptsCount, put=__cordl_internal_set__attemptsCount)) int32_t  _attemptsCount;

/// @brief Field _authManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__authManager, put=__cordl_internal_set__authManager)) ::UnityW<::VROSC::AuthenticationManager>  _authManager;

/// @brief Field _email, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__email, put=__cordl_internal_set__email)) ::StringW  _email;

/// @brief Field _hasSubmittedData, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasSubmittedData, put=__cordl_internal_set__hasSubmittedData)) bool  _hasSubmittedData;

/// @brief Field _isNewUser, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get__isNewUser, put=__cordl_internal_set__isNewUser)) bool  _isNewUser;

/// @brief Field _lastAttemptTimer, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastAttemptTimer, put=__cordl_internal_set__lastAttemptTimer)) float_t  _lastAttemptTimer;

/// @brief Field _password, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__password, put=__cordl_internal_set__password)) ::StringW  _password;

/// @brief Field _rememberMe, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__rememberMe, put=__cordl_internal_set__rememberMe)) bool  _rememberMe;

/// @brief Field _waitingForResponse, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__waitingForResponse, put=__cordl_internal_set__waitingForResponse)) bool  _waitingForResponse;

/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

/// @brief Method FirebaseCreateUserWithEmailSuccess, addr 0x182f61c, size 0x8, virtual false, abstract: false, final false
inline void FirebaseCreateUserWithEmailSuccess(::StringW  userId) ;

/// @brief Method FirebaseLoginUserWithEmailFailure, addr 0x182f4c0, size 0x50, virtual false, abstract: false, final false
inline void FirebaseLoginUserWithEmailFailure(::VROSC::Error  error) ;

/// @brief Method FirebaseLoginUserWithEmailSuccess, addr 0x182f624, size 0x2bc, virtual false, abstract: false, final false
inline void FirebaseLoginUserWithEmailSuccess(::StringW  userId, bool  isEmailVerified) ;

/// @brief Method LoginWithEmail, addr 0x182f324, size 0x19c, virtual false, abstract: false, final false
inline void LoginWithEmail(::StringW  email, ::StringW  password) ;

static inline ::VROSC::LoginWithEmailState* New_ctor(::VROSC::AuthenticationManager*  authManager) ;

/// @brief Method OnEnter, addr 0x182f12c, size 0xd8, virtual true, abstract: false, final true
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x182f204, size 0x54, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x182f258, size 0xcc, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateData, addr 0x182d5a8, size 0x148, virtual true, abstract: false, final true
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

constexpr bool const& __cordl_internal_get__HasLoggedIn_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasLoggedIn_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__attemptsCount() const;

constexpr int32_t& __cordl_internal_get__attemptsCount() ;

constexpr ::UnityW<::VROSC::AuthenticationManager> const& __cordl_internal_get__authManager() const;

constexpr ::UnityW<::VROSC::AuthenticationManager>& __cordl_internal_get__authManager() ;

constexpr ::StringW const& __cordl_internal_get__email() const;

constexpr ::StringW& __cordl_internal_get__email() ;

constexpr bool const& __cordl_internal_get__hasSubmittedData() const;

constexpr bool& __cordl_internal_get__hasSubmittedData() ;

constexpr bool const& __cordl_internal_get__isNewUser() const;

constexpr bool& __cordl_internal_get__isNewUser() ;

constexpr float_t const& __cordl_internal_get__lastAttemptTimer() const;

constexpr float_t& __cordl_internal_get__lastAttemptTimer() ;

constexpr ::StringW const& __cordl_internal_get__password() const;

constexpr ::StringW& __cordl_internal_get__password() ;

constexpr bool const& __cordl_internal_get__rememberMe() const;

constexpr bool& __cordl_internal_get__rememberMe() ;

constexpr bool const& __cordl_internal_get__waitingForResponse() const;

constexpr bool& __cordl_internal_get__waitingForResponse() ;

constexpr void __cordl_internal_set__HasLoggedIn_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__attemptsCount(int32_t  value) ;

constexpr void __cordl_internal_set__authManager(::UnityW<::VROSC::AuthenticationManager>  value) ;

constexpr void __cordl_internal_set__email(::StringW  value) ;

constexpr void __cordl_internal_set__hasSubmittedData(bool  value) ;

constexpr void __cordl_internal_set__isNewUser(bool  value) ;

constexpr void __cordl_internal_set__lastAttemptTimer(float_t  value) ;

constexpr void __cordl_internal_set__password(::StringW  value) ;

constexpr void __cordl_internal_set__rememberMe(bool  value) ;

constexpr void __cordl_internal_set__waitingForResponse(bool  value) ;

/// @brief Method .ctor, addr 0x182cfb0, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::VROSC::AuthenticationManager*  authManager) ;

/// @brief Method get_HasLoggedIn, addr 0x182f118, size 0x8, virtual false, abstract: false, final false
inline bool get_HasLoggedIn() ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

/// @brief Method set_HasLoggedIn, addr 0x182f120, size 0xc, virtual false, abstract: false, final false
inline void set_HasLoggedIn(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoginWithEmailState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoginWithEmailState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoginWithEmailState(LoginWithEmailState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoginWithEmailState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoginWithEmailState(LoginWithEmailState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{317};

/// @brief Field _authManager, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::AuthenticationManager>  ____authManager;

/// @brief Field _email, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____email;

/// @brief Field _password, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____password;

/// @brief Field _rememberMe, offset: 0x28, size: 0x1, def value: None
 bool  ____rememberMe;

/// @brief Field _isNewUser, offset: 0x29, size: 0x1, def value: None
 bool  ____isNewUser;

/// @brief Field _lastAttemptTimer, offset: 0x2c, size: 0x4, def value: None
 float_t  ____lastAttemptTimer;

/// @brief Field _attemptsCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ____attemptsCount;

/// @brief Field _waitingForResponse, offset: 0x34, size: 0x1, def value: None
 bool  ____waitingForResponse;

/// @brief Field _hasSubmittedData, offset: 0x35, size: 0x1, def value: None
 bool  ____hasSubmittedData;

/// @brief Field <HasLoggedIn>k__BackingField, offset: 0x36, size: 0x1, def value: None
 bool  ____HasLoggedIn_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoginWithEmailState, ____authManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginWithEmailState, ____email) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginWithEmailState, ____password) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginWithEmailState, ____rememberMe) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginWithEmailState, ____isNewUser) == 0x29, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginWithEmailState, ____lastAttemptTimer) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginWithEmailState, ____attemptsCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginWithEmailState, ____waitingForResponse) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginWithEmailState, ____hasSubmittedData) == 0x35, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginWithEmailState, ____HasLoggedIn_k__BackingField) == 0x36, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoginWithEmailState, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoginWithEmailState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoginWithEmailState*, "VROSC", "LoginWithEmailState");
NEED_NO_BOX(::VROSC::LoginWithEmailState___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoginWithEmailState___c*, "VROSC", "LoginWithEmailState/<>c");
NEED_NO_BOX(::VROSC::LoginWithEmailState___c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoginWithEmailState___c__DisplayClass20_0*, "VROSC", "LoginWithEmailState/<>c__DisplayClass20_0");
