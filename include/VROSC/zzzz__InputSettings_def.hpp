#pragma once
// IWYU pragma private; include "VROSC/InputSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputSettings)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct LayerMask;
}
namespace VROSC::UI {
class IconData;
}
namespace VROSC {
class PointingLaser;
}
namespace VROSC {
class SimpleHaptic;
}
namespace VROSC {
struct TriggerButton;
}
// Forward declare root types
namespace VROSC {
class InputSettings;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InputSettings);
// Dependencies UnityEngine.LayerMask, UnityEngine.ScriptableObject, VROSC.TriggerButton
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InputSettings
class CORDL_TYPE InputSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_ActivationTime)) float_t  ActivationTime;

 __declspec(property(get=get_AttractAnimationCurve)) ::UnityEngine::AnimationCurve*  AttractAnimationCurve;

 __declspec(property(get=get_AttractButton)) ::VROSC::TriggerButton  AttractButton;

 __declspec(property(get=get_AttractDuration)) float_t  AttractDuration;

 __declspec(property(get=get_AttractIcon)) ::UnityW<::VROSC::UI::IconData>  AttractIcon;

 __declspec(property(get=get_GrabIcon)) ::UnityW<::VROSC::UI::IconData>  GrabIcon;

 __declspec(property(get=get_GrabSmoothing)) float_t  GrabSmoothing;

 __declspec(property(get=get_GripOnlyLayerMask)) ::UnityEngine::LayerMask  GripOnlyLayerMask;

 __declspec(property(get=get_IsPinnedHapticWarning)) ::VROSC::SimpleHaptic*  IsPinnedHapticWarning;

 __declspec(property(get=get_IsPinnedHapticWarningDistance)) float_t  IsPinnedHapticWarningDistance;

 __declspec(property(get=get_MaxOverlapColliders)) int32_t  MaxOverlapColliders;

 __declspec(property(get=get_OverlapDistance)) float_t  OverlapDistance;

 __declspec(property(get=get_OverlapLayerMask)) ::UnityEngine::LayerMask  OverlapLayerMask;

 __declspec(property(get=get_PinButton)) ::VROSC::TriggerButton  PinButton;

 __declspec(property(get=get_PinIcon)) ::UnityW<::VROSC::UI::IconData>  PinIcon;

 __declspec(property(get=get_PointerPrefab)) ::UnityW<::VROSC::PointingLaser>  PointerPrefab;

 __declspec(property(get=get_PointingDistance)) float_t  PointingDistance;

 __declspec(property(get=get_PositionSmoothing)) float_t  PositionSmoothing;

 __declspec(property(get=get_RotationSmoothing)) float_t  RotationSmoothing;

 __declspec(property(get=get_UIInteractionMask)) ::UnityEngine::LayerMask  UIInteractionMask;

/// @brief Field _activationTime, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__activationTime, put=__cordl_internal_set__activationTime)) float_t  _activationTime;

/// @brief Field _attractAnimationInCurve, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__attractAnimationInCurve, put=__cordl_internal_set__attractAnimationInCurve)) ::UnityEngine::AnimationCurve*  _attractAnimationInCurve;

/// @brief Field _attractButton, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__attractButton, put=__cordl_internal_set__attractButton)) ::VROSC::TriggerButton  _attractButton;

/// @brief Field _attractIcon, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__attractIcon, put=__cordl_internal_set__attractIcon)) ::UnityW<::VROSC::UI::IconData>  _attractIcon;

/// @brief Field _attractInDuration, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__attractInDuration, put=__cordl_internal_set__attractInDuration)) float_t  _attractInDuration;

/// @brief Field _grabIcon, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabIcon, put=__cordl_internal_set__grabIcon)) ::UnityW<::VROSC::UI::IconData>  _grabIcon;

/// @brief Field _grabSmoothing, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__grabSmoothing, put=__cordl_internal_set__grabSmoothing)) float_t  _grabSmoothing;

/// @brief Field _gripOnlyLayerMask, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__gripOnlyLayerMask, put=__cordl_internal_set__gripOnlyLayerMask)) ::UnityEngine::LayerMask  _gripOnlyLayerMask;

/// @brief Field _isPinnedHapticWarning, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__isPinnedHapticWarning, put=__cordl_internal_set__isPinnedHapticWarning)) ::VROSC::SimpleHaptic*  _isPinnedHapticWarning;

/// @brief Field _isPinnedHapticWarningDistance, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__isPinnedHapticWarningDistance, put=__cordl_internal_set__isPinnedHapticWarningDistance)) float_t  _isPinnedHapticWarningDistance;

/// @brief Field _maxOverlapColliders, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxOverlapColliders, put=__cordl_internal_set__maxOverlapColliders)) int32_t  _maxOverlapColliders;

/// @brief Field _overlapDistance, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__overlapDistance, put=__cordl_internal_set__overlapDistance)) float_t  _overlapDistance;

/// @brief Field _overlapLayerMask, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__overlapLayerMask, put=__cordl_internal_set__overlapLayerMask)) ::UnityEngine::LayerMask  _overlapLayerMask;

/// @brief Field _pinButton, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__pinButton, put=__cordl_internal_set__pinButton)) ::VROSC::TriggerButton  _pinButton;

/// @brief Field _pinIcon, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__pinIcon, put=__cordl_internal_set__pinIcon)) ::UnityW<::VROSC::UI::IconData>  _pinIcon;

/// @brief Field _pointerPrefab, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointerPrefab, put=__cordl_internal_set__pointerPrefab)) ::UnityW<::VROSC::PointingLaser>  _pointerPrefab;

/// @brief Field _pointingDistance, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__pointingDistance, put=__cordl_internal_set__pointingDistance)) float_t  _pointingDistance;

/// @brief Field _positionSmoothing, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__positionSmoothing, put=__cordl_internal_set__positionSmoothing)) float_t  _positionSmoothing;

/// @brief Field _rotationSmoothing, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotationSmoothing, put=__cordl_internal_set__rotationSmoothing)) float_t  _rotationSmoothing;

/// @brief Field _uiInteractionMask, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__uiInteractionMask, put=__cordl_internal_set__uiInteractionMask)) ::UnityEngine::LayerMask  _uiInteractionMask;

static inline ::VROSC::InputSettings* New_ctor() ;

constexpr float_t const& __cordl_internal_get__activationTime() const;

constexpr float_t& __cordl_internal_get__activationTime() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__attractAnimationInCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__attractAnimationInCurve() ;

constexpr ::VROSC::TriggerButton const& __cordl_internal_get__attractButton() const;

constexpr ::VROSC::TriggerButton& __cordl_internal_get__attractButton() ;

constexpr ::UnityW<::VROSC::UI::IconData> const& __cordl_internal_get__attractIcon() const;

constexpr ::UnityW<::VROSC::UI::IconData>& __cordl_internal_get__attractIcon() ;

constexpr float_t const& __cordl_internal_get__attractInDuration() const;

constexpr float_t& __cordl_internal_get__attractInDuration() ;

constexpr ::UnityW<::VROSC::UI::IconData> const& __cordl_internal_get__grabIcon() const;

constexpr ::UnityW<::VROSC::UI::IconData>& __cordl_internal_get__grabIcon() ;

constexpr float_t const& __cordl_internal_get__grabSmoothing() const;

constexpr float_t& __cordl_internal_get__grabSmoothing() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__gripOnlyLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__gripOnlyLayerMask() ;

constexpr ::VROSC::SimpleHaptic* const& __cordl_internal_get__isPinnedHapticWarning() const;

constexpr ::VROSC::SimpleHaptic*& __cordl_internal_get__isPinnedHapticWarning() ;

constexpr float_t const& __cordl_internal_get__isPinnedHapticWarningDistance() const;

constexpr float_t& __cordl_internal_get__isPinnedHapticWarningDistance() ;

constexpr int32_t const& __cordl_internal_get__maxOverlapColliders() const;

constexpr int32_t& __cordl_internal_get__maxOverlapColliders() ;

constexpr float_t const& __cordl_internal_get__overlapDistance() const;

constexpr float_t& __cordl_internal_get__overlapDistance() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__overlapLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__overlapLayerMask() ;

constexpr ::VROSC::TriggerButton const& __cordl_internal_get__pinButton() const;

constexpr ::VROSC::TriggerButton& __cordl_internal_get__pinButton() ;

constexpr ::UnityW<::VROSC::UI::IconData> const& __cordl_internal_get__pinIcon() const;

constexpr ::UnityW<::VROSC::UI::IconData>& __cordl_internal_get__pinIcon() ;

constexpr ::UnityW<::VROSC::PointingLaser> const& __cordl_internal_get__pointerPrefab() const;

constexpr ::UnityW<::VROSC::PointingLaser>& __cordl_internal_get__pointerPrefab() ;

constexpr float_t const& __cordl_internal_get__pointingDistance() const;

constexpr float_t& __cordl_internal_get__pointingDistance() ;

constexpr float_t const& __cordl_internal_get__positionSmoothing() const;

constexpr float_t& __cordl_internal_get__positionSmoothing() ;

constexpr float_t const& __cordl_internal_get__rotationSmoothing() const;

constexpr float_t& __cordl_internal_get__rotationSmoothing() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__uiInteractionMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__uiInteractionMask() ;

constexpr void __cordl_internal_set__activationTime(float_t  value) ;

constexpr void __cordl_internal_set__attractAnimationInCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__attractButton(::VROSC::TriggerButton  value) ;

constexpr void __cordl_internal_set__attractIcon(::UnityW<::VROSC::UI::IconData>  value) ;

constexpr void __cordl_internal_set__attractInDuration(float_t  value) ;

constexpr void __cordl_internal_set__grabIcon(::UnityW<::VROSC::UI::IconData>  value) ;

constexpr void __cordl_internal_set__grabSmoothing(float_t  value) ;

constexpr void __cordl_internal_set__gripOnlyLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__isPinnedHapticWarning(::VROSC::SimpleHaptic*  value) ;

constexpr void __cordl_internal_set__isPinnedHapticWarningDistance(float_t  value) ;

constexpr void __cordl_internal_set__maxOverlapColliders(int32_t  value) ;

constexpr void __cordl_internal_set__overlapDistance(float_t  value) ;

constexpr void __cordl_internal_set__overlapLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__pinButton(::VROSC::TriggerButton  value) ;

constexpr void __cordl_internal_set__pinIcon(::UnityW<::VROSC::UI::IconData>  value) ;

constexpr void __cordl_internal_set__pointerPrefab(::UnityW<::VROSC::PointingLaser>  value) ;

constexpr void __cordl_internal_set__pointingDistance(float_t  value) ;

constexpr void __cordl_internal_set__positionSmoothing(float_t  value) ;

constexpr void __cordl_internal_set__rotationSmoothing(float_t  value) ;

constexpr void __cordl_internal_set__uiInteractionMask(::UnityEngine::LayerMask  value) ;

/// @brief Method .ctor, addr 0x188fb6c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActivationTime, addr 0x188fb58, size 0x14, virtual false, abstract: false, final false
inline float_t get_ActivationTime() ;

/// @brief Method get_AttractAnimationCurve, addr 0x188fb28, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_AttractAnimationCurve() ;

/// @brief Method get_AttractButton, addr 0x188fb10, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::TriggerButton get_AttractButton() ;

/// @brief Method get_AttractDuration, addr 0x188fb20, size 0x8, virtual false, abstract: false, final false
inline float_t get_AttractDuration() ;

/// @brief Method get_AttractIcon, addr 0x188fb50, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UI::IconData> get_AttractIcon() ;

/// @brief Method get_GrabIcon, addr 0x188fb48, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UI::IconData> get_GrabIcon() ;

/// @brief Method get_GrabSmoothing, addr 0x188fae8, size 0x8, virtual false, abstract: false, final false
inline float_t get_GrabSmoothing() ;

/// @brief Method get_GripOnlyLayerMask, addr 0x188fb08, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_GripOnlyLayerMask() ;

/// @brief Method get_IsPinnedHapticWarning, addr 0x188fb38, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::SimpleHaptic* get_IsPinnedHapticWarning() ;

/// @brief Method get_IsPinnedHapticWarningDistance, addr 0x188fb30, size 0x8, virtual false, abstract: false, final false
inline float_t get_IsPinnedHapticWarningDistance() ;

/// @brief Method get_MaxOverlapColliders, addr 0x188fad8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxOverlapColliders() ;

/// @brief Method get_OverlapDistance, addr 0x188fad0, size 0x8, virtual false, abstract: false, final false
inline float_t get_OverlapDistance() ;

/// @brief Method get_OverlapLayerMask, addr 0x188fb00, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_OverlapLayerMask() ;

/// @brief Method get_PinButton, addr 0x188fb18, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::TriggerButton get_PinButton() ;

/// @brief Method get_PinIcon, addr 0x188fb40, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UI::IconData> get_PinIcon() ;

/// @brief Method get_PointerPrefab, addr 0x188fac0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::PointingLaser> get_PointerPrefab() ;

/// @brief Method get_PointingDistance, addr 0x188fac8, size 0x8, virtual false, abstract: false, final false
inline float_t get_PointingDistance() ;

/// @brief Method get_PositionSmoothing, addr 0x188fae0, size 0x8, virtual false, abstract: false, final false
inline float_t get_PositionSmoothing() ;

/// @brief Method get_RotationSmoothing, addr 0x188faf0, size 0x8, virtual false, abstract: false, final false
inline float_t get_RotationSmoothing() ;

/// @brief Method get_UIInteractionMask, addr 0x188faf8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_UIInteractionMask() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputSettings(InputSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputSettings(InputSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{625};

/// @brief Field _pointerPrefab, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::PointingLaser>  ____pointerPrefab;

/// @brief Field _pointingDistance, offset: 0x20, size: 0x4, def value: None
 float_t  ____pointingDistance;

/// @brief Field _overlapDistance, offset: 0x24, size: 0x4, def value: None
 float_t  ____overlapDistance;

/// @brief Field _maxOverlapColliders, offset: 0x28, size: 0x4, def value: None
 int32_t  ____maxOverlapColliders;

/// @brief Field _positionSmoothing, offset: 0x2c, size: 0x4, def value: None
 float_t  ____positionSmoothing;

/// @brief Field _grabSmoothing, offset: 0x30, size: 0x4, def value: None
 float_t  ____grabSmoothing;

/// @brief Field _rotationSmoothing, offset: 0x34, size: 0x4, def value: None
 float_t  ____rotationSmoothing;

/// @brief Field _uiInteractionMask, offset: 0x38, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____uiInteractionMask;

/// @brief Field _overlapLayerMask, offset: 0x3c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____overlapLayerMask;

/// @brief Field _gripOnlyLayerMask, offset: 0x40, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____gripOnlyLayerMask;

/// @brief Field _pinButton, offset: 0x44, size: 0x4, def value: None
 ::VROSC::TriggerButton  ____pinButton;

/// @brief Field _attractButton, offset: 0x48, size: 0x4, def value: None
 ::VROSC::TriggerButton  ____attractButton;

/// @brief Field _attractInDuration, offset: 0x4c, size: 0x4, def value: None
 float_t  ____attractInDuration;

/// @brief Field _attractAnimationInCurve, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____attractAnimationInCurve;

/// @brief Field _isPinnedHapticWarningDistance, offset: 0x58, size: 0x4, def value: None
 float_t  ____isPinnedHapticWarningDistance;

/// @brief Field _isPinnedHapticWarning, offset: 0x60, size: 0x8, def value: None
 ::VROSC::SimpleHaptic*  ____isPinnedHapticWarning;

/// @brief Field _activationTime, offset: 0x68, size: 0x4, def value: None
 float_t  ____activationTime;

/// @brief Field _pinIcon, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::IconData>  ____pinIcon;

/// @brief Field _grabIcon, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::IconData>  ____grabIcon;

/// @brief Field _attractIcon, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::IconData>  ____attractIcon;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InputSettings, ____pointerPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputSettings, ____pointingDistance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputSettings, ____overlapDistance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputSettings, ____maxOverlapColliders) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputSettings, ____positionSmoothing) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputSettings, ____grabSmoothing) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputSettings, ____rotationSmoothing) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputSettings, ____uiInteractionMask) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputSettings, ____overlapLayerMask) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputSettings, ____gripOnlyLayerMask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputSettings, ____pinButton) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputSettings, ____attractButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputSettings, ____attractInDuration) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputSettings, ____attractAnimationInCurve) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputSettings, ____isPinnedHapticWarningDistance) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputSettings, ____isPinnedHapticWarning) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputSettings, ____activationTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputSettings, ____pinIcon) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputSettings, ____grabIcon) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputSettings, ____attractIcon) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InputSettings, 0x88>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InputSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InputSettings*, "VROSC", "InputSettings");
