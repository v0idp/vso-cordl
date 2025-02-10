#pragma once
// IWYU pragma private; include "VROSC/DelayEffectsUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__BaseEffectsUI_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DelayEffectsUI)
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
namespace VROSC {
class UISpinner;
}
// Forward declare root types
namespace VROSC {
class DelayEffectsUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DelayEffectsUI);
// Dependencies VROSC.BaseEffectsUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DelayEffectsUI
class CORDL_TYPE DelayEffectsUI : public ::VROSC::BaseEffectsUI {
public:
// Declarations
/// @brief Field _2dBoxMarker, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__2dBoxMarker, put=__cordl_internal_set__2dBoxMarker)) ::UnityW<::VROSC::UIInputBox>  _2dBoxMarker;

/// @brief Field _feedbackSlider, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__feedbackSlider, put=__cordl_internal_set__feedbackSlider)) ::UnityW<::VROSC::UISlider>  _feedbackSlider;

/// @brief Field _mixSlider, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__mixSlider, put=__cordl_internal_set__mixSlider)) ::UnityW<::VROSC::UISlider>  _mixSlider;

/// @brief Field _tempo, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__tempo, put=__cordl_internal_set__tempo)) ::UnityW<::VROSC::UISpinner>  _tempo;

/// @brief Method ChangeFeedback, addr 0x1788e64, size 0x78, virtual false, abstract: false, final false
inline void ChangeFeedback(float_t  feedback) ;

/// @brief Method ChangeMix, addr 0x1788edc, size 0x78, virtual false, abstract: false, final false
inline void ChangeMix(float_t  mix) ;

/// @brief Method ChangeTempo, addr 0x1788cd8, size 0x18c, virtual false, abstract: false, final false
inline void ChangeTempo(int32_t  frequency) ;

/// @brief Method CheckIfDirty, addr 0x17889e4, size 0x200, virtual true, abstract: false, final false
inline void CheckIfDirty() ;

/// @brief Method LoadPatchValues, addr 0x1788800, size 0x1e4, virtual true, abstract: false, final false
inline void LoadPatchValues() ;

/// @brief Method MarkerPositionChanged, addr 0x1788f54, size 0xf0, virtual false, abstract: false, final false
inline void MarkerPositionChanged(::UnityEngine::Vector3  position) ;

static inline ::VROSC::DelayEffectsUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1788578, size 0x204, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnOffToggled, addr 0x1788be4, size 0xf4, virtual true, abstract: false, final false
inline void OnOffToggled(::VROSC::InputDevice*  device, bool  isOn) ;

/// @brief Method ResetPressed, addr 0x1789044, size 0x200, virtual true, abstract: false, final false
inline void ResetPressed() ;

/// @brief Method Setup, addr 0x1787c78, size 0x900, virtual true, abstract: false, final false
inline void Setup(::VROSC::SynthController*  instrument) ;

/// @brief Method UpdateEnableState, addr 0x178877c, size 0x84, virtual true, abstract: false, final false
inline void UpdateEnableState() ;

constexpr ::UnityW<::VROSC::UIInputBox> const& __cordl_internal_get__2dBoxMarker() const;

constexpr ::UnityW<::VROSC::UIInputBox>& __cordl_internal_get__2dBoxMarker() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__feedbackSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__feedbackSlider() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__mixSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__mixSlider() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get__tempo() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get__tempo() ;

constexpr void __cordl_internal_set__2dBoxMarker(::UnityW<::VROSC::UIInputBox>  value) ;

constexpr void __cordl_internal_set__feedbackSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__mixSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__tempo(::UnityW<::VROSC::UISpinner>  value) ;

/// @brief Method .ctor, addr 0x1789244, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DelayEffectsUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DelayEffectsUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DelayEffectsUI(DelayEffectsUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelayEffectsUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelayEffectsUI(DelayEffectsUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1324};

/// @brief Field _tempo, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ____tempo;

/// @brief Field _feedbackSlider, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____feedbackSlider;

/// @brief Field _mixSlider, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____mixSlider;

/// @brief Field _2dBoxMarker, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::UIInputBox>  ____2dBoxMarker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DelayEffectsUI, ____tempo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::DelayEffectsUI, ____feedbackSlider) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::DelayEffectsUI, ____mixSlider) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::DelayEffectsUI, ____2dBoxMarker) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DelayEffectsUI, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DelayEffectsUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DelayEffectsUI*, "VROSC", "DelayEffectsUI");
