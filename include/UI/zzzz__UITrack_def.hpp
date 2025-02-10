#pragma once
// IWYU pragma private; include "UI/UITrack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
CORDL_MODULE_EXPORT(UITrack)
// Forward declare root types
namespace UI {
class UITrack;
}
// Write type traits
MARK_REF_PTR_T(::UI::UITrack);
// Dependencies UnityEngine.Timeline.TrackAsset
namespace UI {
// Is value type: false
// CS Name: UI.UITrack
class CORDL_TYPE UITrack : public ::UnityEngine::Timeline::TrackAsset {
public:
// Declarations
static inline ::UI::UITrack* New_ctor() ;

/// @brief Method .ctor, addr 0x17c59c4, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UITrack() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UITrack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UITrack(UITrack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UITrack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UITrack(UITrack const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{275};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UI::UITrack, 0xa0>, "Size mismatch!");

} // namespace end def UI
NEED_NO_BOX(::UI::UITrack);
DEFINE_IL2CPP_ARG_TYPE(::UI::UITrack*, "UI", "UITrack");
