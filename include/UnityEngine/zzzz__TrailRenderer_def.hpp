#pragma once
// IWYU pragma private; include "UnityEngine/TrailRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TrailRenderer)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
class TrailRenderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TrailRenderer);
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TrailRenderer
class CORDL_TYPE TrailRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
 __declspec(property(put=set_endColor)) ::UnityEngine::Color  endColor;

 __declspec(property(get=get_endWidth, put=set_endWidth)) float_t  endWidth;

 __declspec(property(put=set_startColor)) ::UnityEngine::Color  startColor;

 __declspec(property(get=get_startWidth, put=set_startWidth)) float_t  startWidth;

 __declspec(property(get=get_time, put=set_time)) float_t  time;

/// @brief Method get_endWidth, addr 0x2f6a82c, size 0x3c, virtual false, abstract: false, final false
inline float_t get_endWidth() ;

/// @brief Method get_startWidth, addr 0x2f6a7a4, size 0x3c, virtual false, abstract: false, final false
inline float_t get_startWidth() ;

/// @brief Method get_time, addr 0x2f6a71c, size 0x3c, virtual false, abstract: false, final false
inline float_t get_time() ;

/// @brief Method set_endColor, addr 0x2f6a94c, size 0x54, virtual false, abstract: false, final false
inline void set_endColor(::UnityEngine::Color  value) ;

/// @brief Method set_endColor_Injected, addr 0x2f6a9a0, size 0x44, virtual false, abstract: false, final false
inline void set_endColor_Injected(::ByRef<::UnityEngine::Color>  value) ;

/// @brief Method set_endWidth, addr 0x2f6a868, size 0x4c, virtual false, abstract: false, final false
inline void set_endWidth(float_t  value) ;

/// @brief Method set_startColor, addr 0x2f6a8b4, size 0x54, virtual false, abstract: false, final false
inline void set_startColor(::UnityEngine::Color  value) ;

/// @brief Method set_startColor_Injected, addr 0x2f6a908, size 0x44, virtual false, abstract: false, final false
inline void set_startColor_Injected(::ByRef<::UnityEngine::Color>  value) ;

/// @brief Method set_startWidth, addr 0x2f6a7e0, size 0x4c, virtual false, abstract: false, final false
inline void set_startWidth(float_t  value) ;

/// @brief Method set_time, addr 0x2f6a758, size 0x4c, virtual false, abstract: false, final false
inline void set_time(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrailRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrailRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrailRenderer(TrailRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrailRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrailRenderer(TrailRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8454};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TrailRenderer, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::TrailRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TrailRenderer*, "UnityEngine", "TrailRenderer");
