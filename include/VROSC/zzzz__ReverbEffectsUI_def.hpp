#pragma once
// IWYU pragma private; include "VROSC/ReverbEffectsUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__BaseEffectsUI_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ReverbEffectsUI)
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
class ReverbEffectsUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ReverbEffectsUI);
// Dependencies VROSC.BaseEffectsUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ReverbEffectsUI
class CORDL_TYPE ReverbEffectsUI : public ::VROSC::BaseEffectsUI {
public:
// Declarations
/// @brief Field _3dBoxMarker, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__3dBoxMarker, put=__cordl_internal_set__3dBoxMarker)) ::UnityW<::VROSC::UIInputBox>  _3dBoxMarker;

/// @brief Field _dampingSlider, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__dampingSlider, put=__cordl_internal_set__dampingSlider)) ::UnityW<::VROSC::UISlider>  _dampingSlider;

/// @brief Field _feedbackSlider, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__feedbackSlider, put=__cordl_internal_set__feedbackSlider)) ::UnityW<::VROSC::UISlider>  _feedbackSlider;

/// @brief Field _mixSlider, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__mixSlider, put=__cordl_internal_set__mixSlider)) ::UnityW<::VROSC::UISlider>  _mixSlider;

/// @brief Method ChangeDamping, addr 0x178f0c8, size 0x78, virtual false, abstract: false, final false
inline void ChangeDamping(float_t  damping) ;

/// @brief Method ChangeFeedback, addr 0x178f050, size 0x78, virtual false, abstract: false, final false
inline void ChangeFeedback(float_t  feedback) ;

/// @brief Method ChangeMix, addr 0x178f140, size 0x78, virtual false, abstract: false, final false
inline void ChangeMix(float_t  mix) ;

/// @brief Method CheckIfDirty, addr 0x178ee34, size 0x19c, virtual true, abstract: false, final false
inline void CheckIfDirty() ;

/// @brief Method LoadPatchValues, addr 0x178eca8, size 0x18c, virtual true, abstract: false, final false
inline void LoadPatchValues() ;

/// @brief Method MarkerPositionChanged, addr 0x178f1b8, size 0x15c, virtual false, abstract: false, final false
inline void MarkerPositionChanged(::UnityEngine::Vector3  position) ;

static inline ::VROSC::ReverbEffectsUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x178e97c, size 0x288, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnOffToggled, addr 0x178efd0, size 0x80, virtual true, abstract: false, final false
inline void OnOffToggled(::VROSC::InputDevice*  device, bool  isOn) ;

/// @brief Method ResetPressed, addr 0x178f314, size 0x1a0, virtual true, abstract: false, final false
inline void ResetPressed() ;

/// @brief Method Setup, addr 0x178e494, size 0x4e8, virtual true, abstract: false, final false
inline void Setup(::VROSC::SynthController*  instrument) ;

/// @brief Method UpdateEnableState, addr 0x178ec04, size 0xa4, virtual true, abstract: false, final false
inline void UpdateEnableState() ;

constexpr ::UnityW<::VROSC::UIInputBox> const& __cordl_internal_get__3dBoxMarker() const;

constexpr ::UnityW<::VROSC::UIInputBox>& __cordl_internal_get__3dBoxMarker() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__dampingSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__dampingSlider() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__feedbackSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__feedbackSlider() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__mixSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__mixSlider() ;

constexpr void __cordl_internal_set__3dBoxMarker(::UnityW<::VROSC::UIInputBox>  value) ;

constexpr void __cordl_internal_set__dampingSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__feedbackSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__mixSlider(::UnityW<::VROSC::UISlider>  value) ;

/// @brief Method .ctor, addr 0x178f4b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReverbEffectsUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReverbEffectsUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReverbEffectsUI(ReverbEffectsUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReverbEffectsUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReverbEffectsUI(ReverbEffectsUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1333};

/// @brief Field _feedbackSlider, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____feedbackSlider;

/// @brief Field _dampingSlider, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____dampingSlider;

/// @brief Field _mixSlider, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____mixSlider;

/// @brief Field _3dBoxMarker, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::UIInputBox>  ____3dBoxMarker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ReverbEffectsUI, ____feedbackSlider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::ReverbEffectsUI, ____dampingSlider) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::ReverbEffectsUI, ____mixSlider) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::ReverbEffectsUI, ____3dBoxMarker) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ReverbEffectsUI, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ReverbEffectsUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ReverbEffectsUI*, "VROSC", "ReverbEffectsUI");
