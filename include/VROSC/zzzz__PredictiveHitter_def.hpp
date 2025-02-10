#pragma once
// IWYU pragma private; include "VROSC/PredictiveHitter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PredictiveHitter)
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
struct RaycastHit;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class PredictiveHitWisp;
}
namespace VROSC {
class PredictiveHittable;
}
namespace VROSC {
class PredictiveHitterSettings;
}
namespace VROSC {
class PredictiveHitter_PredictedHit;
}
namespace VROSC {
class SignalControllerInfo;
}
// Forward declare root types
namespace VROSC {
class PredictiveHitter;
}
namespace VROSC {
class PredictiveHitter_PredictedHit;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PredictiveHitter);
MARK_REF_PTR_T(::VROSC::PredictiveHitter_PredictedHit);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PredictiveHitter/PredictedHit
class CORDL_TYPE PredictiveHitter_PredictedHit : public ::System::Object {
public:
// Declarations
/// @brief Field PredictedDSPTime, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PredictedDSPTime, put=__cordl_internal_set_PredictedDSPTime)) double_t  PredictedDSPTime;

/// @brief Field PredictiveHittable, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_PredictiveHittable, put=__cordl_internal_set_PredictiveHittable)) ::UnityW<::VROSC::PredictiveHittable>  PredictiveHittable;

static inline ::VROSC::PredictiveHitter_PredictedHit* New_ctor(::VROSC::PredictiveHittable*  predictiveHittable, double_t  predictedDspTime) ;

constexpr double_t const& __cordl_internal_get_PredictedDSPTime() const;

constexpr double_t& __cordl_internal_get_PredictedDSPTime() ;

constexpr ::UnityW<::VROSC::PredictiveHittable> const& __cordl_internal_get_PredictiveHittable() const;

constexpr ::UnityW<::VROSC::PredictiveHittable>& __cordl_internal_get_PredictiveHittable() ;

constexpr void __cordl_internal_set_PredictedDSPTime(double_t  value) ;

constexpr void __cordl_internal_set_PredictiveHittable(::UnityW<::VROSC::PredictiveHittable>  value) ;

/// @brief Method .ctor, addr 0x16f3724, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::VROSC::PredictiveHittable*  predictiveHittable, double_t  predictedDspTime) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PredictiveHitter_PredictedHit() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PredictiveHitter_PredictedHit", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PredictiveHitter_PredictedHit(PredictiveHitter_PredictedHit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PredictiveHitter_PredictedHit", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PredictiveHitter_PredictedHit(PredictiveHitter_PredictedHit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{779};

/// @brief Field PredictiveHittable, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::PredictiveHittable>  ___PredictiveHittable;

/// @brief Field PredictedDSPTime, offset: 0x18, size: 0x8, def value: None
 double_t  ___PredictedDSPTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PredictiveHitter_PredictedHit, ___PredictiveHittable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitter_PredictedHit, ___PredictedDSPTime) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PredictiveHitter_PredictedHit, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PredictiveHitter
class CORDL_TYPE PredictiveHitter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PredictedHit = ::VROSC::PredictiveHitter_PredictedHit;

 __declspec(property(get=get_IsMalletOrOnlyHitter, put=set_IsMalletOrOnlyHitter)) bool  IsMalletOrOnlyHitter;

 __declspec(property(get=get_MaxPredictionTime)) float_t  MaxPredictionTime;

/// @brief Field OnHitDSP, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHitDSP, put=__cordl_internal_set_OnHitDSP)) ::System::Action_2<float_t,bool>*  OnHitDSP;

/// @brief Field <IsMalletOrOnlyHitter>k__BackingField, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsMalletOrOnlyHitter_k__BackingField, put=__cordl_internal_set__IsMalletOrOnlyHitter_k__BackingField)) bool  _IsMalletOrOnlyHitter_k__BackingField;

/// @brief Field _debugObject, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugObject, put=__cordl_internal_set__debugObject)) ::UnityW<::UnityEngine::GameObject>  _debugObject;

/// @brief Field _device, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__device, put=__cordl_internal_set__device)) ::UnityW<::VROSC::InputDevice>  _device;

/// @brief Field _hitPoints, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__hitPoints, put=__cordl_internal_set__hitPoints)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _hitPoints;

/// @brief Field _hittables, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__hittables, put=__cordl_internal_set__hittables)) ::ArrayW<::UnityW<::VROSC::PredictiveHittable>,::Array<::UnityW<::VROSC::PredictiveHittable>>*>  _hittables;

/// @brief Field _isHittingDisabled, offset 0x92, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHittingDisabled, put=__cordl_internal_set__isHittingDisabled)) bool  _isHittingDisabled;

/// @brief Field _isInputDisabled, offset 0x91, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInputDisabled, put=__cordl_internal_set__isInputDisabled)) bool  _isInputDisabled;

/// @brief Field _lastFramePosition, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastFramePosition, put=__cordl_internal_set__lastFramePosition)) ::UnityEngine::Vector3  _lastFramePosition;

/// @brief Field _latencyAdjustment, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__latencyAdjustment, put=__cordl_internal_set__latencyAdjustment)) float_t  _latencyAdjustment;

/// @brief Field _predictedHits, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__predictedHits, put=__cordl_internal_set__predictedHits)) ::System::Collections::Generic::List_1<::VROSC::PredictiveHitter_PredictedHit*>*  _predictedHits;

/// @brief Field _raycastHits, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__raycastHits, put=__cordl_internal_set__raycastHits)) ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  _raycastHits;

/// @brief Field _settings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::UnityW<::VROSC::PredictiveHitterSettings>  _settings;

/// @brief Field _velocity, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get__velocity, put=__cordl_internal_set__velocity)) ::UnityEngine::Vector3  _velocity;

/// @brief Field _velocityBufferIndex, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__velocityBufferIndex, put=__cordl_internal_set__velocityBufferIndex)) int32_t  _velocityBufferIndex;

/// @brief Field _velocitySmoothingBuffer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__velocitySmoothingBuffer, put=__cordl_internal_set__velocitySmoothingBuffer)) ::ArrayW<float_t,::Array<float_t>*>  _velocitySmoothingBuffer;

/// @brief Field _visualObject, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__visualObject, put=__cordl_internal_set__visualObject)) ::UnityW<::VROSC::PredictiveHitWisp>  _visualObject;

/// @brief Method CalculateSmoothedVelocity, addr 0x16f3414, size 0x27c, virtual false, abstract: false, final false
inline void CalculateSmoothedVelocity() ;

/// @brief Method GetControllerInfo, addr 0x16f32ac, size 0x168, virtual false, abstract: false, final false
inline ::VROSC::SignalControllerInfo* GetControllerInfo(::VROSC::PredictiveHittable*  hittable, ::UnityEngine::Vector3  hitPoint) ;

/// @brief Method IsNewHittable, addr 0x16f302c, size 0x280, virtual false, abstract: false, final false
inline bool IsNewHittable(::VROSC::PredictiveHittable*  hittable, ::System::Collections::Generic::List_1<::VROSC::PredictiveHitter_PredictedHit*>*  predictionList) ;

static inline ::VROSC::PredictiveHitter* New_ctor() ;

/// @brief Method OnGrabbed, addr 0x16f23d4, size 0x98, virtual false, abstract: false, final false
inline void OnGrabbed(::VROSC::InputDevice*  inputDevice, bool  grabbed) ;

/// @brief Method RayForHittables, addr 0x16f2d38, size 0x2f4, virtual false, abstract: false, final false
inline int32_t RayForHittables(::UnityEngine::Vector3  fromPosition, ::UnityEngine::Vector3  toPosition, ::ArrayW<::VROSC::PredictiveHittable*,::Array<::VROSC::PredictiveHittable*>*>  hittables, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  hitPoints) ;

/// @brief Method Reset, addr 0x16f246c, size 0xb8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetDisabled, addr 0x16f375c, size 0xc, virtual false, abstract: false, final false
inline void SetDisabled(bool  disabled) ;

/// @brief Method SetHittingDisabled, addr 0x16f3768, size 0xc, virtual false, abstract: false, final false
inline void SetHittingDisabled(bool  disabled) ;

/// @brief Method Setup, addr 0x16f2180, size 0x210, virtual false, abstract: false, final false
inline void Setup(::VROSC::InputDevice*  device, bool  isMalletOrOnlyHitter) ;

/// @brief Method Update, addr 0x16f2524, size 0x814, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateDebugObject, addr 0x16f3774, size 0x4, virtual false, abstract: false, final false
inline void UpdateDebugObject(::UnityEngine::Vector3  position) ;

constexpr ::System::Action_2<float_t,bool>* const& __cordl_internal_get_OnHitDSP() const;

constexpr ::System::Action_2<float_t,bool>*& __cordl_internal_get_OnHitDSP() ;

constexpr bool const& __cordl_internal_get__IsMalletOrOnlyHitter_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsMalletOrOnlyHitter_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__debugObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__debugObject() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__device() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__device() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__hitPoints() const;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__hitPoints() ;

constexpr ::ArrayW<::UnityW<::VROSC::PredictiveHittable>,::Array<::UnityW<::VROSC::PredictiveHittable>>*> const& __cordl_internal_get__hittables() const;

constexpr ::ArrayW<::UnityW<::VROSC::PredictiveHittable>,::Array<::UnityW<::VROSC::PredictiveHittable>>*>& __cordl_internal_get__hittables() ;

constexpr bool const& __cordl_internal_get__isHittingDisabled() const;

constexpr bool& __cordl_internal_get__isHittingDisabled() ;

constexpr bool const& __cordl_internal_get__isInputDisabled() const;

constexpr bool& __cordl_internal_get__isInputDisabled() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastFramePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastFramePosition() ;

constexpr float_t const& __cordl_internal_get__latencyAdjustment() const;

constexpr float_t& __cordl_internal_get__latencyAdjustment() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::PredictiveHitter_PredictedHit*>* const& __cordl_internal_get__predictedHits() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::PredictiveHitter_PredictedHit*>*& __cordl_internal_get__predictedHits() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> const& __cordl_internal_get__raycastHits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>& __cordl_internal_get__raycastHits() ;

constexpr ::UnityW<::VROSC::PredictiveHitterSettings> const& __cordl_internal_get__settings() const;

constexpr ::UnityW<::VROSC::PredictiveHitterSettings>& __cordl_internal_get__settings() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__velocity() ;

constexpr int32_t const& __cordl_internal_get__velocityBufferIndex() const;

constexpr int32_t& __cordl_internal_get__velocityBufferIndex() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__velocitySmoothingBuffer() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__velocitySmoothingBuffer() ;

constexpr ::UnityW<::VROSC::PredictiveHitWisp> const& __cordl_internal_get__visualObject() const;

constexpr ::UnityW<::VROSC::PredictiveHitWisp>& __cordl_internal_get__visualObject() ;

constexpr void __cordl_internal_set_OnHitDSP(::System::Action_2<float_t,bool>*  value) ;

constexpr void __cordl_internal_set__IsMalletOrOnlyHitter_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__debugObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__device(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__hitPoints(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr void __cordl_internal_set__hittables(::ArrayW<::UnityW<::VROSC::PredictiveHittable>,::Array<::UnityW<::VROSC::PredictiveHittable>>*>  value) ;

constexpr void __cordl_internal_set__isHittingDisabled(bool  value) ;

constexpr void __cordl_internal_set__isInputDisabled(bool  value) ;

constexpr void __cordl_internal_set__lastFramePosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__latencyAdjustment(float_t  value) ;

constexpr void __cordl_internal_set__predictedHits(::System::Collections::Generic::List_1<::VROSC::PredictiveHitter_PredictedHit*>*  value) ;

constexpr void __cordl_internal_set__raycastHits(::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  value) ;

constexpr void __cordl_internal_set__settings(::UnityW<::VROSC::PredictiveHitterSettings>  value) ;

constexpr void __cordl_internal_set__velocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__velocityBufferIndex(int32_t  value) ;

constexpr void __cordl_internal_set__velocitySmoothingBuffer(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set__visualObject(::UnityW<::VROSC::PredictiveHitWisp>  value) ;

/// @brief Method .ctor, addr 0x16f3778, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsMalletOrOnlyHitter, addr 0x16f2100, size 0x8, virtual false, abstract: false, final false
inline bool get_IsMalletOrOnlyHitter() ;

/// @brief Method get_MaxPredictionTime, addr 0x16f2114, size 0x18, virtual false, abstract: false, final false
inline float_t get_MaxPredictionTime() ;

/// @brief Method set_IsMalletOrOnlyHitter, addr 0x16f2108, size 0xc, virtual false, abstract: false, final false
inline void set_IsMalletOrOnlyHitter(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PredictiveHitter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PredictiveHitter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PredictiveHitter(PredictiveHitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PredictiveHitter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PredictiveHitter(PredictiveHitter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{780};

/// @brief Field _device, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____device;

/// @brief Field _predictedHits, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::PredictiveHitter_PredictedHit*>*  ____predictedHits;

/// @brief Field _visualObject, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::PredictiveHitWisp>  ____visualObject;

/// @brief Field _settings, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::PredictiveHitterSettings>  ____settings;

/// @brief Field _latencyAdjustment, offset: 0x40, size: 0x4, def value: None
 float_t  ____latencyAdjustment;

/// @brief Field _lastFramePosition, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastFramePosition;

/// @brief Field _velocity, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____velocity;

/// @brief Field _velocitySmoothingBuffer, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____velocitySmoothingBuffer;

/// @brief Field _velocityBufferIndex, offset: 0x68, size: 0x4, def value: None
 int32_t  ____velocityBufferIndex;

/// @brief Field _raycastHits, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  ____raycastHits;

/// @brief Field _hitPoints, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  ____hitPoints;

/// @brief Field _hittables, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::PredictiveHittable>,::Array<::UnityW<::VROSC::PredictiveHittable>>*>  ____hittables;

/// @brief Field _debugObject, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____debugObject;

/// @brief Field <IsMalletOrOnlyHitter>k__BackingField, offset: 0x90, size: 0x1, def value: None
 bool  ____IsMalletOrOnlyHitter_k__BackingField;

/// @brief Field _isInputDisabled, offset: 0x91, size: 0x1, def value: None
 bool  ____isInputDisabled;

/// @brief Field _isHittingDisabled, offset: 0x92, size: 0x1, def value: None
 bool  ____isHittingDisabled;

/// @brief Field OnHitDSP, offset: 0x98, size: 0x8, def value: None
 ::System::Action_2<float_t,bool>*  ___OnHitDSP;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PredictiveHitter, ____device) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitter, ____predictedHits) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitter, ____visualObject) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitter, ____settings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitter, ____latencyAdjustment) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitter, ____lastFramePosition) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitter, ____velocity) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitter, ____velocitySmoothingBuffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitter, ____velocityBufferIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitter, ____raycastHits) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitter, ____hitPoints) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitter, ____hittables) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitter, ____debugObject) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitter, ____IsMalletOrOnlyHitter_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitter, ____isInputDisabled) == 0x91, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitter, ____isHittingDisabled) == 0x92, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitter, ___OnHitDSP) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PredictiveHitter, 0xa0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PredictiveHitter);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PredictiveHitter*, "VROSC", "PredictiveHitter");
NEED_NO_BOX(::VROSC::PredictiveHitter_PredictedHit);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PredictiveHitter_PredictedHit*, "VROSC", "PredictiveHitter/PredictedHit");
