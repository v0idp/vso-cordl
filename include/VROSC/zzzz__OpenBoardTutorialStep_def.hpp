#pragma once
// IWYU pragma private; include "VROSC/OpenBoardTutorialStep.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__TutorialStep_def.hpp"
CORDL_MODULE_EXPORT(OpenBoardTutorialStep)
namespace System {
class Object;
}
namespace VROSC {
struct TutorialEvent;
}
// Forward declare root types
namespace VROSC {
class OpenBoardTutorialStep;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::OpenBoardTutorialStep);
// Dependencies VROSC.TutorialStep
namespace VROSC {
// Is value type: false
// CS Name: VROSC.OpenBoardTutorialStep
class CORDL_TYPE OpenBoardTutorialStep : public ::VROSC::TutorialStep {
public:
// Declarations
static inline ::VROSC::OpenBoardTutorialStep* New_ctor() ;

/// @brief Method OnEnter, addr 0x17d0288, size 0x108, virtual true, abstract: false, final false
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x17d0390, size 0x84, virtual true, abstract: false, final false
inline void OnExit() ;

/// @brief Method TutorialEventTriggered, addr 0x17d0414, size 0x158, virtual false, abstract: false, final false
inline void TutorialEventTriggered(::VROSC::TutorialEvent  tutorialEvent) ;

/// @brief Method .ctor, addr 0x17d056c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenBoardTutorialStep() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenBoardTutorialStep", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenBoardTutorialStep(OpenBoardTutorialStep && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenBoardTutorialStep", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenBoardTutorialStep(OpenBoardTutorialStep const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1484};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::OpenBoardTutorialStep, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::OpenBoardTutorialStep);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OpenBoardTutorialStep*, "VROSC", "OpenBoardTutorialStep");
