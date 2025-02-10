#pragma once
// IWYU pragma private; include "UnityEngine/LineRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LineRenderer)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class LineRenderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::LineRenderer);
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LineRenderer
class CORDL_TYPE LineRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
 __declspec(property(get=get_colorGradient, put=set_colorGradient)) ::UnityEngine::Gradient*  colorGradient;

 __declspec(property(put=set_endColor)) ::UnityEngine::Color  endColor;

 __declspec(property(put=set_endWidth)) float_t  endWidth;

 __declspec(property(put=set_positionCount)) int32_t  positionCount;

 __declspec(property(put=set_startColor)) ::UnityEngine::Color  startColor;

 __declspec(property(get=get_startWidth, put=set_startWidth)) float_t  startWidth;

 __declspec(property(put=set_useWorldSpace)) bool  useWorldSpace;

/// @brief Method GetColorGradientCopy, addr 0x2f6ada4, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Gradient* GetColorGradientCopy() ;

/// @brief Method SetColorGradient, addr 0x2f6ae24, size 0x44, virtual false, abstract: false, final false
inline void SetColorGradient(::UnityEngine::Gradient*  curve) ;

/// @brief Method SetColors, addr 0x2f6a9e4, size 0x48, virtual false, abstract: false, final false
inline void SetColors(::UnityEngine::Color  start, ::UnityEngine::Color  end) ;

/// @brief Method SetPosition, addr 0x2f6acb8, size 0x5c, virtual false, abstract: false, final false
inline void SetPosition(int32_t  index, ::UnityEngine::Vector3  position) ;

/// @brief Method SetPosition_Injected, addr 0x2f6ad14, size 0x54, virtual false, abstract: false, final false
inline void SetPosition_Injected(int32_t  index, ::ByRef<::UnityEngine::Vector3>  position) ;

/// @brief Method SetPositions, addr 0x2f6ae68, size 0x44, virtual false, abstract: false, final false
inline void SetPositions(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  positions) ;

/// @brief Method get_colorGradient, addr 0x2f6ad68, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Gradient* get_colorGradient() ;

/// @brief Method get_startWidth, addr 0x2f6aad4, size 0x3c, virtual false, abstract: false, final false
inline float_t get_startWidth() ;

/// @brief Method set_colorGradient, addr 0x2f6ade0, size 0x44, virtual false, abstract: false, final false
inline void set_colorGradient(::UnityEngine::Gradient*  value) ;

/// @brief Method set_endColor, addr 0x2f6aa80, size 0x54, virtual false, abstract: false, final false
inline void set_endColor(::UnityEngine::Color  value) ;

/// @brief Method set_endColor_Injected, addr 0x2f6ac30, size 0x44, virtual false, abstract: false, final false
inline void set_endColor_Injected(::ByRef<::UnityEngine::Color>  value) ;

/// @brief Method set_endWidth, addr 0x2f6ab5c, size 0x4c, virtual false, abstract: false, final false
inline void set_endWidth(float_t  value) ;

/// @brief Method set_positionCount, addr 0x2f6ac74, size 0x44, virtual false, abstract: false, final false
inline void set_positionCount(int32_t  value) ;

/// @brief Method set_startColor, addr 0x2f6aa2c, size 0x54, virtual false, abstract: false, final false
inline void set_startColor(::UnityEngine::Color  value) ;

/// @brief Method set_startColor_Injected, addr 0x2f6abec, size 0x44, virtual false, abstract: false, final false
inline void set_startColor_Injected(::ByRef<::UnityEngine::Color>  value) ;

/// @brief Method set_startWidth, addr 0x2f6ab10, size 0x4c, virtual false, abstract: false, final false
inline void set_startWidth(float_t  value) ;

/// @brief Method set_useWorldSpace, addr 0x2f6aba8, size 0x44, virtual false, abstract: false, final false
inline void set_useWorldSpace(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LineRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LineRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LineRenderer(LineRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LineRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LineRenderer(LineRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8455};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LineRenderer, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::LineRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LineRenderer*, "UnityEngine", "LineRenderer");
