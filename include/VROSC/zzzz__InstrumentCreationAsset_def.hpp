#pragma once
// IWYU pragma private; include "VROSC/InstrumentCreationAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
CORDL_MODULE_EXPORT(InstrumentCreationAsset)
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
class InstrumentCreationBehaviour;
}
// Forward declare root types
namespace VROSC {
class InstrumentCreationAsset;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InstrumentCreationAsset);
// Dependencies UnityEngine.Playables.PlayableAsset
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InstrumentCreationAsset
class CORDL_TYPE InstrumentCreationAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field template, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_template, put=__cordl_internal_set__cordl_template)) ::VROSC::InstrumentCreationBehaviour*  _cordl_template;

/// @brief Method CreatePlayable, addr 0x17688a8, size 0x11c, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

static inline ::VROSC::InstrumentCreationAsset* New_ctor() ;

constexpr ::VROSC::InstrumentCreationBehaviour* const& __cordl_internal_get__cordl_template() const;

constexpr ::VROSC::InstrumentCreationBehaviour*& __cordl_internal_get__cordl_template() ;

constexpr void __cordl_internal_set__cordl_template(::VROSC::InstrumentCreationBehaviour*  value) ;

/// @brief Method .ctor, addr 0x17689c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstrumentCreationAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstrumentCreationAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstrumentCreationAsset(InstrumentCreationAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstrumentCreationAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstrumentCreationAsset(InstrumentCreationAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1206};

/// @brief Field template, offset: 0x18, size: 0x8, def value: None
 ::VROSC::InstrumentCreationBehaviour*  ____cordl_template;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InstrumentCreationAsset, ____cordl_template) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InstrumentCreationAsset, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InstrumentCreationAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentCreationAsset*, "VROSC", "InstrumentCreationAsset");
