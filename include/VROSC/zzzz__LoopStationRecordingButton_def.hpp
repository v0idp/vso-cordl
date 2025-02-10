#pragma once
// IWYU pragma private; include "VROSC/LoopStationRecordingButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IAnchoredObject_def.hpp"
#include "VROSC/zzzz__LoopStationLoopHandler_def.hpp"
#include "VROSC/zzzz__LoopStationRecorder_def.hpp"
#include "VROSC/zzzz__SignalNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LoopStationRecordingButton)
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC::UI::Meshes {
class ProceduralArc;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
class DrumPadEffectOnSignal;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class LoopPlaybackConfig;
}
namespace VROSC {
class LoopStationDataController;
}
namespace VROSC {
struct LoopStationLoopHandler_LooperState;
}
namespace VROSC {
struct LoopStationRecorder_RecordingState;
}
namespace VROSC {
class LoopStationRecorder;
}
namespace VROSC {
class LoopStationRecordingButtonPlayback;
}
namespace VROSC {
class LoopStationRecordingButtonVisual;
}
namespace VROSC {
class LoopStationRecordingButton___c__DisplayClass41_0;
}
namespace VROSC {
class LoopStationRecordingProgress;
}
namespace VROSC {
class LoopStation;
}
namespace VROSC {
class LooperButtonProgressUpdater;
}
namespace VROSC {
class ResetableMover;
}
namespace VROSC {
class SelectionBar;
}
namespace VROSC {
class Signal;
}
namespace VROSC {
class TransformMover;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UIScrollableItem;
}
// Forward declare root types
namespace VROSC {
class LoopStationRecordingButton;
}
namespace VROSC {
class LoopStationRecordingButton___c__DisplayClass41_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationRecordingButton);
MARK_REF_PTR_T(::VROSC::LoopStationRecordingButton___c__DisplayClass41_0);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationRecordingButton/<>c__DisplayClass41_0
class CORDL_TYPE LoopStationRecordingButton___c__DisplayClass41_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::LoopStationRecordingButton>  __4__this;

/// @brief Field dataController, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_dataController, put=__cordl_internal_set_dataController)) ::VROSC::LoopStationDataController*  dataController;

static inline ::VROSC::LoopStationRecordingButton___c__DisplayClass41_0* New_ctor() ;

/// @brief Method <SetToData>b__0, addr 0x18aba38, size 0x2f8, virtual false, abstract: false, final false
inline void _SetToData_b__0(bool  success, ::UnityEngine::Vector3  anchorPosition, ::UnityEngine::Quaternion  anchorRotation) ;

/// @brief Method <SetToData>b__1, addr 0x18abd30, size 0x188, virtual false, abstract: false, final false
inline void _SetToData_b__1(::VROSC::Error  error) ;

constexpr ::UnityW<::VROSC::LoopStationRecordingButton> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::LoopStationRecordingButton>& __cordl_internal_get___4__this() ;

constexpr ::VROSC::LoopStationDataController* const& __cordl_internal_get_dataController() const;

constexpr ::VROSC::LoopStationDataController*& __cordl_internal_get_dataController() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::LoopStationRecordingButton>  value) ;

constexpr void __cordl_internal_set_dataController(::VROSC::LoopStationDataController*  value) ;

/// @brief Method .ctor, addr 0x18aba30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationRecordingButton___c__DisplayClass41_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationRecordingButton___c__DisplayClass41_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationRecordingButton___c__DisplayClass41_0(LoopStationRecordingButton___c__DisplayClass41_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationRecordingButton___c__DisplayClass41_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationRecordingButton___c__DisplayClass41_0(LoopStationRecordingButton___c__DisplayClass41_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{705};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationRecordingButton>  _____4__this;

/// @brief Field dataController, offset: 0x18, size: 0x8, def value: None
 ::VROSC::LoopStationDataController*  ___dataController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationRecordingButton___c__DisplayClass41_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButton___c__DisplayClass41_0, ___dataController) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationRecordingButton___c__DisplayClass41_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.IAnchoredObject, VROSC.LoopStationLoopHandler::LooperState, VROSC.LoopStationRecorder::RecordingState, VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationRecordingButton
class CORDL_TYPE LoopStationRecordingButton : public ::VROSC::SignalNode {
public:
// Declarations
using __c__DisplayClass41_0 = ::VROSC::LoopStationRecordingButton___c__DisplayClass41_0;

 __declspec(property(get=get_LoopPlaybackConfig)) ::VROSC::LoopPlaybackConfig*  LoopPlaybackConfig;

 __declspec(property(get=get_RecordingProgressValue, put=set_RecordingProgressValue)) float_t  RecordingProgressValue;

 __declspec(property(get=get_TransformMover)) ::UnityW<::VROSC::TransformMover>  TransformMover;

/// @brief Field <RecordingProgressValue>k__BackingField, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__RecordingProgressValue_k__BackingField, put=__cordl_internal_set__RecordingProgressValue_k__BackingField)) float_t  _RecordingProgressValue_k__BackingField;

/// @brief Field _arc, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__arc, put=__cordl_internal_set__arc)) ::UnityW<::VROSC::UI::Meshes::ProceduralArc>  _arc;

/// @brief Field _buttonText, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttonText, put=__cordl_internal_set__buttonText)) ::UnityW<::TMPro::TextMeshPro>  _buttonText;

/// @brief Field _clickInput, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__clickInput, put=__cordl_internal_set__clickInput)) ::UnityW<::VROSC::UIButton>  _clickInput;

/// @brief Field _drumPadEffect, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__drumPadEffect, put=__cordl_internal_set__drumPadEffect)) ::UnityW<::VROSC::DrumPadEffectOnSignal>  _drumPadEffect;

/// @brief Field _loopLengthSelectionBar, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopLengthSelectionBar, put=__cordl_internal_set__loopLengthSelectionBar)) ::UnityW<::VROSC::SelectionBar>  _loopLengthSelectionBar;

/// @brief Field _loopLengthSelectionBarHolder, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopLengthSelectionBarHolder, put=__cordl_internal_set__loopLengthSelectionBarHolder)) ::UnityW<::UnityEngine::GameObject>  _loopLengthSelectionBarHolder;

/// @brief Field _loopStation, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStation, put=__cordl_internal_set__loopStation)) ::UnityW<::VROSC::LoopStation>  _loopStation;

/// @brief Field _looperState, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__looperState, put=__cordl_internal_set__looperState)) ::VROSC::LoopStationLoopHandler_LooperState  _looperState;

/// @brief Field _offset, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__offset, put=__cordl_internal_set__offset)) float_t  _offset;

/// @brief Field _playback, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__playback, put=__cordl_internal_set__playback)) ::UnityW<::VROSC::LoopStationRecordingButtonPlayback>  _playback;

/// @brief Field _recorder, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__recorder, put=__cordl_internal_set__recorder)) ::UnityW<::VROSC::LoopStationRecorder>  _recorder;

/// @brief Field _recordingProgress, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordingProgress, put=__cordl_internal_set__recordingProgress)) ::VROSC::LoopStationRecordingProgress*  _recordingProgress;

/// @brief Field _recordingState, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get__recordingState, put=__cordl_internal_set__recordingState)) ::VROSC::LoopStationRecorder_RecordingState  _recordingState;

/// @brief Field _resetableMover, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__resetableMover, put=__cordl_internal_set__resetableMover)) ::UnityW<::VROSC::ResetableMover>  _resetableMover;

/// @brief Field _slider, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__slider, put=__cordl_internal_set__slider)) ::UnityW<::VROSC::LooperButtonProgressUpdater>  _slider;

/// @brief Field _visual, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__visual, put=__cordl_internal_set__visual)) ::VROSC::LoopStationRecordingButtonVisual*  _visual;

/// @brief Convert operator to "::VROSC::IAnchoredObject"
constexpr operator  ::VROSC::IAnchoredObject*() noexcept;

/// @brief Method AddSpatialAnchorToData, addr 0x18ab908, size 0x64, virtual true, abstract: false, final true
inline void AddSpatialAnchorToData(::StringW  anchorUuid) ;

/// @brief Method Awake, addr 0x18aa784, size 0x354, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ButtonMoved, addr 0x18ab7ac, size 0xe8, virtual false, abstract: false, final false
inline void ButtonMoved(::VROSC::ResetableMover*  mover) ;

/// @brief Method ButtonReset, addr 0x18ab784, size 0x28, virtual false, abstract: false, final false
inline void ButtonReset(::VROSC::ResetableMover*  mover) ;

/// @brief Method ClickInput, addr 0x18aaad8, size 0x2c, virtual false, abstract: false, final false
inline void ClickInput(::VROSC::ClickData*  obj) ;

/// @brief Method LoopStationMoved, addr 0x18ab894, size 0x74, virtual false, abstract: false, final false
inline void LoopStationMoved(::VROSC::TransformMover*  mover) ;

/// @brief Method MultiplierChanged, addr 0x18ab354, size 0x1c, virtual false, abstract: false, final false
inline void MultiplierChanged(::VROSC::UIScrollableItem*  obj) ;

static inline ::VROSC::LoopStationRecordingButton* New_ctor() ;

/// @brief Method NodeBegin, addr 0x18ab4b0, size 0x18, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method OnDestroy, addr 0x18aab54, size 0x42c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x18aab4c, size 0x8, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RecorderStateChanged, addr 0x18ab4a8, size 0x8, virtual false, abstract: false, final false
inline void RecorderStateChanged(::VROSC::LoopStationRecorder_RecordingState  recordingState) ;

/// @brief Method RemoveSpatialAnchorFromData, addr 0x18ab96c, size 0x64, virtual true, abstract: false, final true
inline void RemoveSpatialAnchorFromData(::StringW  anchorUuid) ;

/// @brief Method SetPlaybackSettings, addr 0x18ab338, size 0x1c, virtual false, abstract: false, final false
inline void SetPlaybackSettings(::VROSC::LoopPlaybackConfig*  loopPlaybackConfig) ;

/// @brief Method SetToData, addr 0x18ab0b8, size 0x280, virtual false, abstract: false, final false
inline void SetToData(::VROSC::LoopStationDataController*  dataController) ;

/// @brief Method SetValue, addr 0x18ab6b8, size 0x80, virtual false, abstract: false, final false
inline void SetValue(float_t  value, float_t  flashValue) ;

/// @brief Method Setup, addr 0x18aaf80, size 0x138, virtual false, abstract: false, final false
inline void Setup(::VROSC::LoopStation*  loopStation) ;

/// @brief Method Start, addr 0x18aab04, size 0x48, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x18ab4c8, size 0x1f0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateArc, addr 0x18ab738, size 0x4c, virtual false, abstract: false, final false
inline void UpdateArc() ;

/// @brief Method UpdateLooperState, addr 0x18ab370, size 0x8, virtual false, abstract: false, final false
inline void UpdateLooperState(::VROSC::LoopStationLoopHandler_LooperState  state) ;

/// @brief Method UpdateVisually, addr 0x18ab378, size 0x130, virtual false, abstract: false, final false
inline void UpdateVisually() ;

constexpr float_t const& __cordl_internal_get__RecordingProgressValue_k__BackingField() const;

constexpr float_t& __cordl_internal_get__RecordingProgressValue_k__BackingField() ;

constexpr ::UnityW<::VROSC::UI::Meshes::ProceduralArc> const& __cordl_internal_get__arc() const;

constexpr ::UnityW<::VROSC::UI::Meshes::ProceduralArc>& __cordl_internal_get__arc() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__buttonText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__buttonText() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__clickInput() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__clickInput() ;

constexpr ::UnityW<::VROSC::DrumPadEffectOnSignal> const& __cordl_internal_get__drumPadEffect() const;

constexpr ::UnityW<::VROSC::DrumPadEffectOnSignal>& __cordl_internal_get__drumPadEffect() ;

constexpr ::UnityW<::VROSC::SelectionBar> const& __cordl_internal_get__loopLengthSelectionBar() const;

constexpr ::UnityW<::VROSC::SelectionBar>& __cordl_internal_get__loopLengthSelectionBar() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__loopLengthSelectionBarHolder() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__loopLengthSelectionBarHolder() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__loopStation() ;

constexpr ::VROSC::LoopStationLoopHandler_LooperState const& __cordl_internal_get__looperState() const;

constexpr ::VROSC::LoopStationLoopHandler_LooperState& __cordl_internal_get__looperState() ;

constexpr float_t const& __cordl_internal_get__offset() const;

constexpr float_t& __cordl_internal_get__offset() ;

constexpr ::UnityW<::VROSC::LoopStationRecordingButtonPlayback> const& __cordl_internal_get__playback() const;

constexpr ::UnityW<::VROSC::LoopStationRecordingButtonPlayback>& __cordl_internal_get__playback() ;

constexpr ::UnityW<::VROSC::LoopStationRecorder> const& __cordl_internal_get__recorder() const;

constexpr ::UnityW<::VROSC::LoopStationRecorder>& __cordl_internal_get__recorder() ;

constexpr ::VROSC::LoopStationRecordingProgress* const& __cordl_internal_get__recordingProgress() const;

constexpr ::VROSC::LoopStationRecordingProgress*& __cordl_internal_get__recordingProgress() ;

constexpr ::VROSC::LoopStationRecorder_RecordingState const& __cordl_internal_get__recordingState() const;

constexpr ::VROSC::LoopStationRecorder_RecordingState& __cordl_internal_get__recordingState() ;

constexpr ::UnityW<::VROSC::ResetableMover> const& __cordl_internal_get__resetableMover() const;

constexpr ::UnityW<::VROSC::ResetableMover>& __cordl_internal_get__resetableMover() ;

constexpr ::UnityW<::VROSC::LooperButtonProgressUpdater> const& __cordl_internal_get__slider() const;

constexpr ::UnityW<::VROSC::LooperButtonProgressUpdater>& __cordl_internal_get__slider() ;

constexpr ::VROSC::LoopStationRecordingButtonVisual* const& __cordl_internal_get__visual() const;

constexpr ::VROSC::LoopStationRecordingButtonVisual*& __cordl_internal_get__visual() ;

constexpr void __cordl_internal_set__RecordingProgressValue_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__arc(::UnityW<::VROSC::UI::Meshes::ProceduralArc>  value) ;

constexpr void __cordl_internal_set__buttonText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__clickInput(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__drumPadEffect(::UnityW<::VROSC::DrumPadEffectOnSignal>  value) ;

constexpr void __cordl_internal_set__loopLengthSelectionBar(::UnityW<::VROSC::SelectionBar>  value) ;

constexpr void __cordl_internal_set__loopLengthSelectionBarHolder(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value) ;

constexpr void __cordl_internal_set__looperState(::VROSC::LoopStationLoopHandler_LooperState  value) ;

constexpr void __cordl_internal_set__offset(float_t  value) ;

constexpr void __cordl_internal_set__playback(::UnityW<::VROSC::LoopStationRecordingButtonPlayback>  value) ;

constexpr void __cordl_internal_set__recorder(::UnityW<::VROSC::LoopStationRecorder>  value) ;

constexpr void __cordl_internal_set__recordingProgress(::VROSC::LoopStationRecordingProgress*  value) ;

constexpr void __cordl_internal_set__recordingState(::VROSC::LoopStationRecorder_RecordingState  value) ;

constexpr void __cordl_internal_set__resetableMover(::UnityW<::VROSC::ResetableMover>  value) ;

constexpr void __cordl_internal_set__slider(::UnityW<::VROSC::LooperButtonProgressUpdater>  value) ;

constexpr void __cordl_internal_set__visual(::VROSC::LoopStationRecordingButtonVisual*  value) ;

/// @brief Method .ctor, addr 0x18ab9d0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_LoopPlaybackConfig, addr 0x18a6d30, size 0x1c, virtual false, abstract: false, final false
inline ::VROSC::LoopPlaybackConfig* get_LoopPlaybackConfig() ;

/// @brief Method get_RecordingProgressValue, addr 0x18aa760, size 0x8, virtual false, abstract: false, final false
inline float_t get_RecordingProgressValue() ;

/// @brief Method get_TransformMover, addr 0x18aa768, size 0x1c, virtual true, abstract: false, final true
inline ::UnityW<::VROSC::TransformMover> get_TransformMover() ;

/// @brief Convert to "::VROSC::IAnchoredObject"
constexpr ::VROSC::IAnchoredObject* i___VROSC__IAnchoredObject() noexcept;

/// @brief Method set_RecordingProgressValue, addr 0x18aa758, size 0x8, virtual false, abstract: false, final false
inline void set_RecordingProgressValue(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationRecordingButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationRecordingButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationRecordingButton(LoopStationRecordingButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationRecordingButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationRecordingButton(LoopStationRecordingButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{706};

/// @brief Field _recorder, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationRecorder>  ____recorder;

/// @brief Field _loopLengthSelectionBar, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::SelectionBar>  ____loopLengthSelectionBar;

/// @brief Field _loopLengthSelectionBarHolder, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____loopLengthSelectionBarHolder;

/// @brief Field _resetableMover, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::ResetableMover>  ____resetableMover;

/// @brief Field _clickInput, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____clickInput;

/// @brief Field _drumPadEffect, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::VROSC::DrumPadEffectOnSignal>  ____drumPadEffect;

/// @brief Field _slider, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::LooperButtonProgressUpdater>  ____slider;

/// @brief Field _buttonText, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____buttonText;

/// @brief Field _visual, offset: 0x88, size: 0x8, def value: None
 ::VROSC::LoopStationRecordingButtonVisual*  ____visual;

/// @brief Field _arc, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::Meshes::ProceduralArc>  ____arc;

/// @brief Field _playback, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationRecordingButtonPlayback>  ____playback;

/// @brief Field _offset, offset: 0xa0, size: 0x4, def value: None
 float_t  ____offset;

/// @brief Field _loopStation, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____loopStation;

/// @brief Field _recordingProgress, offset: 0xb0, size: 0x8, def value: None
 ::VROSC::LoopStationRecordingProgress*  ____recordingProgress;

/// @brief Field _looperState, offset: 0xb8, size: 0x4, def value: None
 ::VROSC::LoopStationLoopHandler_LooperState  ____looperState;

/// @brief Field _recordingState, offset: 0xbc, size: 0x4, def value: None
 ::VROSC::LoopStationRecorder_RecordingState  ____recordingState;

/// @brief Field <RecordingProgressValue>k__BackingField, offset: 0xc0, size: 0x4, def value: None
 float_t  ____RecordingProgressValue_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationRecordingButton, ____recorder) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButton, ____loopLengthSelectionBar) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButton, ____loopLengthSelectionBarHolder) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButton, ____resetableMover) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButton, ____clickInput) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButton, ____drumPadEffect) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButton, ____slider) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButton, ____buttonText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButton, ____visual) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButton, ____arc) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButton, ____playback) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButton, ____offset) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButton, ____loopStation) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButton, ____recordingProgress) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButton, ____looperState) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButton, ____recordingState) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButton, ____RecordingProgressValue_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationRecordingButton, 0xc8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationRecordingButton);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationRecordingButton*, "VROSC", "LoopStationRecordingButton");
NEED_NO_BOX(::VROSC::LoopStationRecordingButton___c__DisplayClass41_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationRecordingButton___c__DisplayClass41_0*, "VROSC", "LoopStationRecordingButton/<>c__DisplayClass41_0");
