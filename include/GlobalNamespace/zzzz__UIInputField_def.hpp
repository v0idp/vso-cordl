#pragma once
// IWYU pragma private; include "GlobalNamespace/UIInputField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__UIInteractable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UIInputField)
namespace System {
template<typename T>
class Action_1;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class ClickData;
}
// Forward declare root types
namespace GlobalNamespace {
class UIInputField;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UIInputField);
// Dependencies VROSC.UIInteractable
namespace GlobalNamespace {
// Is value type: false
// CS Name: UIInputField
class CORDL_TYPE UIInputField : public ::VROSC::UIInteractable {
public:
// Declarations
 __declspec(property(get=get_InteractionStopsLaser)) bool  InteractionStopsLaser;

/// @brief Field OnSelected, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSelected, put=__cordl_internal_set_OnSelected)) ::System::Action_1<::UnityW<::GlobalNamespace::UIInputField>>*  OnSelected;

/// @brief Field OnValueChanged, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnValueChanged, put=__cordl_internal_set_OnValueChanged)) ::System::Action_1<::StringW>*  OnValueChanged;

/// @brief Field OnValueSubmitted, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnValueSubmitted, put=__cordl_internal_set_OnValueSubmitted)) ::System::Action_1<::StringW>*  OnValueSubmitted;

 __declspec(property(get=get_Text)) ::StringW  Text;

/// @brief Field _descriptionText, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__descriptionText, put=__cordl_internal_set__descriptionText)) ::StringW  _descriptionText;

/// @brief Field _isActive, offset 0xb1, size 0x1 
 __declspec(property(get=__cordl_internal_get__isActive, put=__cordl_internal_set__isActive)) bool  _isActive;

/// @brief Field _placeholderText, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__placeholderText, put=__cordl_internal_set__placeholderText)) ::UnityW<::TMPro::TextMeshPro>  _placeholderText;

/// @brief Field _submitTextWithEachStroke, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__submitTextWithEachStroke, put=__cordl_internal_set__submitTextWithEachStroke)) bool  _submitTextWithEachStroke;

/// @brief Field _textInput, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__textInput, put=__cordl_internal_set__textInput)) ::UnityW<::TMPro::TextMeshPro>  _textInput;

/// @brief Field _toggleObject, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggleObject, put=__cordl_internal_set__toggleObject)) ::UnityW<::UnityEngine::GameObject>  _toggleObject;

/// @brief Method Awake, addr 0x16c454c, size 0xf0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Deselect, addr 0x16c48d0, size 0x284, virtual false, abstract: false, final false
inline void Deselect(bool  releaseKeyboard) ;

/// @brief Method InputFieldPressed, addr 0x16c4f2c, size 0x4, virtual false, abstract: false, final false
inline void InputFieldPressed(::VROSC::ClickData*  clickData) ;

/// @brief Method KeyboardClosed, addr 0x16c4f24, size 0x8, virtual false, abstract: false, final false
inline void KeyboardClosed() ;

static inline ::GlobalNamespace::UIInputField* New_ctor() ;

/// @brief Method OnDestroy, addr 0x16c470c, size 0xd8, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x16c48b0, size 0x20, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method Select, addr 0x16c4b68, size 0x318, virtual false, abstract: false, final false
inline void Select() ;

/// @brief Method SetText, addr 0x16c4e80, size 0x88, virtual false, abstract: false, final false
inline void SetText(::StringW  text) ;

/// @brief Method SubmitText, addr 0x16c4f08, size 0x1c, virtual false, abstract: false, final false
inline void SubmitText(::StringW  text) ;

/// @brief Method Toggle, addr 0x16c4b54, size 0x14, virtual false, abstract: false, final false
inline void Toggle() ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::UIInputField>>* const& __cordl_internal_get_OnSelected() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::UIInputField>>*& __cordl_internal_get_OnSelected() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnValueChanged() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnValueChanged() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnValueSubmitted() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnValueSubmitted() ;

constexpr ::StringW const& __cordl_internal_get__descriptionText() const;

constexpr ::StringW& __cordl_internal_get__descriptionText() ;

constexpr bool const& __cordl_internal_get__isActive() const;

constexpr bool& __cordl_internal_get__isActive() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__placeholderText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__placeholderText() ;

constexpr bool const& __cordl_internal_get__submitTextWithEachStroke() const;

constexpr bool& __cordl_internal_get__submitTextWithEachStroke() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__textInput() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__textInput() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__toggleObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__toggleObject() ;

constexpr void __cordl_internal_set_OnSelected(::System::Action_1<::UnityW<::GlobalNamespace::UIInputField>>*  value) ;

constexpr void __cordl_internal_set_OnValueChanged(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnValueSubmitted(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__descriptionText(::StringW  value) ;

constexpr void __cordl_internal_set__isActive(bool  value) ;

constexpr void __cordl_internal_set__placeholderText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__submitTextWithEachStroke(bool  value) ;

constexpr void __cordl_internal_set__textInput(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__toggleObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x16c482c, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InteractionStopsLaser, addr 0x16c4884, size 0x8, virtual true, abstract: false, final false
inline bool get_InteractionStopsLaser() ;

/// @brief Method get_Text, addr 0x16c488c, size 0x24, virtual false, abstract: false, final false
inline ::StringW get_Text() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIInputField() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIInputField", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIInputField(UIInputField && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIInputField", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIInputField(UIInputField const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{64};

/// @brief Field _descriptionText, offset: 0x90, size: 0x8, def value: None
 ::StringW  ____descriptionText;

/// @brief Field _textInput, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____textInput;

/// @brief Field _placeholderText, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____placeholderText;

/// @brief Field _toggleObject, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____toggleObject;

/// @brief Field _submitTextWithEachStroke, offset: 0xb0, size: 0x1, def value: None
 bool  ____submitTextWithEachStroke;

/// @brief Field _isActive, offset: 0xb1, size: 0x1, def value: None
 bool  ____isActive;

/// @brief Field OnSelected, offset: 0xb8, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::UIInputField>>*  ___OnSelected;

/// @brief Field OnValueChanged, offset: 0xc0, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnValueChanged;

/// @brief Field OnValueSubmitted, offset: 0xc8, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnValueSubmitted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UIInputField, ____descriptionText) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIInputField, ____textInput) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIInputField, ____placeholderText) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIInputField, ____toggleObject) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIInputField, ____submitTextWithEachStroke) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIInputField, ____isActive) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIInputField, ___OnSelected) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIInputField, ___OnValueChanged) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIInputField, ___OnValueSubmitted) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UIInputField, 0xd0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UIInputField);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UIInputField*, "", "UIInputField");
