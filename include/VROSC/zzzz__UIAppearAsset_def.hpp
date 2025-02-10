#pragma once
// IWYU pragma private; include "VROSC/UIAppearAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
CORDL_MODULE_EXPORT(UIAppearAsset)
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
class UIAppearBehaviour;
}
// Forward declare root types
namespace VROSC {
class UIAppearAsset;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIAppearAsset);
// Dependencies UnityEngine.Playables.PlayableAsset
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIAppearAsset
class CORDL_TYPE UIAppearAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field template, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_template, put=__cordl_internal_set__cordl_template)) ::VROSC::UIAppearBehaviour*  _cordl_template;

/// @brief Field enter, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_enter, put=__cordl_internal_set_enter)) bool  enter;

/// @brief Method CreatePlayable, addr 0x176fc98, size 0x124, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

static inline ::VROSC::UIAppearAsset* New_ctor() ;

constexpr ::VROSC::UIAppearBehaviour* const& __cordl_internal_get__cordl_template() const;

constexpr ::VROSC::UIAppearBehaviour*& __cordl_internal_get__cordl_template() ;

constexpr bool const& __cordl_internal_get_enter() const;

constexpr bool& __cordl_internal_get_enter() ;

constexpr void __cordl_internal_set__cordl_template(::VROSC::UIAppearBehaviour*  value) ;

constexpr void __cordl_internal_set_enter(bool  value) ;

/// @brief Method .ctor, addr 0x176fea0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIAppearAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIAppearAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIAppearAsset(UIAppearAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIAppearAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIAppearAsset(UIAppearAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1239};

/// @brief Field template, offset: 0x18, size: 0x8, def value: None
 ::VROSC::UIAppearBehaviour*  ____cordl_template;

/// @brief Field enter, offset: 0x20, size: 0x1, def value: None
 bool  ___enter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIAppearAsset, ____cordl_template) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIAppearAsset, ___enter) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIAppearAsset, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIAppearAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIAppearAsset*, "VROSC", "UIAppearAsset");
