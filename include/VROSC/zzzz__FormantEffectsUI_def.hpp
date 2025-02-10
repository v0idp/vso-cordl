#pragma once
// IWYU pragma private; include "VROSC/FormantEffectsUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__BaseEffectsUI_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FormantEffectsUI)
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class SynthController;
}
namespace VROSC {
class UIInputBox;
}
namespace VROSC {
class UISlider;
}
// Forward declare root types
namespace VROSC {
class FormantEffectsUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::FormantEffectsUI);
// Dependencies VROSC.BaseEffectsUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FormantEffectsUI
class CORDL_TYPE FormantEffectsUI : public ::VROSC::BaseEffectsUI {
public:
// Declarations
/// @brief Field _2dBoxMarker, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__2dBoxMarker, put=__cordl_internal_set__2dBoxMarker)) ::UnityW<::VROSC::UIInputBox>  _2dBoxMarker;

/// @brief Field _formantXSlider, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__formantXSlider, put=__cordl_internal_set__formantXSlider)) ::UnityW<::VROSC::UISlider>  _formantXSlider;

/// @brief Field _formantYSlider, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__formantYSlider, put=__cordl_internal_set__formantYSlider)) ::UnityW<::VROSC::UISlider>  _formantYSlider;

/// @brief Method ChangeFormantX, addr 0x178ced0, size 0x78, virtual false, abstract: false, final false
inline void ChangeFormantX(float_t  formantX) ;

/// @brief Method ChangeFormantY, addr 0x178cf48, size 0x78, virtual false, abstract: false, final false
inline void ChangeFormantY(float_t  formantY) ;

/// @brief Method CheckIfDirty, addr 0x178cd2c, size 0x124, virtual true, abstract: false, final false
inline void CheckIfDirty() ;

/// @brief Method LoadPatchValues, addr 0x178cbf0, size 0x13c, virtual true, abstract: false, final false
inline void LoadPatchValues() ;

/// @brief Method MarkerPositionChanged, addr 0x178cfc0, size 0xf0, virtual false, abstract: false, final false
inline void MarkerPositionChanged(::UnityEngine::Vector3  position) ;

static inline ::VROSC::FormantEffectsUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x178c968, size 0x204, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnOffToggled, addr 0x178ce50, size 0x80, virtual true, abstract: false, final false
inline void OnOffToggled(::VROSC::InputDevice*  device, bool  isOn) ;

/// @brief Method ResetPressed, addr 0x178d0b0, size 0x140, virtual true, abstract: false, final false
inline void ResetPressed() ;

/// @brief Method Setup, addr 0x178c5a8, size 0x3c0, virtual true, abstract: false, final false
inline void Setup(::VROSC::SynthController*  instrument) ;

/// @brief Method UpdateEnableState, addr 0x178cb6c, size 0x84, virtual true, abstract: false, final false
inline void UpdateEnableState() ;

constexpr ::UnityW<::VROSC::UIInputBox> const& __cordl_internal_get__2dBoxMarker() const;

constexpr ::UnityW<::VROSC::UIInputBox>& __cordl_internal_get__2dBoxMarker() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__formantXSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__formantXSlider() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__formantYSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__formantYSlider() ;

constexpr void __cordl_internal_set__2dBoxMarker(::UnityW<::VROSC::UIInputBox>  value) ;

constexpr void __cordl_internal_set__formantXSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__formantYSlider(::UnityW<::VROSC::UISlider>  value) ;

/// @brief Method .ctor, addr 0x178d1f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FormantEffectsUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FormantEffectsUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FormantEffectsUI(FormantEffectsUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormantEffectsUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormantEffectsUI(FormantEffectsUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1329};

/// @brief Field _formantXSlider, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____formantXSlider;

/// @brief Field _formantYSlider, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____formantYSlider;

/// @brief Field _2dBoxMarker, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::UIInputBox>  ____2dBoxMarker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FormantEffectsUI, ____formantXSlider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::FormantEffectsUI, ____formantYSlider) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::FormantEffectsUI, ____2dBoxMarker) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FormantEffectsUI, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::FormantEffectsUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FormantEffectsUI*, "VROSC", "FormantEffectsUI");
