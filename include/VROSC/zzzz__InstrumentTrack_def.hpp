#pragma once
// IWYU pragma private; include "VROSC/InstrumentTrack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
CORDL_MODULE_EXPORT(InstrumentTrack)
// Forward declare root types
namespace VROSC {
class InstrumentTrack;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InstrumentTrack);
// Dependencies UnityEngine.Timeline.TrackAsset
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InstrumentTrack
class CORDL_TYPE InstrumentTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
// Declarations
static inline ::VROSC::InstrumentTrack* New_ctor() ;

/// @brief Method .ctor, addr 0x176ea54, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstrumentTrack() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstrumentTrack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstrumentTrack(InstrumentTrack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstrumentTrack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstrumentTrack(InstrumentTrack const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1226};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::InstrumentTrack, 0xa0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InstrumentTrack);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentTrack*, "VROSC", "InstrumentTrack");
