#pragma once
// IWYU pragma private; include "VROSC/OpenDashboardTutorialStep.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__TutorialStep_def.hpp"
CORDL_MODULE_EXPORT(OpenDashboardTutorialStep)
namespace System {
class Object;
}
// Forward declare root types
namespace VROSC {
class OpenDashboardTutorialStep;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::OpenDashboardTutorialStep);
// Dependencies VROSC.TutorialStep
namespace VROSC {
// Is value type: false
// CS Name: VROSC.OpenDashboardTutorialStep
class CORDL_TYPE OpenDashboardTutorialStep : public ::VROSC::TutorialStep {
public:
// Declarations
/// @brief Method DashboardToggled, addr 0x17d0124, size 0x15c, virtual false, abstract: false, final false
inline void DashboardToggled(bool  toggled) ;

static inline ::VROSC::OpenDashboardTutorialStep* New_ctor() ;

/// @brief Method OnEnter, addr 0x17d0008, size 0x114, virtual true, abstract: false, final false
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method TimelineReachedEnd, addr 0x17d011c, size 0x8, virtual true, abstract: false, final false
inline void TimelineReachedEnd() ;

/// @brief Method .ctor, addr 0x17d0280, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenDashboardTutorialStep() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenDashboardTutorialStep", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenDashboardTutorialStep(OpenDashboardTutorialStep && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenDashboardTutorialStep", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenDashboardTutorialStep(OpenDashboardTutorialStep const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1483};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::OpenDashboardTutorialStep, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::OpenDashboardTutorialStep);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OpenDashboardTutorialStep*, "VROSC", "OpenDashboardTutorialStep");
