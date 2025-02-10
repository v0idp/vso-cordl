#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerRecordingState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LoopPlayerRecordingState)
namespace TMPro {
class TextMeshPro;
}
namespace VROSC::UI {
class UIColorGetter;
}
namespace VROSC {
class AdjustableMesh;
}
namespace VROSC {
struct LoopStationRecorder_RecordingState;
}
namespace VROSC {
class LoopStation;
}
namespace VROSC {
class MinMaxFloat;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC {
class LoopPlayerRecordingState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopPlayerRecordingState);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlayerRecordingState
class CORDL_TYPE LoopPlayerRecordingState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _adjustableMesh, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__adjustableMesh, put=__cordl_internal_set__adjustableMesh)) ::UnityW<::VROSC::AdjustableMesh>  _adjustableMesh;

/// @brief Field _cancelButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__cancelButton, put=__cordl_internal_set__cancelButton)) ::UnityW<::VROSC::UIButton>  _cancelButton;

/// @brief Field _loopStation, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStation, put=__cordl_internal_set__loopStation)) ::UnityW<::VROSC::LoopStation>  _loopStation;

/// @brief Field _recordingLabel, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordingLabel, put=__cordl_internal_set__recordingLabel)) ::UnityW<::TMPro::TextMeshPro>  _recordingLabel;

/// @brief Field _rerecordButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__rerecordButton, put=__cordl_internal_set__rerecordButton)) ::UnityW<::VROSC::UIButton>  _rerecordButton;

/// @brief Field _restartButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__restartButton, put=__cordl_internal_set__restartButton)) ::UnityW<::VROSC::UIButton>  _restartButton;

/// @brief Field _sliderColor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__sliderColor, put=__cordl_internal_set__sliderColor)) ::UnityW<::VROSC::UI::UIColorGetter>  _sliderColor;

/// @brief Field _uvRange, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__uvRange, put=__cordl_internal_set__uvRange)) ::VROSC::MinMaxFloat*  _uvRange;

/// @brief Method Awake, addr 0x18a2320, size 0x34c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CancelRecordingButtonPressed, addr 0x18a2c40, size 0x24, virtual false, abstract: false, final false
inline void CancelRecordingButtonPressed() ;

static inline ::VROSC::LoopPlayerRecordingState* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18a2830, size 0x318, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RecorderStateChanged, addr 0x18a2b48, size 0x2c, virtual false, abstract: false, final false
inline void RecorderStateChanged(::VROSC::LoopStationRecorder_RecordingState  recordingState) ;

/// @brief Method RerecordHovered, addr 0x18a2d68, size 0xac, virtual false, abstract: false, final false
inline void RerecordHovered(bool  hovering) ;

/// @brief Method RerecordPressed, addr 0x18a2c64, size 0x44, virtual false, abstract: false, final false
inline void RerecordPressed() ;

/// @brief Method RestartRecordingButtonPressed, addr 0x18a2ba0, size 0x38, virtual false, abstract: false, final false
inline void RestartRecordingButtonPressed() ;

/// @brief Method SetActive, addr 0x18a2cf8, size 0x28, virtual false, abstract: false, final false
inline void SetActive(bool  active) ;

/// @brief Method SetColor, addr 0x18a266c, size 0xf4, virtual false, abstract: false, final false
inline void SetColor() ;

/// @brief Method SetRecordProgressValue, addr 0x18a2760, size 0xd0, virtual false, abstract: false, final false
inline void SetRecordProgressValue(float_t  value) ;

/// @brief Method SetRecordingText, addr 0x18a2d44, size 0x24, virtual false, abstract: false, final false
inline void SetRecordingText(::StringW  recordingtext) ;

/// @brief Method Setup, addr 0x18a2ca8, size 0x50, virtual false, abstract: false, final false
inline void Setup(::VROSC::LoopStation*  loopStation, bool  firstLoop) ;

/// @brief Method ShowRerecordButton, addr 0x18a2b74, size 0x2c, virtual false, abstract: false, final false
inline void ShowRerecordButton() ;

/// @brief Method Update, addr 0x18a2d20, size 0x24, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__adjustableMesh() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__adjustableMesh() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__cancelButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__cancelButton() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__loopStation() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__recordingLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__recordingLabel() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__rerecordButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__rerecordButton() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__restartButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__restartButton() ;

constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& __cordl_internal_get__sliderColor() const;

constexpr ::UnityW<::VROSC::UI::UIColorGetter>& __cordl_internal_get__sliderColor() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__uvRange() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__uvRange() ;

constexpr void __cordl_internal_set__adjustableMesh(::UnityW<::VROSC::AdjustableMesh>  value) ;

constexpr void __cordl_internal_set__cancelButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value) ;

constexpr void __cordl_internal_set__recordingLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__rerecordButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__restartButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__sliderColor(::UnityW<::VROSC::UI::UIColorGetter>  value) ;

constexpr void __cordl_internal_set__uvRange(::VROSC::MinMaxFloat*  value) ;

/// @brief Method .ctor, addr 0x18a2e30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlayerRecordingState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerRecordingState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlayerRecordingState(LoopPlayerRecordingState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerRecordingState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlayerRecordingState(LoopPlayerRecordingState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{677};

/// @brief Field _sliderColor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIColorGetter>  ____sliderColor;

/// @brief Field _adjustableMesh, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____adjustableMesh;

/// @brief Field _uvRange, offset: 0x30, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____uvRange;

/// @brief Field _recordingLabel, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____recordingLabel;

/// @brief Field _cancelButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____cancelButton;

/// @brief Field _restartButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____restartButton;

/// @brief Field _rerecordButton, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____rerecordButton;

/// @brief Field _loopStation, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____loopStation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlayerRecordingState, ____sliderColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerRecordingState, ____adjustableMesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerRecordingState, ____uvRange) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerRecordingState, ____recordingLabel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerRecordingState, ____cancelButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerRecordingState, ____restartButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerRecordingState, ____rerecordButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerRecordingState, ____loopStation) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlayerRecordingState, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopPlayerRecordingState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerRecordingState*, "VROSC", "LoopPlayerRecordingState");
