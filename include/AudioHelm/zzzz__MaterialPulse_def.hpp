#pragma once
// IWYU pragma private; include "AudioHelm/MaterialPulse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MaterialPulse)
namespace UnityEngine::UI {
class RawImage;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace AudioHelm {
class MaterialPulse;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::MaterialPulse);
// Dependencies UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.MaterialPulse
class CORDL_TYPE MaterialPulse : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field decay, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_decay, put=__cordl_internal_set_decay)) float_t  decay;

/// @brief Field defaultMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultMaterial, put=__cordl_internal_set_defaultMaterial)) ::UnityW<::UnityEngine::Material>  defaultMaterial;

/// @brief Field progress, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) float_t  progress;

/// @brief Field pulseMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pulseMaterial, put=__cordl_internal_set_pulseMaterial)) ::UnityW<::UnityEngine::Material>  pulseMaterial;

/// @brief Field rawImage, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_rawImage, put=__cordl_internal_set_rawImage)) ::UnityW<::UnityEngine::UI::RawImage>  rawImage;

/// @brief Field render, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_render, put=__cordl_internal_set_render)) ::UnityW<::UnityEngine::Renderer>  render;

static inline ::AudioHelm::MaterialPulse* New_ctor() ;

/// @brief Method Pulse, addr 0x1819d38, size 0xac, virtual false, abstract: false, final false
inline void Pulse(float_t  amount) ;

/// @brief Method Update, addr 0x181b70c, size 0x1ac, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_decay() const;

constexpr float_t& __cordl_internal_get_decay() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_defaultMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_defaultMaterial() ;

constexpr float_t const& __cordl_internal_get_progress() const;

constexpr float_t& __cordl_internal_get_progress() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_pulseMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_pulseMaterial() ;

constexpr ::UnityW<::UnityEngine::UI::RawImage> const& __cordl_internal_get_rawImage() const;

constexpr ::UnityW<::UnityEngine::UI::RawImage>& __cordl_internal_get_rawImage() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_render() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_render() ;

constexpr void __cordl_internal_set_decay(float_t  value) ;

constexpr void __cordl_internal_set_defaultMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_progress(float_t  value) ;

constexpr void __cordl_internal_set_pulseMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_rawImage(::UnityW<::UnityEngine::UI::RawImage>  value) ;

constexpr void __cordl_internal_set_render(::UnityW<::UnityEngine::Renderer>  value) ;

/// @brief Method .ctor, addr 0x181b8b8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialPulse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialPulse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialPulse(MaterialPulse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPulse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialPulse(MaterialPulse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1856};

/// @brief Field defaultMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___defaultMaterial;

/// @brief Field pulseMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___pulseMaterial;

/// @brief Field decay, offset: 0x30, size: 0x4, def value: None
 float_t  ___decay;

/// @brief Field progress, offset: 0x34, size: 0x4, def value: None
 float_t  ___progress;

/// @brief Field render, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___render;

/// @brief Field rawImage, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::RawImage>  ___rawImage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::MaterialPulse, ___defaultMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::MaterialPulse, ___pulseMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::MaterialPulse, ___decay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::MaterialPulse, ___progress) == 0x34, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::MaterialPulse, ___render) == 0x38, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::MaterialPulse, ___rawImage) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::MaterialPulse, 0x48>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::MaterialPulse);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::MaterialPulse*, "AudioHelm", "MaterialPulse");
