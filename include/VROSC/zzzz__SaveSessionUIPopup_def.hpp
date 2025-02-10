#pragma once
// IWYU pragma private; include "VROSC/SaveSessionUIPopup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SaveSessionUIPopup)
namespace GlobalNamespace {
class UIInputField;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class SessionItemUI;
}
namespace VROSC {
class SessionSaveData;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UISlideToggle;
}
// Forward declare root types
namespace VROSC {
class SaveSessionUIPopup;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SaveSessionUIPopup);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SaveSessionUIPopup
class CORDL_TYPE SaveSessionUIPopup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnSaveCanceled, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSaveCanceled, put=__cordl_internal_set_OnSaveCanceled)) ::System::Action*  OnSaveCanceled;

/// @brief Field OnSaveConfirmed, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSaveConfirmed, put=__cordl_internal_set_OnSaveConfirmed)) ::System::Action_2<::VROSC::SessionSaveData*,bool>*  OnSaveConfirmed;

/// @brief Field _cancelButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__cancelButton, put=__cordl_internal_set__cancelButton)) ::UnityW<::VROSC::UIButton>  _cancelButton;

/// @brief Field _cloudSaveText, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__cloudSaveText, put=__cordl_internal_set__cloudSaveText)) ::UnityW<::TMPro::TextMeshPro>  _cloudSaveText;

/// @brief Field _cloudSaveToggle, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__cloudSaveToggle, put=__cordl_internal_set__cloudSaveToggle)) ::UnityW<::VROSC::UISlideToggle>  _cloudSaveToggle;

/// @brief Field _descriptionInputField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__descriptionInputField, put=__cordl_internal_set__descriptionInputField)) ::UnityW<::GlobalNamespace::UIInputField>  _descriptionInputField;

/// @brief Field _headerText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__headerText, put=__cordl_internal_set__headerText)) ::UnityW<::TMPro::TextMeshPro>  _headerText;

/// @brief Field _nameInputField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__nameInputField, put=__cordl_internal_set__nameInputField)) ::UnityW<::GlobalNamespace::UIInputField>  _nameInputField;

/// @brief Field _previewUI, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__previewUI, put=__cordl_internal_set__previewUI)) ::UnityW<::VROSC::SessionItemUI>  _previewUI;

/// @brief Field _saveAsToggle, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__saveAsToggle, put=__cordl_internal_set__saveAsToggle)) ::UnityW<::VROSC::UISlideToggle>  _saveAsToggle;

/// @brief Field _saveButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__saveButton, put=__cordl_internal_set__saveButton)) ::UnityW<::VROSC::UIButton>  _saveButton;

/// @brief Field _saveRoomToggle, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__saveRoomToggle, put=__cordl_internal_set__saveRoomToggle)) ::UnityW<::VROSC::UISlideToggle>  _saveRoomToggle;

/// @brief Field _saveRoomToggleContainer, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__saveRoomToggleContainer, put=__cordl_internal_set__saveRoomToggleContainer)) ::UnityW<::UnityEngine::GameObject>  _saveRoomToggleContainer;

/// @brief Field _savingStateText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__savingStateText, put=__cordl_internal_set__savingStateText)) ::UnityW<::TMPro::TextMeshPro>  _savingStateText;

/// @brief Field _selectedInputField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectedInputField, put=__cordl_internal_set__selectedInputField)) ::UnityW<::GlobalNamespace::UIInputField>  _selectedInputField;

/// @brief Field _sessionDisplayName, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__sessionDisplayName, put=__cordl_internal_set__sessionDisplayName)) ::StringW  _sessionDisplayName;

/// @brief Field _sessionId, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__sessionId, put=__cordl_internal_set__sessionId)) ::StringW  _sessionId;

/// @brief Field _shareText, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__shareText, put=__cordl_internal_set__shareText)) ::UnityW<::TMPro::TextMeshPro>  _shareText;

/// @brief Field _shareToggle, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__shareToggle, put=__cordl_internal_set__shareToggle)) ::UnityW<::VROSC::UISlideToggle>  _shareToggle;

/// @brief Field _tagsInputField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__tagsInputField, put=__cordl_internal_set__tagsInputField)) ::UnityW<::GlobalNamespace::UIInputField>  _tagsInputField;

/// @brief Method Awake, addr 0x1754644, size 0x588, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CancelButtonPressed, addr 0x1756364, size 0x38, virtual false, abstract: false, final false
inline void CancelButtonPressed() ;

/// @brief Method CloudSaveToggled, addr 0x17563a4, size 0x34, virtual false, abstract: false, final false
inline void CloudSaveToggled(::VROSC::InputDevice*  inputDevice, bool  isToggled) ;

/// @brief Method EnableInput, addr 0x17552e8, size 0x204, virtual false, abstract: false, final false
inline void EnableInput(bool  enable) ;

/// @brief Method GetProgressPercent, addr 0x1755ed8, size 0x40, virtual false, abstract: false, final false
inline int32_t GetProgressPercent(float_t  progress) ;

/// @brief Method InputFieldSelected, addr 0x1756584, size 0x34, virtual false, abstract: false, final false
inline void InputFieldSelected(::GlobalNamespace::UIInputField*  inputField) ;

static inline ::VROSC::SaveSessionUIPopup* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1754cb4, size 0x588, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PopulateData, addr 0x17554ec, size 0x66c, virtual false, abstract: false, final false
inline void PopulateData(bool  allowOnline, bool  keepData) ;

/// @brief Method SaveAsToggled, addr 0x1756460, size 0xf0, virtual false, abstract: false, final false
inline void SaveAsToggled(::VROSC::InputDevice*  inputDevice, bool  isToggled) ;

/// @brief Method SaveButtonPressed, addr 0x17561f4, size 0x170, virtual false, abstract: false, final false
inline void SaveButtonPressed() ;

/// @brief Method SaveNameChanged, addr 0x175639c, size 0x8, virtual false, abstract: false, final false
inline void SaveNameChanged(::StringW  saveName) ;

/// @brief Method SaveRoomToggled, addr 0x1756550, size 0x34, virtual false, abstract: false, final false
inline void SaveRoomToggled(::VROSC::InputDevice*  inputDevice, bool  isToggled) ;

/// @brief Method SetActive, addr 0x175523c, size 0xac, virtual false, abstract: false, final false
inline void SetActive(bool  isActive, bool  allowOnline, bool  keepData) ;

/// @brief Method ShareToggled, addr 0x17563d8, size 0x88, virtual false, abstract: false, final false
inline void ShareToggled(::VROSC::InputDevice*  inputDevice, bool  isToggled) ;

/// @brief Method Start, addr 0x1754bcc, size 0xe8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdatePreview, addr 0x1755b58, size 0x160, virtual false, abstract: false, final false
inline void UpdatePreview() ;

/// @brief Method UpdatePreviewUploadingState, addr 0x1756100, size 0xf4, virtual false, abstract: false, final false
inline void UpdatePreviewUploadingState(float_t  progress) ;

/// @brief Method UpdateSavingPreviewState, addr 0x1755dc4, size 0x114, virtual false, abstract: false, final false
inline void UpdateSavingPreviewState(bool  isSaving, float_t  progress) ;

/// @brief Method UpdateSavingState, addr 0x1755cb8, size 0x10c, virtual false, abstract: false, final false
inline void UpdateSavingState(::VROSC::Error  error) ;

/// @brief Method UpdateSavingState, addr 0x1755f18, size 0xf4, virtual false, abstract: false, final false
inline void UpdateSavingState(float_t  progress) ;

/// @brief Method UpdateUploadingState, addr 0x175600c, size 0xf4, virtual false, abstract: false, final false
inline void UpdateUploadingState(float_t  progress) ;

constexpr ::System::Action* const& __cordl_internal_get_OnSaveCanceled() const;

constexpr ::System::Action*& __cordl_internal_get_OnSaveCanceled() ;

constexpr ::System::Action_2<::VROSC::SessionSaveData*,bool>* const& __cordl_internal_get_OnSaveConfirmed() const;

constexpr ::System::Action_2<::VROSC::SessionSaveData*,bool>*& __cordl_internal_get_OnSaveConfirmed() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__cancelButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__cancelButton() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__cloudSaveText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__cloudSaveText() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__cloudSaveToggle() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__cloudSaveToggle() ;

constexpr ::UnityW<::GlobalNamespace::UIInputField> const& __cordl_internal_get__descriptionInputField() const;

constexpr ::UnityW<::GlobalNamespace::UIInputField>& __cordl_internal_get__descriptionInputField() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__headerText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__headerText() ;

constexpr ::UnityW<::GlobalNamespace::UIInputField> const& __cordl_internal_get__nameInputField() const;

constexpr ::UnityW<::GlobalNamespace::UIInputField>& __cordl_internal_get__nameInputField() ;

constexpr ::UnityW<::VROSC::SessionItemUI> const& __cordl_internal_get__previewUI() const;

constexpr ::UnityW<::VROSC::SessionItemUI>& __cordl_internal_get__previewUI() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__saveAsToggle() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__saveAsToggle() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__saveButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__saveButton() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__saveRoomToggle() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__saveRoomToggle() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__saveRoomToggleContainer() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__saveRoomToggleContainer() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__savingStateText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__savingStateText() ;

constexpr ::UnityW<::GlobalNamespace::UIInputField> const& __cordl_internal_get__selectedInputField() const;

constexpr ::UnityW<::GlobalNamespace::UIInputField>& __cordl_internal_get__selectedInputField() ;

constexpr ::StringW const& __cordl_internal_get__sessionDisplayName() const;

constexpr ::StringW& __cordl_internal_get__sessionDisplayName() ;

constexpr ::StringW const& __cordl_internal_get__sessionId() const;

constexpr ::StringW& __cordl_internal_get__sessionId() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__shareText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__shareText() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__shareToggle() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__shareToggle() ;

constexpr ::UnityW<::GlobalNamespace::UIInputField> const& __cordl_internal_get__tagsInputField() const;

constexpr ::UnityW<::GlobalNamespace::UIInputField>& __cordl_internal_get__tagsInputField() ;

constexpr void __cordl_internal_set_OnSaveCanceled(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnSaveConfirmed(::System::Action_2<::VROSC::SessionSaveData*,bool>*  value) ;

constexpr void __cordl_internal_set__cancelButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__cloudSaveText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__cloudSaveToggle(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__descriptionInputField(::UnityW<::GlobalNamespace::UIInputField>  value) ;

constexpr void __cordl_internal_set__headerText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__nameInputField(::UnityW<::GlobalNamespace::UIInputField>  value) ;

constexpr void __cordl_internal_set__previewUI(::UnityW<::VROSC::SessionItemUI>  value) ;

constexpr void __cordl_internal_set__saveAsToggle(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__saveButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__saveRoomToggle(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__saveRoomToggleContainer(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__savingStateText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__selectedInputField(::UnityW<::GlobalNamespace::UIInputField>  value) ;

constexpr void __cordl_internal_set__sessionDisplayName(::StringW  value) ;

constexpr void __cordl_internal_set__sessionId(::StringW  value) ;

constexpr void __cordl_internal_set__shareText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__shareToggle(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__tagsInputField(::UnityW<::GlobalNamespace::UIInputField>  value) ;

/// @brief Method .ctor, addr 0x17565b8, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveSessionUIPopup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveSessionUIPopup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveSessionUIPopup(SaveSessionUIPopup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveSessionUIPopup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveSessionUIPopup(SaveSessionUIPopup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1159};

/// @brief Field _headerText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____headerText;

/// @brief Field _nameInputField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UIInputField>  ____nameInputField;

/// @brief Field _descriptionInputField, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UIInputField>  ____descriptionInputField;

/// @brief Field _tagsInputField, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UIInputField>  ____tagsInputField;

/// @brief Field _saveButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____saveButton;

/// @brief Field _cancelButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____cancelButton;

/// @brief Field _previewUI, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::SessionItemUI>  ____previewUI;

/// @brief Field _savingStateText, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____savingStateText;

/// @brief Field _cloudSaveText, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____cloudSaveText;

/// @brief Field _shareText, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____shareText;

/// @brief Field _cloudSaveToggle, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____cloudSaveToggle;

/// @brief Field _shareToggle, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____shareToggle;

/// @brief Field _saveAsToggle, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____saveAsToggle;

/// @brief Field _saveRoomToggle, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____saveRoomToggle;

/// @brief Field _saveRoomToggleContainer, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____saveRoomToggleContainer;

/// @brief Field OnSaveConfirmed, offset: 0x98, size: 0x8, def value: None
 ::System::Action_2<::VROSC::SessionSaveData*,bool>*  ___OnSaveConfirmed;

/// @brief Field OnSaveCanceled, offset: 0xa0, size: 0x8, def value: None
 ::System::Action*  ___OnSaveCanceled;

/// @brief Field _selectedInputField, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UIInputField>  ____selectedInputField;

/// @brief Field _sessionId, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ____sessionId;

/// @brief Field _sessionDisplayName, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ____sessionDisplayName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SaveSessionUIPopup, ____headerText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveSessionUIPopup, ____nameInputField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveSessionUIPopup, ____descriptionInputField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveSessionUIPopup, ____tagsInputField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveSessionUIPopup, ____saveButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveSessionUIPopup, ____cancelButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveSessionUIPopup, ____previewUI) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveSessionUIPopup, ____savingStateText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveSessionUIPopup, ____cloudSaveText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveSessionUIPopup, ____shareText) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveSessionUIPopup, ____cloudSaveToggle) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveSessionUIPopup, ____shareToggle) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveSessionUIPopup, ____saveAsToggle) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveSessionUIPopup, ____saveRoomToggle) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveSessionUIPopup, ____saveRoomToggleContainer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveSessionUIPopup, ___OnSaveConfirmed) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveSessionUIPopup, ___OnSaveCanceled) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveSessionUIPopup, ____selectedInputField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveSessionUIPopup, ____sessionId) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SaveSessionUIPopup, ____sessionDisplayName) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SaveSessionUIPopup, 0xc0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SaveSessionUIPopup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveSessionUIPopup*, "VROSC", "SaveSessionUIPopup");
