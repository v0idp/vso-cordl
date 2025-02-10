#pragma once
// IWYU pragma private; include "VROSC/DisableColldiersAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
CORDL_MODULE_EXPORT(DisableColldiersAsset)
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
class DisableColldiersBehaviour;
}
// Forward declare root types
namespace VROSC {
class DisableColldiersAsset;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DisableColldiersAsset);
// Dependencies UnityEngine.Playables.PlayableAsset
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DisableColldiersAsset
class CORDL_TYPE DisableColldiersAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field template, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_template, put=__cordl_internal_set__cordl_template)) ::VROSC::DisableColldiersBehaviour*  _cordl_template;

/// @brief Method CreatePlayable, addr 0x1768560, size 0xfc, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

static inline ::VROSC::DisableColldiersAsset* New_ctor() ;

constexpr ::VROSC::DisableColldiersBehaviour* const& __cordl_internal_get__cordl_template() const;

constexpr ::VROSC::DisableColldiersBehaviour*& __cordl_internal_get__cordl_template() ;

constexpr void __cordl_internal_set__cordl_template(::VROSC::DisableColldiersBehaviour*  value) ;

/// @brief Method .ctor, addr 0x1768750, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DisableColldiersAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DisableColldiersAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DisableColldiersAsset(DisableColldiersAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisableColldiersAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisableColldiersAsset(DisableColldiersAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1204};

/// @brief Field template, offset: 0x18, size: 0x8, def value: None
 ::VROSC::DisableColldiersBehaviour*  ____cordl_template;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DisableColldiersAsset, ____cordl_template) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DisableColldiersAsset, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DisableColldiersAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DisableColldiersAsset*, "VROSC", "DisableColldiersAsset");
