#pragma once
// IWYU pragma private; include "VROSC/Clickable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__Interactable_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
CORDL_MODULE_EXPORT(Clickable)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
struct TriggerButton;
}
// Forward declare root types
namespace VROSC {
class Clickable;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Clickable);
// Dependencies VROSC.Interactable, VROSC.TriggerButton
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Clickable
class CORDL_TYPE Clickable : public ::VROSC::Interactable {
public:
// Declarations
 __declspec(property(get=get_InteractionStopsLaser)) bool  InteractionStopsLaser;

 __declspec(property(get=get_IsPressed, put=set_IsPressed)) bool  IsPressed;

/// @brief Field OnClick, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClick, put=__cordl_internal_set_OnClick)) ::System::Action_1<::VROSC::ClickData*>*  OnClick;

/// @brief Field OnPressed, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPressed, put=__cordl_internal_set_OnPressed)) ::System::Action_2<::VROSC::ClickData*,bool>*  OnPressed;

 __declspec(property(get=get_ReactsTo)) ::VROSC::TriggerButton  ReactsTo;

/// @brief Field <IsPressed>k__BackingField, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsPressed_k__BackingField, put=__cordl_internal_set__IsPressed_k__BackingField)) bool  _IsPressed_k__BackingField;

/// @brief Field _reactsTo, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__reactsTo, put=__cordl_internal_set__reactsTo)) ::VROSC::TriggerButton  _reactsTo;

static inline ::VROSC::Clickable* New_ctor() ;

/// @brief Method PressBegin, addr 0x188fb90, size 0xa0, virtual false, abstract: false, final false
inline void PressBegin(::VROSC::ClickData*  clickData) ;

/// @brief Method PressEnd, addr 0x188fc30, size 0x88, virtual false, abstract: false, final false
inline void PressEnd(::VROSC::ClickData*  clickData) ;

constexpr ::System::Action_1<::VROSC::ClickData*>* const& __cordl_internal_get_OnClick() const;

constexpr ::System::Action_1<::VROSC::ClickData*>*& __cordl_internal_get_OnClick() ;

constexpr ::System::Action_2<::VROSC::ClickData*,bool>* const& __cordl_internal_get_OnPressed() const;

constexpr ::System::Action_2<::VROSC::ClickData*,bool>*& __cordl_internal_get_OnPressed() ;

constexpr bool const& __cordl_internal_get__IsPressed_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsPressed_k__BackingField() ;

constexpr ::VROSC::TriggerButton const& __cordl_internal_get__reactsTo() const;

constexpr ::VROSC::TriggerButton& __cordl_internal_get__reactsTo() ;

constexpr void __cordl_internal_set_OnClick(::System::Action_1<::VROSC::ClickData*>*  value) ;

constexpr void __cordl_internal_set_OnPressed(::System::Action_2<::VROSC::ClickData*,bool>*  value) ;

constexpr void __cordl_internal_set__IsPressed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__reactsTo(::VROSC::TriggerButton  value) ;

/// @brief Method .ctor, addr 0x188fcb8, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InteractionStopsLaser, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_InteractionStopsLaser() ;

/// @brief Method get_IsPressed, addr 0x188fb88, size 0x8, virtual false, abstract: false, final false
inline bool get_IsPressed() ;

/// @brief Method get_ReactsTo, addr 0x188fb74, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::TriggerButton get_ReactsTo() ;

/// @brief Method set_IsPressed, addr 0x188fb7c, size 0xc, virtual false, abstract: false, final false
inline void set_IsPressed(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Clickable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Clickable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Clickable(Clickable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Clickable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Clickable(Clickable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{626};

/// @brief Field _reactsTo, offset: 0x74, size: 0x4, def value: None
 ::VROSC::TriggerButton  ____reactsTo;

/// @brief Field <IsPressed>k__BackingField, offset: 0x78, size: 0x1, def value: None
 bool  ____IsPressed_k__BackingField;

/// @brief Field OnPressed, offset: 0x80, size: 0x8, def value: None
 ::System::Action_2<::VROSC::ClickData*,bool>*  ___OnPressed;

/// @brief Field OnClick, offset: 0x88, size: 0x8, def value: None
 ::System::Action_1<::VROSC::ClickData*>*  ___OnClick;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Clickable, ____reactsTo) == 0x74, "Offset mismatch!");

static_assert(offsetof(::VROSC::Clickable, ____IsPressed_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::Clickable, ___OnPressed) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::Clickable, ___OnClick) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Clickable, 0x90>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::Clickable);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Clickable*, "VROSC", "Clickable");
