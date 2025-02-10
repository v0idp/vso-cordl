#pragma once
// IWYU pragma private; include "VROSC/DrumpadHitHintAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
CORDL_MODULE_EXPORT(DrumpadHitHintAsset)
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class DrumPadEffectOnSignal;
}
namespace VROSC {
class DrumpadHitHintBehaviour;
}
// Forward declare root types
namespace VROSC {
class DrumpadHitHintAsset;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DrumpadHitHintAsset);
// Dependencies UnityEngine.ExposedReference`1<T>, UnityEngine.Playables.PlayableAsset
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DrumpadHitHintAsset
class CORDL_TYPE DrumpadHitHintAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field template, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_template, put=__cordl_internal_set__cordl_template)) ::VROSC::DrumpadHitHintBehaviour*  _cordl_template;

/// @brief Field _target, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::DrumPadEffectOnSignal>>  _target;

/// @brief Method CreatePlayable, addr 0x1767bc0, size 0x130, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

static inline ::VROSC::DrumpadHitHintAsset* New_ctor() ;

constexpr ::VROSC::DrumpadHitHintBehaviour* const& __cordl_internal_get__cordl_template() const;

constexpr ::VROSC::DrumpadHitHintBehaviour*& __cordl_internal_get__cordl_template() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::DrumPadEffectOnSignal>> const& __cordl_internal_get__target() const;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::DrumPadEffectOnSignal>>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__cordl_template(::VROSC::DrumpadHitHintBehaviour*  value) ;

constexpr void __cordl_internal_set__target(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::DrumPadEffectOnSignal>>  value) ;

/// @brief Method .ctor, addr 0x1767d20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrumpadHitHintAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrumpadHitHintAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrumpadHitHintAsset(DrumpadHitHintAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrumpadHitHintAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrumpadHitHintAsset(DrumpadHitHintAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1194};

/// @brief Field template, offset: 0x18, size: 0x8, def value: None
 ::VROSC::DrumpadHitHintBehaviour*  ____cordl_template;

/// @brief Field _target, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::DrumPadEffectOnSignal>>  ____target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DrumpadHitHintAsset, ____cordl_template) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadHitHintAsset, ____target) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DrumpadHitHintAsset, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DrumpadHitHintAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DrumpadHitHintAsset*, "VROSC", "DrumpadHitHintAsset");
