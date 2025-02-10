#pragma once
// IWYU pragma private; include "VROSC/HighlightControllerComponents.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HighlightControllerComponents)
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC {
class ControllerComponent;
}
namespace VROSC {
class ControllerShaderEffects;
}
namespace VROSC {
struct HighlightControllerComponents_Component;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class TooltipData;
}
namespace VROSC {
struct TriggerButton;
}
// Forward declare root types
namespace VROSC {
struct HighlightControllerComponents_Component;
}
namespace VROSC {
class HighlightControllerComponents;
}
// Write type traits
MARK_VAL_T(::VROSC::HighlightControllerComponents_Component);
MARK_REF_PTR_T(::VROSC::HighlightControllerComponents);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.HighlightControllerComponents/Component
struct CORDL_TYPE HighlightControllerComponents_Component {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HighlightControllerComponents_Component_Unwrapped
enum struct __HighlightControllerComponents_Component_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Trigger = static_cast<int32_t>(0x1),
__E_Grip = static_cast<int32_t>(0x2),
__E_ThumbStick = static_cast<int32_t>(0x3),
__E_TopButton = static_cast<int32_t>(0x4),
__E_BottomButton = static_cast<int32_t>(0x5),
__E_MenuButton = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HighlightControllerComponents_Component_Unwrapped () const noexcept {
return static_cast<__HighlightControllerComponents_Component_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HighlightControllerComponents_Component() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HighlightControllerComponents_Component(int32_t  value__) noexcept;

/// @brief Field BottomButton value: I32(5)
static ::VROSC::HighlightControllerComponents_Component const BottomButton;

/// @brief Field Grip value: I32(2)
static ::VROSC::HighlightControllerComponents_Component const Grip;

/// @brief Field MenuButton value: I32(6)
static ::VROSC::HighlightControllerComponents_Component const MenuButton;

/// @brief Field None value: I32(0)
static ::VROSC::HighlightControllerComponents_Component const None;

/// @brief Field ThumbStick value: I32(3)
static ::VROSC::HighlightControllerComponents_Component const ThumbStick;

/// @brief Field TopButton value: I32(4)
static ::VROSC::HighlightControllerComponents_Component const TopButton;

/// @brief Field Trigger value: I32(1)
static ::VROSC::HighlightControllerComponents_Component const Trigger;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1074};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::HighlightControllerComponents_Component, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::HighlightControllerComponents_Component, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, VROSC.HandType
namespace VROSC {
// Is value type: false
// CS Name: VROSC.HighlightControllerComponents
class CORDL_TYPE HighlightControllerComponents : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Component = ::VROSC::HighlightControllerComponents_Component;

 __declspec(property(get=get_AllButtons)) ::ArrayW<::UnityW<::VROSC::ControllerComponent>,::Array<::UnityW<::VROSC::ControllerComponent>>*>  AllButtons;

 __declspec(property(get=get_GetControllerComponent, put=set_GetControllerComponent)) ::System::Object*  GetControllerComponent;

/// @brief Field <GetControllerComponent>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__GetControllerComponent_k__BackingField, put=__cordl_internal_set__GetControllerComponent_k__BackingField)) ::System::Object*  _GetControllerComponent_k__BackingField;

/// @brief Field _allButtons, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__allButtons, put=__cordl_internal_set__allButtons)) ::ArrayW<::UnityW<::VROSC::ControllerComponent>,::Array<::UnityW<::VROSC::ControllerComponent>>*>  _allButtons;

/// @brief Field _bottomButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__bottomButton, put=__cordl_internal_set__bottomButton)) ::UnityW<::VROSC::ControllerComponent>  _bottomButton;

/// @brief Field _dirty, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get__dirty, put=__cordl_internal_set__dirty)) bool  _dirty;

/// @brief Field _gripButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__gripButton, put=__cordl_internal_set__gripButton)) ::UnityW<::VROSC::ControllerComponent>  _gripButton;

/// @brief Field _hand, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::VROSC::HandType  _hand;

/// @brief Field _menuButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__menuButton, put=__cordl_internal_set__menuButton)) ::UnityW<::VROSC::ControllerComponent>  _menuButton;

/// @brief Field _shaderEffects, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__shaderEffects, put=__cordl_internal_set__shaderEffects)) ::UnityW<::VROSC::ControllerShaderEffects>  _shaderEffects;

/// @brief Field _thumbstick, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__thumbstick, put=__cordl_internal_set__thumbstick)) ::UnityW<::VROSC::ControllerComponent>  _thumbstick;

/// @brief Field _topButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__topButton, put=__cordl_internal_set__topButton)) ::UnityW<::VROSC::ControllerComponent>  _topButton;

/// @brief Field _triggerButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__triggerButton, put=__cordl_internal_set__triggerButton)) ::UnityW<::VROSC::ControllerComponent>  _triggerButton;

/// @brief Method Awake, addr 0x17341d0, size 0x170, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ButtonPressing, addr 0x1734800, size 0xc4, virtual false, abstract: false, final false
inline void ButtonPressing(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  trigger) ;

/// @brief Method ButtonStoppedPressing, addr 0x17346e4, size 0xc0, virtual false, abstract: false, final false
inline void ButtonStoppedPressing(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  trigger) ;

/// @brief Method DeactivateAll, addr 0x17344e8, size 0x5c, virtual false, abstract: false, final false
inline void DeactivateAll() ;

/// @brief Method GetComponentByEnum, addr 0x1734a2c, size 0x5c, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::ControllerComponent> GetComponentByEnum(::VROSC::HighlightControllerComponents_Component  component) ;

/// @brief Method GetComponentByTriggerType, addr 0x17347a4, size 0x5c, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::ControllerComponent> GetComponentByTriggerType(::VROSC::TriggerButton  trigger) ;

static inline ::VROSC::HighlightControllerComponents* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1734544, size 0x1a0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetActive, addr 0x1734978, size 0xb4, virtual false, abstract: false, final false
inline void SetActive(::VROSC::TooltipData*  tooltip, bool  active, ::System::Object*  requester) ;

/// @brief Method SetButtonColor, addr 0x17348c4, size 0xb4, virtual false, abstract: false, final false
inline void SetButtonColor(::VROSC::TriggerButton  button, ::UnityEngine::Color  color) ;

/// @brief Method Start, addr 0x1734340, size 0x1a8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Transfer, addr 0x1734b8c, size 0x34, virtual false, abstract: false, final false
inline void Transfer() ;

/// @brief Method TransferIndex, addr 0x1734d78, size 0x34, virtual false, abstract: false, final false
inline void TransferIndex() ;

/// @brief Method TransferShared, addr 0x1734bc0, size 0x1b8, virtual false, abstract: false, final false
inline void TransferShared() ;

/// @brief Method Update, addr 0x1734a88, size 0x20, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateShaderEffects, addr 0x1734aa8, size 0xe4, virtual false, abstract: false, final false
inline void UpdateShaderEffects() ;

constexpr ::System::Object* const& __cordl_internal_get__GetControllerComponent_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__GetControllerComponent_k__BackingField() ;

constexpr ::ArrayW<::UnityW<::VROSC::ControllerComponent>,::Array<::UnityW<::VROSC::ControllerComponent>>*> const& __cordl_internal_get__allButtons() const;

constexpr ::ArrayW<::UnityW<::VROSC::ControllerComponent>,::Array<::UnityW<::VROSC::ControllerComponent>>*>& __cordl_internal_get__allButtons() ;

constexpr ::UnityW<::VROSC::ControllerComponent> const& __cordl_internal_get__bottomButton() const;

constexpr ::UnityW<::VROSC::ControllerComponent>& __cordl_internal_get__bottomButton() ;

constexpr bool const& __cordl_internal_get__dirty() const;

constexpr bool& __cordl_internal_get__dirty() ;

constexpr ::UnityW<::VROSC::ControllerComponent> const& __cordl_internal_get__gripButton() const;

constexpr ::UnityW<::VROSC::ControllerComponent>& __cordl_internal_get__gripButton() ;

constexpr ::VROSC::HandType const& __cordl_internal_get__hand() const;

constexpr ::VROSC::HandType& __cordl_internal_get__hand() ;

constexpr ::UnityW<::VROSC::ControllerComponent> const& __cordl_internal_get__menuButton() const;

constexpr ::UnityW<::VROSC::ControllerComponent>& __cordl_internal_get__menuButton() ;

constexpr ::UnityW<::VROSC::ControllerShaderEffects> const& __cordl_internal_get__shaderEffects() const;

constexpr ::UnityW<::VROSC::ControllerShaderEffects>& __cordl_internal_get__shaderEffects() ;

constexpr ::UnityW<::VROSC::ControllerComponent> const& __cordl_internal_get__thumbstick() const;

constexpr ::UnityW<::VROSC::ControllerComponent>& __cordl_internal_get__thumbstick() ;

constexpr ::UnityW<::VROSC::ControllerComponent> const& __cordl_internal_get__topButton() const;

constexpr ::UnityW<::VROSC::ControllerComponent>& __cordl_internal_get__topButton() ;

constexpr ::UnityW<::VROSC::ControllerComponent> const& __cordl_internal_get__triggerButton() const;

constexpr ::UnityW<::VROSC::ControllerComponent>& __cordl_internal_get__triggerButton() ;

constexpr void __cordl_internal_set__GetControllerComponent_k__BackingField(::System::Object*  value) ;

constexpr void __cordl_internal_set__allButtons(::ArrayW<::UnityW<::VROSC::ControllerComponent>,::Array<::UnityW<::VROSC::ControllerComponent>>*>  value) ;

constexpr void __cordl_internal_set__bottomButton(::UnityW<::VROSC::ControllerComponent>  value) ;

constexpr void __cordl_internal_set__dirty(bool  value) ;

constexpr void __cordl_internal_set__gripButton(::UnityW<::VROSC::ControllerComponent>  value) ;

constexpr void __cordl_internal_set__hand(::VROSC::HandType  value) ;

constexpr void __cordl_internal_set__menuButton(::UnityW<::VROSC::ControllerComponent>  value) ;

constexpr void __cordl_internal_set__shaderEffects(::UnityW<::VROSC::ControllerShaderEffects>  value) ;

constexpr void __cordl_internal_set__thumbstick(::UnityW<::VROSC::ControllerComponent>  value) ;

constexpr void __cordl_internal_set__topButton(::UnityW<::VROSC::ControllerComponent>  value) ;

constexpr void __cordl_internal_set__triggerButton(::UnityW<::VROSC::ControllerComponent>  value) ;

/// @brief Method .ctor, addr 0x1734dac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AllButtons, addr 0x17341b8, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::VROSC::ControllerComponent>,::Array<::UnityW<::VROSC::ControllerComponent>>*> get_AllButtons() ;

/// @brief Method get_GetControllerComponent, addr 0x17341c0, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_GetControllerComponent() ;

/// @brief Method set_GetControllerComponent, addr 0x17341c8, size 0x8, virtual false, abstract: false, final false
inline void set_GetControllerComponent(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HighlightControllerComponents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HighlightControllerComponents", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HighlightControllerComponents(HighlightControllerComponents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HighlightControllerComponents", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HighlightControllerComponents(HighlightControllerComponents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1075};

/// @brief Field _allButtons, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::ControllerComponent>,::Array<::UnityW<::VROSC::ControllerComponent>>*>  ____allButtons;

/// @brief Field _triggerButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::ControllerComponent>  ____triggerButton;

/// @brief Field _gripButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::ControllerComponent>  ____gripButton;

/// @brief Field _thumbstick, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::ControllerComponent>  ____thumbstick;

/// @brief Field _topButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::ControllerComponent>  ____topButton;

/// @brief Field _bottomButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::ControllerComponent>  ____bottomButton;

/// @brief Field _menuButton, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::ControllerComponent>  ____menuButton;

/// @brief Field _shaderEffects, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::ControllerShaderEffects>  ____shaderEffects;

/// @brief Field _hand, offset: 0x60, size: 0x4, def value: None
 ::VROSC::HandType  ____hand;

/// @brief Field _dirty, offset: 0x64, size: 0x1, def value: None
 bool  ____dirty;

/// @brief Field <GetControllerComponent>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::System::Object*  ____GetControllerComponent_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::HighlightControllerComponents, ____allButtons) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightControllerComponents, ____triggerButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightControllerComponents, ____gripButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightControllerComponents, ____thumbstick) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightControllerComponents, ____topButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightControllerComponents, ____bottomButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightControllerComponents, ____menuButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightControllerComponents, ____shaderEffects) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightControllerComponents, ____hand) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightControllerComponents, ____dirty) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::HighlightControllerComponents, ____GetControllerComponent_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::HighlightControllerComponents, 0x70>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HighlightControllerComponents_Component, "VROSC", "HighlightControllerComponents/Component");
NEED_NO_BOX(::VROSC::HighlightControllerComponents);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HighlightControllerComponents*, "VROSC", "HighlightControllerComponents");
