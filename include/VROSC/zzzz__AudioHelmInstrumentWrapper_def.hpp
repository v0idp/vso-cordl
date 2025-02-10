#pragma once
// IWYU pragma private; include "VROSC/AudioHelmInstrumentWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioHelmInstrumentWrapper)
// Forward declare root types
namespace VROSC {
class AudioHelmInstrumentWrapper;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioHelmInstrumentWrapper);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AudioHelmInstrumentWrapper
class CORDL_TYPE AudioHelmInstrumentWrapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method AllNotesOff, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void AllNotesOff() ;

static inline ::VROSC::AudioHelmInstrumentWrapper* New_ctor() ;

/// @brief Method NoteOff, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void NoteOff(int32_t  note) ;

/// @brief Method NoteOn, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void NoteOn(int32_t  note, float_t  velocity, double_t  predictedDspTime, float_t  pitch, float_t  volume) ;

/// @brief Method SetPitchBend, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetPitchBend(float_t  pitchBendValue) ;

/// @brief Method Setup, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Setup() ;

/// @brief Method .ctor, addr 0x17c886c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioHelmInstrumentWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioHelmInstrumentWrapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioHelmInstrumentWrapper(AudioHelmInstrumentWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioHelmInstrumentWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioHelmInstrumentWrapper(AudioHelmInstrumentWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{282};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::AudioHelmInstrumentWrapper, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AudioHelmInstrumentWrapper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioHelmInstrumentWrapper*, "VROSC", "AudioHelmInstrumentWrapper");
