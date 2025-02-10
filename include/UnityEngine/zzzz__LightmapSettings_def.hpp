#pragma once
// IWYU pragma private; include "UnityEngine/LightmapSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LightmapSettings)
// Forward declare root types
namespace UnityEngine {
class LightmapSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::LightmapSettings);
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LightmapSettings
class CORDL_TYPE LightmapSettings : public ::UnityEngine::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightmapSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightmapSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightmapSettings(LightmapSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightmapSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightmapSettings(LightmapSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8447};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LightmapSettings, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::LightmapSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightmapSettings*, "UnityEngine", "LightmapSettings");
