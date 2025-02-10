#pragma once
// IWYU pragma private; include "VROSC/AdjustableMeshTintAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
#include "VROSC/zzzz__AnimatedAppear_def.hpp"
CORDL_MODULE_EXPORT(AdjustableMeshTintAsset)
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
class AdjustableMeshTintBehaviour;
}
namespace VROSC {
class AdjustableMesh;
}
// Forward declare root types
namespace VROSC {
class AdjustableMeshTintAsset;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AdjustableMeshTintAsset);
// Dependencies UnityEngine.ExposedReference`1<T>, UnityEngine.Playables.PlayableAsset, VROSC.AnimatedAppear::Mode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AdjustableMeshTintAsset
class CORDL_TYPE AdjustableMeshTintAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field template, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_template, put=__cordl_internal_set__cordl_template)) ::VROSC::AdjustableMeshTintBehaviour*  _cordl_template;

/// @brief Field _mesh, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__mesh, put=__cordl_internal_set__mesh)) ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::AdjustableMesh>>  _mesh;

/// @brief Field mode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::VROSC::AnimatedAppear_Mode  mode;

/// @brief Method CreatePlayable, addr 0x176f860, size 0x148, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

static inline ::VROSC::AdjustableMeshTintAsset* New_ctor() ;

constexpr ::VROSC::AdjustableMeshTintBehaviour* const& __cordl_internal_get__cordl_template() const;

constexpr ::VROSC::AdjustableMeshTintBehaviour*& __cordl_internal_get__cordl_template() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::AdjustableMesh>> const& __cordl_internal_get__mesh() const;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::AdjustableMesh>>& __cordl_internal_get__mesh() ;

constexpr ::VROSC::AnimatedAppear_Mode const& __cordl_internal_get_mode() const;

constexpr ::VROSC::AnimatedAppear_Mode& __cordl_internal_get_mode() ;

constexpr void __cordl_internal_set__cordl_template(::VROSC::AdjustableMeshTintBehaviour*  value) ;

constexpr void __cordl_internal_set__mesh(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::AdjustableMesh>>  value) ;

constexpr void __cordl_internal_set_mode(::VROSC::AnimatedAppear_Mode  value) ;

/// @brief Method .ctor, addr 0x176f9d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdjustableMeshTintAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshTintAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdjustableMeshTintAsset(AdjustableMeshTintAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshTintAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdjustableMeshTintAsset(AdjustableMeshTintAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1235};

/// @brief Field template, offset: 0x18, size: 0x8, def value: None
 ::VROSC::AdjustableMeshTintBehaviour*  ____cordl_template;

/// @brief Field _mesh, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::AdjustableMesh>>  ____mesh;

/// @brief Field mode, offset: 0x30, size: 0x4, def value: None
 ::VROSC::AnimatedAppear_Mode  ___mode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AdjustableMeshTintAsset, ____cordl_template) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshTintAsset, ____mesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshTintAsset, ___mode) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AdjustableMeshTintAsset, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AdjustableMeshTintAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMeshTintAsset*, "VROSC", "AdjustableMeshTintAsset");
