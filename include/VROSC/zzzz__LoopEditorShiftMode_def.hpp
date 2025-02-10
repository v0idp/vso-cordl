#pragma once
// IWYU pragma private; include "VROSC/LoopEditorShiftMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__LoopEditorModeUI_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopEditorShiftMode)
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
namespace VROSC {
class UIToggle;
}
// Forward declare root types
namespace VROSC {
class LoopEditorShiftMode;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopEditorShiftMode);
// Dependencies VROSC.LoopEditorModeUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopEditorShiftMode
class CORDL_TYPE LoopEditorShiftMode : public ::VROSC::LoopEditorModeUI {
public:
// Declarations
 __declspec(property(get=get_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_IsType)) ::VROSC::LoopEditorModeUI_Type  IsType;

/// @brief Field _absoluteToggle, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__absoluteToggle, put=__cordl_internal_set__absoluteToggle)) ::UnityW<::VROSC::UIToggle>  _absoluteToggle;

/// @brief Field _currentOffset, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentOffset, put=__cordl_internal_set__currentOffset)) int32_t  _currentOffset;

/// @brief Field _dragInput, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__dragInput, put=__cordl_internal_set__dragInput)) ::UnityW<::VROSC::LoopEditorDragInput>  _dragInput;

/// @brief Field _dragStartValue, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__dragStartValue, put=__cordl_internal_set__dragStartValue)) int32_t  _dragStartValue;

/// @brief Field _originalValue, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__originalValue, put=__cordl_internal_set__originalValue)) int32_t  _originalValue;

/// @brief Field _precisionSelector, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__precisionSelector, put=__cordl_internal_set__precisionSelector)) ::UnityW<::VROSC::LoopEditorPrecisionSelector>  _precisionSelector;

/// @brief Field _snapDragMultiplier, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__snapDragMultiplier, put=__cordl_internal_set__snapDragMultiplier)) float_t  _snapDragMultiplier;

/// @brief Field _visualizationWindow, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__visualizationWindow, put=__cordl_internal_set__visualizationWindow)) ::UnityW<::VROSC::LoopVisualizationWindow>  _visualizationWindow;

/// @brief Method Awake, addr 0x1894d48, size 0x100, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Close, addr 0x1895404, size 0x204, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method DragBegin, addr 0x18953d4, size 0x30, virtual false, abstract: false, final false
inline void DragBegin() ;

/// @brief Method DragUpdated, addr 0x189514c, size 0x288, virtual false, abstract: false, final false
inline void DragUpdated(::UnityEngine::Vector3  dragMovementDelta) ;

/// @brief Method GetLineCount, addr 0x1895648, size 0x170, virtual false, abstract: false, final false
inline float_t GetLineCount(float_t  precision) ;

static inline ::VROSC::LoopEditorShiftMode* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1894e48, size 0x100, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnNewLoopPlayer, addr 0x18957f0, size 0x104, virtual true, abstract: false, final false
inline void OnNewLoopPlayer(::VROSC::LoopPlayer*  loopPlayer) ;

/// @brief Method Open, addr 0x1894f48, size 0x204, virtual true, abstract: false, final false
inline void Open() ;

/// @brief Method ResetUI, addr 0x1895934, size 0x4c, virtual true, abstract: false, final false
inline void ResetUI() ;

/// @brief Method RevertEdits, addr 0x1895980, size 0x20, virtual true, abstract: false, final false
inline void RevertEdits() ;

/// @brief Method UpdateAbsoluteToggleIsDisabled, addr 0x18957b8, size 0x38, virtual false, abstract: false, final false
inline void UpdateAbsoluteToggleIsDisabled() ;

/// @brief Method UpdatePrecision, addr 0x18958f4, size 0x40, virtual false, abstract: false, final false
inline void UpdatePrecision(float_t  precision) ;

/// @brief Method UpdateUI, addr 0x189560c, size 0x3c, virtual false, abstract: false, final false
inline void UpdateUI() ;

/// @brief Method UpdateUI, addr 0x1895608, size 0x4, virtual false, abstract: false, final false
inline void UpdateUI(int32_t  beatsPerBar) ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__absoluteToggle() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__absoluteToggle() ;

constexpr int32_t const& __cordl_internal_get__currentOffset() const;

constexpr int32_t& __cordl_internal_get__currentOffset() ;

constexpr ::UnityW<::VROSC::LoopEditorDragInput> const& __cordl_internal_get__dragInput() const;

constexpr ::UnityW<::VROSC::LoopEditorDragInput>& __cordl_internal_get__dragInput() ;

constexpr int32_t const& __cordl_internal_get__dragStartValue() const;

constexpr int32_t& __cordl_internal_get__dragStartValue() ;

constexpr int32_t const& __cordl_internal_get__originalValue() const;

constexpr int32_t& __cordl_internal_get__originalValue() ;

constexpr ::UnityW<::VROSC::LoopEditorPrecisionSelector> const& __cordl_internal_get__precisionSelector() const;

constexpr ::UnityW<::VROSC::LoopEditorPrecisionSelector>& __cordl_internal_get__precisionSelector() ;

constexpr float_t const& __cordl_internal_get__snapDragMultiplier() const;

constexpr float_t& __cordl_internal_get__snapDragMultiplier() ;

constexpr ::UnityW<::VROSC::LoopVisualizationWindow> const& __cordl_internal_get__visualizationWindow() const;

constexpr ::UnityW<::VROSC::LoopVisualizationWindow>& __cordl_internal_get__visualizationWindow() ;

constexpr void __cordl_internal_set__absoluteToggle(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__currentOffset(int32_t  value) ;

constexpr void __cordl_internal_set__dragInput(::UnityW<::VROSC::LoopEditorDragInput>  value) ;

constexpr void __cordl_internal_set__dragStartValue(int32_t  value) ;

constexpr void __cordl_internal_set__originalValue(int32_t  value) ;

constexpr void __cordl_internal_set__precisionSelector(::UnityW<::VROSC::LoopEditorPrecisionSelector>  value) ;

constexpr void __cordl_internal_set__snapDragMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__visualizationWindow(::UnityW<::VROSC::LoopVisualizationWindow>  value) ;

/// @brief Method .ctor, addr 0x18959a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DisplayName, addr 0x1894d08, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_IsType, addr 0x1894d00, size 0x8, virtual true, abstract: false, final false
inline ::VROSC::LoopEditorModeUI_Type get_IsType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopEditorShiftMode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopEditorShiftMode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopEditorShiftMode(LoopEditorShiftMode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopEditorShiftMode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopEditorShiftMode(LoopEditorShiftMode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{647};

/// @brief Field _precisionSelector, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopEditorPrecisionSelector>  ____precisionSelector;

/// @brief Field _dragInput, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopEditorDragInput>  ____dragInput;

/// @brief Field _visualizationWindow, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopVisualizationWindow>  ____visualizationWindow;

/// @brief Field _absoluteToggle, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____absoluteToggle;

/// @brief Field _originalValue, offset: 0x58, size: 0x4, def value: None
 int32_t  ____originalValue;

/// @brief Field _dragStartValue, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____dragStartValue;

/// @brief Field _currentOffset, offset: 0x60, size: 0x4, def value: None
 int32_t  ____currentOffset;

/// @brief Field _snapDragMultiplier, offset: 0x64, size: 0x4, def value: None
 float_t  ____snapDragMultiplier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopEditorShiftMode, ____precisionSelector) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorShiftMode, ____dragInput) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorShiftMode, ____visualizationWindow) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorShiftMode, ____absoluteToggle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorShiftMode, ____originalValue) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorShiftMode, ____dragStartValue) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorShiftMode, ____currentOffset) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorShiftMode, ____snapDragMultiplier) == 0x64, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopEditorShiftMode, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopEditorShiftMode);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopEditorShiftMode*, "VROSC", "LoopEditorShiftMode");
