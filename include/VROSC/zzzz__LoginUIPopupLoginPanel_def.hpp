#pragma once
// IWYU pragma private; include "VROSC/LoginUIPopupLoginPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__LoginUIPopupPanelBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LoginUIPopupLoginPanel)
namespace GlobalNamespace {
class UIInputField;
}
namespace System {
class Object;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UISlideToggle;
}
// Forward declare root types
namespace VROSC {
class LoginUIPopupLoginPanel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoginUIPopupLoginPanel);
// Dependencies VROSC.LoginUIPopupPanelBase
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoginUIPopupLoginPanel
class CORDL_TYPE LoginUIPopupLoginPanel : public ::VROSC::LoginUIPopupPanelBase {
public:
// Declarations
/// @brief Field _createAccountButton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__createAccountButton, put=__cordl_internal_set__createAccountButton)) ::UnityW<::VROSC::UIButton>  _createAccountButton;

/// @brief Field _emailInput, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__emailInput, put=__cordl_internal_set__emailInput)) ::UnityW<::GlobalNamespace::UIInputField>  _emailInput;

/// @brief Field _loginButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__loginButton, put=__cordl_internal_set__loginButton)) ::UnityW<::VROSC::UIButton>  _loginButton;

/// @brief Field _passwordInput, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__passwordInput, put=__cordl_internal_set__passwordInput)) ::UnityW<::GlobalNamespace::UIInputField>  _passwordInput;

/// @brief Field _rememberMeToggle, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__rememberMeToggle, put=__cordl_internal_set__rememberMeToggle)) ::UnityW<::VROSC::UISlideToggle>  _rememberMeToggle;

/// @brief Field _resetPasswordButton, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__resetPasswordButton, put=__cordl_internal_set__resetPasswordButton)) ::UnityW<::VROSC::UIButton>  _resetPasswordButton;

/// @brief Method Awake, addr 0x1752d10, size 0x2d4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateAccountButtonPressed, addr 0x17536ac, size 0x250, virtual false, abstract: false, final false
inline void CreateAccountButtonPressed() ;

/// @brief Method CreateUserFailed, addr 0x1753f68, size 0x240, virtual false, abstract: false, final false
inline void CreateUserFailed(::VROSC::Error  error) ;

/// @brief Method EnableUI, addr 0x175333c, size 0x120, virtual true, abstract: false, final false
inline void EnableUI(bool  enable) ;

/// @brief Method LoginButtonPressed, addr 0x175345c, size 0x250, virtual false, abstract: false, final false
inline void LoginButtonPressed() ;

static inline ::VROSC::LoginUIPopupLoginPanel* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1753068, size 0x2d4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Open, addr 0x1752fe4, size 0x84, virtual true, abstract: false, final false
inline void Open(::ArrayW<::System::Object*,::Array<::System::Object*>*>  parameters) ;

/// @brief Method ResetPasswordButtonPressed, addr 0x17538fc, size 0x214, virtual false, abstract: false, final false
inline void ResetPasswordButtonPressed() ;

/// @brief Method ResetPasswordFailed, addr 0x175437c, size 0x220, virtual false, abstract: false, final false
inline void ResetPasswordFailed(::VROSC::Error  error) ;

/// @brief Method ResetPasswordSucceeded, addr 0x17541a8, size 0x1d4, virtual false, abstract: false, final false
inline void ResetPasswordSucceeded() ;

/// @brief Method UserLoginFailed, addr 0x1753d28, size 0x240, virtual false, abstract: false, final false
inline void UserLoginFailed(::VROSC::Error  error) ;

/// @brief Method UserLoginSucceeded, addr 0x1753b10, size 0x218, virtual false, abstract: false, final false
inline void UserLoginSucceeded(::StringW  email, bool  isVerified) ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__createAccountButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__createAccountButton() ;

constexpr ::UnityW<::GlobalNamespace::UIInputField> const& __cordl_internal_get__emailInput() const;

constexpr ::UnityW<::GlobalNamespace::UIInputField>& __cordl_internal_get__emailInput() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__loginButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__loginButton() ;

constexpr ::UnityW<::GlobalNamespace::UIInputField> const& __cordl_internal_get__passwordInput() const;

constexpr ::UnityW<::GlobalNamespace::UIInputField>& __cordl_internal_get__passwordInput() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__rememberMeToggle() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__rememberMeToggle() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__resetPasswordButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__resetPasswordButton() ;

constexpr void __cordl_internal_set__createAccountButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__emailInput(::UnityW<::GlobalNamespace::UIInputField>  value) ;

constexpr void __cordl_internal_set__loginButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__passwordInput(::UnityW<::GlobalNamespace::UIInputField>  value) ;

constexpr void __cordl_internal_set__rememberMeToggle(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__resetPasswordButton(::UnityW<::VROSC::UIButton>  value) ;

/// @brief Method .ctor, addr 0x175459c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoginUIPopupLoginPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoginUIPopupLoginPanel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoginUIPopupLoginPanel(LoginUIPopupLoginPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoginUIPopupLoginPanel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoginUIPopupLoginPanel(LoginUIPopupLoginPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1157};

/// @brief Field _emailInput, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UIInputField>  ____emailInput;

/// @brief Field _passwordInput, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UIInputField>  ____passwordInput;

/// @brief Field _rememberMeToggle, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____rememberMeToggle;

/// @brief Field _loginButton, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____loginButton;

/// @brief Field _createAccountButton, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____createAccountButton;

/// @brief Field _resetPasswordButton, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____resetPasswordButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoginUIPopupLoginPanel, ____emailInput) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopupLoginPanel, ____passwordInput) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopupLoginPanel, ____rememberMeToggle) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopupLoginPanel, ____loginButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopupLoginPanel, ____createAccountButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopupLoginPanel, ____resetPasswordButton) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoginUIPopupLoginPanel, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoginUIPopupLoginPanel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoginUIPopupLoginPanel*, "VROSC", "LoginUIPopupLoginPanel");
