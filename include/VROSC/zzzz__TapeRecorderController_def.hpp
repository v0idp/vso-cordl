#pragma once
// IWYU pragma private; include "VROSC/TapeRecorderController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__ToolController_def.hpp"
CORDL_MODULE_EXPORT(TapeRecorderController)
namespace VROSC {
class ControlPanelUI;
}
namespace VROSC {
class InfoPanel;
}
namespace VROSC {
class TapeRecorder;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UserDataControllers;
}
// Forward declare root types
namespace VROSC {
class TapeRecorderController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TapeRecorderController);
// Dependencies VROSC.ToolController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TapeRecorderController
class CORDL_TYPE TapeRecorderController : public ::VROSC::ToolController {
public:
// Declarations
/// @brief Field _closeButton, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeButton, put=__cordl_internal_set__closeButton)) ::UnityW<::VROSC::UIButton>  _closeButton;

/// @brief Field _controlPanelUI, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__controlPanelUI, put=__cordl_internal_set__controlPanelUI)) ::UnityW<::VROSC::ControlPanelUI>  _controlPanelUI;

/// @brief Field _infoPanel, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__infoPanel, put=__cordl_internal_set__infoPanel)) ::UnityW<::VROSC::InfoPanel>  _infoPanel;

/// @brief Field _tapeRecorder, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__tapeRecorder, put=__cordl_internal_set__tapeRecorder)) ::UnityW<::VROSC::TapeRecorder>  _tapeRecorder;

/// @brief Method CloseButtonPressed, addr 0x16fcd18, size 0xc, virtual false, abstract: false, final false
inline void CloseButtonPressed() ;

static inline ::VROSC::TapeRecorderController* New_ctor() ;

/// @brief Method Setup, addr 0x16fcb54, size 0x170, virtual true, abstract: false, final false
inline void Setup() ;

/// @brief Method UserDataLoaded, addr 0x16fccc4, size 0x54, virtual true, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__closeButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__closeButton() ;

constexpr ::UnityW<::VROSC::ControlPanelUI> const& __cordl_internal_get__controlPanelUI() const;

constexpr ::UnityW<::VROSC::ControlPanelUI>& __cordl_internal_get__controlPanelUI() ;

constexpr ::UnityW<::VROSC::InfoPanel> const& __cordl_internal_get__infoPanel() const;

constexpr ::UnityW<::VROSC::InfoPanel>& __cordl_internal_get__infoPanel() ;

constexpr ::UnityW<::VROSC::TapeRecorder> const& __cordl_internal_get__tapeRecorder() const;

constexpr ::UnityW<::VROSC::TapeRecorder>& __cordl_internal_get__tapeRecorder() ;

constexpr void __cordl_internal_set__closeButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__controlPanelUI(::UnityW<::VROSC::ControlPanelUI>  value) ;

constexpr void __cordl_internal_set__infoPanel(::UnityW<::VROSC::InfoPanel>  value) ;

constexpr void __cordl_internal_set__tapeRecorder(::UnityW<::VROSC::TapeRecorder>  value) ;

/// @brief Method .ctor, addr 0x16fcd24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TapeRecorderController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TapeRecorderController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TapeRecorderController(TapeRecorderController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TapeRecorderController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TapeRecorderController(TapeRecorderController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{829};

/// @brief Field _closeButton, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____closeButton;

/// @brief Field _tapeRecorder, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::VROSC::TapeRecorder>  ____tapeRecorder;

/// @brief Field _controlPanelUI, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::VROSC::ControlPanelUI>  ____controlPanelUI;

/// @brief Field _infoPanel, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::VROSC::InfoPanel>  ____infoPanel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TapeRecorderController, ____closeButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderController, ____tapeRecorder) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderController, ____controlPanelUI) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderController, ____infoPanel) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TapeRecorderController, 0xa0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TapeRecorderController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TapeRecorderController*, "VROSC", "TapeRecorderController");
