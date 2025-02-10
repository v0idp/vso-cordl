#pragma once
// IWYU pragma private; include "VROSC/ControllerComponent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__HighlightControllerComponents_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ControllerComponent)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC {
class ControllerComponent_TooltipRequest;
}
namespace VROSC {
class ControllerHintUI;
}
namespace VROSC {
struct HighlightControllerComponents_Component;
}
namespace VROSC {
class TooltipData;
}
namespace VROSC {
struct TriggerButton;
}
// Forward declare root types
namespace VROSC {
class ControllerComponent;
}
namespace VROSC {
class ControllerComponent_TooltipRequest;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ControllerComponent);
MARK_REF_PTR_T(::VROSC::ControllerComponent_TooltipRequest);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ControllerComponent/TooltipRequest
class CORDL_TYPE ControllerComponent_TooltipRequest : public ::System::Object {
public:
// Declarations
/// @brief Field Requester, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Requester, put=__cordl_internal_set_Requester)) ::System::Object*  Requester;

/// @brief Field Tooltip, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tooltip, put=__cordl_internal_set_Tooltip)) ::VROSC::TooltipData*  Tooltip;

static inline ::VROSC::ControllerComponent_TooltipRequest* New_ctor(::VROSC::TooltipData*  tooltip, ::System::Object*  requester) ;

constexpr ::System::Object* const& __cordl_internal_get_Requester() const;

constexpr ::System::Object*& __cordl_internal_get_Requester() ;

constexpr ::VROSC::TooltipData* const& __cordl_internal_get_Tooltip() const;

constexpr ::VROSC::TooltipData*& __cordl_internal_get_Tooltip() ;

constexpr void __cordl_internal_set_Requester(::System::Object*  value) ;

constexpr void __cordl_internal_set_Tooltip(::VROSC::TooltipData*  value) ;

/// @brief Method .ctor, addr 0x17327b4, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::VROSC::TooltipData*  tooltip, ::System::Object*  requester) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerComponent_TooltipRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerComponent_TooltipRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerComponent_TooltipRequest(ControllerComponent_TooltipRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerComponent_TooltipRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerComponent_TooltipRequest(ControllerComponent_TooltipRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1065};

/// @brief Field Tooltip, offset: 0x10, size: 0x8, def value: None
 ::VROSC::TooltipData*  ___Tooltip;

/// @brief Field Requester, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___Requester;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ControllerComponent_TooltipRequest, ___Tooltip) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerComponent_TooltipRequest, ___Requester) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ControllerComponent_TooltipRequest, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, VROSC.HighlightControllerComponents::Component, VROSC.TriggerButton
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ControllerComponent
class CORDL_TYPE ControllerComponent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TooltipRequest = ::VROSC::ControllerComponent_TooltipRequest;

 __declspec(property(get=get_ComponentType)) ::VROSC::HighlightControllerComponents_Component  ComponentType;

 __declspec(property(get=get_CurrentColor, put=set_CurrentColor)) ::UnityEngine::Color  CurrentColor;

 __declspec(property(get=get_TriggerButton)) ::VROSC::TriggerButton  TriggerButton;

/// @brief Field <CurrentColor>k__BackingField, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__CurrentColor_k__BackingField, put=__cordl_internal_set__CurrentColor_k__BackingField)) ::UnityEngine::Color  _CurrentColor_k__BackingField;

/// @brief Field _componentType, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__componentType, put=__cordl_internal_set__componentType)) ::VROSC::HighlightControllerComponents_Component  _componentType;

/// @brief Field _hintUI, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__hintUI, put=__cordl_internal_set__hintUI)) ::UnityW<::VROSC::ControllerHintUI>  _hintUI;

/// @brief Field _pressing, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__pressing, put=__cordl_internal_set__pressing)) float_t  _pressing;

/// @brief Field _tooltipActive, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__tooltipActive, put=__cordl_internal_set__tooltipActive)) bool  _tooltipActive;

/// @brief Field _tooltipRequests, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__tooltipRequests, put=__cordl_internal_set__tooltipRequests)) ::System::Collections::Generic::List_1<::VROSC::ControllerComponent_TooltipRequest*>*  _tooltipRequests;

/// @brief Field _triggerButton, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__triggerButton, put=__cordl_internal_set__triggerButton)) ::VROSC::TriggerButton  _triggerButton;

/// @brief Method ClearTooltip, addr 0x1732904, size 0x6c, virtual false, abstract: false, final false
inline void ClearTooltip() ;

/// @brief Method GetColor, addr 0x1732aac, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor() ;

static inline ::VROSC::ControllerComponent* New_ctor() ;

/// @brief Method SetButtonColor, addr 0x1732b14, size 0xc, virtual false, abstract: false, final false
inline void SetButtonColor(::UnityEngine::Color  color) ;

/// @brief Method SetPressing, addr 0x1732b20, size 0x20, virtual false, abstract: false, final false
inline void SetPressing(float_t  pressing) ;

/// @brief Method SetTooltipActive, addr 0x17324d4, size 0x2e0, virtual false, abstract: false, final false
inline void SetTooltipActive(bool  active, ::VROSC::TooltipData*  tooltip, ::System::Object*  requester) ;

/// @brief Method SetType, addr 0x1732b40, size 0x8, virtual false, abstract: false, final false
inline void SetType(::VROSC::HighlightControllerComponents_Component  componentType, ::VROSC::TriggerButton  triggerButton) ;

/// @brief Method UpdateTooltipDisplay, addr 0x17327e0, size 0x124, virtual false, abstract: false, final false
inline void UpdateTooltipDisplay() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__CurrentColor_k__BackingField() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__CurrentColor_k__BackingField() ;

constexpr ::VROSC::HighlightControllerComponents_Component const& __cordl_internal_get__componentType() const;

constexpr ::VROSC::HighlightControllerComponents_Component& __cordl_internal_get__componentType() ;

constexpr ::UnityW<::VROSC::ControllerHintUI> const& __cordl_internal_get__hintUI() const;

constexpr ::UnityW<::VROSC::ControllerHintUI>& __cordl_internal_get__hintUI() ;

constexpr float_t const& __cordl_internal_get__pressing() const;

constexpr float_t& __cordl_internal_get__pressing() ;

constexpr bool const& __cordl_internal_get__tooltipActive() const;

constexpr bool& __cordl_internal_get__tooltipActive() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::ControllerComponent_TooltipRequest*>* const& __cordl_internal_get__tooltipRequests() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::ControllerComponent_TooltipRequest*>*& __cordl_internal_get__tooltipRequests() ;

constexpr ::VROSC::TriggerButton const& __cordl_internal_get__triggerButton() const;

constexpr ::VROSC::TriggerButton& __cordl_internal_get__triggerButton() ;

constexpr void __cordl_internal_set__CurrentColor_k__BackingField(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__componentType(::VROSC::HighlightControllerComponents_Component  value) ;

constexpr void __cordl_internal_set__hintUI(::UnityW<::VROSC::ControllerHintUI>  value) ;

constexpr void __cordl_internal_set__pressing(float_t  value) ;

constexpr void __cordl_internal_set__tooltipActive(bool  value) ;

constexpr void __cordl_internal_set__tooltipRequests(::System::Collections::Generic::List_1<::VROSC::ControllerComponent_TooltipRequest*>*  value) ;

constexpr void __cordl_internal_set__triggerButton(::VROSC::TriggerButton  value) ;

/// @brief Method .ctor, addr 0x1732430, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ComponentType, addr 0x17324c4, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::HighlightControllerComponents_Component get_ComponentType() ;

/// @brief Method get_CurrentColor, addr 0x17324b8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_CurrentColor() ;

/// @brief Method get_TriggerButton, addr 0x17324cc, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::TriggerButton get_TriggerButton() ;

/// @brief Method set_CurrentColor, addr 0x17324ac, size 0xc, virtual false, abstract: false, final false
inline void set_CurrentColor(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerComponent(ControllerComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerComponent(ControllerComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1066};

/// @brief Field <CurrentColor>k__BackingField, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ____CurrentColor_k__BackingField;

/// @brief Field _hintUI, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::ControllerHintUI>  ____hintUI;

/// @brief Field _componentType, offset: 0x38, size: 0x4, def value: None
 ::VROSC::HighlightControllerComponents_Component  ____componentType;

/// @brief Field _triggerButton, offset: 0x3c, size: 0x4, def value: None
 ::VROSC::TriggerButton  ____triggerButton;

/// @brief Field _tooltipActive, offset: 0x40, size: 0x1, def value: None
 bool  ____tooltipActive;

/// @brief Field _pressing, offset: 0x44, size: 0x4, def value: None
 float_t  ____pressing;

/// @brief Field _tooltipRequests, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::ControllerComponent_TooltipRequest*>*  ____tooltipRequests;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ControllerComponent, ____CurrentColor_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerComponent, ____hintUI) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerComponent, ____componentType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerComponent, ____triggerButton) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerComponent, ____tooltipActive) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerComponent, ____pressing) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerComponent, ____tooltipRequests) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ControllerComponent, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ControllerComponent);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ControllerComponent*, "VROSC", "ControllerComponent");
NEED_NO_BOX(::VROSC::ControllerComponent_TooltipRequest);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ControllerComponent_TooltipRequest*, "VROSC", "ControllerComponent/TooltipRequest");
