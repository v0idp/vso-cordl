#pragma once
// IWYU pragma private; include "VROSC/ControlPanelUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ControlPanelUI)
namespace System {
class Action;
}
namespace TMPro {
class TextMeshPro;
}
namespace VROSC {
class InfoPanel;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class TransformMoverRelay;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UIToggle;
}
namespace VROSC {
class WidgetController;
}
// Forward declare root types
namespace VROSC {
class ControlPanelUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ControlPanelUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ControlPanelUI
class CORDL_TYPE ControlPanelUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnClosePressed, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClosePressed, put=__cordl_internal_set_OnClosePressed)) ::System::Action*  OnClosePressed;

 __declspec(property(get=get_TransformMoverRelay)) ::UnityW<::VROSC::TransformMoverRelay>  TransformMoverRelay;

/// @brief Field _closeButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeButton, put=__cordl_internal_set__closeButton)) ::UnityW<::VROSC::UIButton>  _closeButton;

/// @brief Field _header, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__header, put=__cordl_internal_set__header)) ::UnityW<::TMPro::TextMeshPro>  _header;

/// @brief Field _infoButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__infoButton, put=__cordl_internal_set__infoButton)) ::UnityW<::VROSC::UIToggle>  _infoButton;

/// @brief Field _infoPanelUI, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__infoPanelUI, put=__cordl_internal_set__infoPanelUI)) ::UnityW<::VROSC::InfoPanel>  _infoPanelUI;

/// @brief Field _transformMoverRelay, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformMoverRelay, put=__cordl_internal_set__transformMoverRelay)) ::UnityW<::VROSC::TransformMoverRelay>  _transformMoverRelay;

/// @brief Method Awake, addr 0x177fb44, size 0x164, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CloseButtonPressed, addr 0x177ff8c, size 0x1c, virtual false, abstract: false, final false
inline void CloseButtonPressed() ;

/// @brief Method InfoButtonToggled, addr 0x177ff20, size 0x28, virtual false, abstract: false, final false
inline void InfoButtonToggled(::VROSC::InputDevice*  device, bool  isOn) ;

static inline ::VROSC::ControlPanelUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x177fca8, size 0x164, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Setup, addr 0x177fe0c, size 0x114, virtual true, abstract: false, final false
inline void Setup(::VROSC::WidgetController*  widgetController) ;

constexpr ::System::Action* const& __cordl_internal_get_OnClosePressed() const;

constexpr ::System::Action*& __cordl_internal_get_OnClosePressed() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__closeButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__closeButton() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__header() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__header() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__infoButton() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__infoButton() ;

constexpr ::UnityW<::VROSC::InfoPanel> const& __cordl_internal_get__infoPanelUI() const;

constexpr ::UnityW<::VROSC::InfoPanel>& __cordl_internal_get__infoPanelUI() ;

constexpr ::UnityW<::VROSC::TransformMoverRelay> const& __cordl_internal_get__transformMoverRelay() const;

constexpr ::UnityW<::VROSC::TransformMoverRelay>& __cordl_internal_get__transformMoverRelay() ;

constexpr void __cordl_internal_set_OnClosePressed(::System::Action*  value) ;

constexpr void __cordl_internal_set__closeButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__header(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__infoButton(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__infoPanelUI(::UnityW<::VROSC::InfoPanel>  value) ;

constexpr void __cordl_internal_set__transformMoverRelay(::UnityW<::VROSC::TransformMoverRelay>  value) ;

/// @brief Method .ctor, addr 0x177ffa8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TransformMoverRelay, addr 0x177fb3c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::TransformMoverRelay> get_TransformMoverRelay() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControlPanelUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControlPanelUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControlPanelUI(ControlPanelUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControlPanelUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControlPanelUI(ControlPanelUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1305};

/// @brief Field _transformMoverRelay, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::TransformMoverRelay>  ____transformMoverRelay;

/// @brief Field _infoPanelUI, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::InfoPanel>  ____infoPanelUI;

/// @brief Field _infoButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____infoButton;

/// @brief Field _closeButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____closeButton;

/// @brief Field _header, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____header;

/// @brief Field OnClosePressed, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  ___OnClosePressed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ControlPanelUI, ____transformMoverRelay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControlPanelUI, ____infoPanelUI) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControlPanelUI, ____infoButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControlPanelUI, ____closeButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControlPanelUI, ____header) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControlPanelUI, ___OnClosePressed) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ControlPanelUI, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ControlPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ControlPanelUI*, "VROSC", "ControlPanelUI");
