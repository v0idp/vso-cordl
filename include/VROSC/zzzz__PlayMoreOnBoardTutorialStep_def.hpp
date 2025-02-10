#pragma once
// IWYU pragma private; include "VROSC/PlayMoreOnBoardTutorialStep.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__TutorialStep_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayMoreOnBoardTutorialStep)
namespace System {
class Object;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class PatchSettings;
}
namespace VROSC {
struct TriggerButton;
}
namespace VROSC {
struct TutorialEvent;
}
namespace VROSC {
struct WidgetSettings_Identifier;
}
// Forward declare root types
namespace VROSC {
class PlayMoreOnBoardTutorialStep;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PlayMoreOnBoardTutorialStep);
// Dependencies VROSC.TutorialStep
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PlayMoreOnBoardTutorialStep
class CORDL_TYPE PlayMoreOnBoardTutorialStep : public ::VROSC::TutorialStep {
public:
// Declarations
/// @brief Field _gripPressed, offset 0x65, size 0x1 
 __declspec(property(get=__cordl_internal_get__gripPressed, put=__cordl_internal_set__gripPressed)) bool  _gripPressed;

/// @brief Field _notesPlayed, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__notesPlayed, put=__cordl_internal_set__notesPlayed)) int32_t  _notesPlayed;

/// @brief Field _thumbPressed, offset 0x66, size 0x1 
 __declspec(property(get=__cordl_internal_get__thumbPressed, put=__cordl_internal_set__thumbPressed)) bool  _thumbPressed;

/// @brief Field _triggerPressed, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get__triggerPressed, put=__cordl_internal_set__triggerPressed)) bool  _triggerPressed;

/// @brief Method ButtonPressed, addr 0x17d0f84, size 0xb8, virtual false, abstract: false, final false
inline void ButtonPressed(::VROSC::InputDevice*  inputDevice, ::VROSC::TriggerButton  button) ;

static inline ::VROSC::PlayMoreOnBoardTutorialStep* New_ctor() ;

/// @brief Method NotePlayed, addr 0x17d103c, size 0x204, virtual false, abstract: false, final false
inline void NotePlayed(::VROSC::WidgetSettings_Identifier  id, ::VROSC::PatchSettings*  patch, double_t  predictedDspTime) ;

/// @brief Method OnEnter, addr 0x17d0cb0, size 0x108, virtual true, abstract: false, final false
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method TutorialEventTriggered, addr 0x17d0db8, size 0x1cc, virtual false, abstract: false, final false
inline void TutorialEventTriggered(::VROSC::TutorialEvent  tutorialEvent) ;

constexpr bool const& __cordl_internal_get__gripPressed() const;

constexpr bool& __cordl_internal_get__gripPressed() ;

constexpr int32_t const& __cordl_internal_get__notesPlayed() const;

constexpr int32_t& __cordl_internal_get__notesPlayed() ;

constexpr bool const& __cordl_internal_get__thumbPressed() const;

constexpr bool& __cordl_internal_get__thumbPressed() ;

constexpr bool const& __cordl_internal_get__triggerPressed() const;

constexpr bool& __cordl_internal_get__triggerPressed() ;

constexpr void __cordl_internal_set__gripPressed(bool  value) ;

constexpr void __cordl_internal_set__notesPlayed(int32_t  value) ;

constexpr void __cordl_internal_set__thumbPressed(bool  value) ;

constexpr void __cordl_internal_set__triggerPressed(bool  value) ;

/// @brief Method .ctor, addr 0x17d1240, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayMoreOnBoardTutorialStep() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayMoreOnBoardTutorialStep", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayMoreOnBoardTutorialStep(PlayMoreOnBoardTutorialStep && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayMoreOnBoardTutorialStep", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayMoreOnBoardTutorialStep(PlayMoreOnBoardTutorialStep const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1487};

/// @brief Field _notesPlayed, offset: 0x60, size: 0x4, def value: None
 int32_t  ____notesPlayed;

/// @brief Field _triggerPressed, offset: 0x64, size: 0x1, def value: None
 bool  ____triggerPressed;

/// @brief Field _gripPressed, offset: 0x65, size: 0x1, def value: None
 bool  ____gripPressed;

/// @brief Field _thumbPressed, offset: 0x66, size: 0x1, def value: None
 bool  ____thumbPressed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PlayMoreOnBoardTutorialStep, ____notesPlayed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlayMoreOnBoardTutorialStep, ____triggerPressed) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlayMoreOnBoardTutorialStep, ____gripPressed) == 0x65, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlayMoreOnBoardTutorialStep, ____thumbPressed) == 0x66, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PlayMoreOnBoardTutorialStep, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PlayMoreOnBoardTutorialStep);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PlayMoreOnBoardTutorialStep*, "VROSC", "PlayMoreOnBoardTutorialStep");
