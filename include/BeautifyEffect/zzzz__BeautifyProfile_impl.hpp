#pragma once
// IWYU pragma private; include "BeautifyEffect/BeautifyProfile.hpp"
#include "BeautifyEffect/zzzz__BEAUTIFY_TMO_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__FilterMode_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "BeautifyEffect/zzzz__BeautifyProfile_def.hpp"
#include "BeautifyEffect/zzzz__Beautify_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::BeautifyEffect::BeautifyProfile.Load
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeautifyEffect::BeautifyProfile::*)(::BeautifyEffect::Beautify*)>(&::BeautifyEffect::BeautifyProfile::Load)> {
  constexpr static std::size_t size = 0x109c;
  constexpr static std::size_t addrs = 0x180fd20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::BeautifyProfile*>::get(),
                        "Load",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeautifyEffect::Beautify*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeautifyEffect::BeautifyProfile.Save
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeautifyEffect::BeautifyProfile::*)(::BeautifyEffect::Beautify*)>(&::BeautifyEffect::BeautifyProfile::Save)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x18193cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::BeautifyProfile*>::get(),
                        "Save",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeautifyEffect::Beautify*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeautifyEffect::BeautifyProfile._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeautifyEffect::BeautifyProfile::*)()>(&::BeautifyEffect::BeautifyProfile::_ctor)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x18196e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::BeautifyProfile*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_dither()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dither;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_dither() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dither;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_dither(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dither = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_ditherDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ditherDepth;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_ditherDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ditherDepth;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_ditherDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ditherDepth = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sharpenMinDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharpenMinDepth;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sharpenMinDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharpenMinDepth;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sharpenMinDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharpenMinDepth = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sharpenMaxDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharpenMaxDepth;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sharpenMaxDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharpenMaxDepth;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sharpenMaxDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharpenMaxDepth = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sharpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharpen;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sharpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharpen;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sharpen(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharpen = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sharpenDepthThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharpenDepthThreshold;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sharpenDepthThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharpenDepthThreshold;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sharpenDepthThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharpenDepthThreshold = value;
}
constexpr ::UnityEngine::Color& BeautifyEffect::BeautifyProfile::__cordl_internal_get_tintColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tintColor;
}
constexpr ::UnityEngine::Color const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_tintColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tintColor;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_tintColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tintColor = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sharpenRelaxation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharpenRelaxation;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sharpenRelaxation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharpenRelaxation;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sharpenRelaxation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharpenRelaxation = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sharpenClamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharpenClamp;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sharpenClamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharpenClamp;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sharpenClamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharpenClamp = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sharpenMotionSensibility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharpenMotionSensibility;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sharpenMotionSensibility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharpenMotionSensibility;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sharpenMotionSensibility(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharpenMotionSensibility = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_antialiasStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___antialiasStrength;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_antialiasStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___antialiasStrength;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_antialiasStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___antialiasStrength = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_antialiasDepthThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___antialiasDepthThreshold;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_antialiasDepthThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___antialiasDepthThreshold;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_antialiasDepthThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___antialiasDepthThreshold = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_saturate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saturate;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_saturate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saturate;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_saturate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saturate = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_contrast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contrast;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_contrast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contrast;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_contrast(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contrast = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_brightness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brightness;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_brightness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___brightness;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_brightness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___brightness = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_daltonize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___daltonize;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_daltonize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___daltonize;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_daltonize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___daltonize = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_vignetting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vignetting;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_vignetting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vignetting;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_vignetting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vignetting = value;
}
constexpr ::UnityEngine::Color& BeautifyEffect::BeautifyProfile::__cordl_internal_get_vignettingColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vignettingColor;
}
constexpr ::UnityEngine::Color const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_vignettingColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vignettingColor;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_vignettingColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vignettingColor = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_vignettingFade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vignettingFade;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_vignettingFade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vignettingFade;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_vignettingFade(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vignettingFade = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_vignettingCircularShape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vignettingCircularShape;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_vignettingCircularShape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vignettingCircularShape;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_vignettingCircularShape(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vignettingCircularShape = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_vignettingAspectRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vignettingAspectRatio;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_vignettingAspectRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vignettingAspectRatio;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_vignettingAspectRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vignettingAspectRatio = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_vignettingBlink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vignettingBlink;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_vignettingBlink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vignettingBlink;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_vignettingBlink(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vignettingBlink = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& BeautifyEffect::BeautifyProfile::__cordl_internal_get_vignettingMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vignettingMask;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_vignettingMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vignettingMask;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_vignettingMask(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___vignettingMask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_frame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frame;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_frame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frame;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_frame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frame = value;
}
constexpr ::UnityEngine::Color& BeautifyEffect::BeautifyProfile::__cordl_internal_get_frameColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameColor;
}
constexpr ::UnityEngine::Color const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_frameColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameColor;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_frameColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameColor = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& BeautifyEffect::BeautifyProfile::__cordl_internal_get_frameMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameMask;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_frameMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameMask;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_frameMask(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___frameMask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_lut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lut;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_lut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lut;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_lut(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lut = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_lutIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lutIntensity;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_lutIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lutIntensity;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_lutIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lutIntensity = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& BeautifyEffect::BeautifyProfile::__cordl_internal_get_lutTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lutTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_lutTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lutTexture;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_lutTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lutTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_nightVision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nightVision;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_nightVision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nightVision;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_nightVision(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nightVision = value;
}
constexpr ::UnityEngine::Color& BeautifyEffect::BeautifyProfile::__cordl_internal_get_nightVisionColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nightVisionColor;
}
constexpr ::UnityEngine::Color const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_nightVisionColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nightVisionColor;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_nightVisionColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nightVisionColor = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_outline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outline;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_outline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outline;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_outline(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outline = value;
}
constexpr ::UnityEngine::Color& BeautifyEffect::BeautifyProfile::__cordl_internal_get_outlineColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outlineColor;
}
constexpr ::UnityEngine::Color const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_outlineColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outlineColor;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_outlineColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outlineColor = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_thermalVision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thermalVision;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_thermalVision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thermalVision;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_thermalVision(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thermalVision = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_lensDirt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lensDirt;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_lensDirt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lensDirt;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_lensDirt(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lensDirt = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_lensDirtThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lensDirtThreshold;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_lensDirtThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lensDirtThreshold;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_lensDirtThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lensDirtThreshold = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_lensDirtIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lensDirtIntensity;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_lensDirtIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lensDirtIntensity;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_lensDirtIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lensDirtIntensity = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& BeautifyEffect::BeautifyProfile::__cordl_internal_get_lensDirtTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lensDirtTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_lensDirtTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lensDirtTexture;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_lensDirtTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lensDirtTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloom;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloom;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloom = value;
}
constexpr ::UnityEngine::LayerMask& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomCullingMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomCullingMask;
}
constexpr ::UnityEngine::LayerMask const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomCullingMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomCullingMask;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomCullingMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomCullingMask = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomLayerMaskDownsampling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomLayerMaskDownsampling;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomLayerMaskDownsampling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomLayerMaskDownsampling;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomLayerMaskDownsampling(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomLayerMaskDownsampling = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomIntensity;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomIntensity;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomIntensity = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomMaxBrightness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomMaxBrightness;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomMaxBrightness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomMaxBrightness;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomMaxBrightness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomMaxBrightness = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomBoost0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomBoost0;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomBoost0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomBoost0;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomBoost0(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomBoost0 = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomBoost1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomBoost1;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomBoost1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomBoost1;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomBoost1(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomBoost1 = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomBoost2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomBoost2;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomBoost2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomBoost2;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomBoost2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomBoost2 = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomBoost3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomBoost3;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomBoost3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomBoost3;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomBoost3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomBoost3 = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomBoost4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomBoost4;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomBoost4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomBoost4;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomBoost4(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomBoost4 = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomBoost5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomBoost5;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomBoost5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomBoost5;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomBoost5(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomBoost5 = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomAntiflicker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomAntiflicker;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomAntiflicker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomAntiflicker;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomAntiflicker(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomAntiflicker = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomUltra()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomUltra;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomUltra() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomUltra;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomUltra(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomUltra = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomThreshold;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomThreshold;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomThreshold = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomCustomize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomCustomize;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomCustomize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomCustomize;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomCustomize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomCustomize = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomWeight0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomWeight0;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomWeight0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomWeight0;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomWeight0(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomWeight0 = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomWeight1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomWeight1;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomWeight1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomWeight1;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomWeight1(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomWeight1 = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomWeight2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomWeight2;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomWeight2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomWeight2;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomWeight2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomWeight2 = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomWeight3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomWeight3;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomWeight3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomWeight3;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomWeight3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomWeight3 = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomWeight4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomWeight4;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomWeight4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomWeight4;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomWeight4(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomWeight4 = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomWeight5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomWeight5;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomWeight5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomWeight5;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomWeight5(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomWeight5 = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomBlur()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomBlur;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomBlur() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomBlur;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomBlur(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomBlur = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomDepthAtten()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomDepthAtten;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomDepthAtten() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomDepthAtten;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomDepthAtten(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomDepthAtten = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomLayerZBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomLayerZBias;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_bloomLayerZBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloomLayerZBias;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_bloomLayerZBias(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloomLayerZBias = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_anamorphicFlares()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anamorphicFlares;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_anamorphicFlares() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anamorphicFlares;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_anamorphicFlares(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anamorphicFlares = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_anamorphicFlaresIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anamorphicFlaresIntensity;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_anamorphicFlaresIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anamorphicFlaresIntensity;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_anamorphicFlaresIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anamorphicFlaresIntensity = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_anamorphicFlaresAntiflicker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anamorphicFlaresAntiflicker;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_anamorphicFlaresAntiflicker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anamorphicFlaresAntiflicker;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_anamorphicFlaresAntiflicker(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anamorphicFlaresAntiflicker = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_anamorphicFlaresUltra()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anamorphicFlaresUltra;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_anamorphicFlaresUltra() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anamorphicFlaresUltra;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_anamorphicFlaresUltra(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anamorphicFlaresUltra = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_anamorphicFlaresThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anamorphicFlaresThreshold;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_anamorphicFlaresThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anamorphicFlaresThreshold;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_anamorphicFlaresThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anamorphicFlaresThreshold = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_anamorphicFlaresSpread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anamorphicFlaresSpread;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_anamorphicFlaresSpread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anamorphicFlaresSpread;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_anamorphicFlaresSpread(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anamorphicFlaresSpread = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_anamorphicFlaresVertical()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anamorphicFlaresVertical;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_anamorphicFlaresVertical() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anamorphicFlaresVertical;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_anamorphicFlaresVertical(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anamorphicFlaresVertical = value;
}
constexpr ::UnityEngine::Color& BeautifyEffect::BeautifyProfile::__cordl_internal_get_anamorphicFlaresTint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anamorphicFlaresTint;
}
constexpr ::UnityEngine::Color const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_anamorphicFlaresTint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anamorphicFlaresTint;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_anamorphicFlaresTint(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anamorphicFlaresTint = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_anamorphicFlaresBlur()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anamorphicFlaresBlur;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_anamorphicFlaresBlur() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anamorphicFlaresBlur;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_anamorphicFlaresBlur(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anamorphicFlaresBlur = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfField;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfField;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfField = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldTransparencySupport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldTransparencySupport;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldTransparencySupport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldTransparencySupport;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldTransparencySupport(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldTransparencySupport = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldTargetFocus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldTargetFocus;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldTargetFocus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldTargetFocus;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldTargetFocus(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___depthOfFieldTargetFocus)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldAutofocus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldAutofocus;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldAutofocus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldAutofocus;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldAutofocus(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldAutofocus = value;
}
constexpr ::UnityEngine::Vector2& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthofFieldAutofocusViewportPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthofFieldAutofocusViewportPoint;
}
constexpr ::UnityEngine::Vector2 const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthofFieldAutofocusViewportPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthofFieldAutofocusViewportPoint;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthofFieldAutofocusViewportPoint(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthofFieldAutofocusViewportPoint = value;
}
constexpr ::UnityEngine::LayerMask& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldAutofocusLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldAutofocusLayerMask;
}
constexpr ::UnityEngine::LayerMask const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldAutofocusLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldAutofocusLayerMask;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldAutofocusLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldAutofocusLayerMask = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldAutofocusMinDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldAutofocusMinDistance;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldAutofocusMinDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldAutofocusMinDistance;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldAutofocusMinDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldAutofocusMinDistance = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldAutofocusMaxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldAutofocusMaxDistance;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldAutofocusMaxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldAutofocusMaxDistance;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldAutofocusMaxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldAutofocusMaxDistance = value;
}
constexpr ::UnityEngine::LayerMask& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldExclusionLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldExclusionLayerMask;
}
constexpr ::UnityEngine::LayerMask const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldExclusionLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldExclusionLayerMask;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldExclusionLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldExclusionLayerMask = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldExclusionLayerMaskDownsampling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldExclusionLayerMaskDownsampling;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldExclusionLayerMaskDownsampling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldExclusionLayerMaskDownsampling;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldExclusionLayerMaskDownsampling(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldExclusionLayerMaskDownsampling = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldTransparencySupportDownsampling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldTransparencySupportDownsampling;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldTransparencySupportDownsampling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldTransparencySupportDownsampling;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldTransparencySupportDownsampling(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldTransparencySupportDownsampling = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldExclusionBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldExclusionBias;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldExclusionBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldExclusionBias;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldExclusionBias(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldExclusionBias = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldDistance;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldDistance;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldDistance = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldFocusSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldFocusSpeed;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldFocusSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldFocusSpeed;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldFocusSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldFocusSpeed = value;
}
constexpr int32_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldDownsampling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldDownsampling;
}
constexpr int32_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldDownsampling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldDownsampling;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldDownsampling(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldDownsampling = value;
}
constexpr int32_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldMaxSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldMaxSamples;
}
constexpr int32_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldMaxSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldMaxSamples;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldMaxSamples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldMaxSamples = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldFocalLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldFocalLength;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldFocalLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldFocalLength;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldFocalLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldFocalLength = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldAperture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldAperture;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldAperture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldAperture;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldAperture(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldAperture = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldForegroundBlur()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldForegroundBlur;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldForegroundBlur() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldForegroundBlur;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldForegroundBlur(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldForegroundBlur = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldForegroundBlurHQ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldForegroundBlurHQ;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldForegroundBlurHQ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldForegroundBlurHQ;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldForegroundBlurHQ(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldForegroundBlurHQ = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldForegroundDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldForegroundDistance;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldForegroundDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldForegroundDistance;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldForegroundDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldForegroundDistance = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldBokeh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldBokeh;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldBokeh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldBokeh;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldBokeh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldBokeh = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldBokehThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldBokehThreshold;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldBokehThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldBokehThreshold;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldBokehThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldBokehThreshold = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldBokehIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldBokehIntensity;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldBokehIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldBokehIntensity;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldBokehIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldBokehIntensity = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldMaxBrightness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldMaxBrightness;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldMaxBrightness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldMaxBrightness;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldMaxBrightness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldMaxBrightness = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldMaxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldMaxDistance;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldMaxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldMaxDistance;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldMaxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldMaxDistance = value;
}
constexpr ::UnityEngine::FilterMode& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldFilterMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldFilterMode;
}
constexpr ::UnityEngine::FilterMode const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldFilterMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldFilterMode;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldFilterMode(::UnityEngine::FilterMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldFilterMode = value;
}
constexpr ::UnityEngine::LayerMask& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldTransparencyLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldTransparencyLayerMask;
}
constexpr ::UnityEngine::LayerMask const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_depthOfFieldTransparencyLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfFieldTransparencyLayerMask;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_depthOfFieldTransparencyLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfFieldTransparencyLayerMask = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_eyeAdaptation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeAdaptation;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_eyeAdaptation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeAdaptation;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_eyeAdaptation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeAdaptation = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_eyeAdaptationMinExposure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeAdaptationMinExposure;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_eyeAdaptationMinExposure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeAdaptationMinExposure;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_eyeAdaptationMinExposure(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeAdaptationMinExposure = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_eyeAdaptationMaxExposure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeAdaptationMaxExposure;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_eyeAdaptationMaxExposure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeAdaptationMaxExposure;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_eyeAdaptationMaxExposure(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeAdaptationMaxExposure = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_eyeAdaptationSpeedToLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeAdaptationSpeedToLight;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_eyeAdaptationSpeedToLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeAdaptationSpeedToLight;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_eyeAdaptationSpeedToLight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeAdaptationSpeedToLight = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_eyeAdaptationSpeedToDark()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeAdaptationSpeedToDark;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_eyeAdaptationSpeedToDark() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeAdaptationSpeedToDark;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_eyeAdaptationSpeedToDark(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeAdaptationSpeedToDark = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_purkinje()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purkinje;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_purkinje() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purkinje;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_purkinje(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purkinje = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_purkinjeAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purkinjeAmount;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_purkinjeAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purkinjeAmount;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_purkinjeAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purkinjeAmount = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_purkinjeLuminanceThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purkinjeLuminanceThreshold;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_purkinjeLuminanceThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purkinjeLuminanceThreshold;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_purkinjeLuminanceThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purkinjeLuminanceThreshold = value;
}
constexpr ::BeautifyEffect::BEAUTIFY_TMO& BeautifyEffect::BeautifyProfile::__cordl_internal_get_tonemap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tonemap;
}
constexpr ::BeautifyEffect::BEAUTIFY_TMO const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_tonemap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tonemap;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_tonemap(::BeautifyEffect::BEAUTIFY_TMO  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tonemap = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlares()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlares;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlares() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlares;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlares(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlares = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresIntensity;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresIntensity;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresIntensity = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresSolarWindSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresSolarWindSpeed;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresSolarWindSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresSolarWindSpeed;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresSolarWindSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresSolarWindSpeed = value;
}
constexpr ::UnityEngine::Color& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresTint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresTint;
}
constexpr ::UnityEngine::Color const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresTint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresTint;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresTint(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresTint = value;
}
constexpr int32_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresDownsampling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresDownsampling;
}
constexpr int32_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresDownsampling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresDownsampling;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresDownsampling(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresDownsampling = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresSunIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresSunIntensity;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresSunIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresSunIntensity;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresSunIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresSunIntensity = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresSunDiskSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresSunDiskSize;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresSunDiskSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresSunDiskSize;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresSunDiskSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresSunDiskSize = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresSunRayDiffractionIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresSunRayDiffractionIntensity;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresSunRayDiffractionIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresSunRayDiffractionIntensity;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresSunRayDiffractionIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresSunRayDiffractionIntensity = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresSunRayDiffractionThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresSunRayDiffractionThreshold;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresSunRayDiffractionThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresSunRayDiffractionThreshold;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresSunRayDiffractionThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresSunRayDiffractionThreshold = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresCoronaRays1Length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresCoronaRays1Length;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresCoronaRays1Length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresCoronaRays1Length;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresCoronaRays1Length(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresCoronaRays1Length = value;
}
constexpr int32_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresCoronaRays1Streaks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresCoronaRays1Streaks;
}
constexpr int32_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresCoronaRays1Streaks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresCoronaRays1Streaks;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresCoronaRays1Streaks(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresCoronaRays1Streaks = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresCoronaRays1Spread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresCoronaRays1Spread;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresCoronaRays1Spread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresCoronaRays1Spread;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresCoronaRays1Spread(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresCoronaRays1Spread = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresCoronaRays1AngleOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresCoronaRays1AngleOffset;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresCoronaRays1AngleOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresCoronaRays1AngleOffset;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresCoronaRays1AngleOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresCoronaRays1AngleOffset = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresCoronaRays2Length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresCoronaRays2Length;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresCoronaRays2Length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresCoronaRays2Length;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresCoronaRays2Length(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresCoronaRays2Length = value;
}
constexpr int32_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresCoronaRays2Streaks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresCoronaRays2Streaks;
}
constexpr int32_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresCoronaRays2Streaks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresCoronaRays2Streaks;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresCoronaRays2Streaks(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresCoronaRays2Streaks = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresCoronaRays2Spread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresCoronaRays2Spread;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresCoronaRays2Spread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresCoronaRays2Spread;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresCoronaRays2Spread(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresCoronaRays2Spread = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresCoronaRays2AngleOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresCoronaRays2AngleOffset;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresCoronaRays2AngleOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresCoronaRays2AngleOffset;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresCoronaRays2AngleOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresCoronaRays2AngleOffset = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts1Size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts1Size;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts1Size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts1Size;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresGhosts1Size(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresGhosts1Size = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts1Offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts1Offset;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts1Offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts1Offset;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresGhosts1Offset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresGhosts1Offset = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts1Brightness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts1Brightness;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts1Brightness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts1Brightness;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresGhosts1Brightness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresGhosts1Brightness = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts2Size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts2Size;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts2Size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts2Size;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresGhosts2Size(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresGhosts2Size = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts2Offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts2Offset;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts2Offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts2Offset;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresGhosts2Offset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresGhosts2Offset = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts2Brightness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts2Brightness;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts2Brightness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts2Brightness;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresGhosts2Brightness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresGhosts2Brightness = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts3Size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts3Size;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts3Size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts3Size;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresGhosts3Size(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresGhosts3Size = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts3Brightness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts3Brightness;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts3Brightness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts3Brightness;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresGhosts3Brightness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresGhosts3Brightness = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts3Offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts3Offset;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts3Offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts3Offset;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresGhosts3Offset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresGhosts3Offset = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts4Size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts4Size;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts4Size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts4Size;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresGhosts4Size(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresGhosts4Size = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts4Offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts4Offset;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts4Offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts4Offset;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresGhosts4Offset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresGhosts4Offset = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts4Brightness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts4Brightness;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresGhosts4Brightness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresGhosts4Brightness;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresGhosts4Brightness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresGhosts4Brightness = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresHaloOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresHaloOffset;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresHaloOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresHaloOffset;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresHaloOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresHaloOffset = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresHaloAmplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresHaloAmplitude;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresHaloAmplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresHaloAmplitude;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresHaloAmplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresHaloAmplitude = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresHaloIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresHaloIntensity;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresHaloIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresHaloIntensity;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresHaloIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresHaloIntensity = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresRotationDeadZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresRotationDeadZone;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_sunFlaresRotationDeadZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sunFlaresRotationDeadZone;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_sunFlaresRotationDeadZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sunFlaresRotationDeadZone = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_blur()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blur;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_blur() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blur;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_blur(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blur = value;
}
constexpr float_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_blurIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blurIntensity;
}
constexpr float_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_blurIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blurIntensity;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_blurIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blurIntensity = value;
}
constexpr int32_t& BeautifyEffect::BeautifyProfile::__cordl_internal_get_pixelateAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pixelateAmount;
}
constexpr int32_t const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_pixelateAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pixelateAmount;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_pixelateAmount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pixelateAmount = value;
}
constexpr bool& BeautifyEffect::BeautifyProfile::__cordl_internal_get_pixelateDownscale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pixelateDownscale;
}
constexpr bool const& BeautifyEffect::BeautifyProfile::__cordl_internal_get_pixelateDownscale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pixelateDownscale;
}
constexpr void BeautifyEffect::BeautifyProfile::__cordl_internal_set_pixelateDownscale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pixelateDownscale = value;
}
inline void BeautifyEffect::BeautifyProfile::Load(::BeautifyEffect::Beautify*  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::BeautifyProfile*>::get(),
                        "Load",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeautifyEffect::Beautify*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void BeautifyEffect::BeautifyProfile::Save(::BeautifyEffect::Beautify*  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::BeautifyProfile*>::get(),
                        "Save",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeautifyEffect::Beautify*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void BeautifyEffect::BeautifyProfile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::BeautifyProfile*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeautifyEffect::BeautifyProfile* BeautifyEffect::BeautifyProfile::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeautifyEffect::BeautifyProfile*>());
}
// Ctor Parameters []
constexpr ::BeautifyEffect::BeautifyProfile::BeautifyProfile()   {
}
