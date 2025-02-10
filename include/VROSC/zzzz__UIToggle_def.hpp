#pragma once
// IWYU pragma private; include "VROSC/UIToggle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__UIInteractable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UIToggle)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
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
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class SimpleHaptic;
}
// Forward declare root types
namespace VROSC {
class UIToggle;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIToggle);
// Dependencies VROSC.UIInteractable
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIToggle
class CORDL_TYPE UIToggle : public ::VROSC::UIInteractable {
public:
// Declarations
 __declspec(property(get=get_InteractionStopsLaser)) bool  InteractionStopsLaser;

 __declspec(property(get=get_IsOn, put=set_IsOn)) bool  IsOn;

/// @brief Field OnChanged, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnChanged, put=__cordl_internal_set_OnChanged)) ::System::Action_1<::UnityW<::VROSC::UIToggle>>*  OnChanged;

/// @brief Field OnToggle, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnToggle, put=__cordl_internal_set_OnToggle)) ::System::Action_2<::UnityW<::VROSC::InputDevice>,bool>*  OnToggle;

/// @brief Field <IsOn>k__BackingField, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsOn_k__BackingField, put=__cordl_internal_set__IsOn_k__BackingField)) bool  _IsOn_k__BackingField;

/// @brief Field _hapticFeedBack, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__hapticFeedBack, put=__cordl_internal_set__hapticFeedBack)) ::VROSC::SimpleHaptic*  _hapticFeedBack;

/// @brief Field _isSet, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get__isSet, put=__cordl_internal_set__isSet)) bool  _isSet;

/// @brief Field _startInOnState, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__startInOnState, put=__cordl_internal_set__startInOnState)) bool  _startInOnState;

/// @brief Field _tmpLabel, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpLabel, put=__cordl_internal_set__tmpLabel)) ::UnityW<::TMPro::TextMeshPro>  _tmpLabel;

/// @brief Field _toggleObject, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggleObject, put=__cordl_internal_set__toggleObject)) ::UnityW<::UnityEngine::GameObject>  _toggleObject;

/// @brief Method Awake, addr 0x177655c, size 0xe0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ButtonWasPressed, addr 0x1776704, size 0xa0, virtual true, abstract: false, final false
inline void ButtonWasPressed(::VROSC::ClickData*  clickData) ;

static inline ::VROSC::UIToggle* New_ctor() ;

/// @brief Method OnDestroy, addr 0x177663c, size 0xc8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetText, addr 0x17767a4, size 0xa0, virtual false, abstract: false, final false
inline void SetText(::StringW  text) ;

/// @brief Method SetToggled, addr 0x17721e8, size 0xf4, virtual false, abstract: false, final false
inline void SetToggled(bool  shouldBeActive, bool  alsoInvoke) ;

constexpr ::System::Action_1<::UnityW<::VROSC::UIToggle>>* const& __cordl_internal_get_OnChanged() const;

constexpr ::System::Action_1<::UnityW<::VROSC::UIToggle>>*& __cordl_internal_get_OnChanged() ;

constexpr ::System::Action_2<::UnityW<::VROSC::InputDevice>,bool>* const& __cordl_internal_get_OnToggle() const;

constexpr ::System::Action_2<::UnityW<::VROSC::InputDevice>,bool>*& __cordl_internal_get_OnToggle() ;

constexpr bool const& __cordl_internal_get__IsOn_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsOn_k__BackingField() ;

constexpr ::VROSC::SimpleHaptic* const& __cordl_internal_get__hapticFeedBack() const;

constexpr ::VROSC::SimpleHaptic*& __cordl_internal_get__hapticFeedBack() ;

constexpr bool const& __cordl_internal_get__isSet() const;

constexpr bool& __cordl_internal_get__isSet() ;

constexpr bool const& __cordl_internal_get__startInOnState() const;

constexpr bool& __cordl_internal_get__startInOnState() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__tmpLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__tmpLabel() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__toggleObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__toggleObject() ;

constexpr void __cordl_internal_set_OnChanged(::System::Action_1<::UnityW<::VROSC::UIToggle>>*  value) ;

constexpr void __cordl_internal_set_OnToggle(::System::Action_2<::UnityW<::VROSC::InputDevice>,bool>*  value) ;

constexpr void __cordl_internal_set__IsOn_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__hapticFeedBack(::VROSC::SimpleHaptic*  value) ;

constexpr void __cordl_internal_set__isSet(bool  value) ;

constexpr void __cordl_internal_set__startInOnState(bool  value) ;

constexpr void __cordl_internal_set__tmpLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__toggleObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1776844, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InteractionStopsLaser, addr 0x1776540, size 0x8, virtual true, abstract: false, final false
inline bool get_InteractionStopsLaser() ;

/// @brief Method get_IsOn, addr 0x1776554, size 0x8, virtual false, abstract: false, final false
inline bool get_IsOn() ;

/// @brief Method set_IsOn, addr 0x1776548, size 0xc, virtual false, abstract: false, final false
inline void set_IsOn(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIToggle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIToggle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIToggle(UIToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIToggle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIToggle(UIToggle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1267};

/// @brief Field <IsOn>k__BackingField, offset: 0x90, size: 0x1, def value: None
 bool  ____IsOn_k__BackingField;

/// @brief Field OnToggle, offset: 0x98, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::VROSC::InputDevice>,bool>*  ___OnToggle;

/// @brief Field OnChanged, offset: 0xa0, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::UIToggle>>*  ___OnChanged;

/// @brief Field _tmpLabel, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____tmpLabel;

/// @brief Field _startInOnState, offset: 0xb0, size: 0x1, def value: None
 bool  ____startInOnState;

/// @brief Field _toggleObject, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____toggleObject;

/// @brief Field _hapticFeedBack, offset: 0xc0, size: 0x8, def value: None
 ::VROSC::SimpleHaptic*  ____hapticFeedBack;

/// @brief Field _isSet, offset: 0xc8, size: 0x1, def value: None
 bool  ____isSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIToggle, ____IsOn_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIToggle, ___OnToggle) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIToggle, ___OnChanged) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIToggle, ____tmpLabel) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIToggle, ____startInOnState) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIToggle, ____toggleObject) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIToggle, ____hapticFeedBack) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIToggle, ____isSet) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIToggle, 0xd0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIToggle);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIToggle*, "VROSC", "UIToggle");
