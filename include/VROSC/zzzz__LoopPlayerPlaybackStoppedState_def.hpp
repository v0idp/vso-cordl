#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerPlaybackStoppedState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__LoopPlayerPlaybackState_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopPlayerPlaybackStoppedState)
// Forward declare root types
namespace VROSC {
class LoopPlayerPlaybackStoppedState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopPlayerPlaybackStoppedState);
// Dependencies VROSC.LoopPlayerPlaybackState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlayerPlaybackStoppedState
class CORDL_TYPE LoopPlayerPlaybackStoppedState : public ::VROSC::LoopPlayerPlaybackState {
public:
// Declarations
/// @brief Method DebugString, addr 0x18a6300, size 0x40, virtual true, abstract: false, final false
inline ::StringW DebugString() ;

/// @brief Method GetCurrentFade, addr 0x18a62f8, size 0x8, virtual true, abstract: false, final false
inline float_t GetCurrentFade(int32_t  atSample) ;

static inline ::VROSC::LoopPlayerPlaybackStoppedState* New_ctor() ;

/// @brief Method .ctor, addr 0x189a604, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlayerPlaybackStoppedState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerPlaybackStoppedState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlayerPlaybackStoppedState(LoopPlayerPlaybackStoppedState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerPlaybackStoppedState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlayerPlaybackStoppedState(LoopPlayerPlaybackStoppedState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{691};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlayerPlaybackStoppedState, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopPlayerPlaybackStoppedState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerPlaybackStoppedState*, "VROSC", "LoopPlayerPlaybackStoppedState");
