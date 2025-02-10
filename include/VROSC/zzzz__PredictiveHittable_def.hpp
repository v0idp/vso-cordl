#pragma once
// IWYU pragma private; include "VROSC/PredictiveHittable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PredictiveHittable)
namespace UnityEngine {
struct Color;
}
namespace VROSC {
class SignalNode;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class PredictiveHittable;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PredictiveHittable);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PredictiveHittable
class CORDL_TYPE PredictiveHittable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Color, put=set_Color)) ::UnityEngine::Color  Color;

 __declspec(property(get=get_CullWeakHits)) bool  CullWeakHits;

 __declspec(property(get=get_HasColor, put=set_HasColor)) bool  HasColor;

 __declspec(property(get=get_HitDimsLaser)) bool  HitDimsLaser;

 __declspec(property(get=get_PreferMallet)) bool  PreferMallet;

/// @brief Field <Color>k__BackingField, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__Color_k__BackingField, put=__cordl_internal_set__Color_k__BackingField)) ::UnityEngine::Color  _Color_k__BackingField;

/// @brief Field <HasColor>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasColor_k__BackingField, put=__cordl_internal_set__HasColor_k__BackingField)) bool  _HasColor_k__BackingField;

/// @brief Field _cullWeakHits, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__cullWeakHits, put=__cordl_internal_set__cullWeakHits)) bool  _cullWeakHits;

/// @brief Field _filterAngle, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__filterAngle, put=__cordl_internal_set__filterAngle)) float_t  _filterAngle;

/// @brief Field _filterDirection, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get__filterDirection, put=__cordl_internal_set__filterDirection)) ::UnityEngine::Vector3  _filterDirection;

/// @brief Field _hitDimsLaser, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get__hitDimsLaser, put=__cordl_internal_set__hitDimsLaser)) bool  _hitDimsLaser;

/// @brief Field _outputNodes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputNodes, put=__cordl_internal_set__outputNodes)) ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  _outputNodes;

/// @brief Field _preferMallet, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__preferMallet, put=__cordl_internal_set__preferMallet)) bool  _preferMallet;

/// @brief Method IsHitValid, addr 0x16f1fd8, size 0xb4, virtual false, abstract: false, final false
inline bool IsHitValid(::VROSC::Signal*  signal) ;

static inline ::VROSC::PredictiveHittable* New_ctor() ;

/// @brief Method SendScheduledHit, addr 0x16f1ee4, size 0xe0, virtual false, abstract: false, final false
inline void SendScheduledHit(::VROSC::Signal*  signal) ;

/// @brief Method SetColor, addr 0x16f1fc4, size 0x14, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method Start, addr 0x16f1ec0, size 0x24, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__Color_k__BackingField() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__Color_k__BackingField() ;

constexpr bool const& __cordl_internal_get__HasColor_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasColor_k__BackingField() ;

constexpr bool const& __cordl_internal_get__cullWeakHits() const;

constexpr bool& __cordl_internal_get__cullWeakHits() ;

constexpr float_t const& __cordl_internal_get__filterAngle() const;

constexpr float_t& __cordl_internal_get__filterAngle() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__filterDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__filterDirection() ;

constexpr bool const& __cordl_internal_get__hitDimsLaser() const;

constexpr bool& __cordl_internal_get__hitDimsLaser() ;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*> const& __cordl_internal_get__outputNodes() const;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>& __cordl_internal_get__outputNodes() ;

constexpr bool const& __cordl_internal_get__preferMallet() const;

constexpr bool& __cordl_internal_get__preferMallet() ;

constexpr void __cordl_internal_set__Color_k__BackingField(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__HasColor_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__cullWeakHits(bool  value) ;

constexpr void __cordl_internal_set__filterAngle(float_t  value) ;

constexpr void __cordl_internal_set__filterDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__hitDimsLaser(bool  value) ;

constexpr void __cordl_internal_set__outputNodes(::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  value) ;

constexpr void __cordl_internal_set__preferMallet(bool  value) ;

/// @brief Method .ctor, addr 0x16f208c, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Color, addr 0x16f1e88, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Color() ;

/// @brief Method get_CullWeakHits, addr 0x16f1ea8, size 0x8, virtual false, abstract: false, final false
inline bool get_CullWeakHits() ;

/// @brief Method get_HasColor, addr 0x16f1ea0, size 0x8, virtual false, abstract: false, final false
inline bool get_HasColor() ;

/// @brief Method get_HitDimsLaser, addr 0x16f1eb8, size 0x8, virtual false, abstract: false, final false
inline bool get_HitDimsLaser() ;

/// @brief Method get_PreferMallet, addr 0x16f1eb0, size 0x8, virtual false, abstract: false, final false
inline bool get_PreferMallet() ;

/// @brief Method set_Color, addr 0x16f1e7c, size 0xc, virtual false, abstract: false, final false
inline void set_Color(::UnityEngine::Color  value) ;

/// @brief Method set_HasColor, addr 0x16f1e94, size 0xc, virtual false, abstract: false, final false
inline void set_HasColor(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PredictiveHittable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PredictiveHittable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PredictiveHittable(PredictiveHittable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PredictiveHittable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PredictiveHittable(PredictiveHittable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{778};

/// @brief Field <Color>k__BackingField, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ____Color_k__BackingField;

/// @brief Field <HasColor>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  ____HasColor_k__BackingField;

/// @brief Field _outputNodes, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  ____outputNodes;

/// @brief Field _cullWeakHits, offset: 0x40, size: 0x1, def value: None
 bool  ____cullWeakHits;

/// @brief Field _preferMallet, offset: 0x41, size: 0x1, def value: None
 bool  ____preferMallet;

/// @brief Field _hitDimsLaser, offset: 0x42, size: 0x1, def value: None
 bool  ____hitDimsLaser;

/// @brief Field _filterDirection, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____filterDirection;

/// @brief Field _filterAngle, offset: 0x50, size: 0x4, def value: None
 float_t  ____filterAngle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PredictiveHittable, ____Color_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHittable, ____HasColor_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHittable, ____outputNodes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHittable, ____cullWeakHits) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHittable, ____preferMallet) == 0x41, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHittable, ____hitDimsLaser) == 0x42, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHittable, ____filterDirection) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHittable, ____filterAngle) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PredictiveHittable, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PredictiveHittable);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PredictiveHittable*, "VROSC", "PredictiveHittable");
