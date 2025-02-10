#pragma once
// IWYU pragma private; include "VROSC/EnvironmentPanelUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__BasicEnvironmentPanelUI_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnvironmentPanelUI)
namespace VROSC {
class EnvironmentColorsUI;
}
namespace VROSC {
class EnvironmentData;
}
namespace VROSC {
class UISlider;
}
// Forward declare root types
namespace VROSC {
class EnvironmentPanelUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::EnvironmentPanelUI);
// Dependencies VROSC.BasicEnvironmentPanelUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.EnvironmentPanelUI
class CORDL_TYPE EnvironmentPanelUI : public ::VROSC::BasicEnvironmentPanelUI {
public:
// Declarations
/// @brief Field _effectSlider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__effectSlider, put=__cordl_internal_set__effectSlider)) ::UnityW<::VROSC::UISlider>  _effectSlider;

/// @brief Field _environmentColorsUI, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__environmentColorsUI, put=__cordl_internal_set__environmentColorsUI)) ::UnityW<::VROSC::EnvironmentColorsUI>  _environmentColorsUI;

/// @brief Method Awake, addr 0x17376fc, size 0xe0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::EnvironmentPanelUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1737884, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x17377dc, size 0xa8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetActiveEnvironment, addr 0x1737a0c, size 0xb0, virtual true, abstract: false, final false
inline void SetActiveEnvironment(::VROSC::EnvironmentData*  newEnvironment) ;

/// @brief Method SetEffectsInput, addr 0x173795c, size 0xb0, virtual false, abstract: false, final false
inline void SetEffectsInput(float_t  amount) ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__effectSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__effectSlider() ;

constexpr ::UnityW<::VROSC::EnvironmentColorsUI> const& __cordl_internal_get__environmentColorsUI() const;

constexpr ::UnityW<::VROSC::EnvironmentColorsUI>& __cordl_internal_get__environmentColorsUI() ;

constexpr void __cordl_internal_set__effectSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__environmentColorsUI(::UnityW<::VROSC::EnvironmentColorsUI>  value) ;

/// @brief Method .ctor, addr 0x1737abc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentPanelUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentPanelUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentPanelUI(EnvironmentPanelUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentPanelUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentPanelUI(EnvironmentPanelUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1087};

/// @brief Field _effectSlider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____effectSlider;

/// @brief Field _environmentColorsUI, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::EnvironmentColorsUI>  ____environmentColorsUI;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::EnvironmentPanelUI, ____effectSlider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentPanelUI, ____environmentColorsUI) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::EnvironmentPanelUI, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::EnvironmentPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EnvironmentPanelUI*, "VROSC", "EnvironmentPanelUI");
