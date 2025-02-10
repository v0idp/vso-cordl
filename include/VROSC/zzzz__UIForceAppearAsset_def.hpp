#pragma once
// IWYU pragma private; include "VROSC/UIForceAppearAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
CORDL_MODULE_EXPORT(UIForceAppearAsset)
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
class UIForceAppearBehaviour;
}
// Forward declare root types
namespace VROSC {
class UIForceAppearAsset;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIForceAppearAsset);
// Dependencies UnityEngine.Playables.PlayableAsset
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIForceAppearAsset
class CORDL_TYPE UIForceAppearAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field _appear, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__appear, put=__cordl_internal_set__appear)) bool  _appear;

/// @brief Field template, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_template, put=__cordl_internal_set__cordl_template)) ::VROSC::UIForceAppearBehaviour*  _cordl_template;

/// @brief Method CreatePlayable, addr 0x17701c0, size 0x100, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

static inline ::VROSC::UIForceAppearAsset* New_ctor() ;

constexpr bool const& __cordl_internal_get__appear() const;

constexpr bool& __cordl_internal_get__appear() ;

constexpr ::VROSC::UIForceAppearBehaviour* const& __cordl_internal_get__cordl_template() const;

constexpr ::VROSC::UIForceAppearBehaviour*& __cordl_internal_get__cordl_template() ;

constexpr void __cordl_internal_set__appear(bool  value) ;

constexpr void __cordl_internal_set__cordl_template(::VROSC::UIForceAppearBehaviour*  value) ;

/// @brief Method .ctor, addr 0x17702d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIForceAppearAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIForceAppearAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIForceAppearAsset(UIForceAppearAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIForceAppearAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIForceAppearAsset(UIForceAppearAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1241};

/// @brief Field template, offset: 0x18, size: 0x8, def value: None
 ::VROSC::UIForceAppearBehaviour*  ____cordl_template;

/// @brief Field _appear, offset: 0x20, size: 0x1, def value: None
 bool  ____appear;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIForceAppearAsset, ____cordl_template) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIForceAppearAsset, ____appear) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIForceAppearAsset, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIForceAppearAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIForceAppearAsset*, "VROSC", "UIForceAppearAsset");
