#pragma once
// IWYU pragma private; include "VROSC/LoopEditorPanMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__LoopEditorModeUI_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LoopEditorPanMode)
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
class LoopEditorPanMode;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopEditorPanMode);
// Dependencies VROSC.LoopEditorModeUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopEditorPanMode
class CORDL_TYPE LoopEditorPanMode : public ::VROSC::LoopEditorModeUI {
public:
// Declarations
 __declspec(property(get=get_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_IsType)) ::VROSC::LoopEditorModeUI_Type  IsType;

/// @brief Field _paint, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__paint, put=__cordl_internal_set__paint)) ::UnityW<::VROSC::Paint>  _paint;

/// @brief Field _visualizationWindow, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__visualizationWindow, put=__cordl_internal_set__visualizationWindow)) ::UnityW<::VROSC::LoopVisualizationWindow>  _visualizationWindow;

/// @brief Method Awake, addr 0x1894534, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Close, addr 0x189478c, size 0xcc, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method LoadFromLoop, addr 0x1894610, size 0x17c, virtual false, abstract: false, final false
inline void LoadFromLoop() ;

static inline ::VROSC::LoopEditorPanMode* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1894538, size 0x4, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnNewLoopPlayer, addr 0x1894a10, size 0x1d4, virtual true, abstract: false, final false
inline void OnNewLoopPlayer(::VROSC::LoopPlayer*  loopPlayer) ;

/// @brief Method Open, addr 0x189453c, size 0xd4, virtual true, abstract: false, final false
inline void Open() ;

/// @brief Method PaintUpdated, addr 0x1894858, size 0x1b8, virtual false, abstract: false, final false
inline void PaintUpdated() ;

/// @brief Method ResetUI, addr 0x1894cd4, size 0x4, virtual true, abstract: false, final false
inline void ResetUI() ;

/// @brief Method RevertEdits, addr 0x1894cd8, size 0x20, virtual true, abstract: false, final false
inline void RevertEdits() ;

constexpr ::UnityW<::VROSC::Paint> const& __cordl_internal_get__paint() const;

constexpr ::UnityW<::VROSC::Paint>& __cordl_internal_get__paint() ;

constexpr ::UnityW<::VROSC::LoopVisualizationWindow> const& __cordl_internal_get__visualizationWindow() const;

constexpr ::UnityW<::VROSC::LoopVisualizationWindow>& __cordl_internal_get__visualizationWindow() ;

constexpr void __cordl_internal_set__paint(::UnityW<::VROSC::Paint>  value) ;

constexpr void __cordl_internal_set__visualizationWindow(::UnityW<::VROSC::LoopVisualizationWindow>  value) ;

/// @brief Method .ctor, addr 0x1894cf8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DisplayName, addr 0x18944f4, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_IsType, addr 0x18944ec, size 0x8, virtual true, abstract: false, final false
inline ::VROSC::LoopEditorModeUI_Type get_IsType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopEditorPanMode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopEditorPanMode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopEditorPanMode(LoopEditorPanMode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopEditorPanMode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopEditorPanMode(LoopEditorPanMode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{646};

/// @brief Field _visualizationWindow, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopVisualizationWindow>  ____visualizationWindow;

/// @brief Field _paint, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::Paint>  ____paint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopEditorPanMode, ____visualizationWindow) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorPanMode, ____paint) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopEditorPanMode, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopEditorPanMode);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopEditorPanMode*, "VROSC", "LoopEditorPanMode");
