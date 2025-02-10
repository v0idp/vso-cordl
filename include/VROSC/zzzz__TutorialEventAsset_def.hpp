#pragma once
// IWYU pragma private; include "VROSC/TutorialEventAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "VROSC/zzzz__TutorialEvent_def.hpp"
CORDL_MODULE_EXPORT(TutorialEventAsset)
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class TutorialEventBehaviour;
}
// Forward declare root types
namespace VROSC {
class TutorialEventAsset;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TutorialEventAsset);
// Dependencies UnityEngine.Playables.PlayableAsset, VROSC.TutorialEvent
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TutorialEventAsset
class CORDL_TYPE TutorialEventAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief Field _endEvent, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__endEvent, put=__cordl_internal_set__endEvent)) ::VROSC::TutorialEvent  _endEvent;

/// @brief Field _startEvent, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__startEvent, put=__cordl_internal_set__startEvent)) ::VROSC::TutorialEvent  _startEvent;

/// @brief Field settings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::VROSC::TutorialEventBehaviour*  settings;

/// @brief Method CreatePlayable, addr 0x176f2cc, size 0xf8, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner) ;

static inline ::VROSC::TutorialEventAsset* New_ctor() ;

constexpr ::VROSC::TutorialEvent const& __cordl_internal_get__endEvent() const;

constexpr ::VROSC::TutorialEvent& __cordl_internal_get__endEvent() ;

constexpr ::VROSC::TutorialEvent const& __cordl_internal_get__startEvent() const;

constexpr ::VROSC::TutorialEvent& __cordl_internal_get__startEvent() ;

constexpr ::VROSC::TutorialEventBehaviour* const& __cordl_internal_get_settings() const;

constexpr ::VROSC::TutorialEventBehaviour*& __cordl_internal_get_settings() ;

constexpr void __cordl_internal_set__endEvent(::VROSC::TutorialEvent  value) ;

constexpr void __cordl_internal_set__startEvent(::VROSC::TutorialEvent  value) ;

constexpr void __cordl_internal_set_settings(::VROSC::TutorialEventBehaviour*  value) ;

/// @brief Method .ctor, addr 0x176f3cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TutorialEventAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TutorialEventAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialEventAsset(TutorialEventAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialEventAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialEventAsset(TutorialEventAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1231};

/// @brief Field settings, offset: 0x18, size: 0x8, def value: None
 ::VROSC::TutorialEventBehaviour*  ___settings;

/// @brief Field _startEvent, offset: 0x20, size: 0x4, def value: None
 ::VROSC::TutorialEvent  ____startEvent;

/// @brief Field _endEvent, offset: 0x24, size: 0x4, def value: None
 ::VROSC::TutorialEvent  ____endEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TutorialEventAsset, ___settings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialEventAsset, ____startEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialEventAsset, ____endEvent) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TutorialEventAsset, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TutorialEventAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialEventAsset*, "VROSC", "TutorialEventAsset");
