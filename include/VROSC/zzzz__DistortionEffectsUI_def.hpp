#pragma once
// IWYU pragma private; include "VROSC/DistortionEffectsUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__BaseEffectsUI_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DistortionEffectsUI)
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
class UISlideToggle;
}
namespace VROSC {
class UISlider;
}
namespace VROSC {
class UISpinner;
}
// Forward declare root types
namespace VROSC {
class DistortionEffectsUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DistortionEffectsUI);
// Dependencies VROSC.BaseEffectsUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DistortionEffectsUI
class CORDL_TYPE DistortionEffectsUI : public ::VROSC::BaseEffectsUI {
public:
// Declarations
/// @brief Field _2dBoxMarker, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__2dBoxMarker, put=__cordl_internal_set__2dBoxMarker)) ::UnityW<::VROSC::UIInputBox>  _2dBoxMarker;

/// @brief Field _distortionTypeSpinner, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__distortionTypeSpinner, put=__cordl_internal_set__distortionTypeSpinner)) ::UnityW<::VROSC::UISpinner>  _distortionTypeSpinner;

/// @brief Field _driveSlider, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__driveSlider, put=__cordl_internal_set__driveSlider)) ::UnityW<::VROSC::UISlider>  _driveSlider;

/// @brief Field _mixSlider, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__mixSlider, put=__cordl_internal_set__mixSlider)) ::UnityW<::VROSC::UISlider>  _mixSlider;

/// @brief Field _normalizeVolumeToggle, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__normalizeVolumeToggle, put=__cordl_internal_set__normalizeVolumeToggle)) ::UnityW<::VROSC::UISlideToggle>  _normalizeVolumeToggle;

/// @brief Method ChangeDistortionType, addr 0x178a338, size 0x64, virtual false, abstract: false, final false
inline void ChangeDistortionType(int32_t  distortionType) ;

/// @brief Method ChangeDrive, addr 0x178a39c, size 0x94, virtual false, abstract: false, final false
inline void ChangeDrive(float_t  drive) ;

/// @brief Method ChangeMix, addr 0x178a430, size 0x94, virtual false, abstract: false, final false
inline void ChangeMix(float_t  mix) ;

/// @brief Method CheckIfDirty, addr 0x178a068, size 0x234, virtual true, abstract: false, final false
inline void CheckIfDirty() ;

/// @brief Method LoadPatchValues, addr 0x1789e30, size 0x238, virtual true, abstract: false, final false
inline void LoadPatchValues() ;

/// @brief Method MarkerPositionChanged, addr 0x178a584, size 0x10c, virtual false, abstract: false, final false
inline void MarkerPositionChanged(::UnityEngine::Vector3  position) ;

static inline ::VROSC::DistortionEffectsUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1789a38, size 0x334, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnOffToggled, addr 0x178a29c, size 0x9c, virtual true, abstract: false, final false
inline void OnOffToggled(::VROSC::InputDevice*  device, bool  isOn) ;

/// @brief Method ResetPressed, addr 0x178a690, size 0x214, virtual true, abstract: false, final false
inline void ResetPressed() ;

/// @brief Method Setup, addr 0x178924c, size 0x7ec, virtual true, abstract: false, final false
inline void Setup(::VROSC::SynthController*  instrument) ;

/// @brief Method ToggleNormalizeVolume, addr 0x178a4c4, size 0xc0, virtual false, abstract: false, final false
inline void ToggleNormalizeVolume(::VROSC::InputDevice*  device, bool  isOn) ;

/// @brief Method UpdateEnableState, addr 0x1789d6c, size 0xc4, virtual true, abstract: false, final false
inline void UpdateEnableState() ;

constexpr ::UnityW<::VROSC::UIInputBox> const& __cordl_internal_get__2dBoxMarker() const;

constexpr ::UnityW<::VROSC::UIInputBox>& __cordl_internal_get__2dBoxMarker() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get__distortionTypeSpinner() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get__distortionTypeSpinner() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__driveSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__driveSlider() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__mixSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__mixSlider() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__normalizeVolumeToggle() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__normalizeVolumeToggle() ;

constexpr void __cordl_internal_set__2dBoxMarker(::UnityW<::VROSC::UIInputBox>  value) ;

constexpr void __cordl_internal_set__distortionTypeSpinner(::UnityW<::VROSC::UISpinner>  value) ;

constexpr void __cordl_internal_set__driveSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__mixSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__normalizeVolumeToggle(::UnityW<::VROSC::UISlideToggle>  value) ;

/// @brief Method .ctor, addr 0x178a8a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DistortionEffectsUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DistortionEffectsUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DistortionEffectsUI(DistortionEffectsUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DistortionEffectsUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DistortionEffectsUI(DistortionEffectsUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1325};

/// @brief Field _distortionTypeSpinner, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ____distortionTypeSpinner;

/// @brief Field _driveSlider, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____driveSlider;

/// @brief Field _mixSlider, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____mixSlider;

/// @brief Field _normalizeVolumeToggle, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____normalizeVolumeToggle;

/// @brief Field _2dBoxMarker, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::UIInputBox>  ____2dBoxMarker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DistortionEffectsUI, ____distortionTypeSpinner) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::DistortionEffectsUI, ____driveSlider) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::DistortionEffectsUI, ____mixSlider) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::DistortionEffectsUI, ____normalizeVolumeToggle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::DistortionEffectsUI, ____2dBoxMarker) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DistortionEffectsUI, 0x70>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DistortionEffectsUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DistortionEffectsUI*, "VROSC", "DistortionEffectsUI");
