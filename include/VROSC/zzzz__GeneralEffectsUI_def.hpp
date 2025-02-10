#pragma once
// IWYU pragma private; include "VROSC/GeneralEffectsUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__BaseEffectsUI_def.hpp"
CORDL_MODULE_EXPORT(GeneralEffectsUI)
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class SynthController;
}
namespace VROSC {
class UISlideToggle;
}
// Forward declare root types
namespace VROSC {
class GeneralEffectsUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::GeneralEffectsUI);
// Dependencies VROSC.BaseEffectsUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.GeneralEffectsUI
class CORDL_TYPE GeneralEffectsUI : public ::VROSC::BaseEffectsUI {
public:
// Declarations
/// @brief Field _linkHandsButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__linkHandsButton, put=__cordl_internal_set__linkHandsButton)) ::UnityW<::VROSC::UISlideToggle>  _linkHandsButton;

/// @brief Field _monophonicToggle, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__monophonicToggle, put=__cordl_internal_set__monophonicToggle)) ::UnityW<::VROSC::UISlideToggle>  _monophonicToggle;

/// @brief Method CheckIfDirty, addr 0x178d6b0, size 0x170, virtual true, abstract: false, final false
inline void CheckIfDirty() ;

/// @brief Method LoadPatchValues, addr 0x178d578, size 0x138, virtual true, abstract: false, final false
inline void LoadPatchValues() ;

static inline ::VROSC::GeneralEffectsUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x178d40c, size 0x16c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ResetPressed, addr 0x178d9d8, size 0xd8, virtual true, abstract: false, final false
inline void ResetPressed() ;

/// @brief Method Setup, addr 0x178d1f8, size 0x214, virtual true, abstract: false, final false
inline void Setup(::VROSC::SynthController*  instrument) ;

/// @brief Method ToggleLinkHands, addr 0x178d8dc, size 0xfc, virtual false, abstract: false, final false
inline void ToggleLinkHands(::VROSC::InputDevice*  device, bool  linkHands) ;

/// @brief Method ToggleMonophonic, addr 0x178d820, size 0xbc, virtual false, abstract: false, final false
inline void ToggleMonophonic(::VROSC::InputDevice*  device, bool  isOn) ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__linkHandsButton() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__linkHandsButton() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__monophonicToggle() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__monophonicToggle() ;

constexpr void __cordl_internal_set__linkHandsButton(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__monophonicToggle(::UnityW<::VROSC::UISlideToggle>  value) ;

/// @brief Method .ctor, addr 0x178dab0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GeneralEffectsUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GeneralEffectsUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GeneralEffectsUI(GeneralEffectsUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeneralEffectsUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeneralEffectsUI(GeneralEffectsUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1330};

/// @brief Field _monophonicToggle, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____monophonicToggle;

/// @brief Field _linkHandsButton, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____linkHandsButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GeneralEffectsUI, ____monophonicToggle) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::GeneralEffectsUI, ____linkHandsButton) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GeneralEffectsUI, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::GeneralEffectsUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GeneralEffectsUI*, "VROSC", "GeneralEffectsUI");
