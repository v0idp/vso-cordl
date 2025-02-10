#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GraphicsSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GraphicsSettings)
namespace UnityEngine::Rendering {
class RenderPipelineAsset;
}
namespace UnityEngine {
class ScriptableObject;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GraphicsSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::GraphicsSettings);
// Dependencies UnityEngine.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GraphicsSettings
class CORDL_TYPE GraphicsSettings : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Method get_INTERNAL_defaultRenderPipeline, addr 0x2f9de1c, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::ScriptableObject> get_INTERNAL_defaultRenderPipeline() ;

/// @brief Method get_defaultRenderPipeline, addr 0x2f9dd8c, size 0x90, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> get_defaultRenderPipeline() ;

/// @brief Method get_lightsUseLinearIntensity, addr 0x2f9dd38, size 0x28, virtual false, abstract: false, final false
static inline bool get_lightsUseLinearIntensity() ;

/// @brief Method get_renderPipelineAsset, addr 0x2f9dd88, size 0x4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> get_renderPipelineAsset() ;

/// @brief Method get_useScriptableRenderPipelineBatching, addr 0x2f9dd60, size 0x28, virtual false, abstract: false, final false
static inline bool get_useScriptableRenderPipelineBatching() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphicsSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphicsSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphicsSettings(GraphicsSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphicsSettings(GraphicsSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8887};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GraphicsSettings, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::GraphicsSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GraphicsSettings*, "UnityEngine.Rendering", "GraphicsSettings");
