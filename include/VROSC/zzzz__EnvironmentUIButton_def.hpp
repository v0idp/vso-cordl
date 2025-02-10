#pragma once
// IWYU pragma private; include "VROSC/EnvironmentUIButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EnvironmentUIButton)
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class Renderer;
}
namespace VROSC {
class BasicEnvironmentPanelUI;
}
namespace VROSC {
class EnvironmentData;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class UIToggle;
}
// Forward declare root types
namespace VROSC {
class EnvironmentUIButton;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::EnvironmentUIButton);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.EnvironmentUIButton
class CORDL_TYPE EnvironmentUIButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_EnvironmentData)) ::UnityW<::VROSC::EnvironmentData>  EnvironmentData;

/// @brief Field _environmentPanelUI, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__environmentPanelUI, put=__cordl_internal_set__environmentPanelUI)) ::UnityW<::VROSC::BasicEnvironmentPanelUI>  _environmentPanelUI;

/// @brief Field _nameLabel, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__nameLabel, put=__cordl_internal_set__nameLabel)) ::UnityW<::TMPro::TextMeshPro>  _nameLabel;

/// @brief Field _preview, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__preview, put=__cordl_internal_set__preview)) ::UnityW<::UnityEngine::Renderer>  _preview;

/// @brief Field _target, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::VROSC::EnvironmentData>  _target;

/// @brief Field _toggle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggle, put=__cordl_internal_set__toggle)) ::UnityW<::VROSC::UIToggle>  _toggle;

/// @brief Method Awake, addr 0x1737acc, size 0x194, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ButtonPressed, addr 0x1737d40, size 0x28, virtual false, abstract: false, final false
inline void ButtonPressed(::VROSC::InputDevice*  device, bool  toggled) ;

static inline ::VROSC::EnvironmentUIButton* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1737c68, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetActive, addr 0x1737520, size 0xa0, virtual false, abstract: false, final false
inline void SetActive(::VROSC::EnvironmentData*  activeEnvironment) ;

/// @brief Method Setup, addr 0x1737c60, size 0x8, virtual false, abstract: false, final false
inline void Setup(::VROSC::BasicEnvironmentPanelUI*  environmentPanelUI) ;

/// @brief Method SetupForEditor, addr 0x1737d68, size 0x8c, virtual false, abstract: false, final false
inline void SetupForEditor() ;

constexpr ::UnityW<::VROSC::BasicEnvironmentPanelUI> const& __cordl_internal_get__environmentPanelUI() const;

constexpr ::UnityW<::VROSC::BasicEnvironmentPanelUI>& __cordl_internal_get__environmentPanelUI() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__nameLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__nameLabel() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__preview() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__preview() ;

constexpr ::UnityW<::VROSC::EnvironmentData> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::VROSC::EnvironmentData>& __cordl_internal_get__target() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__toggle() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__toggle() ;

constexpr void __cordl_internal_set__environmentPanelUI(::UnityW<::VROSC::BasicEnvironmentPanelUI>  value) ;

constexpr void __cordl_internal_set__nameLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__preview(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::VROSC::EnvironmentData>  value) ;

constexpr void __cordl_internal_set__toggle(::UnityW<::VROSC::UIToggle>  value) ;

/// @brief Method .ctor, addr 0x1737df4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_EnvironmentData, addr 0x1737ac4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::EnvironmentData> get_EnvironmentData() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentUIButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentUIButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentUIButton(EnvironmentUIButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentUIButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentUIButton(EnvironmentUIButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1088};

/// @brief Field _toggle, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____toggle;

/// @brief Field _target, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::EnvironmentData>  ____target;

/// @brief Field _preview, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____preview;

/// @brief Field _nameLabel, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____nameLabel;

/// @brief Field _environmentPanelUI, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::BasicEnvironmentPanelUI>  ____environmentPanelUI;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::EnvironmentUIButton, ____toggle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentUIButton, ____target) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentUIButton, ____preview) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentUIButton, ____nameLabel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentUIButton, ____environmentPanelUI) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::EnvironmentUIButton, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::EnvironmentUIButton);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EnvironmentUIButton*, "VROSC", "EnvironmentUIButton");
