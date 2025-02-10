#pragma once
// IWYU pragma private; include "VROSC/UI/WidgetToggleButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
CORDL_MODULE_EXPORT(WidgetToggleButton)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC::UI {
class UIInteractableColoring;
}
namespace VROSC::UI {
class WidgetToggleMoverRelay;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class TooltipData;
}
namespace VROSC {
class UIToggle;
}
namespace VROSC {
class WidgetController;
}
// Forward declare root types
namespace VROSC::UI {
class WidgetToggleButton;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::WidgetToggleButton);
// Dependencies UnityEngine.MonoBehaviour, VROSC.WidgetSettings::Identifier
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.WidgetToggleButton
class CORDL_TYPE WidgetToggleButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _gripTooltipData, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__gripTooltipData, put=__cordl_internal_set__gripTooltipData)) ::VROSC::TooltipData*  _gripTooltipData;

/// @brief Field _icons, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__icons, put=__cordl_internal_set__icons)) ::ArrayW<::UnityW<::VROSC::UI::UIInteractableColoring>,::Array<::UnityW<::VROSC::UI::UIInteractableColoring>>*>  _icons;

/// @brief Field _id, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__id, put=__cordl_internal_set__id)) ::VROSC::WidgetSettings_Identifier  _id;

/// @brief Field _isActive, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__isActive, put=__cordl_internal_set__isActive)) bool  _isActive;

/// @brief Field _isOnObject, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__isOnObject, put=__cordl_internal_set__isOnObject)) ::UnityW<::UnityEngine::GameObject>  _isOnObject;

/// @brief Field _mover, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__mover, put=__cordl_internal_set__mover)) ::UnityW<::VROSC::UI::WidgetToggleMoverRelay>  _mover;

/// @brief Field _name, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::UnityW<::TMPro::TextMeshPro>  _name;

/// @brief Field _parentPanel, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__parentPanel, put=__cordl_internal_set__parentPanel)) ::UnityW<::UnityEngine::Transform>  _parentPanel;

/// @brief Field _toggle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggle, put=__cordl_internal_set__toggle)) ::UnityW<::VROSC::UIToggle>  _toggle;

/// @brief Field _tooltipDatas, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__tooltipDatas, put=__cordl_internal_set__tooltipDatas)) ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  _tooltipDatas;

/// @brief Field _triggerTooltipData, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__triggerTooltipData, put=__cordl_internal_set__triggerTooltipData)) ::VROSC::TooltipData*  _triggerTooltipData;

/// @brief Field _widgetController, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__widgetController, put=__cordl_internal_set__widgetController)) ::UnityW<::VROSC::WidgetController>  _widgetController;

/// @brief Method Awake, addr 0x17e3acc, size 0xf8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckIfActive, addr 0x17e413c, size 0x68, virtual false, abstract: false, final false
inline void CheckIfActive() ;

static inline ::VROSC::UI::WidgetToggleButton* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17e4238, size 0x1c0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x17e3bc4, size 0x578, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method SynthesizerChanged, addr 0x17e44b0, size 0x124, virtual false, abstract: false, final false
inline void SynthesizerChanged(bool  isExternalSynth) ;

/// @brief Method Toggled, addr 0x17e43f8, size 0x90, virtual false, abstract: false, final false
inline void Toggled(::VROSC::InputDevice*  device, bool  active) ;

/// @brief Method UpdateIsActive, addr 0x17e4488, size 0x28, virtual false, abstract: false, final false
inline void UpdateIsActive(bool  isActive) ;

/// @brief Method UpdateTooltips, addr 0x17e41a4, size 0x94, virtual false, abstract: false, final false
inline void UpdateTooltips(bool  unused) ;

constexpr ::VROSC::TooltipData* const& __cordl_internal_get__gripTooltipData() const;

constexpr ::VROSC::TooltipData*& __cordl_internal_get__gripTooltipData() ;

constexpr ::ArrayW<::UnityW<::VROSC::UI::UIInteractableColoring>,::Array<::UnityW<::VROSC::UI::UIInteractableColoring>>*> const& __cordl_internal_get__icons() const;

constexpr ::ArrayW<::UnityW<::VROSC::UI::UIInteractableColoring>,::Array<::UnityW<::VROSC::UI::UIInteractableColoring>>*>& __cordl_internal_get__icons() ;

constexpr ::VROSC::WidgetSettings_Identifier const& __cordl_internal_get__id() const;

constexpr ::VROSC::WidgetSettings_Identifier& __cordl_internal_get__id() ;

constexpr bool const& __cordl_internal_get__isActive() const;

constexpr bool& __cordl_internal_get__isActive() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__isOnObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__isOnObject() ;

constexpr ::UnityW<::VROSC::UI::WidgetToggleMoverRelay> const& __cordl_internal_get__mover() const;

constexpr ::UnityW<::VROSC::UI::WidgetToggleMoverRelay>& __cordl_internal_get__mover() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__name() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__name() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__parentPanel() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__parentPanel() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__toggle() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__toggle() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::TooltipData*>* const& __cordl_internal_get__tooltipDatas() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*& __cordl_internal_get__tooltipDatas() ;

constexpr ::VROSC::TooltipData* const& __cordl_internal_get__triggerTooltipData() const;

constexpr ::VROSC::TooltipData*& __cordl_internal_get__triggerTooltipData() ;

constexpr ::UnityW<::VROSC::WidgetController> const& __cordl_internal_get__widgetController() const;

constexpr ::UnityW<::VROSC::WidgetController>& __cordl_internal_get__widgetController() ;

constexpr void __cordl_internal_set__gripTooltipData(::VROSC::TooltipData*  value) ;

constexpr void __cordl_internal_set__icons(::ArrayW<::UnityW<::VROSC::UI::UIInteractableColoring>,::Array<::UnityW<::VROSC::UI::UIInteractableColoring>>*>  value) ;

constexpr void __cordl_internal_set__id(::VROSC::WidgetSettings_Identifier  value) ;

constexpr void __cordl_internal_set__isActive(bool  value) ;

constexpr void __cordl_internal_set__isOnObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__mover(::UnityW<::VROSC::UI::WidgetToggleMoverRelay>  value) ;

constexpr void __cordl_internal_set__name(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__parentPanel(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__toggle(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__tooltipDatas(::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  value) ;

constexpr void __cordl_internal_set__triggerTooltipData(::VROSC::TooltipData*  value) ;

constexpr void __cordl_internal_set__widgetController(::UnityW<::VROSC::WidgetController>  value) ;

/// @brief Method .ctor, addr 0x17e45d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WidgetToggleButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WidgetToggleButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WidgetToggleButton(WidgetToggleButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WidgetToggleButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WidgetToggleButton(WidgetToggleButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1600};

/// @brief Field _toggle, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____toggle;

/// @brief Field _name, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____name;

/// @brief Field _id, offset: 0x30, size: 0x4, def value: None
 ::VROSC::WidgetSettings_Identifier  ____id;

/// @brief Field _isOnObject, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____isOnObject;

/// @brief Field _mover, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::WidgetToggleMoverRelay>  ____mover;

/// @brief Field _icons, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::UI::UIInteractableColoring>,::Array<::UnityW<::VROSC::UI::UIInteractableColoring>>*>  ____icons;

/// @brief Field _isActive, offset: 0x50, size: 0x1, def value: None
 bool  ____isActive;

/// @brief Field _widgetController, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::WidgetController>  ____widgetController;

/// @brief Field _parentPanel, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____parentPanel;

/// @brief Field _triggerTooltipData, offset: 0x68, size: 0x8, def value: None
 ::VROSC::TooltipData*  ____triggerTooltipData;

/// @brief Field _gripTooltipData, offset: 0x70, size: 0x8, def value: None
 ::VROSC::TooltipData*  ____gripTooltipData;

/// @brief Field _tooltipDatas, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  ____tooltipDatas;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::WidgetToggleButton, ____toggle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::WidgetToggleButton, ____name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::WidgetToggleButton, ____id) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::WidgetToggleButton, ____isOnObject) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::WidgetToggleButton, ____mover) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::WidgetToggleButton, ____icons) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::WidgetToggleButton, ____isActive) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::WidgetToggleButton, ____widgetController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::WidgetToggleButton, ____parentPanel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::WidgetToggleButton, ____triggerTooltipData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::WidgetToggleButton, ____gripTooltipData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::WidgetToggleButton, ____tooltipDatas) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::WidgetToggleButton, 0x80>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::WidgetToggleButton);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::WidgetToggleButton*, "VROSC.UI", "WidgetToggleButton");
