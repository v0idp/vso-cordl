#pragma once
// IWYU pragma private; include "VROSC/Interactable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(Interactable)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class TooltipData;
}
// Forward declare root types
namespace VROSC {
class Interactable;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Interactable);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Interactable
class CORDL_TYPE Interactable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CanBeInteractedWith)) bool  CanBeInteractedWith;

 __declspec(property(get=get_IsDisabled)) bool  IsDisabled;

 __declspec(property(get=get_IsHovering, put=set_IsHovering)) bool  IsHovering;

 __declspec(property(get=get_IsInteracting, put=set_IsInteracting)) bool  IsInteracting;

/// @brief Field OnHover, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHover, put=__cordl_internal_set_OnHover)) ::System::Action_1<bool>*  OnHover;

/// @brief Field OnHoverStay, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHoverStay, put=__cordl_internal_set_OnHoverStay)) ::System::Action*  OnHoverStay;

/// @brief Field OnInteractableDisabled, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnInteractableDisabled, put=__cordl_internal_set_OnInteractableDisabled)) ::System::Action_1<bool>*  OnInteractableDisabled;

/// @brief Field OnInteraction, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnInteraction, put=__cordl_internal_set_OnInteraction)) ::System::Action_1<bool>*  OnInteraction;

/// @brief Field <IsHovering>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsHovering_k__BackingField, put=__cordl_internal_set__IsHovering_k__BackingField)) bool  _IsHovering_k__BackingField;

/// @brief Field <IsInteracting>k__BackingField, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsInteracting_k__BackingField, put=__cordl_internal_set__IsInteracting_k__BackingField)) bool  _IsInteracting_k__BackingField;

/// @brief Field _canBeinteractedWith, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__canBeinteractedWith, put=__cordl_internal_set__canBeinteractedWith)) bool  _canBeinteractedWith;

/// @brief Field _disablingObjects, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__disablingObjects, put=__cordl_internal_set__disablingObjects)) ::System::Collections::Generic::List_1<::System::Object*>*  _disablingObjects;

/// @brief Field _hoveringControllers, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__hoveringControllers, put=__cordl_internal_set__hoveringControllers)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::InputDevice>>*  _hoveringControllers;

/// @brief Field _lastHoverPosition, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastHoverPosition, put=__cordl_internal_set__lastHoverPosition)) ::UnityEngine::Vector3  _lastHoverPosition;

/// @brief Field _lastPointedAt, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get__lastPointedAt, put=__cordl_internal_set__lastPointedAt)) bool  _lastPointedAt;

/// @brief Field _tooltipDatas, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__tooltipDatas, put=__cordl_internal_set__tooltipDatas)) ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  _tooltipDatas;

/// @brief Method ContinousHovering, addr 0x18903d8, size 0x180, virtual true, abstract: false, final false
inline void ContinousHovering(::VROSC::InputDevice*  device, ::UnityEngine::Vector3  position, bool  pointedAt, bool  v) ;

/// @brief Method GetTooltipDatas, addr 0x1890694, size 0x80, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::VROSC::TooltipData*>* GetTooltipDatas() ;

static inline ::VROSC::Interactable* New_ctor() ;

/// @brief Method OnDisable, addr 0x1890594, size 0x10, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method SetCanBeInteractedWith, addr 0x189017c, size 0xc, virtual false, abstract: false, final false
inline void SetCanBeInteractedWith(bool  canBeInteractedWith) ;

/// @brief Method SetDisabled, addr 0x189003c, size 0x140, virtual true, abstract: false, final false
inline void SetDisabled(::System::Object*  disabler, bool  shouldBeDisabled) ;

/// @brief Method SetHovering, addr 0x1890188, size 0x250, virtual true, abstract: false, final false
inline void SetHovering(::VROSC::InputDevice*  device, ::UnityEngine::Vector3  position, bool  pointedAt, bool  controllerIsHovering) ;

/// @brief Method SetTooltipData, addr 0x18905a4, size 0xe8, virtual false, abstract: false, final false
inline void SetTooltipData(::VROSC::TooltipData*  tooltipData) ;

/// @brief Method SetTooltipData, addr 0x189068c, size 0x8, virtual false, abstract: false, final false
inline void SetTooltipData(::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  tooltipDatas) ;

/// @brief Method UpdateHovering, addr 0x1890558, size 0x3c, virtual true, abstract: false, final false
inline void UpdateHovering(bool  hovering) ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnHover() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnHover() ;

constexpr ::System::Action* const& __cordl_internal_get_OnHoverStay() const;

constexpr ::System::Action*& __cordl_internal_get_OnHoverStay() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnInteractableDisabled() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnInteractableDisabled() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnInteraction() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnInteraction() ;

constexpr bool const& __cordl_internal_get__IsHovering_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsHovering_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsInteracting_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsInteracting_k__BackingField() ;

constexpr bool const& __cordl_internal_get__canBeinteractedWith() const;

constexpr bool& __cordl_internal_get__canBeinteractedWith() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get__disablingObjects() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__disablingObjects() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::InputDevice>>* const& __cordl_internal_get__hoveringControllers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::InputDevice>>*& __cordl_internal_get__hoveringControllers() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastHoverPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastHoverPosition() ;

constexpr bool const& __cordl_internal_get__lastPointedAt() const;

constexpr bool& __cordl_internal_get__lastPointedAt() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::TooltipData*>* const& __cordl_internal_get__tooltipDatas() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*& __cordl_internal_get__tooltipDatas() ;

constexpr void __cordl_internal_set_OnHover(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnHoverStay(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnInteractableDisabled(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnInteraction(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set__IsHovering_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsInteracting_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__canBeinteractedWith(bool  value) ;

constexpr void __cordl_internal_set__disablingObjects(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set__hoveringControllers(::System::Collections::Generic::List_1<::UnityW<::VROSC::InputDevice>>*  value) ;

constexpr void __cordl_internal_set__lastHoverPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__lastPointedAt(bool  value) ;

constexpr void __cordl_internal_set__tooltipDatas(::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  value) ;

/// @brief Method .ctor, addr 0x188fcc4, size 0x114, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanBeInteractedWith, addr 0x1890010, size 0x2c, virtual false, abstract: false, final false
inline bool get_CanBeInteractedWith() ;

/// @brief Method get_IsDisabled, addr 0x188ffac, size 0x50, virtual false, abstract: false, final false
inline bool get_IsDisabled() ;

/// @brief Method get_IsHovering, addr 0x188ffa4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsHovering() ;

/// @brief Method get_IsInteracting, addr 0x1890008, size 0x8, virtual false, abstract: false, final false
inline bool get_IsInteracting() ;

/// @brief Method set_IsHovering, addr 0x188ff98, size 0xc, virtual false, abstract: false, final false
inline void set_IsHovering(bool  value) ;

/// @brief Method set_IsInteracting, addr 0x188fffc, size 0xc, virtual false, abstract: false, final false
inline void set_IsInteracting(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Interactable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Interactable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Interactable(Interactable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Interactable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Interactable(Interactable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{630};

/// @brief Field <IsHovering>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____IsHovering_k__BackingField;

/// @brief Field <IsInteracting>k__BackingField, offset: 0x21, size: 0x1, def value: None
 bool  ____IsInteracting_k__BackingField;

/// @brief Field OnHoverStay, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___OnHoverStay;

/// @brief Field OnHover, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnHover;

/// @brief Field OnInteraction, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnInteraction;

/// @brief Field OnInteractableDisabled, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnInteractableDisabled;

/// @brief Field _lastHoverPosition, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastHoverPosition;

/// @brief Field _lastPointedAt, offset: 0x54, size: 0x1, def value: None
 bool  ____lastPointedAt;

/// @brief Field _hoveringControllers, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::InputDevice>>*  ____hoveringControllers;

/// @brief Field _tooltipDatas, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  ____tooltipDatas;

/// @brief Field _disablingObjects, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ____disablingObjects;

/// @brief Field _canBeinteractedWith, offset: 0x70, size: 0x1, def value: None
 bool  ____canBeinteractedWith;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Interactable, ____IsHovering_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::Interactable, ____IsInteracting_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::VROSC::Interactable, ___OnHoverStay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::Interactable, ___OnHover) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::Interactable, ___OnInteraction) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::Interactable, ___OnInteractableDisabled) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::Interactable, ____lastHoverPosition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::Interactable, ____lastPointedAt) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::Interactable, ____hoveringControllers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::Interactable, ____tooltipDatas) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::Interactable, ____disablingObjects) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::Interactable, ____canBeinteractedWith) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Interactable, 0x78>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::Interactable);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Interactable*, "VROSC", "Interactable");
