#pragma once
// IWYU pragma private; include "VROSC/DrumEffectsUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DrumEffectsUI)
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class AnimatedPanel;
}
namespace VROSC {
class ExternalEffectsPanel;
}
namespace VROSC {
class ModularDrumsController;
}
namespace VROSC {
class ModularDrumsDataController;
}
namespace VROSC {
class ResetableMover;
}
namespace VROSC {
class UISlider;
}
// Forward declare root types
namespace VROSC {
class DrumEffectsUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DrumEffectsUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DrumEffectsUI
class CORDL_TYPE DrumEffectsUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _animation, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__animation, put=__cordl_internal_set__animation)) ::UnityW<::VROSC::AnimatedPanel>  _animation;

/// @brief Field _compressionSlider, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__compressionSlider, put=__cordl_internal_set__compressionSlider)) ::UnityW<::VROSC::UISlider>  _compressionSlider;

/// @brief Field _dataController, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataController, put=__cordl_internal_set__dataController)) ::VROSC::ModularDrumsDataController*  _dataController;

/// @brief Field _dryVolumeSlider, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__dryVolumeSlider, put=__cordl_internal_set__dryVolumeSlider)) ::UnityW<::VROSC::UISlider>  _dryVolumeSlider;

/// @brief Field _externalEffectsPanel, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__externalEffectsPanel, put=__cordl_internal_set__externalEffectsPanel)) ::UnityW<::VROSC::ExternalEffectsPanel>  _externalEffectsPanel;

/// @brief Field _internalEffectsPanel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__internalEffectsPanel, put=__cordl_internal_set__internalEffectsPanel)) ::UnityW<::UnityEngine::GameObject>  _internalEffectsPanel;

/// @brief Field _resetableMover, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__resetableMover, put=__cordl_internal_set__resetableMover)) ::UnityW<::VROSC::ResetableMover>  _resetableMover;

/// @brief Field _reverbAmountSlider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__reverbAmountSlider, put=__cordl_internal_set__reverbAmountSlider)) ::UnityW<::VROSC::UISlider>  _reverbAmountSlider;

/// @brief Field _reverbLengthSlider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__reverbLengthSlider, put=__cordl_internal_set__reverbLengthSlider)) ::UnityW<::VROSC::UISlider>  _reverbLengthSlider;

/// @brief Method DataLoaded, addr 0x1780e6c, size 0xec, virtual false, abstract: false, final false
inline void DataLoaded(::VROSC::ModularDrumsDataController*  dataController) ;

static inline ::VROSC::DrumEffectsUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x178109c, size 0x328, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetActive, addr 0x1780f58, size 0x144, virtual false, abstract: false, final false
inline void SetActive(bool  shouldBeOpen, bool  animate) ;

/// @brief Method SetCompression, addr 0x1781538, size 0x7c, virtual false, abstract: false, final false
inline void SetCompression(float_t  compression) ;

/// @brief Method SetDryVolume, addr 0x17814bc, size 0x7c, virtual false, abstract: false, final false
inline void SetDryVolume(float_t  volume) ;

/// @brief Method SetReverbAmount, addr 0x17813c4, size 0x7c, virtual false, abstract: false, final false
inline void SetReverbAmount(float_t  amount) ;

/// @brief Method SetReverbLength, addr 0x1781440, size 0x7c, virtual false, abstract: false, final false
inline void SetReverbLength(float_t  length) ;

/// @brief Method Setup, addr 0x177ffb0, size 0x5a4, virtual false, abstract: false, final false
inline void Setup(::VROSC::ModularDrumsController*  controller) ;

/// @brief Method SynthesizerChanged, addr 0x17815b4, size 0x60, virtual false, abstract: false, final false
inline void SynthesizerChanged(bool  useExternal) ;

constexpr ::UnityW<::VROSC::AnimatedPanel> const& __cordl_internal_get__animation() const;

constexpr ::UnityW<::VROSC::AnimatedPanel>& __cordl_internal_get__animation() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__compressionSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__compressionSlider() ;

constexpr ::VROSC::ModularDrumsDataController* const& __cordl_internal_get__dataController() const;

constexpr ::VROSC::ModularDrumsDataController*& __cordl_internal_get__dataController() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__dryVolumeSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__dryVolumeSlider() ;

constexpr ::UnityW<::VROSC::ExternalEffectsPanel> const& __cordl_internal_get__externalEffectsPanel() const;

constexpr ::UnityW<::VROSC::ExternalEffectsPanel>& __cordl_internal_get__externalEffectsPanel() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__internalEffectsPanel() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__internalEffectsPanel() ;

constexpr ::UnityW<::VROSC::ResetableMover> const& __cordl_internal_get__resetableMover() const;

constexpr ::UnityW<::VROSC::ResetableMover>& __cordl_internal_get__resetableMover() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__reverbAmountSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__reverbAmountSlider() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__reverbLengthSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__reverbLengthSlider() ;

constexpr void __cordl_internal_set__animation(::UnityW<::VROSC::AnimatedPanel>  value) ;

constexpr void __cordl_internal_set__compressionSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__dataController(::VROSC::ModularDrumsDataController*  value) ;

constexpr void __cordl_internal_set__dryVolumeSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__externalEffectsPanel(::UnityW<::VROSC::ExternalEffectsPanel>  value) ;

constexpr void __cordl_internal_set__internalEffectsPanel(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__resetableMover(::UnityW<::VROSC::ResetableMover>  value) ;

constexpr void __cordl_internal_set__reverbAmountSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__reverbLengthSlider(::UnityW<::VROSC::UISlider>  value) ;

/// @brief Method .ctor, addr 0x1781614, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrumEffectsUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrumEffectsUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrumEffectsUI(DrumEffectsUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrumEffectsUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrumEffectsUI(DrumEffectsUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1306};

/// @brief Field _internalEffectsPanel, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____internalEffectsPanel;

/// @brief Field _externalEffectsPanel, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::ExternalEffectsPanel>  ____externalEffectsPanel;

/// @brief Field _reverbAmountSlider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____reverbAmountSlider;

/// @brief Field _reverbLengthSlider, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____reverbLengthSlider;

/// @brief Field _dryVolumeSlider, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____dryVolumeSlider;

/// @brief Field _compressionSlider, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____compressionSlider;

/// @brief Field _animation, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::AnimatedPanel>  ____animation;

/// @brief Field _dataController, offset: 0x58, size: 0x8, def value: None
 ::VROSC::ModularDrumsDataController*  ____dataController;

/// @brief Field _resetableMover, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::ResetableMover>  ____resetableMover;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DrumEffectsUI, ____internalEffectsPanel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumEffectsUI, ____externalEffectsPanel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumEffectsUI, ____reverbAmountSlider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumEffectsUI, ____reverbLengthSlider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumEffectsUI, ____dryVolumeSlider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumEffectsUI, ____compressionSlider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumEffectsUI, ____animation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumEffectsUI, ____dataController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumEffectsUI, ____resetableMover) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DrumEffectsUI, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DrumEffectsUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DrumEffectsUI*, "VROSC", "DrumEffectsUI");
