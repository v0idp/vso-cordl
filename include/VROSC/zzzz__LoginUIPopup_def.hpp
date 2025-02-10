#pragma once
// IWYU pragma private; include "VROSC/LoginUIPopup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoginUIPopup)
namespace System {
class Action;
}
namespace VROSC {
class LoginUIPopupAcceptTermsPanel;
}
namespace VROSC {
class LoginUIPopupChangeEmailPanel;
}
namespace VROSC {
class LoginUIPopupChangePasswordPanel;
}
namespace VROSC {
class LoginUIPopupEmailVerificationPanel;
}
namespace VROSC {
class LoginUIPopupLoginPanel;
}
namespace VROSC {
class LoginUIPopupPanelBase;
}
namespace VROSC {
struct LoginUIPopup_Panel;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC {
struct LoginUIPopup_Panel;
}
namespace VROSC {
class LoginUIPopup;
}
// Write type traits
MARK_VAL_T(::VROSC::LoginUIPopup_Panel);
MARK_REF_PTR_T(::VROSC::LoginUIPopup);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoginUIPopup/Panel
struct CORDL_TYPE LoginUIPopup_Panel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LoginUIPopup_Panel_Unwrapped
enum struct __LoginUIPopup_Panel_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Login = static_cast<int32_t>(0x1),
__E_EmailVerification = static_cast<int32_t>(0x2),
__E_ChangeEmail = static_cast<int32_t>(0x3),
__E_ChangePassword = static_cast<int32_t>(0x4),
__E_AcceptTerms = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LoginUIPopup_Panel_Unwrapped () const noexcept {
return static_cast<__LoginUIPopup_Panel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LoginUIPopup_Panel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LoginUIPopup_Panel(int32_t  value__) noexcept;

/// @brief Field AcceptTerms value: I32(5)
static ::VROSC::LoginUIPopup_Panel const AcceptTerms;

/// @brief Field ChangeEmail value: I32(3)
static ::VROSC::LoginUIPopup_Panel const ChangeEmail;

/// @brief Field ChangePassword value: I32(4)
static ::VROSC::LoginUIPopup_Panel const ChangePassword;

/// @brief Field EmailVerification value: I32(2)
static ::VROSC::LoginUIPopup_Panel const EmailVerification;

/// @brief Field Login value: I32(1)
static ::VROSC::LoginUIPopup_Panel const Login;

/// @brief Field None value: I32(0)
static ::VROSC::LoginUIPopup_Panel const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1151};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoginUIPopup_Panel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoginUIPopup_Panel, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoginUIPopup
class CORDL_TYPE LoginUIPopup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Panel = ::VROSC::LoginUIPopup_Panel;

 __declspec(property(get=get_IsOpen, put=set_IsOpen)) bool  IsOpen;

/// @brief Field OnLoginPopupClosed, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLoginPopupClosed, put=__cordl_internal_set_OnLoginPopupClosed)) ::System::Action*  OnLoginPopupClosed;

/// @brief Field <IsOpen>k__BackingField, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsOpen_k__BackingField, put=__cordl_internal_set__IsOpen_k__BackingField)) bool  _IsOpen_k__BackingField;

/// @brief Field _acceptTermsPanel, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__acceptTermsPanel, put=__cordl_internal_set__acceptTermsPanel)) ::UnityW<::VROSC::LoginUIPopupAcceptTermsPanel>  _acceptTermsPanel;

/// @brief Field _changeEmailPanel, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__changeEmailPanel, put=__cordl_internal_set__changeEmailPanel)) ::UnityW<::VROSC::LoginUIPopupChangeEmailPanel>  _changeEmailPanel;

/// @brief Field _changePasswordPanel, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__changePasswordPanel, put=__cordl_internal_set__changePasswordPanel)) ::UnityW<::VROSC::LoginUIPopupChangePasswordPanel>  _changePasswordPanel;

/// @brief Field _currentPanel, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentPanel, put=__cordl_internal_set__currentPanel)) ::UnityW<::VROSC::LoginUIPopupPanelBase>  _currentPanel;

/// @brief Field _loginPanel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__loginPanel, put=__cordl_internal_set__loginPanel)) ::UnityW<::VROSC::LoginUIPopupLoginPanel>  _loginPanel;

/// @brief Field _previousPanel, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__previousPanel, put=__cordl_internal_set__previousPanel)) ::UnityW<::VROSC::LoginUIPopupPanelBase>  _previousPanel;

/// @brief Field _privacyPolicyButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__privacyPolicyButton, put=__cordl_internal_set__privacyPolicyButton)) ::UnityW<::VROSC::UIButton>  _privacyPolicyButton;

/// @brief Field _waitingForVerificationPanel, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__waitingForVerificationPanel, put=__cordl_internal_set__waitingForVerificationPanel)) ::UnityW<::VROSC::LoginUIPopupEmailVerificationPanel>  _waitingForVerificationPanel;

/// @brief Method Awake, addr 0x174fa18, size 0x164, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClosePanel, addr 0x174fe80, size 0x98, virtual false, abstract: false, final false
inline void ClosePanel() ;

/// @brief Method ClosePopup, addr 0x174fe18, size 0x68, virtual false, abstract: false, final false
inline void ClosePopup() ;

static inline ::VROSC::LoginUIPopup* New_ctor() ;

/// @brief Method OpenPanel, addr 0x174fc04, size 0x214, virtual false, abstract: false, final false
inline void OpenPanel(::VROSC::LoginUIPopup_Panel  panel) ;

/// @brief Method PrivacyPolicyPressed, addr 0x174ff18, size 0x68, virtual false, abstract: false, final false
inline void PrivacyPolicyPressed() ;

/// @brief Method Setup, addr 0x174fb7c, size 0x88, virtual false, abstract: false, final false
inline void Setup() ;

constexpr ::System::Action* const& __cordl_internal_get_OnLoginPopupClosed() const;

constexpr ::System::Action*& __cordl_internal_get_OnLoginPopupClosed() ;

constexpr bool const& __cordl_internal_get__IsOpen_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsOpen_k__BackingField() ;

constexpr ::UnityW<::VROSC::LoginUIPopupAcceptTermsPanel> const& __cordl_internal_get__acceptTermsPanel() const;

constexpr ::UnityW<::VROSC::LoginUIPopupAcceptTermsPanel>& __cordl_internal_get__acceptTermsPanel() ;

constexpr ::UnityW<::VROSC::LoginUIPopupChangeEmailPanel> const& __cordl_internal_get__changeEmailPanel() const;

constexpr ::UnityW<::VROSC::LoginUIPopupChangeEmailPanel>& __cordl_internal_get__changeEmailPanel() ;

constexpr ::UnityW<::VROSC::LoginUIPopupChangePasswordPanel> const& __cordl_internal_get__changePasswordPanel() const;

constexpr ::UnityW<::VROSC::LoginUIPopupChangePasswordPanel>& __cordl_internal_get__changePasswordPanel() ;

constexpr ::UnityW<::VROSC::LoginUIPopupPanelBase> const& __cordl_internal_get__currentPanel() const;

constexpr ::UnityW<::VROSC::LoginUIPopupPanelBase>& __cordl_internal_get__currentPanel() ;

constexpr ::UnityW<::VROSC::LoginUIPopupLoginPanel> const& __cordl_internal_get__loginPanel() const;

constexpr ::UnityW<::VROSC::LoginUIPopupLoginPanel>& __cordl_internal_get__loginPanel() ;

constexpr ::UnityW<::VROSC::LoginUIPopupPanelBase> const& __cordl_internal_get__previousPanel() const;

constexpr ::UnityW<::VROSC::LoginUIPopupPanelBase>& __cordl_internal_get__previousPanel() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__privacyPolicyButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__privacyPolicyButton() ;

constexpr ::UnityW<::VROSC::LoginUIPopupEmailVerificationPanel> const& __cordl_internal_get__waitingForVerificationPanel() const;

constexpr ::UnityW<::VROSC::LoginUIPopupEmailVerificationPanel>& __cordl_internal_get__waitingForVerificationPanel() ;

constexpr void __cordl_internal_set_OnLoginPopupClosed(::System::Action*  value) ;

constexpr void __cordl_internal_set__IsOpen_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__acceptTermsPanel(::UnityW<::VROSC::LoginUIPopupAcceptTermsPanel>  value) ;

constexpr void __cordl_internal_set__changeEmailPanel(::UnityW<::VROSC::LoginUIPopupChangeEmailPanel>  value) ;

constexpr void __cordl_internal_set__changePasswordPanel(::UnityW<::VROSC::LoginUIPopupChangePasswordPanel>  value) ;

constexpr void __cordl_internal_set__currentPanel(::UnityW<::VROSC::LoginUIPopupPanelBase>  value) ;

constexpr void __cordl_internal_set__loginPanel(::UnityW<::VROSC::LoginUIPopupLoginPanel>  value) ;

constexpr void __cordl_internal_set__previousPanel(::UnityW<::VROSC::LoginUIPopupPanelBase>  value) ;

constexpr void __cordl_internal_set__privacyPolicyButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__waitingForVerificationPanel(::UnityW<::VROSC::LoginUIPopupEmailVerificationPanel>  value) ;

/// @brief Method .ctor, addr 0x174ff80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsOpen, addr 0x174fa04, size 0x8, virtual false, abstract: false, final false
inline bool get_IsOpen() ;

/// @brief Method set_IsOpen, addr 0x174fa0c, size 0xc, virtual false, abstract: false, final false
inline void set_IsOpen(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoginUIPopup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoginUIPopup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoginUIPopup(LoginUIPopup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoginUIPopup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoginUIPopup(LoginUIPopup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1152};

/// @brief Field _loginPanel, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::LoginUIPopupLoginPanel>  ____loginPanel;

/// @brief Field _waitingForVerificationPanel, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::LoginUIPopupEmailVerificationPanel>  ____waitingForVerificationPanel;

/// @brief Field _changeEmailPanel, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::LoginUIPopupChangeEmailPanel>  ____changeEmailPanel;

/// @brief Field _changePasswordPanel, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::LoginUIPopupChangePasswordPanel>  ____changePasswordPanel;

/// @brief Field _acceptTermsPanel, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::LoginUIPopupAcceptTermsPanel>  ____acceptTermsPanel;

/// @brief Field _privacyPolicyButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____privacyPolicyButton;

/// @brief Field _previousPanel, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::LoginUIPopupPanelBase>  ____previousPanel;

/// @brief Field _currentPanel, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::LoginUIPopupPanelBase>  ____currentPanel;

/// @brief Field <IsOpen>k__BackingField, offset: 0x60, size: 0x1, def value: None
 bool  ____IsOpen_k__BackingField;

/// @brief Field OnLoginPopupClosed, offset: 0x68, size: 0x8, def value: None
 ::System::Action*  ___OnLoginPopupClosed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoginUIPopup, ____loginPanel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopup, ____waitingForVerificationPanel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopup, ____changeEmailPanel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopup, ____changePasswordPanel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopup, ____acceptTermsPanel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopup, ____privacyPolicyButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopup, ____previousPanel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopup, ____currentPanel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopup, ____IsOpen_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopup, ___OnLoginPopupClosed) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoginUIPopup, 0x70>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoginUIPopup_Panel, "VROSC", "LoginUIPopup/Panel");
NEED_NO_BOX(::VROSC::LoginUIPopup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoginUIPopup*, "VROSC", "LoginUIPopup");
