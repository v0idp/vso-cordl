#pragma once
// IWYU pragma private; include "VROSC/UserProfilePopup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UserProfilePopup)
namespace TMPro {
class TextMeshPro;
}
namespace VROSC {
class SessionsLibraryUI;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC {
class UserProfilePopup;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UserProfilePopup);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UserProfilePopup
class CORDL_TYPE UserProfilePopup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _changeEmailButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__changeEmailButton, put=__cordl_internal_set__changeEmailButton)) ::UnityW<::VROSC::UIButton>  _changeEmailButton;

/// @brief Field _changePasswordButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__changePasswordButton, put=__cordl_internal_set__changePasswordButton)) ::UnityW<::VROSC::UIButton>  _changePasswordButton;

/// @brief Field _deleteDataButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__deleteDataButton, put=__cordl_internal_set__deleteDataButton)) ::UnityW<::VROSC::UIButton>  _deleteDataButton;

/// @brief Field _emailText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__emailText, put=__cordl_internal_set__emailText)) ::UnityW<::TMPro::TextMeshPro>  _emailText;

/// @brief Field _logoutButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__logoutButton, put=__cordl_internal_set__logoutButton)) ::UnityW<::VROSC::UIButton>  _logoutButton;

/// @brief Field _sessionsLibraryUI, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__sessionsLibraryUI, put=__cordl_internal_set__sessionsLibraryUI)) ::UnityW<::VROSC::SessionsLibraryUI>  _sessionsLibraryUI;

/// @brief Field _usernameText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__usernameText, put=__cordl_internal_set__usernameText)) ::UnityW<::TMPro::TextMeshPro>  _usernameText;

/// @brief Method Awake, addr 0x17587c0, size 0x3ac, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ChangeEmailButtonPressed, addr 0x1759170, size 0x1c, virtual false, abstract: false, final false
inline void ChangeEmailButtonPressed() ;

/// @brief Method ChangePasswordButtonPressed, addr 0x1759194, size 0x1c, virtual false, abstract: false, final false
inline void ChangePasswordButtonPressed() ;

/// @brief Method ClearData, addr 0x1759098, size 0xd8, virtual false, abstract: false, final false
inline void ClearData() ;

/// @brief Method LogoutButtonPressed, addr 0x17591b8, size 0x54, virtual false, abstract: false, final false
inline void LogoutButtonPressed() ;

static inline ::VROSC::UserProfilePopup* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1758b6c, size 0x38c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x1758f00, size 0x78, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PopulateData, addr 0x1758f78, size 0x120, virtual false, abstract: false, final false
inline void PopulateData() ;

/// @brief Method Setup, addr 0x1758ef8, size 0x8, virtual false, abstract: false, final false
inline void Setup(::VROSC::SessionsLibraryUI*  sessionsLibraryUI) ;

/// @brief Method UserEmailChanged, addr 0x1759214, size 0x74, virtual false, abstract: false, final false
inline void UserEmailChanged() ;

/// @brief Method UserLoggedIn, addr 0x175920c, size 0x4, virtual false, abstract: false, final false
inline void UserLoggedIn(::StringW  email, bool  isVerified) ;

/// @brief Method UserLoggedOut, addr 0x1759210, size 0x4, virtual false, abstract: false, final false
inline void UserLoggedOut() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__changeEmailButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__changeEmailButton() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__changePasswordButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__changePasswordButton() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__deleteDataButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__deleteDataButton() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__emailText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__emailText() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__logoutButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__logoutButton() ;

constexpr ::UnityW<::VROSC::SessionsLibraryUI> const& __cordl_internal_get__sessionsLibraryUI() const;

constexpr ::UnityW<::VROSC::SessionsLibraryUI>& __cordl_internal_get__sessionsLibraryUI() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__usernameText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__usernameText() ;

constexpr void __cordl_internal_set__changeEmailButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__changePasswordButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__deleteDataButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__emailText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__logoutButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__sessionsLibraryUI(::UnityW<::VROSC::SessionsLibraryUI>  value) ;

constexpr void __cordl_internal_set__usernameText(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x1759288, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserProfilePopup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserProfilePopup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserProfilePopup(UserProfilePopup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserProfilePopup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserProfilePopup(UserProfilePopup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1162};

/// @brief Field _usernameText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____usernameText;

/// @brief Field _emailText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____emailText;

/// @brief Field _changeEmailButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____changeEmailButton;

/// @brief Field _changePasswordButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____changePasswordButton;

/// @brief Field _logoutButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____logoutButton;

/// @brief Field _deleteDataButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____deleteDataButton;

/// @brief Field _sessionsLibraryUI, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::SessionsLibraryUI>  ____sessionsLibraryUI;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UserProfilePopup, ____usernameText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserProfilePopup, ____emailText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserProfilePopup, ____changeEmailButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserProfilePopup, ____changePasswordButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserProfilePopup, ____logoutButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserProfilePopup, ____deleteDataButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UserProfilePopup, ____sessionsLibraryUI) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UserProfilePopup, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UserProfilePopup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserProfilePopup*, "VROSC", "UserProfilePopup");
