#pragma once
// IWYU pragma private; include "VROSC/LoginUIPopupPanelBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LoginUIPopupPanelBase)
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
class LoginUIPopup;
}
// Forward declare root types
namespace VROSC {
class LoginUIPopupPanelBase;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoginUIPopupPanelBase);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoginUIPopupPanelBase
class CORDL_TYPE LoginUIPopupPanelBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _loginUIPopup, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__loginUIPopup, put=__cordl_internal_set__loginUIPopup)) ::UnityW<::VROSC::LoginUIPopup>  _loginUIPopup;

/// @brief Field _selectedInputField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectedInputField, put=__cordl_internal_set__selectedInputField)) ::UnityW<::GlobalNamespace::UIInputField>  _selectedInputField;

/// @brief Field _stateText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__stateText, put=__cordl_internal_set__stateText)) ::UnityW<::TMPro::TextMeshPro>  _stateText;

/// @brief Method Close, addr 0x1752320, size 0x78, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method EnableUI, addr 0x175460c, size 0x4, virtual true, abstract: false, final false
inline void EnableUI(bool  enable) ;

/// @brief Method InputFieldSelected, addr 0x1754610, size 0x34, virtual false, abstract: false, final false
inline void InputFieldSelected(::GlobalNamespace::UIInputField*  inputField) ;

static inline ::VROSC::LoginUIPopupPanelBase* New_ctor() ;

/// @brief Method Open, addr 0x1750880, size 0x24, virtual true, abstract: false, final false
inline void Open(::ArrayW<::System::Object*,::Array<::System::Object*>*>  parameters) ;

/// @brief Method SetStateMessage, addr 0x175007c, size 0x24, virtual false, abstract: false, final false
inline void SetStateMessage(::StringW  message) ;

/// @brief Method Setup, addr 0x17545a4, size 0x68, virtual true, abstract: false, final false
inline void Setup(::VROSC::LoginUIPopup*  loginUIPopup) ;

constexpr ::UnityW<::VROSC::LoginUIPopup> const& __cordl_internal_get__loginUIPopup() const;

constexpr ::UnityW<::VROSC::LoginUIPopup>& __cordl_internal_get__loginUIPopup() ;

constexpr ::UnityW<::GlobalNamespace::UIInputField> const& __cordl_internal_get__selectedInputField() const;

constexpr ::UnityW<::GlobalNamespace::UIInputField>& __cordl_internal_get__selectedInputField() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__stateText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__stateText() ;

constexpr void __cordl_internal_set__loginUIPopup(::UnityW<::VROSC::LoginUIPopup>  value) ;

constexpr void __cordl_internal_set__selectedInputField(::UnityW<::GlobalNamespace::UIInputField>  value) ;

constexpr void __cordl_internal_set__stateText(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x1750334, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoginUIPopupPanelBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoginUIPopupPanelBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoginUIPopupPanelBase(LoginUIPopupPanelBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoginUIPopupPanelBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoginUIPopupPanelBase(LoginUIPopupPanelBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1158};

/// @brief Field _stateText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____stateText;

/// @brief Field _loginUIPopup, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::LoginUIPopup>  ____loginUIPopup;

/// @brief Field _selectedInputField, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UIInputField>  ____selectedInputField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoginUIPopupPanelBase, ____stateText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopupPanelBase, ____loginUIPopup) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoginUIPopupPanelBase, ____selectedInputField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoginUIPopupPanelBase, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoginUIPopupPanelBase);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoginUIPopupPanelBase*, "VROSC", "LoginUIPopupPanelBase");
