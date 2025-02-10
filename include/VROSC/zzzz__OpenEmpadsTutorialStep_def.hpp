#pragma once
// IWYU pragma private; include "VROSC/OpenEmpadsTutorialStep.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__TutorialStep_def.hpp"
CORDL_MODULE_EXPORT(OpenEmpadsTutorialStep)
namespace System {
class Object;
}
namespace VROSC {
struct TutorialEvent;
}
// Forward declare root types
namespace VROSC {
class OpenEmpadsTutorialStep;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::OpenEmpadsTutorialStep);
// Dependencies VROSC.TutorialStep
namespace VROSC {
// Is value type: false
// CS Name: VROSC.OpenEmpadsTutorialStep
class CORDL_TYPE OpenEmpadsTutorialStep : public ::VROSC::TutorialStep {
public:
// Declarations
static inline ::VROSC::OpenEmpadsTutorialStep* New_ctor() ;

/// @brief Method OnEnter, addr 0x17d1884, size 0x108, virtual true, abstract: false, final false
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method TutorialEventTriggered, addr 0x17d198c, size 0x184, virtual false, abstract: false, final false
inline void TutorialEventTriggered(::VROSC::TutorialEvent  tutorialEvent) ;

/// @brief Method .ctor, addr 0x17d1b10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenEmpadsTutorialStep() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenEmpadsTutorialStep", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenEmpadsTutorialStep(OpenEmpadsTutorialStep && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenEmpadsTutorialStep", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenEmpadsTutorialStep(OpenEmpadsTutorialStep const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1489};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::OpenEmpadsTutorialStep, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::OpenEmpadsTutorialStep);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OpenEmpadsTutorialStep*, "VROSC", "OpenEmpadsTutorialStep");
