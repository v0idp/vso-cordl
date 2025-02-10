#pragma once
// IWYU pragma private; include "AudioHelm/NoteHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteHandler)
// Forward declare root types
namespace AudioHelm {
class NoteHandler;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::NoteHandler);
// Dependencies 
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.NoteHandler
class CORDL_TYPE NoteHandler {
public:
// Declarations
/// @brief Method AllNotesOff, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void AllNotesOff() ;

/// @brief Method NoteOff, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void NoteOff(int32_t  note) ;

/// @brief Method NoteOn, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void NoteOn(int32_t  note, float_t  velocity) ;

// Ctor Parameters [CppParam { name: "", ty: "NoteHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteHandler(NoteHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1890};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::NoteHandler);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::NoteHandler*, "AudioHelm", "NoteHandler");
