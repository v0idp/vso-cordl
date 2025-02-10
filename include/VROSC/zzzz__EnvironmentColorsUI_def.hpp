#pragma once
// IWYU pragma private; include "VROSC/EnvironmentColorsUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EnvironmentColorsUI)
namespace VROSC::UI {
struct UISchemeColors;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
class EnvironmentColorsUIPicker;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UISlideToggle;
}
// Forward declare root types
namespace VROSC {
class EnvironmentColorsUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::EnvironmentColorsUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.EnvironmentColorsUI
class CORDL_TYPE EnvironmentColorsUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _accent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__accent, put=__cordl_internal_set__accent)) ::UnityW<::VROSC::EnvironmentColorsUIPicker>  _accent;

/// @brief Field _active, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__active, put=__cordl_internal_set__active)) ::UnityW<::VROSC::EnvironmentColorsUIPicker>  _active;

/// @brief Field _instrument, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrument, put=__cordl_internal_set__instrument)) ::UnityW<::VROSC::EnvironmentColorsUIPicker>  _instrument;

/// @brief Field _overrideOnLoadToggle, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__overrideOnLoadToggle, put=__cordl_internal_set__overrideOnLoadToggle)) ::UnityW<::VROSC::UISlideToggle>  _overrideOnLoadToggle;

/// @brief Field _pickers, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__pickers, put=__cordl_internal_set__pickers)) ::ArrayW<::UnityW<::VROSC::EnvironmentColorsUIPicker>,::Array<::UnityW<::VROSC::EnvironmentColorsUIPicker>>*>  _pickers;

/// @brief Field _primary, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__primary, put=__cordl_internal_set__primary)) ::UnityW<::VROSC::EnvironmentColorsUIPicker>  _primary;

/// @brief Field _resetToDefaultButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__resetToDefaultButton, put=__cordl_internal_set__resetToDefaultButton)) ::UnityW<::VROSC::UIButton>  _resetToDefaultButton;

/// @brief Field _saveColorsButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__saveColorsButton, put=__cordl_internal_set__saveColorsButton)) ::UnityW<::VROSC::UIButton>  _saveColorsButton;

/// @brief Method Awake, addr 0x1743b90, size 0x3e4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ColorsLoaded, addr 0x1744280, size 0x30, virtual false, abstract: false, final false
inline void ColorsLoaded(::VROSC::UI::UISchemeColors  colors) ;

/// @brief Method GetColorsScheme, addr 0x174467c, size 0xa8, virtual false, abstract: false, final false
inline ::VROSC::UI::UISchemeColors GetColorsScheme() ;

static inline ::VROSC::EnvironmentColorsUI* New_ctor() ;

/// @brief Method OnColorsChanged, addr 0x17445d0, size 0xac, virtual false, abstract: false, final false
inline void OnColorsChanged() ;

/// @brief Method OnDestroy, addr 0x1743f74, size 0x30c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x174434c, size 0x200, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OverrideOnLoadToggled, addr 0x1744744, size 0x64, virtual false, abstract: false, final false
inline void OverrideOnLoadToggled(::VROSC::InputDevice*  device, bool  isOn) ;

/// @brief Method ResetToDefaultClicked, addr 0x17447a8, size 0x54, virtual false, abstract: false, final false
inline void ResetToDefaultClicked(::VROSC::ClickData*  clickData) ;

/// @brief Method SetColors, addr 0x17442b0, size 0x9c, virtual false, abstract: false, final false
inline void SetColors(::VROSC::UI::UISchemeColors  schemeColors, bool  triggerEvent) ;

constexpr ::UnityW<::VROSC::EnvironmentColorsUIPicker> const& __cordl_internal_get__accent() const;

constexpr ::UnityW<::VROSC::EnvironmentColorsUIPicker>& __cordl_internal_get__accent() ;

constexpr ::UnityW<::VROSC::EnvironmentColorsUIPicker> const& __cordl_internal_get__active() const;

constexpr ::UnityW<::VROSC::EnvironmentColorsUIPicker>& __cordl_internal_get__active() ;

constexpr ::UnityW<::VROSC::EnvironmentColorsUIPicker> const& __cordl_internal_get__instrument() const;

constexpr ::UnityW<::VROSC::EnvironmentColorsUIPicker>& __cordl_internal_get__instrument() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__overrideOnLoadToggle() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__overrideOnLoadToggle() ;

constexpr ::ArrayW<::UnityW<::VROSC::EnvironmentColorsUIPicker>,::Array<::UnityW<::VROSC::EnvironmentColorsUIPicker>>*> const& __cordl_internal_get__pickers() const;

constexpr ::ArrayW<::UnityW<::VROSC::EnvironmentColorsUIPicker>,::Array<::UnityW<::VROSC::EnvironmentColorsUIPicker>>*>& __cordl_internal_get__pickers() ;

constexpr ::UnityW<::VROSC::EnvironmentColorsUIPicker> const& __cordl_internal_get__primary() const;

constexpr ::UnityW<::VROSC::EnvironmentColorsUIPicker>& __cordl_internal_get__primary() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__resetToDefaultButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__resetToDefaultButton() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__saveColorsButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__saveColorsButton() ;

constexpr void __cordl_internal_set__accent(::UnityW<::VROSC::EnvironmentColorsUIPicker>  value) ;

constexpr void __cordl_internal_set__active(::UnityW<::VROSC::EnvironmentColorsUIPicker>  value) ;

constexpr void __cordl_internal_set__instrument(::UnityW<::VROSC::EnvironmentColorsUIPicker>  value) ;

constexpr void __cordl_internal_set__overrideOnLoadToggle(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__pickers(::ArrayW<::UnityW<::VROSC::EnvironmentColorsUIPicker>,::Array<::UnityW<::VROSC::EnvironmentColorsUIPicker>>*>  value) ;

constexpr void __cordl_internal_set__primary(::UnityW<::VROSC::EnvironmentColorsUIPicker>  value) ;

constexpr void __cordl_internal_set__resetToDefaultButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__saveColorsButton(::UnityW<::VROSC::UIButton>  value) ;

/// @brief Method .ctor, addr 0x17447fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentColorsUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentColorsUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentColorsUI(EnvironmentColorsUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentColorsUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentColorsUI(EnvironmentColorsUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1121};

/// @brief Field _primary, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::EnvironmentColorsUIPicker>  ____primary;

/// @brief Field _active, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::EnvironmentColorsUIPicker>  ____active;

/// @brief Field _accent, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::EnvironmentColorsUIPicker>  ____accent;

/// @brief Field _instrument, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::EnvironmentColorsUIPicker>  ____instrument;

/// @brief Field _overrideOnLoadToggle, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____overrideOnLoadToggle;

/// @brief Field _saveColorsButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____saveColorsButton;

/// @brief Field _resetToDefaultButton, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____resetToDefaultButton;

/// @brief Field _pickers, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::EnvironmentColorsUIPicker>,::Array<::UnityW<::VROSC::EnvironmentColorsUIPicker>>*>  ____pickers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::EnvironmentColorsUI, ____primary) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentColorsUI, ____active) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentColorsUI, ____accent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentColorsUI, ____instrument) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentColorsUI, ____overrideOnLoadToggle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentColorsUI, ____saveColorsButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentColorsUI, ____resetToDefaultButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentColorsUI, ____pickers) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::EnvironmentColorsUI, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::EnvironmentColorsUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EnvironmentColorsUI*, "VROSC", "EnvironmentColorsUI");
