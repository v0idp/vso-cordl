#pragma once
// IWYU pragma private; include "VROSC/LoopVisualizationWindow.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopVisualizationWindow)
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
namespace VROSC {
class LoopPlayer;
}
// Forward declare root types
namespace VROSC {
class LoopVisualizationWindow;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopVisualizationWindow);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopVisualizationWindow
class CORDL_TYPE LoopVisualizationWindow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _color, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) ::UnityEngine::Color  _color;

/// @brief Field _drawTail, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__drawTail, put=__cordl_internal_set__drawTail)) bool  _drawTail;

/// @brief Field _lines, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__lines, put=__cordl_internal_set__lines)) float_t  _lines;

/// @brief Field _loopPlayer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopPlayer, put=__cordl_internal_set__loopPlayer)) ::UnityW<::VROSC::LoopPlayer>  _loopPlayer;

/// @brief Field _previewLines, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__previewLines, put=__cordl_internal_set__previewLines)) float_t  _previewLines;

/// @brief Field _previewSegments, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__previewSegments, put=__cordl_internal_set__previewSegments)) float_t  _previewSegments;

/// @brief Field _previewShift, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__previewShift, put=__cordl_internal_set__previewShift)) float_t  _previewShift;

/// @brief Field _previewTiming, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__previewTiming, put=__cordl_internal_set__previewTiming)) float_t  _previewTiming;

/// @brief Field _propBlock, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__propBlock, put=__cordl_internal_set__propBlock)) ::UnityEngine::MaterialPropertyBlock*  _propBlock;

/// @brief Field _renderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _useShift, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__useShift, put=__cordl_internal_set__useShift)) bool  _useShift;

/// @brief Method Awake, addr 0x18934b8, size 0xd8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetPreviewArray, addr 0x1893b80, size 0x11c, virtual false, abstract: false, final false
inline ::ArrayW<float_t,::Array<float_t>*> GetPreviewArray(int32_t  length, bool  sin, float_t  multipier) ;

static inline ::VROSC::LoopVisualizationWindow* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1893590, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetLineCount, addr 0x189368c, size 0x8, virtual false, abstract: false, final false
inline void SetLineCount(float_t  lines) ;

/// @brief Method SetLoopAudioValues, addr 0x18937ac, size 0x160, virtual false, abstract: false, final false
inline void SetLoopAudioValues() ;

/// @brief Method SetLoopPlayer, addr 0x18935f0, size 0x9c, virtual false, abstract: false, final false
inline void SetLoopPlayer(::VROSC::LoopPlayer*  loopPlayer) ;

/// @brief Method SetPreviewValues, addr 0x189390c, size 0x274, virtual false, abstract: false, final false
inline void SetPreviewValues() ;

/// @brief Method Update, addr 0x1893694, size 0x94, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdatePaint, addr 0x1893594, size 0x5c, virtual false, abstract: false, final false
inline void UpdatePaint(::ArrayW<float_t,::Array<float_t>*>  paintValues) ;

/// @brief Method UpdateProgress, addr 0x1893728, size 0x84, virtual false, abstract: false, final false
inline void UpdateProgress() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__color() ;

constexpr bool const& __cordl_internal_get__drawTail() const;

constexpr bool& __cordl_internal_get__drawTail() ;

constexpr float_t const& __cordl_internal_get__lines() const;

constexpr float_t& __cordl_internal_get__lines() ;

constexpr ::UnityW<::VROSC::LoopPlayer> const& __cordl_internal_get__loopPlayer() const;

constexpr ::UnityW<::VROSC::LoopPlayer>& __cordl_internal_get__loopPlayer() ;

constexpr float_t const& __cordl_internal_get__previewLines() const;

constexpr float_t& __cordl_internal_get__previewLines() ;

constexpr float_t const& __cordl_internal_get__previewSegments() const;

constexpr float_t& __cordl_internal_get__previewSegments() ;

constexpr float_t const& __cordl_internal_get__previewShift() const;

constexpr float_t& __cordl_internal_get__previewShift() ;

constexpr float_t const& __cordl_internal_get__previewTiming() const;

constexpr float_t& __cordl_internal_get__previewTiming() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__propBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__propBlock() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr bool const& __cordl_internal_get__useShift() const;

constexpr bool& __cordl_internal_get__useShift() ;

constexpr void __cordl_internal_set__color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__drawTail(bool  value) ;

constexpr void __cordl_internal_set__lines(float_t  value) ;

constexpr void __cordl_internal_set__loopPlayer(::UnityW<::VROSC::LoopPlayer>  value) ;

constexpr void __cordl_internal_set__previewLines(float_t  value) ;

constexpr void __cordl_internal_set__previewSegments(float_t  value) ;

constexpr void __cordl_internal_set__previewShift(float_t  value) ;

constexpr void __cordl_internal_set__previewTiming(float_t  value) ;

constexpr void __cordl_internal_set__propBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__useShift(bool  value) ;

/// @brief Method .ctor, addr 0x1893c9c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopVisualizationWindow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopVisualizationWindow", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopVisualizationWindow(LoopVisualizationWindow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopVisualizationWindow", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopVisualizationWindow(LoopVisualizationWindow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{642};

/// @brief Field _renderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// @brief Field _color, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ____color;

/// @brief Field _useShift, offset: 0x38, size: 0x1, def value: None
 bool  ____useShift;

/// @brief Field _drawTail, offset: 0x39, size: 0x1, def value: None
 bool  ____drawTail;

/// @brief Field _previewShift, offset: 0x3c, size: 0x4, def value: None
 float_t  ____previewShift;

/// @brief Field _previewTiming, offset: 0x40, size: 0x4, def value: None
 float_t  ____previewTiming;

/// @brief Field _previewSegments, offset: 0x44, size: 0x4, def value: None
 float_t  ____previewSegments;

/// @brief Field _previewLines, offset: 0x48, size: 0x4, def value: None
 float_t  ____previewLines;

/// @brief Field _loopPlayer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayer>  ____loopPlayer;

/// @brief Field _lines, offset: 0x58, size: 0x4, def value: None
 float_t  ____lines;

/// @brief Field _propBlock, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____propBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopVisualizationWindow, ____renderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationWindow, ____color) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationWindow, ____useShift) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationWindow, ____drawTail) == 0x39, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationWindow, ____previewShift) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationWindow, ____previewTiming) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationWindow, ____previewSegments) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationWindow, ____previewLines) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationWindow, ____loopPlayer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationWindow, ____lines) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationWindow, ____propBlock) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopVisualizationWindow, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopVisualizationWindow);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopVisualizationWindow*, "VROSC", "LoopVisualizationWindow");
