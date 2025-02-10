#pragma once
// IWYU pragma private; include "VROSC/TMPTextAppearAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
CORDL_MODULE_EXPORT(TMPTextAppearAsset)
namespace TMPro {
class TextMeshPro;
}
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
class TMPTextAppearBehaviour;
}
// Forward declare root types
namespace VROSC {
class TMPTextAppearAsset;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TMPTextAppearAsset);
// Dependencies UnityEngine.ExposedReference`1<T>, UnityEngine.Playables.PlayableAsset
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TMPTextAppearAsset
class CORDL_TYPE TMPTextAppearAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field template, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_template, put=__cordl_internal_set__cordl_template)) ::VROSC::TMPTextAppearBehaviour*  _cordl_template;

/// @brief Field _text, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::UnityEngine::ExposedReference_1<::UnityW<::TMPro::TextMeshPro>>  _text;

/// @brief Method CreatePlayable, addr 0x176fa90, size 0x12c, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

static inline ::VROSC::TMPTextAppearAsset* New_ctor() ;

constexpr ::VROSC::TMPTextAppearBehaviour* const& __cordl_internal_get__cordl_template() const;

constexpr ::VROSC::TMPTextAppearBehaviour*& __cordl_internal_get__cordl_template() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::TMPro::TextMeshPro>> const& __cordl_internal_get__text() const;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::TMPro::TextMeshPro>>& __cordl_internal_get__text() ;

constexpr void __cordl_internal_set__cordl_template(::VROSC::TMPTextAppearBehaviour*  value) ;

constexpr void __cordl_internal_set__text(::UnityEngine::ExposedReference_1<::UnityW<::TMPro::TextMeshPro>>  value) ;

/// @brief Method .ctor, addr 0x176fbbc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TMPTextAppearAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TMPTextAppearAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TMPTextAppearAsset(TMPTextAppearAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TMPTextAppearAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TMPTextAppearAsset(TMPTextAppearAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1237};

/// @brief Field template, offset: 0x18, size: 0x8, def value: None
 ::VROSC::TMPTextAppearBehaviour*  ____cordl_template;

/// @brief Field _text, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::ExposedReference_1<::UnityW<::TMPro::TextMeshPro>>  ____text;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TMPTextAppearAsset, ____cordl_template) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::TMPTextAppearAsset, ____text) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TMPTextAppearAsset, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TMPTextAppearAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TMPTextAppearAsset*, "VROSC", "TMPTextAppearAsset");
