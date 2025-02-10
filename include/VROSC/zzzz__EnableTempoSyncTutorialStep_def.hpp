#pragma once
// IWYU pragma private; include "VROSC/EnableTempoSyncTutorialStep.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__TutorialStep_def.hpp"
CORDL_MODULE_EXPORT(EnableTempoSyncTutorialStep)
namespace System {
class Object;
}
namespace VROSC {
struct TutorialEvent;
}
// Forward declare root types
namespace VROSC {
class EnableTempoSyncTutorialStep;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::EnableTempoSyncTutorialStep);
// Dependencies VROSC.TutorialStep
namespace VROSC {
// Is value type: false
// CS Name: VROSC.EnableTempoSyncTutorialStep
class CORDL_TYPE EnableTempoSyncTutorialStep : public ::VROSC::TutorialStep {
public:
// Declarations
static inline ::VROSC::EnableTempoSyncTutorialStep* New_ctor() ;

/// @brief Method OnEnter, addr 0x17d2030, size 0x108, virtual true, abstract: false, final false
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method TutorialEventTriggered, addr 0x17d2138, size 0x158, virtual false, abstract: false, final false
inline void TutorialEventTriggered(::VROSC::TutorialEvent  tutorialEvent) ;

/// @brief Method .ctor, addr 0x17d2290, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnableTempoSyncTutorialStep() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnableTempoSyncTutorialStep", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnableTempoSyncTutorialStep(EnableTempoSyncTutorialStep && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnableTempoSyncTutorialStep", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnableTempoSyncTutorialStep(EnableTempoSyncTutorialStep const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1492};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::EnableTempoSyncTutorialStep, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::EnableTempoSyncTutorialStep);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EnableTempoSyncTutorialStep*, "VROSC", "EnableTempoSyncTutorialStep");
