#pragma once
// IWYU pragma private; include "VROSC/GridNoteboardCreationAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
CORDL_MODULE_EXPORT(GridNoteboardCreationAsset)
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class GridNoteboardCreationBehaviour;
}
namespace VROSC {
class GridNoteboard;
}
// Forward declare root types
namespace VROSC {
class GridNoteboardCreationAsset;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::GridNoteboardCreationAsset);
// Dependencies UnityEngine.ExposedReference`1<T>, UnityEngine.Playables.PlayableAsset
namespace VROSC {
// Is value type: false
// CS Name: VROSC.GridNoteboardCreationAsset
class CORDL_TYPE GridNoteboardCreationAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field template, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_template, put=__cordl_internal_set__cordl_template)) ::VROSC::GridNoteboardCreationBehaviour*  _cordl_template;

/// @brief Field _curve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__curve, put=__cordl_internal_set__curve)) ::UnityEngine::AnimationCurve*  _curve;

/// @brief Field _fromPoint, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__fromPoint, put=__cordl_internal_set__fromPoint)) ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  _fromPoint;

/// @brief Field _noteBoard, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__noteBoard, put=__cordl_internal_set__noteBoard)) ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::GridNoteboard>>  _noteBoard;

/// @brief Method CreatePlayable, addr 0x1768a88, size 0x178, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

static inline ::VROSC::GridNoteboardCreationAsset* New_ctor() ;

constexpr ::VROSC::GridNoteboardCreationBehaviour* const& __cordl_internal_get__cordl_template() const;

constexpr ::VROSC::GridNoteboardCreationBehaviour*& __cordl_internal_get__cordl_template() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__curve() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__fromPoint() const;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__fromPoint() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::GridNoteboard>> const& __cordl_internal_get__noteBoard() const;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::GridNoteboard>>& __cordl_internal_get__noteBoard() ;

constexpr void __cordl_internal_set__cordl_template(::VROSC::GridNoteboardCreationBehaviour*  value) ;

constexpr void __cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__fromPoint(::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set__noteBoard(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::GridNoteboard>>  value) ;

/// @brief Method .ctor, addr 0x1768e90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GridNoteboardCreationAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GridNoteboardCreationAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GridNoteboardCreationAsset(GridNoteboardCreationAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GridNoteboardCreationAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GridNoteboardCreationAsset(GridNoteboardCreationAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1208};

/// @brief Field template, offset: 0x18, size: 0x8, def value: None
 ::VROSC::GridNoteboardCreationBehaviour*  ____cordl_template;

/// @brief Field _fromPoint, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  ____fromPoint;

/// @brief Field _noteBoard, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::GridNoteboard>>  ____noteBoard;

/// @brief Field _curve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____curve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GridNoteboardCreationAsset, ____cordl_template) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::GridNoteboardCreationAsset, ____fromPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::GridNoteboardCreationAsset, ____noteBoard) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::GridNoteboardCreationAsset, ____curve) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GridNoteboardCreationAsset, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::GridNoteboardCreationAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GridNoteboardCreationAsset*, "VROSC", "GridNoteboardCreationAsset");
