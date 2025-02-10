#pragma once
// IWYU pragma private; include "VROSC/NoteBoardNoteHintAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
CORDL_MODULE_EXPORT(NoteBoardNoteHintAsset)
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Renderer;
}
namespace VROSC {
class NoteBoardNoteHintBehaviour;
}
// Forward declare root types
namespace VROSC {
class NoteBoardNoteHintAsset;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteBoardNoteHintAsset);
// Dependencies UnityEngine.ExposedReference`1<T>, UnityEngine.Playables.PlayableAsset
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteBoardNoteHintAsset
class CORDL_TYPE NoteBoardNoteHintAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field template, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_template, put=__cordl_internal_set__cordl_template)) ::VROSC::NoteBoardNoteHintBehaviour*  _cordl_template;

/// @brief Field _target, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Renderer>>  _target;

/// @brief Method CreatePlayable, addr 0x17680fc, size 0x130, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

static inline ::VROSC::NoteBoardNoteHintAsset* New_ctor() ;

constexpr ::VROSC::NoteBoardNoteHintBehaviour* const& __cordl_internal_get__cordl_template() const;

constexpr ::VROSC::NoteBoardNoteHintBehaviour*& __cordl_internal_get__cordl_template() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get__target() const;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__cordl_template(::VROSC::NoteBoardNoteHintBehaviour*  value) ;

constexpr void __cordl_internal_set__target(::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Renderer>>  value) ;

/// @brief Method .ctor, addr 0x1768254, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteBoardNoteHintAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNoteHintAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteBoardNoteHintAsset(NoteBoardNoteHintAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNoteHintAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteBoardNoteHintAsset(NoteBoardNoteHintAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1200};

/// @brief Field template, offset: 0x18, size: 0x8, def value: None
 ::VROSC::NoteBoardNoteHintBehaviour*  ____cordl_template;

/// @brief Field _target, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Renderer>>  ____target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoardNoteHintAsset, ____cordl_template) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteHintAsset, ____target) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoardNoteHintAsset, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteBoardNoteHintAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardNoteHintAsset*, "VROSC", "NoteBoardNoteHintAsset");
