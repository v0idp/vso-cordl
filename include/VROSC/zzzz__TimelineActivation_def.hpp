#pragma once
// IWYU pragma private; include "VROSC/TimelineActivation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TimelineActivation)
namespace UnityEngine::Playables {
class PlayableAsset;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
// Forward declare root types
namespace VROSC {
class TimelineActivation;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TimelineActivation);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TimelineActivation
class CORDL_TYPE TimelineActivation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _director, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__director, put=__cordl_internal_set__director)) ::UnityW<::UnityEngine::Playables::PlayableDirector>  _director;

/// @brief Field _enterTimeline, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__enterTimeline, put=__cordl_internal_set__enterTimeline)) ::UnityW<::UnityEngine::Playables::PlayableAsset>  _enterTimeline;

/// @brief Field _exitTimeline, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__exitTimeline, put=__cordl_internal_set__exitTimeline)) ::UnityW<::UnityEngine::Playables::PlayableAsset>  _exitTimeline;

/// @brief Field _stopBeforePlay, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__stopBeforePlay, put=__cordl_internal_set__stopBeforePlay)) bool  _stopBeforePlay;

/// @brief Method Activate, addr 0x1770e18, size 0x114, virtual true, abstract: false, final false
inline void Activate(bool  shouldBeActive) ;

/// @brief Method EditorLoadDirector, addr 0x1770fb8, size 0xa4, virtual false, abstract: false, final false
inline void EditorLoadDirector(bool  enter) ;

/// @brief Method EditorUnloadDirector, addr 0x1770f34, size 0x84, virtual false, abstract: false, final false
inline void EditorUnloadDirector() ;

static inline ::VROSC::TimelineActivation* New_ctor() ;

/// @brief Method OnActivateStart, addr 0x1770f2c, size 0x4, virtual true, abstract: false, final false
inline void OnActivateStart() ;

/// @brief Method OnDeactivateStart, addr 0x1770f30, size 0x4, virtual true, abstract: false, final false
inline void OnDeactivateStart() ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get__director() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get__director() ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset> const& __cordl_internal_get__enterTimeline() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset>& __cordl_internal_get__enterTimeline() ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset> const& __cordl_internal_get__exitTimeline() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset>& __cordl_internal_get__exitTimeline() ;

constexpr bool const& __cordl_internal_get__stopBeforePlay() const;

constexpr bool& __cordl_internal_get__stopBeforePlay() ;

constexpr void __cordl_internal_set__director(::UnityW<::UnityEngine::Playables::PlayableDirector>  value) ;

constexpr void __cordl_internal_set__enterTimeline(::UnityW<::UnityEngine::Playables::PlayableAsset>  value) ;

constexpr void __cordl_internal_set__exitTimeline(::UnityW<::UnityEngine::Playables::PlayableAsset>  value) ;

constexpr void __cordl_internal_set__stopBeforePlay(bool  value) ;

/// @brief Method .ctor, addr 0x177105c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimelineActivation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimelineActivation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimelineActivation(TimelineActivation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimelineActivation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimelineActivation(TimelineActivation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1246};

/// @brief Field _director, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableDirector>  ____director;

/// @brief Field _enterTimeline, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableAsset>  ____enterTimeline;

/// @brief Field _exitTimeline, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableAsset>  ____exitTimeline;

/// @brief Field _stopBeforePlay, offset: 0x38, size: 0x1, def value: None
 bool  ____stopBeforePlay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TimelineActivation, ____director) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TimelineActivation, ____enterTimeline) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TimelineActivation, ____exitTimeline) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TimelineActivation, ____stopBeforePlay) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TimelineActivation, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TimelineActivation);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TimelineActivation*, "VROSC", "TimelineActivation");
