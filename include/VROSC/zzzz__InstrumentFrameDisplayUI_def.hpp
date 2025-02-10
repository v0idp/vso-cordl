#pragma once
// IWYU pragma private; include "VROSC/InstrumentFrameDisplayUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InstrumentFrameDisplayUI)
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class InstrumentController;
}
namespace VROSC {
class UIToggle;
}
// Forward declare root types
namespace VROSC {
class InstrumentFrameDisplayUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InstrumentFrameDisplayUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InstrumentFrameDisplayUI
class CORDL_TYPE InstrumentFrameDisplayUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _instrumentController, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrumentController, put=__cordl_internal_set__instrumentController)) ::UnityW<::VROSC::InstrumentController>  _instrumentController;

/// @brief Field _useFrame, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__useFrame, put=__cordl_internal_set__useFrame)) ::UnityW<::VROSC::UIToggle>  _useFrame;

/// @brief Method Awake, addr 0x178f83c, size 0xd8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FrameToggled, addr 0x178f9f4, size 0x28, virtual false, abstract: false, final false
inline void FrameToggled(::VROSC::InputDevice*  inputDevice, bool  isOn) ;

static inline ::VROSC::InstrumentFrameDisplayUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x178f914, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Setup, addr 0x178f9ec, size 0x8, virtual false, abstract: false, final false
inline void Setup(::VROSC::InstrumentController*  instrumentController) ;

/// @brief Method UpdateIsVisibleStatus, addr 0x1782ff0, size 0x24, virtual false, abstract: false, final false
inline void UpdateIsVisibleStatus(bool  frameIsOn) ;

constexpr ::UnityW<::VROSC::InstrumentController> const& __cordl_internal_get__instrumentController() const;

constexpr ::UnityW<::VROSC::InstrumentController>& __cordl_internal_get__instrumentController() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__useFrame() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__useFrame() ;

constexpr void __cordl_internal_set__instrumentController(::UnityW<::VROSC::InstrumentController>  value) ;

constexpr void __cordl_internal_set__useFrame(::UnityW<::VROSC::UIToggle>  value) ;

/// @brief Method .ctor, addr 0x178fa1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstrumentFrameDisplayUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstrumentFrameDisplayUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstrumentFrameDisplayUI(InstrumentFrameDisplayUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstrumentFrameDisplayUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstrumentFrameDisplayUI(InstrumentFrameDisplayUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1335};

/// @brief Field _useFrame, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____useFrame;

/// @brief Field _instrumentController, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::InstrumentController>  ____instrumentController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InstrumentFrameDisplayUI, ____useFrame) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentFrameDisplayUI, ____instrumentController) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InstrumentFrameDisplayUI, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InstrumentFrameDisplayUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentFrameDisplayUI*, "VROSC", "InstrumentFrameDisplayUI");
