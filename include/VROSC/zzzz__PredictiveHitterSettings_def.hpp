#pragma once
// IWYU pragma private; include "VROSC/PredictiveHitterSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PredictiveHitterSettings)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace VROSC {
class PredictiveHitterSettings;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PredictiveHitterSettings);
// Dependencies UnityEngine.ScriptableObject
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PredictiveHitterSettings
class CORDL_TYPE PredictiveHitterSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_BendAngle)) float_t  BendAngle;

 __declspec(property(get=get_DisablePrediction)) bool  DisablePrediction;

 __declspec(property(get=get_MinVelocityForHit)) float_t  MinVelocityForHit;

 __declspec(property(get=get_PostPredictionBuffer)) float_t  PostPredictionBuffer;

 __declspec(property(get=get_RaycastAllocSize)) int32_t  RaycastAllocSize;

 __declspec(property(get=get_SmoothFrames)) int32_t  SmoothFrames;

 __declspec(property(get=get_UseDebugObject)) bool  UseDebugObject;

/// @brief Field _baseLatencyAdjustment, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__baseLatencyAdjustment, put=__cordl_internal_set__baseLatencyAdjustment)) float_t  _baseLatencyAdjustment;

/// @brief Field _bendAngle, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__bendAngle, put=__cordl_internal_set__bendAngle)) float_t  _bendAngle;

/// @brief Field _disablePrediction, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__disablePrediction, put=__cordl_internal_set__disablePrediction)) bool  _disablePrediction;

/// @brief Field _lookAheadMaxDistance, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lookAheadMaxDistance, put=__cordl_internal_set__lookAheadMaxDistance)) float_t  _lookAheadMaxDistance;

/// @brief Field _lookAheadTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__lookAheadTime, put=__cordl_internal_set__lookAheadTime)) float_t  _lookAheadTime;

/// @brief Field _minVelocityForHit, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__minVelocityForHit, put=__cordl_internal_set__minVelocityForHit)) float_t  _minVelocityForHit;

/// @brief Field _postPredictionBuffer, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__postPredictionBuffer, put=__cordl_internal_set__postPredictionBuffer)) float_t  _postPredictionBuffer;

/// @brief Field _raycastAllocSize, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__raycastAllocSize, put=__cordl_internal_set__raycastAllocSize)) int32_t  _raycastAllocSize;

/// @brief Field _smoothFrames, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__smoothFrames, put=__cordl_internal_set__smoothFrames)) int32_t  _smoothFrames;

/// @brief Field _useDebugObject, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get__useDebugObject, put=__cordl_internal_set__useDebugObject)) bool  _useDebugObject;

/// @brief Method CapLookAheadDistance, addr 0x16f3690, size 0x94, virtual false, abstract: false, final false
inline float_t CapLookAheadDistance(::UnityEngine::Vector3  velocity) ;

/// @brief Method GetLatencyAdjustment, addr 0x16f2390, size 0x44, virtual false, abstract: false, final false
inline float_t GetLatencyAdjustment() ;

/// @brief Method GetMaxPredictionTime, addr 0x16f212c, size 0x54, virtual false, abstract: false, final false
inline float_t GetMaxPredictionTime() ;

static inline ::VROSC::PredictiveHitterSettings* New_ctor() ;

constexpr float_t const& __cordl_internal_get__baseLatencyAdjustment() const;

constexpr float_t& __cordl_internal_get__baseLatencyAdjustment() ;

constexpr float_t const& __cordl_internal_get__bendAngle() const;

constexpr float_t& __cordl_internal_get__bendAngle() ;

constexpr bool const& __cordl_internal_get__disablePrediction() const;

constexpr bool& __cordl_internal_get__disablePrediction() ;

constexpr float_t const& __cordl_internal_get__lookAheadMaxDistance() const;

constexpr float_t& __cordl_internal_get__lookAheadMaxDistance() ;

constexpr float_t const& __cordl_internal_get__lookAheadTime() const;

constexpr float_t& __cordl_internal_get__lookAheadTime() ;

constexpr float_t const& __cordl_internal_get__minVelocityForHit() const;

constexpr float_t& __cordl_internal_get__minVelocityForHit() ;

constexpr float_t const& __cordl_internal_get__postPredictionBuffer() const;

constexpr float_t& __cordl_internal_get__postPredictionBuffer() ;

constexpr int32_t const& __cordl_internal_get__raycastAllocSize() const;

constexpr int32_t& __cordl_internal_get__raycastAllocSize() ;

constexpr int32_t const& __cordl_internal_get__smoothFrames() const;

constexpr int32_t& __cordl_internal_get__smoothFrames() ;

constexpr bool const& __cordl_internal_get__useDebugObject() const;

constexpr bool& __cordl_internal_get__useDebugObject() ;

constexpr void __cordl_internal_set__baseLatencyAdjustment(float_t  value) ;

constexpr void __cordl_internal_set__bendAngle(float_t  value) ;

constexpr void __cordl_internal_set__disablePrediction(bool  value) ;

constexpr void __cordl_internal_set__lookAheadMaxDistance(float_t  value) ;

constexpr void __cordl_internal_set__lookAheadTime(float_t  value) ;

constexpr void __cordl_internal_set__minVelocityForHit(float_t  value) ;

constexpr void __cordl_internal_set__postPredictionBuffer(float_t  value) ;

constexpr void __cordl_internal_set__raycastAllocSize(int32_t  value) ;

constexpr void __cordl_internal_set__smoothFrames(int32_t  value) ;

constexpr void __cordl_internal_set__useDebugObject(bool  value) ;

/// @brief Method .ctor, addr 0x16f382c, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BendAngle, addr 0x16f381c, size 0x8, virtual false, abstract: false, final false
inline float_t get_BendAngle() ;

/// @brief Method get_DisablePrediction, addr 0x16f37f4, size 0x8, virtual false, abstract: false, final false
inline bool get_DisablePrediction() ;

/// @brief Method get_MinVelocityForHit, addr 0x16f380c, size 0x8, virtual false, abstract: false, final false
inline float_t get_MinVelocityForHit() ;

/// @brief Method get_PostPredictionBuffer, addr 0x16f3804, size 0x8, virtual false, abstract: false, final false
inline float_t get_PostPredictionBuffer() ;

/// @brief Method get_RaycastAllocSize, addr 0x16f3824, size 0x8, virtual false, abstract: false, final false
inline int32_t get_RaycastAllocSize() ;

/// @brief Method get_SmoothFrames, addr 0x16f3814, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SmoothFrames() ;

/// @brief Method get_UseDebugObject, addr 0x16f37fc, size 0x8, virtual false, abstract: false, final false
inline bool get_UseDebugObject() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PredictiveHitterSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PredictiveHitterSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PredictiveHitterSettings(PredictiveHitterSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PredictiveHitterSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PredictiveHitterSettings(PredictiveHitterSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{781};

/// @brief Field _disablePrediction, offset: 0x18, size: 0x1, def value: None
 bool  ____disablePrediction;

/// @brief Field _useDebugObject, offset: 0x19, size: 0x1, def value: None
 bool  ____useDebugObject;

/// @brief Field _lookAheadMaxDistance, offset: 0x1c, size: 0x4, def value: None
 float_t  ____lookAheadMaxDistance;

/// @brief Field _lookAheadTime, offset: 0x20, size: 0x4, def value: None
 float_t  ____lookAheadTime;

/// @brief Field _baseLatencyAdjustment, offset: 0x24, size: 0x4, def value: None
 float_t  ____baseLatencyAdjustment;

/// @brief Field _postPredictionBuffer, offset: 0x28, size: 0x4, def value: None
 float_t  ____postPredictionBuffer;

/// @brief Field _minVelocityForHit, offset: 0x2c, size: 0x4, def value: None
 float_t  ____minVelocityForHit;

/// @brief Field _smoothFrames, offset: 0x30, size: 0x4, def value: None
 int32_t  ____smoothFrames;

/// @brief Field _bendAngle, offset: 0x34, size: 0x4, def value: None
 float_t  ____bendAngle;

/// @brief Field _raycastAllocSize, offset: 0x38, size: 0x4, def value: None
 int32_t  ____raycastAllocSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PredictiveHitterSettings, ____disablePrediction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitterSettings, ____useDebugObject) == 0x19, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitterSettings, ____lookAheadMaxDistance) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitterSettings, ____lookAheadTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitterSettings, ____baseLatencyAdjustment) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitterSettings, ____postPredictionBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitterSettings, ____minVelocityForHit) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitterSettings, ____smoothFrames) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitterSettings, ____bendAngle) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitterSettings, ____raycastAllocSize) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PredictiveHitterSettings, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PredictiveHitterSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PredictiveHitterSettings*, "VROSC", "PredictiveHitterSettings");
