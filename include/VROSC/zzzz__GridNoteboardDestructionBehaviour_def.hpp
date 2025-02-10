#pragma once
// IWYU pragma private; include "VROSC/GridNoteboardDestructionBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GridNoteboardDestructionBehaviour)
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
class AnimationCurve;
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
class GridNoteboard;
}
namespace VROSC {
class NoteBoardNote;
}
// Forward declare root types
namespace VROSC {
class GridNoteboardDestructionBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::GridNoteboardDestructionBehaviour);
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.GridNoteboardDestructionBehaviour
class CORDL_TYPE GridNoteboardDestructionBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief Field EndPoint, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_EndPoint, put=__cordl_internal_set_EndPoint)) float_t  EndPoint;

/// @brief Field StartPoint, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_StartPoint, put=__cordl_internal_set_StartPoint)) float_t  StartPoint;

/// @brief Field _curve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__curve, put=__cordl_internal_set__curve)) ::UnityEngine::AnimationCurve*  _curve;

/// @brief Field _gridNoteboard, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__gridNoteboard, put=__cordl_internal_set__gridNoteboard)) ::UnityW<::VROSC::GridNoteboard>  _gridNoteboard;

/// @brief Field _positionOffset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__positionOffset, put=__cordl_internal_set__positionOffset)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _positionOffset;

/// @brief Field _rotationOffset, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationOffset, put=__cordl_internal_set__rotationOffset)) ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>  _rotationOffset;

/// @brief Field _toPoint, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__toPoint, put=__cordl_internal_set__toPoint)) ::UnityW<::UnityEngine::Transform>  _toPoint;

/// @brief Field zPos, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_zPos, put=__cordl_internal_set_zPos)) bool  zPos;

static inline ::VROSC::GridNoteboardDestructionBehaviour* New_ctor() ;

/// @brief Method OnPlayableDestroy, addr 0x176a7b4, size 0xd0, virtual false, abstract: false, final false
inline void OnPlayableDestroy() ;

/// @brief Method ProcessFrame, addr 0x1769d9c, size 0x114, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method SetNoteValues, addr 0x176a214, size 0x5a0, virtual false, abstract: false, final false
inline void SetNoteValues(::VROSC::NoteBoardNote*  note, float_t  activationTime, int32_t  index, float_t  x) ;

/// @brief Method Setup, addr 0x1769b04, size 0x290, virtual false, abstract: false, final false
inline void Setup(::VROSC::GridNoteboard*  gridNoteboard, ::UnityEngine::Transform*  toPoint, ::UnityEngine::AnimationCurve*  curve) ;

/// @brief Method X, addr 0x176a068, size 0x1ac, virtual false, abstract: false, final false
inline void X(::System::Object*  notes, int32_t  xLength, int32_t  yLength, int32_t  zLength) ;

/// @brief Method Z, addr 0x1769eb0, size 0x1b8, virtual false, abstract: false, final false
inline void Z(::System::Object*  notes, int32_t  xLength, int32_t  yLength, int32_t  zLength) ;

constexpr float_t const& __cordl_internal_get_EndPoint() const;

constexpr float_t& __cordl_internal_get_EndPoint() ;

constexpr float_t const& __cordl_internal_get_StartPoint() const;

constexpr float_t& __cordl_internal_get_StartPoint() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__curve() ;

constexpr ::UnityW<::VROSC::GridNoteboard> const& __cordl_internal_get__gridNoteboard() const;

constexpr ::UnityW<::VROSC::GridNoteboard>& __cordl_internal_get__gridNoteboard() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__positionOffset() const;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__positionOffset() ;

constexpr ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*> const& __cordl_internal_get__rotationOffset() const;

constexpr ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>& __cordl_internal_get__rotationOffset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__toPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__toPoint() ;

constexpr bool const& __cordl_internal_get_zPos() const;

constexpr bool& __cordl_internal_get_zPos() ;

constexpr void __cordl_internal_set_EndPoint(float_t  value) ;

constexpr void __cordl_internal_set_StartPoint(float_t  value) ;

constexpr void __cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__gridNoteboard(::UnityW<::VROSC::GridNoteboard>  value) ;

constexpr void __cordl_internal_set__positionOffset(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr void __cordl_internal_set__rotationOffset(::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>  value) ;

constexpr void __cordl_internal_set__toPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_zPos(bool  value) ;

/// @brief Method .ctor, addr 0x176a884, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GridNoteboardDestructionBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GridNoteboardDestructionBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GridNoteboardDestructionBehaviour(GridNoteboardDestructionBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GridNoteboardDestructionBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GridNoteboardDestructionBehaviour(GridNoteboardDestructionBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1211};

/// @brief Field _gridNoteboard, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::GridNoteboard>  ____gridNoteboard;

/// @brief Field _toPoint, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____toPoint;

/// @brief Field _curve, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____curve;

/// @brief Field _positionOffset, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  ____positionOffset;

/// @brief Field _rotationOffset, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>  ____rotationOffset;

/// @brief Field StartPoint, offset: 0x38, size: 0x4, def value: None
 float_t  ___StartPoint;

/// @brief Field EndPoint, offset: 0x3c, size: 0x4, def value: None
 float_t  ___EndPoint;

/// @brief Field zPos, offset: 0x40, size: 0x1, def value: None
 bool  ___zPos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GridNoteboardDestructionBehaviour, ____gridNoteboard) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::GridNoteboardDestructionBehaviour, ____toPoint) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::GridNoteboardDestructionBehaviour, ____curve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::GridNoteboardDestructionBehaviour, ____positionOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::GridNoteboardDestructionBehaviour, ____rotationOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::GridNoteboardDestructionBehaviour, ___StartPoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::GridNoteboardDestructionBehaviour, ___EndPoint) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::GridNoteboardDestructionBehaviour, ___zPos) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GridNoteboardDestructionBehaviour, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::GridNoteboardDestructionBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GridNoteboardDestructionBehaviour*, "VROSC", "GridNoteboardDestructionBehaviour");
