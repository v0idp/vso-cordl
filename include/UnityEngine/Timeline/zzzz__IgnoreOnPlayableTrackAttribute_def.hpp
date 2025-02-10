#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/IgnoreOnPlayableTrackAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(IgnoreOnPlayableTrackAttribute)
// Forward declare root types
namespace UnityEngine::Timeline {
class IgnoreOnPlayableTrackAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute);
// Dependencies System.Attribute
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.IgnoreOnPlayableTrackAttribute
class CORDL_TYPE IgnoreOnPlayableTrackAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x2f30068, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IgnoreOnPlayableTrackAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IgnoreOnPlayableTrackAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IgnoreOnPlayableTrackAttribute(IgnoreOnPlayableTrackAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IgnoreOnPlayableTrackAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IgnoreOnPlayableTrackAttribute(IgnoreOnPlayableTrackAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10971};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute*, "UnityEngine.Timeline", "IgnoreOnPlayableTrackAttribute");
