#pragma once
// IWYU pragma private; include "VROSC/WaveformToTexture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__WaveformVisualizer_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WaveformToTexture)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace VROSC {
class WaveformToTexture;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::WaveformToTexture);
// Dependencies VROSC.WaveformVisualizer
namespace VROSC {
// Is value type: false
// CS Name: VROSC.WaveformToTexture
class CORDL_TYPE WaveformToTexture : public ::VROSC::WaveformVisualizer {
public:
// Declarations
/// @brief Field _renderedArray, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderedArray, put=__cordl_internal_set__renderedArray)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  _renderedArray;

/// @brief Field _visualizationRenderer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__visualizationRenderer, put=__cordl_internal_set__visualizationRenderer)) ::UnityW<::UnityEngine::Renderer>  _visualizationRenderer;

/// @brief Field _visualizationTexture, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__visualizationTexture, put=__cordl_internal_set__visualizationTexture)) ::UnityW<::UnityEngine::Texture2D>  _visualizationTexture;

/// @brief Field _wipeColorArray, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__wipeColorArray, put=__cordl_internal_set__wipeColorArray)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  _wipeColorArray;

/// @brief Method DrawPixelsToTexture, addr 0x16fddf0, size 0x30, virtual false, abstract: false, final false
inline void DrawPixelsToTexture(int32_t  xPos, ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors) ;

static inline ::VROSC::WaveformToTexture* New_ctor() ;

/// @brief Method OnPartialVisualizationUpdated, addr 0x16fde20, size 0x100, virtual true, abstract: false, final false
inline void OnPartialVisualizationUpdated(int32_t  startIndex, ::ArrayW<float_t,::Array<float_t>*>  newValues) ;

/// @brief Method OnVisualizationUpdated, addr 0x16fdd4c, size 0xa4, virtual true, abstract: false, final false
inline void OnVisualizationUpdated() ;

/// @brief Method Setup, addr 0x16fdacc, size 0x158, virtual true, abstract: false, final false
inline void Setup() ;

/// @brief Method Wipe, addr 0x16fdcb4, size 0x48, virtual true, abstract: false, final false
inline void Wipe() ;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& __cordl_internal_get__renderedArray() const;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& __cordl_internal_get__renderedArray() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__visualizationRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__visualizationRenderer() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__visualizationTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__visualizationTexture() ;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& __cordl_internal_get__wipeColorArray() const;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& __cordl_internal_get__wipeColorArray() ;

constexpr void __cordl_internal_set__renderedArray(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value) ;

constexpr void __cordl_internal_set__visualizationRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__visualizationTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__wipeColorArray(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value) ;

/// @brief Method .ctor, addr 0x16fdf98, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaveformToTexture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaveformToTexture", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaveformToTexture(WaveformToTexture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaveformToTexture", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaveformToTexture(WaveformToTexture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{832};

/// @brief Field _visualizationRenderer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____visualizationRenderer;

/// @brief Field _visualizationTexture, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____visualizationTexture;

/// @brief Field _renderedArray, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  ____renderedArray;

/// @brief Field _wipeColorArray, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  ____wipeColorArray;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::WaveformToTexture, ____visualizationRenderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveformToTexture, ____visualizationTexture) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveformToTexture, ____renderedArray) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveformToTexture, ____wipeColorArray) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::WaveformToTexture, 0x70>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::WaveformToTexture);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::WaveformToTexture*, "VROSC", "WaveformToTexture");
