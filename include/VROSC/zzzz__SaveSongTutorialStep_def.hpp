#pragma once
// IWYU pragma private; include "VROSC/SaveSongTutorialStep.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__TutorialStep_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SaveSongTutorialStep)
namespace System {
class Object;
}
namespace VROSC {
struct Error;
}
// Forward declare root types
namespace VROSC {
class SaveSongTutorialStep;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SaveSongTutorialStep);
// Dependencies VROSC.TutorialStep
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SaveSongTutorialStep
class CORDL_TYPE SaveSongTutorialStep : public ::VROSC::TutorialStep {
public:
// Declarations
static inline ::VROSC::SaveSongTutorialStep* New_ctor() ;

/// @brief Method OnEnter, addr 0x17d3c3c, size 0x21c, virtual true, abstract: false, final false
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x17d3e58, size 0x1b8, virtual true, abstract: false, final false
inline void OnExit() ;

/// @brief Method SongFailedSaving, addr 0x17d420c, size 0x23c, virtual false, abstract: false, final false
inline void SongFailedSaving(::StringW  sessionId, ::VROSC::Error  error) ;

/// @brief Method SongSaved, addr 0x17d4010, size 0x1fc, virtual false, abstract: false, final false
inline void SongSaved(::StringW  sessionId) ;

/// @brief Method .ctor, addr 0x17d4448, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SaveSongTutorialStep() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SaveSongTutorialStep", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaveSongTutorialStep(SaveSongTutorialStep && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaveSongTutorialStep", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaveSongTutorialStep(SaveSongTutorialStep const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1500};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::SaveSongTutorialStep, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SaveSongTutorialStep);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveSongTutorialStep*, "VROSC", "SaveSongTutorialStep");
