#pragma once
// IWYU pragma private; include "VROSC/TapeRecorderUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TapeRecorderUI)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
struct TapeRecorderUI__DisplayTextAlert_d__45;
}
namespace VROSC {
class TapeRecorder;
}
namespace VROSC {
class TimeSlider;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UISlideToggle;
}
namespace VROSC {
class WaveformVisualizer;
}
// Forward declare root types
namespace VROSC {
class TapeRecorderUI;
}
namespace VROSC {
struct TapeRecorderUI__DisplayTextAlert_d__45;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TapeRecorderUI);
MARK_VAL_T(::VROSC::TapeRecorderUI__DisplayTextAlert_d__45);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.TapeRecorderUI/<DisplayTextAlert>d__45
struct CORDL_TYPE TapeRecorderUI__DisplayTextAlert_d__45 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16fd83c, size 0x284, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16fdac0, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr TapeRecorderUI__DisplayTextAlert_d__45() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::TapeRecorderUI>", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "displayTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr TapeRecorderUI__DisplayTextAlert_d__45(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::TapeRecorderUI>  __4__this, ::StringW  text, float_t  displayTime, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{830};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::TapeRecorderUI>  __4__this;

/// @brief Field text, offset: 0x30, size: 0x8, def value: None
 ::StringW  text;

/// @brief Field displayTime, offset: 0x38, size: 0x4, def value: None
 float_t  displayTime;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TapeRecorderUI__DisplayTextAlert_d__45, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI__DisplayTextAlert_d__45, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI__DisplayTextAlert_d__45, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI__DisplayTextAlert_d__45, text) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI__DisplayTextAlert_d__45, displayTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI__DisplayTextAlert_d__45, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TapeRecorderUI__DisplayTextAlert_d__45, 0x48>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TapeRecorderUI
class CORDL_TYPE TapeRecorderUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _DisplayTextAlert_d__45 = ::VROSC::TapeRecorderUI__DisplayTextAlert_d__45;

 __declspec(property(get=get_TimeSlider)) ::UnityW<::VROSC::TimeSlider>  TimeSlider;

/// @brief Field _mainPanel, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__mainPanel, put=__cordl_internal_set__mainPanel)) ::UnityW<::UnityEngine::GameObject>  _mainPanel;

/// @brief Field _pauseIcon, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__pauseIcon, put=__cordl_internal_set__pauseIcon)) ::UnityW<::UnityEngine::GameObject>  _pauseIcon;

/// @brief Field _playButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__playButton, put=__cordl_internal_set__playButton)) ::UnityW<::VROSC::UIButton>  _playButton;

/// @brief Field _playHead, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__playHead, put=__cordl_internal_set__playHead)) ::UnityW<::UnityEngine::RectTransform>  _playHead;

/// @brief Field _playHeadFullWidth, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__playHeadFullWidth, put=__cordl_internal_set__playHeadFullWidth)) float_t  _playHeadFullWidth;

/// @brief Field _playIcon, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__playIcon, put=__cordl_internal_set__playIcon)) ::UnityW<::UnityEngine::GameObject>  _playIcon;

/// @brief Field _previewToggle, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__previewToggle, put=__cordl_internal_set__previewToggle)) ::UnityW<::VROSC::UISlideToggle>  _previewToggle;

/// @brief Field _recordButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordButton, put=__cordl_internal_set__recordButton)) ::UnityW<::VROSC::UIButton>  _recordButton;

/// @brief Field _recordIcon, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordIcon, put=__cordl_internal_set__recordIcon)) ::UnityW<::UnityEngine::GameObject>  _recordIcon;

/// @brief Field _saveButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__saveButton, put=__cordl_internal_set__saveButton)) ::UnityW<::VROSC::UIButton>  _saveButton;

/// @brief Field _stopIcon, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__stopIcon, put=__cordl_internal_set__stopIcon)) ::UnityW<::UnityEngine::GameObject>  _stopIcon;

/// @brief Field _tapeRecorder, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__tapeRecorder, put=__cordl_internal_set__tapeRecorder)) ::UnityW<::VROSC::TapeRecorder>  _tapeRecorder;

/// @brief Field _textAlert, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__textAlert, put=__cordl_internal_set__textAlert)) ::UnityW<::TMPro::TextMeshPro>  _textAlert;

/// @brief Field _timeCounter, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeCounter, put=__cordl_internal_set__timeCounter)) ::UnityW<::TMPro::TextMeshPro>  _timeCounter;

/// @brief Field _timeSlider, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeSlider, put=__cordl_internal_set__timeSlider)) ::UnityW<::VROSC::TimeSlider>  _timeSlider;

/// @brief Field _warningCancelButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__warningCancelButton, put=__cordl_internal_set__warningCancelButton)) ::UnityW<::VROSC::UIButton>  _warningCancelButton;

/// @brief Field _warningOKButton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__warningOKButton, put=__cordl_internal_set__warningOKButton)) ::UnityW<::VROSC::UIButton>  _warningOKButton;

/// @brief Field _warningPopup, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__warningPopup, put=__cordl_internal_set__warningPopup)) ::UnityW<::UnityEngine::GameObject>  _warningPopup;

/// @brief Field _waveformVisualizer, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__waveformVisualizer, put=__cordl_internal_set__waveformVisualizer)) ::UnityW<::VROSC::WaveformVisualizer>  _waveformVisualizer;

/// @brief Method Clear, addr 0x16fbf88, size 0x168, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method DisplayLoadedRecording, addr 0x16fbe40, size 0x148, virtual false, abstract: false, final false
inline void DisplayLoadedRecording(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  startSample, int32_t  endSample) ;

/// @brief Method DisplayTextAlert, addr 0x16fd630, size 0xac, virtual false, abstract: false, final false
inline void DisplayTextAlert(::StringW  text, float_t  displayTime) ;

/// @brief Method HideWarningPopup, addr 0x16fd1c0, size 0x38, virtual false, abstract: false, final false
inline void HideWarningPopup() ;

static inline ::VROSC::TapeRecorderUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x16fcd34, size 0x48c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PlayButtonPressed, addr 0x16fd28c, size 0x28, virtual false, abstract: false, final false
inline void PlayButtonPressed() ;

/// @brief Method PreviewToggleChanged, addr 0x16fd308, size 0x28, virtual false, abstract: false, final false
inline void PreviewToggleChanged(::VROSC::InputDevice*  inputDevice, bool  toggled) ;

/// @brief Method RecordButtonPressed, addr 0x16fd20c, size 0x48, virtual false, abstract: false, final false
inline void RecordButtonPressed() ;

/// @brief Method SaveButtonPressed, addr 0x16fd2b4, size 0x30, virtual false, abstract: false, final false
inline void SaveButtonPressed() ;

/// @brief Method SaveFailed, addr 0x16fc78c, size 0xe4, virtual false, abstract: false, final false
inline void SaveFailed(::VROSC::Error  error) ;

/// @brief Method SaveSucceeded, addr 0x16fc684, size 0x88, virtual false, abstract: false, final false
inline void SaveSucceeded() ;

/// @brief Method SessionSaveBegun, addr 0x16fd750, size 0x28, virtual false, abstract: false, final false
inline void SessionSaveBegun() ;

/// @brief Method SetUseAsPreviewToggled, addr 0x16fc454, size 0x24, virtual false, abstract: false, final false
inline void SetUseAsPreviewToggled(bool  state) ;

/// @brief Method Setup, addr 0x16fb3a8, size 0x598, virtual false, abstract: false, final false
inline void Setup(::VROSC::TapeRecorder*  tapeRecorder) ;

/// @brief Method ShowAsConcluded, addr 0x16fbe08, size 0x38, virtual false, abstract: false, final false
inline void ShowAsConcluded() ;

/// @brief Method ShowAsPaused, addr 0x16fba70, size 0x4c, virtual false, abstract: false, final false
inline void ShowAsPaused() ;

/// @brief Method ShowAsPlaying, addr 0x16fbabc, size 0x4c, virtual false, abstract: false, final false
inline void ShowAsPlaying() ;

/// @brief Method ShowAsRecording, addr 0x16fcae0, size 0x68, virtual false, abstract: false, final false
inline void ShowAsRecording() ;

/// @brief Method ShowAsSaving, addr 0x16fc30c, size 0x88, virtual false, abstract: false, final false
inline void ShowAsSaving() ;

/// @brief Method ShowWarningPopup, addr 0x16fd254, size 0x38, virtual false, abstract: false, final false
inline void ShowWarningPopup() ;

/// @brief Method TimeSliderChanged, addr 0x16fd6dc, size 0x74, virtual false, abstract: false, final false
inline void TimeSliderChanged(float_t  newValue) ;

/// @brief Method UpdateTimeLabel, addr 0x16fd564, size 0xcc, virtual false, abstract: false, final false
inline void UpdateTimeLabel(bool  useSliderValue) ;

/// @brief Method UpdateVisualization, addr 0x16fbb3c, size 0x28, virtual false, abstract: false, final false
inline void UpdateVisualization(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, float_t  elapsedTimeSeconds) ;

/// @brief Method WarningCancelPressed, addr 0x16fd2e4, size 0x4, virtual false, abstract: false, final false
inline void WarningCancelPressed() ;

/// @brief Method WarningOKPressed, addr 0x16fd2e8, size 0x20, virtual false, abstract: false, final false
inline void WarningOKPressed() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__mainPanel() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__mainPanel() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__pauseIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__pauseIcon() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__playButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__playButton() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__playHead() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__playHead() ;

constexpr float_t const& __cordl_internal_get__playHeadFullWidth() const;

constexpr float_t& __cordl_internal_get__playHeadFullWidth() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__playIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__playIcon() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__previewToggle() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__previewToggle() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__recordButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__recordButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__recordIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__recordIcon() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__saveButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__saveButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__stopIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__stopIcon() ;

constexpr ::UnityW<::VROSC::TapeRecorder> const& __cordl_internal_get__tapeRecorder() const;

constexpr ::UnityW<::VROSC::TapeRecorder>& __cordl_internal_get__tapeRecorder() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__textAlert() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__textAlert() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__timeCounter() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__timeCounter() ;

constexpr ::UnityW<::VROSC::TimeSlider> const& __cordl_internal_get__timeSlider() const;

constexpr ::UnityW<::VROSC::TimeSlider>& __cordl_internal_get__timeSlider() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__warningCancelButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__warningCancelButton() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__warningOKButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__warningOKButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__warningPopup() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__warningPopup() ;

constexpr ::UnityW<::VROSC::WaveformVisualizer> const& __cordl_internal_get__waveformVisualizer() const;

constexpr ::UnityW<::VROSC::WaveformVisualizer>& __cordl_internal_get__waveformVisualizer() ;

constexpr void __cordl_internal_set__mainPanel(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__pauseIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__playButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__playHead(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__playHeadFullWidth(float_t  value) ;

constexpr void __cordl_internal_set__playIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__previewToggle(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__recordButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__recordIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__saveButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__stopIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__tapeRecorder(::UnityW<::VROSC::TapeRecorder>  value) ;

constexpr void __cordl_internal_set__textAlert(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__timeCounter(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__timeSlider(::UnityW<::VROSC::TimeSlider>  value) ;

constexpr void __cordl_internal_set__warningCancelButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__warningOKButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__warningPopup(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__waveformVisualizer(::UnityW<::VROSC::WaveformVisualizer>  value) ;

/// @brief Method .ctor, addr 0x16fd828, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TimeSlider, addr 0x16fcd2c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::TimeSlider> get_TimeSlider() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TapeRecorderUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TapeRecorderUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TapeRecorderUI(TapeRecorderUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TapeRecorderUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TapeRecorderUI(TapeRecorderUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{831};

/// @brief Field _tapeRecorder, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::TapeRecorder>  ____tapeRecorder;

/// @brief Field _mainPanel, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____mainPanel;

/// @brief Field _warningPopup, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____warningPopup;

/// @brief Field _recordButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____recordButton;

/// @brief Field _playButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____playButton;

/// @brief Field _saveButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____saveButton;

/// @brief Field _warningCancelButton, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____warningCancelButton;

/// @brief Field _warningOKButton, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____warningOKButton;

/// @brief Field _previewToggle, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____previewToggle;

/// @brief Field _recordIcon, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____recordIcon;

/// @brief Field _stopIcon, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____stopIcon;

/// @brief Field _playIcon, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____playIcon;

/// @brief Field _pauseIcon, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____pauseIcon;

/// @brief Field _textAlert, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____textAlert;

/// @brief Field _timeCounter, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____timeCounter;

/// @brief Field _waveformVisualizer, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::VROSC::WaveformVisualizer>  ____waveformVisualizer;

/// @brief Field _playHead, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____playHead;

/// @brief Field _timeSlider, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::VROSC::TimeSlider>  ____timeSlider;

/// @brief Field _playHeadFullWidth, offset: 0xb0, size: 0x4, def value: None
 float_t  ____playHeadFullWidth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TapeRecorderUI, ____tapeRecorder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI, ____mainPanel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI, ____warningPopup) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI, ____recordButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI, ____playButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI, ____saveButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI, ____warningCancelButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI, ____warningOKButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI, ____previewToggle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI, ____recordIcon) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI, ____stopIcon) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI, ____playIcon) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI, ____pauseIcon) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI, ____textAlert) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI, ____timeCounter) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI, ____waveformVisualizer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI, ____playHead) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI, ____timeSlider) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderUI, ____playHeadFullWidth) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TapeRecorderUI, 0xb8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TapeRecorderUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TapeRecorderUI*, "VROSC", "TapeRecorderUI");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TapeRecorderUI__DisplayTextAlert_d__45, "VROSC", "TapeRecorderUI/<DisplayTextAlert>d__45");
