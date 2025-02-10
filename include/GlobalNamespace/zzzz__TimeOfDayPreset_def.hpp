#pragma once
// IWYU pragma private; include "GlobalNamespace/TimeOfDayPreset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TimeOfDayType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TimeOfDayPreset)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TimeOfDayPreset;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TimeOfDayPreset);
// Dependencies TimeOfDayType, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TimeOfDayPreset
class CORDL_TYPE TimeOfDayPreset : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ObjectsToActivate, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_ObjectsToActivate, put=__cordl_internal_set_ObjectsToActivate)) ::ArrayW<::UnityW<::UnityEngine::GameObject>,::Array<::UnityW<::UnityEngine::GameObject>>*>  ObjectsToActivate;

/// @brief Field SkyboxMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_SkyboxMaterial, put=__cordl_internal_set_SkyboxMaterial)) ::UnityW<::UnityEngine::Material>  SkyboxMaterial;

/// @brief Field SunColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_SunColor, put=__cordl_internal_set_SunColor)) ::UnityEngine::Color  SunColor;

/// @brief Field SunTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_SunTransform, put=__cordl_internal_set_SunTransform)) ::UnityW<::UnityEngine::Transform>  SunTransform;

/// @brief Field directionalLight, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_directionalLight, put=__cordl_internal_set_directionalLight)) ::UnityW<::UnityEngine::Light>  directionalLight;

/// @brief Field timeOfDay, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeOfDay, put=__cordl_internal_set_timeOfDay)) ::GlobalNamespace::TimeOfDayType  timeOfDay;

static inline ::GlobalNamespace::TimeOfDayPreset* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>,::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_ObjectsToActivate() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>,::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_ObjectsToActivate() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_SkyboxMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_SkyboxMaterial() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_SunColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_SunColor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_SunTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_SunTransform() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_directionalLight() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_directionalLight() ;

constexpr ::GlobalNamespace::TimeOfDayType const& __cordl_internal_get_timeOfDay() const;

constexpr ::GlobalNamespace::TimeOfDayType& __cordl_internal_get_timeOfDay() ;

constexpr void __cordl_internal_set_ObjectsToActivate(::ArrayW<::UnityW<::UnityEngine::GameObject>,::Array<::UnityW<::UnityEngine::GameObject>>*>  value) ;

constexpr void __cordl_internal_set_SkyboxMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_SunColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_SunTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_directionalLight(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set_timeOfDay(::GlobalNamespace::TimeOfDayType  value) ;

/// @brief Method .ctor, addr 0x16c1d38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeOfDayPreset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeOfDayPreset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeOfDayPreset(TimeOfDayPreset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeOfDayPreset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeOfDayPreset(TimeOfDayPreset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{37};

/// @brief Field timeOfDay, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::TimeOfDayType  ___timeOfDay;

/// @brief Field SkyboxMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___SkyboxMaterial;

/// @brief Field directionalLight, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ___directionalLight;

/// @brief Field SunTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___SunTransform;

/// @brief Field SunColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ___SunColor;

/// @brief Field ObjectsToActivate, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>,::Array<::UnityW<::UnityEngine::GameObject>>*>  ___ObjectsToActivate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeOfDayPreset, ___timeOfDay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayPreset, ___SkyboxMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayPreset, ___directionalLight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayPreset, ___SunTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayPreset, ___SunColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayPreset, ___ObjectsToActivate) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TimeOfDayPreset, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TimeOfDayPreset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimeOfDayPreset*, "", "TimeOfDayPreset");
