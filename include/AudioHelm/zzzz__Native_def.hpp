#pragma once
// IWYU pragma private; include "AudioHelm/Native.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Native)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace AudioHelm {
class Native;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::Native);
// Dependencies System.Object
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.Native
class CORDL_TYPE Native : public ::System::Object {
public:
// Declarations
/// @brief Method ChangeNoteEnd, addr 0x1823d98, size 0x94, virtual false, abstract: false, final false
static inline ::System::IntPtr ChangeNoteEnd(::System::IntPtr  sequencer, ::System::IntPtr  note, float_t  newEnd) ;

/// @brief Method ChangeNoteKey, addr 0x1823ee8, size 0x94, virtual false, abstract: false, final false
static inline ::System::IntPtr ChangeNoteKey(::System::IntPtr  sequencer, ::System::IntPtr  note, int32_t  key) ;

/// @brief Method ChangeNoteStart, addr 0x1823d08, size 0x90, virtual false, abstract: false, final false
static inline ::System::IntPtr ChangeNoteStart(::System::IntPtr  sequencer, ::System::IntPtr  note, float_t  newStart) ;

/// @brief Method ChangeNoteValues, addr 0x1823e2c, size 0xbc, virtual false, abstract: false, final false
static inline ::System::IntPtr ChangeNoteValues(::System::IntPtr  sequencer, ::System::IntPtr  note, int32_t  newMidiKey, float_t  newStart, float_t  newEnd, float_t  newVelocity) ;

/// @brief Method ChangeNoteVelocity, addr 0x1823f7c, size 0x8c, virtual false, abstract: false, final false
static inline ::System::IntPtr ChangeNoteVelocity(::System::IntPtr  note, float_t  velocity) ;

/// @brief Method ChangeSequencerChannel, addr 0x1822888, size 0x8c, virtual false, abstract: false, final false
static inline bool ChangeSequencerChannel(::System::IntPtr  sequencer, int32_t  channel) ;

/// @brief Method ChangeSequencerLength, addr 0x1822914, size 0x8c, virtual false, abstract: false, final false
static inline void ChangeSequencerLength(::System::IntPtr  sequencer, float_t  length) ;

/// @brief Method CreateNote, addr 0x1823bd8, size 0xac, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateNote(::System::IntPtr  sequencer, int32_t  note, float_t  velocity, float_t  start, float_t  end) ;

/// @brief Method CreateSequencer, addr 0x1822344, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateSequencer() ;

/// @brief Method DeleteNote, addr 0x1823c84, size 0x84, virtual false, abstract: false, final false
static inline ::System::IntPtr DeleteNote(::System::IntPtr  sequencer, ::System::IntPtr  note) ;

/// @brief Method DeleteSequencer, addr 0x18223e0, size 0x78, virtual false, abstract: false, final false
static inline void DeleteSequencer(::System::IntPtr  sequencer) ;

/// @brief Method EnableSequencer, addr 0x1822c6c, size 0x80, virtual false, abstract: false, final false
static inline void EnableSequencer(::System::IntPtr  sequencer, bool  enable) ;

/// @brief Method HelmAddModulation, addr 0x181ecb4, size 0xd4, virtual false, abstract: false, final false
static inline void HelmAddModulation(int32_t  channel, int32_t  index, ::StringW  source, ::StringW  dest, float_t  amount) ;

/// @brief Method HelmAllNotesOff, addr 0x181f9ac, size 0x78, virtual false, abstract: false, final false
static inline void HelmAllNotesOff(int32_t  channel) ;

/// @brief Method HelmClearModulations, addr 0x181eb9c, size 0x7c, virtual false, abstract: false, final false
static inline void HelmClearModulations(int32_t  channel) ;

/// @brief Method HelmFrequencyOff, addr 0x181ffa0, size 0x8c, virtual false, abstract: false, final false
static inline void HelmFrequencyOff(int32_t  channel, float_t  frequency) ;

/// @brief Method HelmFrequencyOn, addr 0x181fe0c, size 0x90, virtual false, abstract: false, final false
static inline void HelmFrequencyOn(int32_t  channel, float_t  frequency, float_t  velocity) ;

/// @brief Method HelmGetBufferData, addr 0x181e5bc, size 0xac, virtual false, abstract: false, final false
static inline bool HelmGetBufferData(int32_t  channel, ::ArrayW<float_t,::Array<float_t>*>  buffer, int32_t  samples, int32_t  numAudioChannels) ;

/// @brief Method HelmGetParameterMaximum, addr 0x1820788, size 0x7c, virtual false, abstract: false, final false
static inline float_t HelmGetParameterMaximum(int32_t  index) ;

/// @brief Method HelmGetParameterMinimum, addr 0x182070c, size 0x7c, virtual false, abstract: false, final false
static inline float_t HelmGetParameterMinimum(int32_t  index) ;

/// @brief Method HelmGetParameterPercent, addr 0x181f854, size 0x84, virtual false, abstract: false, final false
static inline float_t HelmGetParameterPercent(int32_t  channel, int32_t  paramIndex) ;

/// @brief Method HelmGetParameterValue, addr 0x181f7c8, size 0x84, virtual false, abstract: false, final false
static inline float_t HelmGetParameterValue(int32_t  channel, int32_t  paramIndex) ;

/// @brief Method HelmNoteOff, addr 0x181fc20, size 0x84, virtual false, abstract: false, final false
static inline void HelmNoteOff(int32_t  channel, int32_t  note) ;

/// @brief Method HelmNoteOn, addr 0x181fb64, size 0x94, virtual false, abstract: false, final false
static inline void HelmNoteOn(int32_t  channel, int32_t  note, float_t  velocity) ;

/// @brief Method HelmSetAftertouch, addr 0x1820158, size 0x94, virtual false, abstract: false, final false
static inline void HelmSetAftertouch(int32_t  channel, int32_t  note, float_t  value) ;

/// @brief Method HelmSetModWheel, addr 0x18200c8, size 0x88, virtual false, abstract: false, final false
static inline void HelmSetModWheel(int32_t  channel, float_t  value) ;

/// @brief Method HelmSetParameterPercent, addr 0x181f8f0, size 0x9c, virtual false, abstract: false, final false
static inline bool HelmSetParameterPercent(int32_t  channel, int32_t  paramIndex, float_t  newPercent) ;

/// @brief Method HelmSetParameterValue, addr 0x181ec18, size 0x9c, virtual false, abstract: false, final false
static inline bool HelmSetParameterValue(int32_t  channel, int32_t  paramIndex, float_t  newValue) ;

/// @brief Method HelmSetPitchWheel, addr 0x1820034, size 0x8c, virtual false, abstract: false, final false
static inline void HelmSetPitchWheel(int32_t  channel, float_t  value) ;

/// @brief Method HelmSilence, addr 0x181e504, size 0x8c, virtual false, abstract: false, final false
static inline bool HelmSilence(int32_t  channel, bool  silent) ;

/// @brief Method LoopSequencer, addr 0x18229a0, size 0x84, virtual false, abstract: false, final false
static inline void LoopSequencer(::System::IntPtr  sequencer, bool  loop) ;

/// @brief Method Pause, addr 0x181d7e8, size 0x7c, virtual false, abstract: false, final false
static inline void Pause(bool  pause) ;

/// @brief Method SetBeatTime, addr 0x181d8e4, size 0x78, virtual false, abstract: false, final false
static inline void SetBeatTime(double_t  time) ;

/// @brief Method SetBpm, addr 0x181d86c, size 0x78, virtual false, abstract: false, final false
static inline void SetBpm(float_t  bpm) ;

/// @brief Method SetSequencerStart, addr 0x182326c, size 0x8c, virtual false, abstract: false, final false
static inline void SetSequencerStart(::System::IntPtr  sequencer, double_t  startBeat) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Native() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Native", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Native(Native && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Native", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Native(Native const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1887};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::AudioHelm::Native, 0x10>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::Native);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Native*, "AudioHelm", "Native");
