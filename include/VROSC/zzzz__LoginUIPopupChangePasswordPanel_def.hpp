#pragma once
// IWYU pragma private; include "VROSC/LoginUIPopupChangePasswordPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__LoginUIPopupPanelBase_def.hpp"
CORDL_MODULE_EXPORT(LoginUIPopupChangePasswordPanel)
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
// Forward declare root types
namespace VROSC {
class LoginUIPopupChangePasswordPanel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoginUIPopupChangePasswordPanel);
// Dependencies VROSC.LoginUIPopupPanelBase
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoginUIPopupChangePasswordPanel
class CORDL_TYPE LoginUIPopupChangePasswordPanel : public ::VROSC::LoginUIPopupPanelBase {
public:
// Declarations
/// @brief Field _cancelButton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__cancelButton, put=__cordl_internal_set__cancelButton)) ::UnityW<::VROSC::UIButton>  _cancelButton;

/// @brief Field _confirmButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__confirmButton, put=__cordl_internal_set__confirmButton)) ::UnityW<::VROSC::UIButton>  _confirmButton;

/// @brief Field _currentPasswordInput, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentPasswordInput, put=__cordl_internal_set__currentPasswordInput)) ::UnityW<::GlobalNamespace::UIInputField>  _currentPasswordInput;

/// @brief Field _newPasswordInput, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__newPasswordInput, put=__cordl_internal_set__newPasswordInput)) ::UnityW<::GlobalNamespace::UIInputField>  _newPasswordInput;

/// @brief Field _repeatPasswordInput, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__repeatPasswordInput, put=__cordl_internal_set__repeatPasswordInput)) ::UnityW<::GlobalNamespace::UIInputField>  _repeatPasswordInput;

/// @brief Method Awake, addr 0x1750f94, size 0x2cc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CancelButtonPressed, addr 0x17519ec, size 0x18, virtual false, abstract: false, final false
inline void CancelButtonPressed() ;

/// @brief Method ConfirmButtonPressed, addr 0x175172c, size 0x2c0, virtual false, abstract: false, final false
inline void ConfirmButtonPressed() ;

/// @brief Method EnableUI, addr 0x175160c, size 0x120, virtual true, abstract: false, final false
inline void EnableUI(bool  enable) ;

static inline ::VROSC::LoginUIPopupChangePasswordPanel* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1751260, size 0x2cc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Open, addr 0x175152c, size 0xe0, virtual true, abstract: false, final false
inline void Open(::ArrayW<::System::Object*,::Array<::System::Object*>*>  parameters) ;

/// @brief Method PasswordChangeFailed, addr 0x1751bb0, size 0x220, virtual false, abstract: false, final false
inline void PasswordChangeFailed(::VROSC::Error  error) ;

/// @brief Method PasswordChangeSucceeded, addr 0x1751a04, size 0x1ac, virtual false, abstract: false, final false
inline void PasswordChangeSucceeded() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__cancelButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__cancelButton() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__confirmButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__confirmButton() ;

constexpr ::UnityW<::GlobalNamespace::UIInputField> const& __cordl_internal_get__currentPasswordInput() const;

constexpr ::UnityW<::GlobalNamespace::UIInputField>& __cordl_internal_get__currentPasswordInput() ;

constexpr ::UnityW<::GlobalNamespace::UIInputField> const& __cordl_internal_get__newPasswordInput() const;

constexpr ::UnityW<::GlobalNamespace::UIInputField>& __cordl_internal_get__newPasswordInput() ;

constexpr ::UnityW<::GlobalNamespace::UIInputField> const& __cordl_internal_get__repeatPasswordInput() const;

constexpr ::UnityW<::GlobalNamespace::UIInputField>& __cordl_internal_get__repeatPasswordInput() ;

constexpr void __cordl_internal_set__cancelButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__confirmButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__currentPasswordInput(::UnityW<::GlobalNamespace::UIInputField>  value) ;

constexpr void __cordl_internal_set__newPasswordInput(::UnityW<::GlobalNamespace::UIInputField>  value) ;

constexpr void __cordl_internal_set__repeatPasswordInput(::UnityW<::GlobalNamespace::UIInputField>  value) ;

/// @brief Method .ctor, addr 0x1751dd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoginUIPopupChangePasswordPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoginUIPopupChangePasswordPanel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoginUIPopupChangePasswordPanel(LoginUIPopupChangePasswordPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoginUIPopupChangePasswordPanel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoginUIPopupChangePasswordPanel(LoginUIPopupChangePasswordPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1155};

/// @brief Field _currentPasswordInput, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UIInputField>  ____currentPasswordInput;

/// @brief Field _newPasswordInput, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UIInputField>  ____newPasswordInput;

/// @brief Field _repeatPasswordInput, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UIInputField>  ____repeatPasswordInput;

/// @brief Field _confirmButton, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____confirmButton;

/// @brief Field _cancelButton, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____cancelButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoginUIPopupChangePasswordPanel, ____currentPasswordInput) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopupChangePasswordPanel, ____newPasswordInput) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopupChangePasswordPanel, ____repeatPasswordInput) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopupChangePasswordPanel, ____confirmButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopupChangePasswordPanel, ____cancelButton) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoginUIPopupChangePasswordPanel, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoginUIPopupChangePasswordPanel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoginUIPopupChangePasswordPanel*, "VROSC", "LoginUIPopupChangePasswordPanel");
