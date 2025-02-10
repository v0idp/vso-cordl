#pragma once
// IWYU pragma private; include "VROSC/OrganPipeCreationAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
CORDL_MODULE_EXPORT(OrganPipeCreationAsset)
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
namespace VROSC {
class OrganPipeCreationBehaviour;
}
namespace VROSC {
class OrganPipeRow;
}
// Forward declare root types
namespace VROSC {
class OrganPipeCreationAsset;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::OrganPipeCreationAsset);
// Dependencies UnityEngine.ExposedReference`1<T>, UnityEngine.Playables.PlayableAsset
namespace VROSC {
// Is value type: false
// CS Name: VROSC.OrganPipeCreationAsset
class CORDL_TYPE OrganPipeCreationAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field template, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_template, put=__cordl_internal_set__cordl_template)) ::VROSC::OrganPipeCreationBehaviour*  _cordl_template;

/// @brief Field _endCurve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__endCurve, put=__cordl_internal_set__endCurve)) ::UnityEngine::AnimationCurve*  _endCurve;

/// @brief Field _row, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__row, put=__cordl_internal_set__row)) ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::OrganPipeRow>>  _row;

/// @brief Field _startCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__startCurve, put=__cordl_internal_set__startCurve)) ::UnityEngine::AnimationCurve*  _startCurve;

/// @brief Method CreatePlayable, addr 0x176c3fc, size 0x134, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

static inline ::VROSC::OrganPipeCreationAsset* New_ctor() ;

constexpr ::VROSC::OrganPipeCreationBehaviour* const& __cordl_internal_get__cordl_template() const;

constexpr ::VROSC::OrganPipeCreationBehaviour*& __cordl_internal_get__cordl_template() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__endCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__endCurve() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::OrganPipeRow>> const& __cordl_internal_get__row() const;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::OrganPipeRow>>& __cordl_internal_get__row() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__startCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__startCurve() ;

constexpr void __cordl_internal_set__cordl_template(::VROSC::OrganPipeCreationBehaviour*  value) ;

constexpr void __cordl_internal_set__endCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__row(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::OrganPipeRow>>  value) ;

constexpr void __cordl_internal_set__startCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x176c628, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OrganPipeCreationAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OrganPipeCreationAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrganPipeCreationAsset(OrganPipeCreationAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrganPipeCreationAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrganPipeCreationAsset(OrganPipeCreationAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1217};

/// @brief Field template, offset: 0x18, size: 0x8, def value: None
 ::VROSC::OrganPipeCreationBehaviour*  ____cordl_template;

/// @brief Field _row, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::OrganPipeRow>>  ____row;

/// @brief Field _startCurve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____startCurve;

/// @brief Field _endCurve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____endCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::OrganPipeCreationAsset, ____cordl_template) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeCreationAsset, ____row) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeCreationAsset, ____startCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrganPipeCreationAsset, ____endCurve) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::OrganPipeCreationAsset, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::OrganPipeCreationAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OrganPipeCreationAsset*, "VROSC", "OrganPipeCreationAsset");
