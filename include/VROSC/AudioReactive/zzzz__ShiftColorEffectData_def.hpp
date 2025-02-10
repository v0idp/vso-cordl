#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/ShiftColorEffectData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/AudioReactive/zzzz__AudioReactiveEffectData_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ShiftColorEffectData)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Gradient;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class ShiftColorEffectData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::ShiftColorEffectData);
// Dependencies VROSC.AudioReactive.AudioReactiveEffectData
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.ShiftColorEffectData
class CORDL_TYPE ShiftColorEffectData : public ::VROSC::AudioReactive::AudioReactiveEffectData {
public:
// Declarations
 __declspec(property(get=get_Duration)) float_t  Duration;

 __declspec(property(get=get_Gradient)) ::UnityEngine::Gradient*  Gradient;

 __declspec(property(get=get_HueCurve)) ::UnityEngine::AnimationCurve*  HueCurve;

 __declspec(property(get=get_HueShift)) float_t  HueShift;

 __declspec(property(get=get_SaturationCurve)) ::UnityEngine::AnimationCurve*  SaturationCurve;

 __declspec(property(get=get_StartColors)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  StartColors;

 __declspec(property(get=get_SwitchToRandomStartColor)) bool  SwitchToRandomStartColor;

 __declspec(property(get=get_UseGradient)) bool  UseGradient;

 __declspec(property(get=get_ValueCurve)) ::UnityEngine::AnimationCurve*  ValueCurve;

/// @brief Field _duration, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__duration, put=__cordl_internal_set__duration)) float_t  _duration;

/// @brief Field _gradient, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__gradient, put=__cordl_internal_set__gradient)) ::UnityEngine::Gradient*  _gradient;

/// @brief Field _hueChange, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__hueChange, put=__cordl_internal_set__hueChange)) ::UnityEngine::AnimationCurve*  _hueChange;

/// @brief Field _hueShift, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__hueShift, put=__cordl_internal_set__hueShift)) float_t  _hueShift;

/// @brief Field _saturationChange, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__saturationChange, put=__cordl_internal_set__saturationChange)) ::UnityEngine::AnimationCurve*  _saturationChange;

/// @brief Field _startColors, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__startColors, put=__cordl_internal_set__startColors)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  _startColors;

/// @brief Field _switchToRandomStartColor, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__switchToRandomStartColor, put=__cordl_internal_set__switchToRandomStartColor)) bool  _switchToRandomStartColor;

/// @brief Field _useGradient, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__useGradient, put=__cordl_internal_set__useGradient)) bool  _useGradient;

/// @brief Field _valueChange, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueChange, put=__cordl_internal_set__valueChange)) ::UnityEngine::AnimationCurve*  _valueChange;

static inline ::VROSC::AudioReactive::ShiftColorEffectData* New_ctor() ;

constexpr float_t const& __cordl_internal_get__duration() const;

constexpr float_t& __cordl_internal_get__duration() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get__gradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get__gradient() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__hueChange() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__hueChange() ;

constexpr float_t const& __cordl_internal_get__hueShift() const;

constexpr float_t& __cordl_internal_get__hueShift() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__saturationChange() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__saturationChange() ;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& __cordl_internal_get__startColors() const;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& __cordl_internal_get__startColors() ;

constexpr bool const& __cordl_internal_get__switchToRandomStartColor() const;

constexpr bool& __cordl_internal_get__switchToRandomStartColor() ;

constexpr bool const& __cordl_internal_get__useGradient() const;

constexpr bool& __cordl_internal_get__useGradient() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__valueChange() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__valueChange() ;

constexpr void __cordl_internal_set__duration(float_t  value) ;

constexpr void __cordl_internal_set__gradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set__hueChange(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__hueShift(float_t  value) ;

constexpr void __cordl_internal_set__saturationChange(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__startColors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value) ;

constexpr void __cordl_internal_set__switchToRandomStartColor(bool  value) ;

constexpr void __cordl_internal_set__useGradient(bool  value) ;

constexpr void __cordl_internal_set__valueChange(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x17d607c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Duration, addr 0x17d605c, size 0x8, virtual false, abstract: false, final false
inline float_t get_Duration() ;

/// @brief Method get_Gradient, addr 0x17d6044, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Gradient* get_Gradient() ;

/// @brief Method get_HueCurve, addr 0x17d6064, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_HueCurve() ;

/// @brief Method get_HueShift, addr 0x17d603c, size 0x8, virtual false, abstract: false, final false
inline float_t get_HueShift() ;

/// @brief Method get_SaturationCurve, addr 0x17d606c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_SaturationCurve() ;

/// @brief Method get_StartColors, addr 0x17d6034, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> get_StartColors() ;

/// @brief Method get_SwitchToRandomStartColor, addr 0x17d6054, size 0x8, virtual false, abstract: false, final false
inline bool get_SwitchToRandomStartColor() ;

/// @brief Method get_UseGradient, addr 0x17d604c, size 0x8, virtual false, abstract: false, final false
inline bool get_UseGradient() ;

/// @brief Method get_ValueCurve, addr 0x17d6074, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_ValueCurve() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShiftColorEffectData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShiftColorEffectData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShiftColorEffectData(ShiftColorEffectData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShiftColorEffectData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShiftColorEffectData(ShiftColorEffectData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1510};

/// @brief Field _startColors, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  ____startColors;

/// @brief Field _hueShift, offset: 0x20, size: 0x4, def value: None
 float_t  ____hueShift;

/// @brief Field _gradient, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ____gradient;

/// @brief Field _useGradient, offset: 0x30, size: 0x1, def value: None
 bool  ____useGradient;

/// @brief Field _switchToRandomStartColor, offset: 0x31, size: 0x1, def value: None
 bool  ____switchToRandomStartColor;

/// @brief Field _duration, offset: 0x34, size: 0x4, def value: None
 float_t  ____duration;

/// @brief Field _hueChange, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____hueChange;

/// @brief Field _saturationChange, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____saturationChange;

/// @brief Field _valueChange, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____valueChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::ShiftColorEffectData, ____startColors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShiftColorEffectData, ____hueShift) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShiftColorEffectData, ____gradient) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShiftColorEffectData, ____useGradient) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShiftColorEffectData, ____switchToRandomStartColor) == 0x31, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShiftColorEffectData, ____duration) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShiftColorEffectData, ____hueChange) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShiftColorEffectData, ____saturationChange) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShiftColorEffectData, ____valueChange) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::ShiftColorEffectData, 0x50>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::ShiftColorEffectData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ShiftColorEffectData*, "VROSC.AudioReactive", "ShiftColorEffectData");
