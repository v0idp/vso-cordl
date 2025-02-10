#pragma once
// IWYU pragma private; include "VROSC/LoopEditorTrimMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__LoopEditorModeUI_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopEditorTrimMode)
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class LoopEditorDragInput;
}
namespace VROSC {
struct LoopEditorModeUI_Type;
}
namespace VROSC {
class LoopEditorPrecisionSelector;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class LoopVisualizationWindow;
}
// Forward declare root types
namespace VROSC {
class LoopEditorTrimMode;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopEditorTrimMode);
// Dependencies VROSC.LoopEditorModeUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopEditorTrimMode
class CORDL_TYPE LoopEditorTrimMode : public ::VROSC::LoopEditorModeUI {
public:
// Declarations
 __declspec(property(get=get_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_IsType)) ::VROSC::LoopEditorModeUI_Type  IsType;

/// @brief Field _currentPlayLength, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentPlayLength, put=__cordl_internal_set__currentPlayLength)) int32_t  _currentPlayLength;

/// @brief Field _dragInput, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__dragInput, put=__cordl_internal_set__dragInput)) ::UnityW<::VROSC::LoopEditorDragInput>  _dragInput;

/// @brief Field _dragStartLength, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__dragStartLength, put=__cordl_internal_set__dragStartLength)) float_t  _dragStartLength;

/// @brief Field _precisionSelector, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__precisionSelector, put=__cordl_internal_set__precisionSelector)) ::UnityW<::VROSC::LoopEditorPrecisionSelector>  _precisionSelector;

/// @brief Field _shortestTrimDivision, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__shortestTrimDivision, put=__cordl_internal_set__shortestTrimDivision)) int32_t  _shortestTrimDivision;

/// @brief Field _trimSpeedMultiplier, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__trimSpeedMultiplier, put=__cordl_internal_set__trimSpeedMultiplier)) float_t  _trimSpeedMultiplier;

/// @brief Field _visualizationWindow, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__visualizationWindow, put=__cordl_internal_set__visualizationWindow)) ::UnityW<::VROSC::LoopVisualizationWindow>  _visualizationWindow;

/// @brief Method Awake, addr 0x1896070, size 0x100, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Close, addr 0x1896a2c, size 0x204, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method DragBegin, addr 0x1896990, size 0x9c, virtual false, abstract: false, final false
inline void DragBegin() ;

/// @brief Method DragUpdated, addr 0x18964d8, size 0x34c, virtual false, abstract: false, final false
inline void DragUpdated(::UnityEngine::Vector3  dragMovementDelta) ;

/// @brief Method GetLineCount, addr 0x1896828, size 0x168, virtual false, abstract: false, final false
inline float_t GetLineCount(float_t  precision) ;

static inline ::VROSC::LoopEditorTrimMode* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1896170, size 0x100, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnNewLoopPlayer, addr 0x1896c30, size 0xa0, virtual true, abstract: false, final false
inline void OnNewLoopPlayer(::VROSC::LoopPlayer*  loopPlayer) ;

/// @brief Method Open, addr 0x1896270, size 0x208, virtual true, abstract: false, final false
inline void Open() ;

/// @brief Method ResetUI, addr 0x1896d0c, size 0x2c, virtual true, abstract: false, final false
inline void ResetUI() ;

/// @brief Method RevertEdits, addr 0x1896d38, size 0x88, virtual true, abstract: false, final false
inline void RevertEdits() ;

/// @brief Method UpdatePrecision, addr 0x1896cd0, size 0x3c, virtual false, abstract: false, final false
inline void UpdatePrecision(float_t  precision) ;

/// @brief Method UpdateUI, addr 0x1896478, size 0x60, virtual false, abstract: false, final false
inline void UpdateUI() ;

/// @brief Method UpdateUI, addr 0x1896824, size 0x4, virtual false, abstract: false, final false
inline void UpdateUI(int32_t  beatsPerBar) ;

constexpr int32_t const& __cordl_internal_get__currentPlayLength() const;

constexpr int32_t& __cordl_internal_get__currentPlayLength() ;

constexpr ::UnityW<::VROSC::LoopEditorDragInput> const& __cordl_internal_get__dragInput() const;

constexpr ::UnityW<::VROSC::LoopEditorDragInput>& __cordl_internal_get__dragInput() ;

constexpr float_t const& __cordl_internal_get__dragStartLength() const;

constexpr float_t& __cordl_internal_get__dragStartLength() ;

constexpr ::UnityW<::VROSC::LoopEditorPrecisionSelector> const& __cordl_internal_get__precisionSelector() const;

constexpr ::UnityW<::VROSC::LoopEditorPrecisionSelector>& __cordl_internal_get__precisionSelector() ;

constexpr int32_t const& __cordl_internal_get__shortestTrimDivision() const;

constexpr int32_t& __cordl_internal_get__shortestTrimDivision() ;

constexpr float_t const& __cordl_internal_get__trimSpeedMultiplier() const;

constexpr float_t& __cordl_internal_get__trimSpeedMultiplier() ;

constexpr ::UnityW<::VROSC::LoopVisualizationWindow> const& __cordl_internal_get__visualizationWindow() const;

constexpr ::UnityW<::VROSC::LoopVisualizationWindow>& __cordl_internal_get__visualizationWindow() ;

constexpr void __cordl_internal_set__currentPlayLength(int32_t  value) ;

constexpr void __cordl_internal_set__dragInput(::UnityW<::VROSC::LoopEditorDragInput>  value) ;

constexpr void __cordl_internal_set__dragStartLength(float_t  value) ;

constexpr void __cordl_internal_set__precisionSelector(::UnityW<::VROSC::LoopEditorPrecisionSelector>  value) ;

constexpr void __cordl_internal_set__shortestTrimDivision(int32_t  value) ;

constexpr void __cordl_internal_set__trimSpeedMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__visualizationWindow(::UnityW<::VROSC::LoopVisualizationWindow>  value) ;

/// @brief Method .ctor, addr 0x1896dc0, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DisplayName, addr 0x1896030, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_IsType, addr 0x1896028, size 0x8, virtual true, abstract: false, final false
inline ::VROSC::LoopEditorModeUI_Type get_IsType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopEditorTrimMode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopEditorTrimMode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopEditorTrimMode(LoopEditorTrimMode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopEditorTrimMode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopEditorTrimMode(LoopEditorTrimMode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{649};

/// @brief Field _precisionSelector, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopEditorPrecisionSelector>  ____precisionSelector;

/// @brief Field _dragInput, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopEditorDragInput>  ____dragInput;

/// @brief Field _visualizationWindow, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopVisualizationWindow>  ____visualizationWindow;

/// @brief Field _dragStartLength, offset: 0x50, size: 0x4, def value: None
 float_t  ____dragStartLength;

/// @brief Field _shortestTrimDivision, offset: 0x54, size: 0x4, def value: None
 int32_t  ____shortestTrimDivision;

/// @brief Field _trimSpeedMultiplier, offset: 0x58, size: 0x4, def value: None
 float_t  ____trimSpeedMultiplier;

/// @brief Field _currentPlayLength, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____currentPlayLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopEditorTrimMode, ____precisionSelector) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorTrimMode, ____dragInput) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorTrimMode, ____visualizationWindow) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorTrimMode, ____dragStartLength) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorTrimMode, ____shortestTrimDivision) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorTrimMode, ____trimSpeedMultiplier) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorTrimMode, ____currentPlayLength) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopEditorTrimMode, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopEditorTrimMode);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopEditorTrimMode*, "VROSC", "LoopEditorTrimMode");
