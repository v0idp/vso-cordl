#pragma once
// IWYU pragma private; include "VROSC/InstrumentControlPanelUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__ControlPanelUI_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InstrumentControlPanelUI)
namespace VROSC {
class InstrumentController;
}
namespace VROSC {
class InstrumentFrameDisplayUI;
}
namespace VROSC {
class QuantizeUI;
}
namespace VROSC {
class UISlider;
}
// Forward declare root types
namespace VROSC {
class InstrumentControlPanelUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InstrumentControlPanelUI);
// Dependencies VROSC.ControlPanelUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InstrumentControlPanelUI
class CORDL_TYPE InstrumentControlPanelUI : public ::VROSC::ControlPanelUI {
public:
// Declarations
/// @brief Field _frameDisplayUI, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__frameDisplayUI, put=__cordl_internal_set__frameDisplayUI)) ::UnityW<::VROSC::InstrumentFrameDisplayUI>  _frameDisplayUI;

/// @brief Field _instrumentController, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrumentController, put=__cordl_internal_set__instrumentController)) ::UnityW<::VROSC::InstrumentController>  _instrumentController;

/// @brief Field _quantizeUI, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__quantizeUI, put=__cordl_internal_set__quantizeUI)) ::UnityW<::VROSC::QuantizeUI>  _quantizeUI;

/// @brief Field _volumeSlider, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__volumeSlider, put=__cordl_internal_set__volumeSlider)) ::UnityW<::VROSC::UISlider>  _volumeSlider;

/// @brief Method ChangeVolume, addr 0x1783014, size 0x24, virtual false, abstract: false, final false
inline void ChangeVolume(float_t  volume) ;

static inline ::VROSC::InstrumentControlPanelUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x178220c, size 0x11c, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetVolume, addr 0x1783038, size 0x2c, virtual false, abstract: false, final false
inline void SetVolume(float_t  volume) ;

/// @brief Method Setup, addr 0x1781c48, size 0x238, virtual true, abstract: false, final false
inline void Setup(::VROSC::InstrumentController*  instrumentController) ;

/// @brief Method UpdateFrameIsVisible, addr 0x1782fdc, size 0x14, virtual false, abstract: false, final false
inline void UpdateFrameIsVisible(bool  frameIsVisible) ;

constexpr ::UnityW<::VROSC::InstrumentFrameDisplayUI> const& __cordl_internal_get__frameDisplayUI() const;

constexpr ::UnityW<::VROSC::InstrumentFrameDisplayUI>& __cordl_internal_get__frameDisplayUI() ;

constexpr ::UnityW<::VROSC::InstrumentController> const& __cordl_internal_get__instrumentController() const;

constexpr ::UnityW<::VROSC::InstrumentController>& __cordl_internal_get__instrumentController() ;

constexpr ::UnityW<::VROSC::QuantizeUI> const& __cordl_internal_get__quantizeUI() const;

constexpr ::UnityW<::VROSC::QuantizeUI>& __cordl_internal_get__quantizeUI() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__volumeSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__volumeSlider() ;

constexpr void __cordl_internal_set__frameDisplayUI(::UnityW<::VROSC::InstrumentFrameDisplayUI>  value) ;

constexpr void __cordl_internal_set__instrumentController(::UnityW<::VROSC::InstrumentController>  value) ;

constexpr void __cordl_internal_set__quantizeUI(::UnityW<::VROSC::QuantizeUI>  value) ;

constexpr void __cordl_internal_set__volumeSlider(::UnityW<::VROSC::UISlider>  value) ;

/// @brief Method .ctor, addr 0x17825fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstrumentControlPanelUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstrumentControlPanelUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstrumentControlPanelUI(InstrumentControlPanelUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstrumentControlPanelUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstrumentControlPanelUI(InstrumentControlPanelUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1309};

/// @brief Field _volumeSlider, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____volumeSlider;

/// @brief Field _quantizeUI, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::QuantizeUI>  ____quantizeUI;

/// @brief Field _frameDisplayUI, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::InstrumentFrameDisplayUI>  ____frameDisplayUI;

/// @brief Field _instrumentController, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::InstrumentController>  ____instrumentController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InstrumentControlPanelUI, ____volumeSlider) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentControlPanelUI, ____quantizeUI) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentControlPanelUI, ____frameDisplayUI) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentControlPanelUI, ____instrumentController) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InstrumentControlPanelUI, 0x70>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InstrumentControlPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentControlPanelUI*, "VROSC", "InstrumentControlPanelUI");
