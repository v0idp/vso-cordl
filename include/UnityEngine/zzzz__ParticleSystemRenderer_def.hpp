#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemRenderer)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine {
class ParticleSystemRenderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ParticleSystemRenderer);
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ParticleSystemRenderer
class CORDL_TYPE ParticleSystemRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
/// @brief Method GetMeshes, addr 0x2fc0850, size 0x44, virtual false, abstract: false, final false
inline int32_t GetMeshes(::ByRef<::ArrayW<::UnityEngine::Mesh*,::Array<::UnityEngine::Mesh*>*>>  meshes) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystemRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleSystemRenderer(ParticleSystemRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleSystemRenderer(ParticleSystemRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12328};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystemRenderer, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::ParticleSystemRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemRenderer*, "UnityEngine", "ParticleSystemRenderer");
