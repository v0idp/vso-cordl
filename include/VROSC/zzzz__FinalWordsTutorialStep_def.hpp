#pragma once
// IWYU pragma private; include "VROSC/FinalWordsTutorialStep.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__TutorialStep_def.hpp"
CORDL_MODULE_EXPORT(FinalWordsTutorialStep)
namespace System {
class Object;
}
// Forward declare root types
namespace VROSC {
class FinalWordsTutorialStep;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::FinalWordsTutorialStep);
// Dependencies VROSC.TutorialStep
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FinalWordsTutorialStep
class CORDL_TYPE FinalWordsTutorialStep : public ::VROSC::TutorialStep {
public:
// Declarations
/// @brief Method EnableEverything, addr 0x17d451c, size 0xe8, virtual false, abstract: false, final false
inline void EnableEverything() ;

static inline ::VROSC::FinalWordsTutorialStep* New_ctor() ;

/// @brief Method OnEnter, addr 0x17d4450, size 0xcc, virtual true, abstract: false, final false
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method .ctor, addr 0x17d4604, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FinalWordsTutorialStep() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FinalWordsTutorialStep", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FinalWordsTutorialStep(FinalWordsTutorialStep && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FinalWordsTutorialStep", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FinalWordsTutorialStep(FinalWordsTutorialStep const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1501};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::FinalWordsTutorialStep, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::FinalWordsTutorialStep);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FinalWordsTutorialStep*, "VROSC", "FinalWordsTutorialStep");
