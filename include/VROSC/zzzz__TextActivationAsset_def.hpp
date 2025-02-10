#pragma once
// IWYU pragma private; include "VROSC/TextActivationAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TextActivationAsset)
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
class TextActivationBehaviour;
}
// Forward declare root types
namespace VROSC {
class TextActivationAsset;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TextActivationAsset);
// Dependencies UnityEngine.ExposedReference`1<T>, UnityEngine.Playables.PlayableAsset
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TextActivationAsset
class CORDL_TYPE TextActivationAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field template, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_template, put=__cordl_internal_set__cordl_template)) ::VROSC::TextActivationBehaviour*  _cordl_template;

/// @brief Field _text, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::StringW  _text;

/// @brief Field _textMesh, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__textMesh, put=__cordl_internal_set__textMesh)) ::UnityEngine::ExposedReference_1<::UnityW<::TMPro::TextMeshPro>>  _textMesh;

/// @brief Method CreatePlayable, addr 0x176cb68, size 0x130, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

static inline ::VROSC::TextActivationAsset* New_ctor() ;

constexpr ::VROSC::TextActivationBehaviour* const& __cordl_internal_get__cordl_template() const;

constexpr ::VROSC::TextActivationBehaviour*& __cordl_internal_get__cordl_template() ;

constexpr ::StringW const& __cordl_internal_get__text() const;

constexpr ::StringW& __cordl_internal_get__text() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::TMPro::TextMeshPro>> const& __cordl_internal_get__textMesh() const;

constexpr ::UnityEngine::ExposedReference_1<::UnityW<::TMPro::TextMeshPro>>& __cordl_internal_get__textMesh() ;

constexpr void __cordl_internal_set__cordl_template(::VROSC::TextActivationBehaviour*  value) ;

constexpr void __cordl_internal_set__text(::StringW  value) ;

constexpr void __cordl_internal_set__textMesh(::UnityEngine::ExposedReference_1<::UnityW<::TMPro::TextMeshPro>>  value) ;

/// @brief Method .ctor, addr 0x176cdfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextActivationAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextActivationAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextActivationAsset(TextActivationAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextActivationAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextActivationAsset(TextActivationAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1221};

/// @brief Field template, offset: 0x18, size: 0x8, def value: None
 ::VROSC::TextActivationBehaviour*  ____cordl_template;

/// @brief Field _textMesh, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::ExposedReference_1<::UnityW<::TMPro::TextMeshPro>>  ____textMesh;

/// @brief Field _text, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____text;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TextActivationAsset, ____cordl_template) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextActivationAsset, ____textMesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextActivationAsset, ____text) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TextActivationAsset, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TextActivationAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TextActivationAsset*, "VROSC", "TextActivationAsset");
