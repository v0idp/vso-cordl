#pragma once
// IWYU pragma private; include "VROSC/LoginUIPopupAcceptTermsPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__LoginUIPopupPanelBase_def.hpp"
CORDL_MODULE_EXPORT(LoginUIPopupAcceptTermsPanel)
namespace VROSC {
struct Error;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC {
class LoginUIPopupAcceptTermsPanel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoginUIPopupAcceptTermsPanel);
// Dependencies VROSC.LoginUIPopupPanelBase
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoginUIPopupAcceptTermsPanel
class CORDL_TYPE LoginUIPopupAcceptTermsPanel : public ::VROSC::LoginUIPopupPanelBase {
public:
// Declarations
/// @brief Field _acceptButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__acceptButton, put=__cordl_internal_set__acceptButton)) ::UnityW<::VROSC::UIButton>  _acceptButton;

/// @brief Method AcceptButtonPressed, addr 0x17501b0, size 0x17c, virtual false, abstract: false, final false
inline void AcceptButtonPressed() ;

/// @brief Method Awake, addr 0x174ff88, size 0xf4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method EnableUI, addr 0x1750164, size 0x4c, virtual true, abstract: false, final false
inline void EnableUI(bool  enable) ;

static inline ::VROSC::LoginUIPopupAcceptTermsPanel* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17500a0, size 0xc4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method <AcceptButtonPressed>b__4_0, addr 0x175033c, size 0x18, virtual false, abstract: false, final false
inline void _AcceptButtonPressed_b__4_0() ;

/// @brief Method <AcceptButtonPressed>b__4_1, addr 0x1750354, size 0xc4, virtual false, abstract: false, final false
inline void _AcceptButtonPressed_b__4_1(::VROSC::Error  error) ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__acceptButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__acceptButton() ;

constexpr void __cordl_internal_set__acceptButton(::UnityW<::VROSC::UIButton>  value) ;

/// @brief Method .ctor, addr 0x175032c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoginUIPopupAcceptTermsPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoginUIPopupAcceptTermsPanel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoginUIPopupAcceptTermsPanel(LoginUIPopupAcceptTermsPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoginUIPopupAcceptTermsPanel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoginUIPopupAcceptTermsPanel(LoginUIPopupAcceptTermsPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1153};

/// @brief Field _acceptButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____acceptButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoginUIPopupAcceptTermsPanel, ____acceptButton) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoginUIPopupAcceptTermsPanel, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoginUIPopupAcceptTermsPanel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoginUIPopupAcceptTermsPanel*, "VROSC", "LoginUIPopupAcceptTermsPanel");
