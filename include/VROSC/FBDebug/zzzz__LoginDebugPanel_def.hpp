#pragma once
// IWYU pragma private; include "VROSC/FBDebug/LoginDebugPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LoginDebugPanel)
namespace TMPro {
class TMP_InputField;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace VROSC::FBDebug {
class LoginDebugPanel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::FBDebug::LoginDebugPanel);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC::FBDebug {
// Is value type: false
// CS Name: VROSC.FBDebug.LoginDebugPanel
class CORDL_TYPE LoginDebugPanel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _changeUserEmailButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__changeUserEmailButton, put=__cordl_internal_set__changeUserEmailButton)) ::UnityW<::UnityEngine::UI::Button>  _changeUserEmailButton;

/// @brief Field _changeUserPasswordButton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__changeUserPasswordButton, put=__cordl_internal_set__changeUserPasswordButton)) ::UnityW<::UnityEngine::UI::Button>  _changeUserPasswordButton;

/// @brief Field _createAccountButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__createAccountButton, put=__cordl_internal_set__createAccountButton)) ::UnityW<::UnityEngine::UI::Button>  _createAccountButton;

/// @brief Field _emailInput, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__emailInput, put=__cordl_internal_set__emailInput)) ::UnityW<::TMPro::TMP_InputField>  _emailInput;

/// @brief Field _loginButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__loginButton, put=__cordl_internal_set__loginButton)) ::UnityW<::UnityEngine::UI::Button>  _loginButton;

/// @brief Field _logoutButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__logoutButton, put=__cordl_internal_set__logoutButton)) ::UnityW<::UnityEngine::UI::Button>  _logoutButton;

/// @brief Field _message, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__message, put=setStaticF__message)) ::StringW  _message;

/// @brief Field _messageText, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__messageText, put=__cordl_internal_set__messageText)) ::UnityW<::TMPro::TextMeshProUGUI>  _messageText;

/// @brief Field _passwordInput, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__passwordInput, put=__cordl_internal_set__passwordInput)) ::UnityW<::TMPro::TMP_InputField>  _passwordInput;

/// @brief Field _resetPasswordButton, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__resetPasswordButton, put=__cordl_internal_set__resetPasswordButton)) ::UnityW<::UnityEngine::UI::Button>  _resetPasswordButton;

/// @brief Field _sendVerificationEmailButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__sendVerificationEmailButton, put=__cordl_internal_set__sendVerificationEmailButton)) ::UnityW<::UnityEngine::UI::Button>  _sendVerificationEmailButton;

/// @brief Method AddMessage, addr 0x17df1b8, size 0x11c, virtual false, abstract: false, final false
static inline void AddMessage(::StringW  message, bool  clear) ;

/// @brief Method Awake, addr 0x17de958, size 0x2a8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ChangeUserEmailPressed, addr 0x17df080, size 0x64, virtual false, abstract: false, final false
inline void ChangeUserEmailPressed() ;

/// @brief Method ChangeUserPasswordPressed, addr 0x17df0e4, size 0x70, virtual false, abstract: false, final false
inline void ChangeUserPasswordPressed() ;

/// @brief Method CreateAccountPressed, addr 0x17defb8, size 0x74, virtual false, abstract: false, final false
inline void CreateAccountPressed() ;

/// @brief Method LoginButtonPressed, addr 0x17deef0, size 0x74, virtual false, abstract: false, final false
inline void LoginButtonPressed() ;

/// @brief Method LogoutButtonPressed, addr 0x17def64, size 0x54, virtual false, abstract: false, final false
inline void LogoutButtonPressed() ;

static inline ::VROSC::FBDebug::LoginDebugPanel* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17dec00, size 0x278, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ResetPasswordPressed, addr 0x17df154, size 0x64, virtual false, abstract: false, final false
inline void ResetPasswordPressed() ;

/// @brief Method SendVerificationEmailPressed, addr 0x17df02c, size 0x54, virtual false, abstract: false, final false
inline void SendVerificationEmailPressed() ;

/// @brief Method Update, addr 0x17dee78, size 0x78, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__changeUserEmailButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__changeUserEmailButton() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__changeUserPasswordButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__changeUserPasswordButton() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__createAccountButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__createAccountButton() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get__emailInput() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get__emailInput() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__loginButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__loginButton() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__logoutButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__logoutButton() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__messageText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__messageText() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get__passwordInput() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get__passwordInput() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__resetPasswordButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__resetPasswordButton() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__sendVerificationEmailButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__sendVerificationEmailButton() ;

constexpr void __cordl_internal_set__changeUserEmailButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__changeUserPasswordButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__createAccountButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__emailInput(::UnityW<::TMPro::TMP_InputField>  value) ;

constexpr void __cordl_internal_set__loginButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__logoutButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__messageText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set__passwordInput(::UnityW<::TMPro::TMP_InputField>  value) ;

constexpr void __cordl_internal_set__resetPasswordButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__sendVerificationEmailButton(::UnityW<::UnityEngine::UI::Button>  value) ;

/// @brief Method .ctor, addr 0x17df2d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF__message() ;

static inline void setStaticF__message(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoginDebugPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoginDebugPanel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoginDebugPanel(LoginDebugPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoginDebugPanel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoginDebugPanel(LoginDebugPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1590};

/// @brief Field _emailInput, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ____emailInput;

/// @brief Field _passwordInput, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ____passwordInput;

/// @brief Field _loginButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____loginButton;

/// @brief Field _logoutButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____logoutButton;

/// @brief Field _createAccountButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____createAccountButton;

/// @brief Field _sendVerificationEmailButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____sendVerificationEmailButton;

/// @brief Field _changeUserEmailButton, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____changeUserEmailButton;

/// @brief Field _changeUserPasswordButton, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____changeUserPasswordButton;

/// @brief Field _resetPasswordButton, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____resetPasswordButton;

/// @brief Field _messageText, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____messageText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FBDebug::LoginDebugPanel, ____emailInput) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FBDebug::LoginDebugPanel, ____passwordInput) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FBDebug::LoginDebugPanel, ____loginButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::FBDebug::LoginDebugPanel, ____logoutButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::FBDebug::LoginDebugPanel, ____createAccountButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::FBDebug::LoginDebugPanel, ____sendVerificationEmailButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::FBDebug::LoginDebugPanel, ____changeUserEmailButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::FBDebug::LoginDebugPanel, ____changeUserPasswordButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::FBDebug::LoginDebugPanel, ____resetPasswordButton) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::FBDebug::LoginDebugPanel, ____messageText) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FBDebug::LoginDebugPanel, 0x70>, "Size mismatch!");

} // namespace end def VROSC::FBDebug
NEED_NO_BOX(::VROSC::FBDebug::LoginDebugPanel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FBDebug::LoginDebugPanel*, "VROSC.FBDebug", "LoginDebugPanel");
