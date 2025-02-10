#pragma once
// IWYU pragma private; include "VROSC/CopyCameraOutputToRenderTexture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CopyCameraOutputToRenderTexture)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
namespace VROSC {
class VRPlayer;
}
// Forward declare root types
namespace VROSC {
class CopyCameraOutputToRenderTexture;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::CopyCameraOutputToRenderTexture);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CopyCameraOutputToRenderTexture
class CORDL_TYPE CopyCameraOutputToRenderTexture : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _activationSources, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__activationSources, put=__cordl_internal_set__activationSources)) ::System::Collections::Generic::List_1<::System::Object*>*  _activationSources;

/// @brief Field _active, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__active, put=__cordl_internal_set__active)) bool  _active;

/// @brief Field _disabled, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__disabled, put=__cordl_internal_set__disabled)) bool  _disabled;

/// @brief Field _fading, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get__fading, put=__cordl_internal_set__fading)) bool  _fading;

/// @brief Field _instancedMaterial, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__instancedMaterial, put=__cordl_internal_set__instancedMaterial)) ::UnityW<::UnityEngine::Material>  _instancedMaterial;

/// @brief Field _material, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__material, put=__cordl_internal_set__material)) ::UnityW<::UnityEngine::Material>  _material;

/// @brief Field _output, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__output, put=__cordl_internal_set__output)) ::UnityW<::UnityEngine::RenderTexture>  _output;

/// @brief Method Awake, addr 0x172bc3c, size 0x17c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Clear, addr 0x172bdf4, size 0x54, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Evaluate, addr 0x172bdb8, size 0x3c, virtual false, abstract: false, final false
inline void Evaluate() ;

/// @brief Method IsFading, addr 0x172c0fc, size 0x28, virtual false, abstract: false, final false
inline void IsFading(bool  fading, ::UnityEngine::Color  color) ;

static inline ::VROSC::CopyCameraOutputToRenderTexture* New_ctor() ;

/// @brief Method OnDestroy, addr 0x172be48, size 0x12c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnRenderImage, addr 0x172c33c, size 0xd0, virtual false, abstract: false, final false
inline void OnRenderImage(::UnityEngine::RenderTexture*  src, ::UnityEngine::RenderTexture*  dest) ;

/// @brief Method PlayerInitiated, addr 0x172bf74, size 0x188, virtual false, abstract: false, final false
inline void PlayerInitiated(::VROSC::VRPlayer*  player) ;

/// @brief Method SetActive, addr 0x172c1e0, size 0x15c, virtual false, abstract: false, final false
inline void SetActive(bool  active, ::System::Object*  source) ;

/// @brief Method SetColor, addr 0x172c124, size 0x84, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method SetDisabled, addr 0x172c1a8, size 0x38, virtual false, abstract: false, final false
inline void SetDisabled(bool  disabled) ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get__activationSources() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__activationSources() ;

constexpr bool const& __cordl_internal_get__active() const;

constexpr bool& __cordl_internal_get__active() ;

constexpr bool const& __cordl_internal_get__disabled() const;

constexpr bool& __cordl_internal_get__disabled() ;

constexpr bool const& __cordl_internal_get__fading() const;

constexpr bool& __cordl_internal_get__fading() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__instancedMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__instancedMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__output() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__output() ;

constexpr void __cordl_internal_set__activationSources(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set__active(bool  value) ;

constexpr void __cordl_internal_set__disabled(bool  value) ;

constexpr void __cordl_internal_set__fading(bool  value) ;

constexpr void __cordl_internal_set__instancedMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__output(::UnityW<::UnityEngine::RenderTexture>  value) ;

/// @brief Method .ctor, addr 0x172c40c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CopyCameraOutputToRenderTexture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CopyCameraOutputToRenderTexture", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CopyCameraOutputToRenderTexture(CopyCameraOutputToRenderTexture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CopyCameraOutputToRenderTexture", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CopyCameraOutputToRenderTexture(CopyCameraOutputToRenderTexture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1053};

/// @brief Field _material, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____material;

/// @brief Field _output, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____output;

/// @brief Field _instancedMaterial, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____instancedMaterial;

/// @brief Field _active, offset: 0x38, size: 0x1, def value: None
 bool  ____active;

/// @brief Field _disabled, offset: 0x39, size: 0x1, def value: None
 bool  ____disabled;

/// @brief Field _fading, offset: 0x3a, size: 0x1, def value: None
 bool  ____fading;

/// @brief Field _activationSources, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ____activationSources;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CopyCameraOutputToRenderTexture, ____material) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::CopyCameraOutputToRenderTexture, ____output) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::CopyCameraOutputToRenderTexture, ____instancedMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::CopyCameraOutputToRenderTexture, ____active) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::CopyCameraOutputToRenderTexture, ____disabled) == 0x39, "Offset mismatch!");

static_assert(offsetof(::VROSC::CopyCameraOutputToRenderTexture, ____fading) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::VROSC::CopyCameraOutputToRenderTexture, ____activationSources) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CopyCameraOutputToRenderTexture, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::CopyCameraOutputToRenderTexture);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CopyCameraOutputToRenderTexture*, "VROSC", "CopyCameraOutputToRenderTexture");
