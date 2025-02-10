#pragma once
// IWYU pragma private; include "Unity/XR/OpenVR/OpenVROculusTouchController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
CORDL_MODULE_EXPORT(OpenVROculusTouchController)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace Unity::XR::OpenVR {
class OpenVROculusTouchController;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::OpenVR::OpenVROculusTouchController);
// Dependencies UnityEngine.InputSystem.XR.XRControllerWithRumble
namespace Unity::XR::OpenVR {
// Is value type: false
// CS Name: Unity.XR.OpenVR.OpenVROculusTouchController
class CORDL_TYPE OpenVROculusTouchController : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
// Declarations
/// @brief Field <deviceAngularVelocity>k__BackingField, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get__deviceAngularVelocity_k__BackingField, put=__cordl_internal_set__deviceAngularVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control*  _deviceAngularVelocity_k__BackingField;

/// @brief Field <deviceVelocity>k__BackingField, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get__deviceVelocity_k__BackingField, put=__cordl_internal_set__deviceVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control*  _deviceVelocity_k__BackingField;

/// @brief Field <gripPressed>k__BackingField, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get__gripPressed_k__BackingField, put=__cordl_internal_set__gripPressed_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _gripPressed_k__BackingField;

/// @brief Field <grip>k__BackingField, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get__grip_k__BackingField, put=__cordl_internal_set__grip_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl*  _grip_k__BackingField;

/// @brief Field <primaryButton>k__BackingField, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get__primaryButton_k__BackingField, put=__cordl_internal_set__primaryButton_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _primaryButton_k__BackingField;

/// @brief Field <secondaryButton>k__BackingField, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get__secondaryButton_k__BackingField, put=__cordl_internal_set__secondaryButton_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _secondaryButton_k__BackingField;

/// @brief Field <thumbstickClicked>k__BackingField, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get__thumbstickClicked_k__BackingField, put=__cordl_internal_set__thumbstickClicked_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _thumbstickClicked_k__BackingField;

/// @brief Field <thumbstickTouched>k__BackingField, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get__thumbstickTouched_k__BackingField, put=__cordl_internal_set__thumbstickTouched_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _thumbstickTouched_k__BackingField;

/// @brief Field <thumbstick>k__BackingField, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get__thumbstick_k__BackingField, put=__cordl_internal_set__thumbstick_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector2Control*  _thumbstick_k__BackingField;

/// @brief Field <triggerPressed>k__BackingField, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get__triggerPressed_k__BackingField, put=__cordl_internal_set__triggerPressed_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl*  _triggerPressed_k__BackingField;

/// @brief Field <trigger>k__BackingField, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get__trigger_k__BackingField, put=__cordl_internal_set__trigger_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl*  _trigger_k__BackingField;

 __declspec(property(get=get_deviceAngularVelocity, put=set_deviceAngularVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control*  deviceAngularVelocity;

 __declspec(property(get=get_deviceVelocity, put=set_deviceVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control*  deviceVelocity;

 __declspec(property(get=get_grip, put=set_grip)) ::UnityEngine::InputSystem::Controls::AxisControl*  grip;

 __declspec(property(get=get_gripPressed, put=set_gripPressed)) ::UnityEngine::InputSystem::Controls::ButtonControl*  gripPressed;

 __declspec(property(get=get_primaryButton, put=set_primaryButton)) ::UnityEngine::InputSystem::Controls::ButtonControl*  primaryButton;

 __declspec(property(get=get_secondaryButton, put=set_secondaryButton)) ::UnityEngine::InputSystem::Controls::ButtonControl*  secondaryButton;

 __declspec(property(get=get_thumbstick, put=set_thumbstick)) ::UnityEngine::InputSystem::Controls::Vector2Control*  thumbstick;

 __declspec(property(get=get_thumbstickClicked, put=set_thumbstickClicked)) ::UnityEngine::InputSystem::Controls::ButtonControl*  thumbstickClicked;

 __declspec(property(get=get_thumbstickTouched, put=set_thumbstickTouched)) ::UnityEngine::InputSystem::Controls::ButtonControl*  thumbstickTouched;

 __declspec(property(get=get_trigger, put=set_trigger)) ::UnityEngine::InputSystem::Controls::AxisControl*  trigger;

 __declspec(property(get=get_triggerPressed, put=set_triggerPressed)) ::UnityEngine::InputSystem::Controls::ButtonControl*  triggerPressed;

/// @brief Method FinishSetup, addr 0x2d982c8, size 0x260, virtual true, abstract: false, final false
inline void FinishSetup() ;

static inline ::Unity::XR::OpenVR::OpenVROculusTouchController* New_ctor() ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__deviceAngularVelocity_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__deviceAngularVelocity_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__deviceVelocity_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__deviceVelocity_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__gripPressed_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__gripPressed_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__grip_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__grip_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__primaryButton_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__primaryButton_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__secondaryButton_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__secondaryButton_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__thumbstickClicked_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__thumbstickClicked_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__thumbstickTouched_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__thumbstickTouched_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& __cordl_internal_get__thumbstick_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__thumbstick_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__triggerPressed_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__triggerPressed_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__trigger_k__BackingField() const;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__trigger_k__BackingField() ;

constexpr void __cordl_internal_set__deviceAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

constexpr void __cordl_internal_set__deviceVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

constexpr void __cordl_internal_set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

constexpr void __cordl_internal_set__primaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__secondaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__thumbstickClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__thumbstickTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__thumbstick_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control*  value) ;

constexpr void __cordl_internal_set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

constexpr void __cordl_internal_set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

/// @brief Method .ctor, addr 0x2d98528, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_deviceAngularVelocity, addr 0x2d982b8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity() ;

/// @brief Method get_deviceVelocity, addr 0x2d982a8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity() ;

/// @brief Method get_grip, addr 0x2d98238, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* get_grip() ;

/// @brief Method get_gripPressed, addr 0x2d98268, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed() ;

/// @brief Method get_primaryButton, addr 0x2d98248, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_primaryButton() ;

/// @brief Method get_secondaryButton, addr 0x2d98258, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_secondaryButton() ;

/// @brief Method get_thumbstick, addr 0x2d98218, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_thumbstick() ;

/// @brief Method get_thumbstickClicked, addr 0x2d98288, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickClicked() ;

/// @brief Method get_thumbstickTouched, addr 0x2d98298, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickTouched() ;

/// @brief Method get_trigger, addr 0x2d98228, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* get_trigger() ;

/// @brief Method get_triggerPressed, addr 0x2d98278, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed() ;

/// @brief Method set_deviceAngularVelocity, addr 0x2d982c0, size 0x8, virtual false, abstract: false, final false
inline void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

/// @brief Method set_deviceVelocity, addr 0x2d982b0, size 0x8, virtual false, abstract: false, final false
inline void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control*  value) ;

/// @brief Method set_grip, addr 0x2d98240, size 0x8, virtual false, abstract: false, final false
inline void set_grip(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

/// @brief Method set_gripPressed, addr 0x2d98270, size 0x8, virtual false, abstract: false, final false
inline void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method set_primaryButton, addr 0x2d98250, size 0x8, virtual false, abstract: false, final false
inline void set_primaryButton(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method set_secondaryButton, addr 0x2d98260, size 0x8, virtual false, abstract: false, final false
inline void set_secondaryButton(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method set_thumbstick, addr 0x2d98220, size 0x8, virtual false, abstract: false, final false
inline void set_thumbstick(::UnityEngine::InputSystem::Controls::Vector2Control*  value) ;

/// @brief Method set_thumbstickClicked, addr 0x2d98290, size 0x8, virtual false, abstract: false, final false
inline void set_thumbstickClicked(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method set_thumbstickTouched, addr 0x2d982a0, size 0x8, virtual false, abstract: false, final false
inline void set_thumbstickTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

/// @brief Method set_trigger, addr 0x2d98230, size 0x8, virtual false, abstract: false, final false
inline void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl*  value) ;

/// @brief Method set_triggerPressed, addr 0x2d98280, size 0x8, virtual false, abstract: false, final false
inline void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenVROculusTouchController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenVROculusTouchController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenVROculusTouchController(OpenVROculusTouchController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenVROculusTouchController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenVROculusTouchController(OpenVROculusTouchController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4708};

/// @brief Field <thumbstick>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::Vector2Control*  ____thumbstick_k__BackingField;

/// @brief Field <trigger>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::AxisControl*  ____trigger_k__BackingField;

/// @brief Field <grip>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::AxisControl*  ____grip_k__BackingField;

/// @brief Field <primaryButton>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____primaryButton_k__BackingField;

/// @brief Field <secondaryButton>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____secondaryButton_k__BackingField;

/// @brief Field <gripPressed>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____gripPressed_k__BackingField;

/// @brief Field <triggerPressed>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____triggerPressed_k__BackingField;

/// @brief Field <thumbstickClicked>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____thumbstickClicked_k__BackingField;

/// @brief Field <thumbstickTouched>k__BackingField, offset: 0x1e8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::ButtonControl*  ____thumbstickTouched_k__BackingField;

/// @brief Field <deviceVelocity>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::Vector3Control*  ____deviceVelocity_k__BackingField;

/// @brief Field <deviceAngularVelocity>k__BackingField, offset: 0x1f8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::Controls::Vector3Control*  ____deviceAngularVelocity_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::OpenVR::OpenVROculusTouchController, ____thumbstick_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVROculusTouchController, ____trigger_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVROculusTouchController, ____grip_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVROculusTouchController, ____primaryButton_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVROculusTouchController, ____secondaryButton_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVROculusTouchController, ____gripPressed_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVROculusTouchController, ____triggerPressed_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVROculusTouchController, ____thumbstickClicked_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVROculusTouchController, ____thumbstickTouched_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVROculusTouchController, ____deviceVelocity_k__BackingField) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVROculusTouchController, ____deviceAngularVelocity_k__BackingField) == 0x1f8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::XR::OpenVR::OpenVROculusTouchController, 0x200>, "Size mismatch!");

} // namespace end def Unity::XR::OpenVR
NEED_NO_BOX(::Unity::XR::OpenVR::OpenVROculusTouchController);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::OpenVR::OpenVROculusTouchController*, "Unity.XR.OpenVR", "OpenVROculusTouchController");
