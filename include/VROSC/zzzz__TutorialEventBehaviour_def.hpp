#pragma once
// IWYU pragma private; include "VROSC/TutorialEventBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "VROSC/zzzz__TutorialEvent_def.hpp"
CORDL_MODULE_EXPORT(TutorialEventBehaviour)
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace VROSC {
struct TutorialEvent;
}
// Forward declare root types
namespace VROSC {
class TutorialEventBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TutorialEventBehaviour);
// Dependencies UnityEngine.Playables.PlayableBehaviour, VROSC.TutorialEvent
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TutorialEventBehaviour
class CORDL_TYPE TutorialEventBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief Field _endEvent, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__endEvent, put=__cordl_internal_set__endEvent)) ::VROSC::TutorialEvent  _endEvent;

/// @brief Field _startEvent, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__startEvent, put=__cordl_internal_set__startEvent)) ::VROSC::TutorialEvent  _startEvent;

static inline ::VROSC::TutorialEventBehaviour* New_ctor() ;

/// @brief Method OnBehaviourPause, addr 0x176f4a8, size 0x16c, virtual true, abstract: false, final false
inline void OnBehaviourPause(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info) ;

/// @brief Method OnBehaviourPlay, addr 0x176f3d4, size 0x3c, virtual true, abstract: false, final false
inline void OnBehaviourPlay(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info) ;

/// @brief Method SentTutorialEvent, addr 0x176f410, size 0x98, virtual false, abstract: false, final false
inline void SentTutorialEvent(::VROSC::TutorialEvent  tutorialEvent) ;

/// @brief Method Setup, addr 0x176f3c4, size 0x8, virtual false, abstract: false, final false
inline void Setup(::VROSC::TutorialEvent  startEvent, ::VROSC::TutorialEvent  endEvent) ;

constexpr ::VROSC::TutorialEvent const& __cordl_internal_get__endEvent() const;

constexpr ::VROSC::TutorialEvent& __cordl_internal_get__endEvent() ;

constexpr ::VROSC::TutorialEvent const& __cordl_internal_get__startEvent() const;

constexpr ::VROSC::TutorialEvent& __cordl_internal_get__startEvent() ;

constexpr void __cordl_internal_set__endEvent(::VROSC::TutorialEvent  value) ;

constexpr void __cordl_internal_set__startEvent(::VROSC::TutorialEvent  value) ;

/// @brief Method .ctor, addr 0x176f614, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TutorialEventBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TutorialEventBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialEventBehaviour(TutorialEventBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialEventBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialEventBehaviour(TutorialEventBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1232};

/// @brief Field _startEvent, offset: 0x10, size: 0x4, def value: None
 ::VROSC::TutorialEvent  ____startEvent;

/// @brief Field _endEvent, offset: 0x14, size: 0x4, def value: None
 ::VROSC::TutorialEvent  ____endEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TutorialEventBehaviour, ____startEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::TutorialEventBehaviour, ____endEvent) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TutorialEventBehaviour, 0x18>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TutorialEventBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialEventBehaviour*, "VROSC", "TutorialEventBehaviour");
