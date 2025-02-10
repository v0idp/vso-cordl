#pragma once
// IWYU pragma private; include "VROSC/FractureCreationCreationBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FractureCreationCreationBehaviour)
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
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
struct FractureCreationCreationBehaviour_AnimationData;
}
namespace VROSC {
class FracturedObjectController;
}
namespace VROSC {
class MinMaxFloat;
}
// Forward declare root types
namespace VROSC {
class FractureCreationCreationBehaviour;
}
namespace VROSC {
struct FractureCreationCreationBehaviour_AnimationData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::FractureCreationCreationBehaviour);
MARK_VAL_T(::VROSC::FractureCreationCreationBehaviour_AnimationData);
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace VROSC {
// Is value type: true
// CS Name: VROSC.FractureCreationCreationBehaviour/AnimationData
struct CORDL_TYPE FractureCreationCreationBehaviour_AnimationData {
public:
// Declarations
 __declspec(property(get=get_Position)) ::UnityEngine::Vector3  Position;

 __declspec(property(get=get_Rotation)) ::UnityEngine::Quaternion  Rotation;

 __declspec(property(get=get_Scale)) ::UnityEngine::Vector3  Scale;

/// @brief Method .ctor, addr 0x17673c0, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale) ;

/// @brief Method get_Position, addr 0x17673ec, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Position() ;

/// @brief Method get_Rotation, addr 0x17673f8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_Rotation() ;

/// @brief Method get_Scale, addr 0x1767404, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Scale() ;

// Ctor Parameters []
// @brief default ctor
constexpr FractureCreationCreationBehaviour_AnimationData() ;

// Ctor Parameters [CppParam { name: "_Position_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_Rotation_k__BackingField", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "_Scale_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr FractureCreationCreationBehaviour_AnimationData(::UnityEngine::Vector3  _Position_k__BackingField, ::UnityEngine::Quaternion  _Rotation_k__BackingField, ::UnityEngine::Vector3  _Scale_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1186};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <Position>k__BackingField, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  _Position_k__BackingField;

/// @brief Field <Rotation>k__BackingField, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  _Rotation_k__BackingField;

/// @brief Field <Scale>k__BackingField, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  _Scale_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FractureCreationCreationBehaviour_AnimationData, _Position_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::FractureCreationCreationBehaviour_AnimationData, _Rotation_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::VROSC::FractureCreationCreationBehaviour_AnimationData, _Scale_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FractureCreationCreationBehaviour_AnimationData, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FractureCreationCreationBehaviour
class CORDL_TYPE FractureCreationCreationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
using AnimationData = ::VROSC::FractureCreationCreationBehaviour_AnimationData;

/// @brief Field EndPoint, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_EndPoint, put=__cordl_internal_set_EndPoint)) float_t  EndPoint;

/// @brief Field FractureLength, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_FractureLength, put=__cordl_internal_set_FractureLength)) ::VROSC::MinMaxFloat*  FractureLength;

/// @brief Field StartPoint, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_StartPoint, put=__cordl_internal_set_StartPoint)) float_t  StartPoint;

/// @brief Field _assembling, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__assembling, put=__cordl_internal_set__assembling)) bool  _assembling;

/// @brief Field _endData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__endData, put=__cordl_internal_set__endData)) ::ArrayW<::VROSC::FractureCreationCreationBehaviour_AnimationData,::Array<::VROSC::FractureCreationCreationBehaviour_AnimationData>*>  _endData;

/// @brief Field _startData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__startData, put=__cordl_internal_set__startData)) ::ArrayW<::VROSC::FractureCreationCreationBehaviour_AnimationData,::Array<::VROSC::FractureCreationCreationBehaviour_AnimationData>*>  _startData;

/// @brief Field _target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::VROSC::FracturedObjectController>  _target;

/// @brief Method GetAmount, addr 0x1766c60, size 0x68, virtual false, abstract: false, final false
inline float_t GetAmount(int32_t  i) ;

/// @brief Method GetEnd, addr 0x17669d8, size 0x15c, virtual false, abstract: false, final false
inline ::VROSC::FractureCreationCreationBehaviour_AnimationData GetEnd(bool  assembling, ::UnityEngine::Vector3  fracturePos, int32_t  i) ;

/// @brief Method GetFracturePos, addr 0x1767178, size 0xcc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetFracturePos(::UnityEngine::Vector3  fracturePos) ;

/// @brief Method GetFracutreRotation, addr 0x1767244, size 0x17c, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetFracutreRotation(int32_t  i) ;

/// @brief Method GetStart, addr 0x176687c, size 0x15c, virtual false, abstract: false, final false
inline ::VROSC::FractureCreationCreationBehaviour_AnimationData GetStart(bool  assembling, ::UnityEngine::Vector3  fracturePos, int32_t  i) ;

static inline ::VROSC::FractureCreationCreationBehaviour* New_ctor() ;

/// @brief Method OnPlayableDestroy, addr 0x1766f68, size 0xc8, virtual false, abstract: false, final false
inline void OnPlayableDestroy() ;

/// @brief Method ProcessFrame, addr 0x1766b34, size 0x12c, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method SetObjectValues, addr 0x1766cc8, size 0x2a0, virtual false, abstract: false, final false
inline void SetObjectValues(int32_t  i, float_t  amount) ;

/// @brief Method Setup, addr 0x1766608, size 0x26c, virtual false, abstract: false, final false
inline void Setup(::VROSC::FracturedObjectController*  target, ::UnityEngine::Transform*  _fracturePosition, bool  assembling) ;

constexpr float_t const& __cordl_internal_get_EndPoint() const;

constexpr float_t& __cordl_internal_get_EndPoint() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get_FractureLength() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get_FractureLength() ;

constexpr float_t const& __cordl_internal_get_StartPoint() const;

constexpr float_t& __cordl_internal_get_StartPoint() ;

constexpr bool const& __cordl_internal_get__assembling() const;

constexpr bool& __cordl_internal_get__assembling() ;

constexpr ::ArrayW<::VROSC::FractureCreationCreationBehaviour_AnimationData,::Array<::VROSC::FractureCreationCreationBehaviour_AnimationData>*> const& __cordl_internal_get__endData() const;

constexpr ::ArrayW<::VROSC::FractureCreationCreationBehaviour_AnimationData,::Array<::VROSC::FractureCreationCreationBehaviour_AnimationData>*>& __cordl_internal_get__endData() ;

constexpr ::ArrayW<::VROSC::FractureCreationCreationBehaviour_AnimationData,::Array<::VROSC::FractureCreationCreationBehaviour_AnimationData>*> const& __cordl_internal_get__startData() const;

constexpr ::ArrayW<::VROSC::FractureCreationCreationBehaviour_AnimationData,::Array<::VROSC::FractureCreationCreationBehaviour_AnimationData>*>& __cordl_internal_get__startData() ;

constexpr ::UnityW<::VROSC::FracturedObjectController> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::VROSC::FracturedObjectController>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set_EndPoint(float_t  value) ;

constexpr void __cordl_internal_set_FractureLength(::VROSC::MinMaxFloat*  value) ;

constexpr void __cordl_internal_set_StartPoint(float_t  value) ;

constexpr void __cordl_internal_set__assembling(bool  value) ;

constexpr void __cordl_internal_set__endData(::ArrayW<::VROSC::FractureCreationCreationBehaviour_AnimationData,::Array<::VROSC::FractureCreationCreationBehaviour_AnimationData>*>  value) ;

constexpr void __cordl_internal_set__startData(::ArrayW<::VROSC::FractureCreationCreationBehaviour_AnimationData,::Array<::VROSC::FractureCreationCreationBehaviour_AnimationData>*>  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::VROSC::FracturedObjectController>  value) ;

/// @brief Method .ctor, addr 0x17673e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FractureCreationCreationBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FractureCreationCreationBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FractureCreationCreationBehaviour(FractureCreationCreationBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FractureCreationCreationBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FractureCreationCreationBehaviour(FractureCreationCreationBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1187};

/// @brief Field _target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::FracturedObjectController>  ____target;

/// @brief Field _startData, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::VROSC::FractureCreationCreationBehaviour_AnimationData,::Array<::VROSC::FractureCreationCreationBehaviour_AnimationData>*>  ____startData;

/// @brief Field _endData, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::VROSC::FractureCreationCreationBehaviour_AnimationData,::Array<::VROSC::FractureCreationCreationBehaviour_AnimationData>*>  ____endData;

/// @brief Field _assembling, offset: 0x28, size: 0x1, def value: None
 bool  ____assembling;

/// @brief Field FractureLength, offset: 0x30, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ___FractureLength;

/// @brief Field StartPoint, offset: 0x38, size: 0x4, def value: None
 float_t  ___StartPoint;

/// @brief Field EndPoint, offset: 0x3c, size: 0x4, def value: None
 float_t  ___EndPoint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FractureCreationCreationBehaviour, ____target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::FractureCreationCreationBehaviour, ____startData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::FractureCreationCreationBehaviour, ____endData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FractureCreationCreationBehaviour, ____assembling) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FractureCreationCreationBehaviour, ___FractureLength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::FractureCreationCreationBehaviour, ___StartPoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::FractureCreationCreationBehaviour, ___EndPoint) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FractureCreationCreationBehaviour, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::FractureCreationCreationBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FractureCreationCreationBehaviour*, "VROSC", "FractureCreationCreationBehaviour");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FractureCreationCreationBehaviour_AnimationData, "VROSC", "FractureCreationCreationBehaviour/AnimationData");
