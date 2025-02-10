#pragma once
// IWYU pragma private; include "VROSC/LooperProgressSliderUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LooperProgressSliderUpdater)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
namespace VROSC {
class LoopPlayer;
}
// Forward declare root types
namespace VROSC {
class LooperProgressSliderUpdater;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LooperProgressSliderUpdater);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LooperProgressSliderUpdater
class CORDL_TYPE LooperProgressSliderUpdater : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_PlayButtonIcon)) ::UnityW<::UnityEngine::GameObject>  PlayButtonIcon;

 __declspec(property(get=get_Slider)) ::UnityW<::UnityEngine::Renderer>  Slider;

 __declspec(property(get=get_SliderMaterialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  SliderMaterialPropertyBlock;

 __declspec(property(get=get_StopButtonIcon)) ::UnityW<::UnityEngine::GameObject>  StopButtonIcon;

 __declspec(property(get=get_Timing)) ::UnityW<::UnityEngine::Renderer>  Timing;

 __declspec(property(get=get_TimingMaterialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  TimingMaterialPropertyBlock;

/// @brief Field _color, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) ::UnityEngine::Color  _color;

/// @brief Field _fadeValue, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeValue, put=__cordl_internal_set__fadeValue)) float_t  _fadeValue;

/// @brief Field _loopPlayer, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopPlayer, put=__cordl_internal_set__loopPlayer)) ::UnityW<::VROSC::LoopPlayer>  _loopPlayer;

/// @brief Field _loops, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__loops, put=__cordl_internal_set__loops)) int32_t  _loops;

/// @brief Field _muted, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get__muted, put=__cordl_internal_set__muted)) bool  _muted;

/// @brief Field _mutedColor, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__mutedColor, put=__cordl_internal_set__mutedColor)) ::UnityEngine::Color  _mutedColor;

/// @brief Field _playButtonIcon, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__playButtonIcon, put=__cordl_internal_set__playButtonIcon)) ::UnityW<::UnityEngine::GameObject>  _playButtonIcon;

/// @brief Field _previewOffset, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__previewOffset, put=__cordl_internal_set__previewOffset)) float_t  _previewOffset;

/// @brief Field _previewValue, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__previewValue, put=__cordl_internal_set__previewValue)) float_t  _previewValue;

/// @brief Field _progress, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__progress, put=__cordl_internal_set__progress)) float_t  _progress;

/// @brief Field _propBlockSlider, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__propBlockSlider, put=__cordl_internal_set__propBlockSlider)) ::UnityEngine::MaterialPropertyBlock*  _propBlockSlider;

/// @brief Field _propBlockTiming, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__propBlockTiming, put=__cordl_internal_set__propBlockTiming)) ::UnityEngine::MaterialPropertyBlock*  _propBlockTiming;

/// @brief Field _slider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__slider, put=__cordl_internal_set__slider)) ::UnityW<::UnityEngine::Renderer>  _slider;

/// @brief Field _stopButtonIcon, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__stopButtonIcon, put=__cordl_internal_set__stopButtonIcon)) ::UnityW<::UnityEngine::GameObject>  _stopButtonIcon;

/// @brief Field _timing, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__timing, put=__cordl_internal_set__timing)) ::UnityW<::UnityEngine::Renderer>  _timing;

/// @brief Field _timingValue, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__timingValue, put=__cordl_internal_set__timingValue)) float_t  _timingValue;

/// @brief Field _waitingColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__waitingColor, put=__cordl_internal_set__waitingColor)) ::UnityEngine::Color  _waitingColor;

/// @brief Method Awake, addr 0x1741664, size 0x68, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreatePropBlock, addr 0x17416cc, size 0xf0, virtual false, abstract: false, final false
inline void CreatePropBlock() ;

/// @brief Method GetPreviewArray, addr 0x174201c, size 0xd0, virtual false, abstract: false, final false
inline ::ArrayW<float_t,::Array<float_t>*> GetPreviewArray() ;

static inline ::VROSC::LooperProgressSliderUpdater* New_ctor() ;

/// @brief Method RemovePropBlock, addr 0x17420ec, size 0x58, virtual false, abstract: false, final false
inline void RemovePropBlock() ;

/// @brief Method SetApproachingValue, addr 0x1741f00, size 0x108, virtual false, abstract: false, final false
inline void SetApproachingValue(float_t  value) ;

/// @brief Method SetColor, addr 0x17418c4, size 0x12c, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method SetFadeValue, addr 0x17417bc, size 0x108, virtual false, abstract: false, final false
inline void SetFadeValue(float_t  value, float_t  fadeValue) ;

/// @brief Method SetLoopAudioValues, addr 0x1741e6c, size 0x94, virtual false, abstract: false, final false
inline void SetLoopAudioValues(::ArrayW<float_t,::Array<float_t>*>  array, float_t  offset) ;

/// @brief Method SetLoopPlayer, addr 0x1741bac, size 0x9c, virtual false, abstract: false, final false
inline void SetLoopPlayer(::VROSC::LoopPlayer*  loopPlayer) ;

/// @brief Method SetMuted, addr 0x1742008, size 0x14, virtual false, abstract: false, final false
inline void SetMuted(bool  isMuted) ;

/// @brief Method SetPlaybackActive, addr 0x1741aac, size 0x28, virtual false, abstract: false, final false
inline void SetPlaybackActive(bool  playing) ;

/// @brief Method Update, addr 0x1741c48, size 0x224, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateIcons, addr 0x1741ad4, size 0xd8, virtual false, abstract: false, final false
inline void UpdateIcons(bool  blink, bool  showPlayButton) ;

/// @brief Method UpdateRenderers, addr 0x17419f0, size 0xbc, virtual false, abstract: false, final false
inline void UpdateRenderers() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__color() ;

constexpr float_t const& __cordl_internal_get__fadeValue() const;

constexpr float_t& __cordl_internal_get__fadeValue() ;

constexpr ::UnityW<::VROSC::LoopPlayer> const& __cordl_internal_get__loopPlayer() const;

constexpr ::UnityW<::VROSC::LoopPlayer>& __cordl_internal_get__loopPlayer() ;

constexpr int32_t const& __cordl_internal_get__loops() const;

constexpr int32_t& __cordl_internal_get__loops() ;

constexpr bool const& __cordl_internal_get__muted() const;

constexpr bool& __cordl_internal_get__muted() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__mutedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__mutedColor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__playButtonIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__playButtonIcon() ;

constexpr float_t const& __cordl_internal_get__previewOffset() const;

constexpr float_t& __cordl_internal_get__previewOffset() ;

constexpr float_t const& __cordl_internal_get__previewValue() const;

constexpr float_t& __cordl_internal_get__previewValue() ;

constexpr float_t const& __cordl_internal_get__progress() const;

constexpr float_t& __cordl_internal_get__progress() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__propBlockSlider() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__propBlockSlider() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__propBlockTiming() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__propBlockTiming() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__slider() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__slider() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__stopButtonIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__stopButtonIcon() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__timing() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__timing() ;

constexpr float_t const& __cordl_internal_get__timingValue() const;

constexpr float_t& __cordl_internal_get__timingValue() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__waitingColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__waitingColor() ;

constexpr void __cordl_internal_set__color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__fadeValue(float_t  value) ;

constexpr void __cordl_internal_set__loopPlayer(::UnityW<::VROSC::LoopPlayer>  value) ;

constexpr void __cordl_internal_set__loops(int32_t  value) ;

constexpr void __cordl_internal_set__muted(bool  value) ;

constexpr void __cordl_internal_set__mutedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__playButtonIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__previewOffset(float_t  value) ;

constexpr void __cordl_internal_set__previewValue(float_t  value) ;

constexpr void __cordl_internal_set__progress(float_t  value) ;

constexpr void __cordl_internal_set__propBlockSlider(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__propBlockTiming(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__slider(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__stopButtonIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__timing(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__timingValue(float_t  value) ;

constexpr void __cordl_internal_set__waitingColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x1742144, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PlayButtonIcon, addr 0x1741654, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_PlayButtonIcon() ;

/// @brief Method get_Slider, addr 0x1741634, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Renderer> get_Slider() ;

/// @brief Method get_SliderMaterialPropertyBlock, addr 0x1741644, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::MaterialPropertyBlock* get_SliderMaterialPropertyBlock() ;

/// @brief Method get_StopButtonIcon, addr 0x174165c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_StopButtonIcon() ;

/// @brief Method get_Timing, addr 0x174163c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Renderer> get_Timing() ;

/// @brief Method get_TimingMaterialPropertyBlock, addr 0x174164c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::MaterialPropertyBlock* get_TimingMaterialPropertyBlock() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LooperProgressSliderUpdater() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LooperProgressSliderUpdater", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LooperProgressSliderUpdater(LooperProgressSliderUpdater && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LooperProgressSliderUpdater", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LooperProgressSliderUpdater(LooperProgressSliderUpdater const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1116};

/// @brief Field _slider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____slider;

/// @brief Field _color, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ____color;

/// @brief Field _mutedColor, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ____mutedColor;

/// @brief Field _timing, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____timing;

/// @brief Field _waitingColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ____waitingColor;

/// @brief Field _previewValue, offset: 0x60, size: 0x4, def value: None
 float_t  ____previewValue;

/// @brief Field _previewOffset, offset: 0x64, size: 0x4, def value: None
 float_t  ____previewOffset;

/// @brief Field _fadeValue, offset: 0x68, size: 0x4, def value: None
 float_t  ____fadeValue;

/// @brief Field _timingValue, offset: 0x6c, size: 0x4, def value: None
 float_t  ____timingValue;

/// @brief Field _playButtonIcon, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____playButtonIcon;

/// @brief Field _stopButtonIcon, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____stopButtonIcon;

/// @brief Field _loopPlayer, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayer>  ____loopPlayer;

/// @brief Field _progress, offset: 0x88, size: 0x4, def value: None
 float_t  ____progress;

/// @brief Field _loops, offset: 0x8c, size: 0x4, def value: None
 int32_t  ____loops;

/// @brief Field _muted, offset: 0x90, size: 0x1, def value: None
 bool  ____muted;

/// @brief Field _propBlockSlider, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____propBlockSlider;

/// @brief Field _propBlockTiming, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____propBlockTiming;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LooperProgressSliderUpdater, ____slider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperProgressSliderUpdater, ____color) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperProgressSliderUpdater, ____mutedColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperProgressSliderUpdater, ____timing) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperProgressSliderUpdater, ____waitingColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperProgressSliderUpdater, ____previewValue) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperProgressSliderUpdater, ____previewOffset) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperProgressSliderUpdater, ____fadeValue) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperProgressSliderUpdater, ____timingValue) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperProgressSliderUpdater, ____playButtonIcon) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperProgressSliderUpdater, ____stopButtonIcon) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperProgressSliderUpdater, ____loopPlayer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperProgressSliderUpdater, ____progress) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperProgressSliderUpdater, ____loops) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperProgressSliderUpdater, ____muted) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperProgressSliderUpdater, ____propBlockSlider) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperProgressSliderUpdater, ____propBlockTiming) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LooperProgressSliderUpdater, 0xa8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LooperProgressSliderUpdater);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LooperProgressSliderUpdater*, "VROSC", "LooperProgressSliderUpdater");
