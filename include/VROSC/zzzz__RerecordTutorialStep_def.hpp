#pragma once
// IWYU pragma private; include "VROSC/RerecordTutorialStep.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__TutorialStep_def.hpp"
CORDL_MODULE_EXPORT(RerecordTutorialStep)
namespace System {
class Object;
}
namespace UnityEngine::Playables {
class PlayableAsset;
}
namespace VROSC {
struct TutorialEvent;
}
// Forward declare root types
namespace VROSC {
class RerecordTutorialStep;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::RerecordTutorialStep);
// Dependencies VROSC.TutorialStep
namespace VROSC {
// Is value type: false
// CS Name: VROSC.RerecordTutorialStep
class CORDL_TYPE RerecordTutorialStep : public ::VROSC::TutorialStep {
public:
// Declarations
/// @brief Field _alternativePlayable, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__alternativePlayable, put=__cordl_internal_set__alternativePlayable)) ::UnityW<::UnityEngine::Playables::PlayableAsset>  _alternativePlayable;

/// @brief Field _defaultPlayable, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultPlayable, put=__cordl_internal_set__defaultPlayable)) ::UnityW<::UnityEngine::Playables::PlayableAsset>  _defaultPlayable;

static inline ::VROSC::RerecordTutorialStep* New_ctor() ;

/// @brief Method OnEnter, addr 0x17d301c, size 0x544, virtual true, abstract: false, final false
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x17d3560, size 0x78, virtual true, abstract: false, final false
inline void OnExit() ;

/// @brief Method TutorialEventTriggered, addr 0x17d35d8, size 0x160, virtual false, abstract: false, final false
inline void TutorialEventTriggered(::VROSC::TutorialEvent  tutorialEvent) ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset> const& __cordl_internal_get__alternativePlayable() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset>& __cordl_internal_get__alternativePlayable() ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset> const& __cordl_internal_get__defaultPlayable() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset>& __cordl_internal_get__defaultPlayable() ;

constexpr void __cordl_internal_set__alternativePlayable(::UnityW<::UnityEngine::Playables::PlayableAsset>  value) ;

constexpr void __cordl_internal_set__defaultPlayable(::UnityW<::UnityEngine::Playables::PlayableAsset>  value) ;

/// @brief Method .ctor, addr 0x17d3738, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RerecordTutorialStep() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RerecordTutorialStep", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RerecordTutorialStep(RerecordTutorialStep && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RerecordTutorialStep", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RerecordTutorialStep(RerecordTutorialStep const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1497};

/// @brief Field _defaultPlayable, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableAsset>  ____defaultPlayable;

/// @brief Field _alternativePlayable, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableAsset>  ____alternativePlayable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::RerecordTutorialStep, ____defaultPlayable) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::RerecordTutorialStep, ____alternativePlayable) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::RerecordTutorialStep, 0x70>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::RerecordTutorialStep);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::RerecordTutorialStep*, "VROSC", "RerecordTutorialStep");
