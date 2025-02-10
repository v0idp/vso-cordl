#pragma once
// IWYU pragma private; include "VROSC/LoopStationRecordingUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__LoopStationLoopHandler_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LoopStationRecordingUI)
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class LoopPlayerRecordingState;
}
namespace VROSC {
struct LoopStationRecorder_RecordingState;
}
namespace VROSC {
class LoopStationRecordingButton;
}
namespace VROSC {
class LoopStation;
}
namespace VROSC {
class SelectionBar;
}
namespace VROSC {
class UISlideToggle;
}
namespace VROSC {
class UserDataControllers;
}
// Forward declare root types
namespace VROSC {
class LoopStationRecordingUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationRecordingUI);
// Dependencies UnityEngine.MonoBehaviour, VROSC.LoopStationLoopHandler::LooperState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationRecordingUI
class CORDL_TYPE LoopStationRecordingUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_OverDubLength)) float_t  OverDubLength;

/// @brief Field _firstLoopRecordingState, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstLoopRecordingState, put=__cordl_internal_set__firstLoopRecordingState)) ::UnityW<::VROSC::LoopPlayerRecordingState>  _firstLoopRecordingState;

/// @brief Field _gotLoops, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__gotLoops, put=__cordl_internal_set__gotLoops)) ::UnityW<::UnityEngine::GameObject>  _gotLoops;

/// @brief Field _loopLengthAutoText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopLengthAutoText, put=__cordl_internal_set__loopLengthAutoText)) ::UnityW<::UnityEngine::GameObject>  _loopLengthAutoText;

/// @brief Field _loopLengthSelectionBar, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopLengthSelectionBar, put=__cordl_internal_set__loopLengthSelectionBar)) ::UnityW<::VROSC::SelectionBar>  _loopLengthSelectionBar;

/// @brief Field _loopStation, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStation, put=__cordl_internal_set__loopStation)) ::UnityW<::VROSC::LoopStation>  _loopStation;

/// @brief Field _matchLengthToggle, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__matchLengthToggle, put=__cordl_internal_set__matchLengthToggle)) ::UnityW<::VROSC::UISlideToggle>  _matchLengthToggle;

/// @brief Field _noLoopsMode, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__noLoopsMode, put=__cordl_internal_set__noLoopsMode)) ::UnityW<::UnityEngine::GameObject>  _noLoopsMode;

/// @brief Field _overdubToggle, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__overdubToggle, put=__cordl_internal_set__overdubToggle)) ::UnityW<::VROSC::UISlideToggle>  _overdubToggle;

/// @brief Field _recordingButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordingButton, put=__cordl_internal_set__recordingButton)) ::UnityW<::VROSC::LoopStationRecordingButton>  _recordingButton;

/// @brief Field _state, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::VROSC::LoopStationLoopHandler_LooperState  _state;

/// @brief Method GetOverdubLength, addr 0x18ac4b8, size 0x2c, virtual false, abstract: false, final false
inline float_t GetOverdubLength() ;

/// @brief Method GetRecordingTextByState, addr 0x18acb34, size 0xd4, virtual false, abstract: false, final false
inline ::StringW GetRecordingTextByState(::VROSC::LoopStationRecorder_RecordingState  state) ;

/// @brief Method MatchLengthChanged, addr 0x18acdd4, size 0x8c, virtual false, abstract: false, final false
inline void MatchLengthChanged(::VROSC::InputDevice*  inputDevice, bool  state) ;

static inline ::VROSC::LoopStationRecordingUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18ac8dc, size 0x258, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OverdubChanged, addr 0x18acd48, size 0x8c, virtual false, abstract: false, final false
inline void OverdubChanged(::VROSC::InputDevice*  inputDevice, bool  state) ;

/// @brief Method RecorderStateChanged, addr 0x18ac888, size 0x54, virtual false, abstract: false, final false
inline void RecorderStateChanged(::VROSC::LoopStationRecorder_RecordingState  recordingState) ;

/// @brief Method Setup, addr 0x18ac4e4, size 0x3a4, virtual false, abstract: false, final false
inline void Setup(::VROSC::LoopStation*  loopStation) ;

/// @brief Method ShowRerecordButton, addr 0x18acea0, size 0x1c, virtual false, abstract: false, final false
inline void ShowRerecordButton() ;

/// @brief Method UpdateLooperState, addr 0x18acc08, size 0xb8, virtual false, abstract: false, final false
inline void UpdateLooperState() ;

/// @brief Method UserDataLoaded, addr 0x18ace60, size 0x40, virtual false, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  dataControllers) ;

constexpr ::UnityW<::VROSC::LoopPlayerRecordingState> const& __cordl_internal_get__firstLoopRecordingState() const;

constexpr ::UnityW<::VROSC::LoopPlayerRecordingState>& __cordl_internal_get__firstLoopRecordingState() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__gotLoops() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__gotLoops() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__loopLengthAutoText() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__loopLengthAutoText() ;

constexpr ::UnityW<::VROSC::SelectionBar> const& __cordl_internal_get__loopLengthSelectionBar() const;

constexpr ::UnityW<::VROSC::SelectionBar>& __cordl_internal_get__loopLengthSelectionBar() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__loopStation() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__matchLengthToggle() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__matchLengthToggle() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__noLoopsMode() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__noLoopsMode() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__overdubToggle() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__overdubToggle() ;

constexpr ::UnityW<::VROSC::LoopStationRecordingButton> const& __cordl_internal_get__recordingButton() const;

constexpr ::UnityW<::VROSC::LoopStationRecordingButton>& __cordl_internal_get__recordingButton() ;

constexpr ::VROSC::LoopStationLoopHandler_LooperState const& __cordl_internal_get__state() const;

constexpr ::VROSC::LoopStationLoopHandler_LooperState& __cordl_internal_get__state() ;

constexpr void __cordl_internal_set__firstLoopRecordingState(::UnityW<::VROSC::LoopPlayerRecordingState>  value) ;

constexpr void __cordl_internal_set__gotLoops(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__loopLengthAutoText(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__loopLengthSelectionBar(::UnityW<::VROSC::SelectionBar>  value) ;

constexpr void __cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value) ;

constexpr void __cordl_internal_set__matchLengthToggle(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__noLoopsMode(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__overdubToggle(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__recordingButton(::UnityW<::VROSC::LoopStationRecordingButton>  value) ;

constexpr void __cordl_internal_set__state(::VROSC::LoopStationLoopHandler_LooperState  value) ;

/// @brief Method .ctor, addr 0x18acebc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OverDubLength, addr 0x18ac4b4, size 0x4, virtual false, abstract: false, final false
inline float_t get_OverDubLength() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationRecordingUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationRecordingUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationRecordingUI(LoopStationRecordingUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationRecordingUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationRecordingUI(LoopStationRecordingUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{710};

/// @brief Field _loopLengthSelectionBar, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::SelectionBar>  ____loopLengthSelectionBar;

/// @brief Field _noLoopsMode, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____noLoopsMode;

/// @brief Field _gotLoops, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____gotLoops;

/// @brief Field _loopLengthAutoText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____loopLengthAutoText;

/// @brief Field _recordingButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationRecordingButton>  ____recordingButton;

/// @brief Field _firstLoopRecordingState, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayerRecordingState>  ____firstLoopRecordingState;

/// @brief Field _overdubToggle, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____overdubToggle;

/// @brief Field _matchLengthToggle, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____matchLengthToggle;

/// @brief Field _state, offset: 0x60, size: 0x4, def value: None
 ::VROSC::LoopStationLoopHandler_LooperState  ____state;

/// @brief Field _loopStation, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____loopStation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationRecordingUI, ____loopLengthSelectionBar) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingUI, ____noLoopsMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingUI, ____gotLoops) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingUI, ____loopLengthAutoText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingUI, ____recordingButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingUI, ____firstLoopRecordingState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingUI, ____overdubToggle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingUI, ____matchLengthToggle) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingUI, ____state) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingUI, ____loopStation) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationRecordingUI, 0x70>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationRecordingUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationRecordingUI*, "VROSC", "LoopStationRecordingUI");
