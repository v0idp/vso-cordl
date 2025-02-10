#pragma once
// IWYU pragma private; include "VROSC/ThereminParticles.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ThereminParticles)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class ParticleSystemForceField;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace VROSC {
class ControllerInputNode;
}
namespace VROSC {
struct HandType;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class InstrumentController;
}
namespace VROSC {
class ThereminParticles_Hand;
}
namespace VROSC {
class TransformMover;
}
// Forward declare root types
namespace VROSC {
class ThereminParticles;
}
namespace VROSC {
class ThereminParticles_Hand;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ThereminParticles);
MARK_REF_PTR_T(::VROSC::ThereminParticles_Hand);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ThereminParticles/Hand
class CORDL_TYPE ThereminParticles_Hand : public ::System::Object {
public:
// Declarations
/// @brief Field _forceField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__forceField, put=__cordl_internal_set__forceField)) ::UnityW<::UnityEngine::ParticleSystemForceField>  _forceField;

/// @brief Field _initialEndRange, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__initialEndRange, put=__cordl_internal_set__initialEndRange)) float_t  _initialEndRange;

/// @brief Field _input, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__input, put=__cordl_internal_set__input)) ::UnityW<::VROSC::ControllerInputNode>  _input;

/// @brief Field _inputDevice, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputDevice, put=__cordl_internal_set__inputDevice)) ::UnityW<::VROSC::InputDevice>  _inputDevice;

/// @brief Field _isHandInside, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHandInside, put=__cordl_internal_set__isHandInside)) bool  _isHandInside;

/// @brief Field _isLeft, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__isLeft, put=__cordl_internal_set__isLeft)) bool  _isLeft;

/// @brief Field _isPlaying, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get__isPlaying, put=__cordl_internal_set__isPlaying)) bool  _isPlaying;

/// @brief Field _players, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__players, put=__cordl_internal_set__players)) ::System::Collections::Generic::List_1<::System::Object*>*  _players;

/// @brief Field _scaling, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__scaling, put=__cordl_internal_set__scaling)) float_t  _scaling;

/// @brief Method HoverBegin, addr 0x171202c, size 0x7c, virtual false, abstract: false, final false
inline void HoverBegin(::VROSC::InputDevice*  inputDevice) ;

/// @brief Method HoverEnd, addr 0x1711fb4, size 0x78, virtual false, abstract: false, final false
inline void HoverEnd(::VROSC::InputDevice*  inputDevice) ;

static inline ::VROSC::ThereminParticles_Hand* New_ctor() ;

/// @brief Method ObjectIsPlaying, addr 0x1711dfc, size 0x148, virtual false, abstract: false, final false
inline void ObjectIsPlaying(bool  playing, ::System::Object*  source) ;

/// @brief Method SetIsPlaying, addr 0x1711f78, size 0x3c, virtual false, abstract: false, final false
inline void SetIsPlaying(bool  playing) ;

/// @brief Method SetNewScale, addr 0x1711af4, size 0x3c, virtual false, abstract: false, final false
inline void SetNewScale(float_t  scale) ;

/// @brief Method Setup, addr 0x17115a0, size 0x1a4, virtual false, abstract: false, final false
inline void Setup(bool  isLeft, ::VROSC::InputDevice*  inputDevice, ::VROSC::ControllerInputNode*  input) ;

/// @brief Method Update, addr 0x1711b58, size 0x260, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::ParticleSystemForceField> const& __cordl_internal_get__forceField() const;

constexpr ::UnityW<::UnityEngine::ParticleSystemForceField>& __cordl_internal_get__forceField() ;

constexpr float_t const& __cordl_internal_get__initialEndRange() const;

constexpr float_t& __cordl_internal_get__initialEndRange() ;

constexpr ::UnityW<::VROSC::ControllerInputNode> const& __cordl_internal_get__input() const;

constexpr ::UnityW<::VROSC::ControllerInputNode>& __cordl_internal_get__input() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__inputDevice() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__inputDevice() ;

constexpr bool const& __cordl_internal_get__isHandInside() const;

constexpr bool& __cordl_internal_get__isHandInside() ;

constexpr bool const& __cordl_internal_get__isLeft() const;

constexpr bool& __cordl_internal_get__isLeft() ;

constexpr bool const& __cordl_internal_get__isPlaying() const;

constexpr bool& __cordl_internal_get__isPlaying() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get__players() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__players() ;

constexpr float_t const& __cordl_internal_get__scaling() const;

constexpr float_t& __cordl_internal_get__scaling() ;

constexpr void __cordl_internal_set__forceField(::UnityW<::UnityEngine::ParticleSystemForceField>  value) ;

constexpr void __cordl_internal_set__initialEndRange(float_t  value) ;

constexpr void __cordl_internal_set__input(::UnityW<::VROSC::ControllerInputNode>  value) ;

constexpr void __cordl_internal_set__inputDevice(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__isHandInside(bool  value) ;

constexpr void __cordl_internal_set__isLeft(bool  value) ;

constexpr void __cordl_internal_set__isPlaying(bool  value) ;

constexpr void __cordl_internal_set__players(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set__scaling(float_t  value) ;

/// @brief Method .ctor, addr 0x17120a8, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThereminParticles_Hand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThereminParticles_Hand", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThereminParticles_Hand(ThereminParticles_Hand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThereminParticles_Hand", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThereminParticles_Hand(ThereminParticles_Hand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{896};

/// @brief Field _forceField, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystemForceField>  ____forceField;

/// @brief Field _isLeft, offset: 0x18, size: 0x1, def value: None
 bool  ____isLeft;

/// @brief Field _inputDevice, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____inputDevice;

/// @brief Field _isHandInside, offset: 0x28, size: 0x1, def value: None
 bool  ____isHandInside;

/// @brief Field _isPlaying, offset: 0x29, size: 0x1, def value: None
 bool  ____isPlaying;

/// @brief Field _initialEndRange, offset: 0x2c, size: 0x4, def value: None
 float_t  ____initialEndRange;

/// @brief Field _input, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::ControllerInputNode>  ____input;

/// @brief Field _scaling, offset: 0x38, size: 0x4, def value: None
 float_t  ____scaling;

/// @brief Field _players, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ____players;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ThereminParticles_Hand, ____forceField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ThereminParticles_Hand, ____isLeft) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::ThereminParticles_Hand, ____inputDevice) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ThereminParticles_Hand, ____isHandInside) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ThereminParticles_Hand, ____isPlaying) == 0x29, "Offset mismatch!");

static_assert(offsetof(::VROSC::ThereminParticles_Hand, ____initialEndRange) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ThereminParticles_Hand, ____input) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ThereminParticles_Hand, ____scaling) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::ThereminParticles_Hand, ____players) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ThereminParticles_Hand, 0x48>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ThereminParticles
class CORDL_TYPE ThereminParticles : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Hand = ::VROSC::ThereminParticles_Hand;

/// @brief Field _input, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__input, put=__cordl_internal_set__input)) ::UnityW<::VROSC::ControllerInputNode>  _input;

/// @brief Field _leftHand, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftHand, put=__cordl_internal_set__leftHand)) ::VROSC::ThereminParticles_Hand*  _leftHand;

/// @brief Field _material, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__material, put=__cordl_internal_set__material)) ::UnityW<::UnityEngine::Material>  _material;

/// @brief Field _particles, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__particles, put=__cordl_internal_set__particles)) ::UnityW<::UnityEngine::ParticleSystem>  _particles;

/// @brief Field _rightHand, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightHand, put=__cordl_internal_set__rightHand)) ::VROSC::ThereminParticles_Hand*  _rightHand;

/// @brief Field _scaling, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaling, put=__cordl_internal_set__scaling)) ::UnityW<::VROSC::TransformMover>  _scaling;

/// @brief Field _visualDistance, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__visualDistance, put=__cordl_internal_set__visualDistance)) float_t  _visualDistance;

/// @brief Field _wavemin, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__wavemin, put=__cordl_internal_set__wavemin)) ::UnityW<::VROSC::InstrumentController>  _wavemin;

/// @brief Method Awake, addr 0x1711270, size 0x164, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetHandByHandtype, addr 0x1711de4, size 0x18, virtual false, abstract: false, final false
inline ::VROSC::ThereminParticles_Hand* GetHandByHandtype(::VROSC::HandType  handType) ;

static inline ::VROSC::ThereminParticles* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17113d4, size 0x164, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1711994, size 0xd8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1711744, size 0x250, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlayStarted, addr 0x1711db8, size 0x2c, virtual false, abstract: false, final false
inline void PlayStarted(::VROSC::HandType  handType, ::System::Object*  source) ;

/// @brief Method PlayStopped, addr 0x1711f44, size 0x2c, virtual false, abstract: false, final false
inline void PlayStopped(::VROSC::HandType  handType, ::System::Object*  source) ;

/// @brief Method ScaleChanged, addr 0x1711a6c, size 0x88, virtual false, abstract: false, final false
inline void ScaleChanged(::VROSC::TransformMover*  transformMover) ;

/// @brief Method Start, addr 0x1711538, size 0x68, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1711b30, size 0x28, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::VROSC::ControllerInputNode> const& __cordl_internal_get__input() const;

constexpr ::UnityW<::VROSC::ControllerInputNode>& __cordl_internal_get__input() ;

constexpr ::VROSC::ThereminParticles_Hand* const& __cordl_internal_get__leftHand() const;

constexpr ::VROSC::ThereminParticles_Hand*& __cordl_internal_get__leftHand() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particles() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particles() ;

constexpr ::VROSC::ThereminParticles_Hand* const& __cordl_internal_get__rightHand() const;

constexpr ::VROSC::ThereminParticles_Hand*& __cordl_internal_get__rightHand() ;

constexpr ::UnityW<::VROSC::TransformMover> const& __cordl_internal_get__scaling() const;

constexpr ::UnityW<::VROSC::TransformMover>& __cordl_internal_get__scaling() ;

constexpr float_t const& __cordl_internal_get__visualDistance() const;

constexpr float_t& __cordl_internal_get__visualDistance() ;

constexpr ::UnityW<::VROSC::InstrumentController> const& __cordl_internal_get__wavemin() const;

constexpr ::UnityW<::VROSC::InstrumentController>& __cordl_internal_get__wavemin() ;

constexpr void __cordl_internal_set__input(::UnityW<::VROSC::ControllerInputNode>  value) ;

constexpr void __cordl_internal_set__leftHand(::VROSC::ThereminParticles_Hand*  value) ;

constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__particles(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set__rightHand(::VROSC::ThereminParticles_Hand*  value) ;

constexpr void __cordl_internal_set__scaling(::UnityW<::VROSC::TransformMover>  value) ;

constexpr void __cordl_internal_set__visualDistance(float_t  value) ;

constexpr void __cordl_internal_set__wavemin(::UnityW<::VROSC::InstrumentController>  value) ;

/// @brief Method .ctor, addr 0x1711f70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThereminParticles() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThereminParticles", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThereminParticles(ThereminParticles && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThereminParticles", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThereminParticles(ThereminParticles const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{897};

/// @brief Field _particles, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ____particles;

/// @brief Field _input, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::ControllerInputNode>  ____input;

/// @brief Field _scaling, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::TransformMover>  ____scaling;

/// @brief Field _wavemin, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::InstrumentController>  ____wavemin;

/// @brief Field _leftHand, offset: 0x40, size: 0x8, def value: None
 ::VROSC::ThereminParticles_Hand*  ____leftHand;

/// @brief Field _rightHand, offset: 0x48, size: 0x8, def value: None
 ::VROSC::ThereminParticles_Hand*  ____rightHand;

/// @brief Field _visualDistance, offset: 0x50, size: 0x4, def value: None
 float_t  ____visualDistance;

/// @brief Field _material, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____material;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ThereminParticles, ____particles) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ThereminParticles, ____input) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ThereminParticles, ____scaling) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ThereminParticles, ____wavemin) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::ThereminParticles, ____leftHand) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::ThereminParticles, ____rightHand) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::ThereminParticles, ____visualDistance) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::ThereminParticles, ____material) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ThereminParticles, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ThereminParticles);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ThereminParticles*, "VROSC", "ThereminParticles");
NEED_NO_BOX(::VROSC::ThereminParticles_Hand);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ThereminParticles_Hand*, "VROSC", "ThereminParticles/Hand");
