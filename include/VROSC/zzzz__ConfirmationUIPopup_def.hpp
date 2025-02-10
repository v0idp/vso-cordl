#pragma once
// IWYU pragma private; include "VROSC/ConfirmationUIPopup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConfirmationUIPopup)
namespace System {
class Action;
}
namespace TMPro {
class TextMeshPro;
}
namespace VROSC {
class ConfirmationUIPopup_Data;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC {
class ConfirmationUIPopup;
}
namespace VROSC {
class ConfirmationUIPopup_Data;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ConfirmationUIPopup);
MARK_REF_PTR_T(::VROSC::ConfirmationUIPopup_Data);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ConfirmationUIPopup/Data
class CORDL_TYPE ConfirmationUIPopup_Data : public ::System::Object {
public:
// Declarations
/// @brief Field BodyText, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_BodyText, put=__cordl_internal_set_BodyText)) ::StringW  BodyText;

/// @brief Field HeaderText, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_HeaderText, put=__cordl_internal_set_HeaderText)) ::StringW  HeaderText;

static inline ::VROSC::ConfirmationUIPopup_Data* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_BodyText() const;

constexpr ::StringW& __cordl_internal_get_BodyText() ;

constexpr ::StringW const& __cordl_internal_get_HeaderText() const;

constexpr ::StringW& __cordl_internal_get_HeaderText() ;

constexpr void __cordl_internal_set_BodyText(::StringW  value) ;

constexpr void __cordl_internal_set_HeaderText(::StringW  value) ;

/// @brief Method .ctor, addr 0x174efb8, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfirmationUIPopup_Data() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfirmationUIPopup_Data", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfirmationUIPopup_Data(ConfirmationUIPopup_Data && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfirmationUIPopup_Data", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfirmationUIPopup_Data(ConfirmationUIPopup_Data const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1147};

/// @brief Field HeaderText, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___HeaderText;

/// @brief Field BodyText, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___BodyText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ConfirmationUIPopup_Data, ___HeaderText) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ConfirmationUIPopup_Data, ___BodyText) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ConfirmationUIPopup_Data, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ConfirmationUIPopup
class CORDL_TYPE ConfirmationUIPopup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Data = ::VROSC::ConfirmationUIPopup_Data;

/// @brief Field _bodyText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyText, put=__cordl_internal_set__bodyText)) ::UnityW<::TMPro::TextMeshPro>  _bodyText;

/// @brief Field _cancelButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__cancelButton, put=__cordl_internal_set__cancelButton)) ::UnityW<::VROSC::UIButton>  _cancelButton;

/// @brief Field _confirmButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__confirmButton, put=__cordl_internal_set__confirmButton)) ::UnityW<::VROSC::UIButton>  _confirmButton;

/// @brief Field _errorText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__errorText, put=__cordl_internal_set__errorText)) ::UnityW<::TMPro::TextMeshPro>  _errorText;

/// @brief Field _headerText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__headerText, put=__cordl_internal_set__headerText)) ::UnityW<::TMPro::TextMeshPro>  _headerText;

/// @brief Field _onCanceledCallback, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__onCanceledCallback, put=__cordl_internal_set__onCanceledCallback)) ::System::Action*  _onCanceledCallback;

/// @brief Field _onConfirmedCallback, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__onConfirmedCallback, put=__cordl_internal_set__onConfirmedCallback)) ::System::Action*  _onConfirmedCallback;

/// @brief Method Awake, addr 0x174ea94, size 0x13c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CancelButtonPressed, addr 0x174ef80, size 0x30, virtual false, abstract: false, final false
inline void CancelButtonPressed() ;

/// @brief Method ConfirmButtonPressed, addr 0x174ef00, size 0x80, virtual false, abstract: false, final false
inline void ConfirmButtonPressed() ;

/// @brief Method EnableButtons, addr 0x174ee54, size 0x78, virtual false, abstract: false, final false
inline void EnableButtons(bool  enable) ;

static inline ::VROSC::ConfirmationUIPopup* New_ctor() ;

/// @brief Method OnDestroy, addr 0x174ebd0, size 0x13c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetActive, addr 0x174ed0c, size 0x148, virtual false, abstract: false, final false
inline void SetActive(bool  isActive, ::VROSC::ConfirmationUIPopup_Data*  data, ::System::Action*  confirmCallback, ::System::Action*  cancelCallback) ;

/// @brief Method ShowError, addr 0x174eecc, size 0x34, virtual false, abstract: false, final false
inline void ShowError(::StringW  errorMessage) ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__bodyText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__bodyText() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__cancelButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__cancelButton() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__confirmButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__confirmButton() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__errorText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__errorText() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__headerText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__headerText() ;

constexpr ::System::Action* const& __cordl_internal_get__onCanceledCallback() const;

constexpr ::System::Action*& __cordl_internal_get__onCanceledCallback() ;

constexpr ::System::Action* const& __cordl_internal_get__onConfirmedCallback() const;

constexpr ::System::Action*& __cordl_internal_get__onConfirmedCallback() ;

constexpr void __cordl_internal_set__bodyText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__cancelButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__confirmButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__errorText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__headerText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__onCanceledCallback(::System::Action*  value) ;

constexpr void __cordl_internal_set__onConfirmedCallback(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x174efb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfirmationUIPopup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfirmationUIPopup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfirmationUIPopup(ConfirmationUIPopup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfirmationUIPopup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfirmationUIPopup(ConfirmationUIPopup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1148};

/// @brief Field _headerText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____headerText;

/// @brief Field _bodyText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____bodyText;

/// @brief Field _errorText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____errorText;

/// @brief Field _confirmButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____confirmButton;

/// @brief Field _cancelButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____cancelButton;

/// @brief Field _onConfirmedCallback, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  ____onConfirmedCallback;

/// @brief Field _onCanceledCallback, offset: 0x50, size: 0x8, def value: None
 ::System::Action*  ____onCanceledCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ConfirmationUIPopup, ____headerText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ConfirmationUIPopup, ____bodyText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ConfirmationUIPopup, ____errorText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ConfirmationUIPopup, ____confirmButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::ConfirmationUIPopup, ____cancelButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::ConfirmationUIPopup, ____onConfirmedCallback) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::ConfirmationUIPopup, ____onCanceledCallback) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ConfirmationUIPopup, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ConfirmationUIPopup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ConfirmationUIPopup*, "VROSC", "ConfirmationUIPopup");
NEED_NO_BOX(::VROSC::ConfirmationUIPopup_Data);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ConfirmationUIPopup_Data*, "VROSC", "ConfirmationUIPopup/Data");
