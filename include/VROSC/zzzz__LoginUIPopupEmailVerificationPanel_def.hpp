#pragma once
// IWYU pragma private; include "VROSC/LoginUIPopupEmailVerificationPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__LoginUIPopupPanelBase_def.hpp"
CORDL_MODULE_EXPORT(LoginUIPopupEmailVerificationPanel)
namespace System {
class Object;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC {
class LoginUIPopupEmailVerificationPanel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoginUIPopupEmailVerificationPanel);
// Dependencies VROSC.LoginUIPopupPanelBase
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoginUIPopupEmailVerificationPanel
class CORDL_TYPE LoginUIPopupEmailVerificationPanel : public ::VROSC::LoginUIPopupPanelBase {
public:
// Declarations
/// @brief Field _changeEmailButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__changeEmailButton, put=__cordl_internal_set__changeEmailButton)) ::UnityW<::VROSC::UIButton>  _changeEmailButton;

/// @brief Field _logoutButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__logoutButton, put=__cordl_internal_set__logoutButton)) ::UnityW<::VROSC::UIButton>  _logoutButton;

/// @brief Field _sendVerificationEmailButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__sendVerificationEmailButton, put=__cordl_internal_set__sendVerificationEmailButton)) ::UnityW<::VROSC::UIButton>  _sendVerificationEmailButton;

/// @brief Method Awake, addr 0x1751dd8, size 0x1b4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ChangeEmailButtonPressed, addr 0x1752654, size 0x1c, virtual false, abstract: false, final false
inline void ChangeEmailButtonPressed() ;

/// @brief Method Close, addr 0x1752230, size 0xf0, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method EnableUI, addr 0x1752398, size 0xbc, virtual true, abstract: false, final false
inline void EnableUI(bool  enable) ;

/// @brief Method LogoutButtonPressed, addr 0x1752670, size 0x154, virtual false, abstract: false, final false
inline void LogoutButtonPressed() ;

static inline ::VROSC::LoginUIPopupEmailVerificationPanel* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1751f8c, size 0x1b4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Open, addr 0x1752140, size 0xf0, virtual true, abstract: false, final false
inline void Open(::ArrayW<::System::Object*,::Array<::System::Object*>*>  parameters) ;

/// @brief Method SendValidationEmailButtonPressed, addr 0x1752650, size 0x4, virtual false, abstract: false, final false
inline void SendValidationEmailButtonPressed() ;

/// @brief Method SendVerificationEmail, addr 0x1752454, size 0x1fc, virtual false, abstract: false, final false
inline void SendVerificationEmail() ;

/// @brief Method SendVerificationEmailFailed, addr 0x1752998, size 0x220, virtual false, abstract: false, final false
inline void SendVerificationEmailFailed(::VROSC::Error  error) ;

/// @brief Method SendVerificationEmailSucceeded, addr 0x17527c4, size 0x1d4, virtual false, abstract: false, final false
inline void SendVerificationEmailSucceeded() ;

/// @brief Method UserHasVerified, addr 0x1752cf0, size 0x18, virtual false, abstract: false, final false
inline void UserHasVerified() ;

/// @brief Method UserLoggedOut, addr 0x1752bb8, size 0x138, virtual false, abstract: false, final false
inline void UserLoggedOut() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__changeEmailButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__changeEmailButton() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__logoutButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__logoutButton() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__sendVerificationEmailButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__sendVerificationEmailButton() ;

constexpr void __cordl_internal_set__changeEmailButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__logoutButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__sendVerificationEmailButton(::UnityW<::VROSC::UIButton>  value) ;

/// @brief Method .ctor, addr 0x1752d08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoginUIPopupEmailVerificationPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoginUIPopupEmailVerificationPanel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoginUIPopupEmailVerificationPanel(LoginUIPopupEmailVerificationPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoginUIPopupEmailVerificationPanel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoginUIPopupEmailVerificationPanel(LoginUIPopupEmailVerificationPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1156};

/// @brief Field _sendVerificationEmailButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____sendVerificationEmailButton;

/// @brief Field _changeEmailButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____changeEmailButton;

/// @brief Field _logoutButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____logoutButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoginUIPopupEmailVerificationPanel, ____sendVerificationEmailButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopupEmailVerificationPanel, ____changeEmailButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopupEmailVerificationPanel, ____logoutButton) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoginUIPopupEmailVerificationPanel, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoginUIPopupEmailVerificationPanel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoginUIPopupEmailVerificationPanel*, "VROSC", "LoginUIPopupEmailVerificationPanel");
