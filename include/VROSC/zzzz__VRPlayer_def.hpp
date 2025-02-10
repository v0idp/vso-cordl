#pragma once
// IWYU pragma private; include "VROSC/VRPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRPlayer)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class HandPlacedDashboardHelper;
}
namespace VROSC {
struct HandType;
}
namespace VROSC {
class HighlightControllerComponentsManager;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class InputSettings;
}
namespace VROSC {
class ScreenFade;
}
namespace VROSC {
class TutorialInputDeviceManager;
}
namespace VROSC {
class UIHelpers;
}
namespace VROSC {
struct VRPlayer_ControllerType;
}
namespace VROSC {
class VRPlayer_OverrideControllerPrefab;
}
// Forward declare root types
namespace VROSC {
struct VRPlayer_ControllerType;
}
namespace VROSC {
class VRPlayer;
}
namespace VROSC {
class VRPlayer_OverrideControllerPrefab;
}
// Write type traits
MARK_VAL_T(::VROSC::VRPlayer_ControllerType);
MARK_REF_PTR_T(::VROSC::VRPlayer);
MARK_REF_PTR_T(::VROSC::VRPlayer_OverrideControllerPrefab);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.VRPlayer/ControllerType
struct CORDL_TYPE VRPlayer_ControllerType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VRPlayer_ControllerType_Unwrapped
enum struct __VRPlayer_ControllerType_Unwrapped : int32_t {
__E_OculusTouch = static_cast<int32_t>(0x0),
__E_ViveWand = static_cast<int32_t>(0x1),
__E_ValveIndex = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VRPlayer_ControllerType_Unwrapped () const noexcept {
return static_cast<__VRPlayer_ControllerType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VRPlayer_ControllerType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VRPlayer_ControllerType(int32_t  value__) noexcept;

/// @brief Field OculusTouch value: I32(0)
static ::VROSC::VRPlayer_ControllerType const OculusTouch;

/// @brief Field ValveIndex value: I32(2)
static ::VROSC::VRPlayer_ControllerType const ValveIndex;

/// @brief Field ViveWand value: I32(1)
static ::VROSC::VRPlayer_ControllerType const ViveWand;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{862};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::VRPlayer_ControllerType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::VRPlayer_ControllerType, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, VROSC.VRPlayer::ControllerType
namespace VROSC {
// Is value type: false
// CS Name: VROSC.VRPlayer/OverrideControllerPrefab
class CORDL_TYPE VRPlayer_OverrideControllerPrefab : public ::System::Object {
public:
// Declarations
/// @brief Field controllerType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_controllerType, put=__cordl_internal_set_controllerType)) ::VROSC::VRPlayer_ControllerType  controllerType;

/// @brief Field leftPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftPrefab, put=__cordl_internal_set_leftPrefab)) ::UnityW<::VROSC::InputDevice>  leftPrefab;

/// @brief Field name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field rightPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightPrefab, put=__cordl_internal_set_rightPrefab)) ::UnityW<::VROSC::InputDevice>  rightPrefab;

static inline ::VROSC::VRPlayer_OverrideControllerPrefab* New_ctor() ;

constexpr ::VROSC::VRPlayer_ControllerType const& __cordl_internal_get_controllerType() const;

constexpr ::VROSC::VRPlayer_ControllerType& __cordl_internal_get_controllerType() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get_leftPrefab() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get_leftPrefab() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get_rightPrefab() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get_rightPrefab() ;

constexpr void __cordl_internal_set_controllerType(::VROSC::VRPlayer_ControllerType  value) ;

constexpr void __cordl_internal_set_leftPrefab(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_rightPrefab(::UnityW<::VROSC::InputDevice>  value) ;

/// @brief Method .ctor, addr 0x1708a78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRPlayer_OverrideControllerPrefab() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRPlayer_OverrideControllerPrefab", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VRPlayer_OverrideControllerPrefab(VRPlayer_OverrideControllerPrefab && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRPlayer_OverrideControllerPrefab", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRPlayer_OverrideControllerPrefab(VRPlayer_OverrideControllerPrefab const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{863};

/// @brief Field controllerType, offset: 0x10, size: 0x4, def value: None
 ::VROSC::VRPlayer_ControllerType  ___controllerType;

/// @brief Field name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field leftPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ___leftPrefab;

/// @brief Field rightPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ___rightPrefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::VRPlayer_OverrideControllerPrefab, ___controllerType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::VRPlayer_OverrideControllerPrefab, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::VRPlayer_OverrideControllerPrefab, ___leftPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::VRPlayer_OverrideControllerPrefab, ___rightPrefab) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::VRPlayer_OverrideControllerPrefab, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, VROSC.VRPlayer::ControllerType
namespace VROSC {
// Is value type: false
// CS Name: VROSC.VRPlayer
class CORDL_TYPE VRPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ControllerType = ::VROSC::VRPlayer_ControllerType;

using OverrideControllerPrefab = ::VROSC::VRPlayer_OverrideControllerPrefab;

 __declspec(property(get=get_Camera)) ::UnityW<::UnityEngine::Camera>  Camera;

 __declspec(property(get=get_Controllers, put=set_Controllers)) ::VROSC::VRPlayer_ControllerType  Controllers;

 __declspec(property(get=get_HandPlacedDashboardHelper)) ::UnityW<::VROSC::HandPlacedDashboardHelper>  HandPlacedDashboardHelper;

 __declspec(property(get=get_Highlighting)) ::UnityW<::VROSC::HighlightControllerComponentsManager>  Highlighting;

 __declspec(property(get=get_InputDevices, put=set_InputDevices)) ::System::Collections::Generic::Dictionary_2<::VROSC::HandType,::UnityW<::VROSC::InputDevice>>*  InputDevices;

 __declspec(property(get=get_IsDebugPlayer)) bool  IsDebugPlayer;

 __declspec(property(get=get_KeyboardAnchor)) ::UnityW<::UnityEngine::Transform>  KeyboardAnchor;

 __declspec(property(get=get_Left)) ::UnityW<::VROSC::InputDevice>  Left;

 __declspec(property(get=get_Right)) ::UnityW<::VROSC::InputDevice>  Right;

 __declspec(property(get=get_ScreenFade)) ::UnityW<::VROSC::ScreenFade>  ScreenFade;

 __declspec(property(get=get_TutorialInputDevices)) ::UnityW<::VROSC::TutorialInputDeviceManager>  TutorialInputDevices;

/// @brief Field <Controllers>k__BackingField, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__Controllers_k__BackingField, put=__cordl_internal_set__Controllers_k__BackingField)) ::VROSC::VRPlayer_ControllerType  _Controllers_k__BackingField;

/// @brief Field <InputDevices>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__InputDevices_k__BackingField, put=__cordl_internal_set__InputDevices_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::VROSC::HandType,::UnityW<::VROSC::InputDevice>>*  _InputDevices_k__BackingField;

/// @brief Field _camera, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__camera, put=__cordl_internal_set__camera)) ::UnityW<::UnityEngine::Camera>  _camera;

/// @brief Field _connectedControllerName, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__connectedControllerName, put=__cordl_internal_set__connectedControllerName)) ::StringW  _connectedControllerName;

/// @brief Field _handPlacedDashboardHelper, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__handPlacedDashboardHelper, put=__cordl_internal_set__handPlacedDashboardHelper)) ::UnityW<::VROSC::HandPlacedDashboardHelper>  _handPlacedDashboardHelper;

/// @brief Field _highlighting, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__highlighting, put=__cordl_internal_set__highlighting)) ::UnityW<::VROSC::HighlightControllerComponentsManager>  _highlighting;

/// @brief Field _isDebugPlayer, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDebugPlayer, put=__cordl_internal_set__isDebugPlayer)) bool  _isDebugPlayer;

/// @brief Field _keyboardAnchor, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__keyboardAnchor, put=__cordl_internal_set__keyboardAnchor)) ::UnityW<::UnityEngine::Transform>  _keyboardAnchor;

/// @brief Field _left, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__left, put=__cordl_internal_set__left)) ::UnityW<::VROSC::InputDevice>  _left;

/// @brief Field _leftControllerParent, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftControllerParent, put=__cordl_internal_set__leftControllerParent)) ::UnityW<::UnityEngine::Transform>  _leftControllerParent;

/// @brief Field _leftControllerPrefab, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftControllerPrefab, put=__cordl_internal_set__leftControllerPrefab)) ::UnityW<::VROSC::InputDevice>  _leftControllerPrefab;

/// @brief Field _leftUIHelpers, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftUIHelpers, put=__cordl_internal_set__leftUIHelpers)) ::UnityW<::VROSC::UIHelpers>  _leftUIHelpers;

/// @brief Field _overrideControllerPrefabs, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__overrideControllerPrefabs, put=__cordl_internal_set__overrideControllerPrefabs)) ::ArrayW<::VROSC::VRPlayer_OverrideControllerPrefab*,::Array<::VROSC::VRPlayer_OverrideControllerPrefab*>*>  _overrideControllerPrefabs;

/// @brief Field _right, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__right, put=__cordl_internal_set__right)) ::UnityW<::VROSC::InputDevice>  _right;

/// @brief Field _rightControllerParent, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightControllerParent, put=__cordl_internal_set__rightControllerParent)) ::UnityW<::UnityEngine::Transform>  _rightControllerParent;

/// @brief Field _rightControllerPrefab, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightControllerPrefab, put=__cordl_internal_set__rightControllerPrefab)) ::UnityW<::VROSC::InputDevice>  _rightControllerPrefab;

/// @brief Field _rightUIHelpers, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightUIHelpers, put=__cordl_internal_set__rightUIHelpers)) ::UnityW<::VROSC::UIHelpers>  _rightUIHelpers;

/// @brief Field _screenFade, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__screenFade, put=__cordl_internal_set__screenFade)) ::UnityW<::VROSC::ScreenFade>  _screenFade;

/// @brief Field _tutorialInputDeviceManager, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__tutorialInputDeviceManager, put=__cordl_internal_set__tutorialInputDeviceManager)) ::UnityW<::VROSC::TutorialInputDeviceManager>  _tutorialInputDeviceManager;

/// @brief Method Awake, addr 0x1708384, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ForceLightFrame, addr 0x1708648, size 0x16c, virtual false, abstract: false, final false
inline void ForceLightFrame() ;

/// @brief Method GetControllerByHand, addr 0x1708974, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::InputDevice> GetControllerByHand(bool  right) ;

/// @brief Method GetMouthPosition, addr 0x170898c, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetMouthPosition() ;

/// @brief Method MuteFrames, addr 0x17087b4, size 0x180, virtual false, abstract: false, final false
inline void MuteFrames(bool  fade) ;

static inline ::VROSC::VRPlayer* New_ctor() ;

/// @brief Method Setup, addr 0x1708388, size 0x2c0, virtual false, abstract: false, final false
inline void Setup(::VROSC::InputSettings*  inputSettings) ;

/// @brief Method ShowControllers, addr 0x1708a14, size 0x5c, virtual false, abstract: false, final false
inline void ShowControllers(bool  show) ;

/// @brief Method UpdateInput, addr 0x1708934, size 0x40, virtual false, abstract: false, final false
inline void UpdateInput() ;

constexpr ::VROSC::VRPlayer_ControllerType const& __cordl_internal_get__Controllers_k__BackingField() const;

constexpr ::VROSC::VRPlayer_ControllerType& __cordl_internal_get__Controllers_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::VROSC::HandType,::UnityW<::VROSC::InputDevice>>* const& __cordl_internal_get__InputDevices_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::VROSC::HandType,::UnityW<::VROSC::InputDevice>>*& __cordl_internal_get__InputDevices_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera() ;

constexpr ::StringW const& __cordl_internal_get__connectedControllerName() const;

constexpr ::StringW& __cordl_internal_get__connectedControllerName() ;

constexpr ::UnityW<::VROSC::HandPlacedDashboardHelper> const& __cordl_internal_get__handPlacedDashboardHelper() const;

constexpr ::UnityW<::VROSC::HandPlacedDashboardHelper>& __cordl_internal_get__handPlacedDashboardHelper() ;

constexpr ::UnityW<::VROSC::HighlightControllerComponentsManager> const& __cordl_internal_get__highlighting() const;

constexpr ::UnityW<::VROSC::HighlightControllerComponentsManager>& __cordl_internal_get__highlighting() ;

constexpr bool const& __cordl_internal_get__isDebugPlayer() const;

constexpr bool& __cordl_internal_get__isDebugPlayer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__keyboardAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__keyboardAnchor() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__left() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__left() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__leftControllerParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__leftControllerParent() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__leftControllerPrefab() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__leftControllerPrefab() ;

constexpr ::UnityW<::VROSC::UIHelpers> const& __cordl_internal_get__leftUIHelpers() const;

constexpr ::UnityW<::VROSC::UIHelpers>& __cordl_internal_get__leftUIHelpers() ;

constexpr ::ArrayW<::VROSC::VRPlayer_OverrideControllerPrefab*,::Array<::VROSC::VRPlayer_OverrideControllerPrefab*>*> const& __cordl_internal_get__overrideControllerPrefabs() const;

constexpr ::ArrayW<::VROSC::VRPlayer_OverrideControllerPrefab*,::Array<::VROSC::VRPlayer_OverrideControllerPrefab*>*>& __cordl_internal_get__overrideControllerPrefabs() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__right() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__right() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rightControllerParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rightControllerParent() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__rightControllerPrefab() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__rightControllerPrefab() ;

constexpr ::UnityW<::VROSC::UIHelpers> const& __cordl_internal_get__rightUIHelpers() const;

constexpr ::UnityW<::VROSC::UIHelpers>& __cordl_internal_get__rightUIHelpers() ;

constexpr ::UnityW<::VROSC::ScreenFade> const& __cordl_internal_get__screenFade() const;

constexpr ::UnityW<::VROSC::ScreenFade>& __cordl_internal_get__screenFade() ;

constexpr ::UnityW<::VROSC::TutorialInputDeviceManager> const& __cordl_internal_get__tutorialInputDeviceManager() const;

constexpr ::UnityW<::VROSC::TutorialInputDeviceManager>& __cordl_internal_get__tutorialInputDeviceManager() ;

constexpr void __cordl_internal_set__Controllers_k__BackingField(::VROSC::VRPlayer_ControllerType  value) ;

constexpr void __cordl_internal_set__InputDevices_k__BackingField(::System::Collections::Generic::Dictionary_2<::VROSC::HandType,::UnityW<::VROSC::InputDevice>>*  value) ;

constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__connectedControllerName(::StringW  value) ;

constexpr void __cordl_internal_set__handPlacedDashboardHelper(::UnityW<::VROSC::HandPlacedDashboardHelper>  value) ;

constexpr void __cordl_internal_set__highlighting(::UnityW<::VROSC::HighlightControllerComponentsManager>  value) ;

constexpr void __cordl_internal_set__isDebugPlayer(bool  value) ;

constexpr void __cordl_internal_set__keyboardAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__left(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__leftControllerParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__leftControllerPrefab(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__leftUIHelpers(::UnityW<::VROSC::UIHelpers>  value) ;

constexpr void __cordl_internal_set__overrideControllerPrefabs(::ArrayW<::VROSC::VRPlayer_OverrideControllerPrefab*,::Array<::VROSC::VRPlayer_OverrideControllerPrefab*>*>  value) ;

constexpr void __cordl_internal_set__right(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__rightControllerParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__rightControllerPrefab(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__rightUIHelpers(::UnityW<::VROSC::UIHelpers>  value) ;

constexpr void __cordl_internal_set__screenFade(::UnityW<::VROSC::ScreenFade>  value) ;

constexpr void __cordl_internal_set__tutorialInputDeviceManager(::UnityW<::VROSC::TutorialInputDeviceManager>  value) ;

/// @brief Method .ctor, addr 0x1708a70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Camera, addr 0x170832c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_Camera() ;

/// @brief Method get_Controllers, addr 0x1708374, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::VRPlayer_ControllerType get_Controllers() ;

/// @brief Method get_HandPlacedDashboardHelper, addr 0x170834c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::HandPlacedDashboardHelper> get_HandPlacedDashboardHelper() ;

/// @brief Method get_Highlighting, addr 0x170833c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::HighlightControllerComponentsManager> get_Highlighting() ;

/// @brief Method get_InputDevices, addr 0x1708364, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::VROSC::HandType,::UnityW<::VROSC::InputDevice>>* get_InputDevices() ;

/// @brief Method get_IsDebugPlayer, addr 0x1708354, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDebugPlayer() ;

/// @brief Method get_KeyboardAnchor, addr 0x170835c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_KeyboardAnchor() ;

/// @brief Method get_Left, addr 0x1708324, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::InputDevice> get_Left() ;

/// @brief Method get_Right, addr 0x170831c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::InputDevice> get_Right() ;

/// @brief Method get_ScreenFade, addr 0x1708334, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::ScreenFade> get_ScreenFade() ;

/// @brief Method get_TutorialInputDevices, addr 0x1708344, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::TutorialInputDeviceManager> get_TutorialInputDevices() ;

/// @brief Method set_Controllers, addr 0x170837c, size 0x8, virtual false, abstract: false, final false
inline void set_Controllers(::VROSC::VRPlayer_ControllerType  value) ;

/// @brief Method set_InputDevices, addr 0x170836c, size 0x8, virtual false, abstract: false, final false
inline void set_InputDevices(::System::Collections::Generic::Dictionary_2<::VROSC::HandType,::UnityW<::VROSC::InputDevice>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VRPlayer(VRPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRPlayer(VRPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{864};

/// @brief Field _camera, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____camera;

/// @brief Field _screenFade, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::ScreenFade>  ____screenFade;

/// @brief Field _isDebugPlayer, offset: 0x30, size: 0x1, def value: None
 bool  ____isDebugPlayer;

/// @brief Field _right, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____right;

/// @brief Field _left, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____left;

/// @brief Field _keyboardAnchor, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____keyboardAnchor;

/// @brief Field _handPlacedDashboardHelper, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::HandPlacedDashboardHelper>  ____handPlacedDashboardHelper;

/// @brief Field _highlighting, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::HighlightControllerComponentsManager>  ____highlighting;

/// @brief Field _tutorialInputDeviceManager, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::TutorialInputDeviceManager>  ____tutorialInputDeviceManager;

/// @brief Field _leftControllerParent, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____leftControllerParent;

/// @brief Field _rightControllerParent, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____rightControllerParent;

/// @brief Field _leftControllerPrefab, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____leftControllerPrefab;

/// @brief Field _rightControllerPrefab, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____rightControllerPrefab;

/// @brief Field _leftUIHelpers, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::VROSC::UIHelpers>  ____leftUIHelpers;

/// @brief Field _rightUIHelpers, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::VROSC::UIHelpers>  ____rightUIHelpers;

/// @brief Field _overrideControllerPrefabs, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::VROSC::VRPlayer_OverrideControllerPrefab*,::Array<::VROSC::VRPlayer_OverrideControllerPrefab*>*>  ____overrideControllerPrefabs;

/// @brief Field _connectedControllerName, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ____connectedControllerName;

/// @brief Field <InputDevices>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::VROSC::HandType,::UnityW<::VROSC::InputDevice>>*  ____InputDevices_k__BackingField;

/// @brief Field <Controllers>k__BackingField, offset: 0xb0, size: 0x4, def value: None
 ::VROSC::VRPlayer_ControllerType  ____Controllers_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::VRPlayer, ____camera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::VRPlayer, ____screenFade) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::VRPlayer, ____isDebugPlayer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::VRPlayer, ____right) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::VRPlayer, ____left) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::VRPlayer, ____keyboardAnchor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::VRPlayer, ____handPlacedDashboardHelper) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::VRPlayer, ____highlighting) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::VRPlayer, ____tutorialInputDeviceManager) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::VRPlayer, ____leftControllerParent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::VRPlayer, ____rightControllerParent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::VRPlayer, ____leftControllerPrefab) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::VRPlayer, ____rightControllerPrefab) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::VRPlayer, ____leftUIHelpers) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::VRPlayer, ____rightUIHelpers) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::VRPlayer, ____overrideControllerPrefabs) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::VRPlayer, ____connectedControllerName) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::VRPlayer, ____InputDevices_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::VRPlayer, ____Controllers_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::VRPlayer, 0xb8>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::VRPlayer_ControllerType, "VROSC", "VRPlayer/ControllerType");
NEED_NO_BOX(::VROSC::VRPlayer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::VRPlayer*, "VROSC", "VRPlayer");
NEED_NO_BOX(::VROSC::VRPlayer_OverrideControllerPrefab);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::VRPlayer_OverrideControllerPrefab*, "VROSC", "VRPlayer/OverrideControllerPrefab");
