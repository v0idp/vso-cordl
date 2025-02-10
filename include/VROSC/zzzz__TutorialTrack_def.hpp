#pragma once
// IWYU pragma private; include "VROSC/TutorialTrack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
CORDL_MODULE_EXPORT(TutorialTrack)
// Forward declare root types
namespace VROSC {
class TutorialTrack;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TutorialTrack);
// Dependencies UnityEngine.Timeline.TrackAsset
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TutorialTrack
class CORDL_TYPE TutorialTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
// Declarations
static inline ::VROSC::TutorialTrack* New_ctor() ;

/// @brief Method .ctor, addr 0x176eaac, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TutorialTrack() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TutorialTrack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialTrack(TutorialTrack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialTrack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialTrack(TutorialTrack const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1227};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::TutorialTrack, 0xa0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TutorialTrack);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialTrack*, "VROSC", "TutorialTrack");
