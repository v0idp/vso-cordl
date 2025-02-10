#pragma once
// IWYU pragma private; include "VROSC/TutorialEvent.hpp"
#include "VROSC/zzzz__TutorialEvent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::TutorialEvent::TutorialEvent(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::TutorialEvent::TutorialEvent()   {
}
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::None{static_cast<int32_t>(0x0)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::DisableAllDashboardInteractibles{static_cast<int32_t>(0x1)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::EnableBoardButton{static_cast<int32_t>(0x2)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::StartBoardButtonBlinking{static_cast<int32_t>(0x3)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::StopBoardButtonBlinking{static_cast<int32_t>(0x4)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::ResetAll{static_cast<int32_t>(0x5)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::BoardOpened{static_cast<int32_t>(0x6)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::DisableDashboardButton{static_cast<int32_t>(0x7)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::EnableDashboardButton{static_cast<int32_t>(0x8)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::DisableGrab{static_cast<int32_t>(0x9)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::EnableGrab{static_cast<int32_t>(0xa)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::HideBoardControlPanel{static_cast<int32_t>(0xb)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::ShowBoardControlPanel{static_cast<int32_t>(0xc)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::StartBoardNotesBlinking{static_cast<int32_t>(0xd)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::StopBoardNotesBlinking{static_cast<int32_t>(0xe)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::WaitForMoreBoardNotes{static_cast<int32_t>(0xf)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::EnableBoardSoundChange{static_cast<int32_t>(0x10)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::EnableBoardCloseButton{static_cast<int32_t>(0x11)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::BoardClosed{static_cast<int32_t>(0x12)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::EmpadsFirstOpened{static_cast<int32_t>(0x13)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::StartHighlightPads{static_cast<int32_t>(0x14)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::EnableEmpadExtraction{static_cast<int32_t>(0x15)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::PadsSpawned{static_cast<int32_t>(0x16)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::EnableTempoSync{static_cast<int32_t>(0x17)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::WaitForQuarterSync{static_cast<int32_t>(0x18)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::TempoSetToQuarter{static_cast<int32_t>(0x19)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::WaitForSixteenthSync{static_cast<int32_t>(0x1a)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::TempoSetToSixteenth{static_cast<int32_t>(0x1b)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::EnableLooperButton{static_cast<int32_t>(0x1c)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::LooperOpened{static_cast<int32_t>(0x1d)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::WaitForFirstRecording{static_cast<int32_t>(0x1e)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::FirstLoopRecorded{static_cast<int32_t>(0x1f)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::StartRerecordBlinking{static_cast<int32_t>(0x20)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::StopRerecordBlinking{static_cast<int32_t>(0x21)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::EnableBoardButtonAgain{static_cast<int32_t>(0x22)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::BoardRecorded{static_cast<int32_t>(0x23)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::EnableSongLibraryButton{static_cast<int32_t>(0x24)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::SongLibraryOpened{static_cast<int32_t>(0x25)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::StartBlinkSaveButtons{static_cast<int32_t>(0x26)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::DisableSongLibraryInteracables{static_cast<int32_t>(0x27)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::RevealInstruction{static_cast<int32_t>(0x28)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::CompleteStep{static_cast<int32_t>(0x29)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::BoardGrabbed{static_cast<int32_t>(0x2a)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::TutorialPanelGrabbed{static_cast<int32_t>(0x2b)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::BlinkTutorialPanel{static_cast<int32_t>(0x2c)};
constexpr ::VROSC::TutorialEvent  VROSC::TutorialEvent::RerecordPressed{static_cast<int32_t>(0x2d)};
