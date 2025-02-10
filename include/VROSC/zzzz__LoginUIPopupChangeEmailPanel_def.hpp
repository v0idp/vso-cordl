#pragma once
// IWYU pragma private; include "VROSC/LoginUIPopupChangeEmailPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__LoginUIPopupPanelBase_def.hpp"
CORDL_MODULE_EXPORT(LoginUIPopupChangeEmailPanel)
namespace GlobalNamespace {
class UIInputField;
}
namespace System {
class Object;
}
namespace TMPro {
class TextMeshPro;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC {
class LoginUIPopupChangeEmailPanel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoginUIPopupChangeEmailPanel);
// Dependencies VROSC.LoginUIPopupPanelBase
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoginUIPopupChangeEmailPanel
class CORDL_TYPE LoginUIPopupChangeEmailPanel : public ::VROSC::LoginUIPopupPanelBase {
public:
// Declarations
/// @brief Field _cancelEmailChangeButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__cancelEmailChangeButton, put=__cordl_internal_set__cancelEmailChangeButton)) ::UnityW<::VROSC::UIButton>  _cancelEmailChangeButton;

/// @brief Field _confirmEmailChangeButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__confirmEmailChangeButton, put=__cordl_internal_set__confirmEmailChangeButton)) ::UnityW<::VROSC::UIButton>  _confirmEmailChangeButton;

/// @brief Field _currentEmailText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentEmailText, put=__cordl_internal_set__currentEmailText)) ::UnityW<::TMPro::TextMeshPro>  _currentEmailText;

/// @brief Field _newEmailInput, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__newEmailInput, put=__cordl_internal_set__newEmailInput)) ::UnityW<::GlobalNamespace::UIInputField>  _newEmailInput;

/// @brief Method Awake, addr 0x1750418, size 0x1dc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CancelChangeEmailButtonPressed, addr 0x1750b74, size 0x18, virtual false, abstract: false, final false
inline void CancelChangeEmailButtonPressed() ;

/// @brief Method ConfirmChangeEmailButtonPressed, addr 0x1750960, size 0x214, virtual false, abstract: false, final false
inline void ConfirmChangeEmailButtonPressed() ;

/// @brief Method EmailChangeFailed, addr 0x1750d6c, size 0x220, virtual false, abstract: false, final false
inline void EmailChangeFailed(::VROSC::Error  error) ;

/// @brief Method EmailChangeSucceeded, addr 0x1750b8c, size 0x1e0, virtual false, abstract: false, final false
inline void EmailChangeSucceeded() ;

/// @brief Method EnableUI, addr 0x17508a4, size 0xbc, virtual true, abstract: false, final false
inline void EnableUI(bool  enable) ;

static inline ::VROSC::LoginUIPopupChangeEmailPanel* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17505f4, size 0x1dc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Open, addr 0x17507d0, size 0xb0, virtual true, abstract: false, final false
inline void Open(::ArrayW<::System::Object*,::Array<::System::Object*>*>  parameters) ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__cancelEmailChangeButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__cancelEmailChangeButton() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__confirmEmailChangeButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__confirmEmailChangeButton() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__currentEmailText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__currentEmailText() ;

constexpr ::UnityW<::GlobalNamespace::UIInputField> const& __cordl_internal_get__newEmailInput() const;

constexpr ::UnityW<::GlobalNamespace::UIInputField>& __cordl_internal_get__newEmailInput() ;

constexpr void __cordl_internal_set__cancelEmailChangeButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__confirmEmailChangeButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__currentEmailText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__newEmailInput(::UnityW<::GlobalNamespace::UIInputField>  value) ;

/// @brief Method .ctor, addr 0x1750f8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoginUIPopupChangeEmailPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoginUIPopupChangeEmailPanel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoginUIPopupChangeEmailPanel(LoginUIPopupChangeEmailPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoginUIPopupChangeEmailPanel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoginUIPopupChangeEmailPanel(LoginUIPopupChangeEmailPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1154};

/// @brief Field _currentEmailText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____currentEmailText;

/// @brief Field _newEmailInput, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UIInputField>  ____newEmailInput;

/// @brief Field _confirmEmailChangeButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____confirmEmailChangeButton;

/// @brief Field _cancelEmailChangeButton, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____cancelEmailChangeButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoginUIPopupChangeEmailPanel, ____currentEmailText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopupChangeEmailPanel, ____newEmailInput) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopupChangeEmailPanel, ____confirmEmailChangeButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopupChangeEmailPanel, ____cancelEmailChangeButton) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoginUIPopupChangeEmailPanel, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoginUIPopupChangeEmailPanel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoginUIPopupChangeEmailPanel*, "VROSC", "LoginUIPopupChangeEmailPanel");
