#pragma once
// IWYU pragma private; include "VROSC/PlayWithOneSixteenthTutorialStep.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__TutorialStep_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayWithOneSixteenthTutorialStep)
namespace System {
class Object;
}
namespace VROSC {
class PatchSettings;
}
namespace VROSC {
struct TutorialEvent;
}
namespace VROSC {
struct WidgetSettings_Identifier;
}
// Forward declare root types
namespace VROSC {
class PlayWithOneSixteenthTutorialStep;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PlayWithOneSixteenthTutorialStep);
// Dependencies VROSC.TutorialStep
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PlayWithOneSixteenthTutorialStep
class CORDL_TYPE PlayWithOneSixteenthTutorialStep : public ::VROSC::TutorialStep {
public:
// Declarations
/// @brief Field _notesPlayed, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__notesPlayed, put=__cordl_internal_set__notesPlayed)) int32_t  _notesPlayed;

static inline ::VROSC::PlayWithOneSixteenthTutorialStep* New_ctor() ;

/// @brief Method NotePlayed, addr 0x17d29d8, size 0x16c, virtual false, abstract: false, final false
inline void NotePlayed(::VROSC::WidgetSettings_Identifier  id, ::VROSC::PatchSettings*  patch, double_t  predictedDspTime) ;

/// @brief Method OnEnter, addr 0x17d26d4, size 0x108, virtual true, abstract: false, final false
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method TutorialEventTriggered, addr 0x17d27dc, size 0x1fc, virtual false, abstract: false, final false
inline void TutorialEventTriggered(::VROSC::TutorialEvent  tutorialEvent) ;

constexpr int32_t const& __cordl_internal_get__notesPlayed() const;

constexpr int32_t& __cordl_internal_get__notesPlayed() ;

constexpr void __cordl_internal_set__notesPlayed(int32_t  value) ;

/// @brief Method .ctor, addr 0x17d2b44, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayWithOneSixteenthTutorialStep() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayWithOneSixteenthTutorialStep", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayWithOneSixteenthTutorialStep(PlayWithOneSixteenthTutorialStep && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayWithOneSixteenthTutorialStep", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayWithOneSixteenthTutorialStep(PlayWithOneSixteenthTutorialStep const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1494};

/// @brief Field _notesPlayed, offset: 0x60, size: 0x4, def value: None
 int32_t  ____notesPlayed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PlayWithOneSixteenthTutorialStep, ____notesPlayed) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PlayWithOneSixteenthTutorialStep, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PlayWithOneSixteenthTutorialStep);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PlayWithOneSixteenthTutorialStep*, "VROSC", "PlayWithOneSixteenthTutorialStep");
