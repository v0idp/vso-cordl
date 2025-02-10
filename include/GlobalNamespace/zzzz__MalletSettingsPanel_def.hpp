#pragma once
// IWYU pragma private; include "GlobalNamespace/MalletSettingsPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MalletSettingsPanel)
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class MinMaxFloat;
}
namespace VROSC {
class UISlider;
}
namespace VROSC {
class UIToggle;
}
// Forward declare root types
namespace GlobalNamespace {
class MalletSettingsPanel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MalletSettingsPanel);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MalletSettingsPanel
class CORDL_TYPE MalletSettingsPanel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _malletsAngleSlider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__malletsAngleSlider, put=__cordl_internal_set__malletsAngleSlider)) ::UnityW<::VROSC::UISlider>  _malletsAngleSlider;

/// @brief Field _malletsLengthSlider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__malletsLengthSlider, put=__cordl_internal_set__malletsLengthSlider)) ::UnityW<::VROSC::UISlider>  _malletsLengthSlider;

/// @brief Field _settingsButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsButton, put=__cordl_internal_set__settingsButton)) ::UnityW<::VROSC::UIToggle>  _settingsButton;

/// @brief Field _settingsUI, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsUI, put=__cordl_internal_set__settingsUI)) ::UnityW<::UnityEngine::GameObject>  _settingsUI;

/// @brief Method AngleChanged, addr 0x16c3c70, size 0x9c, virtual false, abstract: false, final false
inline void AngleChanged(float_t  value) ;

/// @brief Method AngleValueChangedByUI, addr 0x16c41c4, size 0x90, virtual false, abstract: false, final false
inline void AngleValueChangedByUI(float_t  value) ;

/// @brief Method Awake, addr 0x16c3734, size 0x374, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LengthChanged, addr 0x16c3d0c, size 0x9c, virtual false, abstract: false, final false
inline void LengthChanged(float_t  value) ;

/// @brief Method LengthValueChangedByUI, addr 0x16c4254, size 0x90, virtual false, abstract: false, final false
inline void LengthValueChangedByUI(float_t  value) ;

static inline ::GlobalNamespace::MalletSettingsPanel* New_ctor() ;

/// @brief Method OnDestroy, addr 0x16c4060, size 0x164, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x16c3eb0, size 0x190, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x16c3aa8, size 0x1c8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetMalletsValues, addr 0x16c3da8, size 0xa8, virtual false, abstract: false, final false
inline void SetMalletsValues(float_t  malletAngle, float_t  malletLength) ;

/// @brief Method SetSliderValue, addr 0x16c3e50, size 0x60, virtual false, abstract: false, final false
inline void SetSliderValue(::VROSC::UISlider*  slider, float_t  value, ::VROSC::MinMaxFloat*  minMax) ;

/// @brief Method SettingsToggled, addr 0x16c4040, size 0x20, virtual false, abstract: false, final false
inline void SettingsToggled(::VROSC::InputDevice*  device, bool  toggled) ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__malletsAngleSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__malletsAngleSlider() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__malletsLengthSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__malletsLengthSlider() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__settingsButton() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__settingsButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__settingsUI() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__settingsUI() ;

constexpr void __cordl_internal_set__malletsAngleSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__malletsLengthSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__settingsButton(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__settingsUI(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x16c42e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MalletSettingsPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MalletSettingsPanel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MalletSettingsPanel(MalletSettingsPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MalletSettingsPanel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MalletSettingsPanel(MalletSettingsPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{61};

/// @brief Field _settingsButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____settingsButton;

/// @brief Field _settingsUI, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____settingsUI;

/// @brief Field _malletsAngleSlider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____malletsAngleSlider;

/// @brief Field _malletsLengthSlider, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____malletsLengthSlider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MalletSettingsPanel, ____settingsButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MalletSettingsPanel, ____settingsUI) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MalletSettingsPanel, ____malletsAngleSlider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MalletSettingsPanel, ____malletsLengthSlider) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MalletSettingsPanel, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MalletSettingsPanel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MalletSettingsPanel*, "", "MalletSettingsPanel");
