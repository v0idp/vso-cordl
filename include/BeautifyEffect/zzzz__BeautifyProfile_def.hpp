#pragma once
// IWYU pragma private; include "BeautifyEffect/BeautifyProfile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeautifyEffect/zzzz__BEAUTIFY_TMO_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeautifyProfile)
namespace BeautifyEffect {
class Beautify;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace BeautifyEffect {
class BeautifyProfile;
}
// Write type traits
MARK_REF_PTR_T(::BeautifyEffect::BeautifyProfile);
// Dependencies BeautifyEffect.BEAUTIFY_TMO, UnityEngine.Color, UnityEngine.FilterMode, UnityEngine.LayerMask, UnityEngine.ScriptableObject, UnityEngine.Vector2
namespace BeautifyEffect {
// Is value type: false
// CS Name: BeautifyEffect.BeautifyProfile
class CORDL_TYPE BeautifyProfile : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field anamorphicFlares, offset 0x15c, size 0x1 
 __declspec(property(get=__cordl_internal_get_anamorphicFlares, put=__cordl_internal_set_anamorphicFlares)) bool  anamorphicFlares;

/// @brief Field anamorphicFlaresAntiflicker, offset 0x164, size 0x1 
 __declspec(property(get=__cordl_internal_get_anamorphicFlaresAntiflicker, put=__cordl_internal_set_anamorphicFlaresAntiflicker)) bool  anamorphicFlaresAntiflicker;

/// @brief Field anamorphicFlaresBlur, offset 0x184, size 0x1 
 __declspec(property(get=__cordl_internal_get_anamorphicFlaresBlur, put=__cordl_internal_set_anamorphicFlaresBlur)) bool  anamorphicFlaresBlur;

/// @brief Field anamorphicFlaresIntensity, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get_anamorphicFlaresIntensity, put=__cordl_internal_set_anamorphicFlaresIntensity)) float_t  anamorphicFlaresIntensity;

/// @brief Field anamorphicFlaresSpread, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get_anamorphicFlaresSpread, put=__cordl_internal_set_anamorphicFlaresSpread)) float_t  anamorphicFlaresSpread;

/// @brief Field anamorphicFlaresThreshold, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_anamorphicFlaresThreshold, put=__cordl_internal_set_anamorphicFlaresThreshold)) float_t  anamorphicFlaresThreshold;

/// @brief Field anamorphicFlaresTint, offset 0x174, size 0x10 
 __declspec(property(get=__cordl_internal_get_anamorphicFlaresTint, put=__cordl_internal_set_anamorphicFlaresTint)) ::UnityEngine::Color  anamorphicFlaresTint;

/// @brief Field anamorphicFlaresUltra, offset 0x165, size 0x1 
 __declspec(property(get=__cordl_internal_get_anamorphicFlaresUltra, put=__cordl_internal_set_anamorphicFlaresUltra)) bool  anamorphicFlaresUltra;

/// @brief Field anamorphicFlaresVertical, offset 0x170, size 0x1 
 __declspec(property(get=__cordl_internal_get_anamorphicFlaresVertical, put=__cordl_internal_set_anamorphicFlaresVertical)) bool  anamorphicFlaresVertical;

/// @brief Field antialiasDepthThreshold, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_antialiasDepthThreshold, put=__cordl_internal_set_antialiasDepthThreshold)) float_t  antialiasDepthThreshold;

/// @brief Field antialiasStrength, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_antialiasStrength, put=__cordl_internal_set_antialiasStrength)) float_t  antialiasStrength;

/// @brief Field bloom, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get_bloom, put=__cordl_internal_set_bloom)) bool  bloom;

/// @brief Field bloomAntiflicker, offset 0x12c, size 0x1 
 __declspec(property(get=__cordl_internal_get_bloomAntiflicker, put=__cordl_internal_set_bloomAntiflicker)) bool  bloomAntiflicker;

/// @brief Field bloomBlur, offset 0x150, size 0x1 
 __declspec(property(get=__cordl_internal_get_bloomBlur, put=__cordl_internal_set_bloomBlur)) bool  bloomBlur;

/// @brief Field bloomBoost0, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_bloomBoost0, put=__cordl_internal_set_bloomBoost0)) float_t  bloomBoost0;

/// @brief Field bloomBoost1, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_bloomBoost1, put=__cordl_internal_set_bloomBoost1)) float_t  bloomBoost1;

/// @brief Field bloomBoost2, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bloomBoost2, put=__cordl_internal_set_bloomBoost2)) float_t  bloomBoost2;

/// @brief Field bloomBoost3, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_bloomBoost3, put=__cordl_internal_set_bloomBoost3)) float_t  bloomBoost3;

/// @brief Field bloomBoost4, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_bloomBoost4, put=__cordl_internal_set_bloomBoost4)) float_t  bloomBoost4;

/// @brief Field bloomBoost5, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_bloomBoost5, put=__cordl_internal_set_bloomBoost5)) float_t  bloomBoost5;

/// @brief Field bloomCullingMask, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_bloomCullingMask, put=__cordl_internal_set_bloomCullingMask)) ::UnityEngine::LayerMask  bloomCullingMask;

/// @brief Field bloomCustomize, offset 0x134, size 0x1 
 __declspec(property(get=__cordl_internal_get_bloomCustomize, put=__cordl_internal_set_bloomCustomize)) bool  bloomCustomize;

/// @brief Field bloomDepthAtten, offset 0x154, size 0x4 
 __declspec(property(get=__cordl_internal_get_bloomDepthAtten, put=__cordl_internal_set_bloomDepthAtten)) float_t  bloomDepthAtten;

/// @brief Field bloomIntensity, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bloomIntensity, put=__cordl_internal_set_bloomIntensity)) float_t  bloomIntensity;

/// @brief Field bloomLayerMaskDownsampling, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_bloomLayerMaskDownsampling, put=__cordl_internal_set_bloomLayerMaskDownsampling)) float_t  bloomLayerMaskDownsampling;

/// @brief Field bloomLayerZBias, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_bloomLayerZBias, put=__cordl_internal_set_bloomLayerZBias)) float_t  bloomLayerZBias;

/// @brief Field bloomMaxBrightness, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_bloomMaxBrightness, put=__cordl_internal_set_bloomMaxBrightness)) float_t  bloomMaxBrightness;

/// @brief Field bloomThreshold, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_bloomThreshold, put=__cordl_internal_set_bloomThreshold)) float_t  bloomThreshold;

/// @brief Field bloomUltra, offset 0x12d, size 0x1 
 __declspec(property(get=__cordl_internal_get_bloomUltra, put=__cordl_internal_set_bloomUltra)) bool  bloomUltra;

/// @brief Field bloomWeight0, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_bloomWeight0, put=__cordl_internal_set_bloomWeight0)) float_t  bloomWeight0;

/// @brief Field bloomWeight1, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bloomWeight1, put=__cordl_internal_set_bloomWeight1)) float_t  bloomWeight1;

/// @brief Field bloomWeight2, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_bloomWeight2, put=__cordl_internal_set_bloomWeight2)) float_t  bloomWeight2;

/// @brief Field bloomWeight3, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get_bloomWeight3, put=__cordl_internal_set_bloomWeight3)) float_t  bloomWeight3;

/// @brief Field bloomWeight4, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_bloomWeight4, put=__cordl_internal_set_bloomWeight4)) float_t  bloomWeight4;

/// @brief Field bloomWeight5, offset 0x14c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bloomWeight5, put=__cordl_internal_set_bloomWeight5)) float_t  bloomWeight5;

/// @brief Field blur, offset 0x2a5, size 0x1 
 __declspec(property(get=__cordl_internal_get_blur, put=__cordl_internal_set_blur)) bool  blur;

/// @brief Field blurIntensity, offset 0x2a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_blurIntensity, put=__cordl_internal_set_blurIntensity)) float_t  blurIntensity;

/// @brief Field brightness, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_brightness, put=__cordl_internal_set_brightness)) float_t  brightness;

/// @brief Field contrast, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_contrast, put=__cordl_internal_set_contrast)) float_t  contrast;

/// @brief Field daltonize, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_daltonize, put=__cordl_internal_set_daltonize)) float_t  daltonize;

/// @brief Field depthOfField, offset 0x185, size 0x1 
 __declspec(property(get=__cordl_internal_get_depthOfField, put=__cordl_internal_set_depthOfField)) bool  depthOfField;

/// @brief Field depthOfFieldAperture, offset 0x1cc, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthOfFieldAperture, put=__cordl_internal_set_depthOfFieldAperture)) float_t  depthOfFieldAperture;

/// @brief Field depthOfFieldAutofocus, offset 0x190, size 0x1 
 __declspec(property(get=__cordl_internal_get_depthOfFieldAutofocus, put=__cordl_internal_set_depthOfFieldAutofocus)) bool  depthOfFieldAutofocus;

/// @brief Field depthOfFieldAutofocusLayerMask, offset 0x19c, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthOfFieldAutofocusLayerMask, put=__cordl_internal_set_depthOfFieldAutofocusLayerMask)) ::UnityEngine::LayerMask  depthOfFieldAutofocusLayerMask;

/// @brief Field depthOfFieldAutofocusMaxDistance, offset 0x1a4, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthOfFieldAutofocusMaxDistance, put=__cordl_internal_set_depthOfFieldAutofocusMaxDistance)) float_t  depthOfFieldAutofocusMaxDistance;

/// @brief Field depthOfFieldAutofocusMinDistance, offset 0x1a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthOfFieldAutofocusMinDistance, put=__cordl_internal_set_depthOfFieldAutofocusMinDistance)) float_t  depthOfFieldAutofocusMinDistance;

/// @brief Field depthOfFieldBokeh, offset 0x1d8, size 0x1 
 __declspec(property(get=__cordl_internal_get_depthOfFieldBokeh, put=__cordl_internal_set_depthOfFieldBokeh)) bool  depthOfFieldBokeh;

/// @brief Field depthOfFieldBokehIntensity, offset 0x1e0, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthOfFieldBokehIntensity, put=__cordl_internal_set_depthOfFieldBokehIntensity)) float_t  depthOfFieldBokehIntensity;

/// @brief Field depthOfFieldBokehThreshold, offset 0x1dc, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthOfFieldBokehThreshold, put=__cordl_internal_set_depthOfFieldBokehThreshold)) float_t  depthOfFieldBokehThreshold;

/// @brief Field depthOfFieldDistance, offset 0x1b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthOfFieldDistance, put=__cordl_internal_set_depthOfFieldDistance)) float_t  depthOfFieldDistance;

/// @brief Field depthOfFieldDownsampling, offset 0x1c0, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthOfFieldDownsampling, put=__cordl_internal_set_depthOfFieldDownsampling)) int32_t  depthOfFieldDownsampling;

/// @brief Field depthOfFieldExclusionBias, offset 0x1b4, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthOfFieldExclusionBias, put=__cordl_internal_set_depthOfFieldExclusionBias)) float_t  depthOfFieldExclusionBias;

/// @brief Field depthOfFieldExclusionLayerMask, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthOfFieldExclusionLayerMask, put=__cordl_internal_set_depthOfFieldExclusionLayerMask)) ::UnityEngine::LayerMask  depthOfFieldExclusionLayerMask;

/// @brief Field depthOfFieldExclusionLayerMaskDownsampling, offset 0x1ac, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthOfFieldExclusionLayerMaskDownsampling, put=__cordl_internal_set_depthOfFieldExclusionLayerMaskDownsampling)) float_t  depthOfFieldExclusionLayerMaskDownsampling;

/// @brief Field depthOfFieldFilterMode, offset 0x1ec, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthOfFieldFilterMode, put=__cordl_internal_set_depthOfFieldFilterMode)) ::UnityEngine::FilterMode  depthOfFieldFilterMode;

/// @brief Field depthOfFieldFocalLength, offset 0x1c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthOfFieldFocalLength, put=__cordl_internal_set_depthOfFieldFocalLength)) float_t  depthOfFieldFocalLength;

/// @brief Field depthOfFieldFocusSpeed, offset 0x1bc, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthOfFieldFocusSpeed, put=__cordl_internal_set_depthOfFieldFocusSpeed)) float_t  depthOfFieldFocusSpeed;

/// @brief Field depthOfFieldForegroundBlur, offset 0x1d0, size 0x1 
 __declspec(property(get=__cordl_internal_get_depthOfFieldForegroundBlur, put=__cordl_internal_set_depthOfFieldForegroundBlur)) bool  depthOfFieldForegroundBlur;

/// @brief Field depthOfFieldForegroundBlurHQ, offset 0x1d1, size 0x1 
 __declspec(property(get=__cordl_internal_get_depthOfFieldForegroundBlurHQ, put=__cordl_internal_set_depthOfFieldForegroundBlurHQ)) bool  depthOfFieldForegroundBlurHQ;

/// @brief Field depthOfFieldForegroundDistance, offset 0x1d4, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthOfFieldForegroundDistance, put=__cordl_internal_set_depthOfFieldForegroundDistance)) float_t  depthOfFieldForegroundDistance;

/// @brief Field depthOfFieldMaxBrightness, offset 0x1e4, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthOfFieldMaxBrightness, put=__cordl_internal_set_depthOfFieldMaxBrightness)) float_t  depthOfFieldMaxBrightness;

/// @brief Field depthOfFieldMaxDistance, offset 0x1e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthOfFieldMaxDistance, put=__cordl_internal_set_depthOfFieldMaxDistance)) float_t  depthOfFieldMaxDistance;

/// @brief Field depthOfFieldMaxSamples, offset 0x1c4, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthOfFieldMaxSamples, put=__cordl_internal_set_depthOfFieldMaxSamples)) int32_t  depthOfFieldMaxSamples;

/// @brief Field depthOfFieldTargetFocus, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_depthOfFieldTargetFocus, put=__cordl_internal_set_depthOfFieldTargetFocus)) ::UnityW<::UnityEngine::Transform>  depthOfFieldTargetFocus;

/// @brief Field depthOfFieldTransparencyLayerMask, offset 0x1f0, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthOfFieldTransparencyLayerMask, put=__cordl_internal_set_depthOfFieldTransparencyLayerMask)) ::UnityEngine::LayerMask  depthOfFieldTransparencyLayerMask;

/// @brief Field depthOfFieldTransparencySupport, offset 0x186, size 0x1 
 __declspec(property(get=__cordl_internal_get_depthOfFieldTransparencySupport, put=__cordl_internal_set_depthOfFieldTransparencySupport)) bool  depthOfFieldTransparencySupport;

/// @brief Field depthOfFieldTransparencySupportDownsampling, offset 0x1b0, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthOfFieldTransparencySupportDownsampling, put=__cordl_internal_set_depthOfFieldTransparencySupportDownsampling)) float_t  depthOfFieldTransparencySupportDownsampling;

/// @brief Field depthofFieldAutofocusViewportPoint, offset 0x194, size 0x8 
 __declspec(property(get=__cordl_internal_get_depthofFieldAutofocusViewportPoint, put=__cordl_internal_set_depthofFieldAutofocusViewportPoint)) ::UnityEngine::Vector2  depthofFieldAutofocusViewportPoint;

/// @brief Field dither, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_dither, put=__cordl_internal_set_dither)) float_t  dither;

/// @brief Field ditherDepth, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ditherDepth, put=__cordl_internal_set_ditherDepth)) float_t  ditherDepth;

/// @brief Field eyeAdaptation, offset 0x1f4, size 0x1 
 __declspec(property(get=__cordl_internal_get_eyeAdaptation, put=__cordl_internal_set_eyeAdaptation)) bool  eyeAdaptation;

/// @brief Field eyeAdaptationMaxExposure, offset 0x1fc, size 0x4 
 __declspec(property(get=__cordl_internal_get_eyeAdaptationMaxExposure, put=__cordl_internal_set_eyeAdaptationMaxExposure)) float_t  eyeAdaptationMaxExposure;

/// @brief Field eyeAdaptationMinExposure, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get_eyeAdaptationMinExposure, put=__cordl_internal_set_eyeAdaptationMinExposure)) float_t  eyeAdaptationMinExposure;

/// @brief Field eyeAdaptationSpeedToDark, offset 0x204, size 0x4 
 __declspec(property(get=__cordl_internal_get_eyeAdaptationSpeedToDark, put=__cordl_internal_set_eyeAdaptationSpeedToDark)) float_t  eyeAdaptationSpeedToDark;

/// @brief Field eyeAdaptationSpeedToLight, offset 0x200, size 0x4 
 __declspec(property(get=__cordl_internal_get_eyeAdaptationSpeedToLight, put=__cordl_internal_set_eyeAdaptationSpeedToLight)) float_t  eyeAdaptationSpeedToLight;

/// @brief Field frame, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_frame, put=__cordl_internal_set_frame)) bool  frame;

/// @brief Field frameColor, offset 0x94, size 0x10 
 __declspec(property(get=__cordl_internal_get_frameColor, put=__cordl_internal_set_frameColor)) ::UnityEngine::Color  frameColor;

/// @brief Field frameMask, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_frameMask, put=__cordl_internal_set_frameMask)) ::UnityW<::UnityEngine::Texture2D>  frameMask;

/// @brief Field lensDirt, offset 0xe9, size 0x1 
 __declspec(property(get=__cordl_internal_get_lensDirt, put=__cordl_internal_set_lensDirt)) bool  lensDirt;

/// @brief Field lensDirtIntensity, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lensDirtIntensity, put=__cordl_internal_set_lensDirtIntensity)) float_t  lensDirtIntensity;

/// @brief Field lensDirtTexture, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lensDirtTexture, put=__cordl_internal_set_lensDirtTexture)) ::UnityW<::UnityEngine::Texture2D>  lensDirtTexture;

/// @brief Field lensDirtThreshold, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_lensDirtThreshold, put=__cordl_internal_set_lensDirtThreshold)) float_t  lensDirtThreshold;

/// @brief Field lut, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_lut, put=__cordl_internal_set_lut)) bool  lut;

/// @brief Field lutIntensity, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lutIntensity, put=__cordl_internal_set_lutIntensity)) float_t  lutIntensity;

/// @brief Field lutTexture, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lutTexture, put=__cordl_internal_set_lutTexture)) ::UnityW<::UnityEngine::Texture2D>  lutTexture;

/// @brief Field nightVision, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_nightVision, put=__cordl_internal_set_nightVision)) bool  nightVision;

/// @brief Field nightVisionColor, offset 0xc4, size 0x10 
 __declspec(property(get=__cordl_internal_get_nightVisionColor, put=__cordl_internal_set_nightVisionColor)) ::UnityEngine::Color  nightVisionColor;

/// @brief Field outline, offset 0xd4, size 0x1 
 __declspec(property(get=__cordl_internal_get_outline, put=__cordl_internal_set_outline)) bool  outline;

/// @brief Field outlineColor, offset 0xd8, size 0x10 
 __declspec(property(get=__cordl_internal_get_outlineColor, put=__cordl_internal_set_outlineColor)) ::UnityEngine::Color  outlineColor;

/// @brief Field pixelateAmount, offset 0x2ac, size 0x4 
 __declspec(property(get=__cordl_internal_get_pixelateAmount, put=__cordl_internal_set_pixelateAmount)) int32_t  pixelateAmount;

/// @brief Field pixelateDownscale, offset 0x2b0, size 0x1 
 __declspec(property(get=__cordl_internal_get_pixelateDownscale, put=__cordl_internal_set_pixelateDownscale)) bool  pixelateDownscale;

/// @brief Field purkinje, offset 0x208, size 0x1 
 __declspec(property(get=__cordl_internal_get_purkinje, put=__cordl_internal_set_purkinje)) bool  purkinje;

/// @brief Field purkinjeAmount, offset 0x20c, size 0x4 
 __declspec(property(get=__cordl_internal_get_purkinjeAmount, put=__cordl_internal_set_purkinjeAmount)) float_t  purkinjeAmount;

/// @brief Field purkinjeLuminanceThreshold, offset 0x210, size 0x4 
 __declspec(property(get=__cordl_internal_get_purkinjeLuminanceThreshold, put=__cordl_internal_set_purkinjeLuminanceThreshold)) float_t  purkinjeLuminanceThreshold;

/// @brief Field saturate, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_saturate, put=__cordl_internal_set_saturate)) float_t  saturate;

/// @brief Field sharpen, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_sharpen, put=__cordl_internal_set_sharpen)) float_t  sharpen;

/// @brief Field sharpenClamp, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_sharpenClamp, put=__cordl_internal_set_sharpenClamp)) float_t  sharpenClamp;

/// @brief Field sharpenDepthThreshold, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sharpenDepthThreshold, put=__cordl_internal_set_sharpenDepthThreshold)) float_t  sharpenDepthThreshold;

/// @brief Field sharpenMaxDepth, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_sharpenMaxDepth, put=__cordl_internal_set_sharpenMaxDepth)) float_t  sharpenMaxDepth;

/// @brief Field sharpenMinDepth, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_sharpenMinDepth, put=__cordl_internal_set_sharpenMinDepth)) float_t  sharpenMinDepth;

/// @brief Field sharpenMotionSensibility, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_sharpenMotionSensibility, put=__cordl_internal_set_sharpenMotionSensibility)) float_t  sharpenMotionSensibility;

/// @brief Field sharpenRelaxation, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_sharpenRelaxation, put=__cordl_internal_set_sharpenRelaxation)) float_t  sharpenRelaxation;

/// @brief Field sunFlares, offset 0x218, size 0x1 
 __declspec(property(get=__cordl_internal_get_sunFlares, put=__cordl_internal_set_sunFlares)) bool  sunFlares;

/// @brief Field sunFlaresCoronaRays1AngleOffset, offset 0x254, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresCoronaRays1AngleOffset, put=__cordl_internal_set_sunFlaresCoronaRays1AngleOffset)) float_t  sunFlaresCoronaRays1AngleOffset;

/// @brief Field sunFlaresCoronaRays1Length, offset 0x248, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresCoronaRays1Length, put=__cordl_internal_set_sunFlaresCoronaRays1Length)) float_t  sunFlaresCoronaRays1Length;

/// @brief Field sunFlaresCoronaRays1Spread, offset 0x250, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresCoronaRays1Spread, put=__cordl_internal_set_sunFlaresCoronaRays1Spread)) float_t  sunFlaresCoronaRays1Spread;

/// @brief Field sunFlaresCoronaRays1Streaks, offset 0x24c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresCoronaRays1Streaks, put=__cordl_internal_set_sunFlaresCoronaRays1Streaks)) int32_t  sunFlaresCoronaRays1Streaks;

/// @brief Field sunFlaresCoronaRays2AngleOffset, offset 0x264, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresCoronaRays2AngleOffset, put=__cordl_internal_set_sunFlaresCoronaRays2AngleOffset)) float_t  sunFlaresCoronaRays2AngleOffset;

/// @brief Field sunFlaresCoronaRays2Length, offset 0x258, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresCoronaRays2Length, put=__cordl_internal_set_sunFlaresCoronaRays2Length)) float_t  sunFlaresCoronaRays2Length;

/// @brief Field sunFlaresCoronaRays2Spread, offset 0x260, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresCoronaRays2Spread, put=__cordl_internal_set_sunFlaresCoronaRays2Spread)) float_t  sunFlaresCoronaRays2Spread;

/// @brief Field sunFlaresCoronaRays2Streaks, offset 0x25c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresCoronaRays2Streaks, put=__cordl_internal_set_sunFlaresCoronaRays2Streaks)) int32_t  sunFlaresCoronaRays2Streaks;

/// @brief Field sunFlaresDownsampling, offset 0x234, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresDownsampling, put=__cordl_internal_set_sunFlaresDownsampling)) int32_t  sunFlaresDownsampling;

/// @brief Field sunFlaresGhosts1Brightness, offset 0x270, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresGhosts1Brightness, put=__cordl_internal_set_sunFlaresGhosts1Brightness)) float_t  sunFlaresGhosts1Brightness;

/// @brief Field sunFlaresGhosts1Offset, offset 0x26c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresGhosts1Offset, put=__cordl_internal_set_sunFlaresGhosts1Offset)) float_t  sunFlaresGhosts1Offset;

/// @brief Field sunFlaresGhosts1Size, offset 0x268, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresGhosts1Size, put=__cordl_internal_set_sunFlaresGhosts1Size)) float_t  sunFlaresGhosts1Size;

/// @brief Field sunFlaresGhosts2Brightness, offset 0x27c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresGhosts2Brightness, put=__cordl_internal_set_sunFlaresGhosts2Brightness)) float_t  sunFlaresGhosts2Brightness;

/// @brief Field sunFlaresGhosts2Offset, offset 0x278, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresGhosts2Offset, put=__cordl_internal_set_sunFlaresGhosts2Offset)) float_t  sunFlaresGhosts2Offset;

/// @brief Field sunFlaresGhosts2Size, offset 0x274, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresGhosts2Size, put=__cordl_internal_set_sunFlaresGhosts2Size)) float_t  sunFlaresGhosts2Size;

/// @brief Field sunFlaresGhosts3Brightness, offset 0x284, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresGhosts3Brightness, put=__cordl_internal_set_sunFlaresGhosts3Brightness)) float_t  sunFlaresGhosts3Brightness;

/// @brief Field sunFlaresGhosts3Offset, offset 0x288, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresGhosts3Offset, put=__cordl_internal_set_sunFlaresGhosts3Offset)) float_t  sunFlaresGhosts3Offset;

/// @brief Field sunFlaresGhosts3Size, offset 0x280, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresGhosts3Size, put=__cordl_internal_set_sunFlaresGhosts3Size)) float_t  sunFlaresGhosts3Size;

/// @brief Field sunFlaresGhosts4Brightness, offset 0x294, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresGhosts4Brightness, put=__cordl_internal_set_sunFlaresGhosts4Brightness)) float_t  sunFlaresGhosts4Brightness;

/// @brief Field sunFlaresGhosts4Offset, offset 0x290, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresGhosts4Offset, put=__cordl_internal_set_sunFlaresGhosts4Offset)) float_t  sunFlaresGhosts4Offset;

/// @brief Field sunFlaresGhosts4Size, offset 0x28c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresGhosts4Size, put=__cordl_internal_set_sunFlaresGhosts4Size)) float_t  sunFlaresGhosts4Size;

/// @brief Field sunFlaresHaloAmplitude, offset 0x29c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresHaloAmplitude, put=__cordl_internal_set_sunFlaresHaloAmplitude)) float_t  sunFlaresHaloAmplitude;

/// @brief Field sunFlaresHaloIntensity, offset 0x2a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresHaloIntensity, put=__cordl_internal_set_sunFlaresHaloIntensity)) float_t  sunFlaresHaloIntensity;

/// @brief Field sunFlaresHaloOffset, offset 0x298, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresHaloOffset, put=__cordl_internal_set_sunFlaresHaloOffset)) float_t  sunFlaresHaloOffset;

/// @brief Field sunFlaresIntensity, offset 0x21c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresIntensity, put=__cordl_internal_set_sunFlaresIntensity)) float_t  sunFlaresIntensity;

/// @brief Field sunFlaresRotationDeadZone, offset 0x2a4, size 0x1 
 __declspec(property(get=__cordl_internal_get_sunFlaresRotationDeadZone, put=__cordl_internal_set_sunFlaresRotationDeadZone)) bool  sunFlaresRotationDeadZone;

/// @brief Field sunFlaresSolarWindSpeed, offset 0x220, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresSolarWindSpeed, put=__cordl_internal_set_sunFlaresSolarWindSpeed)) float_t  sunFlaresSolarWindSpeed;

/// @brief Field sunFlaresSunDiskSize, offset 0x23c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresSunDiskSize, put=__cordl_internal_set_sunFlaresSunDiskSize)) float_t  sunFlaresSunDiskSize;

/// @brief Field sunFlaresSunIntensity, offset 0x238, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresSunIntensity, put=__cordl_internal_set_sunFlaresSunIntensity)) float_t  sunFlaresSunIntensity;

/// @brief Field sunFlaresSunRayDiffractionIntensity, offset 0x240, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresSunRayDiffractionIntensity, put=__cordl_internal_set_sunFlaresSunRayDiffractionIntensity)) float_t  sunFlaresSunRayDiffractionIntensity;

/// @brief Field sunFlaresSunRayDiffractionThreshold, offset 0x244, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlaresSunRayDiffractionThreshold, put=__cordl_internal_set_sunFlaresSunRayDiffractionThreshold)) float_t  sunFlaresSunRayDiffractionThreshold;

/// @brief Field sunFlaresTint, offset 0x224, size 0x10 
 __declspec(property(get=__cordl_internal_get_sunFlaresTint, put=__cordl_internal_set_sunFlaresTint)) ::UnityEngine::Color  sunFlaresTint;

/// @brief Field thermalVision, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get_thermalVision, put=__cordl_internal_set_thermalVision)) bool  thermalVision;

/// @brief Field tintColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_tintColor, put=__cordl_internal_set_tintColor)) ::UnityEngine::Color  tintColor;

/// @brief Field tonemap, offset 0x214, size 0x4 
 __declspec(property(get=__cordl_internal_get_tonemap, put=__cordl_internal_set_tonemap)) ::BeautifyEffect::BEAUTIFY_TMO  tonemap;

/// @brief Field vignetting, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_vignetting, put=__cordl_internal_set_vignetting)) bool  vignetting;

/// @brief Field vignettingAspectRatio, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_vignettingAspectRatio, put=__cordl_internal_set_vignettingAspectRatio)) float_t  vignettingAspectRatio;

/// @brief Field vignettingBlink, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_vignettingBlink, put=__cordl_internal_set_vignettingBlink)) float_t  vignettingBlink;

/// @brief Field vignettingCircularShape, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get_vignettingCircularShape, put=__cordl_internal_set_vignettingCircularShape)) bool  vignettingCircularShape;

/// @brief Field vignettingColor, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_vignettingColor, put=__cordl_internal_set_vignettingColor)) ::UnityEngine::Color  vignettingColor;

/// @brief Field vignettingFade, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_vignettingFade, put=__cordl_internal_set_vignettingFade)) float_t  vignettingFade;

/// @brief Field vignettingMask, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_vignettingMask, put=__cordl_internal_set_vignettingMask)) ::UnityW<::UnityEngine::Texture2D>  vignettingMask;

/// @brief Method Load, addr 0x180fd20, size 0x109c, virtual false, abstract: false, final false
inline void Load(::BeautifyEffect::Beautify*  b) ;

static inline ::BeautifyEffect::BeautifyProfile* New_ctor() ;

/// @brief Method Save, addr 0x18193cc, size 0x31c, virtual false, abstract: false, final false
inline void Save(::BeautifyEffect::Beautify*  b) ;

constexpr bool const& __cordl_internal_get_anamorphicFlares() const;

constexpr bool& __cordl_internal_get_anamorphicFlares() ;

constexpr bool const& __cordl_internal_get_anamorphicFlaresAntiflicker() const;

constexpr bool& __cordl_internal_get_anamorphicFlaresAntiflicker() ;

constexpr bool const& __cordl_internal_get_anamorphicFlaresBlur() const;

constexpr bool& __cordl_internal_get_anamorphicFlaresBlur() ;

constexpr float_t const& __cordl_internal_get_anamorphicFlaresIntensity() const;

constexpr float_t& __cordl_internal_get_anamorphicFlaresIntensity() ;

constexpr float_t const& __cordl_internal_get_anamorphicFlaresSpread() const;

constexpr float_t& __cordl_internal_get_anamorphicFlaresSpread() ;

constexpr float_t const& __cordl_internal_get_anamorphicFlaresThreshold() const;

constexpr float_t& __cordl_internal_get_anamorphicFlaresThreshold() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_anamorphicFlaresTint() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_anamorphicFlaresTint() ;

constexpr bool const& __cordl_internal_get_anamorphicFlaresUltra() const;

constexpr bool& __cordl_internal_get_anamorphicFlaresUltra() ;

constexpr bool const& __cordl_internal_get_anamorphicFlaresVertical() const;

constexpr bool& __cordl_internal_get_anamorphicFlaresVertical() ;

constexpr float_t const& __cordl_internal_get_antialiasDepthThreshold() const;

constexpr float_t& __cordl_internal_get_antialiasDepthThreshold() ;

constexpr float_t const& __cordl_internal_get_antialiasStrength() const;

constexpr float_t& __cordl_internal_get_antialiasStrength() ;

constexpr bool const& __cordl_internal_get_bloom() const;

constexpr bool& __cordl_internal_get_bloom() ;

constexpr bool const& __cordl_internal_get_bloomAntiflicker() const;

constexpr bool& __cordl_internal_get_bloomAntiflicker() ;

constexpr bool const& __cordl_internal_get_bloomBlur() const;

constexpr bool& __cordl_internal_get_bloomBlur() ;

constexpr float_t const& __cordl_internal_get_bloomBoost0() const;

constexpr float_t& __cordl_internal_get_bloomBoost0() ;

constexpr float_t const& __cordl_internal_get_bloomBoost1() const;

constexpr float_t& __cordl_internal_get_bloomBoost1() ;

constexpr float_t const& __cordl_internal_get_bloomBoost2() const;

constexpr float_t& __cordl_internal_get_bloomBoost2() ;

constexpr float_t const& __cordl_internal_get_bloomBoost3() const;

constexpr float_t& __cordl_internal_get_bloomBoost3() ;

constexpr float_t const& __cordl_internal_get_bloomBoost4() const;

constexpr float_t& __cordl_internal_get_bloomBoost4() ;

constexpr float_t const& __cordl_internal_get_bloomBoost5() const;

constexpr float_t& __cordl_internal_get_bloomBoost5() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_bloomCullingMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_bloomCullingMask() ;

constexpr bool const& __cordl_internal_get_bloomCustomize() const;

constexpr bool& __cordl_internal_get_bloomCustomize() ;

constexpr float_t const& __cordl_internal_get_bloomDepthAtten() const;

constexpr float_t& __cordl_internal_get_bloomDepthAtten() ;

constexpr float_t const& __cordl_internal_get_bloomIntensity() const;

constexpr float_t& __cordl_internal_get_bloomIntensity() ;

constexpr float_t const& __cordl_internal_get_bloomLayerMaskDownsampling() const;

constexpr float_t& __cordl_internal_get_bloomLayerMaskDownsampling() ;

constexpr float_t const& __cordl_internal_get_bloomLayerZBias() const;

constexpr float_t& __cordl_internal_get_bloomLayerZBias() ;

constexpr float_t const& __cordl_internal_get_bloomMaxBrightness() const;

constexpr float_t& __cordl_internal_get_bloomMaxBrightness() ;

constexpr float_t const& __cordl_internal_get_bloomThreshold() const;

constexpr float_t& __cordl_internal_get_bloomThreshold() ;

constexpr bool const& __cordl_internal_get_bloomUltra() const;

constexpr bool& __cordl_internal_get_bloomUltra() ;

constexpr float_t const& __cordl_internal_get_bloomWeight0() const;

constexpr float_t& __cordl_internal_get_bloomWeight0() ;

constexpr float_t const& __cordl_internal_get_bloomWeight1() const;

constexpr float_t& __cordl_internal_get_bloomWeight1() ;

constexpr float_t const& __cordl_internal_get_bloomWeight2() const;

constexpr float_t& __cordl_internal_get_bloomWeight2() ;

constexpr float_t const& __cordl_internal_get_bloomWeight3() const;

constexpr float_t& __cordl_internal_get_bloomWeight3() ;

constexpr float_t const& __cordl_internal_get_bloomWeight4() const;

constexpr float_t& __cordl_internal_get_bloomWeight4() ;

constexpr float_t const& __cordl_internal_get_bloomWeight5() const;

constexpr float_t& __cordl_internal_get_bloomWeight5() ;

constexpr bool const& __cordl_internal_get_blur() const;

constexpr bool& __cordl_internal_get_blur() ;

constexpr float_t const& __cordl_internal_get_blurIntensity() const;

constexpr float_t& __cordl_internal_get_blurIntensity() ;

constexpr float_t const& __cordl_internal_get_brightness() const;

constexpr float_t& __cordl_internal_get_brightness() ;

constexpr float_t const& __cordl_internal_get_contrast() const;

constexpr float_t& __cordl_internal_get_contrast() ;

constexpr float_t const& __cordl_internal_get_daltonize() const;

constexpr float_t& __cordl_internal_get_daltonize() ;

constexpr bool const& __cordl_internal_get_depthOfField() const;

constexpr bool& __cordl_internal_get_depthOfField() ;

constexpr float_t const& __cordl_internal_get_depthOfFieldAperture() const;

constexpr float_t& __cordl_internal_get_depthOfFieldAperture() ;

constexpr bool const& __cordl_internal_get_depthOfFieldAutofocus() const;

constexpr bool& __cordl_internal_get_depthOfFieldAutofocus() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_depthOfFieldAutofocusLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_depthOfFieldAutofocusLayerMask() ;

constexpr float_t const& __cordl_internal_get_depthOfFieldAutofocusMaxDistance() const;

constexpr float_t& __cordl_internal_get_depthOfFieldAutofocusMaxDistance() ;

constexpr float_t const& __cordl_internal_get_depthOfFieldAutofocusMinDistance() const;

constexpr float_t& __cordl_internal_get_depthOfFieldAutofocusMinDistance() ;

constexpr bool const& __cordl_internal_get_depthOfFieldBokeh() const;

constexpr bool& __cordl_internal_get_depthOfFieldBokeh() ;

constexpr float_t const& __cordl_internal_get_depthOfFieldBokehIntensity() const;

constexpr float_t& __cordl_internal_get_depthOfFieldBokehIntensity() ;

constexpr float_t const& __cordl_internal_get_depthOfFieldBokehThreshold() const;

constexpr float_t& __cordl_internal_get_depthOfFieldBokehThreshold() ;

constexpr float_t const& __cordl_internal_get_depthOfFieldDistance() const;

constexpr float_t& __cordl_internal_get_depthOfFieldDistance() ;

constexpr int32_t const& __cordl_internal_get_depthOfFieldDownsampling() const;

constexpr int32_t& __cordl_internal_get_depthOfFieldDownsampling() ;

constexpr float_t const& __cordl_internal_get_depthOfFieldExclusionBias() const;

constexpr float_t& __cordl_internal_get_depthOfFieldExclusionBias() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_depthOfFieldExclusionLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_depthOfFieldExclusionLayerMask() ;

constexpr float_t const& __cordl_internal_get_depthOfFieldExclusionLayerMaskDownsampling() const;

constexpr float_t& __cordl_internal_get_depthOfFieldExclusionLayerMaskDownsampling() ;

constexpr ::UnityEngine::FilterMode const& __cordl_internal_get_depthOfFieldFilterMode() const;

constexpr ::UnityEngine::FilterMode& __cordl_internal_get_depthOfFieldFilterMode() ;

constexpr float_t const& __cordl_internal_get_depthOfFieldFocalLength() const;

constexpr float_t& __cordl_internal_get_depthOfFieldFocalLength() ;

constexpr float_t const& __cordl_internal_get_depthOfFieldFocusSpeed() const;

constexpr float_t& __cordl_internal_get_depthOfFieldFocusSpeed() ;

constexpr bool const& __cordl_internal_get_depthOfFieldForegroundBlur() const;

constexpr bool& __cordl_internal_get_depthOfFieldForegroundBlur() ;

constexpr bool const& __cordl_internal_get_depthOfFieldForegroundBlurHQ() const;

constexpr bool& __cordl_internal_get_depthOfFieldForegroundBlurHQ() ;

constexpr float_t const& __cordl_internal_get_depthOfFieldForegroundDistance() const;

constexpr float_t& __cordl_internal_get_depthOfFieldForegroundDistance() ;

constexpr float_t const& __cordl_internal_get_depthOfFieldMaxBrightness() const;

constexpr float_t& __cordl_internal_get_depthOfFieldMaxBrightness() ;

constexpr float_t const& __cordl_internal_get_depthOfFieldMaxDistance() const;

constexpr float_t& __cordl_internal_get_depthOfFieldMaxDistance() ;

constexpr int32_t const& __cordl_internal_get_depthOfFieldMaxSamples() const;

constexpr int32_t& __cordl_internal_get_depthOfFieldMaxSamples() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_depthOfFieldTargetFocus() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_depthOfFieldTargetFocus() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_depthOfFieldTransparencyLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_depthOfFieldTransparencyLayerMask() ;

constexpr bool const& __cordl_internal_get_depthOfFieldTransparencySupport() const;

constexpr bool& __cordl_internal_get_depthOfFieldTransparencySupport() ;

constexpr float_t const& __cordl_internal_get_depthOfFieldTransparencySupportDownsampling() const;

constexpr float_t& __cordl_internal_get_depthOfFieldTransparencySupportDownsampling() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_depthofFieldAutofocusViewportPoint() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_depthofFieldAutofocusViewportPoint() ;

constexpr float_t const& __cordl_internal_get_dither() const;

constexpr float_t& __cordl_internal_get_dither() ;

constexpr float_t const& __cordl_internal_get_ditherDepth() const;

constexpr float_t& __cordl_internal_get_ditherDepth() ;

constexpr bool const& __cordl_internal_get_eyeAdaptation() const;

constexpr bool& __cordl_internal_get_eyeAdaptation() ;

constexpr float_t const& __cordl_internal_get_eyeAdaptationMaxExposure() const;

constexpr float_t& __cordl_internal_get_eyeAdaptationMaxExposure() ;

constexpr float_t const& __cordl_internal_get_eyeAdaptationMinExposure() const;

constexpr float_t& __cordl_internal_get_eyeAdaptationMinExposure() ;

constexpr float_t const& __cordl_internal_get_eyeAdaptationSpeedToDark() const;

constexpr float_t& __cordl_internal_get_eyeAdaptationSpeedToDark() ;

constexpr float_t const& __cordl_internal_get_eyeAdaptationSpeedToLight() const;

constexpr float_t& __cordl_internal_get_eyeAdaptationSpeedToLight() ;

constexpr bool const& __cordl_internal_get_frame() const;

constexpr bool& __cordl_internal_get_frame() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_frameColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_frameColor() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_frameMask() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_frameMask() ;

constexpr bool const& __cordl_internal_get_lensDirt() const;

constexpr bool& __cordl_internal_get_lensDirt() ;

constexpr float_t const& __cordl_internal_get_lensDirtIntensity() const;

constexpr float_t& __cordl_internal_get_lensDirtIntensity() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_lensDirtTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_lensDirtTexture() ;

constexpr float_t const& __cordl_internal_get_lensDirtThreshold() const;

constexpr float_t& __cordl_internal_get_lensDirtThreshold() ;

constexpr bool const& __cordl_internal_get_lut() const;

constexpr bool& __cordl_internal_get_lut() ;

constexpr float_t const& __cordl_internal_get_lutIntensity() const;

constexpr float_t& __cordl_internal_get_lutIntensity() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_lutTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_lutTexture() ;

constexpr bool const& __cordl_internal_get_nightVision() const;

constexpr bool& __cordl_internal_get_nightVision() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_nightVisionColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_nightVisionColor() ;

constexpr bool const& __cordl_internal_get_outline() const;

constexpr bool& __cordl_internal_get_outline() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_outlineColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_outlineColor() ;

constexpr int32_t const& __cordl_internal_get_pixelateAmount() const;

constexpr int32_t& __cordl_internal_get_pixelateAmount() ;

constexpr bool const& __cordl_internal_get_pixelateDownscale() const;

constexpr bool& __cordl_internal_get_pixelateDownscale() ;

constexpr bool const& __cordl_internal_get_purkinje() const;

constexpr bool& __cordl_internal_get_purkinje() ;

constexpr float_t const& __cordl_internal_get_purkinjeAmount() const;

constexpr float_t& __cordl_internal_get_purkinjeAmount() ;

constexpr float_t const& __cordl_internal_get_purkinjeLuminanceThreshold() const;

constexpr float_t& __cordl_internal_get_purkinjeLuminanceThreshold() ;

constexpr float_t const& __cordl_internal_get_saturate() const;

constexpr float_t& __cordl_internal_get_saturate() ;

constexpr float_t const& __cordl_internal_get_sharpen() const;

constexpr float_t& __cordl_internal_get_sharpen() ;

constexpr float_t const& __cordl_internal_get_sharpenClamp() const;

constexpr float_t& __cordl_internal_get_sharpenClamp() ;

constexpr float_t const& __cordl_internal_get_sharpenDepthThreshold() const;

constexpr float_t& __cordl_internal_get_sharpenDepthThreshold() ;

constexpr float_t const& __cordl_internal_get_sharpenMaxDepth() const;

constexpr float_t& __cordl_internal_get_sharpenMaxDepth() ;

constexpr float_t const& __cordl_internal_get_sharpenMinDepth() const;

constexpr float_t& __cordl_internal_get_sharpenMinDepth() ;

constexpr float_t const& __cordl_internal_get_sharpenMotionSensibility() const;

constexpr float_t& __cordl_internal_get_sharpenMotionSensibility() ;

constexpr float_t const& __cordl_internal_get_sharpenRelaxation() const;

constexpr float_t& __cordl_internal_get_sharpenRelaxation() ;

constexpr bool const& __cordl_internal_get_sunFlares() const;

constexpr bool& __cordl_internal_get_sunFlares() ;

constexpr float_t const& __cordl_internal_get_sunFlaresCoronaRays1AngleOffset() const;

constexpr float_t& __cordl_internal_get_sunFlaresCoronaRays1AngleOffset() ;

constexpr float_t const& __cordl_internal_get_sunFlaresCoronaRays1Length() const;

constexpr float_t& __cordl_internal_get_sunFlaresCoronaRays1Length() ;

constexpr float_t const& __cordl_internal_get_sunFlaresCoronaRays1Spread() const;

constexpr float_t& __cordl_internal_get_sunFlaresCoronaRays1Spread() ;

constexpr int32_t const& __cordl_internal_get_sunFlaresCoronaRays1Streaks() const;

constexpr int32_t& __cordl_internal_get_sunFlaresCoronaRays1Streaks() ;

constexpr float_t const& __cordl_internal_get_sunFlaresCoronaRays2AngleOffset() const;

constexpr float_t& __cordl_internal_get_sunFlaresCoronaRays2AngleOffset() ;

constexpr float_t const& __cordl_internal_get_sunFlaresCoronaRays2Length() const;

constexpr float_t& __cordl_internal_get_sunFlaresCoronaRays2Length() ;

constexpr float_t const& __cordl_internal_get_sunFlaresCoronaRays2Spread() const;

constexpr float_t& __cordl_internal_get_sunFlaresCoronaRays2Spread() ;

constexpr int32_t const& __cordl_internal_get_sunFlaresCoronaRays2Streaks() const;

constexpr int32_t& __cordl_internal_get_sunFlaresCoronaRays2Streaks() ;

constexpr int32_t const& __cordl_internal_get_sunFlaresDownsampling() const;

constexpr int32_t& __cordl_internal_get_sunFlaresDownsampling() ;

constexpr float_t const& __cordl_internal_get_sunFlaresGhosts1Brightness() const;

constexpr float_t& __cordl_internal_get_sunFlaresGhosts1Brightness() ;

constexpr float_t const& __cordl_internal_get_sunFlaresGhosts1Offset() const;

constexpr float_t& __cordl_internal_get_sunFlaresGhosts1Offset() ;

constexpr float_t const& __cordl_internal_get_sunFlaresGhosts1Size() const;

constexpr float_t& __cordl_internal_get_sunFlaresGhosts1Size() ;

constexpr float_t const& __cordl_internal_get_sunFlaresGhosts2Brightness() const;

constexpr float_t& __cordl_internal_get_sunFlaresGhosts2Brightness() ;

constexpr float_t const& __cordl_internal_get_sunFlaresGhosts2Offset() const;

constexpr float_t& __cordl_internal_get_sunFlaresGhosts2Offset() ;

constexpr float_t const& __cordl_internal_get_sunFlaresGhosts2Size() const;

constexpr float_t& __cordl_internal_get_sunFlaresGhosts2Size() ;

constexpr float_t const& __cordl_internal_get_sunFlaresGhosts3Brightness() const;

constexpr float_t& __cordl_internal_get_sunFlaresGhosts3Brightness() ;

constexpr float_t const& __cordl_internal_get_sunFlaresGhosts3Offset() const;

constexpr float_t& __cordl_internal_get_sunFlaresGhosts3Offset() ;

constexpr float_t const& __cordl_internal_get_sunFlaresGhosts3Size() const;

constexpr float_t& __cordl_internal_get_sunFlaresGhosts3Size() ;

constexpr float_t const& __cordl_internal_get_sunFlaresGhosts4Brightness() const;

constexpr float_t& __cordl_internal_get_sunFlaresGhosts4Brightness() ;

constexpr float_t const& __cordl_internal_get_sunFlaresGhosts4Offset() const;

constexpr float_t& __cordl_internal_get_sunFlaresGhosts4Offset() ;

constexpr float_t const& __cordl_internal_get_sunFlaresGhosts4Size() const;

constexpr float_t& __cordl_internal_get_sunFlaresGhosts4Size() ;

constexpr float_t const& __cordl_internal_get_sunFlaresHaloAmplitude() const;

constexpr float_t& __cordl_internal_get_sunFlaresHaloAmplitude() ;

constexpr float_t const& __cordl_internal_get_sunFlaresHaloIntensity() const;

constexpr float_t& __cordl_internal_get_sunFlaresHaloIntensity() ;

constexpr float_t const& __cordl_internal_get_sunFlaresHaloOffset() const;

constexpr float_t& __cordl_internal_get_sunFlaresHaloOffset() ;

constexpr float_t const& __cordl_internal_get_sunFlaresIntensity() const;

constexpr float_t& __cordl_internal_get_sunFlaresIntensity() ;

constexpr bool const& __cordl_internal_get_sunFlaresRotationDeadZone() const;

constexpr bool& __cordl_internal_get_sunFlaresRotationDeadZone() ;

constexpr float_t const& __cordl_internal_get_sunFlaresSolarWindSpeed() const;

constexpr float_t& __cordl_internal_get_sunFlaresSolarWindSpeed() ;

constexpr float_t const& __cordl_internal_get_sunFlaresSunDiskSize() const;

constexpr float_t& __cordl_internal_get_sunFlaresSunDiskSize() ;

constexpr float_t const& __cordl_internal_get_sunFlaresSunIntensity() const;

constexpr float_t& __cordl_internal_get_sunFlaresSunIntensity() ;

constexpr float_t const& __cordl_internal_get_sunFlaresSunRayDiffractionIntensity() const;

constexpr float_t& __cordl_internal_get_sunFlaresSunRayDiffractionIntensity() ;

constexpr float_t const& __cordl_internal_get_sunFlaresSunRayDiffractionThreshold() const;

constexpr float_t& __cordl_internal_get_sunFlaresSunRayDiffractionThreshold() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_sunFlaresTint() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_sunFlaresTint() ;

constexpr bool const& __cordl_internal_get_thermalVision() const;

constexpr bool& __cordl_internal_get_thermalVision() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_tintColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_tintColor() ;

constexpr ::BeautifyEffect::BEAUTIFY_TMO const& __cordl_internal_get_tonemap() const;

constexpr ::BeautifyEffect::BEAUTIFY_TMO& __cordl_internal_get_tonemap() ;

constexpr bool const& __cordl_internal_get_vignetting() const;

constexpr bool& __cordl_internal_get_vignetting() ;

constexpr float_t const& __cordl_internal_get_vignettingAspectRatio() const;

constexpr float_t& __cordl_internal_get_vignettingAspectRatio() ;

constexpr float_t const& __cordl_internal_get_vignettingBlink() const;

constexpr float_t& __cordl_internal_get_vignettingBlink() ;

constexpr bool const& __cordl_internal_get_vignettingCircularShape() const;

constexpr bool& __cordl_internal_get_vignettingCircularShape() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_vignettingColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_vignettingColor() ;

constexpr float_t const& __cordl_internal_get_vignettingFade() const;

constexpr float_t& __cordl_internal_get_vignettingFade() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_vignettingMask() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_vignettingMask() ;

constexpr void __cordl_internal_set_anamorphicFlares(bool  value) ;

constexpr void __cordl_internal_set_anamorphicFlaresAntiflicker(bool  value) ;

constexpr void __cordl_internal_set_anamorphicFlaresBlur(bool  value) ;

constexpr void __cordl_internal_set_anamorphicFlaresIntensity(float_t  value) ;

constexpr void __cordl_internal_set_anamorphicFlaresSpread(float_t  value) ;

constexpr void __cordl_internal_set_anamorphicFlaresThreshold(float_t  value) ;

constexpr void __cordl_internal_set_anamorphicFlaresTint(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_anamorphicFlaresUltra(bool  value) ;

constexpr void __cordl_internal_set_anamorphicFlaresVertical(bool  value) ;

constexpr void __cordl_internal_set_antialiasDepthThreshold(float_t  value) ;

constexpr void __cordl_internal_set_antialiasStrength(float_t  value) ;

constexpr void __cordl_internal_set_bloom(bool  value) ;

constexpr void __cordl_internal_set_bloomAntiflicker(bool  value) ;

constexpr void __cordl_internal_set_bloomBlur(bool  value) ;

constexpr void __cordl_internal_set_bloomBoost0(float_t  value) ;

constexpr void __cordl_internal_set_bloomBoost1(float_t  value) ;

constexpr void __cordl_internal_set_bloomBoost2(float_t  value) ;

constexpr void __cordl_internal_set_bloomBoost3(float_t  value) ;

constexpr void __cordl_internal_set_bloomBoost4(float_t  value) ;

constexpr void __cordl_internal_set_bloomBoost5(float_t  value) ;

constexpr void __cordl_internal_set_bloomCullingMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_bloomCustomize(bool  value) ;

constexpr void __cordl_internal_set_bloomDepthAtten(float_t  value) ;

constexpr void __cordl_internal_set_bloomIntensity(float_t  value) ;

constexpr void __cordl_internal_set_bloomLayerMaskDownsampling(float_t  value) ;

constexpr void __cordl_internal_set_bloomLayerZBias(float_t  value) ;

constexpr void __cordl_internal_set_bloomMaxBrightness(float_t  value) ;

constexpr void __cordl_internal_set_bloomThreshold(float_t  value) ;

constexpr void __cordl_internal_set_bloomUltra(bool  value) ;

constexpr void __cordl_internal_set_bloomWeight0(float_t  value) ;

constexpr void __cordl_internal_set_bloomWeight1(float_t  value) ;

constexpr void __cordl_internal_set_bloomWeight2(float_t  value) ;

constexpr void __cordl_internal_set_bloomWeight3(float_t  value) ;

constexpr void __cordl_internal_set_bloomWeight4(float_t  value) ;

constexpr void __cordl_internal_set_bloomWeight5(float_t  value) ;

constexpr void __cordl_internal_set_blur(bool  value) ;

constexpr void __cordl_internal_set_blurIntensity(float_t  value) ;

constexpr void __cordl_internal_set_brightness(float_t  value) ;

constexpr void __cordl_internal_set_contrast(float_t  value) ;

constexpr void __cordl_internal_set_daltonize(float_t  value) ;

constexpr void __cordl_internal_set_depthOfField(bool  value) ;

constexpr void __cordl_internal_set_depthOfFieldAperture(float_t  value) ;

constexpr void __cordl_internal_set_depthOfFieldAutofocus(bool  value) ;

constexpr void __cordl_internal_set_depthOfFieldAutofocusLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_depthOfFieldAutofocusMaxDistance(float_t  value) ;

constexpr void __cordl_internal_set_depthOfFieldAutofocusMinDistance(float_t  value) ;

constexpr void __cordl_internal_set_depthOfFieldBokeh(bool  value) ;

constexpr void __cordl_internal_set_depthOfFieldBokehIntensity(float_t  value) ;

constexpr void __cordl_internal_set_depthOfFieldBokehThreshold(float_t  value) ;

constexpr void __cordl_internal_set_depthOfFieldDistance(float_t  value) ;

constexpr void __cordl_internal_set_depthOfFieldDownsampling(int32_t  value) ;

constexpr void __cordl_internal_set_depthOfFieldExclusionBias(float_t  value) ;

constexpr void __cordl_internal_set_depthOfFieldExclusionLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_depthOfFieldExclusionLayerMaskDownsampling(float_t  value) ;

constexpr void __cordl_internal_set_depthOfFieldFilterMode(::UnityEngine::FilterMode  value) ;

constexpr void __cordl_internal_set_depthOfFieldFocalLength(float_t  value) ;

constexpr void __cordl_internal_set_depthOfFieldFocusSpeed(float_t  value) ;

constexpr void __cordl_internal_set_depthOfFieldForegroundBlur(bool  value) ;

constexpr void __cordl_internal_set_depthOfFieldForegroundBlurHQ(bool  value) ;

constexpr void __cordl_internal_set_depthOfFieldForegroundDistance(float_t  value) ;

constexpr void __cordl_internal_set_depthOfFieldMaxBrightness(float_t  value) ;

constexpr void __cordl_internal_set_depthOfFieldMaxDistance(float_t  value) ;

constexpr void __cordl_internal_set_depthOfFieldMaxSamples(int32_t  value) ;

constexpr void __cordl_internal_set_depthOfFieldTargetFocus(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_depthOfFieldTransparencyLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_depthOfFieldTransparencySupport(bool  value) ;

constexpr void __cordl_internal_set_depthOfFieldTransparencySupportDownsampling(float_t  value) ;

constexpr void __cordl_internal_set_depthofFieldAutofocusViewportPoint(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_dither(float_t  value) ;

constexpr void __cordl_internal_set_ditherDepth(float_t  value) ;

constexpr void __cordl_internal_set_eyeAdaptation(bool  value) ;

constexpr void __cordl_internal_set_eyeAdaptationMaxExposure(float_t  value) ;

constexpr void __cordl_internal_set_eyeAdaptationMinExposure(float_t  value) ;

constexpr void __cordl_internal_set_eyeAdaptationSpeedToDark(float_t  value) ;

constexpr void __cordl_internal_set_eyeAdaptationSpeedToLight(float_t  value) ;

constexpr void __cordl_internal_set_frame(bool  value) ;

constexpr void __cordl_internal_set_frameColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_frameMask(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_lensDirt(bool  value) ;

constexpr void __cordl_internal_set_lensDirtIntensity(float_t  value) ;

constexpr void __cordl_internal_set_lensDirtTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_lensDirtThreshold(float_t  value) ;

constexpr void __cordl_internal_set_lut(bool  value) ;

constexpr void __cordl_internal_set_lutIntensity(float_t  value) ;

constexpr void __cordl_internal_set_lutTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_nightVision(bool  value) ;

constexpr void __cordl_internal_set_nightVisionColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_outline(bool  value) ;

constexpr void __cordl_internal_set_outlineColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_pixelateAmount(int32_t  value) ;

constexpr void __cordl_internal_set_pixelateDownscale(bool  value) ;

constexpr void __cordl_internal_set_purkinje(bool  value) ;

constexpr void __cordl_internal_set_purkinjeAmount(float_t  value) ;

constexpr void __cordl_internal_set_purkinjeLuminanceThreshold(float_t  value) ;

constexpr void __cordl_internal_set_saturate(float_t  value) ;

constexpr void __cordl_internal_set_sharpen(float_t  value) ;

constexpr void __cordl_internal_set_sharpenClamp(float_t  value) ;

constexpr void __cordl_internal_set_sharpenDepthThreshold(float_t  value) ;

constexpr void __cordl_internal_set_sharpenMaxDepth(float_t  value) ;

constexpr void __cordl_internal_set_sharpenMinDepth(float_t  value) ;

constexpr void __cordl_internal_set_sharpenMotionSensibility(float_t  value) ;

constexpr void __cordl_internal_set_sharpenRelaxation(float_t  value) ;

constexpr void __cordl_internal_set_sunFlares(bool  value) ;

constexpr void __cordl_internal_set_sunFlaresCoronaRays1AngleOffset(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresCoronaRays1Length(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresCoronaRays1Spread(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresCoronaRays1Streaks(int32_t  value) ;

constexpr void __cordl_internal_set_sunFlaresCoronaRays2AngleOffset(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresCoronaRays2Length(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresCoronaRays2Spread(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresCoronaRays2Streaks(int32_t  value) ;

constexpr void __cordl_internal_set_sunFlaresDownsampling(int32_t  value) ;

constexpr void __cordl_internal_set_sunFlaresGhosts1Brightness(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresGhosts1Offset(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresGhosts1Size(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresGhosts2Brightness(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresGhosts2Offset(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresGhosts2Size(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresGhosts3Brightness(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresGhosts3Offset(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresGhosts3Size(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresGhosts4Brightness(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresGhosts4Offset(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresGhosts4Size(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresHaloAmplitude(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresHaloIntensity(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresHaloOffset(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresIntensity(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresRotationDeadZone(bool  value) ;

constexpr void __cordl_internal_set_sunFlaresSolarWindSpeed(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresSunDiskSize(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresSunIntensity(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresSunRayDiffractionIntensity(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresSunRayDiffractionThreshold(float_t  value) ;

constexpr void __cordl_internal_set_sunFlaresTint(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_thermalVision(bool  value) ;

constexpr void __cordl_internal_set_tintColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_tonemap(::BeautifyEffect::BEAUTIFY_TMO  value) ;

constexpr void __cordl_internal_set_vignetting(bool  value) ;

constexpr void __cordl_internal_set_vignettingAspectRatio(float_t  value) ;

constexpr void __cordl_internal_set_vignettingBlink(float_t  value) ;

constexpr void __cordl_internal_set_vignettingCircularShape(bool  value) ;

constexpr void __cordl_internal_set_vignettingColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_vignettingFade(float_t  value) ;

constexpr void __cordl_internal_set_vignettingMask(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x18196e8, size 0x254, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BeautifyProfile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BeautifyProfile", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeautifyProfile(BeautifyProfile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeautifyProfile", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeautifyProfile(BeautifyProfile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1844};

/// @brief Field dither, offset: 0x18, size: 0x4, def value: None
 float_t  ___dither;

/// @brief Field ditherDepth, offset: 0x1c, size: 0x4, def value: None
 float_t  ___ditherDepth;

/// @brief Field sharpenMinDepth, offset: 0x20, size: 0x4, def value: None
 float_t  ___sharpenMinDepth;

/// @brief Field sharpenMaxDepth, offset: 0x24, size: 0x4, def value: None
 float_t  ___sharpenMaxDepth;

/// @brief Field sharpen, offset: 0x28, size: 0x4, def value: None
 float_t  ___sharpen;

/// @brief Field sharpenDepthThreshold, offset: 0x2c, size: 0x4, def value: None
 float_t  ___sharpenDepthThreshold;

/// @brief Field tintColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ___tintColor;

/// @brief Field sharpenRelaxation, offset: 0x40, size: 0x4, def value: None
 float_t  ___sharpenRelaxation;

/// @brief Field sharpenClamp, offset: 0x44, size: 0x4, def value: None
 float_t  ___sharpenClamp;

/// @brief Field sharpenMotionSensibility, offset: 0x48, size: 0x4, def value: None
 float_t  ___sharpenMotionSensibility;

/// @brief Field antialiasStrength, offset: 0x4c, size: 0x4, def value: None
 float_t  ___antialiasStrength;

/// @brief Field antialiasDepthThreshold, offset: 0x50, size: 0x4, def value: None
 float_t  ___antialiasDepthThreshold;

/// @brief Field saturate, offset: 0x54, size: 0x4, def value: None
 float_t  ___saturate;

/// @brief Field contrast, offset: 0x58, size: 0x4, def value: None
 float_t  ___contrast;

/// @brief Field brightness, offset: 0x5c, size: 0x4, def value: None
 float_t  ___brightness;

/// @brief Field daltonize, offset: 0x60, size: 0x4, def value: None
 float_t  ___daltonize;

/// @brief Field vignetting, offset: 0x64, size: 0x1, def value: None
 bool  ___vignetting;

/// @brief Field vignettingColor, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::Color  ___vignettingColor;

/// @brief Field vignettingFade, offset: 0x78, size: 0x4, def value: None
 float_t  ___vignettingFade;

/// @brief Field vignettingCircularShape, offset: 0x7c, size: 0x1, def value: None
 bool  ___vignettingCircularShape;

/// @brief Field vignettingAspectRatio, offset: 0x80, size: 0x4, def value: None
 float_t  ___vignettingAspectRatio;

/// @brief Field vignettingBlink, offset: 0x84, size: 0x4, def value: None
 float_t  ___vignettingBlink;

/// @brief Field vignettingMask, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___vignettingMask;

/// @brief Field frame, offset: 0x90, size: 0x1, def value: None
 bool  ___frame;

/// @brief Field frameColor, offset: 0x94, size: 0x10, def value: None
 ::UnityEngine::Color  ___frameColor;

/// @brief Field frameMask, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___frameMask;

/// @brief Field lut, offset: 0xb0, size: 0x1, def value: None
 bool  ___lut;

/// @brief Field lutIntensity, offset: 0xb4, size: 0x4, def value: None
 float_t  ___lutIntensity;

/// @brief Field lutTexture, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___lutTexture;

/// @brief Field nightVision, offset: 0xc0, size: 0x1, def value: None
 bool  ___nightVision;

/// @brief Field nightVisionColor, offset: 0xc4, size: 0x10, def value: None
 ::UnityEngine::Color  ___nightVisionColor;

/// @brief Field outline, offset: 0xd4, size: 0x1, def value: None
 bool  ___outline;

/// @brief Field outlineColor, offset: 0xd8, size: 0x10, def value: None
 ::UnityEngine::Color  ___outlineColor;

/// @brief Field thermalVision, offset: 0xe8, size: 0x1, def value: None
 bool  ___thermalVision;

/// @brief Field lensDirt, offset: 0xe9, size: 0x1, def value: None
 bool  ___lensDirt;

/// @brief Field lensDirtThreshold, offset: 0xec, size: 0x4, def value: None
 float_t  ___lensDirtThreshold;

/// @brief Field lensDirtIntensity, offset: 0xf0, size: 0x4, def value: None
 float_t  ___lensDirtIntensity;

/// @brief Field lensDirtTexture, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___lensDirtTexture;

/// @brief Field bloom, offset: 0x100, size: 0x1, def value: None
 bool  ___bloom;

/// @brief Field bloomCullingMask, offset: 0x104, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___bloomCullingMask;

/// @brief Field bloomLayerMaskDownsampling, offset: 0x108, size: 0x4, def value: None
 float_t  ___bloomLayerMaskDownsampling;

/// @brief Field bloomIntensity, offset: 0x10c, size: 0x4, def value: None
 float_t  ___bloomIntensity;

/// @brief Field bloomMaxBrightness, offset: 0x110, size: 0x4, def value: None
 float_t  ___bloomMaxBrightness;

/// @brief Field bloomBoost0, offset: 0x114, size: 0x4, def value: None
 float_t  ___bloomBoost0;

/// @brief Field bloomBoost1, offset: 0x118, size: 0x4, def value: None
 float_t  ___bloomBoost1;

/// @brief Field bloomBoost2, offset: 0x11c, size: 0x4, def value: None
 float_t  ___bloomBoost2;

/// @brief Field bloomBoost3, offset: 0x120, size: 0x4, def value: None
 float_t  ___bloomBoost3;

/// @brief Field bloomBoost4, offset: 0x124, size: 0x4, def value: None
 float_t  ___bloomBoost4;

/// @brief Field bloomBoost5, offset: 0x128, size: 0x4, def value: None
 float_t  ___bloomBoost5;

/// @brief Field bloomAntiflicker, offset: 0x12c, size: 0x1, def value: None
 bool  ___bloomAntiflicker;

/// @brief Field bloomUltra, offset: 0x12d, size: 0x1, def value: None
 bool  ___bloomUltra;

/// @brief Field bloomThreshold, offset: 0x130, size: 0x4, def value: None
 float_t  ___bloomThreshold;

/// @brief Field bloomCustomize, offset: 0x134, size: 0x1, def value: None
 bool  ___bloomCustomize;

/// @brief Field bloomWeight0, offset: 0x138, size: 0x4, def value: None
 float_t  ___bloomWeight0;

/// @brief Field bloomWeight1, offset: 0x13c, size: 0x4, def value: None
 float_t  ___bloomWeight1;

/// @brief Field bloomWeight2, offset: 0x140, size: 0x4, def value: None
 float_t  ___bloomWeight2;

/// @brief Field bloomWeight3, offset: 0x144, size: 0x4, def value: None
 float_t  ___bloomWeight3;

/// @brief Field bloomWeight4, offset: 0x148, size: 0x4, def value: None
 float_t  ___bloomWeight4;

/// @brief Field bloomWeight5, offset: 0x14c, size: 0x4, def value: None
 float_t  ___bloomWeight5;

/// @brief Field bloomBlur, offset: 0x150, size: 0x1, def value: None
 bool  ___bloomBlur;

/// @brief Field bloomDepthAtten, offset: 0x154, size: 0x4, def value: None
 float_t  ___bloomDepthAtten;

/// @brief Field bloomLayerZBias, offset: 0x158, size: 0x4, def value: None
 float_t  ___bloomLayerZBias;

/// @brief Field anamorphicFlares, offset: 0x15c, size: 0x1, def value: None
 bool  ___anamorphicFlares;

/// @brief Field anamorphicFlaresIntensity, offset: 0x160, size: 0x4, def value: None
 float_t  ___anamorphicFlaresIntensity;

/// @brief Field anamorphicFlaresAntiflicker, offset: 0x164, size: 0x1, def value: None
 bool  ___anamorphicFlaresAntiflicker;

/// @brief Field anamorphicFlaresUltra, offset: 0x165, size: 0x1, def value: None
 bool  ___anamorphicFlaresUltra;

/// @brief Field anamorphicFlaresThreshold, offset: 0x168, size: 0x4, def value: None
 float_t  ___anamorphicFlaresThreshold;

/// @brief Field anamorphicFlaresSpread, offset: 0x16c, size: 0x4, def value: None
 float_t  ___anamorphicFlaresSpread;

/// @brief Field anamorphicFlaresVertical, offset: 0x170, size: 0x1, def value: None
 bool  ___anamorphicFlaresVertical;

/// @brief Field anamorphicFlaresTint, offset: 0x174, size: 0x10, def value: None
 ::UnityEngine::Color  ___anamorphicFlaresTint;

/// @brief Field anamorphicFlaresBlur, offset: 0x184, size: 0x1, def value: None
 bool  ___anamorphicFlaresBlur;

/// @brief Field depthOfField, offset: 0x185, size: 0x1, def value: None
 bool  ___depthOfField;

/// @brief Field depthOfFieldTransparencySupport, offset: 0x186, size: 0x1, def value: None
 bool  ___depthOfFieldTransparencySupport;

/// @brief Field depthOfFieldTargetFocus, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___depthOfFieldTargetFocus;

/// @brief Field depthOfFieldAutofocus, offset: 0x190, size: 0x1, def value: None
 bool  ___depthOfFieldAutofocus;

/// @brief Field depthofFieldAutofocusViewportPoint, offset: 0x194, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___depthofFieldAutofocusViewportPoint;

/// @brief Field depthOfFieldAutofocusLayerMask, offset: 0x19c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___depthOfFieldAutofocusLayerMask;

/// @brief Field depthOfFieldAutofocusMinDistance, offset: 0x1a0, size: 0x4, def value: None
 float_t  ___depthOfFieldAutofocusMinDistance;

/// @brief Field depthOfFieldAutofocusMaxDistance, offset: 0x1a4, size: 0x4, def value: None
 float_t  ___depthOfFieldAutofocusMaxDistance;

/// @brief Field depthOfFieldExclusionLayerMask, offset: 0x1a8, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___depthOfFieldExclusionLayerMask;

/// @brief Field depthOfFieldExclusionLayerMaskDownsampling, offset: 0x1ac, size: 0x4, def value: None
 float_t  ___depthOfFieldExclusionLayerMaskDownsampling;

/// @brief Field depthOfFieldTransparencySupportDownsampling, offset: 0x1b0, size: 0x4, def value: None
 float_t  ___depthOfFieldTransparencySupportDownsampling;

/// @brief Field depthOfFieldExclusionBias, offset: 0x1b4, size: 0x4, def value: None
 float_t  ___depthOfFieldExclusionBias;

/// @brief Field depthOfFieldDistance, offset: 0x1b8, size: 0x4, def value: None
 float_t  ___depthOfFieldDistance;

/// @brief Field depthOfFieldFocusSpeed, offset: 0x1bc, size: 0x4, def value: None
 float_t  ___depthOfFieldFocusSpeed;

/// @brief Field depthOfFieldDownsampling, offset: 0x1c0, size: 0x4, def value: None
 int32_t  ___depthOfFieldDownsampling;

/// @brief Field depthOfFieldMaxSamples, offset: 0x1c4, size: 0x4, def value: None
 int32_t  ___depthOfFieldMaxSamples;

/// @brief Field depthOfFieldFocalLength, offset: 0x1c8, size: 0x4, def value: None
 float_t  ___depthOfFieldFocalLength;

/// @brief Field depthOfFieldAperture, offset: 0x1cc, size: 0x4, def value: None
 float_t  ___depthOfFieldAperture;

/// @brief Field depthOfFieldForegroundBlur, offset: 0x1d0, size: 0x1, def value: None
 bool  ___depthOfFieldForegroundBlur;

/// @brief Field depthOfFieldForegroundBlurHQ, offset: 0x1d1, size: 0x1, def value: None
 bool  ___depthOfFieldForegroundBlurHQ;

/// @brief Field depthOfFieldForegroundDistance, offset: 0x1d4, size: 0x4, def value: None
 float_t  ___depthOfFieldForegroundDistance;

/// @brief Field depthOfFieldBokeh, offset: 0x1d8, size: 0x1, def value: None
 bool  ___depthOfFieldBokeh;

/// @brief Field depthOfFieldBokehThreshold, offset: 0x1dc, size: 0x4, def value: None
 float_t  ___depthOfFieldBokehThreshold;

/// @brief Field depthOfFieldBokehIntensity, offset: 0x1e0, size: 0x4, def value: None
 float_t  ___depthOfFieldBokehIntensity;

/// @brief Field depthOfFieldMaxBrightness, offset: 0x1e4, size: 0x4, def value: None
 float_t  ___depthOfFieldMaxBrightness;

/// @brief Field depthOfFieldMaxDistance, offset: 0x1e8, size: 0x4, def value: None
 float_t  ___depthOfFieldMaxDistance;

/// @brief Field depthOfFieldFilterMode, offset: 0x1ec, size: 0x4, def value: None
 ::UnityEngine::FilterMode  ___depthOfFieldFilterMode;

/// @brief Field depthOfFieldTransparencyLayerMask, offset: 0x1f0, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___depthOfFieldTransparencyLayerMask;

/// @brief Field eyeAdaptation, offset: 0x1f4, size: 0x1, def value: None
 bool  ___eyeAdaptation;

/// @brief Field eyeAdaptationMinExposure, offset: 0x1f8, size: 0x4, def value: None
 float_t  ___eyeAdaptationMinExposure;

/// @brief Field eyeAdaptationMaxExposure, offset: 0x1fc, size: 0x4, def value: None
 float_t  ___eyeAdaptationMaxExposure;

/// @brief Field eyeAdaptationSpeedToLight, offset: 0x200, size: 0x4, def value: None
 float_t  ___eyeAdaptationSpeedToLight;

/// @brief Field eyeAdaptationSpeedToDark, offset: 0x204, size: 0x4, def value: None
 float_t  ___eyeAdaptationSpeedToDark;

/// @brief Field purkinje, offset: 0x208, size: 0x1, def value: None
 bool  ___purkinje;

/// @brief Field purkinjeAmount, offset: 0x20c, size: 0x4, def value: None
 float_t  ___purkinjeAmount;

/// @brief Field purkinjeLuminanceThreshold, offset: 0x210, size: 0x4, def value: None
 float_t  ___purkinjeLuminanceThreshold;

/// @brief Field tonemap, offset: 0x214, size: 0x4, def value: None
 ::BeautifyEffect::BEAUTIFY_TMO  ___tonemap;

/// @brief Field sunFlares, offset: 0x218, size: 0x1, def value: None
 bool  ___sunFlares;

/// @brief Field sunFlaresIntensity, offset: 0x21c, size: 0x4, def value: None
 float_t  ___sunFlaresIntensity;

/// @brief Field sunFlaresSolarWindSpeed, offset: 0x220, size: 0x4, def value: None
 float_t  ___sunFlaresSolarWindSpeed;

/// @brief Field sunFlaresTint, offset: 0x224, size: 0x10, def value: None
 ::UnityEngine::Color  ___sunFlaresTint;

/// @brief Field sunFlaresDownsampling, offset: 0x234, size: 0x4, def value: None
 int32_t  ___sunFlaresDownsampling;

/// @brief Field sunFlaresSunIntensity, offset: 0x238, size: 0x4, def value: None
 float_t  ___sunFlaresSunIntensity;

/// @brief Field sunFlaresSunDiskSize, offset: 0x23c, size: 0x4, def value: None
 float_t  ___sunFlaresSunDiskSize;

/// @brief Field sunFlaresSunRayDiffractionIntensity, offset: 0x240, size: 0x4, def value: None
 float_t  ___sunFlaresSunRayDiffractionIntensity;

/// @brief Field sunFlaresSunRayDiffractionThreshold, offset: 0x244, size: 0x4, def value: None
 float_t  ___sunFlaresSunRayDiffractionThreshold;

/// @brief Field sunFlaresCoronaRays1Length, offset: 0x248, size: 0x4, def value: None
 float_t  ___sunFlaresCoronaRays1Length;

/// @brief Field sunFlaresCoronaRays1Streaks, offset: 0x24c, size: 0x4, def value: None
 int32_t  ___sunFlaresCoronaRays1Streaks;

/// @brief Field sunFlaresCoronaRays1Spread, offset: 0x250, size: 0x4, def value: None
 float_t  ___sunFlaresCoronaRays1Spread;

/// @brief Field sunFlaresCoronaRays1AngleOffset, offset: 0x254, size: 0x4, def value: None
 float_t  ___sunFlaresCoronaRays1AngleOffset;

/// @brief Field sunFlaresCoronaRays2Length, offset: 0x258, size: 0x4, def value: None
 float_t  ___sunFlaresCoronaRays2Length;

/// @brief Field sunFlaresCoronaRays2Streaks, offset: 0x25c, size: 0x4, def value: None
 int32_t  ___sunFlaresCoronaRays2Streaks;

/// @brief Field sunFlaresCoronaRays2Spread, offset: 0x260, size: 0x4, def value: None
 float_t  ___sunFlaresCoronaRays2Spread;

/// @brief Field sunFlaresCoronaRays2AngleOffset, offset: 0x264, size: 0x4, def value: None
 float_t  ___sunFlaresCoronaRays2AngleOffset;

/// @brief Field sunFlaresGhosts1Size, offset: 0x268, size: 0x4, def value: None
 float_t  ___sunFlaresGhosts1Size;

/// @brief Field sunFlaresGhosts1Offset, offset: 0x26c, size: 0x4, def value: None
 float_t  ___sunFlaresGhosts1Offset;

/// @brief Field sunFlaresGhosts1Brightness, offset: 0x270, size: 0x4, def value: None
 float_t  ___sunFlaresGhosts1Brightness;

/// @brief Field sunFlaresGhosts2Size, offset: 0x274, size: 0x4, def value: None
 float_t  ___sunFlaresGhosts2Size;

/// @brief Field sunFlaresGhosts2Offset, offset: 0x278, size: 0x4, def value: None
 float_t  ___sunFlaresGhosts2Offset;

/// @brief Field sunFlaresGhosts2Brightness, offset: 0x27c, size: 0x4, def value: None
 float_t  ___sunFlaresGhosts2Brightness;

/// @brief Field sunFlaresGhosts3Size, offset: 0x280, size: 0x4, def value: None
 float_t  ___sunFlaresGhosts3Size;

/// @brief Field sunFlaresGhosts3Brightness, offset: 0x284, size: 0x4, def value: None
 float_t  ___sunFlaresGhosts3Brightness;

/// @brief Field sunFlaresGhosts3Offset, offset: 0x288, size: 0x4, def value: None
 float_t  ___sunFlaresGhosts3Offset;

/// @brief Field sunFlaresGhosts4Size, offset: 0x28c, size: 0x4, def value: None
 float_t  ___sunFlaresGhosts4Size;

/// @brief Field sunFlaresGhosts4Offset, offset: 0x290, size: 0x4, def value: None
 float_t  ___sunFlaresGhosts4Offset;

/// @brief Field sunFlaresGhosts4Brightness, offset: 0x294, size: 0x4, def value: None
 float_t  ___sunFlaresGhosts4Brightness;

/// @brief Field sunFlaresHaloOffset, offset: 0x298, size: 0x4, def value: None
 float_t  ___sunFlaresHaloOffset;

/// @brief Field sunFlaresHaloAmplitude, offset: 0x29c, size: 0x4, def value: None
 float_t  ___sunFlaresHaloAmplitude;

/// @brief Field sunFlaresHaloIntensity, offset: 0x2a0, size: 0x4, def value: None
 float_t  ___sunFlaresHaloIntensity;

/// @brief Field sunFlaresRotationDeadZone, offset: 0x2a4, size: 0x1, def value: None
 bool  ___sunFlaresRotationDeadZone;

/// @brief Field blur, offset: 0x2a5, size: 0x1, def value: None
 bool  ___blur;

/// @brief Field blurIntensity, offset: 0x2a8, size: 0x4, def value: None
 float_t  ___blurIntensity;

/// @brief Field pixelateAmount, offset: 0x2ac, size: 0x4, def value: None
 int32_t  ___pixelateAmount;

/// @brief Field pixelateDownscale, offset: 0x2b0, size: 0x1, def value: None
 bool  ___pixelateDownscale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___dither) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___ditherDepth) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sharpenMinDepth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sharpenMaxDepth) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sharpen) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sharpenDepthThreshold) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___tintColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sharpenRelaxation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sharpenClamp) == 0x44, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sharpenMotionSensibility) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___antialiasStrength) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___antialiasDepthThreshold) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___saturate) == 0x54, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___contrast) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___brightness) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___daltonize) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___vignetting) == 0x64, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___vignettingColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___vignettingFade) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___vignettingCircularShape) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___vignettingAspectRatio) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___vignettingBlink) == 0x84, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___vignettingMask) == 0x88, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___frame) == 0x90, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___frameColor) == 0x94, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___frameMask) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___lut) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___lutIntensity) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___lutTexture) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___nightVision) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___nightVisionColor) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___outline) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___outlineColor) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___thermalVision) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___lensDirt) == 0xe9, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___lensDirtThreshold) == 0xec, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___lensDirtIntensity) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___lensDirtTexture) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloom) == 0x100, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomCullingMask) == 0x104, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomLayerMaskDownsampling) == 0x108, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomIntensity) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomMaxBrightness) == 0x110, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomBoost0) == 0x114, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomBoost1) == 0x118, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomBoost2) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomBoost3) == 0x120, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomBoost4) == 0x124, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomBoost5) == 0x128, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomAntiflicker) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomUltra) == 0x12d, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomThreshold) == 0x130, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomCustomize) == 0x134, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomWeight0) == 0x138, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomWeight1) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomWeight2) == 0x140, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomWeight3) == 0x144, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomWeight4) == 0x148, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomWeight5) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomBlur) == 0x150, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomDepthAtten) == 0x154, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___bloomLayerZBias) == 0x158, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___anamorphicFlares) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___anamorphicFlaresIntensity) == 0x160, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___anamorphicFlaresAntiflicker) == 0x164, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___anamorphicFlaresUltra) == 0x165, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___anamorphicFlaresThreshold) == 0x168, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___anamorphicFlaresSpread) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___anamorphicFlaresVertical) == 0x170, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___anamorphicFlaresTint) == 0x174, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___anamorphicFlaresBlur) == 0x184, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfField) == 0x185, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldTransparencySupport) == 0x186, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldTargetFocus) == 0x188, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldAutofocus) == 0x190, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthofFieldAutofocusViewportPoint) == 0x194, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldAutofocusLayerMask) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldAutofocusMinDistance) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldAutofocusMaxDistance) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldExclusionLayerMask) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldExclusionLayerMaskDownsampling) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldTransparencySupportDownsampling) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldExclusionBias) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldDistance) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldFocusSpeed) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldDownsampling) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldMaxSamples) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldFocalLength) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldAperture) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldForegroundBlur) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldForegroundBlurHQ) == 0x1d1, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldForegroundDistance) == 0x1d4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldBokeh) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldBokehThreshold) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldBokehIntensity) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldMaxBrightness) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldMaxDistance) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldFilterMode) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___depthOfFieldTransparencyLayerMask) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___eyeAdaptation) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___eyeAdaptationMinExposure) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___eyeAdaptationMaxExposure) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___eyeAdaptationSpeedToLight) == 0x200, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___eyeAdaptationSpeedToDark) == 0x204, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___purkinje) == 0x208, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___purkinjeAmount) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___purkinjeLuminanceThreshold) == 0x210, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___tonemap) == 0x214, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlares) == 0x218, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresIntensity) == 0x21c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresSolarWindSpeed) == 0x220, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresTint) == 0x224, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresDownsampling) == 0x234, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresSunIntensity) == 0x238, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresSunDiskSize) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresSunRayDiffractionIntensity) == 0x240, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresSunRayDiffractionThreshold) == 0x244, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresCoronaRays1Length) == 0x248, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresCoronaRays1Streaks) == 0x24c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresCoronaRays1Spread) == 0x250, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresCoronaRays1AngleOffset) == 0x254, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresCoronaRays2Length) == 0x258, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresCoronaRays2Streaks) == 0x25c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresCoronaRays2Spread) == 0x260, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresCoronaRays2AngleOffset) == 0x264, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresGhosts1Size) == 0x268, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresGhosts1Offset) == 0x26c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresGhosts1Brightness) == 0x270, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresGhosts2Size) == 0x274, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresGhosts2Offset) == 0x278, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresGhosts2Brightness) == 0x27c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresGhosts3Size) == 0x280, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresGhosts3Brightness) == 0x284, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresGhosts3Offset) == 0x288, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresGhosts4Size) == 0x28c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresGhosts4Offset) == 0x290, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresGhosts4Brightness) == 0x294, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresHaloOffset) == 0x298, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresHaloAmplitude) == 0x29c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresHaloIntensity) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___sunFlaresRotationDeadZone) == 0x2a4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___blur) == 0x2a5, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___blurIntensity) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___pixelateAmount) == 0x2ac, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::BeautifyProfile, ___pixelateDownscale) == 0x2b0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeautifyEffect::BeautifyProfile, 0x2b8>, "Size mismatch!");

} // namespace end def BeautifyEffect
NEED_NO_BOX(::BeautifyEffect::BeautifyProfile);
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::BeautifyProfile*, "BeautifyEffect", "BeautifyProfile");
