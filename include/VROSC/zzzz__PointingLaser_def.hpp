#pragma once
// IWYU pragma private; include "VROSC/PointingLaser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointingLaser)
namespace GlobalNamespace {
class Environment;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct GradientAlphaKey;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
struct Vector3;
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
class SmoothMovement;
}
// Forward declare root types
namespace VROSC {
struct PointingLaser_DisablingReason;
}
namespace VROSC {
class PointingLaser;
}
// Write type traits
MARK_VAL_T(::VROSC::PointingLaser_DisablingReason);
MARK_REF_PTR_T(::VROSC::PointingLaser);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.PointingLaser/DisablingReason
struct CORDL_TYPE PointingLaser_DisablingReason {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PointingLaser_DisablingReason_Unwrapped
enum struct __PointingLaser_DisablingReason_Unwrapped : int32_t {
__E_GrabbingObject = static_cast<int32_t>(0x0),
__E_PressingObject = static_cast<int32_t>(0x1),
__E_HoveringObject = static_cast<int32_t>(0x2),
__E_HoveringObjectDisablesPointing = static_cast<int32_t>(0x3),
__E_DashboardOpen = static_cast<int32_t>(0x4),
__E_InsideInstrument = static_cast<int32_t>(0x5),
__E_UsingUIHelper = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PointingLaser_DisablingReason_Unwrapped () const noexcept {
return static_cast<__PointingLaser_DisablingReason_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PointingLaser_DisablingReason() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PointingLaser_DisablingReason(int32_t  value__) noexcept;

/// @brief Field DashboardOpen value: I32(4)
static ::VROSC::PointingLaser_DisablingReason const DashboardOpen;

/// @brief Field GrabbingObject value: I32(0)
static ::VROSC::PointingLaser_DisablingReason const GrabbingObject;

/// @brief Field HoveringObject value: I32(2)
static ::VROSC::PointingLaser_DisablingReason const HoveringObject;

/// @brief Field HoveringObjectDisablesPointing value: I32(3)
static ::VROSC::PointingLaser_DisablingReason const HoveringObjectDisablesPointing;

/// @brief Field InsideInstrument value: I32(5)
static ::VROSC::PointingLaser_DisablingReason const InsideInstrument;

/// @brief Field PressingObject value: I32(1)
static ::VROSC::PointingLaser_DisablingReason const PressingObject;

/// @brief Field UsingUIHelper value: I32(6)
static ::VROSC::PointingLaser_DisablingReason const UsingUIHelper;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1465};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PointingLaser_DisablingReason, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PointingLaser_DisablingReason, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PointingLaser
class CORDL_TYPE PointingLaser : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DisablingReason = ::VROSC::PointingLaser_DisablingReason;

 __declspec(property(get=get_Dimmed, put=set_Dimmed)) bool  Dimmed;

/// @brief Field OnPointingDisabledChanged, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPointingDisabledChanged, put=__cordl_internal_set_OnPointingDisabledChanged)) ::System::Action_2<bool,::VROSC::PointingLaser_DisablingReason>*  OnPointingDisabledChanged;

 __declspec(property(get=get_PointingDisabled, put=set_PointingDisabled)) bool  PointingDisabled;

/// @brief Field <Dimmed>k__BackingField, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__Dimmed_k__BackingField, put=__cordl_internal_set__Dimmed_k__BackingField)) bool  _Dimmed_k__BackingField;

/// @brief Field <PointingDisabled>k__BackingField, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__PointingDisabled_k__BackingField, put=__cordl_internal_set__PointingDisabled_k__BackingField)) bool  _PointingDisabled_k__BackingField;

/// @brief Field _device, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__device, put=__cordl_internal_set__device)) ::UnityW<::VROSC::InputDevice>  _device;

/// @brief Field _dimGradient, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__dimGradient, put=__cordl_internal_set__dimGradient)) ::UnityEngine::Gradient*  _dimGradient;

/// @brief Field _disablingReasons, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__disablingReasons, put=__cordl_internal_set__disablingReasons)) ::System::Collections::Generic::List_1<::VROSC::PointingLaser_DisablingReason>*  _disablingReasons;

/// @brief Field _endDot, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__endDot, put=__cordl_internal_set__endDot)) ::UnityW<::UnityEngine::GameObject>  _endDot;

/// @brief Field _fadeTime, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeTime, put=__cordl_internal_set__fadeTime)) float_t  _fadeTime;

/// @brief Field _fadingGradient, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__fadingGradient, put=__cordl_internal_set__fadingGradient)) ::UnityEngine::Gradient*  _fadingGradient;

/// @brief Field _fadingTimer, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadingTimer, put=__cordl_internal_set__fadingTimer)) float_t  _fadingTimer;

/// @brief Field _laser, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__laser, put=__cordl_internal_set__laser)) ::UnityW<::UnityEngine::LineRenderer>  _laser;

/// @brief Field _laserPositions, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__laserPositions, put=__cordl_internal_set__laserPositions)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _laserPositions;

/// @brief Field _normalGradient, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__normalGradient, put=__cordl_internal_set__normalGradient)) ::UnityEngine::Gradient*  _normalGradient;

/// @brief Field _settings, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::UnityW<::VROSC::InputSettings>  _settings;

/// @brief Field _smoothMovement, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__smoothMovement, put=__cordl_internal_set__smoothMovement)) ::VROSC::SmoothMovement*  _smoothMovement;

/// @brief Method EnvironmentLoaded, addr 0x17b90e0, size 0x4c, virtual false, abstract: false, final false
inline void EnvironmentLoaded(::GlobalNamespace::Environment*  environment) ;

/// @brief Method HideInSpectatorMode, addr 0x17b9528, size 0x68, virtual false, abstract: false, final false
inline void HideInSpectatorMode(bool  hideLasers) ;

/// @brief Method LerpAlphaKey, addr 0x17b9408, size 0x120, virtual false, abstract: false, final false
inline ::UnityEngine::GradientAlphaKey LerpAlphaKey(::UnityEngine::Gradient*  a, ::UnityEngine::Gradient*  b, int32_t  key, float_t  value) ;

static inline ::VROSC::PointingLaser* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17b8fe8, size 0xf8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetDimmed, addr 0x17b9230, size 0xa0, virtual false, abstract: false, final false
inline void SetDimmed(bool  dimmed) ;

/// @brief Method SetDotPosition, addr 0x17b912c, size 0x104, virtual false, abstract: false, final false
inline void SetDotPosition(::UnityEngine::Vector3  position) ;

/// @brief Method SetPointingDisabled, addr 0x17b8bbc, size 0x138, virtual false, abstract: false, final false
inline void SetPointingDisabled(bool  disabled, ::VROSC::PointingLaser_DisablingReason  reason) ;

/// @brief Method Setup, addr 0x17b8dd4, size 0x214, virtual false, abstract: false, final false
inline void Setup(::VROSC::InputDevice*  controller, ::VROSC::InputSettings*  settings) ;

/// @brief Method Update, addr 0x17b92d0, size 0x138, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdatePointingDisabled, addr 0x17b8cf4, size 0xe0, virtual false, abstract: false, final false
inline void UpdatePointingDisabled(bool  disabled, ::VROSC::PointingLaser_DisablingReason  reason) ;

constexpr ::System::Action_2<bool,::VROSC::PointingLaser_DisablingReason>* const& __cordl_internal_get_OnPointingDisabledChanged() const;

constexpr ::System::Action_2<bool,::VROSC::PointingLaser_DisablingReason>*& __cordl_internal_get_OnPointingDisabledChanged() ;

constexpr bool const& __cordl_internal_get__Dimmed_k__BackingField() const;

constexpr bool& __cordl_internal_get__Dimmed_k__BackingField() ;

constexpr bool const& __cordl_internal_get__PointingDisabled_k__BackingField() const;

constexpr bool& __cordl_internal_get__PointingDisabled_k__BackingField() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__device() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__device() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get__dimGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get__dimGradient() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::PointingLaser_DisablingReason>* const& __cordl_internal_get__disablingReasons() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::PointingLaser_DisablingReason>*& __cordl_internal_get__disablingReasons() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__endDot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__endDot() ;

constexpr float_t const& __cordl_internal_get__fadeTime() const;

constexpr float_t& __cordl_internal_get__fadeTime() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get__fadingGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get__fadingGradient() ;

constexpr float_t const& __cordl_internal_get__fadingTimer() const;

constexpr float_t& __cordl_internal_get__fadingTimer() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get__laser() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get__laser() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__laserPositions() const;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__laserPositions() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get__normalGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get__normalGradient() ;

constexpr ::UnityW<::VROSC::InputSettings> const& __cordl_internal_get__settings() const;

constexpr ::UnityW<::VROSC::InputSettings>& __cordl_internal_get__settings() ;

constexpr ::VROSC::SmoothMovement* const& __cordl_internal_get__smoothMovement() const;

constexpr ::VROSC::SmoothMovement*& __cordl_internal_get__smoothMovement() ;

constexpr void __cordl_internal_set_OnPointingDisabledChanged(::System::Action_2<bool,::VROSC::PointingLaser_DisablingReason>*  value) ;

constexpr void __cordl_internal_set__Dimmed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__PointingDisabled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__device(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__dimGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set__disablingReasons(::System::Collections::Generic::List_1<::VROSC::PointingLaser_DisablingReason>*  value) ;

constexpr void __cordl_internal_set__endDot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__fadeTime(float_t  value) ;

constexpr void __cordl_internal_set__fadingGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set__fadingTimer(float_t  value) ;

constexpr void __cordl_internal_set__laser(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set__laserPositions(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr void __cordl_internal_set__normalGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set__settings(::UnityW<::VROSC::InputSettings>  value) ;

constexpr void __cordl_internal_set__smoothMovement(::VROSC::SmoothMovement*  value) ;

/// @brief Method .ctor, addr 0x17b9590, size 0xd4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Dimmed, addr 0x17b8ba8, size 0x8, virtual false, abstract: false, final false
inline bool get_Dimmed() ;

/// @brief Method get_PointingDisabled, addr 0x17b8b94, size 0x8, virtual false, abstract: false, final false
inline bool get_PointingDisabled() ;

/// @brief Method set_Dimmed, addr 0x17b8bb0, size 0xc, virtual false, abstract: false, final false
inline void set_Dimmed(bool  value) ;

/// @brief Method set_PointingDisabled, addr 0x17b8b9c, size 0xc, virtual false, abstract: false, final false
inline void set_PointingDisabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointingLaser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointingLaser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PointingLaser(PointingLaser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointingLaser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointingLaser(PointingLaser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1466};

/// @brief Field _endDot, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____endDot;

/// @brief Field _laser, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ____laser;

/// @brief Field _smoothMovement, offset: 0x30, size: 0x8, def value: None
 ::VROSC::SmoothMovement*  ____smoothMovement;

/// @brief Field _device, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____device;

/// @brief Field _settings, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::InputSettings>  ____settings;

/// @brief Field _disablingReasons, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::PointingLaser_DisablingReason>*  ____disablingReasons;

/// @brief Field OnPointingDisabledChanged, offset: 0x50, size: 0x8, def value: None
 ::System::Action_2<bool,::VROSC::PointingLaser_DisablingReason>*  ___OnPointingDisabledChanged;

/// @brief Field <PointingDisabled>k__BackingField, offset: 0x58, size: 0x1, def value: None
 bool  ____PointingDisabled_k__BackingField;

/// @brief Field <Dimmed>k__BackingField, offset: 0x59, size: 0x1, def value: None
 bool  ____Dimmed_k__BackingField;

/// @brief Field _laserPositions, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  ____laserPositions;

/// @brief Field _normalGradient, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ____normalGradient;

/// @brief Field _dimGradient, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ____dimGradient;

/// @brief Field _fadingGradient, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ____fadingGradient;

/// @brief Field _fadeTime, offset: 0x80, size: 0x4, def value: None
 float_t  ____fadeTime;

/// @brief Field _fadingTimer, offset: 0x84, size: 0x4, def value: None
 float_t  ____fadingTimer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PointingLaser, ____endDot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::PointingLaser, ____laser) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::PointingLaser, ____smoothMovement) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::PointingLaser, ____device) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::PointingLaser, ____settings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::PointingLaser, ____disablingReasons) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::PointingLaser, ___OnPointingDisabledChanged) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::PointingLaser, ____PointingDisabled_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::PointingLaser, ____Dimmed_k__BackingField) == 0x59, "Offset mismatch!");

static_assert(offsetof(::VROSC::PointingLaser, ____laserPositions) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::PointingLaser, ____normalGradient) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::PointingLaser, ____dimGradient) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::PointingLaser, ____fadingGradient) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::PointingLaser, ____fadeTime) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::PointingLaser, ____fadingTimer) == 0x84, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PointingLaser, 0x88>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PointingLaser_DisablingReason, "VROSC", "PointingLaser/DisablingReason");
NEED_NO_BOX(::VROSC::PointingLaser);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PointingLaser*, "VROSC", "PointingLaser");
