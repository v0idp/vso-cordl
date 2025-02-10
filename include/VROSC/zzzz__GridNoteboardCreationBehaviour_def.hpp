#pragma once
// IWYU pragma private; include "VROSC/GridNoteboardCreationBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GridNoteboardCreationBehaviour)
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
class GridNoteboardCreationBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::GridNoteboardCreationBehaviour);
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.GridNoteboardCreationBehaviour
class CORDL_TYPE GridNoteboardCreationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief Field Clustr, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Clustr, put=__cordl_internal_set_Clustr)) ::UnityEngine::AnimationCurve*  Clustr;

/// @brief Field EndPoint, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_EndPoint, put=__cordl_internal_set_EndPoint)) float_t  EndPoint;

/// @brief Field StartPoint, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_StartPoint, put=__cordl_internal_set_StartPoint)) float_t  StartPoint;

/// @brief Field _curve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__curve, put=__cordl_internal_set__curve)) ::UnityEngine::AnimationCurve*  _curve;

/// @brief Field _fromPoint, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__fromPoint, put=__cordl_internal_set__fromPoint)) ::UnityW<::UnityEngine::Transform>  _fromPoint;

/// @brief Field _gridNoteboard, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__gridNoteboard, put=__cordl_internal_set__gridNoteboard)) ::UnityW<::VROSC::GridNoteboard>  _gridNoteboard;

/// @brief Field _positionOffset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__positionOffset, put=__cordl_internal_set__positionOffset)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _positionOffset;

/// @brief Field _rotationOffset, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationOffset, put=__cordl_internal_set__rotationOffset)) ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>  _rotationOffset;

/// @brief Field zPos, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_zPos, put=__cordl_internal_set_zPos)) bool  zPos;

static inline ::VROSC::GridNoteboardCreationBehaviour* New_ctor() ;

/// @brief Method OnPlayableDestroy, addr 0x17698b4, size 0xd0, virtual false, abstract: false, final false
inline void OnPlayableDestroy() ;

/// @brief Method ProcessFrame, addr 0x1768e98, size 0x114, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method SetNoteValues, addr 0x1769310, size 0x5a4, virtual false, abstract: false, final false
inline void SetNoteValues(::VROSC::NoteBoardNote*  note, float_t  activationTime, int32_t  index, float_t  x) ;

/// @brief Method Setup, addr 0x1768c00, size 0x290, virtual false, abstract: false, final false
inline void Setup(::VROSC::GridNoteboard*  gridNoteboard, ::UnityEngine::Transform*  fromPoint, ::UnityEngine::AnimationCurve*  curve) ;

/// @brief Method X, addr 0x1769164, size 0x1ac, virtual false, abstract: false, final false
inline void X(::System::Object*  notes, int32_t  xLength, int32_t  yLength, int32_t  zLength) ;

/// @brief Method Z, addr 0x1768fac, size 0x1b8, virtual false, abstract: false, final false
inline void Z(::System::Object*  notes, int32_t  xLength, int32_t  yLength, int32_t  zLength) ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_Clustr() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_Clustr() ;

constexpr float_t const& __cordl_internal_get_EndPoint() const;

constexpr float_t& __cordl_internal_get_EndPoint() ;

constexpr float_t const& __cordl_internal_get_StartPoint() const;

constexpr float_t& __cordl_internal_get_StartPoint() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__curve() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__fromPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__fromPoint() ;

constexpr ::UnityW<::VROSC::GridNoteboard> const& __cordl_internal_get__gridNoteboard() const;

constexpr ::UnityW<::VROSC::GridNoteboard>& __cordl_internal_get__gridNoteboard() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__positionOffset() const;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__positionOffset() ;

constexpr ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*> const& __cordl_internal_get__rotationOffset() const;

constexpr ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>& __cordl_internal_get__rotationOffset() ;

constexpr bool const& __cordl_internal_get_zPos() const;

constexpr bool& __cordl_internal_get_zPos() ;

constexpr void __cordl_internal_set_Clustr(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_EndPoint(float_t  value) ;

constexpr void __cordl_internal_set_StartPoint(float_t  value) ;

constexpr void __cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__fromPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__gridNoteboard(::UnityW<::VROSC::GridNoteboard>  value) ;

constexpr void __cordl_internal_set__positionOffset(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr void __cordl_internal_set__rotationOffset(::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>  value) ;

constexpr void __cordl_internal_set_zPos(bool  value) ;

/// @brief Method .ctor, addr 0x1769984, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GridNoteboardCreationBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GridNoteboardCreationBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GridNoteboardCreationBehaviour(GridNoteboardCreationBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GridNoteboardCreationBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GridNoteboardCreationBehaviour(GridNoteboardCreationBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1209};

/// @brief Field _gridNoteboard, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::GridNoteboard>  ____gridNoteboard;

/// @brief Field _fromPoint, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____fromPoint;

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

/// @brief Field Clustr, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___Clustr;

/// @brief Field zPos, offset: 0x48, size: 0x1, def value: None
 bool  ___zPos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GridNoteboardCreationBehaviour, ____gridNoteboard) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::GridNoteboardCreationBehaviour, ____fromPoint) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::GridNoteboardCreationBehaviour, ____curve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::GridNoteboardCreationBehaviour, ____positionOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::GridNoteboardCreationBehaviour, ____rotationOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::GridNoteboardCreationBehaviour, ___StartPoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::GridNoteboardCreationBehaviour, ___EndPoint) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::GridNoteboardCreationBehaviour, ___Clustr) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::GridNoteboardCreationBehaviour, ___zPos) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GridNoteboardCreationBehaviour, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::GridNoteboardCreationBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GridNoteboardCreationBehaviour*, "VROSC", "GridNoteboardCreationBehaviour");
