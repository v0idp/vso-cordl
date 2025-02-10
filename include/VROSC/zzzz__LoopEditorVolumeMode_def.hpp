#pragma once
// IWYU pragma private; include "VROSC/LoopEditorVolumeMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__LoopEditorModeUI_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LoopEditorVolumeMode)
namespace VROSC {
struct LoopEditorModeUI_Type;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class LoopVisualizationWindow;
}
namespace VROSC {
class Paint;
}
// Forward declare root types
namespace VROSC {
class LoopEditorVolumeMode;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopEditorVolumeMode);
// Dependencies VROSC.LoopEditorModeUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopEditorVolumeMode
class CORDL_TYPE LoopEditorVolumeMode : public ::VROSC::LoopEditorModeUI {
public:
// Declarations
 __declspec(property(get=get_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_IsType)) ::VROSC::LoopEditorModeUI_Type  IsType;

/// @brief Field _paint, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__paint, put=__cordl_internal_set__paint)) ::UnityW<::VROSC::Paint>  _paint;

/// @brief Field _startValues, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__startValues, put=__cordl_internal_set__startValues)) ::ArrayW<float_t,::Array<float_t>*>  _startValues;

/// @brief Field _visualizationWindow, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__visualizationWindow, put=__cordl_internal_set__visualizationWindow)) ::UnityW<::VROSC::LoopVisualizationWindow>  _visualizationWindow;

/// @brief Method Awake, addr 0x1896e1c, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Close, addr 0x1896fe8, size 0xcc, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method LoadFromLoop, addr 0x1896ef8, size 0xf0, virtual false, abstract: false, final false
inline void LoadFromLoop() ;

static inline ::VROSC::LoopEditorVolumeMode* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1896e20, size 0x4, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnNewLoopPlayer, addr 0x1897160, size 0xa0, virtual true, abstract: false, final false
inline void OnNewLoopPlayer(::VROSC::LoopPlayer*  loopPlayer) ;

/// @brief Method Open, addr 0x1896e24, size 0xd4, virtual true, abstract: false, final false
inline void Open() ;

/// @brief Method PaintUpdated, addr 0x18970b4, size 0xac, virtual false, abstract: false, final false
inline void PaintUpdated() ;

/// @brief Method ResetUI, addr 0x1897200, size 0x4, virtual true, abstract: false, final false
inline void ResetUI() ;

/// @brief Method RevertEdits, addr 0x1897204, size 0x20, virtual true, abstract: false, final false
inline void RevertEdits() ;

constexpr ::UnityW<::VROSC::Paint> const& __cordl_internal_get__paint() const;

constexpr ::UnityW<::VROSC::Paint>& __cordl_internal_get__paint() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__startValues() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__startValues() ;

constexpr ::UnityW<::VROSC::LoopVisualizationWindow> const& __cordl_internal_get__visualizationWindow() const;

constexpr ::UnityW<::VROSC::LoopVisualizationWindow>& __cordl_internal_get__visualizationWindow() ;

constexpr void __cordl_internal_set__paint(::UnityW<::VROSC::Paint>  value) ;

constexpr void __cordl_internal_set__startValues(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set__visualizationWindow(::UnityW<::VROSC::LoopVisualizationWindow>  value) ;

/// @brief Method .ctor, addr 0x1897224, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DisplayName, addr 0x1896ddc, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_IsType, addr 0x1896dd4, size 0x8, virtual true, abstract: false, final false
inline ::VROSC::LoopEditorModeUI_Type get_IsType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopEditorVolumeMode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopEditorVolumeMode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopEditorVolumeMode(LoopEditorVolumeMode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopEditorVolumeMode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopEditorVolumeMode(LoopEditorVolumeMode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{650};

/// @brief Field _visualizationWindow, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopVisualizationWindow>  ____visualizationWindow;

/// @brief Field _paint, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::Paint>  ____paint;

/// @brief Field _startValues, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____startValues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopEditorVolumeMode, ____visualizationWindow) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorVolumeMode, ____paint) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorVolumeMode, ____startValues) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopEditorVolumeMode, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopEditorVolumeMode);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopEditorVolumeMode*, "VROSC", "LoopEditorVolumeMode");
