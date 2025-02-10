#pragma once
// IWYU pragma private; include "VROSC/FrameCreationAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
CORDL_MODULE_EXPORT(FrameCreationAsset)
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
class FrameCreationBehaviour;
}
namespace VROSC {
class FrameVisuals;
}
// Forward declare root types
namespace VROSC {
class FrameCreationAsset;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::FrameCreationAsset);
// Dependencies UnityEngine.ExposedReference`1<T>, UnityEngine.Playables.PlayableAsset
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FrameCreationAsset
class CORDL_TYPE FrameCreationAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field _assembling, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__assembling, put=__cordl_internal_set__assembling)) bool  _assembling;

/// @brief Field template, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_template, put=__cordl_internal_set__cordl_template)) ::VROSC::FrameCreationBehaviour*  _cordl_template;

/// @brief Field _target, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::FrameVisuals>>  _target;

/// @brief Method CreatePlayable, addr 0x1767760, size 0x12c, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

static inline ::VROSC::FrameCreationAsset* New_ctor() ;

constexpr bool const& __cordl_internal_get__assembling() const;

constexpr bool& __cordl_internal_get__assembling() ;

constexpr ::VROSC::FrameCreationBehaviour* const& __cordl_internal_get__cordl_template() const;

constexpr ::VROSC::FrameCreationBehaviour*& __cordl_internal_get__cordl_template() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::FrameVisuals>> const& __cordl_internal_get__target() const;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::FrameVisuals>>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__assembling(bool  value) ;

constexpr void __cordl_internal_set__cordl_template(::VROSC::FrameCreationBehaviour*  value) ;

constexpr void __cordl_internal_set__target(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::FrameVisuals>>  value) ;

/// @brief Method .ctor, addr 0x176788c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FrameCreationAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FrameCreationAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FrameCreationAsset(FrameCreationAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FrameCreationAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FrameCreationAsset(FrameCreationAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1190};

/// @brief Field template, offset: 0x18, size: 0x8, def value: None
 ::VROSC::FrameCreationBehaviour*  ____cordl_template;

/// @brief Field _target, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::FrameVisuals>>  ____target;

/// @brief Field _assembling, offset: 0x30, size: 0x1, def value: None
 bool  ____assembling;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FrameCreationAsset, ____cordl_template) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::FrameCreationAsset, ____target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FrameCreationAsset, ____assembling) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FrameCreationAsset, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::FrameCreationAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FrameCreationAsset*, "VROSC", "FrameCreationAsset");
