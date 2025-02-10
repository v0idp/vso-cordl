#pragma once
// IWYU pragma private; include "VROSC/UI/UIInputHandHovering.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(UIInputHandHovering)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class Clickable;
}
namespace VROSC {
class Grabable;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class InputSettings;
}
namespace VROSC {
class TooltipData;
}
// Forward declare root types
namespace VROSC::UI {
class UIInputHandHovering;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::UIInputHandHovering);
// Dependencies System.Object, UnityEngine.RaycastHit, UnityEngine.Vector3
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.UIInputHandHovering
class CORDL_TYPE UIInputHandHovering : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ClickablePointedAt, put=set_ClickablePointedAt)) bool  ClickablePointedAt;

 __declspec(property(get=get_ClickableTouchPosition, put=set_ClickableTouchPosition)) ::UnityEngine::Vector3  ClickableTouchPosition;

 __declspec(property(get=get_CurrentClickable, put=set_CurrentClickable)) ::UnityW<::VROSC::Clickable>  CurrentClickable;

 __declspec(property(get=get_CurrentGrabbable, put=set_CurrentGrabbable)) ::UnityW<::VROSC::Grabable>  CurrentGrabbable;

 __declspec(property(get=get_GrabbablePointedAt, put=set_GrabbablePointedAt)) bool  GrabbablePointedAt;

 __declspec(property(get=get_GrabbableTouchPosition, put=set_GrabbableTouchPosition)) ::UnityEngine::Vector3  GrabbableTouchPosition;

 __declspec(property(get=get_IsHoveringSomething, put=set_IsHoveringSomething)) bool  IsHoveringSomething;

 __declspec(property(get=get_RayEnd, put=set_RayEnd)) ::UnityEngine::Vector3  RayEnd;

/// @brief Field <ClickablePointedAt>k__BackingField, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__ClickablePointedAt_k__BackingField, put=__cordl_internal_set__ClickablePointedAt_k__BackingField)) bool  _ClickablePointedAt_k__BackingField;

/// @brief Field <ClickableTouchPosition>k__BackingField, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get__ClickableTouchPosition_k__BackingField, put=__cordl_internal_set__ClickableTouchPosition_k__BackingField)) ::UnityEngine::Vector3  _ClickableTouchPosition_k__BackingField;

/// @brief Field <CurrentClickable>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentClickable_k__BackingField, put=__cordl_internal_set__CurrentClickable_k__BackingField)) ::UnityW<::VROSC::Clickable>  _CurrentClickable_k__BackingField;

/// @brief Field <CurrentGrabbable>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentGrabbable_k__BackingField, put=__cordl_internal_set__CurrentGrabbable_k__BackingField)) ::UnityW<::VROSC::Grabable>  _CurrentGrabbable_k__BackingField;

/// @brief Field <GrabbablePointedAt>k__BackingField, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__GrabbablePointedAt_k__BackingField, put=__cordl_internal_set__GrabbablePointedAt_k__BackingField)) bool  _GrabbablePointedAt_k__BackingField;

/// @brief Field <GrabbableTouchPosition>k__BackingField, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get__GrabbableTouchPosition_k__BackingField, put=__cordl_internal_set__GrabbableTouchPosition_k__BackingField)) ::UnityEngine::Vector3  _GrabbableTouchPosition_k__BackingField;

/// @brief Field <IsHoveringSomething>k__BackingField, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsHoveringSomething_k__BackingField, put=__cordl_internal_set__IsHoveringSomething_k__BackingField)) bool  _IsHoveringSomething_k__BackingField;

/// @brief Field <RayEnd>k__BackingField, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get__RayEnd_k__BackingField, put=__cordl_internal_set__RayEnd_k__BackingField)) ::UnityEngine::Vector3  _RayEnd_k__BackingField;

/// @brief Field _currentRequestedTooltips, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentRequestedTooltips, put=__cordl_internal_set__currentRequestedTooltips)) ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  _currentRequestedTooltips;

/// @brief Field _device, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__device, put=__cordl_internal_set__device)) ::UnityW<::VROSC::InputDevice>  _device;

/// @brief Field _hit, offset 0x70, size 0x2c 
 __declspec(property(get=__cordl_internal_get__hit, put=__cordl_internal_set__hit)) ::UnityEngine::RaycastHit  _hit;

/// @brief Field _hoverColliderBuffer, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__hoverColliderBuffer, put=__cordl_internal_set__hoverColliderBuffer)) ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>  _hoverColliderBuffer;

/// @brief Field _ignoreGrabTooltips, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__ignoreGrabTooltips, put=__cordl_internal_set__ignoreGrabTooltips)) bool  _ignoreGrabTooltips;

/// @brief Field _inputSettings, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputSettings, put=__cordl_internal_set__inputSettings)) ::UnityW<::VROSC::InputSettings>  _inputSettings;

/// @brief Field _interactionDisabledByMallets, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get__interactionDisabledByMallets, put=__cordl_internal_set__interactionDisabledByMallets)) bool  _interactionDisabledByMallets;

/// @brief Field _interactionPoint, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactionPoint, put=__cordl_internal_set__interactionPoint)) ::UnityW<::UnityEngine::Transform>  _interactionPoint;

/// @brief Field _rayPoint, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__rayPoint, put=__cordl_internal_set__rayPoint)) ::UnityW<::UnityEngine::Transform>  _rayPoint;

/// @brief Method GetClosestInCurrentlyHovering, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetClosestInCurrentlyHovering() ;

static inline ::VROSC::UI::UIInputHandHovering* New_ctor() ;

/// @brief Method ResetHovering, addr 0x17e0dd4, size 0x28, virtual false, abstract: false, final false
inline void ResetHovering() ;

/// @brief Method SetInteractionDisabledByMallets, addr 0x17e0e50, size 0x14, virtual false, abstract: false, final false
inline void SetInteractionDisabledByMallets(bool  disable) ;

/// @brief Method Setup, addr 0x17e0b8c, size 0x88, virtual false, abstract: false, final false
inline void Setup(::VROSC::InputSettings*  inputSettings, ::VROSC::InputDevice*  device, ::UnityEngine::Transform*  rayPoint) ;

/// @brief Method Update, addr 0x17e122c, size 0xa0, virtual false, abstract: false, final false
inline void Update(bool  useLaser) ;

/// @brief Method UpdateClickable, addr 0x17e1d38, size 0x104, virtual false, abstract: false, final false
inline void UpdateClickable(::VROSC::Clickable*  currentlyHoveringOver) ;

/// @brief Method UpdateGrabbable, addr 0x17e1e3c, size 0x1a8, virtual false, abstract: false, final false
inline void UpdateGrabbable(::VROSC::Grabable*  currentlyHoveringOver) ;

/// @brief Method UpdateHovering, addr 0x17e1728, size 0x610, virtual false, abstract: false, final false
inline void UpdateHovering(bool  useLaser) ;

/// @brief Method UpdateTooltips, addr 0x17e1fe4, size 0x3a4, virtual false, abstract: false, final false
inline void UpdateTooltips() ;

constexpr bool const& __cordl_internal_get__ClickablePointedAt_k__BackingField() const;

constexpr bool& __cordl_internal_get__ClickablePointedAt_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__ClickableTouchPosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__ClickableTouchPosition_k__BackingField() ;

constexpr ::UnityW<::VROSC::Clickable> const& __cordl_internal_get__CurrentClickable_k__BackingField() const;

constexpr ::UnityW<::VROSC::Clickable>& __cordl_internal_get__CurrentClickable_k__BackingField() ;

constexpr ::UnityW<::VROSC::Grabable> const& __cordl_internal_get__CurrentGrabbable_k__BackingField() const;

constexpr ::UnityW<::VROSC::Grabable>& __cordl_internal_get__CurrentGrabbable_k__BackingField() ;

constexpr bool const& __cordl_internal_get__GrabbablePointedAt_k__BackingField() const;

constexpr bool& __cordl_internal_get__GrabbablePointedAt_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__GrabbableTouchPosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__GrabbableTouchPosition_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsHoveringSomething_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsHoveringSomething_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__RayEnd_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__RayEnd_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::TooltipData*>* const& __cordl_internal_get__currentRequestedTooltips() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*& __cordl_internal_get__currentRequestedTooltips() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__device() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__device() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get__hit() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get__hit() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> const& __cordl_internal_get__hoverColliderBuffer() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>& __cordl_internal_get__hoverColliderBuffer() ;

constexpr bool const& __cordl_internal_get__ignoreGrabTooltips() const;

constexpr bool& __cordl_internal_get__ignoreGrabTooltips() ;

constexpr ::UnityW<::VROSC::InputSettings> const& __cordl_internal_get__inputSettings() const;

constexpr ::UnityW<::VROSC::InputSettings>& __cordl_internal_get__inputSettings() ;

constexpr bool const& __cordl_internal_get__interactionDisabledByMallets() const;

constexpr bool& __cordl_internal_get__interactionDisabledByMallets() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__interactionPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__interactionPoint() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rayPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rayPoint() ;

constexpr void __cordl_internal_set__ClickablePointedAt_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ClickableTouchPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__CurrentClickable_k__BackingField(::UnityW<::VROSC::Clickable>  value) ;

constexpr void __cordl_internal_set__CurrentGrabbable_k__BackingField(::UnityW<::VROSC::Grabable>  value) ;

constexpr void __cordl_internal_set__GrabbablePointedAt_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__GrabbableTouchPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__IsHoveringSomething_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__RayEnd_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__currentRequestedTooltips(::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  value) ;

constexpr void __cordl_internal_set__device(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__hit(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set__hoverColliderBuffer(::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>  value) ;

constexpr void __cordl_internal_set__ignoreGrabTooltips(bool  value) ;

constexpr void __cordl_internal_set__inputSettings(::UnityW<::VROSC::InputSettings>  value) ;

constexpr void __cordl_internal_set__interactionDisabledByMallets(bool  value) ;

constexpr void __cordl_internal_set__interactionPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__rayPoint(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x17e2388, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ClickablePointedAt, addr 0x17e16d4, size 0x8, virtual false, abstract: false, final false
inline bool get_ClickablePointedAt() ;

/// @brief Method get_ClickableTouchPosition, addr 0x17e16bc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_ClickableTouchPosition() ;

/// @brief Method get_CurrentClickable, addr 0x17e16e4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::Clickable> get_CurrentClickable() ;

/// @brief Method get_CurrentGrabbable, addr 0x17e16f4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::Grabable> get_CurrentGrabbable() ;

/// @brief Method get_GrabbablePointedAt, addr 0x17e16a8, size 0x8, virtual false, abstract: false, final false
inline bool get_GrabbablePointedAt() ;

/// @brief Method get_GrabbableTouchPosition, addr 0x17e1690, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_GrabbableTouchPosition() ;

/// @brief Method get_IsHoveringSomething, addr 0x17e1720, size 0x8, virtual false, abstract: false, final false
inline bool get_IsHoveringSomething() ;

/// @brief Method get_RayEnd, addr 0x17e1708, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_RayEnd() ;

/// @brief Method set_ClickablePointedAt, addr 0x17e16c8, size 0xc, virtual false, abstract: false, final false
inline void set_ClickablePointedAt(bool  value) ;

/// @brief Method set_ClickableTouchPosition, addr 0x17e16b0, size 0xc, virtual false, abstract: false, final false
inline void set_ClickableTouchPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_CurrentClickable, addr 0x17e16dc, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentClickable(::VROSC::Clickable*  value) ;

/// @brief Method set_CurrentGrabbable, addr 0x17e16ec, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentGrabbable(::VROSC::Grabable*  value) ;

/// @brief Method set_GrabbablePointedAt, addr 0x17e169c, size 0xc, virtual false, abstract: false, final false
inline void set_GrabbablePointedAt(bool  value) ;

/// @brief Method set_GrabbableTouchPosition, addr 0x17e1684, size 0xc, virtual false, abstract: false, final false
inline void set_GrabbableTouchPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_IsHoveringSomething, addr 0x17e1714, size 0xc, virtual false, abstract: false, final false
inline void set_IsHoveringSomething(bool  value) ;

/// @brief Method set_RayEnd, addr 0x17e16fc, size 0xc, virtual false, abstract: false, final false
inline void set_RayEnd(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIInputHandHovering() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIInputHandHovering", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIInputHandHovering(UIInputHandHovering && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIInputHandHovering", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIInputHandHovering(UIInputHandHovering const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1594};

/// @brief Field <GrabbableTouchPosition>k__BackingField, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____GrabbableTouchPosition_k__BackingField;

/// @brief Field <GrabbablePointedAt>k__BackingField, offset: 0x1c, size: 0x1, def value: None
 bool  ____GrabbablePointedAt_k__BackingField;

/// @brief Field <ClickableTouchPosition>k__BackingField, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____ClickableTouchPosition_k__BackingField;

/// @brief Field <ClickablePointedAt>k__BackingField, offset: 0x2c, size: 0x1, def value: None
 bool  ____ClickablePointedAt_k__BackingField;

/// @brief Field _interactionPoint, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____interactionPoint;

/// @brief Field _rayPoint, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____rayPoint;

/// @brief Field <CurrentClickable>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::Clickable>  ____CurrentClickable_k__BackingField;

/// @brief Field <CurrentGrabbable>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::Grabable>  ____CurrentGrabbable_k__BackingField;

/// @brief Field <RayEnd>k__BackingField, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____RayEnd_k__BackingField;

/// @brief Field <IsHoveringSomething>k__BackingField, offset: 0x5c, size: 0x1, def value: None
 bool  ____IsHoveringSomething_k__BackingField;

/// @brief Field _interactionDisabledByMallets, offset: 0x5d, size: 0x1, def value: None
 bool  ____interactionDisabledByMallets;

/// @brief Field _device, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____device;

/// @brief Field _inputSettings, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::InputSettings>  ____inputSettings;

/// @brief Field _hit, offset: 0x70, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ____hit;

/// @brief Field _hoverColliderBuffer, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>  ____hoverColliderBuffer;

/// @brief Field _currentRequestedTooltips, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  ____currentRequestedTooltips;

/// @brief Field _ignoreGrabTooltips, offset: 0xb0, size: 0x1, def value: None
 bool  ____ignoreGrabTooltips;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::UIInputHandHovering, ____GrabbableTouchPosition_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInputHandHovering, ____GrabbablePointedAt_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInputHandHovering, ____ClickableTouchPosition_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInputHandHovering, ____ClickablePointedAt_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInputHandHovering, ____interactionPoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInputHandHovering, ____rayPoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInputHandHovering, ____CurrentClickable_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInputHandHovering, ____CurrentGrabbable_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInputHandHovering, ____RayEnd_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInputHandHovering, ____IsHoveringSomething_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInputHandHovering, ____interactionDisabledByMallets) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInputHandHovering, ____device) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInputHandHovering, ____inputSettings) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInputHandHovering, ____hit) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInputHandHovering, ____hoverColliderBuffer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInputHandHovering, ____currentRequestedTooltips) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInputHandHovering, ____ignoreGrabTooltips) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::UIInputHandHovering, 0xb8>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::UIInputHandHovering);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UIInputHandHovering*, "VROSC.UI", "UIInputHandHovering");
