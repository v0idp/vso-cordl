#pragma once
// IWYU pragma private; include "VROSC/UpdateTouchablesAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
CORDL_MODULE_EXPORT(UpdateTouchablesAsset)
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
class TouchableObjectsController;
}
namespace VROSC {
class UpdateTouchablesBehaviour;
}
// Forward declare root types
namespace VROSC {
class UpdateTouchablesAsset;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UpdateTouchablesAsset);
// Dependencies UnityEngine.ExposedReference`1<T>, UnityEngine.Playables.PlayableAsset
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UpdateTouchablesAsset
class CORDL_TYPE UpdateTouchablesAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field template, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_template, put=__cordl_internal_set__cordl_template)) ::VROSC::UpdateTouchablesBehaviour*  _cordl_template;

/// @brief Field _touchables, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__touchables, put=__cordl_internal_set__touchables)) ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::TouchableObjectsController>>  _touchables;

/// @brief Method CreatePlayable, addr 0x17683e8, size 0x13c, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

static inline ::VROSC::UpdateTouchablesAsset* New_ctor() ;

constexpr ::VROSC::UpdateTouchablesBehaviour* const& __cordl_internal_get__cordl_template() const;

constexpr ::VROSC::UpdateTouchablesBehaviour*& __cordl_internal_get__cordl_template() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::TouchableObjectsController>> const& __cordl_internal_get__touchables() const;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::TouchableObjectsController>>& __cordl_internal_get__touchables() ;

constexpr void __cordl_internal_set__cordl_template(::VROSC::UpdateTouchablesBehaviour*  value) ;

constexpr void __cordl_internal_set__touchables(::UnityEngine::ExposedReference_1<::UnityW<::VROSC::TouchableObjectsController>>  value) ;

/// @brief Method .ctor, addr 0x176853c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateTouchablesAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateTouchablesAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateTouchablesAsset(UpdateTouchablesAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateTouchablesAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateTouchablesAsset(UpdateTouchablesAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1202};

/// @brief Field template, offset: 0x18, size: 0x8, def value: None
 ::VROSC::UpdateTouchablesBehaviour*  ____cordl_template;

/// @brief Field _touchables, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::ExposedReference_1<::UnityW<::VROSC::TouchableObjectsController>>  ____touchables;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UpdateTouchablesAsset, ____cordl_template) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UpdateTouchablesAsset, ____touchables) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UpdateTouchablesAsset, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UpdateTouchablesAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UpdateTouchablesAsset*, "VROSC", "UpdateTouchablesAsset");
