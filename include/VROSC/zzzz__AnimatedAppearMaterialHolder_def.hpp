#pragma once
// IWYU pragma private; include "VROSC/AnimatedAppearMaterialHolder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AnimatedAppearMaterialHolder)
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace VROSC {
class AnimatedAppearMaterialHolder;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AnimatedAppearMaterialHolder);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AnimatedAppearMaterialHolder
class CORDL_TYPE AnimatedAppearMaterialHolder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _material, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__material, put=__cordl_internal_set__material)) ::UnityW<::UnityEngine::Material>  _material;

/// @brief Field _renderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _textMesh, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__textMesh, put=__cordl_internal_set__textMesh)) ::UnityW<::TMPro::TextMeshPro>  _textMesh;

static inline ::VROSC::AnimatedAppearMaterialHolder* New_ctor() ;

/// @brief Method Reset, addr 0x17a9c40, size 0xe8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Setup, addr 0x17a9c38, size 0x8, virtual false, abstract: false, final false
inline void Setup(::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  material) ;

/// @brief Method Setup, addr 0x17a9c2c, size 0xc, virtual false, abstract: false, final false
inline void Setup(::TMPro::TextMeshPro*  textMesh, ::UnityEngine::Material*  material) ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__textMesh() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__textMesh() ;

constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__textMesh(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x17a9d28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatedAppearMaterialHolder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatedAppearMaterialHolder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatedAppearMaterialHolder(AnimatedAppearMaterialHolder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedAppearMaterialHolder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatedAppearMaterialHolder(AnimatedAppearMaterialHolder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1404};

/// @brief Field _textMesh, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____textMesh;

/// @brief Field _renderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// @brief Field _material, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____material;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AnimatedAppearMaterialHolder, ____textMesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppearMaterialHolder, ____renderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedAppearMaterialHolder, ____material) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AnimatedAppearMaterialHolder, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AnimatedAppearMaterialHolder);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AnimatedAppearMaterialHolder*, "VROSC", "AnimatedAppearMaterialHolder");
