#pragma once
// IWYU pragma private; include "VROSC/GrabAndMoveTutorialStep.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__TutorialStep_def.hpp"
CORDL_MODULE_EXPORT(GrabAndMoveTutorialStep)
namespace System {
class Object;
}
namespace VROSC {
struct TutorialEvent;
}
// Forward declare root types
namespace VROSC {
class GrabAndMoveTutorialStep;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::GrabAndMoveTutorialStep);
// Dependencies VROSC.TutorialStep
namespace VROSC {
// Is value type: false
// CS Name: VROSC.GrabAndMoveTutorialStep
class CORDL_TYPE GrabAndMoveTutorialStep : public ::VROSC::TutorialStep {
public:
// Declarations
/// @brief Field _boardGrabbed, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__boardGrabbed, put=__cordl_internal_set__boardGrabbed)) bool  _boardGrabbed;

/// @brief Field _tutorialPanelGrabbed, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__tutorialPanelGrabbed, put=__cordl_internal_set__tutorialPanelGrabbed)) bool  _tutorialPanelGrabbed;

static inline ::VROSC::GrabAndMoveTutorialStep* New_ctor() ;

/// @brief Method OnEnter, addr 0x17d0574, size 0x108, virtual true, abstract: false, final false
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method Tick, addr 0x17d067c, size 0x13c, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method TutorialEventTriggered, addr 0x17d07b8, size 0xfc, virtual false, abstract: false, final false
inline void TutorialEventTriggered(::VROSC::TutorialEvent  tutorialEvent) ;

constexpr bool const& __cordl_internal_get__boardGrabbed() const;

constexpr bool& __cordl_internal_get__boardGrabbed() ;

constexpr bool const& __cordl_internal_get__tutorialPanelGrabbed() const;

constexpr bool& __cordl_internal_get__tutorialPanelGrabbed() ;

constexpr void __cordl_internal_set__boardGrabbed(bool  value) ;

constexpr void __cordl_internal_set__tutorialPanelGrabbed(bool  value) ;

/// @brief Method .ctor, addr 0x17d08b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabAndMoveTutorialStep() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabAndMoveTutorialStep", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabAndMoveTutorialStep(GrabAndMoveTutorialStep && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabAndMoveTutorialStep", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabAndMoveTutorialStep(GrabAndMoveTutorialStep const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1485};

/// @brief Field _boardGrabbed, offset: 0x60, size: 0x1, def value: None
 bool  ____boardGrabbed;

/// @brief Field _tutorialPanelGrabbed, offset: 0x61, size: 0x1, def value: None
 bool  ____tutorialPanelGrabbed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GrabAndMoveTutorialStep, ____boardGrabbed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabAndMoveTutorialStep, ____tutorialPanelGrabbed) == 0x61, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GrabAndMoveTutorialStep, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::GrabAndMoveTutorialStep);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GrabAndMoveTutorialStep*, "VROSC", "GrabAndMoveTutorialStep");
