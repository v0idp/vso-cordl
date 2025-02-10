#pragma once
// IWYU pragma private; include "VROSC/BaseEffectsUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BaseEffectsUI)
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class InternalSynthesizer;
}
namespace VROSC {
class SynthController;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UISlideToggle;
}
// Forward declare root types
namespace VROSC {
class BaseEffectsUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::BaseEffectsUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.BaseEffectsUI
class CORDL_TYPE BaseEffectsUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsDirty, put=set_IsDirty)) bool  IsDirty;

/// @brief Field _instrument, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrument, put=__cordl_internal_set__instrument)) ::UnityW<::VROSC::SynthController>  _instrument;

/// @brief Field _internalSynthesizer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__internalSynthesizer, put=__cordl_internal_set__internalSynthesizer)) ::UnityW<::VROSC::InternalSynthesizer>  _internalSynthesizer;

/// @brief Field _isDirty, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDirty, put=__cordl_internal_set__isDirty)) bool  _isDirty;

/// @brief Field _onOffToggle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__onOffToggle, put=__cordl_internal_set__onOffToggle)) ::UnityW<::VROSC::UISlideToggle>  _onOffToggle;

/// @brief Field _resetButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__resetButton, put=__cordl_internal_set__resetButton)) ::UnityW<::VROSC::UIButton>  _resetButton;

/// @brief Method CheckIfDirty, addr 0x17874ec, size 0x4, virtual true, abstract: false, final false
inline void CheckIfDirty() ;

/// @brief Method LoadPatchValues, addr 0x1787174, size 0x28, virtual true, abstract: false, final false
inline void LoadPatchValues() ;

static inline ::VROSC::BaseEffectsUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1786dbc, size 0x17c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x1787bcc, size 0xa0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnOffToggled, addr 0x178761c, size 0x24, virtual true, abstract: false, final false
inline void OnOffToggled(::VROSC::InputDevice*  inputDevice, bool  isOn) ;

/// @brief Method Reset, addr 0x1787c6c, size 0xc, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetPressed, addr 0x1787b60, size 0x54, virtual true, abstract: false, final false
inline void ResetPressed() ;

/// @brief Method Setup, addr 0x17868d8, size 0x254, virtual true, abstract: false, final false
inline void Setup(::VROSC::SynthController*  instrument) ;

/// @brief Method UpdateEnableState, addr 0x178727c, size 0x4, virtual true, abstract: false, final false
inline void UpdateEnableState() ;

constexpr ::UnityW<::VROSC::SynthController> const& __cordl_internal_get__instrument() const;

constexpr ::UnityW<::VROSC::SynthController>& __cordl_internal_get__instrument() ;

constexpr ::UnityW<::VROSC::InternalSynthesizer> const& __cordl_internal_get__internalSynthesizer() const;

constexpr ::UnityW<::VROSC::InternalSynthesizer>& __cordl_internal_get__internalSynthesizer() ;

constexpr bool const& __cordl_internal_get__isDirty() const;

constexpr bool& __cordl_internal_get__isDirty() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__onOffToggle() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__onOffToggle() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__resetButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__resetButton() ;

constexpr void __cordl_internal_set__instrument(::UnityW<::VROSC::SynthController>  value) ;

constexpr void __cordl_internal_set__internalSynthesizer(::UnityW<::VROSC::InternalSynthesizer>  value) ;

constexpr void __cordl_internal_set__isDirty(bool  value) ;

constexpr void __cordl_internal_set__onOffToggle(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__resetButton(::UnityW<::VROSC::UIButton>  value) ;

/// @brief Method .ctor, addr 0x1787bbc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsDirty, addr 0x1787bc4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDirty() ;

/// @brief Method set_IsDirty, addr 0x17874f0, size 0x38, virtual false, abstract: false, final false
inline void set_IsDirty(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseEffectsUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseEffectsUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseEffectsUI(BaseEffectsUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseEffectsUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseEffectsUI(BaseEffectsUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1323};

/// @brief Field _onOffToggle, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____onOffToggle;

/// @brief Field _resetButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____resetButton;

/// @brief Field _internalSynthesizer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::InternalSynthesizer>  ____internalSynthesizer;

/// @brief Field _instrument, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::SynthController>  ____instrument;

/// @brief Field _isDirty, offset: 0x40, size: 0x1, def value: None
 bool  ____isDirty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BaseEffectsUI, ____onOffToggle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::BaseEffectsUI, ____resetButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::BaseEffectsUI, ____internalSynthesizer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::BaseEffectsUI, ____instrument) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::BaseEffectsUI, ____isDirty) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BaseEffectsUI, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::BaseEffectsUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BaseEffectsUI*, "VROSC", "BaseEffectsUI");
