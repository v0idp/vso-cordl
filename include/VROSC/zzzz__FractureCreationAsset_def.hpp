#pragma once
// IWYU pragma private; include "VROSC/FractureCreationAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
CORDL_MODULE_EXPORT(FractureCreationAsset)
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
class Transform;
}
namespace VROSC {
class FractureCreationCreationBehaviour;
}
namespace VROSC {
class FracturedObjectController;
}
// Forward declare root types
namespace VROSC {
class FractureCreationAsset;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::FractureCreationAsset);
// Dependencies UnityEngine.ExposedReference`1<T>, UnityEngine.Playables.PlayableAsset
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FractureCreationAsset
class CORDL_TYPE FractureCreationAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field _assembling, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__assembling, put=__cordl_internal_set__assembling)) bool  _assembling;

/// @brief Field template, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_template, put=__cordl_internal_set__cordl_template)) ::VROSC::FractureCreationCreationBehaviour*  _cordl_template;

/// @brief Field _fracturePos, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__fracturePos, put=__cordl_internal_set__fracturePos)) ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  _fracturePos;

/// @brief Field _target, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::FracturedObjectController>>  _target;

/// @brief Method CreatePlayable, addr 0x1766490, size 0x178, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

static inline ::VROSC::FractureCreationAsset* New_ctor() ;

constexpr bool const& __cordl_internal_get__assembling() const;

constexpr bool& __cordl_internal_get__assembling() ;

constexpr ::VROSC::FractureCreationCreationBehaviour* const& __cordl_internal_get__cordl_template() const;

constexpr ::VROSC::FractureCreationCreationBehaviour*& __cordl_internal_get__cordl_template() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__fracturePos() const;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__fracturePos() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::FracturedObjectController>> const& __cordl_internal_get__target() const;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::FracturedObjectController>>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__assembling(bool  value) ;

constexpr void __cordl_internal_set__cordl_template(::VROSC::FractureCreationCreationBehaviour*  value) ;

constexpr void __cordl_internal_set__fracturePos(::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set__target(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::FracturedObjectController>>  value) ;

/// @brief Method .ctor, addr 0x1766874, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FractureCreationAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FractureCreationAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FractureCreationAsset(FractureCreationAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FractureCreationAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FractureCreationAsset(FractureCreationAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1185};

/// @brief Field template, offset: 0x18, size: 0x8, def value: None
 ::VROSC::FractureCreationCreationBehaviour*  ____cordl_template;

/// @brief Field _target, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::FracturedObjectController>>  ____target;

/// @brief Field _fracturePos, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::Transform>>  ____fracturePos;

/// @brief Field _assembling, offset: 0x40, size: 0x1, def value: None
 bool  ____assembling;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FractureCreationAsset, ____cordl_template) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::FractureCreationAsset, ____target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FractureCreationAsset, ____fracturePos) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::FractureCreationAsset, ____assembling) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FractureCreationAsset, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::FractureCreationAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FractureCreationAsset*, "VROSC", "FractureCreationAsset");
