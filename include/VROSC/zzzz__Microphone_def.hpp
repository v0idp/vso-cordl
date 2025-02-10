#pragma once
// IWYU pragma private; include "VROSC/Microphone.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IAnchoredObject_def.hpp"
#include "VROSC/zzzz__SignalNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Microphone)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class MicrophoneController;
}
namespace VROSC {
class MicrophoneDataController;
}
namespace VROSC {
class Microphone___c__DisplayClass19_0;
}
namespace VROSC {
class ResetableMover;
}
namespace VROSC {
class Signal;
}
namespace VROSC {
class TransformMover;
}
// Forward declare root types
namespace VROSC {
class Microphone;
}
namespace VROSC {
class Microphone___c__DisplayClass19_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Microphone);
MARK_REF_PTR_T(::VROSC::Microphone___c__DisplayClass19_0);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Microphone/<>c__DisplayClass19_0
class CORDL_TYPE Microphone___c__DisplayClass19_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::Microphone>  __4__this;

/// @brief Field dataController, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_dataController, put=__cordl_internal_set_dataController)) ::VROSC::MicrophoneDataController*  dataController;

static inline ::VROSC::Microphone___c__DisplayClass19_0* New_ctor() ;

/// @brief Method <SetToData>b__0, addr 0x1723e2c, size 0x2f8, virtual false, abstract: false, final false
inline void _SetToData_b__0(bool  success, ::UnityEngine::Vector3  anchorPosition, ::UnityEngine::Quaternion  anchorRotation) ;

/// @brief Method <SetToData>b__1, addr 0x1724124, size 0x188, virtual false, abstract: false, final false
inline void _SetToData_b__1(::VROSC::Error  error) ;

constexpr ::UnityW<::VROSC::Microphone> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::Microphone>& __cordl_internal_get___4__this() ;

constexpr ::VROSC::MicrophoneDataController* const& __cordl_internal_get_dataController() const;

constexpr ::VROSC::MicrophoneDataController*& __cordl_internal_get_dataController() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::Microphone>  value) ;

constexpr void __cordl_internal_set_dataController(::VROSC::MicrophoneDataController*  value) ;

/// @brief Method .ctor, addr 0x1723b60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Microphone___c__DisplayClass19_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Microphone___c__DisplayClass19_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Microphone___c__DisplayClass19_0(Microphone___c__DisplayClass19_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Microphone___c__DisplayClass19_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Microphone___c__DisplayClass19_0(Microphone___c__DisplayClass19_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1001};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::Microphone>  _____4__this;

/// @brief Field dataController, offset: 0x18, size: 0x8, def value: None
 ::VROSC::MicrophoneDataController*  ___dataController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Microphone___c__DisplayClass19_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::Microphone___c__DisplayClass19_0, ___dataController) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Microphone___c__DisplayClass19_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.IAnchoredObject, VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Microphone
class CORDL_TYPE Microphone : public ::VROSC::SignalNode {
public:
// Declarations
using __c__DisplayClass19_0 = ::VROSC::Microphone___c__DisplayClass19_0;

 __declspec(property(get=get_TransformMover)) ::UnityW<::VROSC::TransformMover>  TransformMover;

/// @brief Field _falloffCurve, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__falloffCurve, put=__cordl_internal_set__falloffCurve)) ::UnityEngine::AnimationCurve*  _falloffCurve;

/// @brief Field _maxMicrophoneDistance, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxMicrophoneDistance, put=__cordl_internal_set__maxMicrophoneDistance)) float_t  _maxMicrophoneDistance;

/// @brief Field _microphoneController, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__microphoneController, put=__cordl_internal_set__microphoneController)) ::UnityW<::VROSC::MicrophoneController>  _microphoneController;

/// @brief Field _microphoneHead, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__microphoneHead, put=__cordl_internal_set__microphoneHead)) ::UnityW<::UnityEngine::Transform>  _microphoneHead;

/// @brief Field _peakLight, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__peakLight, put=__cordl_internal_set__peakLight)) ::UnityW<::UnityEngine::GameObject>  _peakLight;

/// @brief Field _resetableMover, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__resetableMover, put=__cordl_internal_set__resetableMover)) ::UnityW<::VROSC::ResetableMover>  _resetableMover;

/// @brief Convert operator to "::VROSC::IAnchoredObject"
constexpr operator  ::VROSC::IAnchoredObject*() noexcept;

/// @brief Method AddSpatialAnchorToData, addr 0x1723d54, size 0x64, virtual true, abstract: false, final true
inline void AddSpatialAnchorToData(::StringW  anchorUuid) ;

/// @brief Method Awake, addr 0x1723268, size 0x164, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateProximity, addr 0x1723980, size 0x19c, virtual false, abstract: false, final false
inline void CalculateProximity() ;

/// @brief Method MicrophoneMoved, addr 0x1723bc8, size 0x118, virtual false, abstract: false, final false
inline void MicrophoneMoved(::VROSC::ResetableMover*  mover) ;

/// @brief Method MicrophoneReset, addr 0x1723b68, size 0x60, virtual false, abstract: false, final false
inline void MicrophoneReset(::VROSC::ResetableMover*  mover) ;

/// @brief Method MicrophoneStationMoved, addr 0x1723ce0, size 0x74, virtual false, abstract: false, final false
inline void MicrophoneStationMoved(::VROSC::TransformMover*  mover) ;

static inline ::VROSC::Microphone* New_ctor() ;

/// @brief Method NodeBegin, addr 0x1723b1c, size 0x20, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeEnd, addr 0x1723b40, size 0x20, virtual true, abstract: false, final false
inline void NodeEnd(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x1723b3c, size 0x4, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

/// @brief Method OnDestroy, addr 0x17233cc, size 0x240, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x17238f0, size 0x6c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x17238c8, size 0x28, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RemoveSpatialAnchorFromData, addr 0x1723db8, size 0x64, virtual true, abstract: false, final true
inline void RemoveSpatialAnchorFromData(::StringW  anchorUuid) ;

/// @brief Method SetPeakLightActive, addr 0x172395c, size 0x20, virtual false, abstract: false, final false
inline void SetPeakLightActive(bool  state) ;

/// @brief Method SetToData, addr 0x1723744, size 0x184, virtual false, abstract: false, final false
inline void SetToData(::VROSC::MicrophoneDataController*  dataController) ;

/// @brief Method Setup, addr 0x172360c, size 0x138, virtual false, abstract: false, final false
inline void Setup(::VROSC::MicrophoneController*  microphoneController) ;

/// @brief Method Update, addr 0x172397c, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__falloffCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__falloffCurve() ;

constexpr float_t const& __cordl_internal_get__maxMicrophoneDistance() const;

constexpr float_t& __cordl_internal_get__maxMicrophoneDistance() ;

constexpr ::UnityW<::VROSC::MicrophoneController> const& __cordl_internal_get__microphoneController() const;

constexpr ::UnityW<::VROSC::MicrophoneController>& __cordl_internal_get__microphoneController() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__microphoneHead() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__microphoneHead() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__peakLight() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__peakLight() ;

constexpr ::UnityW<::VROSC::ResetableMover> const& __cordl_internal_get__resetableMover() const;

constexpr ::UnityW<::VROSC::ResetableMover>& __cordl_internal_get__resetableMover() ;

constexpr void __cordl_internal_set__falloffCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__maxMicrophoneDistance(float_t  value) ;

constexpr void __cordl_internal_set__microphoneController(::UnityW<::VROSC::MicrophoneController>  value) ;

constexpr void __cordl_internal_set__microphoneHead(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__peakLight(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__resetableMover(::UnityW<::VROSC::ResetableMover>  value) ;

/// @brief Method .ctor, addr 0x1723e1c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TransformMover, addr 0x172324c, size 0x1c, virtual true, abstract: false, final true
inline ::UnityW<::VROSC::TransformMover> get_TransformMover() ;

/// @brief Convert to "::VROSC::IAnchoredObject"
constexpr ::VROSC::IAnchoredObject* i___VROSC__IAnchoredObject() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Microphone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Microphone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Microphone(Microphone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Microphone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Microphone(Microphone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1002};

/// @brief Field _microphoneHead, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____microphoneHead;

/// @brief Field _peakLight, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____peakLight;

/// @brief Field _falloffCurve, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____falloffCurve;

/// @brief Field _resetableMover, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::ResetableMover>  ____resetableMover;

/// @brief Field _microphoneController, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::MicrophoneController>  ____microphoneController;

/// @brief Field _maxMicrophoneDistance, offset: 0x70, size: 0x4, def value: None
 float_t  ____maxMicrophoneDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Microphone, ____microphoneHead) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::Microphone, ____peakLight) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::Microphone, ____falloffCurve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::Microphone, ____resetableMover) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::Microphone, ____microphoneController) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::Microphone, ____maxMicrophoneDistance) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Microphone, 0x78>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::Microphone);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Microphone*, "VROSC", "Microphone");
NEED_NO_BOX(::VROSC::Microphone___c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Microphone___c__DisplayClass19_0*, "VROSC", "Microphone/<>c__DisplayClass19_0");
