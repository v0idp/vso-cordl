#pragma once
// IWYU pragma private; include "VROSC/Mallet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Mallet)
namespace UnityEngine {
class Transform;
}
namespace VROSC::UI {
class UIColorGetter;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class MalletAnimator;
}
namespace VROSC {
class MalletGrabbing;
}
namespace VROSC {
class MalletVisual;
}
namespace VROSC {
class PredictiveHitter;
}
// Forward declare root types
namespace VROSC {
class Mallet;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Mallet);
// Dependencies UnityEngine.MonoBehaviour, VROSC.TriggerButton
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Mallet
class CORDL_TYPE Mallet : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active, put=set_Active)) bool  Active;

 __declspec(property(get=get_InputDevice, put=set_InputDevice)) ::UnityW<::VROSC::InputDevice>  InputDevice;

 __declspec(property(get=get_InteractionPoint)) ::UnityW<::UnityEngine::Transform>  InteractionPoint;

 __declspec(property(get=get_PredictiveHitter)) ::UnityW<::VROSC::PredictiveHitter>  PredictiveHitter;

/// @brief Field <Active>k__BackingField, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__Active_k__BackingField, put=__cordl_internal_set__Active_k__BackingField)) bool  _Active_k__BackingField;

/// @brief Field <InputDevice>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__InputDevice_k__BackingField, put=__cordl_internal_set__InputDevice_k__BackingField)) ::UnityW<::VROSC::InputDevice>  _InputDevice_k__BackingField;

/// @brief Field _animator, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__animator, put=__cordl_internal_set__animator)) ::UnityW<::VROSC::MalletAnimator>  _animator;

/// @brief Field _colorGetter, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorGetter, put=__cordl_internal_set__colorGetter)) ::UnityW<::VROSC::UI::UIColorGetter>  _colorGetter;

/// @brief Field _grabbing, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbing, put=__cordl_internal_set__grabbing)) ::UnityW<::VROSC::MalletGrabbing>  _grabbing;

/// @brief Field _holdingButton, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__holdingButton, put=__cordl_internal_set__holdingButton)) ::VROSC::TriggerButton  _holdingButton;

/// @brief Field _malletVisual, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__malletVisual, put=__cordl_internal_set__malletVisual)) ::UnityW<::VROSC::MalletVisual>  _malletVisual;

/// @brief Field _predictiveHitter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__predictiveHitter, put=__cordl_internal_set__predictiveHitter)) ::UnityW<::VROSC::PredictiveHitter>  _predictiveHitter;

/// @brief Field _stick, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__stick, put=__cordl_internal_set__stick)) ::UnityW<::UnityEngine::Transform>  _stick;

/// @brief Method AnimationFinished, addr 0x1718aec, size 0x4c, virtual false, abstract: false, final false
inline void AnimationFinished(bool  malletsActive) ;

/// @brief Method Awake, addr 0x1718708, size 0xd8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ColorChanged, addr 0x1718ab4, size 0x38, virtual false, abstract: false, final false
inline void ColorChanged() ;

/// @brief Method Drop, addr 0x1718a94, size 0x20, virtual false, abstract: false, final false
inline void Drop(::VROSC::ClickData*  clickData) ;

/// @brief Method Grab, addr 0x17189e8, size 0xac, virtual false, abstract: false, final false
inline void Grab(::VROSC::ClickData*  clickData) ;

static inline ::VROSC::Mallet* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17187e0, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1718c40, size 0x108, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1718b38, size 0x108, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetActive, addr 0x17188ec, size 0x88, virtual false, abstract: false, final false
inline void SetActive(bool  shouldUseMallets) ;

/// @brief Method SetAngle, addr 0x17189cc, size 0x1c, virtual false, abstract: false, final false
inline void SetAngle(float_t  angle) ;

/// @brief Method SetLength, addr 0x1718974, size 0x58, virtual false, abstract: false, final false
inline void SetLength(float_t  length) ;

/// @brief Method Setup, addr 0x17188b8, size 0x34, virtual false, abstract: false, final false
inline void Setup(::VROSC::InputDevice*  inputDevice) ;

constexpr bool const& __cordl_internal_get__Active_k__BackingField() const;

constexpr bool& __cordl_internal_get__Active_k__BackingField() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__InputDevice_k__BackingField() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__InputDevice_k__BackingField() ;

constexpr ::UnityW<::VROSC::MalletAnimator> const& __cordl_internal_get__animator() const;

constexpr ::UnityW<::VROSC::MalletAnimator>& __cordl_internal_get__animator() ;

constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& __cordl_internal_get__colorGetter() const;

constexpr ::UnityW<::VROSC::UI::UIColorGetter>& __cordl_internal_get__colorGetter() ;

constexpr ::UnityW<::VROSC::MalletGrabbing> const& __cordl_internal_get__grabbing() const;

constexpr ::UnityW<::VROSC::MalletGrabbing>& __cordl_internal_get__grabbing() ;

constexpr ::VROSC::TriggerButton const& __cordl_internal_get__holdingButton() const;

constexpr ::VROSC::TriggerButton& __cordl_internal_get__holdingButton() ;

constexpr ::UnityW<::VROSC::MalletVisual> const& __cordl_internal_get__malletVisual() const;

constexpr ::UnityW<::VROSC::MalletVisual>& __cordl_internal_get__malletVisual() ;

constexpr ::UnityW<::VROSC::PredictiveHitter> const& __cordl_internal_get__predictiveHitter() const;

constexpr ::UnityW<::VROSC::PredictiveHitter>& __cordl_internal_get__predictiveHitter() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__stick() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__stick() ;

constexpr void __cordl_internal_set__Active_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__InputDevice_k__BackingField(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__animator(::UnityW<::VROSC::MalletAnimator>  value) ;

constexpr void __cordl_internal_set__colorGetter(::UnityW<::VROSC::UI::UIColorGetter>  value) ;

constexpr void __cordl_internal_set__grabbing(::UnityW<::VROSC::MalletGrabbing>  value) ;

constexpr void __cordl_internal_set__holdingButton(::VROSC::TriggerButton  value) ;

constexpr void __cordl_internal_set__malletVisual(::UnityW<::VROSC::MalletVisual>  value) ;

constexpr void __cordl_internal_set__predictiveHitter(::UnityW<::VROSC::PredictiveHitter>  value) ;

constexpr void __cordl_internal_set__stick(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1718d48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0x17186f4, size 0x8, virtual false, abstract: false, final false
inline bool get_Active() ;

/// @brief Method get_InputDevice, addr 0x17186c0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::InputDevice> get_InputDevice() ;

/// @brief Method get_InteractionPoint, addr 0x17186d0, size 0x1c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_InteractionPoint() ;

/// @brief Method get_PredictiveHitter, addr 0x17186ec, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::PredictiveHitter> get_PredictiveHitter() ;

/// @brief Method set_Active, addr 0x17186fc, size 0xc, virtual false, abstract: false, final false
inline void set_Active(bool  value) ;

/// @brief Method set_InputDevice, addr 0x17186c8, size 0x8, virtual false, abstract: false, final false
inline void set_InputDevice(::VROSC::InputDevice*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Mallet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Mallet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Mallet(Mallet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Mallet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Mallet(Mallet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{919};

/// @brief Field _stick, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____stick;

/// @brief Field _malletVisual, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::MalletVisual>  ____malletVisual;

/// @brief Field _predictiveHitter, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::PredictiveHitter>  ____predictiveHitter;

/// @brief Field _grabbing, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::MalletGrabbing>  ____grabbing;

/// @brief Field _animator, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::MalletAnimator>  ____animator;

/// @brief Field _colorGetter, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIColorGetter>  ____colorGetter;

/// @brief Field _holdingButton, offset: 0x50, size: 0x4, def value: None
 ::VROSC::TriggerButton  ____holdingButton;

/// @brief Field <InputDevice>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____InputDevice_k__BackingField;

/// @brief Field <Active>k__BackingField, offset: 0x60, size: 0x1, def value: None
 bool  ____Active_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Mallet, ____stick) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::Mallet, ____malletVisual) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::Mallet, ____predictiveHitter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::Mallet, ____grabbing) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::Mallet, ____animator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::Mallet, ____colorGetter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::Mallet, ____holdingButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::Mallet, ____InputDevice_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::Mallet, ____Active_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Mallet, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::Mallet);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Mallet*, "VROSC", "Mallet");
