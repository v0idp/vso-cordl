#pragma once
// IWYU pragma private; include "UnityEngine/FlareLayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
CORDL_MODULE_EXPORT(FlareLayer)
// Forward declare root types
namespace UnityEngine {
class FlareLayer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::FlareLayer);
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.FlareLayer
class CORDL_TYPE FlareLayer : public ::UnityEngine::Behaviour {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlareLayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlareLayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FlareLayer(FlareLayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlareLayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlareLayer(FlareLayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8411};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::FlareLayer, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::FlareLayer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::FlareLayer*, "UnityEngine", "FlareLayer");
