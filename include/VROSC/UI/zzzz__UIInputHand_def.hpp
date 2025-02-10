#pragma once
// IWYU pragma private; include "VROSC/UI/UIInputHand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
CORDL_MODULE_EXPORT(UIInputHand)
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC::UI {
class UIInputHandHovering;
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
struct PointingLaser_DisablingReason;
}
namespace VROSC {
class PointingLaser;
}
namespace VROSC {
struct TriggerButton;
}
// Forward declare root types
namespace VROSC::UI {
class UIInputHand;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::UIInputHand);
// Dependencies UnityEngine.MonoBehaviour, VROSC.TriggerButton
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.UIInputHand
class CORDL_TYPE UIInputHand : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CurrentlyGrabbing)) ::UnityW<::VROSC::Grabable>  CurrentlyGrabbing;

 __declspec(property(get=get_IsGrabbing)) bool  IsGrabbing;

 __declspec(property(get=get_LaserEndPoint)) ::UnityEngine::Vector3  LaserEndPoint;

 __declspec(property(get=get_LaserIsHovering)) bool  LaserIsHovering;

 __declspec(property(get=get_PointingLaser)) ::UnityW<::VROSC::PointingLaser>  PointingLaser;

 __declspec(property(get=get_Ray)) ::UnityEngine::Ray  Ray;

 __declspec(property(get=get_RayStartTransform)) ::UnityW<::UnityEngine::Transform>  RayStartTransform;

/// @brief Field _currentlyGrabbing, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentlyGrabbing, put=__cordl_internal_set__currentlyGrabbing)) ::UnityW<::VROSC::Grabable>  _currentlyGrabbing;

/// @brief Field _currentlyPressing, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentlyPressing, put=__cordl_internal_set__currentlyPressing)) ::UnityW<::VROSC::Clickable>  _currentlyPressing;

/// @brief Field _currentlyPressingButton, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentlyPressingButton, put=__cordl_internal_set__currentlyPressingButton)) ::VROSC::TriggerButton  _currentlyPressingButton;

/// @brief Field _device, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__device, put=__cordl_internal_set__device)) ::UnityW<::VROSC::InputDevice>  _device;

/// @brief Field _hovering, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__hovering, put=__cordl_internal_set__hovering)) ::VROSC::UI::UIInputHandHovering*  _hovering;

/// @brief Field _pointingLaser, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointingLaser, put=__cordl_internal_set__pointingLaser)) ::UnityW<::VROSC::PointingLaser>  _pointingLaser;

/// @brief Field _rayPoint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rayPoint, put=__cordl_internal_set__rayPoint)) ::UnityW<::UnityEngine::Transform>  _rayPoint;

/// @brief Method ButtonBegin, addr 0x17e0e64, size 0x3c8, virtual false, abstract: false, final false
inline void ButtonBegin(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  button) ;

/// @brief Method ButtonEnd, addr 0x17e12cc, size 0x2f4, virtual false, abstract: false, final false
inline void ButtonEnd(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  button) ;

/// @brief Method LateUpdate, addr 0x17e15c0, size 0xbc, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::VROSC::UI::UIInputHand* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17e0c14, size 0x194, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PointingDisabledChanged, addr 0x17e0da8, size 0x2c, virtual false, abstract: false, final false
inline void PointingDisabledChanged(bool  disabled, ::VROSC::PointingLaser_DisablingReason  reason) ;

/// @brief Method SetLaserDimmedByMallets, addr 0x17e0dfc, size 0x54, virtual false, abstract: false, final false
inline void SetLaserDimmedByMallets(bool  dimLaser) ;

/// @brief Method Setup, addr 0x17e0924, size 0x268, virtual false, abstract: false, final false
inline void Setup(::VROSC::InputSettings*  inputSettings, ::VROSC::InputDevice*  inputDevice) ;

constexpr ::UnityW<::VROSC::Grabable> const& __cordl_internal_get__currentlyGrabbing() const;

constexpr ::UnityW<::VROSC::Grabable>& __cordl_internal_get__currentlyGrabbing() ;

constexpr ::UnityW<::VROSC::Clickable> const& __cordl_internal_get__currentlyPressing() const;

constexpr ::UnityW<::VROSC::Clickable>& __cordl_internal_get__currentlyPressing() ;

constexpr ::VROSC::TriggerButton const& __cordl_internal_get__currentlyPressingButton() const;

constexpr ::VROSC::TriggerButton& __cordl_internal_get__currentlyPressingButton() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__device() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__device() ;

constexpr ::VROSC::UI::UIInputHandHovering* const& __cordl_internal_get__hovering() const;

constexpr ::VROSC::UI::UIInputHandHovering*& __cordl_internal_get__hovering() ;

constexpr ::UnityW<::VROSC::PointingLaser> const& __cordl_internal_get__pointingLaser() const;

constexpr ::UnityW<::VROSC::PointingLaser>& __cordl_internal_get__pointingLaser() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rayPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rayPoint() ;

constexpr void __cordl_internal_set__currentlyGrabbing(::UnityW<::VROSC::Grabable>  value) ;

constexpr void __cordl_internal_set__currentlyPressing(::UnityW<::VROSC::Clickable>  value) ;

constexpr void __cordl_internal_set__currentlyPressingButton(::VROSC::TriggerButton  value) ;

constexpr void __cordl_internal_set__device(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__hovering(::VROSC::UI::UIInputHandHovering*  value) ;

constexpr void __cordl_internal_set__pointingLaser(::UnityW<::VROSC::PointingLaser>  value) ;

constexpr void __cordl_internal_set__rayPoint(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x17e167c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentlyGrabbing, addr 0x17e091c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::Grabable> get_CurrentlyGrabbing() ;

/// @brief Method get_IsGrabbing, addr 0x17e08bc, size 0x60, virtual false, abstract: false, final false
inline bool get_IsGrabbing() ;

/// @brief Method get_LaserEndPoint, addr 0x17e089c, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_LaserEndPoint() ;

/// @brief Method get_LaserIsHovering, addr 0x17e0880, size 0x1c, virtual false, abstract: false, final false
inline bool get_LaserIsHovering() ;

/// @brief Method get_PointingLaser, addr 0x17e0740, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::PointingLaser> get_PointingLaser() ;

/// @brief Method get_Ray, addr 0x17e0748, size 0x130, virtual false, abstract: false, final false
inline ::UnityEngine::Ray get_Ray() ;

/// @brief Method get_RayStartTransform, addr 0x17e0878, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_RayStartTransform() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIInputHand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIInputHand", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIInputHand(UIInputHand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIInputHand", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIInputHand(UIInputHand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1593};

/// @brief Field _rayPoint, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____rayPoint;

/// @brief Field _hovering, offset: 0x28, size: 0x8, def value: None
 ::VROSC::UI::UIInputHandHovering*  ____hovering;

/// @brief Field _pointingLaser, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::PointingLaser>  ____pointingLaser;

/// @brief Field _device, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____device;

/// @brief Field _currentlyGrabbing, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::Grabable>  ____currentlyGrabbing;

/// @brief Field _currentlyPressing, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::Clickable>  ____currentlyPressing;

/// @brief Field _currentlyPressingButton, offset: 0x50, size: 0x4, def value: None
 ::VROSC::TriggerButton  ____currentlyPressingButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::UIInputHand, ____rayPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInputHand, ____hovering) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInputHand, ____pointingLaser) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInputHand, ____device) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInputHand, ____currentlyGrabbing) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInputHand, ____currentlyPressing) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIInputHand, ____currentlyPressingButton) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::UIInputHand, 0x58>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::UIInputHand);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UIInputHand*, "VROSC.UI", "UIInputHand");
