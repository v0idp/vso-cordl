#pragma once
// IWYU pragma private; include "VROSC/UISlideToggle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__UIInteractable_def.hpp"
CORDL_MODULE_EXPORT(UISlideToggle)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace VROSC::UI {
class UIColorGetter;
}
namespace VROSC {
class AdjustableMesh;
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
class UISlideToggle;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UISlideToggle);
// Dependencies VROSC.UIInteractable
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UISlideToggle
class CORDL_TYPE UISlideToggle : public ::VROSC::UIInteractable {
public:
// Declarations
 __declspec(property(get=get_InteractionStopsLaser)) bool  InteractionStopsLaser;

 __declspec(property(get=get_IsOn, put=set_IsOn)) bool  IsOn;

/// @brief Field OnToggle, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnToggle, put=__cordl_internal_set_OnToggle)) ::System::Action_2<::UnityW<::VROSC::InputDevice>,bool>*  OnToggle;

/// @brief Field <IsOn>k__BackingField, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsOn_k__BackingField, put=__cordl_internal_set__IsOn_k__BackingField)) bool  _IsOn_k__BackingField;

/// @brief Field _base, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__base, put=__cordl_internal_set__base)) ::UnityW<::VROSC::AdjustableMesh>  _base;

/// @brief Field _baseColorOff, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseColorOff, put=__cordl_internal_set__baseColorOff)) ::UnityW<::VROSC::UI::UIColorGetter>  _baseColorOff;

/// @brief Field _baseColorOn, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseColorOn, put=__cordl_internal_set__baseColorOn)) ::UnityW<::VROSC::UI::UIColorGetter>  _baseColorOn;

/// @brief Field _hapticFeedBack, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__hapticFeedBack, put=__cordl_internal_set__hapticFeedBack)) ::VROSC::SimpleHaptic*  _hapticFeedBack;

/// @brief Field _isSet, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get__isSet, put=__cordl_internal_set__isSet)) bool  _isSet;

/// @brief Field _knob, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__knob, put=__cordl_internal_set__knob)) ::UnityW<::VROSC::AdjustableMesh>  _knob;

/// @brief Field _knobColor, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__knobColor, put=__cordl_internal_set__knobColor)) ::UnityW<::VROSC::UI::UIColorGetter>  _knobColor;

/// @brief Field _startInOnState, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get__startInOnState, put=__cordl_internal_set__startInOnState)) bool  _startInOnState;

/// @brief Method Awake, addr 0x1774f64, size 0x28c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ButtonWasPressed, addr 0x1775448, size 0x80, virtual false, abstract: false, final false
inline void ButtonWasPressed(::VROSC::ClickData*  clickData) ;

static inline ::VROSC::UISlideToggle* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1775370, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1774dc4, size 0x1a0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1774a9c, size 0x198, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetColor, addr 0x1774c34, size 0x190, virtual false, abstract: false, final false
inline void SetColor() ;

/// @brief Method SetToggled, addr 0x17751f0, size 0x180, virtual false, abstract: false, final false
inline void SetToggled(bool  shouldBeActive, bool  alsoInvoke) ;

/// @brief Method <Awake>b__17_0, addr 0x17754d0, size 0x4, virtual false, abstract: false, final false
inline void _Awake_b__17_0(bool  disabled) ;

/// @brief Method <Awake>b__17_1, addr 0x17754d4, size 0x4, virtual false, abstract: false, final false
inline void _Awake_b__17_1(bool  hovering) ;

/// @brief Method <Awake>b__17_2, addr 0x17754d8, size 0x4, virtual false, abstract: false, final false
inline void _Awake_b__17_2(bool  interacting) ;

constexpr ::System::Action_2<::UnityW<::VROSC::InputDevice>,bool>* const& __cordl_internal_get_OnToggle() const;

constexpr ::System::Action_2<::UnityW<::VROSC::InputDevice>,bool>*& __cordl_internal_get_OnToggle() ;

constexpr bool const& __cordl_internal_get__IsOn_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsOn_k__BackingField() ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__base() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__base() ;

constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& __cordl_internal_get__baseColorOff() const;

constexpr ::UnityW<::VROSC::UI::UIColorGetter>& __cordl_internal_get__baseColorOff() ;

constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& __cordl_internal_get__baseColorOn() const;

constexpr ::UnityW<::VROSC::UI::UIColorGetter>& __cordl_internal_get__baseColorOn() ;

constexpr ::VROSC::SimpleHaptic* const& __cordl_internal_get__hapticFeedBack() const;

constexpr ::VROSC::SimpleHaptic*& __cordl_internal_get__hapticFeedBack() ;

constexpr bool const& __cordl_internal_get__isSet() const;

constexpr bool& __cordl_internal_get__isSet() ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__knob() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__knob() ;

constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& __cordl_internal_get__knobColor() const;

constexpr ::UnityW<::VROSC::UI::UIColorGetter>& __cordl_internal_get__knobColor() ;

constexpr bool const& __cordl_internal_get__startInOnState() const;

constexpr bool& __cordl_internal_get__startInOnState() ;

constexpr void __cordl_internal_set_OnToggle(::System::Action_2<::UnityW<::VROSC::InputDevice>,bool>*  value) ;

constexpr void __cordl_internal_set__IsOn_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__base(::UnityW<::VROSC::AdjustableMesh>  value) ;

constexpr void __cordl_internal_set__baseColorOff(::UnityW<::VROSC::UI::UIColorGetter>  value) ;

constexpr void __cordl_internal_set__baseColorOn(::UnityW<::VROSC::UI::UIColorGetter>  value) ;

constexpr void __cordl_internal_set__hapticFeedBack(::VROSC::SimpleHaptic*  value) ;

constexpr void __cordl_internal_set__isSet(bool  value) ;

constexpr void __cordl_internal_set__knob(::UnityW<::VROSC::AdjustableMesh>  value) ;

constexpr void __cordl_internal_set__knobColor(::UnityW<::VROSC::UI::UIColorGetter>  value) ;

constexpr void __cordl_internal_set__startInOnState(bool  value) ;

/// @brief Method .ctor, addr 0x17754c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InteractionStopsLaser, addr 0x1774a80, size 0x8, virtual true, abstract: false, final false
inline bool get_InteractionStopsLaser() ;

/// @brief Method get_IsOn, addr 0x1774a94, size 0x8, virtual false, abstract: false, final false
inline bool get_IsOn() ;

/// @brief Method set_IsOn, addr 0x1774a88, size 0xc, virtual false, abstract: false, final false
inline void set_IsOn(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UISlideToggle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UISlideToggle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UISlideToggle(UISlideToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UISlideToggle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UISlideToggle(UISlideToggle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1264};

/// @brief Field <IsOn>k__BackingField, offset: 0x90, size: 0x1, def value: None
 bool  ____IsOn_k__BackingField;

/// @brief Field OnToggle, offset: 0x98, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::VROSC::InputDevice>,bool>*  ___OnToggle;

/// @brief Field _startInOnState, offset: 0xa0, size: 0x1, def value: None
 bool  ____startInOnState;

/// @brief Field _base, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____base;

/// @brief Field _baseColorOn, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIColorGetter>  ____baseColorOn;

/// @brief Field _baseColorOff, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIColorGetter>  ____baseColorOff;

/// @brief Field _knobColor, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIColorGetter>  ____knobColor;

/// @brief Field _knob, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____knob;

/// @brief Field _hapticFeedBack, offset: 0xd0, size: 0x8, def value: None
 ::VROSC::SimpleHaptic*  ____hapticFeedBack;

/// @brief Field _isSet, offset: 0xd8, size: 0x1, def value: None
 bool  ____isSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UISlideToggle, ____IsOn_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlideToggle, ___OnToggle) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlideToggle, ____startInOnState) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlideToggle, ____base) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlideToggle, ____baseColorOn) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlideToggle, ____baseColorOff) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlideToggle, ____knobColor) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlideToggle, ____knob) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlideToggle, ____hapticFeedBack) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISlideToggle, ____isSet) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UISlideToggle, 0xe0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UISlideToggle);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UISlideToggle*, "VROSC", "UISlideToggle");
