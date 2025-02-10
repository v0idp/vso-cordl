#pragma once
// IWYU pragma private; include "VROSC/InstrumentFrameController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InstrumentFrameController)
namespace VROSC {
class InstrumentController;
}
namespace VROSC {
class TimelineActivation;
}
// Forward declare root types
namespace VROSC {
class InstrumentFrameController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InstrumentFrameController);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InstrumentFrameController
class CORDL_TYPE InstrumentFrameController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _frameIsDisplayed, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__frameIsDisplayed, put=__cordl_internal_set__frameIsDisplayed)) bool  _frameIsDisplayed;

/// @brief Field _instrumentController, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrumentController, put=__cordl_internal_set__instrumentController)) ::UnityW<::VROSC::InstrumentController>  _instrumentController;

/// @brief Field _timelineActivation, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__timelineActivation, put=__cordl_internal_set__timelineActivation)) ::UnityW<::VROSC::TimelineActivation>  _timelineActivation;

/// @brief Field _userWantsFrame, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__userWantsFrame, put=__cordl_internal_set__userWantsFrame)) bool  _userWantsFrame;

static inline ::VROSC::InstrumentFrameController* New_ctor() ;

/// @brief Method OnDestroy, addr 0x178f5a4, size 0x110, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnInstrumentToggled, addr 0x178f7f8, size 0x3c, virtual false, abstract: false, final false
inline void OnInstrumentToggled(bool  active) ;

/// @brief Method SetFrameVisible, addr 0x178f6fc, size 0xdc, virtual false, abstract: false, final false
inline void SetFrameVisible(bool  shouldDisplayFrame, bool  instrumentToggled) ;

/// @brief Method SetUserWantsFrame, addr 0x178f7d8, size 0x20, virtual false, abstract: false, final false
inline void SetUserWantsFrame(bool  userWantsFrame) ;

/// @brief Method Setup, addr 0x178f4bc, size 0xe8, virtual false, abstract: false, final false
inline void Setup(::VROSC::InstrumentController*  instrumentController) ;

/// @brief Method UserDataLoaded, addr 0x178f6b4, size 0x48, virtual false, abstract: false, final false
inline void UserDataLoaded(bool  userWantsFrame) ;

constexpr bool const& __cordl_internal_get__frameIsDisplayed() const;

constexpr bool& __cordl_internal_get__frameIsDisplayed() ;

constexpr ::UnityW<::VROSC::InstrumentController> const& __cordl_internal_get__instrumentController() const;

constexpr ::UnityW<::VROSC::InstrumentController>& __cordl_internal_get__instrumentController() ;

constexpr ::UnityW<::VROSC::TimelineActivation> const& __cordl_internal_get__timelineActivation() const;

constexpr ::UnityW<::VROSC::TimelineActivation>& __cordl_internal_get__timelineActivation() ;

constexpr bool const& __cordl_internal_get__userWantsFrame() const;

constexpr bool& __cordl_internal_get__userWantsFrame() ;

constexpr void __cordl_internal_set__frameIsDisplayed(bool  value) ;

constexpr void __cordl_internal_set__instrumentController(::UnityW<::VROSC::InstrumentController>  value) ;

constexpr void __cordl_internal_set__timelineActivation(::UnityW<::VROSC::TimelineActivation>  value) ;

constexpr void __cordl_internal_set__userWantsFrame(bool  value) ;

/// @brief Method .ctor, addr 0x178f834, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstrumentFrameController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstrumentFrameController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstrumentFrameController(InstrumentFrameController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstrumentFrameController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstrumentFrameController(InstrumentFrameController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1334};

/// @brief Field _timelineActivation, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::TimelineActivation>  ____timelineActivation;

/// @brief Field _instrumentController, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::InstrumentController>  ____instrumentController;

/// @brief Field _frameIsDisplayed, offset: 0x30, size: 0x1, def value: None
 bool  ____frameIsDisplayed;

/// @brief Field _userWantsFrame, offset: 0x31, size: 0x1, def value: None
 bool  ____userWantsFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InstrumentFrameController, ____timelineActivation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentFrameController, ____instrumentController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentFrameController, ____frameIsDisplayed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentFrameController, ____userWantsFrame) == 0x31, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InstrumentFrameController, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InstrumentFrameController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentFrameController*, "VROSC", "InstrumentFrameController");
