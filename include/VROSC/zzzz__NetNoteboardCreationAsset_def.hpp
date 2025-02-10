#pragma once
// IWYU pragma private; include "VROSC/NetNoteboardCreationAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
CORDL_MODULE_EXPORT(NetNoteboardCreationAsset)
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
class NetNoteboardCreationBehaviour;
}
namespace VROSC {
class NetNoteboard;
}
// Forward declare root types
namespace VROSC {
class NetNoteboardCreationAsset;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NetNoteboardCreationAsset);
// Dependencies UnityEngine.ExposedReference`1<T>, UnityEngine.Playables.PlayableAsset
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NetNoteboardCreationAsset
class CORDL_TYPE NetNoteboardCreationAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field template, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_template, put=__cordl_internal_set__cordl_template)) ::VROSC::NetNoteboardCreationBehaviour*  _cordl_template;

/// @brief Field _curve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__curve, put=__cordl_internal_set__curve)) ::UnityEngine::AnimationCurve*  _curve;

/// @brief Field _fromPoint, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__fromPoint, put=__cordl_internal_set__fromPoint)) ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  _fromPoint;

/// @brief Field _noteBoard, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__noteBoard, put=__cordl_internal_set__noteBoard)) ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::NetNoteboard>>  _noteBoard;

/// @brief Method CreatePlayable, addr 0x176b848, size 0x178, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

static inline ::VROSC::NetNoteboardCreationAsset* New_ctor() ;

constexpr ::VROSC::NetNoteboardCreationBehaviour* const& __cordl_internal_get__cordl_template() const;

constexpr ::VROSC::NetNoteboardCreationBehaviour*& __cordl_internal_get__cordl_template() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__curve() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__fromPoint() const;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__fromPoint() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::NetNoteboard>> const& __cordl_internal_get__noteBoard() const;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::NetNoteboard>>& __cordl_internal_get__noteBoard() ;

constexpr void __cordl_internal_set__cordl_template(::VROSC::NetNoteboardCreationBehaviour*  value) ;

constexpr void __cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__fromPoint(::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set__noteBoard(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::NetNoteboard>>  value) ;

/// @brief Method .ctor, addr 0x176bc50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetNoteboardCreationAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetNoteboardCreationAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetNoteboardCreationAsset(NetNoteboardCreationAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetNoteboardCreationAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetNoteboardCreationAsset(NetNoteboardCreationAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1215};

/// @brief Field template, offset: 0x18, size: 0x8, def value: None
 ::VROSC::NetNoteboardCreationBehaviour*  ____cordl_template;

/// @brief Field _fromPoint, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  ____fromPoint;

/// @brief Field _noteBoard, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::NetNoteboard>>  ____noteBoard;

/// @brief Field _curve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____curve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NetNoteboardCreationAsset, ____cordl_template) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::NetNoteboardCreationAsset, ____fromPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NetNoteboardCreationAsset, ____noteBoard) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::NetNoteboardCreationAsset, ____curve) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NetNoteboardCreationAsset, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NetNoteboardCreationAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NetNoteboardCreationAsset*, "VROSC", "NetNoteboardCreationAsset");
