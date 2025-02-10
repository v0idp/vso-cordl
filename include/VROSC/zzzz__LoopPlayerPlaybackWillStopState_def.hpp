#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerPlaybackWillStopState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__LoopPlayerPlaybackFadeState_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoopPlayerPlaybackWillStopState)
namespace VROSC {
class LoopPlayerPlaybackSettings;
}
// Forward declare root types
namespace VROSC {
class LoopPlayerPlaybackWillStopState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopPlayerPlaybackWillStopState);
// Dependencies VROSC.LoopPlayerPlaybackFadeState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlayerPlaybackWillStopState
class CORDL_TYPE LoopPlayerPlaybackWillStopState : public ::VROSC::LoopPlayerPlaybackFadeState {
public:
// Declarations
 __declspec(property(get=get_Playing)) bool  Playing;

/// @brief Method DebugString, addr 0x18a6700, size 0xd8, virtual true, abstract: false, final false
inline ::StringW DebugString() ;

/// @brief Method GetStoppingPoint, addr 0x18a67f0, size 0x80, virtual false, abstract: false, final false
inline int32_t GetStoppingPoint(::VROSC::LoopPlayerPlaybackSettings*  settings, int32_t  sample) ;

static inline ::VROSC::LoopPlayerPlaybackWillStopState* New_ctor() ;

/// @brief Method SetBySettings, addr 0x189a6ac, size 0x298, virtual false, abstract: false, final false
inline void SetBySettings(::VROSC::LoopPlayerPlaybackSettings*  settings, int32_t  loopStopSample, bool  fromStopRequest) ;

/// @brief Method SetExplicit, addr 0x18a67d8, size 0x18, virtual true, abstract: false, final false
inline void SetExplicit(int32_t  startSample, int32_t  stopSample) ;

/// @brief Method SetStateActive, addr 0x18a6870, size 0x6c, virtual true, abstract: false, final false
inline void SetStateActive(::VROSC::LoopPlayerPlaybackSettings*  settings, int32_t  atSample) ;

/// @brief Method .ctor, addr 0x189a640, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Playing, addr 0x18a66f0, size 0x10, virtual true, abstract: false, final false
inline bool get_Playing() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlayerPlaybackWillStopState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerPlaybackWillStopState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlayerPlaybackWillStopState(LoopPlayerPlaybackWillStopState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerPlaybackWillStopState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlayerPlaybackWillStopState(LoopPlayerPlaybackWillStopState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{693};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlayerPlaybackWillStopState, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopPlayerPlaybackWillStopState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerPlaybackWillStopState*, "VROSC", "LoopPlayerPlaybackWillStopState");
