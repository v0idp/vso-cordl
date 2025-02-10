#pragma once
// IWYU pragma private; include "VROSC/ObjectActivationAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
CORDL_MODULE_EXPORT(ObjectActivationAsset)
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
class ObjectActivationBehaviour;
}
namespace VROSC {
class ObjectActivation;
}
// Forward declare root types
namespace VROSC {
class ObjectActivationAsset;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ObjectActivationAsset);
// Dependencies UnityEngine.ExposedReference`1<T>, UnityEngine.Playables.PlayableAsset
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ObjectActivationAsset
class CORDL_TYPE ObjectActivationAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field template, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_template, put=__cordl_internal_set__cordl_template)) ::VROSC::ObjectActivationBehaviour*  _cordl_template;

/// @brief Field _objectActivation, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__objectActivation, put=__cordl_internal_set__objectActivation)) ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::ObjectActivation>>  _objectActivation;

/// @brief Method CreatePlayable, addr 0x176c8d8, size 0x12c, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

static inline ::VROSC::ObjectActivationAsset* New_ctor() ;

constexpr ::VROSC::ObjectActivationBehaviour* const& __cordl_internal_get__cordl_template() const;

constexpr ::VROSC::ObjectActivationBehaviour*& __cordl_internal_get__cordl_template() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::ObjectActivation>> const& __cordl_internal_get__objectActivation() const;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::ObjectActivation>>& __cordl_internal_get__objectActivation() ;

constexpr void __cordl_internal_set__cordl_template(::VROSC::ObjectActivationBehaviour*  value) ;

constexpr void __cordl_internal_set__objectActivation(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::ObjectActivation>>  value) ;

/// @brief Method .ctor, addr 0x176ca04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectActivationAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectActivationAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectActivationAsset(ObjectActivationAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectActivationAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectActivationAsset(ObjectActivationAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1219};

/// @brief Field template, offset: 0x18, size: 0x8, def value: None
 ::VROSC::ObjectActivationBehaviour*  ____cordl_template;

/// @brief Field _objectActivation, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::ObjectActivation>>  ____objectActivation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ObjectActivationAsset, ____cordl_template) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::ObjectActivationAsset, ____objectActivation) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ObjectActivationAsset, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ObjectActivationAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ObjectActivationAsset*, "VROSC", "ObjectActivationAsset");
