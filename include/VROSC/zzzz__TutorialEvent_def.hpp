#pragma once
// IWYU pragma private; include "VROSC/TutorialEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TutorialEvent)
// Forward declare root types
namespace VROSC {
struct TutorialEvent;
}
// Write type traits
MARK_VAL_T(::VROSC::TutorialEvent);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.TutorialEvent
struct CORDL_TYPE TutorialEvent {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TutorialEvent_Unwrapped
enum struct __TutorialEvent_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_DisableAllDashboardInteractibles = static_cast<int32_t>(0x1),
__E_EnableBoardButton = static_cast<int32_t>(0x2),
__E_StartBoardButtonBlinking = static_cast<int32_t>(0x3),
__E_StopBoardButtonBlinking = static_cast<int32_t>(0x4),
__E_ResetAll = static_cast<int32_t>(0x5),
__E_BoardOpened = static_cast<int32_t>(0x6),
__E_DisableDashboardButton = static_cast<int32_t>(0x7),
__E_EnableDashboardButton = static_cast<int32_t>(0x8),
__E_DisableGrab = static_cast<int32_t>(0x9),
__E_EnableGrab = static_cast<int32_t>(0xa),
__E_HideBoardControlPanel = static_cast<int32_t>(0xb),
__E_ShowBoardControlPanel = static_cast<int32_t>(0xc),
__E_StartBoardNotesBlinking = static_cast<int32_t>(0xd),
__E_StopBoardNotesBlinking = static_cast<int32_t>(0xe),
__E_WaitForMoreBoardNotes = static_cast<int32_t>(0xf),
__E_EnableBoardSoundChange = static_cast<int32_t>(0x10),
__E_EnableBoardCloseButton = static_cast<int32_t>(0x11),
__E_BoardClosed = static_cast<int32_t>(0x12),
__E_EmpadsFirstOpened = static_cast<int32_t>(0x13),
__E_StartHighlightPads = static_cast<int32_t>(0x14),
__E_EnableEmpadExtraction = static_cast<int32_t>(0x15),
__E_PadsSpawned = static_cast<int32_t>(0x16),
__E_EnableTempoSync = static_cast<int32_t>(0x17),
__E_WaitForQuarterSync = static_cast<int32_t>(0x18),
__E_TempoSetToQuarter = static_cast<int32_t>(0x19),
__E_WaitForSixteenthSync = static_cast<int32_t>(0x1a),
__E_TempoSetToSixteenth = static_cast<int32_t>(0x1b),
__E_EnableLooperButton = static_cast<int32_t>(0x1c),
__E_LooperOpened = static_cast<int32_t>(0x1d),
__E_WaitForFirstRecording = static_cast<int32_t>(0x1e),
__E_FirstLoopRecorded = static_cast<int32_t>(0x1f),
__E_StartRerecordBlinking = static_cast<int32_t>(0x20),
__E_StopRerecordBlinking = static_cast<int32_t>(0x21),
__E_EnableBoardButtonAgain = static_cast<int32_t>(0x22),
__E_BoardRecorded = static_cast<int32_t>(0x23),
__E_EnableSongLibraryButton = static_cast<int32_t>(0x24),
__E_SongLibraryOpened = static_cast<int32_t>(0x25),
__E_StartBlinkSaveButtons = static_cast<int32_t>(0x26),
__E_DisableSongLibraryInteracables = static_cast<int32_t>(0x27),
__E_RevealInstruction = static_cast<int32_t>(0x28),
__E_CompleteStep = static_cast<int32_t>(0x29),
__E_BoardGrabbed = static_cast<int32_t>(0x2a),
__E_TutorialPanelGrabbed = static_cast<int32_t>(0x2b),
__E_BlinkTutorialPanel = static_cast<int32_t>(0x2c),
__E_RerecordPressed = static_cast<int32_t>(0x2d),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TutorialEvent_Unwrapped () const noexcept {
return static_cast<__TutorialEvent_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TutorialEvent() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TutorialEvent(int32_t  value__) noexcept;

/// @brief Field BlinkTutorialPanel value: I32(44)
static ::VROSC::TutorialEvent const BlinkTutorialPanel;

/// @brief Field BoardClosed value: I32(18)
static ::VROSC::TutorialEvent const BoardClosed;

/// @brief Field BoardGrabbed value: I32(42)
static ::VROSC::TutorialEvent const BoardGrabbed;

/// @brief Field BoardOpened value: I32(6)
static ::VROSC::TutorialEvent const BoardOpened;

/// @brief Field BoardRecorded value: I32(35)
static ::VROSC::TutorialEvent const BoardRecorded;

/// @brief Field CompleteStep value: I32(41)
static ::VROSC::TutorialEvent const CompleteStep;

/// @brief Field DisableAllDashboardInteractibles value: I32(1)
static ::VROSC::TutorialEvent const DisableAllDashboardInteractibles;

/// @brief Field DisableDashboardButton value: I32(7)
static ::VROSC::TutorialEvent const DisableDashboardButton;

/// @brief Field DisableGrab value: I32(9)
static ::VROSC::TutorialEvent const DisableGrab;

/// @brief Field DisableSongLibraryInteracables value: I32(39)
static ::VROSC::TutorialEvent const DisableSongLibraryInteracables;

/// @brief Field EmpadsFirstOpened value: I32(19)
static ::VROSC::TutorialEvent const EmpadsFirstOpened;

/// @brief Field EnableBoardButton value: I32(2)
static ::VROSC::TutorialEvent const EnableBoardButton;

/// @brief Field EnableBoardButtonAgain value: I32(34)
static ::VROSC::TutorialEvent const EnableBoardButtonAgain;

/// @brief Field EnableBoardCloseButton value: I32(17)
static ::VROSC::TutorialEvent const EnableBoardCloseButton;

/// @brief Field EnableBoardSoundChange value: I32(16)
static ::VROSC::TutorialEvent const EnableBoardSoundChange;

/// @brief Field EnableDashboardButton value: I32(8)
static ::VROSC::TutorialEvent const EnableDashboardButton;

/// @brief Field EnableEmpadExtraction value: I32(21)
static ::VROSC::TutorialEvent const EnableEmpadExtraction;

/// @brief Field EnableGrab value: I32(10)
static ::VROSC::TutorialEvent const EnableGrab;

/// @brief Field EnableLooperButton value: I32(28)
static ::VROSC::TutorialEvent const EnableLooperButton;

/// @brief Field EnableSongLibraryButton value: I32(36)
static ::VROSC::TutorialEvent const EnableSongLibraryButton;

/// @brief Field EnableTempoSync value: I32(23)
static ::VROSC::TutorialEvent const EnableTempoSync;

/// @brief Field FirstLoopRecorded value: I32(31)
static ::VROSC::TutorialEvent const FirstLoopRecorded;

/// @brief Field HideBoardControlPanel value: I32(11)
static ::VROSC::TutorialEvent const HideBoardControlPanel;

/// @brief Field LooperOpened value: I32(29)
static ::VROSC::TutorialEvent const LooperOpened;

/// @brief Field None value: I32(0)
static ::VROSC::TutorialEvent const None;

/// @brief Field PadsSpawned value: I32(22)
static ::VROSC::TutorialEvent const PadsSpawned;

/// @brief Field RerecordPressed value: I32(45)
static ::VROSC::TutorialEvent const RerecordPressed;

/// @brief Field ResetAll value: I32(5)
static ::VROSC::TutorialEvent const ResetAll;

/// @brief Field RevealInstruction value: I32(40)
static ::VROSC::TutorialEvent const RevealInstruction;

/// @brief Field ShowBoardControlPanel value: I32(12)
static ::VROSC::TutorialEvent const ShowBoardControlPanel;

/// @brief Field SongLibraryOpened value: I32(37)
static ::VROSC::TutorialEvent const SongLibraryOpened;

/// @brief Field StartBlinkSaveButtons value: I32(38)
static ::VROSC::TutorialEvent const StartBlinkSaveButtons;

/// @brief Field StartBoardButtonBlinking value: I32(3)
static ::VROSC::TutorialEvent const StartBoardButtonBlinking;

/// @brief Field StartBoardNotesBlinking value: I32(13)
static ::VROSC::TutorialEvent const StartBoardNotesBlinking;

/// @brief Field StartHighlightPads value: I32(20)
static ::VROSC::TutorialEvent const StartHighlightPads;

/// @brief Field StartRerecordBlinking value: I32(32)
static ::VROSC::TutorialEvent const StartRerecordBlinking;

/// @brief Field StopBoardButtonBlinking value: I32(4)
static ::VROSC::TutorialEvent const StopBoardButtonBlinking;

/// @brief Field StopBoardNotesBlinking value: I32(14)
static ::VROSC::TutorialEvent const StopBoardNotesBlinking;

/// @brief Field StopRerecordBlinking value: I32(33)
static ::VROSC::TutorialEvent const StopRerecordBlinking;

/// @brief Field TempoSetToQuarter value: I32(25)
static ::VROSC::TutorialEvent const TempoSetToQuarter;

/// @brief Field TempoSetToSixteenth value: I32(27)
static ::VROSC::TutorialEvent const TempoSetToSixteenth;

/// @brief Field TutorialPanelGrabbed value: I32(43)
static ::VROSC::TutorialEvent const TutorialPanelGrabbed;

/// @brief Field WaitForFirstRecording value: I32(30)
static ::VROSC::TutorialEvent const WaitForFirstRecording;

/// @brief Field WaitForMoreBoardNotes value: I32(15)
static ::VROSC::TutorialEvent const WaitForMoreBoardNotes;

/// @brief Field WaitForQuarterSync value: I32(24)
static ::VROSC::TutorialEvent const WaitForQuarterSync;

/// @brief Field WaitForSixteenthSync value: I32(26)
static ::VROSC::TutorialEvent const WaitForSixteenthSync;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{850};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TutorialEvent, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TutorialEvent, 0x4>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialEvent, "VROSC", "TutorialEvent");
