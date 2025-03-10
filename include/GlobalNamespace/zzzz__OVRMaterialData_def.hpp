#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMaterialData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRTextureData_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMaterialData)
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRMaterialData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRMaterialData);
// Dependencies OVRTextureData, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRMaterialData
struct CORDL_TYPE OVRMaterialData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRMaterialData() ;

// Ctor Parameters [CppParam { name: "shader", ty: "::UnityW<::UnityEngine::Shader>", modifiers: "", def_value: None }, CppParam { name: "textureId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "::GlobalNamespace::OVRTextureData", modifiers: "", def_value: None }, CppParam { name: "baseColorFactor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr OVRMaterialData(::UnityW<::UnityEngine::Shader>  shader, int32_t  textureId, ::GlobalNamespace::OVRTextureData  texture, ::UnityEngine::Color  baseColorFactor) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6083};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field shader, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  shader;

/// @brief Field textureId, offset: 0x8, size: 0x4, def value: None
 int32_t  textureId;

/// @brief Field texture, offset: 0x10, size: 0x20, def value: None
 ::GlobalNamespace::OVRTextureData  texture;

/// @brief Field baseColorFactor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  baseColorFactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMaterialData, shader) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMaterialData, textureId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMaterialData, texture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMaterialData, baseColorFactor) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMaterialData, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMaterialData, "", "OVRMaterialData");
