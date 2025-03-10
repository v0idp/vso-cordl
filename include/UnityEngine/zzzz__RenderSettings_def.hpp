#pragma once
// IWYU pragma private; include "UnityEngine/RenderSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RenderSettings)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine {
class RenderSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::RenderSettings);
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RenderSettings
class CORDL_TYPE RenderSettings : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Method get_fogColor, addr 0x2f6c194, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_fogColor() ;

/// @brief Method get_fogColor_Injected, addr 0x2f6c1dc, size 0x3c, virtual false, abstract: false, final false
static inline void get_fogColor_Injected(::ByRef<::UnityEngine::Color>  ret) ;

/// @brief Method get_skybox, addr 0x2f6c298, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> get_skybox() ;

/// @brief Method set_fogColor, addr 0x2f6c218, size 0x44, virtual false, abstract: false, final false
static inline void set_fogColor(::UnityEngine::Color  value) ;

/// @brief Method set_fogColor_Injected, addr 0x2f6c25c, size 0x3c, virtual false, abstract: false, final false
static inline void set_fogColor_Injected(::ByRef<::UnityEngine::Color>  value) ;

/// @brief Method set_skybox, addr 0x2f6c2c0, size 0x3c, virtual false, abstract: false, final false
static inline void set_skybox(::UnityEngine::Material*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderSettings(RenderSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderSettings(RenderSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8458};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RenderSettings, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::RenderSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderSettings*, "UnityEngine", "RenderSettings");
