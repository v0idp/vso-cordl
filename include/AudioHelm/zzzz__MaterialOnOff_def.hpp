#pragma once
// IWYU pragma private; include "AudioHelm/MaterialOnOff.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MaterialOnOff)
namespace UnityEngine::UI {
class RawImage;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace AudioHelm {
class MaterialOnOff;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::MaterialOnOff);
// Dependencies UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.MaterialOnOff
class CORDL_TYPE MaterialOnOff : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field offMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_offMaterial, put=__cordl_internal_set_offMaterial)) ::UnityW<::UnityEngine::Material>  offMaterial;

/// @brief Field on, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_on, put=__cordl_internal_set_on)) bool  on;

/// @brief Field onMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onMaterial, put=__cordl_internal_set_onMaterial)) ::UnityW<::UnityEngine::Material>  onMaterial;

/// @brief Field progress, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) float_t  progress;

/// @brief Field rawImage, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rawImage, put=__cordl_internal_set_rawImage)) ::UnityW<::UnityEngine::UI::RawImage>  rawImage;

static inline ::AudioHelm::MaterialOnOff* New_ctor() ;

/// @brief Method Off, addr 0x181b5a8, size 0x8, virtual false, abstract: false, final false
inline void Off() ;

/// @brief Method On, addr 0x181b55c, size 0x4c, virtual false, abstract: false, final false
inline void On() ;

/// @brief Method Start, addr 0x181b50c, size 0x50, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x181b5b0, size 0x154, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_offMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_offMaterial() ;

constexpr bool const& __cordl_internal_get_on() const;

constexpr bool& __cordl_internal_get_on() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_onMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_onMaterial() ;

constexpr float_t const& __cordl_internal_get_progress() const;

constexpr float_t& __cordl_internal_get_progress() ;

constexpr ::UnityW<::UnityEngine::UI::RawImage> const& __cordl_internal_get_rawImage() const;

constexpr ::UnityW<::UnityEngine::UI::RawImage>& __cordl_internal_get_rawImage() ;

constexpr void __cordl_internal_set_offMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_on(bool  value) ;

constexpr void __cordl_internal_set_onMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_progress(float_t  value) ;

constexpr void __cordl_internal_set_rawImage(::UnityW<::UnityEngine::UI::RawImage>  value) ;

/// @brief Method .ctor, addr 0x181b704, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialOnOff() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialOnOff", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialOnOff(MaterialOnOff && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialOnOff", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialOnOff(MaterialOnOff const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1855};

/// @brief Field offMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___offMaterial;

/// @brief Field onMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___onMaterial;

/// @brief Field rawImage, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::RawImage>  ___rawImage;

/// @brief Field progress, offset: 0x38, size: 0x4, def value: None
 float_t  ___progress;

/// @brief Field on, offset: 0x3c, size: 0x1, def value: None
 bool  ___on;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::MaterialOnOff, ___offMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::MaterialOnOff, ___onMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::MaterialOnOff, ___rawImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::MaterialOnOff, ___progress) == 0x38, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::MaterialOnOff, ___on) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::MaterialOnOff, 0x40>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::MaterialOnOff);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::MaterialOnOff*, "AudioHelm", "MaterialOnOff");
