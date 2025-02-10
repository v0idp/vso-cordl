#pragma once
// IWYU pragma private; include "BeautifyEffect/Beautify.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeautifyEffect/zzzz__BEAUTIFY_PRESET_def.hpp"
#include "BeautifyEffect/zzzz__BEAUTIFY_QUALITY_def.hpp"
#include "BeautifyEffect/zzzz__BEAUTIFY_TMO_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Beautify)
namespace BeautifyEffect {
struct BEAUTIFY_PRESET;
}
namespace BeautifyEffect {
struct BEAUTIFY_QUALITY;
}
namespace BeautifyEffect {
struct BEAUTIFY_TMO;
}
namespace BeautifyEffect {
class BeautifyProfile;
}
namespace BeautifyEffect {
class Beautify__DoBlink_d__712;
}
namespace BeautifyEffect {
class OnBeforeFocusEvent;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class WaitForEndOfFrame;
}
// Forward declare root types
namespace BeautifyEffect {
class Beautify;
}
namespace BeautifyEffect {
class Beautify__DoBlink_d__712;
}
// Write type traits
MARK_REF_PTR_T(::BeautifyEffect::Beautify);
MARK_REF_PTR_T(::BeautifyEffect::Beautify__DoBlink_d__712);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace BeautifyEffect {
// Is value type: false
// CS Name: BeautifyEffect.Beautify/<DoBlink>d__712
class CORDL_TYPE Beautify__DoBlink_d__712 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::BeautifyEffect::Beautify>  __4__this;

/// @brief Field <start>5__2, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__start_5__2, put=__cordl_internal_set__start_5__2)) float_t  _start_5__2;

/// @brief Field <t>5__3, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__t_5__3, put=__cordl_internal_set__t_5__3)) float_t  _t_5__3;

/// @brief Field <w>5__4, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__w_5__4, put=__cordl_internal_set__w_5__4)) ::UnityEngine::WaitForEndOfFrame*  _w_5__4;

/// @brief Field duration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field maxValue, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxValue, put=__cordl_internal_set_maxValue)) float_t  maxValue;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18191e4, size 0x1a0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::BeautifyEffect::Beautify__DoBlink_d__712* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1819384, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x181938c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x18193c4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x18191e0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::BeautifyEffect::Beautify> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::BeautifyEffect::Beautify>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__start_5__2() const;

constexpr float_t& __cordl_internal_get__start_5__2() ;

constexpr float_t const& __cordl_internal_get__t_5__3() const;

constexpr float_t& __cordl_internal_get__t_5__3() ;

constexpr ::UnityEngine::WaitForEndOfFrame* const& __cordl_internal_get__w_5__4() const;

constexpr ::UnityEngine::WaitForEndOfFrame*& __cordl_internal_get__w_5__4() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr float_t const& __cordl_internal_get_maxValue() const;

constexpr float_t& __cordl_internal_get_maxValue() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::BeautifyEffect::Beautify>  value) ;

constexpr void __cordl_internal_set__start_5__2(float_t  value) ;

constexpr void __cordl_internal_set__t_5__3(float_t  value) ;

constexpr void __cordl_internal_set__w_5__4(::UnityEngine::WaitForEndOfFrame*  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_maxValue(float_t  value) ;

/// @brief Method .ctor, addr 0x1818f24, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Beautify__DoBlink_d__712() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Beautify__DoBlink_d__712", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Beautify__DoBlink_d__712(Beautify__DoBlink_d__712 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Beautify__DoBlink_d__712", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Beautify__DoBlink_d__712(Beautify__DoBlink_d__712 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1842};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field duration, offset: 0x20, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::BeautifyEffect::Beautify>  _____4__this;

/// @brief Field maxValue, offset: 0x30, size: 0x4, def value: None
 float_t  ___maxValue;

/// @brief Field <start>5__2, offset: 0x34, size: 0x4, def value: None
 float_t  ____start_5__2;

/// @brief Field <t>5__3, offset: 0x38, size: 0x4, def value: None
 float_t  ____t_5__3;

/// @brief Field <w>5__4, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::WaitForEndOfFrame*  ____w_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeautifyEffect::Beautify__DoBlink_d__712, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify__DoBlink_d__712, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify__DoBlink_d__712, ___duration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify__DoBlink_d__712, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify__DoBlink_d__712, ___maxValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify__DoBlink_d__712, ____start_5__2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify__DoBlink_d__712, ____t_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify__DoBlink_d__712, ____w_5__4) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeautifyEffect::Beautify__DoBlink_d__712, 0x48>, "Size mismatch!");

} // namespace end def BeautifyEffect
// Dependencies BeautifyEffect.BEAUTIFY_PRESET, BeautifyEffect.BEAUTIFY_QUALITY, BeautifyEffect.BEAUTIFY_TMO, UnityEngine.Color, UnityEngine.FilterMode, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.RenderTextureDescriptor, UnityEngine.RenderTextureFormat, UnityEngine.Vector2, UnityEngine.Vector3, UnityEngine.Vector4
namespace BeautifyEffect {
// Is value type: false
// CS Name: BeautifyEffect.Beautify
class CORDL_TYPE Beautify : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _DoBlink_d__712 = ::BeautifyEffect::Beautify__DoBlink_d__712;

/// @brief Field OnBeforeFocus, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnBeforeFocus, put=__cordl_internal_set_OnBeforeFocus)) ::BeautifyEffect::OnBeforeFocusEvent*  OnBeforeFocus;

/// @brief Field _anamorphicFlares, offset 0x17c, size 0x1 
 __declspec(property(get=__cordl_internal_get__anamorphicFlares, put=__cordl_internal_set__anamorphicFlares)) bool  _anamorphicFlares;

/// @brief Field _anamorphicFlaresAntiflicker, offset 0x184, size 0x1 
 __declspec(property(get=__cordl_internal_get__anamorphicFlaresAntiflicker, put=__cordl_internal_set__anamorphicFlaresAntiflicker)) bool  _anamorphicFlaresAntiflicker;

/// @brief Field _anamorphicFlaresBlur, offset 0x1a4, size 0x1 
 __declspec(property(get=__cordl_internal_get__anamorphicFlaresBlur, put=__cordl_internal_set__anamorphicFlaresBlur)) bool  _anamorphicFlaresBlur;

/// @brief Field _anamorphicFlaresIntensity, offset 0x180, size 0x4 
 __declspec(property(get=__cordl_internal_get__anamorphicFlaresIntensity, put=__cordl_internal_set__anamorphicFlaresIntensity)) float_t  _anamorphicFlaresIntensity;

/// @brief Field _anamorphicFlaresSpread, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get__anamorphicFlaresSpread, put=__cordl_internal_set__anamorphicFlaresSpread)) float_t  _anamorphicFlaresSpread;

/// @brief Field _anamorphicFlaresThreshold, offset 0x188, size 0x4 
 __declspec(property(get=__cordl_internal_get__anamorphicFlaresThreshold, put=__cordl_internal_set__anamorphicFlaresThreshold)) float_t  _anamorphicFlaresThreshold;

/// @brief Field _anamorphicFlaresTint, offset 0x194, size 0x10 
 __declspec(property(get=__cordl_internal_get__anamorphicFlaresTint, put=__cordl_internal_set__anamorphicFlaresTint)) ::UnityEngine::Color  _anamorphicFlaresTint;

/// @brief Field _anamorphicFlaresUltra, offset 0x185, size 0x1 
 __declspec(property(get=__cordl_internal_get__anamorphicFlaresUltra, put=__cordl_internal_set__anamorphicFlaresUltra)) bool  _anamorphicFlaresUltra;

/// @brief Field _anamorphicFlaresVertical, offset 0x190, size 0x1 
 __declspec(property(get=__cordl_internal_get__anamorphicFlaresVertical, put=__cordl_internal_set__anamorphicFlaresVertical)) bool  _anamorphicFlaresVertical;

/// @brief Field _antialiasDepthThreshold, offset 0x2f0, size 0x4 
 __declspec(property(get=__cordl_internal_get__antialiasDepthThreshold, put=__cordl_internal_set__antialiasDepthThreshold)) float_t  _antialiasDepthThreshold;

/// @brief Field _antialiasStrength, offset 0x2ec, size 0x4 
 __declspec(property(get=__cordl_internal_get__antialiasStrength, put=__cordl_internal_set__antialiasStrength)) float_t  _antialiasStrength;

/// @brief Field _beautify, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__beautify, put=setStaticF__beautify)) ::UnityW<::BeautifyEffect::Beautify>  _beautify;

/// @brief Field _bloom, offset 0x120, size 0x1 
 __declspec(property(get=__cordl_internal_get__bloom, put=__cordl_internal_set__bloom)) bool  _bloom;

/// @brief Field _bloomAntiflicker, offset 0x14c, size 0x1 
 __declspec(property(get=__cordl_internal_get__bloomAntiflicker, put=__cordl_internal_set__bloomAntiflicker)) bool  _bloomAntiflicker;

/// @brief Field _bloomBlur, offset 0x170, size 0x1 
 __declspec(property(get=__cordl_internal_get__bloomBlur, put=__cordl_internal_set__bloomBlur)) bool  _bloomBlur;

/// @brief Field _bloomBoost0, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get__bloomBoost0, put=__cordl_internal_set__bloomBoost0)) float_t  _bloomBoost0;

/// @brief Field _bloomBoost1, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get__bloomBoost1, put=__cordl_internal_set__bloomBoost1)) float_t  _bloomBoost1;

/// @brief Field _bloomBoost2, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get__bloomBoost2, put=__cordl_internal_set__bloomBoost2)) float_t  _bloomBoost2;

/// @brief Field _bloomBoost3, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get__bloomBoost3, put=__cordl_internal_set__bloomBoost3)) float_t  _bloomBoost3;

/// @brief Field _bloomBoost4, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get__bloomBoost4, put=__cordl_internal_set__bloomBoost4)) float_t  _bloomBoost4;

/// @brief Field _bloomBoost5, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get__bloomBoost5, put=__cordl_internal_set__bloomBoost5)) float_t  _bloomBoost5;

/// @brief Field _bloomCullingMask, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get__bloomCullingMask, put=__cordl_internal_set__bloomCullingMask)) ::UnityEngine::LayerMask  _bloomCullingMask;

/// @brief Field _bloomCustomize, offset 0x154, size 0x1 
 __declspec(property(get=__cordl_internal_get__bloomCustomize, put=__cordl_internal_set__bloomCustomize)) bool  _bloomCustomize;

/// @brief Field _bloomDebug, offset 0x155, size 0x1 
 __declspec(property(get=__cordl_internal_get__bloomDebug, put=__cordl_internal_set__bloomDebug)) bool  _bloomDebug;

/// @brief Field _bloomDepthAtten, offset 0x174, size 0x4 
 __declspec(property(get=__cordl_internal_get__bloomDepthAtten, put=__cordl_internal_set__bloomDepthAtten)) float_t  _bloomDepthAtten;

/// @brief Field _bloomIntensity, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get__bloomIntensity, put=__cordl_internal_set__bloomIntensity)) float_t  _bloomIntensity;

/// @brief Field _bloomLayerMaskDownsampling, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get__bloomLayerMaskDownsampling, put=__cordl_internal_set__bloomLayerMaskDownsampling)) float_t  _bloomLayerMaskDownsampling;

/// @brief Field _bloomLayerZBias, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get__bloomLayerZBias, put=__cordl_internal_set__bloomLayerZBias)) float_t  _bloomLayerZBias;

/// @brief Field _bloomMaxBrightness, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get__bloomMaxBrightness, put=__cordl_internal_set__bloomMaxBrightness)) float_t  _bloomMaxBrightness;

/// @brief Field _bloomThreshold, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get__bloomThreshold, put=__cordl_internal_set__bloomThreshold)) float_t  _bloomThreshold;

/// @brief Field _bloomUltra, offset 0x14d, size 0x1 
 __declspec(property(get=__cordl_internal_get__bloomUltra, put=__cordl_internal_set__bloomUltra)) bool  _bloomUltra;

/// @brief Field _bloomWeight0, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get__bloomWeight0, put=__cordl_internal_set__bloomWeight0)) float_t  _bloomWeight0;

/// @brief Field _bloomWeight1, offset 0x15c, size 0x4 
 __declspec(property(get=__cordl_internal_get__bloomWeight1, put=__cordl_internal_set__bloomWeight1)) float_t  _bloomWeight1;

/// @brief Field _bloomWeight2, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get__bloomWeight2, put=__cordl_internal_set__bloomWeight2)) float_t  _bloomWeight2;

/// @brief Field _bloomWeight3, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get__bloomWeight3, put=__cordl_internal_set__bloomWeight3)) float_t  _bloomWeight3;

/// @brief Field _bloomWeight4, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get__bloomWeight4, put=__cordl_internal_set__bloomWeight4)) float_t  _bloomWeight4;

/// @brief Field _bloomWeight5, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get__bloomWeight5, put=__cordl_internal_set__bloomWeight5)) float_t  _bloomWeight5;

/// @brief Field _blur, offset 0x2dd, size 0x1 
 __declspec(property(get=__cordl_internal_get__blur, put=__cordl_internal_set__blur)) bool  _blur;

/// @brief Field _blurIntensity, offset 0x2e0, size 0x4 
 __declspec(property(get=__cordl_internal_get__blurIntensity, put=__cordl_internal_set__blurIntensity)) float_t  _blurIntensity;

/// @brief Field _brightness, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__brightness, put=__cordl_internal_set__brightness)) float_t  _brightness;

/// @brief Field _compareLineAngle, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__compareLineAngle, put=__cordl_internal_set__compareLineAngle)) float_t  _compareLineAngle;

/// @brief Field _compareLineWidth, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__compareLineWidth, put=__cordl_internal_set__compareLineWidth)) float_t  _compareLineWidth;

/// @brief Field _compareMode, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__compareMode, put=__cordl_internal_set__compareMode)) bool  _compareMode;

/// @brief Field _contrast, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__contrast, put=__cordl_internal_set__contrast)) float_t  _contrast;

/// @brief Field _daltonize, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__daltonize, put=__cordl_internal_set__daltonize)) float_t  _daltonize;

/// @brief Field _depthOfField, offset 0x1a5, size 0x1 
 __declspec(property(get=__cordl_internal_get__depthOfField, put=__cordl_internal_set__depthOfField)) bool  _depthOfField;

/// @brief Field _depthOfFieldAperture, offset 0x1f4, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthOfFieldAperture, put=__cordl_internal_set__depthOfFieldAperture)) float_t  _depthOfFieldAperture;

/// @brief Field _depthOfFieldAutofocus, offset 0x1b9, size 0x1 
 __declspec(property(get=__cordl_internal_get__depthOfFieldAutofocus, put=__cordl_internal_set__depthOfFieldAutofocus)) bool  _depthOfFieldAutofocus;

/// @brief Field _depthOfFieldAutofocusLayerMask, offset 0x1cc, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthOfFieldAutofocusLayerMask, put=__cordl_internal_set__depthOfFieldAutofocusLayerMask)) ::UnityEngine::LayerMask  _depthOfFieldAutofocusLayerMask;

/// @brief Field _depthOfFieldAutofocusMaxDistance, offset 0x1c8, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthOfFieldAutofocusMaxDistance, put=__cordl_internal_set__depthOfFieldAutofocusMaxDistance)) float_t  _depthOfFieldAutofocusMaxDistance;

/// @brief Field _depthOfFieldAutofocusMinDistance, offset 0x1c4, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthOfFieldAutofocusMinDistance, put=__cordl_internal_set__depthOfFieldAutofocusMinDistance)) float_t  _depthOfFieldAutofocusMinDistance;

/// @brief Field _depthOfFieldBokeh, offset 0x200, size 0x1 
 __declspec(property(get=__cordl_internal_get__depthOfFieldBokeh, put=__cordl_internal_set__depthOfFieldBokeh)) bool  _depthOfFieldBokeh;

/// @brief Field _depthOfFieldBokehIntensity, offset 0x208, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthOfFieldBokehIntensity, put=__cordl_internal_set__depthOfFieldBokehIntensity)) float_t  _depthOfFieldBokehIntensity;

/// @brief Field _depthOfFieldBokehThreshold, offset 0x204, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthOfFieldBokehThreshold, put=__cordl_internal_set__depthOfFieldBokehThreshold)) float_t  _depthOfFieldBokehThreshold;

/// @brief Field _depthOfFieldDebug, offset 0x1b8, size 0x1 
 __declspec(property(get=__cordl_internal_get__depthOfFieldDebug, put=__cordl_internal_set__depthOfFieldDebug)) bool  _depthOfFieldDebug;

/// @brief Field _depthOfFieldDistance, offset 0x1e0, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthOfFieldDistance, put=__cordl_internal_set__depthOfFieldDistance)) float_t  _depthOfFieldDistance;

/// @brief Field _depthOfFieldDownsampling, offset 0x1e8, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthOfFieldDownsampling, put=__cordl_internal_set__depthOfFieldDownsampling)) int32_t  _depthOfFieldDownsampling;

/// @brief Field _depthOfFieldExclusionBias, offset 0x1dc, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthOfFieldExclusionBias, put=__cordl_internal_set__depthOfFieldExclusionBias)) float_t  _depthOfFieldExclusionBias;

/// @brief Field _depthOfFieldExclusionLayerMask, offset 0x1d0, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthOfFieldExclusionLayerMask, put=__cordl_internal_set__depthOfFieldExclusionLayerMask)) ::UnityEngine::LayerMask  _depthOfFieldExclusionLayerMask;

/// @brief Field _depthOfFieldExclusionLayerMaskDownsampling, offset 0x1d4, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthOfFieldExclusionLayerMaskDownsampling, put=__cordl_internal_set__depthOfFieldExclusionLayerMaskDownsampling)) float_t  _depthOfFieldExclusionLayerMaskDownsampling;

/// @brief Field _depthOfFieldFilterMode, offset 0x214, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthOfFieldFilterMode, put=__cordl_internal_set__depthOfFieldFilterMode)) ::UnityEngine::FilterMode  _depthOfFieldFilterMode;

/// @brief Field _depthOfFieldFocalLength, offset 0x1f0, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthOfFieldFocalLength, put=__cordl_internal_set__depthOfFieldFocalLength)) float_t  _depthOfFieldFocalLength;

/// @brief Field _depthOfFieldFocusSpeed, offset 0x1e4, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthOfFieldFocusSpeed, put=__cordl_internal_set__depthOfFieldFocusSpeed)) float_t  _depthOfFieldFocusSpeed;

/// @brief Field _depthOfFieldForegroundBlur, offset 0x1f8, size 0x1 
 __declspec(property(get=__cordl_internal_get__depthOfFieldForegroundBlur, put=__cordl_internal_set__depthOfFieldForegroundBlur)) bool  _depthOfFieldForegroundBlur;

/// @brief Field _depthOfFieldForegroundBlurHQ, offset 0x1f9, size 0x1 
 __declspec(property(get=__cordl_internal_get__depthOfFieldForegroundBlurHQ, put=__cordl_internal_set__depthOfFieldForegroundBlurHQ)) bool  _depthOfFieldForegroundBlurHQ;

/// @brief Field _depthOfFieldForegroundDistance, offset 0x1fc, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthOfFieldForegroundDistance, put=__cordl_internal_set__depthOfFieldForegroundDistance)) float_t  _depthOfFieldForegroundDistance;

/// @brief Field _depthOfFieldMaxBrightness, offset 0x20c, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthOfFieldMaxBrightness, put=__cordl_internal_set__depthOfFieldMaxBrightness)) float_t  _depthOfFieldMaxBrightness;

/// @brief Field _depthOfFieldMaxDistance, offset 0x210, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthOfFieldMaxDistance, put=__cordl_internal_set__depthOfFieldMaxDistance)) float_t  _depthOfFieldMaxDistance;

/// @brief Field _depthOfFieldMaxSamples, offset 0x1ec, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthOfFieldMaxSamples, put=__cordl_internal_set__depthOfFieldMaxSamples)) int32_t  _depthOfFieldMaxSamples;

/// @brief Field _depthOfFieldTargetFocus, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get__depthOfFieldTargetFocus, put=__cordl_internal_set__depthOfFieldTargetFocus)) ::UnityW<::UnityEngine::Transform>  _depthOfFieldTargetFocus;

/// @brief Field _depthOfFieldTransparencyLayerMask, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthOfFieldTransparencyLayerMask, put=__cordl_internal_set__depthOfFieldTransparencyLayerMask)) ::UnityEngine::LayerMask  _depthOfFieldTransparencyLayerMask;

/// @brief Field _depthOfFieldTransparencySupport, offset 0x1a6, size 0x1 
 __declspec(property(get=__cordl_internal_get__depthOfFieldTransparencySupport, put=__cordl_internal_set__depthOfFieldTransparencySupport)) bool  _depthOfFieldTransparencySupport;

/// @brief Field _depthOfFieldTransparencySupportDownsampling, offset 0x1d8, size 0x4 
 __declspec(property(get=__cordl_internal_get__depthOfFieldTransparencySupportDownsampling, put=__cordl_internal_set__depthOfFieldTransparencySupportDownsampling)) float_t  _depthOfFieldTransparencySupportDownsampling;

/// @brief Field _depthofFieldAutofocusViewportPoint, offset 0x1bc, size 0x8 
 __declspec(property(get=__cordl_internal_get__depthofFieldAutofocusViewportPoint, put=__cordl_internal_set__depthofFieldAutofocusViewportPoint)) ::UnityEngine::Vector2  _depthofFieldAutofocusViewportPoint;

/// @brief Field _dither, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__dither, put=__cordl_internal_set__dither)) float_t  _dither;

/// @brief Field _ditherDepth, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__ditherDepth, put=__cordl_internal_set__ditherDepth)) float_t  _ditherDepth;

/// @brief Field _eyeAdaptation, offset 0x220, size 0x1 
 __declspec(property(get=__cordl_internal_get__eyeAdaptation, put=__cordl_internal_set__eyeAdaptation)) bool  _eyeAdaptation;

/// @brief Field _eyeAdaptationMaxExposure, offset 0x228, size 0x4 
 __declspec(property(get=__cordl_internal_get__eyeAdaptationMaxExposure, put=__cordl_internal_set__eyeAdaptationMaxExposure)) float_t  _eyeAdaptationMaxExposure;

/// @brief Field _eyeAdaptationMinExposure, offset 0x224, size 0x4 
 __declspec(property(get=__cordl_internal_get__eyeAdaptationMinExposure, put=__cordl_internal_set__eyeAdaptationMinExposure)) float_t  _eyeAdaptationMinExposure;

/// @brief Field _eyeAdaptationSpeedToDark, offset 0x230, size 0x4 
 __declspec(property(get=__cordl_internal_get__eyeAdaptationSpeedToDark, put=__cordl_internal_set__eyeAdaptationSpeedToDark)) float_t  _eyeAdaptationSpeedToDark;

/// @brief Field _eyeAdaptationSpeedToLight, offset 0x22c, size 0x4 
 __declspec(property(get=__cordl_internal_get__eyeAdaptationSpeedToLight, put=__cordl_internal_set__eyeAdaptationSpeedToLight)) float_t  _eyeAdaptationSpeedToLight;

/// @brief Field _frame, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__frame, put=__cordl_internal_set__frame)) bool  _frame;

/// @brief Field _frameColor, offset 0xb4, size 0x10 
 __declspec(property(get=__cordl_internal_get__frameColor, put=__cordl_internal_set__frameColor)) ::UnityEngine::Color  _frameColor;

/// @brief Field _frameMask, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__frameMask, put=__cordl_internal_set__frameMask)) ::UnityW<::UnityEngine::Texture2D>  _frameMask;

/// @brief Field _lensDirt, offset 0x109, size 0x1 
 __declspec(property(get=__cordl_internal_get__lensDirt, put=__cordl_internal_set__lensDirt)) bool  _lensDirt;

/// @brief Field _lensDirtIntensity, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get__lensDirtIntensity, put=__cordl_internal_set__lensDirtIntensity)) float_t  _lensDirtIntensity;

/// @brief Field _lensDirtTexture, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__lensDirtTexture, put=__cordl_internal_set__lensDirtTexture)) ::UnityW<::UnityEngine::Texture2D>  _lensDirtTexture;

/// @brief Field _lensDirtThreshold, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lensDirtThreshold, put=__cordl_internal_set__lensDirtThreshold)) float_t  _lensDirtThreshold;

/// @brief Field _lut, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get__lut, put=__cordl_internal_set__lut)) bool  _lut;

/// @brief Field _lutIntensity, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get__lutIntensity, put=__cordl_internal_set__lutIntensity)) float_t  _lutIntensity;

/// @brief Field _lutTexture, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__lutTexture, put=__cordl_internal_set__lutTexture)) ::UnityW<::UnityEngine::Texture2D>  _lutTexture;

/// @brief Field _nightVision, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get__nightVision, put=__cordl_internal_set__nightVision)) bool  _nightVision;

/// @brief Field _nightVisionColor, offset 0xe4, size 0x10 
 __declspec(property(get=__cordl_internal_get__nightVisionColor, put=__cordl_internal_set__nightVisionColor)) ::UnityEngine::Color  _nightVisionColor;

/// @brief Field _outline, offset 0xf4, size 0x1 
 __declspec(property(get=__cordl_internal_get__outline, put=__cordl_internal_set__outline)) bool  _outline;

/// @brief Field _outlineColor, offset 0xf8, size 0x10 
 __declspec(property(get=__cordl_internal_get__outlineColor, put=__cordl_internal_set__outlineColor)) ::UnityEngine::Color  _outlineColor;

/// @brief Field _pixelateAmount, offset 0x2e4, size 0x4 
 __declspec(property(get=__cordl_internal_get__pixelateAmount, put=__cordl_internal_set__pixelateAmount)) int32_t  _pixelateAmount;

/// @brief Field _pixelateDownscale, offset 0x2e8, size 0x1 
 __declspec(property(get=__cordl_internal_get__pixelateDownscale, put=__cordl_internal_set__pixelateDownscale)) bool  _pixelateDownscale;

/// @brief Field _preset, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__preset, put=__cordl_internal_set__preset)) ::BeautifyEffect::BEAUTIFY_PRESET  _preset;

/// @brief Field _profile, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__profile, put=__cordl_internal_set__profile)) ::UnityW<::BeautifyEffect::BeautifyProfile>  _profile;

/// @brief Field _purkinje, offset 0x234, size 0x1 
 __declspec(property(get=__cordl_internal_get__purkinje, put=__cordl_internal_set__purkinje)) bool  _purkinje;

/// @brief Field _purkinjeAmount, offset 0x238, size 0x4 
 __declspec(property(get=__cordl_internal_get__purkinjeAmount, put=__cordl_internal_set__purkinjeAmount)) float_t  _purkinjeAmount;

/// @brief Field _purkinjeLuminanceThreshold, offset 0x23c, size 0x4 
 __declspec(property(get=__cordl_internal_get__purkinjeLuminanceThreshold, put=__cordl_internal_set__purkinjeLuminanceThreshold)) float_t  _purkinjeLuminanceThreshold;

/// @brief Field _quality, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__quality, put=__cordl_internal_set__quality)) ::BeautifyEffect::BEAUTIFY_QUALITY  _quality;

/// @brief Field _saturate, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__saturate, put=__cordl_internal_set__saturate)) float_t  _saturate;

/// @brief Field _sharpen, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__sharpen, put=__cordl_internal_set__sharpen)) float_t  _sharpen;

/// @brief Field _sharpenClamp, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__sharpenClamp, put=__cordl_internal_set__sharpenClamp)) float_t  _sharpenClamp;

/// @brief Field _sharpenDepthThreshold, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__sharpenDepthThreshold, put=__cordl_internal_set__sharpenDepthThreshold)) float_t  _sharpenDepthThreshold;

/// @brief Field _sharpenMaxDepth, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__sharpenMaxDepth, put=__cordl_internal_set__sharpenMaxDepth)) float_t  _sharpenMaxDepth;

/// @brief Field _sharpenMinDepth, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__sharpenMinDepth, put=__cordl_internal_set__sharpenMinDepth)) float_t  _sharpenMinDepth;

/// @brief Field _sharpenMotionSensibility, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__sharpenMotionSensibility, put=__cordl_internal_set__sharpenMotionSensibility)) float_t  _sharpenMotionSensibility;

/// @brief Field _sharpenRelaxation, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__sharpenRelaxation, put=__cordl_internal_set__sharpenRelaxation)) float_t  _sharpenRelaxation;

/// @brief Field _sun, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get__sun, put=__cordl_internal_set__sun)) ::UnityW<::UnityEngine::Transform>  _sun;

/// @brief Field _sunFlares, offset 0x244, size 0x1 
 __declspec(property(get=__cordl_internal_get__sunFlares, put=__cordl_internal_set__sunFlares)) bool  _sunFlares;

/// @brief Field _sunFlaresCoronaRays1AngleOffset, offset 0x28c, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresCoronaRays1AngleOffset, put=__cordl_internal_set__sunFlaresCoronaRays1AngleOffset)) float_t  _sunFlaresCoronaRays1AngleOffset;

/// @brief Field _sunFlaresCoronaRays1Length, offset 0x280, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresCoronaRays1Length, put=__cordl_internal_set__sunFlaresCoronaRays1Length)) float_t  _sunFlaresCoronaRays1Length;

/// @brief Field _sunFlaresCoronaRays1Spread, offset 0x288, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresCoronaRays1Spread, put=__cordl_internal_set__sunFlaresCoronaRays1Spread)) float_t  _sunFlaresCoronaRays1Spread;

/// @brief Field _sunFlaresCoronaRays1Streaks, offset 0x284, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresCoronaRays1Streaks, put=__cordl_internal_set__sunFlaresCoronaRays1Streaks)) int32_t  _sunFlaresCoronaRays1Streaks;

/// @brief Field _sunFlaresCoronaRays2AngleOffset, offset 0x29c, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresCoronaRays2AngleOffset, put=__cordl_internal_set__sunFlaresCoronaRays2AngleOffset)) float_t  _sunFlaresCoronaRays2AngleOffset;

/// @brief Field _sunFlaresCoronaRays2Length, offset 0x290, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresCoronaRays2Length, put=__cordl_internal_set__sunFlaresCoronaRays2Length)) float_t  _sunFlaresCoronaRays2Length;

/// @brief Field _sunFlaresCoronaRays2Spread, offset 0x298, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresCoronaRays2Spread, put=__cordl_internal_set__sunFlaresCoronaRays2Spread)) float_t  _sunFlaresCoronaRays2Spread;

/// @brief Field _sunFlaresCoronaRays2Streaks, offset 0x294, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresCoronaRays2Streaks, put=__cordl_internal_set__sunFlaresCoronaRays2Streaks)) int32_t  _sunFlaresCoronaRays2Streaks;

/// @brief Field _sunFlaresDownsampling, offset 0x26c, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresDownsampling, put=__cordl_internal_set__sunFlaresDownsampling)) int32_t  _sunFlaresDownsampling;

/// @brief Field _sunFlaresGhosts1Brightness, offset 0x2a8, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresGhosts1Brightness, put=__cordl_internal_set__sunFlaresGhosts1Brightness)) float_t  _sunFlaresGhosts1Brightness;

/// @brief Field _sunFlaresGhosts1Offset, offset 0x2a4, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresGhosts1Offset, put=__cordl_internal_set__sunFlaresGhosts1Offset)) float_t  _sunFlaresGhosts1Offset;

/// @brief Field _sunFlaresGhosts1Size, offset 0x2a0, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresGhosts1Size, put=__cordl_internal_set__sunFlaresGhosts1Size)) float_t  _sunFlaresGhosts1Size;

/// @brief Field _sunFlaresGhosts2Brightness, offset 0x2b4, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresGhosts2Brightness, put=__cordl_internal_set__sunFlaresGhosts2Brightness)) float_t  _sunFlaresGhosts2Brightness;

/// @brief Field _sunFlaresGhosts2Offset, offset 0x2b0, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresGhosts2Offset, put=__cordl_internal_set__sunFlaresGhosts2Offset)) float_t  _sunFlaresGhosts2Offset;

/// @brief Field _sunFlaresGhosts2Size, offset 0x2ac, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresGhosts2Size, put=__cordl_internal_set__sunFlaresGhosts2Size)) float_t  _sunFlaresGhosts2Size;

/// @brief Field _sunFlaresGhosts3Brightness, offset 0x2bc, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresGhosts3Brightness, put=__cordl_internal_set__sunFlaresGhosts3Brightness)) float_t  _sunFlaresGhosts3Brightness;

/// @brief Field _sunFlaresGhosts3Offset, offset 0x2c0, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresGhosts3Offset, put=__cordl_internal_set__sunFlaresGhosts3Offset)) float_t  _sunFlaresGhosts3Offset;

/// @brief Field _sunFlaresGhosts3Size, offset 0x2b8, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresGhosts3Size, put=__cordl_internal_set__sunFlaresGhosts3Size)) float_t  _sunFlaresGhosts3Size;

/// @brief Field _sunFlaresGhosts4Brightness, offset 0x2cc, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresGhosts4Brightness, put=__cordl_internal_set__sunFlaresGhosts4Brightness)) float_t  _sunFlaresGhosts4Brightness;

/// @brief Field _sunFlaresGhosts4Offset, offset 0x2c8, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresGhosts4Offset, put=__cordl_internal_set__sunFlaresGhosts4Offset)) float_t  _sunFlaresGhosts4Offset;

/// @brief Field _sunFlaresGhosts4Size, offset 0x2c4, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresGhosts4Size, put=__cordl_internal_set__sunFlaresGhosts4Size)) float_t  _sunFlaresGhosts4Size;

/// @brief Field _sunFlaresHaloAmplitude, offset 0x2d4, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresHaloAmplitude, put=__cordl_internal_set__sunFlaresHaloAmplitude)) float_t  _sunFlaresHaloAmplitude;

/// @brief Field _sunFlaresHaloIntensity, offset 0x2d8, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresHaloIntensity, put=__cordl_internal_set__sunFlaresHaloIntensity)) float_t  _sunFlaresHaloIntensity;

/// @brief Field _sunFlaresHaloOffset, offset 0x2d0, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresHaloOffset, put=__cordl_internal_set__sunFlaresHaloOffset)) float_t  _sunFlaresHaloOffset;

/// @brief Field _sunFlaresIntensity, offset 0x254, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresIntensity, put=__cordl_internal_set__sunFlaresIntensity)) float_t  _sunFlaresIntensity;

/// @brief Field _sunFlaresLayerMask, offset 0x250, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresLayerMask, put=__cordl_internal_set__sunFlaresLayerMask)) ::UnityEngine::LayerMask  _sunFlaresLayerMask;

/// @brief Field _sunFlaresRotationDeadZone, offset 0x2dc, size 0x1 
 __declspec(property(get=__cordl_internal_get__sunFlaresRotationDeadZone, put=__cordl_internal_set__sunFlaresRotationDeadZone)) bool  _sunFlaresRotationDeadZone;

/// @brief Field _sunFlaresSolarWindSpeed, offset 0x258, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresSolarWindSpeed, put=__cordl_internal_set__sunFlaresSolarWindSpeed)) float_t  _sunFlaresSolarWindSpeed;

/// @brief Field _sunFlaresSunDiskSize, offset 0x274, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresSunDiskSize, put=__cordl_internal_set__sunFlaresSunDiskSize)) float_t  _sunFlaresSunDiskSize;

/// @brief Field _sunFlaresSunIntensity, offset 0x270, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresSunIntensity, put=__cordl_internal_set__sunFlaresSunIntensity)) float_t  _sunFlaresSunIntensity;

/// @brief Field _sunFlaresSunRayDiffractionIntensity, offset 0x278, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresSunRayDiffractionIntensity, put=__cordl_internal_set__sunFlaresSunRayDiffractionIntensity)) float_t  _sunFlaresSunRayDiffractionIntensity;

/// @brief Field _sunFlaresSunRayDiffractionThreshold, offset 0x27c, size 0x4 
 __declspec(property(get=__cordl_internal_get__sunFlaresSunRayDiffractionThreshold, put=__cordl_internal_set__sunFlaresSunRayDiffractionThreshold)) float_t  _sunFlaresSunRayDiffractionThreshold;

/// @brief Field _sunFlaresTint, offset 0x25c, size 0x10 
 __declspec(property(get=__cordl_internal_get__sunFlaresTint, put=__cordl_internal_set__sunFlaresTint)) ::UnityEngine::Color  _sunFlaresTint;

/// @brief Field _thermalVision, offset 0x108, size 0x1 
 __declspec(property(get=__cordl_internal_get__thermalVision, put=__cordl_internal_set__thermalVision)) bool  _thermalVision;

/// @brief Field _tintColor, offset 0x54, size 0x10 
 __declspec(property(get=__cordl_internal_get__tintColor, put=__cordl_internal_set__tintColor)) ::UnityEngine::Color  _tintColor;

/// @brief Field _tonemap, offset 0x240, size 0x4 
 __declspec(property(get=__cordl_internal_get__tonemap, put=__cordl_internal_set__tonemap)) ::BeautifyEffect::BEAUTIFY_TMO  _tonemap;

/// @brief Field _vignetting, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__vignetting, put=__cordl_internal_set__vignetting)) bool  _vignetting;

/// @brief Field _vignettingAspectRatio, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__vignettingAspectRatio, put=__cordl_internal_set__vignettingAspectRatio)) float_t  _vignettingAspectRatio;

/// @brief Field _vignettingBlink, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__vignettingBlink, put=__cordl_internal_set__vignettingBlink)) float_t  _vignettingBlink;

/// @brief Field _vignettingCircularShape, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__vignettingCircularShape, put=__cordl_internal_set__vignettingCircularShape)) bool  _vignettingCircularShape;

/// @brief Field _vignettingColor, offset 0x84, size 0x10 
 __declspec(property(get=__cordl_internal_get__vignettingColor, put=__cordl_internal_set__vignettingColor)) ::UnityEngine::Color  _vignettingColor;

/// @brief Field _vignettingFade, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__vignettingFade, put=__cordl_internal_set__vignettingFade)) float_t  _vignettingFade;

/// @brief Field _vignettingMask, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__vignettingMask, put=__cordl_internal_set__vignettingMask)) ::UnityW<::UnityEngine::Texture2D>  _vignettingMask;

 __declspec(property(get=get_anamorphicFlares, put=set_anamorphicFlares)) bool  anamorphicFlares;

 __declspec(property(get=get_anamorphicFlaresAntiflicker, put=set_anamorphicFlaresAntiflicker)) bool  anamorphicFlaresAntiflicker;

 __declspec(property(get=get_anamorphicFlaresBlur, put=set_anamorphicFlaresBlur)) bool  anamorphicFlaresBlur;

 __declspec(property(get=get_anamorphicFlaresIntensity, put=set_anamorphicFlaresIntensity)) float_t  anamorphicFlaresIntensity;

 __declspec(property(get=get_anamorphicFlaresSpread, put=set_anamorphicFlaresSpread)) float_t  anamorphicFlaresSpread;

 __declspec(property(get=get_anamorphicFlaresThreshold, put=set_anamorphicFlaresThreshold)) float_t  anamorphicFlaresThreshold;

 __declspec(property(get=get_anamorphicFlaresTint, put=set_anamorphicFlaresTint)) ::UnityEngine::Color  anamorphicFlaresTint;

 __declspec(property(get=get_anamorphicFlaresUltra, put=set_anamorphicFlaresUltra)) bool  anamorphicFlaresUltra;

 __declspec(property(get=get_anamorphicFlaresVertical, put=set_anamorphicFlaresVertical)) bool  anamorphicFlaresVertical;

 __declspec(property(get=get_antialiasDepthThreshold, put=set_antialiasDepthThreshold)) float_t  antialiasDepthThreshold;

 __declspec(property(get=get_antialiasStrength, put=set_antialiasStrength)) float_t  antialiasStrength;

/// @brief Field bMat, offset 0x310, size 0x8 
 __declspec(property(get=__cordl_internal_get_bMat, put=__cordl_internal_set_bMat)) ::UnityW<::UnityEngine::Material>  bMat;

/// @brief Field bMatBasic, offset 0x308, size 0x8 
 __declspec(property(get=__cordl_internal_get_bMatBasic, put=__cordl_internal_set_bMatBasic)) ::UnityW<::UnityEngine::Material>  bMatBasic;

/// @brief Field bMatDesktop, offset 0x2f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_bMatDesktop, put=__cordl_internal_set_bMatDesktop)) ::UnityW<::UnityEngine::Material>  bMatDesktop;

/// @brief Field bMatMobile, offset 0x300, size 0x8 
 __declspec(property(get=__cordl_internal_get_bMatMobile, put=__cordl_internal_set_bMatMobile)) ::UnityW<::UnityEngine::Material>  bMatMobile;

 __declspec(property(get=get_bloom, put=set_bloom)) bool  bloom;

 __declspec(property(get=get_bloomAntiflicker, put=set_bloomAntiflicker)) bool  bloomAntiflicker;

 __declspec(property(get=get_bloomBlur, put=set_bloomBlur)) bool  bloomBlur;

 __declspec(property(get=get_bloomBoost0, put=set_bloomBoost0)) float_t  bloomBoost0;

 __declspec(property(get=get_bloomBoost1, put=set_bloomBoost1)) float_t  bloomBoost1;

 __declspec(property(get=get_bloomBoost2, put=set_bloomBoost2)) float_t  bloomBoost2;

 __declspec(property(get=get_bloomBoost3, put=set_bloomBoost3)) float_t  bloomBoost3;

 __declspec(property(get=get_bloomBoost4, put=set_bloomBoost4)) float_t  bloomBoost4;

 __declspec(property(get=get_bloomBoost5, put=set_bloomBoost5)) float_t  bloomBoost5;

 __declspec(property(get=get_bloomCullingMask, put=set_bloomCullingMask)) ::UnityEngine::LayerMask  bloomCullingMask;

/// @brief Field bloomCurrentLayerMaskValue, offset 0x444, size 0x4 
 __declspec(property(get=__cordl_internal_get_bloomCurrentLayerMaskValue, put=__cordl_internal_set_bloomCurrentLayerMaskValue)) int32_t  bloomCurrentLayerMaskValue;

 __declspec(property(get=get_bloomCustomize, put=set_bloomCustomize)) bool  bloomCustomize;

 __declspec(property(get=get_bloomDebug, put=set_bloomDebug)) bool  bloomDebug;

 __declspec(property(get=get_bloomDepthAtten, put=set_bloomDepthAtten)) float_t  bloomDepthAtten;

 __declspec(property(get=get_bloomIntensity, put=set_bloomIntensity)) float_t  bloomIntensity;

 __declspec(property(get=get_bloomLayerMaskDownsampling, put=set_bloomLayerMaskDownsampling)) float_t  bloomLayerMaskDownsampling;

 __declspec(property(get=get_bloomLayerZBias, put=set_bloomLayerZBias)) float_t  bloomLayerZBias;

 __declspec(property(get=get_bloomMaxBrightness, put=set_bloomMaxBrightness)) float_t  bloomMaxBrightness;

/// @brief Field bloomSourceDepthTexture, offset 0x3f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_bloomSourceDepthTexture, put=__cordl_internal_set_bloomSourceDepthTexture)) ::UnityW<::UnityEngine::RenderTexture>  bloomSourceDepthTexture;

/// @brief Field bloomSourceTexture, offset 0x3f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_bloomSourceTexture, put=__cordl_internal_set_bloomSourceTexture)) ::UnityW<::UnityEngine::RenderTexture>  bloomSourceTexture;

 __declspec(property(get=get_bloomThreshold, put=set_bloomThreshold)) float_t  bloomThreshold;

 __declspec(property(get=get_bloomUltra, put=set_bloomUltra)) bool  bloomUltra;

 __declspec(property(get=get_bloomWeight0, put=set_bloomWeight0)) float_t  bloomWeight0;

 __declspec(property(get=get_bloomWeight1, put=set_bloomWeight1)) float_t  bloomWeight1;

 __declspec(property(get=get_bloomWeight2, put=set_bloomWeight2)) float_t  bloomWeight2;

 __declspec(property(get=get_bloomWeight3, put=set_bloomWeight3)) float_t  bloomWeight3;

 __declspec(property(get=get_bloomWeight4, put=set_bloomWeight4)) float_t  bloomWeight4;

 __declspec(property(get=get_bloomWeight5, put=set_bloomWeight5)) float_t  bloomWeight5;

 __declspec(property(get=get_blur, put=set_blur)) bool  blur;

 __declspec(property(get=get_blurIntensity, put=set_blurIntensity)) float_t  blurIntensity;

 __declspec(property(get=get_brightness, put=set_brightness)) float_t  brightness;

/// @brief Field camPrevForward, offset 0x320, size 0xc 
 __declspec(property(get=__cordl_internal_get_camPrevForward, put=__cordl_internal_set_camPrevForward)) ::UnityEngine::Vector3  camPrevForward;

/// @brief Field camPrevPos, offset 0x32c, size 0xc 
 __declspec(property(get=__cordl_internal_get_camPrevPos, put=__cordl_internal_set_camPrevPos)) ::UnityEngine::Vector3  camPrevPos;

 __declspec(property(get=get_cameraEffect)) ::UnityW<::UnityEngine::Camera>  cameraEffect;

 __declspec(property(get=get_compareLineAngle, put=set_compareLineAngle)) float_t  compareLineAngle;

 __declspec(property(get=get_compareLineWidth, put=set_compareLineWidth)) float_t  compareLineWidth;

 __declspec(property(get=get_compareMode, put=set_compareMode)) bool  compareMode;

 __declspec(property(get=get_contrast, put=set_contrast)) float_t  contrast;

/// @brief Field currSens, offset 0x338, size 0x4 
 __declspec(property(get=__cordl_internal_get_currSens, put=__cordl_internal_set_currSens)) float_t  currSens;

/// @brief Field currentCamera, offset 0x318, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentCamera, put=__cordl_internal_set_currentCamera)) ::UnityW<::UnityEngine::Camera>  currentCamera;

 __declspec(property(get=get_daltonize, put=set_daltonize)) float_t  daltonize;

/// @brief Field depthCam, offset 0x390, size 0x8 
 __declspec(property(get=__cordl_internal_get_depthCam, put=__cordl_internal_set_depthCam)) ::UnityW<::UnityEngine::Camera>  depthCam;

/// @brief Field depthCamObj, offset 0x398, size 0x8 
 __declspec(property(get=__cordl_internal_get_depthCamObj, put=__cordl_internal_set_depthCamObj)) ::UnityW<::UnityEngine::GameObject>  depthCamObj;

 __declspec(property(get=get_depthOfField, put=set_depthOfField)) bool  depthOfField;

 __declspec(property(get=get_depthOfFieldAperture, put=set_depthOfFieldAperture)) float_t  depthOfFieldAperture;

 __declspec(property(get=get_depthOfFieldAutofocus, put=set_depthOfFieldAutofocus)) bool  depthOfFieldAutofocus;

 __declspec(property(get=get_depthOfFieldAutofocusLayerMask, put=set_depthOfFieldAutofocusLayerMask)) ::UnityEngine::LayerMask  depthOfFieldAutofocusLayerMask;

 __declspec(property(get=get_depthOfFieldAutofocusMaxDistance, put=set_depthOfFieldAutofocusMaxDistance)) float_t  depthOfFieldAutofocusMaxDistance;

 __declspec(property(get=get_depthOfFieldAutofocusMinDistance, put=set_depthOfFieldAutofocusMinDistance)) float_t  depthOfFieldAutofocusMinDistance;

 __declspec(property(get=get_depthOfFieldBokeh, put=set_depthOfFieldBokeh)) bool  depthOfFieldBokeh;

 __declspec(property(get=get_depthOfFieldBokehIntensity, put=set_depthOfFieldBokehIntensity)) float_t  depthOfFieldBokehIntensity;

 __declspec(property(get=get_depthOfFieldBokehThreshold, put=set_depthOfFieldBokehThreshold)) float_t  depthOfFieldBokehThreshold;

 __declspec(property(get=get_depthOfFieldCurrentFocalPointDistance)) float_t  depthOfFieldCurrentFocalPointDistance;

 __declspec(property(get=get_depthOfFieldDebug, put=set_depthOfFieldDebug)) bool  depthOfFieldDebug;

 __declspec(property(get=get_depthOfFieldDistance, put=set_depthOfFieldDistance)) float_t  depthOfFieldDistance;

 __declspec(property(get=get_depthOfFieldDownsampling, put=set_depthOfFieldDownsampling)) int32_t  depthOfFieldDownsampling;

 __declspec(property(get=get_depthOfFieldExclusionBias, put=set_depthOfFieldExclusionBias)) float_t  depthOfFieldExclusionBias;

 __declspec(property(get=get_depthOfFieldExclusionLayerMask, put=set_depthOfFieldExclusionLayerMask)) ::UnityEngine::LayerMask  depthOfFieldExclusionLayerMask;

 __declspec(property(get=get_depthOfFieldExclusionLayerMaskDownsampling, put=set_depthOfFieldExclusionLayerMaskDownsampling)) float_t  depthOfFieldExclusionLayerMaskDownsampling;

 __declspec(property(get=get_depthOfFieldFilterMode, put=set_depthOfFieldFilterMode)) ::UnityEngine::FilterMode  depthOfFieldFilterMode;

 __declspec(property(get=get_depthOfFieldFocalLength, put=set_depthOfFieldFocalLength)) float_t  depthOfFieldFocalLength;

 __declspec(property(get=get_depthOfFieldFocusSpeed, put=set_depthOfFieldFocusSpeed)) float_t  depthOfFieldFocusSpeed;

 __declspec(property(get=get_depthOfFieldForegroundBlur, put=set_depthOfFieldForegroundBlur)) bool  depthOfFieldForegroundBlur;

 __declspec(property(get=get_depthOfFieldForegroundBlurHQ, put=set_depthOfFieldForegroundBlurHQ)) bool  depthOfFieldForegroundBlurHQ;

 __declspec(property(get=get_depthOfFieldForegroundDistance, put=set_depthOfFieldForegroundDistance)) float_t  depthOfFieldForegroundDistance;

 __declspec(property(get=get_depthOfFieldMaxBrightness, put=set_depthOfFieldMaxBrightness)) float_t  depthOfFieldMaxBrightness;

 __declspec(property(get=get_depthOfFieldMaxDistance, put=set_depthOfFieldMaxDistance)) float_t  depthOfFieldMaxDistance;

 __declspec(property(get=get_depthOfFieldMaxSamples, put=set_depthOfFieldMaxSamples)) int32_t  depthOfFieldMaxSamples;

 __declspec(property(get=get_depthOfFieldTargetFocus, put=set_depthOfFieldTargetFocus)) ::UnityW<::UnityEngine::Transform>  depthOfFieldTargetFocus;

 __declspec(property(get=get_depthOfFieldTransparencyLayerMask, put=set_depthOfFieldTransparencyLayerMask)) ::UnityEngine::LayerMask  depthOfFieldTransparencyLayerMask;

 __declspec(property(get=get_depthOfFieldTransparencySupport, put=set_depthOfFieldTransparencySupport)) bool  depthOfFieldTransparencySupport;

 __declspec(property(get=get_depthOfFieldTransparencySupportDownsampling, put=set_depthOfFieldTransparencySupportDownsampling)) float_t  depthOfFieldTransparencySupportDownsampling;

/// @brief Field depthShader, offset 0x3a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_depthShader, put=__cordl_internal_set_depthShader)) ::UnityW<::UnityEngine::Shader>  depthShader;

 __declspec(property(get=get_depthofFieldAutofocusViewportPoint, put=set_depthofFieldAutofocusViewportPoint)) ::UnityEngine::Vector2  depthofFieldAutofocusViewportPoint;

 __declspec(property(get=get_dither, put=set_dither)) float_t  dither;

 __declspec(property(get=get_ditherDepth, put=set_ditherDepth)) float_t  ditherDepth;

/// @brief Field dofCurrentLayerMaskValue, offset 0x440, size 0x4 
 __declspec(property(get=__cordl_internal_get_dofCurrentLayerMaskValue, put=__cordl_internal_set_dofCurrentLayerMaskValue)) int32_t  dofCurrentLayerMaskValue;

/// @brief Field dofDepthTexture, offset 0x3e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_dofDepthTexture, put=__cordl_internal_set_dofDepthTexture)) ::UnityW<::UnityEngine::RenderTexture>  dofDepthTexture;

/// @brief Field dofExclusionShader, offset 0x3b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_dofExclusionShader, put=__cordl_internal_set_dofExclusionShader)) ::UnityW<::UnityEngine::Shader>  dofExclusionShader;

/// @brief Field dofExclusionTexture, offset 0x3e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_dofExclusionTexture, put=__cordl_internal_set_dofExclusionTexture)) ::UnityW<::UnityEngine::RenderTexture>  dofExclusionTexture;

/// @brief Field dofLastAutofocusDistance, offset 0x374, size 0x4 
 __declspec(property(get=__cordl_internal_get_dofLastAutofocusDistance, put=__cordl_internal_set_dofLastAutofocusDistance)) float_t  dofLastAutofocusDistance;

/// @brief Field dofLastBokehData, offset 0x378, size 0x10 
 __declspec(property(get=__cordl_internal_get_dofLastBokehData, put=__cordl_internal_set_dofLastBokehData)) ::UnityEngine::Vector4  dofLastBokehData;

/// @brief Field dofPrevDistance, offset 0x370, size 0x4 
 __declspec(property(get=__cordl_internal_get_dofPrevDistance, put=__cordl_internal_set_dofPrevDistance)) float_t  dofPrevDistance;

 __declspec(property(get=get_eyeAdaptation, put=set_eyeAdaptation)) bool  eyeAdaptation;

 __declspec(property(get=get_eyeAdaptationMaxExposure, put=set_eyeAdaptationMaxExposure)) float_t  eyeAdaptationMaxExposure;

 __declspec(property(get=get_eyeAdaptationMinExposure, put=set_eyeAdaptationMinExposure)) float_t  eyeAdaptationMinExposure;

 __declspec(property(get=get_eyeAdaptationSpeedToDark, put=set_eyeAdaptationSpeedToDark)) float_t  eyeAdaptationSpeedToDark;

 __declspec(property(get=get_eyeAdaptationSpeedToLight, put=set_eyeAdaptationSpeedToLight)) float_t  eyeAdaptationSpeedToLight;

/// @brief Field flareNoise, offset 0x3d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_flareNoise, put=__cordl_internal_set_flareNoise)) ::UnityW<::UnityEngine::Texture2D>  flareNoise;

 __declspec(property(get=get_frame, put=set_frame)) bool  frame;

 __declspec(property(get=get_frameColor, put=set_frameColor)) ::UnityEngine::Color  frameColor;

 __declspec(property(get=get_frameMask, put=set_frameMask)) ::UnityW<::UnityEngine::Texture2D>  frameMask;

/// @brief Field isDirty, offset 0x2f4, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDirty, put=__cordl_internal_set_isDirty)) bool  isDirty;

 __declspec(property(get=get_lensDirt, put=set_lensDirt)) bool  lensDirt;

 __declspec(property(get=get_lensDirtIntensity, put=set_lensDirtIntensity)) float_t  lensDirtIntensity;

 __declspec(property(get=get_lensDirtTexture, put=set_lensDirtTexture)) ::UnityW<::UnityEngine::Texture2D>  lensDirtTexture;

 __declspec(property(get=get_lensDirtThreshold, put=set_lensDirtThreshold)) float_t  lensDirtThreshold;

 __declspec(property(get=get_lut, put=set_lut)) bool  lut;

 __declspec(property(get=get_lutIntensity, put=set_lutIntensity)) float_t  lutIntensity;

 __declspec(property(get=get_lutTexture, put=set_lutTexture)) ::UnityW<::UnityEngine::Texture2D>  lutTexture;

 __declspec(property(get=get_nightVision, put=set_nightVision)) bool  nightVision;

 __declspec(property(get=get_nightVisionColor, put=set_nightVisionColor)) ::UnityEngine::Color  nightVisionColor;

 __declspec(property(get=get_outline, put=set_outline)) bool  outline;

 __declspec(property(get=get_outlineColor, put=set_outlineColor)) ::UnityEngine::Color  outlineColor;

 __declspec(property(get=get_pixelateAmount, put=set_pixelateAmount)) int32_t  pixelateAmount;

 __declspec(property(get=get_pixelateDownscale, put=set_pixelateDownscale)) bool  pixelateDownscale;

/// @brief Field pixelateTexture, offset 0x400, size 0x8 
 __declspec(property(get=__cordl_internal_get_pixelateTexture, put=__cordl_internal_set_pixelateTexture)) ::UnityW<::UnityEngine::RenderTexture>  pixelateTexture;

 __declspec(property(get=get_preset, put=set_preset)) ::BeautifyEffect::BEAUTIFY_PRESET  preset;

 __declspec(property(get=get_profile, put=set_profile)) ::UnityW<::BeautifyEffect::BeautifyProfile>  profile;

 __declspec(property(get=get_purkinje, put=set_purkinje)) bool  purkinje;

 __declspec(property(get=get_purkinjeAmount, put=set_purkinjeAmount)) float_t  purkinjeAmount;

 __declspec(property(get=get_purkinjeLuminanceThreshold, put=set_purkinjeLuminanceThreshold)) float_t  purkinjeLuminanceThreshold;

 __declspec(property(get=get_quality, put=set_quality)) ::BeautifyEffect::BEAUTIFY_QUALITY  quality;

/// @brief Field renderPass, offset 0x33c, size 0x4 
 __declspec(property(get=__cordl_internal_get_renderPass, put=__cordl_internal_set_renderPass)) int32_t  renderPass;

/// @brief Field rt, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get_rt, put=__cordl_internal_set_rt)) ::ArrayW<::UnityW<::UnityEngine::RenderTexture>,::Array<::UnityW<::UnityEngine::RenderTexture>>*>  rt;

/// @brief Field rtAF, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_rtAF, put=__cordl_internal_set_rtAF)) ::ArrayW<::UnityW<::UnityEngine::RenderTexture>,::Array<::UnityW<::UnityEngine::RenderTexture>>*>  rtAF;

/// @brief Field rtDescBase, offset 0x408, size 0x34 
 __declspec(property(get=__cordl_internal_get_rtDescBase, put=__cordl_internal_set_rtDescBase)) ::UnityEngine::RenderTextureDescriptor  rtDescBase;

/// @brief Field rtEA, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get_rtEA, put=__cordl_internal_set_rtEA)) ::ArrayW<::UnityW<::UnityEngine::RenderTexture>,::Array<::UnityW<::UnityEngine::RenderTexture>>*>  rtEA;

/// @brief Field rtEAHist, offset 0x368, size 0x8 
 __declspec(property(get=__cordl_internal_get_rtEAHist, put=__cordl_internal_set_rtEAHist)) ::UnityW<::UnityEngine::RenderTexture>  rtEAHist;

/// @brief Field rtEAacum, offset 0x360, size 0x8 
 __declspec(property(get=__cordl_internal_get_rtEAacum, put=__cordl_internal_set_rtEAacum)) ::UnityW<::UnityEngine::RenderTexture>  rtEAacum;

/// @brief Field rtFormat, offset 0x340, size 0x4 
 __declspec(property(get=__cordl_internal_get_rtFormat, put=__cordl_internal_set_rtFormat)) ::UnityEngine::RenderTextureFormat  rtFormat;

 __declspec(property(get=get_saturate, put=set_saturate)) float_t  saturate;

/// @brief Field sceneCamera, offset 0x388, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneCamera, put=__cordl_internal_set_sceneCamera)) ::UnityW<::UnityEngine::Camera>  sceneCamera;

/// @brief Field shaderKeywords, offset 0x3a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_shaderKeywords, put=__cordl_internal_set_shaderKeywords)) ::System::Collections::Generic::List_1<::StringW>*  shaderKeywords;

 __declspec(property(get=get_sharpen, put=set_sharpen)) float_t  sharpen;

 __declspec(property(get=get_sharpenClamp, put=set_sharpenClamp)) float_t  sharpenClamp;

 __declspec(property(get=get_sharpenDepthThreshold, put=set_sharpenDepthThreshold)) float_t  sharpenDepthThreshold;

 __declspec(property(get=get_sharpenMaxDepth, put=set_sharpenMaxDepth)) float_t  sharpenMaxDepth;

 __declspec(property(get=get_sharpenMinDepth, put=set_sharpenMinDepth)) float_t  sharpenMinDepth;

 __declspec(property(get=get_sharpenMotionSensibility, put=set_sharpenMotionSensibility)) float_t  sharpenMotionSensibility;

 __declspec(property(get=get_sharpenRelaxation, put=set_sharpenRelaxation)) float_t  sharpenRelaxation;

/// @brief Field shouldUpdateMaterialProperties, offset 0x3b8, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldUpdateMaterialProperties, put=__cordl_internal_set_shouldUpdateMaterialProperties)) bool  shouldUpdateMaterialProperties;

 __declspec(property(get=get_sun, put=set_sun)) ::UnityW<::UnityEngine::Transform>  sun;

/// @brief Field sunFlareCurrentIntensity, offset 0x3bc, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlareCurrentIntensity, put=__cordl_internal_set_sunFlareCurrentIntensity)) float_t  sunFlareCurrentIntensity;

/// @brief Field sunFlareTime, offset 0x43c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunFlareTime, put=__cordl_internal_set_sunFlareTime)) float_t  sunFlareTime;

 __declspec(property(get=get_sunFlares, put=set_sunFlares)) bool  sunFlares;

 __declspec(property(get=get_sunFlaresCoronaRays1AngleOffset, put=set_sunFlaresCoronaRays1AngleOffset)) float_t  sunFlaresCoronaRays1AngleOffset;

 __declspec(property(get=get_sunFlaresCoronaRays1Length, put=set_sunFlaresCoronaRays1Length)) float_t  sunFlaresCoronaRays1Length;

 __declspec(property(get=get_sunFlaresCoronaRays1Spread, put=set_sunFlaresCoronaRays1Spread)) float_t  sunFlaresCoronaRays1Spread;

 __declspec(property(get=get_sunFlaresCoronaRays1Streaks, put=set_sunFlaresCoronaRays1Streaks)) int32_t  sunFlaresCoronaRays1Streaks;

 __declspec(property(get=get_sunFlaresCoronaRays2AngleOffset, put=set_sunFlaresCoronaRays2AngleOffset)) float_t  sunFlaresCoronaRays2AngleOffset;

 __declspec(property(get=get_sunFlaresCoronaRays2Length, put=set_sunFlaresCoronaRays2Length)) float_t  sunFlaresCoronaRays2Length;

 __declspec(property(get=get_sunFlaresCoronaRays2Spread, put=set_sunFlaresCoronaRays2Spread)) float_t  sunFlaresCoronaRays2Spread;

 __declspec(property(get=get_sunFlaresCoronaRays2Streaks, put=set_sunFlaresCoronaRays2Streaks)) int32_t  sunFlaresCoronaRays2Streaks;

 __declspec(property(get=get_sunFlaresDownsampling, put=set_sunFlaresDownsampling)) int32_t  sunFlaresDownsampling;

 __declspec(property(get=get_sunFlaresGhosts1Brightness, put=set_sunFlaresGhosts1Brightness)) float_t  sunFlaresGhosts1Brightness;

 __declspec(property(get=get_sunFlaresGhosts1Offset, put=set_sunFlaresGhosts1Offset)) float_t  sunFlaresGhosts1Offset;

 __declspec(property(get=get_sunFlaresGhosts1Size, put=set_sunFlaresGhosts1Size)) float_t  sunFlaresGhosts1Size;

 __declspec(property(get=get_sunFlaresGhosts2Brightness, put=set_sunFlaresGhosts2Brightness)) float_t  sunFlaresGhosts2Brightness;

 __declspec(property(get=get_sunFlaresGhosts2Offset, put=set_sunFlaresGhosts2Offset)) float_t  sunFlaresGhosts2Offset;

 __declspec(property(get=get_sunFlaresGhosts2Size, put=set_sunFlaresGhosts2Size)) float_t  sunFlaresGhosts2Size;

 __declspec(property(get=get_sunFlaresGhosts3Brightness, put=set_sunFlaresGhosts3Brightness)) float_t  sunFlaresGhosts3Brightness;

 __declspec(property(get=get_sunFlaresGhosts3Offset, put=set_sunFlaresGhosts3Offset)) float_t  sunFlaresGhosts3Offset;

 __declspec(property(get=get_sunFlaresGhosts3Size, put=set_sunFlaresGhosts3Size)) float_t  sunFlaresGhosts3Size;

 __declspec(property(get=get_sunFlaresGhosts4Brightness, put=set_sunFlaresGhosts4Brightness)) float_t  sunFlaresGhosts4Brightness;

 __declspec(property(get=get_sunFlaresGhosts4Offset, put=set_sunFlaresGhosts4Offset)) float_t  sunFlaresGhosts4Offset;

 __declspec(property(get=get_sunFlaresGhosts4Size, put=set_sunFlaresGhosts4Size)) float_t  sunFlaresGhosts4Size;

 __declspec(property(get=get_sunFlaresHaloAmplitude, put=set_sunFlaresHaloAmplitude)) float_t  sunFlaresHaloAmplitude;

 __declspec(property(get=get_sunFlaresHaloIntensity, put=set_sunFlaresHaloIntensity)) float_t  sunFlaresHaloIntensity;

 __declspec(property(get=get_sunFlaresHaloOffset, put=set_sunFlaresHaloOffset)) float_t  sunFlaresHaloOffset;

 __declspec(property(get=get_sunFlaresIntensity, put=set_sunFlaresIntensity)) float_t  sunFlaresIntensity;

 __declspec(property(get=get_sunFlaresLayerMask, put=set_sunFlaresLayerMask)) ::UnityEngine::LayerMask  sunFlaresLayerMask;

 __declspec(property(get=get_sunFlaresRotationDeadZone, put=set_sunFlaresRotationDeadZone)) bool  sunFlaresRotationDeadZone;

 __declspec(property(get=get_sunFlaresSolarWindSpeed, put=set_sunFlaresSolarWindSpeed)) float_t  sunFlaresSolarWindSpeed;

 __declspec(property(get=get_sunFlaresSunDiskSize, put=set_sunFlaresSunDiskSize)) float_t  sunFlaresSunDiskSize;

 __declspec(property(get=get_sunFlaresSunIntensity, put=set_sunFlaresSunIntensity)) float_t  sunFlaresSunIntensity;

 __declspec(property(get=get_sunFlaresSunRayDiffractionIntensity, put=set_sunFlaresSunRayDiffractionIntensity)) float_t  sunFlaresSunRayDiffractionIntensity;

 __declspec(property(get=get_sunFlaresSunRayDiffractionThreshold, put=set_sunFlaresSunRayDiffractionThreshold)) float_t  sunFlaresSunRayDiffractionThreshold;

 __declspec(property(get=get_sunFlaresTint, put=set_sunFlaresTint)) ::UnityEngine::Color  sunFlaresTint;

/// @brief Field sunLastRot, offset 0x3d0, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunLastRot, put=__cordl_internal_set_sunLastRot)) float_t  sunLastRot;

/// @brief Field sunLastScrPos, offset 0x3c0, size 0x10 
 __declspec(property(get=__cordl_internal_get_sunLastScrPos, put=__cordl_internal_set_sunLastScrPos)) ::UnityEngine::Vector4  sunLastScrPos;

 __declspec(property(get=get_thermalVision, put=set_thermalVision)) bool  thermalVision;

 __declspec(property(get=get_tintColor, put=set_tintColor)) ::UnityEngine::Color  tintColor;

 __declspec(property(get=get_tonemap, put=set_tonemap)) ::BeautifyEffect::BEAUTIFY_TMO  tonemap;

 __declspec(property(get=get_vignetting, put=set_vignetting)) bool  vignetting;

 __declspec(property(get=get_vignettingAspectRatio, put=set_vignettingAspectRatio)) float_t  vignettingAspectRatio;

 __declspec(property(get=get_vignettingBlink, put=set_vignettingBlink)) float_t  vignettingBlink;

 __declspec(property(get=get_vignettingCircularShape, put=set_vignettingCircularShape)) bool  vignettingCircularShape;

 __declspec(property(get=get_vignettingColor, put=set_vignettingColor)) ::UnityEngine::Color  vignettingColor;

 __declspec(property(get=get_vignettingFade, put=set_vignettingFade)) float_t  vignettingFade;

 __declspec(property(get=get_vignettingMask, put=set_vignettingMask)) ::UnityW<::UnityEngine::Texture2D>  vignettingMask;

/// @brief Method Blink, addr 0x180e4ec, size 0x2c, virtual false, abstract: false, final false
inline void Blink(float_t  duration, float_t  maxValue) ;

/// @brief Method BlurThis, addr 0x1818740, size 0x13c, virtual false, abstract: false, final false
inline void BlurThis(::UnityEngine::RenderTexture*  rt, float_t  blurScale) ;

/// @brief Method BlurThisAlpha, addr 0x1818388, size 0x13c, virtual false, abstract: false, final false
inline void BlurThisAlpha(::UnityEngine::RenderTexture*  rt, float_t  blurScale) ;

/// @brief Method BlurThisDoF, addr 0x18184c4, size 0x1dc, virtual false, abstract: false, final false
inline void BlurThisDoF(::UnityEngine::RenderTexture*  rt, int32_t  renderPass) ;

/// @brief Method BlurThisDownscaling, addr 0x181887c, size 0x1b4, virtual false, abstract: false, final false
inline void BlurThisDownscaling(::UnityEngine::RenderTexture*  rt, ::UnityEngine::RenderTexture*  downscaled, float_t  blurScale) ;

/// @brief Method BlurThisOneDirection, addr 0x1818ac8, size 0x128, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> BlurThisOneDirection(::UnityEngine::RenderTexture*  rt, bool  vertical, float_t  blurScale) ;

/// @brief Method CheckBloomCullingLayer, addr 0x181505c, size 0x4e8, virtual false, abstract: false, final false
inline void CheckBloomCullingLayer() ;

/// @brief Method CheckDoFExclusionMask, addr 0x1814cb8, size 0x3a4, virtual false, abstract: false, final false
inline void CheckDoFExclusionMask() ;

/// @brief Method CheckDoFTransparencySupport, addr 0x1814900, size 0x3b8, virtual false, abstract: false, final false
inline void CheckDoFTransparencySupport() ;

/// @brief Method CleanUpRT, addr 0x181427c, size 0x158, virtual false, abstract: false, final false
inline void CleanUpRT() ;

/// @brief Method DoBlink, addr 0x1818eac, size 0x78, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoBlink(float_t  duration, float_t  maxValue) ;

/// @brief Method LateUpdate, addr 0x18143d8, size 0x338, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::BeautifyEffect::Beautify* New_ctor() ;

/// @brief Method OnDestroy, addr 0x181408c, size 0x1f0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDidApplyAnimationProperties, addr 0x1818d70, size 0xc, virtual false, abstract: false, final false
inline void OnDidApplyAnimationProperties() ;

/// @brief Method OnEnable, addr 0x1812718, size 0xf0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPostRender, addr 0x1818bf0, size 0xf4, virtual false, abstract: false, final false
inline void OnPostRender() ;

/// @brief Method OnPreCull, addr 0x181477c, size 0x184, virtual false, abstract: false, final false
inline void OnPreCull() ;

/// @brief Method OnPreRender, addr 0x1815544, size 0x25c, virtual false, abstract: false, final false
inline void OnPreRender() ;

/// @brief Method OnRenderImage, addr 0x18157a0, size 0x289c, virtual true, abstract: false, final false
inline void OnRenderImage(::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  destination) ;

/// @brief Method Reset, addr 0x18143d4, size 0x4, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method UpdateDepthOfFieldBlurData, addr 0x1818ce4, size 0x8c, virtual false, abstract: false, final false
inline void UpdateDepthOfFieldBlurData(::UnityEngine::Vector2  blurDir) ;

/// @brief Method UpdateDepthOfFieldData, addr 0x181803c, size 0x34c, virtual false, abstract: false, final false
inline void UpdateDepthOfFieldData() ;

/// @brief Method UpdateDoFAutofocusDistance, addr 0x1818d7c, size 0x130, virtual false, abstract: false, final false
inline void UpdateDoFAutofocusDistance() ;

/// @brief Method UpdateMaterialAnamorphicIntensityAndThreshold, addr 0x1818a30, size 0x98, virtual false, abstract: false, final false
inline void UpdateMaterialAnamorphicIntensityAndThreshold() ;

/// @brief Method UpdateMaterialBloomIntensityAndThreshold, addr 0x18186a0, size 0xa0, virtual false, abstract: false, final false
inline void UpdateMaterialBloomIntensityAndThreshold() ;

/// @brief Method UpdateMaterialProperties, addr 0x180fb64, size 0x74, virtual false, abstract: false, final false
inline void UpdateMaterialProperties() ;

/// @brief Method UpdateMaterialPropertiesNow, addr 0x1812808, size 0x1884, virtual false, abstract: false, final false
inline void UpdateMaterialPropertiesNow() ;

/// @brief Method UpdateQualitySettings, addr 0x180fc28, size 0x38, virtual false, abstract: false, final false
inline void UpdateQualitySettings() ;

/// @brief Method UpdateSharpenParams, addr 0x1814710, size 0x6c, virtual false, abstract: false, final false
inline void UpdateSharpenParams(float_t  sharpen) ;

constexpr ::BeautifyEffect::OnBeforeFocusEvent* const& __cordl_internal_get_OnBeforeFocus() const;

constexpr ::BeautifyEffect::OnBeforeFocusEvent*& __cordl_internal_get_OnBeforeFocus() ;

constexpr bool const& __cordl_internal_get__anamorphicFlares() const;

constexpr bool& __cordl_internal_get__anamorphicFlares() ;

constexpr bool const& __cordl_internal_get__anamorphicFlaresAntiflicker() const;

constexpr bool& __cordl_internal_get__anamorphicFlaresAntiflicker() ;

constexpr bool const& __cordl_internal_get__anamorphicFlaresBlur() const;

constexpr bool& __cordl_internal_get__anamorphicFlaresBlur() ;

constexpr float_t const& __cordl_internal_get__anamorphicFlaresIntensity() const;

constexpr float_t& __cordl_internal_get__anamorphicFlaresIntensity() ;

constexpr float_t const& __cordl_internal_get__anamorphicFlaresSpread() const;

constexpr float_t& __cordl_internal_get__anamorphicFlaresSpread() ;

constexpr float_t const& __cordl_internal_get__anamorphicFlaresThreshold() const;

constexpr float_t& __cordl_internal_get__anamorphicFlaresThreshold() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__anamorphicFlaresTint() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__anamorphicFlaresTint() ;

constexpr bool const& __cordl_internal_get__anamorphicFlaresUltra() const;

constexpr bool& __cordl_internal_get__anamorphicFlaresUltra() ;

constexpr bool const& __cordl_internal_get__anamorphicFlaresVertical() const;

constexpr bool& __cordl_internal_get__anamorphicFlaresVertical() ;

constexpr float_t const& __cordl_internal_get__antialiasDepthThreshold() const;

constexpr float_t& __cordl_internal_get__antialiasDepthThreshold() ;

constexpr float_t const& __cordl_internal_get__antialiasStrength() const;

constexpr float_t& __cordl_internal_get__antialiasStrength() ;

constexpr bool const& __cordl_internal_get__bloom() const;

constexpr bool& __cordl_internal_get__bloom() ;

constexpr bool const& __cordl_internal_get__bloomAntiflicker() const;

constexpr bool& __cordl_internal_get__bloomAntiflicker() ;

constexpr bool const& __cordl_internal_get__bloomBlur() const;

constexpr bool& __cordl_internal_get__bloomBlur() ;

constexpr float_t const& __cordl_internal_get__bloomBoost0() const;

constexpr float_t& __cordl_internal_get__bloomBoost0() ;

constexpr float_t const& __cordl_internal_get__bloomBoost1() const;

constexpr float_t& __cordl_internal_get__bloomBoost1() ;

constexpr float_t const& __cordl_internal_get__bloomBoost2() const;

constexpr float_t& __cordl_internal_get__bloomBoost2() ;

constexpr float_t const& __cordl_internal_get__bloomBoost3() const;

constexpr float_t& __cordl_internal_get__bloomBoost3() ;

constexpr float_t const& __cordl_internal_get__bloomBoost4() const;

constexpr float_t& __cordl_internal_get__bloomBoost4() ;

constexpr float_t const& __cordl_internal_get__bloomBoost5() const;

constexpr float_t& __cordl_internal_get__bloomBoost5() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__bloomCullingMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__bloomCullingMask() ;

constexpr bool const& __cordl_internal_get__bloomCustomize() const;

constexpr bool& __cordl_internal_get__bloomCustomize() ;

constexpr bool const& __cordl_internal_get__bloomDebug() const;

constexpr bool& __cordl_internal_get__bloomDebug() ;

constexpr float_t const& __cordl_internal_get__bloomDepthAtten() const;

constexpr float_t& __cordl_internal_get__bloomDepthAtten() ;

constexpr float_t const& __cordl_internal_get__bloomIntensity() const;

constexpr float_t& __cordl_internal_get__bloomIntensity() ;

constexpr float_t const& __cordl_internal_get__bloomLayerMaskDownsampling() const;

constexpr float_t& __cordl_internal_get__bloomLayerMaskDownsampling() ;

constexpr float_t const& __cordl_internal_get__bloomLayerZBias() const;

constexpr float_t& __cordl_internal_get__bloomLayerZBias() ;

constexpr float_t const& __cordl_internal_get__bloomMaxBrightness() const;

constexpr float_t& __cordl_internal_get__bloomMaxBrightness() ;

constexpr float_t const& __cordl_internal_get__bloomThreshold() const;

constexpr float_t& __cordl_internal_get__bloomThreshold() ;

constexpr bool const& __cordl_internal_get__bloomUltra() const;

constexpr bool& __cordl_internal_get__bloomUltra() ;

constexpr float_t const& __cordl_internal_get__bloomWeight0() const;

constexpr float_t& __cordl_internal_get__bloomWeight0() ;

constexpr float_t const& __cordl_internal_get__bloomWeight1() const;

constexpr float_t& __cordl_internal_get__bloomWeight1() ;

constexpr float_t const& __cordl_internal_get__bloomWeight2() const;

constexpr float_t& __cordl_internal_get__bloomWeight2() ;

constexpr float_t const& __cordl_internal_get__bloomWeight3() const;

constexpr float_t& __cordl_internal_get__bloomWeight3() ;

constexpr float_t const& __cordl_internal_get__bloomWeight4() const;

constexpr float_t& __cordl_internal_get__bloomWeight4() ;

constexpr float_t const& __cordl_internal_get__bloomWeight5() const;

constexpr float_t& __cordl_internal_get__bloomWeight5() ;

constexpr bool const& __cordl_internal_get__blur() const;

constexpr bool& __cordl_internal_get__blur() ;

constexpr float_t const& __cordl_internal_get__blurIntensity() const;

constexpr float_t& __cordl_internal_get__blurIntensity() ;

constexpr float_t const& __cordl_internal_get__brightness() const;

constexpr float_t& __cordl_internal_get__brightness() ;

constexpr float_t const& __cordl_internal_get__compareLineAngle() const;

constexpr float_t& __cordl_internal_get__compareLineAngle() ;

constexpr float_t const& __cordl_internal_get__compareLineWidth() const;

constexpr float_t& __cordl_internal_get__compareLineWidth() ;

constexpr bool const& __cordl_internal_get__compareMode() const;

constexpr bool& __cordl_internal_get__compareMode() ;

constexpr float_t const& __cordl_internal_get__contrast() const;

constexpr float_t& __cordl_internal_get__contrast() ;

constexpr float_t const& __cordl_internal_get__daltonize() const;

constexpr float_t& __cordl_internal_get__daltonize() ;

constexpr bool const& __cordl_internal_get__depthOfField() const;

constexpr bool& __cordl_internal_get__depthOfField() ;

constexpr float_t const& __cordl_internal_get__depthOfFieldAperture() const;

constexpr float_t& __cordl_internal_get__depthOfFieldAperture() ;

constexpr bool const& __cordl_internal_get__depthOfFieldAutofocus() const;

constexpr bool& __cordl_internal_get__depthOfFieldAutofocus() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__depthOfFieldAutofocusLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__depthOfFieldAutofocusLayerMask() ;

constexpr float_t const& __cordl_internal_get__depthOfFieldAutofocusMaxDistance() const;

constexpr float_t& __cordl_internal_get__depthOfFieldAutofocusMaxDistance() ;

constexpr float_t const& __cordl_internal_get__depthOfFieldAutofocusMinDistance() const;

constexpr float_t& __cordl_internal_get__depthOfFieldAutofocusMinDistance() ;

constexpr bool const& __cordl_internal_get__depthOfFieldBokeh() const;

constexpr bool& __cordl_internal_get__depthOfFieldBokeh() ;

constexpr float_t const& __cordl_internal_get__depthOfFieldBokehIntensity() const;

constexpr float_t& __cordl_internal_get__depthOfFieldBokehIntensity() ;

constexpr float_t const& __cordl_internal_get__depthOfFieldBokehThreshold() const;

constexpr float_t& __cordl_internal_get__depthOfFieldBokehThreshold() ;

constexpr bool const& __cordl_internal_get__depthOfFieldDebug() const;

constexpr bool& __cordl_internal_get__depthOfFieldDebug() ;

constexpr float_t const& __cordl_internal_get__depthOfFieldDistance() const;

constexpr float_t& __cordl_internal_get__depthOfFieldDistance() ;

constexpr int32_t const& __cordl_internal_get__depthOfFieldDownsampling() const;

constexpr int32_t& __cordl_internal_get__depthOfFieldDownsampling() ;

constexpr float_t const& __cordl_internal_get__depthOfFieldExclusionBias() const;

constexpr float_t& __cordl_internal_get__depthOfFieldExclusionBias() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__depthOfFieldExclusionLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__depthOfFieldExclusionLayerMask() ;

constexpr float_t const& __cordl_internal_get__depthOfFieldExclusionLayerMaskDownsampling() const;

constexpr float_t& __cordl_internal_get__depthOfFieldExclusionLayerMaskDownsampling() ;

constexpr ::UnityEngine::FilterMode const& __cordl_internal_get__depthOfFieldFilterMode() const;

constexpr ::UnityEngine::FilterMode& __cordl_internal_get__depthOfFieldFilterMode() ;

constexpr float_t const& __cordl_internal_get__depthOfFieldFocalLength() const;

constexpr float_t& __cordl_internal_get__depthOfFieldFocalLength() ;

constexpr float_t const& __cordl_internal_get__depthOfFieldFocusSpeed() const;

constexpr float_t& __cordl_internal_get__depthOfFieldFocusSpeed() ;

constexpr bool const& __cordl_internal_get__depthOfFieldForegroundBlur() const;

constexpr bool& __cordl_internal_get__depthOfFieldForegroundBlur() ;

constexpr bool const& __cordl_internal_get__depthOfFieldForegroundBlurHQ() const;

constexpr bool& __cordl_internal_get__depthOfFieldForegroundBlurHQ() ;

constexpr float_t const& __cordl_internal_get__depthOfFieldForegroundDistance() const;

constexpr float_t& __cordl_internal_get__depthOfFieldForegroundDistance() ;

constexpr float_t const& __cordl_internal_get__depthOfFieldMaxBrightness() const;

constexpr float_t& __cordl_internal_get__depthOfFieldMaxBrightness() ;

constexpr float_t const& __cordl_internal_get__depthOfFieldMaxDistance() const;

constexpr float_t& __cordl_internal_get__depthOfFieldMaxDistance() ;

constexpr int32_t const& __cordl_internal_get__depthOfFieldMaxSamples() const;

constexpr int32_t& __cordl_internal_get__depthOfFieldMaxSamples() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__depthOfFieldTargetFocus() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__depthOfFieldTargetFocus() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__depthOfFieldTransparencyLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__depthOfFieldTransparencyLayerMask() ;

constexpr bool const& __cordl_internal_get__depthOfFieldTransparencySupport() const;

constexpr bool& __cordl_internal_get__depthOfFieldTransparencySupport() ;

constexpr float_t const& __cordl_internal_get__depthOfFieldTransparencySupportDownsampling() const;

constexpr float_t& __cordl_internal_get__depthOfFieldTransparencySupportDownsampling() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__depthofFieldAutofocusViewportPoint() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__depthofFieldAutofocusViewportPoint() ;

constexpr float_t const& __cordl_internal_get__dither() const;

constexpr float_t& __cordl_internal_get__dither() ;

constexpr float_t const& __cordl_internal_get__ditherDepth() const;

constexpr float_t& __cordl_internal_get__ditherDepth() ;

constexpr bool const& __cordl_internal_get__eyeAdaptation() const;

constexpr bool& __cordl_internal_get__eyeAdaptation() ;

constexpr float_t const& __cordl_internal_get__eyeAdaptationMaxExposure() const;

constexpr float_t& __cordl_internal_get__eyeAdaptationMaxExposure() ;

constexpr float_t const& __cordl_internal_get__eyeAdaptationMinExposure() const;

constexpr float_t& __cordl_internal_get__eyeAdaptationMinExposure() ;

constexpr float_t const& __cordl_internal_get__eyeAdaptationSpeedToDark() const;

constexpr float_t& __cordl_internal_get__eyeAdaptationSpeedToDark() ;

constexpr float_t const& __cordl_internal_get__eyeAdaptationSpeedToLight() const;

constexpr float_t& __cordl_internal_get__eyeAdaptationSpeedToLight() ;

constexpr bool const& __cordl_internal_get__frame() const;

constexpr bool& __cordl_internal_get__frame() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__frameColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__frameColor() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__frameMask() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__frameMask() ;

constexpr bool const& __cordl_internal_get__lensDirt() const;

constexpr bool& __cordl_internal_get__lensDirt() ;

constexpr float_t const& __cordl_internal_get__lensDirtIntensity() const;

constexpr float_t& __cordl_internal_get__lensDirtIntensity() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__lensDirtTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__lensDirtTexture() ;

constexpr float_t const& __cordl_internal_get__lensDirtThreshold() const;

constexpr float_t& __cordl_internal_get__lensDirtThreshold() ;

constexpr bool const& __cordl_internal_get__lut() const;

constexpr bool& __cordl_internal_get__lut() ;

constexpr float_t const& __cordl_internal_get__lutIntensity() const;

constexpr float_t& __cordl_internal_get__lutIntensity() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__lutTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__lutTexture() ;

constexpr bool const& __cordl_internal_get__nightVision() const;

constexpr bool& __cordl_internal_get__nightVision() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__nightVisionColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__nightVisionColor() ;

constexpr bool const& __cordl_internal_get__outline() const;

constexpr bool& __cordl_internal_get__outline() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__outlineColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__outlineColor() ;

constexpr int32_t const& __cordl_internal_get__pixelateAmount() const;

constexpr int32_t& __cordl_internal_get__pixelateAmount() ;

constexpr bool const& __cordl_internal_get__pixelateDownscale() const;

constexpr bool& __cordl_internal_get__pixelateDownscale() ;

constexpr ::BeautifyEffect::BEAUTIFY_PRESET const& __cordl_internal_get__preset() const;

constexpr ::BeautifyEffect::BEAUTIFY_PRESET& __cordl_internal_get__preset() ;

constexpr ::UnityW<::BeautifyEffect::BeautifyProfile> const& __cordl_internal_get__profile() const;

constexpr ::UnityW<::BeautifyEffect::BeautifyProfile>& __cordl_internal_get__profile() ;

constexpr bool const& __cordl_internal_get__purkinje() const;

constexpr bool& __cordl_internal_get__purkinje() ;

constexpr float_t const& __cordl_internal_get__purkinjeAmount() const;

constexpr float_t& __cordl_internal_get__purkinjeAmount() ;

constexpr float_t const& __cordl_internal_get__purkinjeLuminanceThreshold() const;

constexpr float_t& __cordl_internal_get__purkinjeLuminanceThreshold() ;

constexpr ::BeautifyEffect::BEAUTIFY_QUALITY const& __cordl_internal_get__quality() const;

constexpr ::BeautifyEffect::BEAUTIFY_QUALITY& __cordl_internal_get__quality() ;

constexpr float_t const& __cordl_internal_get__saturate() const;

constexpr float_t& __cordl_internal_get__saturate() ;

constexpr float_t const& __cordl_internal_get__sharpen() const;

constexpr float_t& __cordl_internal_get__sharpen() ;

constexpr float_t const& __cordl_internal_get__sharpenClamp() const;

constexpr float_t& __cordl_internal_get__sharpenClamp() ;

constexpr float_t const& __cordl_internal_get__sharpenDepthThreshold() const;

constexpr float_t& __cordl_internal_get__sharpenDepthThreshold() ;

constexpr float_t const& __cordl_internal_get__sharpenMaxDepth() const;

constexpr float_t& __cordl_internal_get__sharpenMaxDepth() ;

constexpr float_t const& __cordl_internal_get__sharpenMinDepth() const;

constexpr float_t& __cordl_internal_get__sharpenMinDepth() ;

constexpr float_t const& __cordl_internal_get__sharpenMotionSensibility() const;

constexpr float_t& __cordl_internal_get__sharpenMotionSensibility() ;

constexpr float_t const& __cordl_internal_get__sharpenRelaxation() const;

constexpr float_t& __cordl_internal_get__sharpenRelaxation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__sun() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__sun() ;

constexpr bool const& __cordl_internal_get__sunFlares() const;

constexpr bool& __cordl_internal_get__sunFlares() ;

constexpr float_t const& __cordl_internal_get__sunFlaresCoronaRays1AngleOffset() const;

constexpr float_t& __cordl_internal_get__sunFlaresCoronaRays1AngleOffset() ;

constexpr float_t const& __cordl_internal_get__sunFlaresCoronaRays1Length() const;

constexpr float_t& __cordl_internal_get__sunFlaresCoronaRays1Length() ;

constexpr float_t const& __cordl_internal_get__sunFlaresCoronaRays1Spread() const;

constexpr float_t& __cordl_internal_get__sunFlaresCoronaRays1Spread() ;

constexpr int32_t const& __cordl_internal_get__sunFlaresCoronaRays1Streaks() const;

constexpr int32_t& __cordl_internal_get__sunFlaresCoronaRays1Streaks() ;

constexpr float_t const& __cordl_internal_get__sunFlaresCoronaRays2AngleOffset() const;

constexpr float_t& __cordl_internal_get__sunFlaresCoronaRays2AngleOffset() ;

constexpr float_t const& __cordl_internal_get__sunFlaresCoronaRays2Length() const;

constexpr float_t& __cordl_internal_get__sunFlaresCoronaRays2Length() ;

constexpr float_t const& __cordl_internal_get__sunFlaresCoronaRays2Spread() const;

constexpr float_t& __cordl_internal_get__sunFlaresCoronaRays2Spread() ;

constexpr int32_t const& __cordl_internal_get__sunFlaresCoronaRays2Streaks() const;

constexpr int32_t& __cordl_internal_get__sunFlaresCoronaRays2Streaks() ;

constexpr int32_t const& __cordl_internal_get__sunFlaresDownsampling() const;

constexpr int32_t& __cordl_internal_get__sunFlaresDownsampling() ;

constexpr float_t const& __cordl_internal_get__sunFlaresGhosts1Brightness() const;

constexpr float_t& __cordl_internal_get__sunFlaresGhosts1Brightness() ;

constexpr float_t const& __cordl_internal_get__sunFlaresGhosts1Offset() const;

constexpr float_t& __cordl_internal_get__sunFlaresGhosts1Offset() ;

constexpr float_t const& __cordl_internal_get__sunFlaresGhosts1Size() const;

constexpr float_t& __cordl_internal_get__sunFlaresGhosts1Size() ;

constexpr float_t const& __cordl_internal_get__sunFlaresGhosts2Brightness() const;

constexpr float_t& __cordl_internal_get__sunFlaresGhosts2Brightness() ;

constexpr float_t const& __cordl_internal_get__sunFlaresGhosts2Offset() const;

constexpr float_t& __cordl_internal_get__sunFlaresGhosts2Offset() ;

constexpr float_t const& __cordl_internal_get__sunFlaresGhosts2Size() const;

constexpr float_t& __cordl_internal_get__sunFlaresGhosts2Size() ;

constexpr float_t const& __cordl_internal_get__sunFlaresGhosts3Brightness() const;

constexpr float_t& __cordl_internal_get__sunFlaresGhosts3Brightness() ;

constexpr float_t const& __cordl_internal_get__sunFlaresGhosts3Offset() const;

constexpr float_t& __cordl_internal_get__sunFlaresGhosts3Offset() ;

constexpr float_t const& __cordl_internal_get__sunFlaresGhosts3Size() const;

constexpr float_t& __cordl_internal_get__sunFlaresGhosts3Size() ;

constexpr float_t const& __cordl_internal_get__sunFlaresGhosts4Brightness() const;

constexpr float_t& __cordl_internal_get__sunFlaresGhosts4Brightness() ;

constexpr float_t const& __cordl_internal_get__sunFlaresGhosts4Offset() const;

constexpr float_t& __cordl_internal_get__sunFlaresGhosts4Offset() ;

constexpr float_t const& __cordl_internal_get__sunFlaresGhosts4Size() const;

constexpr float_t& __cordl_internal_get__sunFlaresGhosts4Size() ;

constexpr float_t const& __cordl_internal_get__sunFlaresHaloAmplitude() const;

constexpr float_t& __cordl_internal_get__sunFlaresHaloAmplitude() ;

constexpr float_t const& __cordl_internal_get__sunFlaresHaloIntensity() const;

constexpr float_t& __cordl_internal_get__sunFlaresHaloIntensity() ;

constexpr float_t const& __cordl_internal_get__sunFlaresHaloOffset() const;

constexpr float_t& __cordl_internal_get__sunFlaresHaloOffset() ;

constexpr float_t const& __cordl_internal_get__sunFlaresIntensity() const;

constexpr float_t& __cordl_internal_get__sunFlaresIntensity() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__sunFlaresLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__sunFlaresLayerMask() ;

constexpr bool const& __cordl_internal_get__sunFlaresRotationDeadZone() const;

constexpr bool& __cordl_internal_get__sunFlaresRotationDeadZone() ;

constexpr float_t const& __cordl_internal_get__sunFlaresSolarWindSpeed() const;

constexpr float_t& __cordl_internal_get__sunFlaresSolarWindSpeed() ;

constexpr float_t const& __cordl_internal_get__sunFlaresSunDiskSize() const;

constexpr float_t& __cordl_internal_get__sunFlaresSunDiskSize() ;

constexpr float_t const& __cordl_internal_get__sunFlaresSunIntensity() const;

constexpr float_t& __cordl_internal_get__sunFlaresSunIntensity() ;

constexpr float_t const& __cordl_internal_get__sunFlaresSunRayDiffractionIntensity() const;

constexpr float_t& __cordl_internal_get__sunFlaresSunRayDiffractionIntensity() ;

constexpr float_t const& __cordl_internal_get__sunFlaresSunRayDiffractionThreshold() const;

constexpr float_t& __cordl_internal_get__sunFlaresSunRayDiffractionThreshold() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__sunFlaresTint() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__sunFlaresTint() ;

constexpr bool const& __cordl_internal_get__thermalVision() const;

constexpr bool& __cordl_internal_get__thermalVision() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__tintColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__tintColor() ;

constexpr ::BeautifyEffect::BEAUTIFY_TMO const& __cordl_internal_get__tonemap() const;

constexpr ::BeautifyEffect::BEAUTIFY_TMO& __cordl_internal_get__tonemap() ;

constexpr bool const& __cordl_internal_get__vignetting() const;

constexpr bool& __cordl_internal_get__vignetting() ;

constexpr float_t const& __cordl_internal_get__vignettingAspectRatio() const;

constexpr float_t& __cordl_internal_get__vignettingAspectRatio() ;

constexpr float_t const& __cordl_internal_get__vignettingBlink() const;

constexpr float_t& __cordl_internal_get__vignettingBlink() ;

constexpr bool const& __cordl_internal_get__vignettingCircularShape() const;

constexpr bool& __cordl_internal_get__vignettingCircularShape() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__vignettingColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__vignettingColor() ;

constexpr float_t const& __cordl_internal_get__vignettingFade() const;

constexpr float_t& __cordl_internal_get__vignettingFade() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__vignettingMask() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__vignettingMask() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_bMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_bMat() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_bMatBasic() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_bMatBasic() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_bMatDesktop() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_bMatDesktop() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_bMatMobile() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_bMatMobile() ;

constexpr int32_t const& __cordl_internal_get_bloomCurrentLayerMaskValue() const;

constexpr int32_t& __cordl_internal_get_bloomCurrentLayerMaskValue() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_bloomSourceDepthTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_bloomSourceDepthTexture() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_bloomSourceTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_bloomSourceTexture() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_camPrevForward() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_camPrevForward() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_camPrevPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_camPrevPos() ;

constexpr float_t const& __cordl_internal_get_currSens() const;

constexpr float_t& __cordl_internal_get_currSens() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_currentCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_currentCamera() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_depthCam() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_depthCam() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_depthCamObj() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_depthCamObj() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_depthShader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_depthShader() ;

constexpr int32_t const& __cordl_internal_get_dofCurrentLayerMaskValue() const;

constexpr int32_t& __cordl_internal_get_dofCurrentLayerMaskValue() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_dofDepthTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_dofDepthTexture() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_dofExclusionShader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_dofExclusionShader() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_dofExclusionTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_dofExclusionTexture() ;

constexpr float_t const& __cordl_internal_get_dofLastAutofocusDistance() const;

constexpr float_t& __cordl_internal_get_dofLastAutofocusDistance() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_dofLastBokehData() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_dofLastBokehData() ;

constexpr float_t const& __cordl_internal_get_dofPrevDistance() const;

constexpr float_t& __cordl_internal_get_dofPrevDistance() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_flareNoise() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_flareNoise() ;

constexpr bool const& __cordl_internal_get_isDirty() const;

constexpr bool& __cordl_internal_get_isDirty() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_pixelateTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_pixelateTexture() ;

constexpr int32_t const& __cordl_internal_get_renderPass() const;

constexpr int32_t& __cordl_internal_get_renderPass() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>,::Array<::UnityW<::UnityEngine::RenderTexture>>*> const& __cordl_internal_get_rt() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>,::Array<::UnityW<::UnityEngine::RenderTexture>>*>& __cordl_internal_get_rt() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>,::Array<::UnityW<::UnityEngine::RenderTexture>>*> const& __cordl_internal_get_rtAF() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>,::Array<::UnityW<::UnityEngine::RenderTexture>>*>& __cordl_internal_get_rtAF() ;

constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get_rtDescBase() const;

constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get_rtDescBase() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>,::Array<::UnityW<::UnityEngine::RenderTexture>>*> const& __cordl_internal_get_rtEA() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>,::Array<::UnityW<::UnityEngine::RenderTexture>>*>& __cordl_internal_get_rtEA() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_rtEAHist() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_rtEAHist() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_rtEAacum() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_rtEAacum() ;

constexpr ::UnityEngine::RenderTextureFormat const& __cordl_internal_get_rtFormat() const;

constexpr ::UnityEngine::RenderTextureFormat& __cordl_internal_get_rtFormat() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_sceneCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_sceneCamera() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_shaderKeywords() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_shaderKeywords() ;

constexpr bool const& __cordl_internal_get_shouldUpdateMaterialProperties() const;

constexpr bool& __cordl_internal_get_shouldUpdateMaterialProperties() ;

constexpr float_t const& __cordl_internal_get_sunFlareCurrentIntensity() const;

constexpr float_t& __cordl_internal_get_sunFlareCurrentIntensity() ;

constexpr float_t const& __cordl_internal_get_sunFlareTime() const;

constexpr float_t& __cordl_internal_get_sunFlareTime() ;

constexpr float_t const& __cordl_internal_get_sunLastRot() const;

constexpr float_t& __cordl_internal_get_sunLastRot() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_sunLastScrPos() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_sunLastScrPos() ;

constexpr void __cordl_internal_set_OnBeforeFocus(::BeautifyEffect::OnBeforeFocusEvent*  value) ;

constexpr void __cordl_internal_set__anamorphicFlares(bool  value) ;

constexpr void __cordl_internal_set__anamorphicFlaresAntiflicker(bool  value) ;

constexpr void __cordl_internal_set__anamorphicFlaresBlur(bool  value) ;

constexpr void __cordl_internal_set__anamorphicFlaresIntensity(float_t  value) ;

constexpr void __cordl_internal_set__anamorphicFlaresSpread(float_t  value) ;

constexpr void __cordl_internal_set__anamorphicFlaresThreshold(float_t  value) ;

constexpr void __cordl_internal_set__anamorphicFlaresTint(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__anamorphicFlaresUltra(bool  value) ;

constexpr void __cordl_internal_set__anamorphicFlaresVertical(bool  value) ;

constexpr void __cordl_internal_set__antialiasDepthThreshold(float_t  value) ;

constexpr void __cordl_internal_set__antialiasStrength(float_t  value) ;

constexpr void __cordl_internal_set__bloom(bool  value) ;

constexpr void __cordl_internal_set__bloomAntiflicker(bool  value) ;

constexpr void __cordl_internal_set__bloomBlur(bool  value) ;

constexpr void __cordl_internal_set__bloomBoost0(float_t  value) ;

constexpr void __cordl_internal_set__bloomBoost1(float_t  value) ;

constexpr void __cordl_internal_set__bloomBoost2(float_t  value) ;

constexpr void __cordl_internal_set__bloomBoost3(float_t  value) ;

constexpr void __cordl_internal_set__bloomBoost4(float_t  value) ;

constexpr void __cordl_internal_set__bloomBoost5(float_t  value) ;

constexpr void __cordl_internal_set__bloomCullingMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__bloomCustomize(bool  value) ;

constexpr void __cordl_internal_set__bloomDebug(bool  value) ;

constexpr void __cordl_internal_set__bloomDepthAtten(float_t  value) ;

constexpr void __cordl_internal_set__bloomIntensity(float_t  value) ;

constexpr void __cordl_internal_set__bloomLayerMaskDownsampling(float_t  value) ;

constexpr void __cordl_internal_set__bloomLayerZBias(float_t  value) ;

constexpr void __cordl_internal_set__bloomMaxBrightness(float_t  value) ;

constexpr void __cordl_internal_set__bloomThreshold(float_t  value) ;

constexpr void __cordl_internal_set__bloomUltra(bool  value) ;

constexpr void __cordl_internal_set__bloomWeight0(float_t  value) ;

constexpr void __cordl_internal_set__bloomWeight1(float_t  value) ;

constexpr void __cordl_internal_set__bloomWeight2(float_t  value) ;

constexpr void __cordl_internal_set__bloomWeight3(float_t  value) ;

constexpr void __cordl_internal_set__bloomWeight4(float_t  value) ;

constexpr void __cordl_internal_set__bloomWeight5(float_t  value) ;

constexpr void __cordl_internal_set__blur(bool  value) ;

constexpr void __cordl_internal_set__blurIntensity(float_t  value) ;

constexpr void __cordl_internal_set__brightness(float_t  value) ;

constexpr void __cordl_internal_set__compareLineAngle(float_t  value) ;

constexpr void __cordl_internal_set__compareLineWidth(float_t  value) ;

constexpr void __cordl_internal_set__compareMode(bool  value) ;

constexpr void __cordl_internal_set__contrast(float_t  value) ;

constexpr void __cordl_internal_set__daltonize(float_t  value) ;

constexpr void __cordl_internal_set__depthOfField(bool  value) ;

constexpr void __cordl_internal_set__depthOfFieldAperture(float_t  value) ;

constexpr void __cordl_internal_set__depthOfFieldAutofocus(bool  value) ;

constexpr void __cordl_internal_set__depthOfFieldAutofocusLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__depthOfFieldAutofocusMaxDistance(float_t  value) ;

constexpr void __cordl_internal_set__depthOfFieldAutofocusMinDistance(float_t  value) ;

constexpr void __cordl_internal_set__depthOfFieldBokeh(bool  value) ;

constexpr void __cordl_internal_set__depthOfFieldBokehIntensity(float_t  value) ;

constexpr void __cordl_internal_set__depthOfFieldBokehThreshold(float_t  value) ;

constexpr void __cordl_internal_set__depthOfFieldDebug(bool  value) ;

constexpr void __cordl_internal_set__depthOfFieldDistance(float_t  value) ;

constexpr void __cordl_internal_set__depthOfFieldDownsampling(int32_t  value) ;

constexpr void __cordl_internal_set__depthOfFieldExclusionBias(float_t  value) ;

constexpr void __cordl_internal_set__depthOfFieldExclusionLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__depthOfFieldExclusionLayerMaskDownsampling(float_t  value) ;

constexpr void __cordl_internal_set__depthOfFieldFilterMode(::UnityEngine::FilterMode  value) ;

constexpr void __cordl_internal_set__depthOfFieldFocalLength(float_t  value) ;

constexpr void __cordl_internal_set__depthOfFieldFocusSpeed(float_t  value) ;

constexpr void __cordl_internal_set__depthOfFieldForegroundBlur(bool  value) ;

constexpr void __cordl_internal_set__depthOfFieldForegroundBlurHQ(bool  value) ;

constexpr void __cordl_internal_set__depthOfFieldForegroundDistance(float_t  value) ;

constexpr void __cordl_internal_set__depthOfFieldMaxBrightness(float_t  value) ;

constexpr void __cordl_internal_set__depthOfFieldMaxDistance(float_t  value) ;

constexpr void __cordl_internal_set__depthOfFieldMaxSamples(int32_t  value) ;

constexpr void __cordl_internal_set__depthOfFieldTargetFocus(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__depthOfFieldTransparencyLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__depthOfFieldTransparencySupport(bool  value) ;

constexpr void __cordl_internal_set__depthOfFieldTransparencySupportDownsampling(float_t  value) ;

constexpr void __cordl_internal_set__depthofFieldAutofocusViewportPoint(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__dither(float_t  value) ;

constexpr void __cordl_internal_set__ditherDepth(float_t  value) ;

constexpr void __cordl_internal_set__eyeAdaptation(bool  value) ;

constexpr void __cordl_internal_set__eyeAdaptationMaxExposure(float_t  value) ;

constexpr void __cordl_internal_set__eyeAdaptationMinExposure(float_t  value) ;

constexpr void __cordl_internal_set__eyeAdaptationSpeedToDark(float_t  value) ;

constexpr void __cordl_internal_set__eyeAdaptationSpeedToLight(float_t  value) ;

constexpr void __cordl_internal_set__frame(bool  value) ;

constexpr void __cordl_internal_set__frameColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__frameMask(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__lensDirt(bool  value) ;

constexpr void __cordl_internal_set__lensDirtIntensity(float_t  value) ;

constexpr void __cordl_internal_set__lensDirtTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__lensDirtThreshold(float_t  value) ;

constexpr void __cordl_internal_set__lut(bool  value) ;

constexpr void __cordl_internal_set__lutIntensity(float_t  value) ;

constexpr void __cordl_internal_set__lutTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__nightVision(bool  value) ;

constexpr void __cordl_internal_set__nightVisionColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__outline(bool  value) ;

constexpr void __cordl_internal_set__outlineColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__pixelateAmount(int32_t  value) ;

constexpr void __cordl_internal_set__pixelateDownscale(bool  value) ;

constexpr void __cordl_internal_set__preset(::BeautifyEffect::BEAUTIFY_PRESET  value) ;

constexpr void __cordl_internal_set__profile(::UnityW<::BeautifyEffect::BeautifyProfile>  value) ;

constexpr void __cordl_internal_set__purkinje(bool  value) ;

constexpr void __cordl_internal_set__purkinjeAmount(float_t  value) ;

constexpr void __cordl_internal_set__purkinjeLuminanceThreshold(float_t  value) ;

constexpr void __cordl_internal_set__quality(::BeautifyEffect::BEAUTIFY_QUALITY  value) ;

constexpr void __cordl_internal_set__saturate(float_t  value) ;

constexpr void __cordl_internal_set__sharpen(float_t  value) ;

constexpr void __cordl_internal_set__sharpenClamp(float_t  value) ;

constexpr void __cordl_internal_set__sharpenDepthThreshold(float_t  value) ;

constexpr void __cordl_internal_set__sharpenMaxDepth(float_t  value) ;

constexpr void __cordl_internal_set__sharpenMinDepth(float_t  value) ;

constexpr void __cordl_internal_set__sharpenMotionSensibility(float_t  value) ;

constexpr void __cordl_internal_set__sharpenRelaxation(float_t  value) ;

constexpr void __cordl_internal_set__sun(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__sunFlares(bool  value) ;

constexpr void __cordl_internal_set__sunFlaresCoronaRays1AngleOffset(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresCoronaRays1Length(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresCoronaRays1Spread(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresCoronaRays1Streaks(int32_t  value) ;

constexpr void __cordl_internal_set__sunFlaresCoronaRays2AngleOffset(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresCoronaRays2Length(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresCoronaRays2Spread(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresCoronaRays2Streaks(int32_t  value) ;

constexpr void __cordl_internal_set__sunFlaresDownsampling(int32_t  value) ;

constexpr void __cordl_internal_set__sunFlaresGhosts1Brightness(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresGhosts1Offset(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresGhosts1Size(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresGhosts2Brightness(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresGhosts2Offset(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresGhosts2Size(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresGhosts3Brightness(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresGhosts3Offset(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresGhosts3Size(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresGhosts4Brightness(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresGhosts4Offset(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresGhosts4Size(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresHaloAmplitude(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresHaloIntensity(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresHaloOffset(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresIntensity(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__sunFlaresRotationDeadZone(bool  value) ;

constexpr void __cordl_internal_set__sunFlaresSolarWindSpeed(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresSunDiskSize(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresSunIntensity(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresSunRayDiffractionIntensity(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresSunRayDiffractionThreshold(float_t  value) ;

constexpr void __cordl_internal_set__sunFlaresTint(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__thermalVision(bool  value) ;

constexpr void __cordl_internal_set__tintColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__tonemap(::BeautifyEffect::BEAUTIFY_TMO  value) ;

constexpr void __cordl_internal_set__vignetting(bool  value) ;

constexpr void __cordl_internal_set__vignettingAspectRatio(float_t  value) ;

constexpr void __cordl_internal_set__vignettingBlink(float_t  value) ;

constexpr void __cordl_internal_set__vignettingCircularShape(bool  value) ;

constexpr void __cordl_internal_set__vignettingColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__vignettingFade(float_t  value) ;

constexpr void __cordl_internal_set__vignettingMask(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_bMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_bMatBasic(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_bMatDesktop(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_bMatMobile(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_bloomCurrentLayerMaskValue(int32_t  value) ;

constexpr void __cordl_internal_set_bloomSourceDepthTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_bloomSourceTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_camPrevForward(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_camPrevPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_currSens(float_t  value) ;

constexpr void __cordl_internal_set_currentCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_depthCam(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_depthCamObj(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_depthShader(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_dofCurrentLayerMaskValue(int32_t  value) ;

constexpr void __cordl_internal_set_dofDepthTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_dofExclusionShader(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_dofExclusionTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_dofLastAutofocusDistance(float_t  value) ;

constexpr void __cordl_internal_set_dofLastBokehData(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_dofPrevDistance(float_t  value) ;

constexpr void __cordl_internal_set_flareNoise(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_isDirty(bool  value) ;

constexpr void __cordl_internal_set_pixelateTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_renderPass(int32_t  value) ;

constexpr void __cordl_internal_set_rt(::ArrayW<::UnityW<::UnityEngine::RenderTexture>,::Array<::UnityW<::UnityEngine::RenderTexture>>*>  value) ;

constexpr void __cordl_internal_set_rtAF(::ArrayW<::UnityW<::UnityEngine::RenderTexture>,::Array<::UnityW<::UnityEngine::RenderTexture>>*>  value) ;

constexpr void __cordl_internal_set_rtDescBase(::UnityEngine::RenderTextureDescriptor  value) ;

constexpr void __cordl_internal_set_rtEA(::ArrayW<::UnityW<::UnityEngine::RenderTexture>,::Array<::UnityW<::UnityEngine::RenderTexture>>*>  value) ;

constexpr void __cordl_internal_set_rtEAHist(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_rtEAacum(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_rtFormat(::UnityEngine::RenderTextureFormat  value) ;

constexpr void __cordl_internal_set_sceneCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_shaderKeywords(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_shouldUpdateMaterialProperties(bool  value) ;

constexpr void __cordl_internal_set_sunFlareCurrentIntensity(float_t  value) ;

constexpr void __cordl_internal_set_sunFlareTime(float_t  value) ;

constexpr void __cordl_internal_set_sunLastRot(float_t  value) ;

constexpr void __cordl_internal_set_sunLastScrPos(::UnityEngine::Vector4  value) ;

/// @brief Method .ctor, addr 0x1818f54, size 0x28c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::BeautifyEffect::Beautify> getStaticF__beautify() ;

/// @brief Method get_anamorphicFlares, addr 0x1811874, size 0x8, virtual false, abstract: false, final false
inline bool get_anamorphicFlares() ;

/// @brief Method get_anamorphicFlaresAntiflicker, addr 0x18118a0, size 0x8, virtual false, abstract: false, final false
inline bool get_anamorphicFlaresAntiflicker() ;

/// @brief Method get_anamorphicFlaresBlur, addr 0x18119a8, size 0x8, virtual false, abstract: false, final false
inline bool get_anamorphicFlaresBlur() ;

/// @brief Method get_anamorphicFlaresIntensity, addr 0x181187c, size 0x8, virtual false, abstract: false, final false
inline float_t get_anamorphicFlaresIntensity() ;

/// @brief Method get_anamorphicFlaresSpread, addr 0x1811908, size 0x8, virtual false, abstract: false, final false
inline float_t get_anamorphicFlaresSpread() ;

/// @brief Method get_anamorphicFlaresThreshold, addr 0x18118e8, size 0x8, virtual false, abstract: false, final false
inline float_t get_anamorphicFlaresThreshold() ;

/// @brief Method get_anamorphicFlaresTint, addr 0x1811930, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_anamorphicFlaresTint() ;

/// @brief Method get_anamorphicFlaresUltra, addr 0x18118c4, size 0x8, virtual false, abstract: false, final false
inline bool get_anamorphicFlaresUltra() ;

/// @brief Method get_anamorphicFlaresVertical, addr 0x1811928, size 0x8, virtual false, abstract: false, final false
inline bool get_anamorphicFlaresVertical() ;

/// @brief Method get_antialiasDepthThreshold, addr 0x18126f0, size 0x8, virtual false, abstract: false, final false
inline float_t get_antialiasDepthThreshold() ;

/// @brief Method get_antialiasStrength, addr 0x18126d0, size 0x8, virtual false, abstract: false, final false
inline float_t get_antialiasStrength() ;

/// @brief Method get_bloom, addr 0x1811514, size 0x8, virtual false, abstract: false, final false
inline bool get_bloom() ;

/// @brief Method get_bloomAntiflicker, addr 0x181168c, size 0x8, virtual false, abstract: false, final false
inline bool get_bloomAntiflicker() ;

/// @brief Method get_bloomBlur, addr 0x18117fc, size 0x8, virtual false, abstract: false, final false
inline bool get_bloomBlur() ;

/// @brief Method get_bloomBoost0, addr 0x18115cc, size 0x8, virtual false, abstract: false, final false
inline float_t get_bloomBoost0() ;

/// @brief Method get_bloomBoost1, addr 0x18115ec, size 0x8, virtual false, abstract: false, final false
inline float_t get_bloomBoost1() ;

/// @brief Method get_bloomBoost2, addr 0x181160c, size 0x8, virtual false, abstract: false, final false
inline float_t get_bloomBoost2() ;

/// @brief Method get_bloomBoost3, addr 0x181162c, size 0x8, virtual false, abstract: false, final false
inline float_t get_bloomBoost3() ;

/// @brief Method get_bloomBoost4, addr 0x181164c, size 0x8, virtual false, abstract: false, final false
inline float_t get_bloomBoost4() ;

/// @brief Method get_bloomBoost5, addr 0x181166c, size 0x8, virtual false, abstract: false, final false
inline float_t get_bloomBoost5() ;

/// @brief Method get_bloomCullingMask, addr 0x181151c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_bloomCullingMask() ;

/// @brief Method get_bloomCustomize, addr 0x18116f4, size 0x8, virtual false, abstract: false, final false
inline bool get_bloomCustomize() ;

/// @brief Method get_bloomDebug, addr 0x1811718, size 0x8, virtual false, abstract: false, final false
inline bool get_bloomDebug() ;

/// @brief Method get_bloomDepthAtten, addr 0x1811820, size 0x8, virtual false, abstract: false, final false
inline float_t get_bloomDepthAtten() ;

/// @brief Method get_bloomIntensity, addr 0x18115a0, size 0x8, virtual false, abstract: false, final false
inline float_t get_bloomIntensity() ;

/// @brief Method get_bloomLayerMaskDownsampling, addr 0x1811578, size 0x8, virtual false, abstract: false, final false
inline float_t get_bloomLayerMaskDownsampling() ;

/// @brief Method get_bloomLayerZBias, addr 0x1811840, size 0x8, virtual false, abstract: false, final false
inline float_t get_bloomLayerZBias() ;

/// @brief Method get_bloomMaxBrightness, addr 0x18115a8, size 0x8, virtual false, abstract: false, final false
inline float_t get_bloomMaxBrightness() ;

/// @brief Method get_bloomThreshold, addr 0x18116d4, size 0x8, virtual false, abstract: false, final false
inline float_t get_bloomThreshold() ;

/// @brief Method get_bloomUltra, addr 0x18116b0, size 0x8, virtual false, abstract: false, final false
inline bool get_bloomUltra() ;

/// @brief Method get_bloomWeight0, addr 0x181173c, size 0x8, virtual false, abstract: false, final false
inline float_t get_bloomWeight0() ;

/// @brief Method get_bloomWeight1, addr 0x181175c, size 0x8, virtual false, abstract: false, final false
inline float_t get_bloomWeight1() ;

/// @brief Method get_bloomWeight2, addr 0x181177c, size 0x8, virtual false, abstract: false, final false
inline float_t get_bloomWeight2() ;

/// @brief Method get_bloomWeight3, addr 0x181179c, size 0x8, virtual false, abstract: false, final false
inline float_t get_bloomWeight3() ;

/// @brief Method get_bloomWeight4, addr 0x18117bc, size 0x8, virtual false, abstract: false, final false
inline float_t get_bloomWeight4() ;

/// @brief Method get_bloomWeight5, addr 0x18117dc, size 0x8, virtual false, abstract: false, final false
inline float_t get_bloomWeight5() ;

/// @brief Method get_blur, addr 0x1812648, size 0x8, virtual false, abstract: false, final false
inline bool get_blur() ;

/// @brief Method get_blurIntensity, addr 0x181266c, size 0x8, virtual false, abstract: false, final false
inline float_t get_blurIntensity() ;

/// @brief Method get_brightness, addr 0x1811020, size 0x8, virtual false, abstract: false, final false
inline float_t get_brightness() ;

/// @brief Method get_cameraEffect, addr 0x1812710, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_cameraEffect() ;

/// @brief Method get_compareLineAngle, addr 0x1810de0, size 0x8, virtual false, abstract: false, final false
inline float_t get_compareLineAngle() ;

/// @brief Method get_compareLineWidth, addr 0x1810e00, size 0x8, virtual false, abstract: false, final false
inline float_t get_compareLineWidth() ;

/// @brief Method get_compareMode, addr 0x1810dbc, size 0x8, virtual false, abstract: false, final false
inline bool get_compareMode() ;

/// @brief Method get_contrast, addr 0x1810ff8, size 0x8, virtual false, abstract: false, final false
inline float_t get_contrast() ;

/// @brief Method get_daltonize, addr 0x1811048, size 0x8, virtual false, abstract: false, final false
inline float_t get_daltonize() ;

/// @brief Method get_depthOfField, addr 0x18119cc, size 0x8, virtual false, abstract: false, final false
inline bool get_depthOfField() ;

/// @brief Method get_depthOfFieldAperture, addr 0x1811dcc, size 0x8, virtual false, abstract: false, final false
inline float_t get_depthOfFieldAperture() ;

/// @brief Method get_depthOfFieldAutofocus, addr 0x1811b0c, size 0x8, virtual false, abstract: false, final false
inline bool get_depthOfFieldAutofocus() ;

/// @brief Method get_depthOfFieldAutofocusLayerMask, addr 0x1811bb8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_depthOfFieldAutofocusLayerMask() ;

/// @brief Method get_depthOfFieldAutofocusMaxDistance, addr 0x1811b98, size 0x8, virtual false, abstract: false, final false
inline float_t get_depthOfFieldAutofocusMaxDistance() ;

/// @brief Method get_depthOfFieldAutofocusMinDistance, addr 0x1811b78, size 0x8, virtual false, abstract: false, final false
inline float_t get_depthOfFieldAutofocusMinDistance() ;

/// @brief Method get_depthOfFieldBokeh, addr 0x1811e58, size 0x8, virtual false, abstract: false, final false
inline bool get_depthOfFieldBokeh() ;

/// @brief Method get_depthOfFieldBokehIntensity, addr 0x1811ea4, size 0x8, virtual false, abstract: false, final false
inline float_t get_depthOfFieldBokehIntensity() ;

/// @brief Method get_depthOfFieldBokehThreshold, addr 0x1811e7c, size 0x8, virtual false, abstract: false, final false
inline float_t get_depthOfFieldBokehThreshold() ;

/// @brief Method get_depthOfFieldCurrentFocalPointDistance, addr 0x1818f4c, size 0x8, virtual false, abstract: false, final false
inline float_t get_depthOfFieldCurrentFocalPointDistance() ;

/// @brief Method get_depthOfFieldDebug, addr 0x1811ae8, size 0x8, virtual false, abstract: false, final false
inline bool get_depthOfFieldDebug() ;

/// @brief Method get_depthOfFieldDistance, addr 0x1811cf4, size 0x8, virtual false, abstract: false, final false
inline float_t get_depthOfFieldDistance() ;

/// @brief Method get_depthOfFieldDownsampling, addr 0x1811d54, size 0x8, virtual false, abstract: false, final false
inline int32_t get_depthOfFieldDownsampling() ;

/// @brief Method get_depthOfFieldExclusionBias, addr 0x1811cc0, size 0x8, virtual false, abstract: false, final false
inline float_t get_depthOfFieldExclusionBias() ;

/// @brief Method get_depthOfFieldExclusionLayerMask, addr 0x1811c14, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_depthOfFieldExclusionLayerMask() ;

/// @brief Method get_depthOfFieldExclusionLayerMaskDownsampling, addr 0x1811c70, size 0x8, virtual false, abstract: false, final false
inline float_t get_depthOfFieldExclusionLayerMaskDownsampling() ;

/// @brief Method get_depthOfFieldFilterMode, addr 0x1811f14, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::FilterMode get_depthOfFieldFilterMode() ;

/// @brief Method get_depthOfFieldFocalLength, addr 0x1811da8, size 0x8, virtual false, abstract: false, final false
inline float_t get_depthOfFieldFocalLength() ;

/// @brief Method get_depthOfFieldFocusSpeed, addr 0x1811d1c, size 0x8, virtual false, abstract: false, final false
inline float_t get_depthOfFieldFocusSpeed() ;

/// @brief Method get_depthOfFieldForegroundBlur, addr 0x1811df0, size 0x8, virtual false, abstract: false, final false
inline bool get_depthOfFieldForegroundBlur() ;

/// @brief Method get_depthOfFieldForegroundBlurHQ, addr 0x1811e14, size 0x8, virtual false, abstract: false, final false
inline bool get_depthOfFieldForegroundBlurHQ() ;

/// @brief Method get_depthOfFieldForegroundDistance, addr 0x1811e38, size 0x8, virtual false, abstract: false, final false
inline float_t get_depthOfFieldForegroundDistance() ;

/// @brief Method get_depthOfFieldMaxBrightness, addr 0x1811ecc, size 0x8, virtual false, abstract: false, final false
inline float_t get_depthOfFieldMaxBrightness() ;

/// @brief Method get_depthOfFieldMaxDistance, addr 0x1811ef0, size 0x8, virtual false, abstract: false, final false
inline float_t get_depthOfFieldMaxDistance() ;

/// @brief Method get_depthOfFieldMaxSamples, addr 0x1811d7c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_depthOfFieldMaxSamples() ;

/// @brief Method get_depthOfFieldTargetFocus, addr 0x1811a54, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_depthOfFieldTargetFocus() ;

/// @brief Method get_depthOfFieldTransparencyLayerMask, addr 0x18119f8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_depthOfFieldTransparencyLayerMask() ;

/// @brief Method get_depthOfFieldTransparencySupport, addr 0x18119f0, size 0x8, virtual false, abstract: false, final false
inline bool get_depthOfFieldTransparencySupport() ;

/// @brief Method get_depthOfFieldTransparencySupportDownsampling, addr 0x1811c98, size 0x8, virtual false, abstract: false, final false
inline float_t get_depthOfFieldTransparencySupportDownsampling() ;

/// @brief Method get_depthofFieldAutofocusViewportPoint, addr 0x1811b30, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_depthofFieldAutofocusViewportPoint() ;

/// @brief Method get_dither, addr 0x1810e20, size 0x8, virtual false, abstract: false, final false
inline float_t get_dither() ;

/// @brief Method get_ditherDepth, addr 0x1810e48, size 0x8, virtual false, abstract: false, final false
inline float_t get_ditherDepth() ;

/// @brief Method get_eyeAdaptation, addr 0x1811f34, size 0x8, virtual false, abstract: false, final false
inline bool get_eyeAdaptation() ;

/// @brief Method get_eyeAdaptationMaxExposure, addr 0x1811f8c, size 0x8, virtual false, abstract: false, final false
inline float_t get_eyeAdaptationMaxExposure() ;

/// @brief Method get_eyeAdaptationMinExposure, addr 0x1811f58, size 0x8, virtual false, abstract: false, final false
inline float_t get_eyeAdaptationMinExposure() ;

/// @brief Method get_eyeAdaptationSpeedToDark, addr 0x1811ff8, size 0x8, virtual false, abstract: false, final false
inline float_t get_eyeAdaptationSpeedToDark() ;

/// @brief Method get_eyeAdaptationSpeedToLight, addr 0x1811fc4, size 0x8, virtual false, abstract: false, final false
inline float_t get_eyeAdaptationSpeedToLight() ;

/// @brief Method get_frame, addr 0x181119c, size 0x8, virtual false, abstract: false, final false
inline bool get_frame() ;

/// @brief Method get_frameColor, addr 0x18111a4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_frameColor() ;

/// @brief Method get_frameMask, addr 0x1811204, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_frameMask() ;

/// @brief Method get_instance, addr 0x180e2cc, size 0x140, virtual false, abstract: false, final false
static inline ::UnityW<::BeautifyEffect::Beautify> get_instance() ;

/// @brief Method get_lensDirt, addr 0x1811438, size 0x8, virtual false, abstract: false, final false
inline bool get_lensDirt() ;

/// @brief Method get_lensDirtIntensity, addr 0x1811460, size 0x8, virtual false, abstract: false, final false
inline float_t get_lensDirtIntensity() ;

/// @brief Method get_lensDirtTexture, addr 0x1811480, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_lensDirtTexture() ;

/// @brief Method get_lensDirtThreshold, addr 0x1811440, size 0x8, virtual false, abstract: false, final false
inline float_t get_lensDirtThreshold() ;

/// @brief Method get_lut, addr 0x1811298, size 0x8, virtual false, abstract: false, final false
inline bool get_lut() ;

/// @brief Method get_lutIntensity, addr 0x18112a0, size 0x8, virtual false, abstract: false, final false
inline float_t get_lutIntensity() ;

/// @brief Method get_lutTexture, addr 0x18112c0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_lutTexture() ;

/// @brief Method get_nightVision, addr 0x1811354, size 0x8, virtual false, abstract: false, final false
inline bool get_nightVision() ;

/// @brief Method get_nightVisionColor, addr 0x181135c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_nightVisionColor() ;

/// @brief Method get_outline, addr 0x18113bc, size 0x8, virtual false, abstract: false, final false
inline bool get_outline() ;

/// @brief Method get_outlineColor, addr 0x18113c4, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_outlineColor() ;

/// @brief Method get_pixelateAmount, addr 0x181268c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_pixelateAmount() ;

/// @brief Method get_pixelateDownscale, addr 0x18126ac, size 0x8, virtual false, abstract: false, final false
inline bool get_pixelateDownscale() ;

/// @brief Method get_preset, addr 0x180fb44, size 0x8, virtual false, abstract: false, final false
inline ::BeautifyEffect::BEAUTIFY_PRESET get_preset() ;

/// @brief Method get_profile, addr 0x180fc60, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::BeautifyEffect::BeautifyProfile> get_profile() ;

/// @brief Method get_purkinje, addr 0x181202c, size 0x8, virtual false, abstract: false, final false
inline bool get_purkinje() ;

/// @brief Method get_purkinjeAmount, addr 0x1812050, size 0x8, virtual false, abstract: false, final false
inline float_t get_purkinjeAmount() ;

/// @brief Method get_purkinjeLuminanceThreshold, addr 0x1812084, size 0x8, virtual false, abstract: false, final false
inline float_t get_purkinjeLuminanceThreshold() ;

/// @brief Method get_quality, addr 0x180fbd8, size 0x8, virtual false, abstract: false, final false
inline ::BeautifyEffect::BEAUTIFY_QUALITY get_quality() ;

/// @brief Method get_saturate, addr 0x1810fd0, size 0x8, virtual false, abstract: false, final false
inline float_t get_saturate() ;

/// @brief Method get_sharpen, addr 0x1810eb0, size 0x8, virtual false, abstract: false, final false
inline float_t get_sharpen() ;

/// @brief Method get_sharpenClamp, addr 0x1810f88, size 0x8, virtual false, abstract: false, final false
inline float_t get_sharpenClamp() ;

/// @brief Method get_sharpenDepthThreshold, addr 0x1810ed8, size 0x8, virtual false, abstract: false, final false
inline float_t get_sharpenDepthThreshold() ;

/// @brief Method get_sharpenMaxDepth, addr 0x1810e90, size 0x8, virtual false, abstract: false, final false
inline float_t get_sharpenMaxDepth() ;

/// @brief Method get_sharpenMinDepth, addr 0x1810e70, size 0x8, virtual false, abstract: false, final false
inline float_t get_sharpenMinDepth() ;

/// @brief Method get_sharpenMotionSensibility, addr 0x1810fb0, size 0x8, virtual false, abstract: false, final false
inline float_t get_sharpenMotionSensibility() ;

/// @brief Method get_sharpenRelaxation, addr 0x1810f60, size 0x8, virtual false, abstract: false, final false
inline float_t get_sharpenRelaxation() ;

/// @brief Method get_sun, addr 0x18120f4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_sun() ;

/// @brief Method get_sunFlares, addr 0x18120ec, size 0x8, virtual false, abstract: false, final false
inline bool get_sunFlares() ;

/// @brief Method get_sunFlaresCoronaRays1AngleOffset, addr 0x18123a4, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresCoronaRays1AngleOffset() ;

/// @brief Method get_sunFlaresCoronaRays1Length, addr 0x1812344, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresCoronaRays1Length() ;

/// @brief Method get_sunFlaresCoronaRays1Spread, addr 0x1812384, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresCoronaRays1Spread() ;

/// @brief Method get_sunFlaresCoronaRays1Streaks, addr 0x1812364, size 0x8, virtual false, abstract: false, final false
inline int32_t get_sunFlaresCoronaRays1Streaks() ;

/// @brief Method get_sunFlaresCoronaRays2AngleOffset, addr 0x1812424, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresCoronaRays2AngleOffset() ;

/// @brief Method get_sunFlaresCoronaRays2Length, addr 0x18123c4, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresCoronaRays2Length() ;

/// @brief Method get_sunFlaresCoronaRays2Spread, addr 0x1812404, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresCoronaRays2Spread() ;

/// @brief Method get_sunFlaresCoronaRays2Streaks, addr 0x18123e4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_sunFlaresCoronaRays2Streaks() ;

/// @brief Method get_sunFlaresDownsampling, addr 0x181229c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_sunFlaresDownsampling() ;

/// @brief Method get_sunFlaresGhosts1Brightness, addr 0x1812484, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresGhosts1Brightness() ;

/// @brief Method get_sunFlaresGhosts1Offset, addr 0x1812464, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresGhosts1Offset() ;

/// @brief Method get_sunFlaresGhosts1Size, addr 0x1812444, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresGhosts1Size() ;

/// @brief Method get_sunFlaresGhosts2Brightness, addr 0x18124e4, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresGhosts2Brightness() ;

/// @brief Method get_sunFlaresGhosts2Offset, addr 0x18124c4, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresGhosts2Offset() ;

/// @brief Method get_sunFlaresGhosts2Size, addr 0x18124a4, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresGhosts2Size() ;

/// @brief Method get_sunFlaresGhosts3Brightness, addr 0x1812524, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresGhosts3Brightness() ;

/// @brief Method get_sunFlaresGhosts3Offset, addr 0x1812544, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresGhosts3Offset() ;

/// @brief Method get_sunFlaresGhosts3Size, addr 0x1812504, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresGhosts3Size() ;

/// @brief Method get_sunFlaresGhosts4Brightness, addr 0x18125a4, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresGhosts4Brightness() ;

/// @brief Method get_sunFlaresGhosts4Offset, addr 0x1812584, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresGhosts4Offset() ;

/// @brief Method get_sunFlaresGhosts4Size, addr 0x1812564, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresGhosts4Size() ;

/// @brief Method get_sunFlaresHaloAmplitude, addr 0x18125e4, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresHaloAmplitude() ;

/// @brief Method get_sunFlaresHaloIntensity, addr 0x1812604, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresHaloIntensity() ;

/// @brief Method get_sunFlaresHaloOffset, addr 0x18125c4, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresHaloOffset() ;

/// @brief Method get_sunFlaresIntensity, addr 0x18121e4, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresIntensity() ;

/// @brief Method get_sunFlaresLayerMask, addr 0x1812188, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_sunFlaresLayerMask() ;

/// @brief Method get_sunFlaresRotationDeadZone, addr 0x1812624, size 0x8, virtual false, abstract: false, final false
inline bool get_sunFlaresRotationDeadZone() ;

/// @brief Method get_sunFlaresSolarWindSpeed, addr 0x1812204, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresSolarWindSpeed() ;

/// @brief Method get_sunFlaresSunDiskSize, addr 0x18122e4, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresSunDiskSize() ;

/// @brief Method get_sunFlaresSunIntensity, addr 0x18122c4, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresSunIntensity() ;

/// @brief Method get_sunFlaresSunRayDiffractionIntensity, addr 0x1812304, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresSunRayDiffractionIntensity() ;

/// @brief Method get_sunFlaresSunRayDiffractionThreshold, addr 0x1812324, size 0x8, virtual false, abstract: false, final false
inline float_t get_sunFlaresSunRayDiffractionThreshold() ;

/// @brief Method get_sunFlaresTint, addr 0x1812224, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_sunFlaresTint() ;

/// @brief Method get_thermalVision, addr 0x1811430, size 0x8, virtual false, abstract: false, final false
inline bool get_thermalVision() ;

/// @brief Method get_tintColor, addr 0x1810f00, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_tintColor() ;

/// @brief Method get_tonemap, addr 0x18120b8, size 0x8, virtual false, abstract: false, final false
inline ::BeautifyEffect::BEAUTIFY_TMO get_tonemap() ;

/// @brief Method get_vignetting, addr 0x1811070, size 0x8, virtual false, abstract: false, final false
inline bool get_vignetting() ;

/// @brief Method get_vignettingAspectRatio, addr 0x18110c8, size 0x8, virtual false, abstract: false, final false
inline float_t get_vignettingAspectRatio() ;

/// @brief Method get_vignettingBlink, addr 0x18110e8, size 0x8, virtual false, abstract: false, final false
inline float_t get_vignettingBlink() ;

/// @brief Method get_vignettingCircularShape, addr 0x18110a4, size 0x8, virtual false, abstract: false, final false
inline bool get_vignettingCircularShape() ;

/// @brief Method get_vignettingColor, addr 0x1811078, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_vignettingColor() ;

/// @brief Method get_vignettingFade, addr 0x1811084, size 0x8, virtual false, abstract: false, final false
inline float_t get_vignettingFade() ;

/// @brief Method get_vignettingMask, addr 0x1811108, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_vignettingMask() ;

static inline void setStaticF__beautify(::UnityW<::BeautifyEffect::Beautify>  value) ;

/// @brief Method set_anamorphicFlares, addr 0x180ed40, size 0x1c, virtual false, abstract: false, final false
inline void set_anamorphicFlares(bool  value) ;

/// @brief Method set_anamorphicFlaresAntiflicker, addr 0x18118a8, size 0x1c, virtual false, abstract: false, final false
inline void set_anamorphicFlaresAntiflicker(bool  value) ;

/// @brief Method set_anamorphicFlaresBlur, addr 0x18119b0, size 0x1c, virtual false, abstract: false, final false
inline void set_anamorphicFlaresBlur(bool  value) ;

/// @brief Method set_anamorphicFlaresIntensity, addr 0x1811884, size 0x1c, virtual false, abstract: false, final false
inline void set_anamorphicFlaresIntensity(float_t  value) ;

/// @brief Method set_anamorphicFlaresSpread, addr 0x1811910, size 0x18, virtual false, abstract: false, final false
inline void set_anamorphicFlaresSpread(float_t  value) ;

/// @brief Method set_anamorphicFlaresThreshold, addr 0x18118f0, size 0x18, virtual false, abstract: false, final false
inline void set_anamorphicFlaresThreshold(float_t  value) ;

/// @brief Method set_anamorphicFlaresTint, addr 0x1811944, size 0x64, virtual false, abstract: false, final false
inline void set_anamorphicFlaresTint(::UnityEngine::Color  value) ;

/// @brief Method set_anamorphicFlaresUltra, addr 0x18118cc, size 0x1c, virtual false, abstract: false, final false
inline void set_anamorphicFlaresUltra(bool  value) ;

/// @brief Method set_anamorphicFlaresVertical, addr 0x180ee20, size 0x1c, virtual false, abstract: false, final false
inline void set_anamorphicFlaresVertical(bool  value) ;

/// @brief Method set_antialiasDepthThreshold, addr 0x18126f8, size 0x18, virtual false, abstract: false, final false
inline void set_antialiasDepthThreshold(float_t  value) ;

/// @brief Method set_antialiasStrength, addr 0x18126d8, size 0x18, virtual false, abstract: false, final false
inline void set_antialiasStrength(float_t  value) ;

/// @brief Method set_bloom, addr 0x180ed24, size 0x1c, virtual false, abstract: false, final false
inline void set_bloom(bool  value) ;

/// @brief Method set_bloomAntiflicker, addr 0x1811694, size 0x1c, virtual false, abstract: false, final false
inline void set_bloomAntiflicker(bool  value) ;

/// @brief Method set_bloomBlur, addr 0x1811804, size 0x1c, virtual false, abstract: false, final false
inline void set_bloomBlur(bool  value) ;

/// @brief Method set_bloomBoost0, addr 0x18115d4, size 0x18, virtual false, abstract: false, final false
inline void set_bloomBoost0(float_t  value) ;

/// @brief Method set_bloomBoost1, addr 0x18115f4, size 0x18, virtual false, abstract: false, final false
inline void set_bloomBoost1(float_t  value) ;

/// @brief Method set_bloomBoost2, addr 0x1811614, size 0x18, virtual false, abstract: false, final false
inline void set_bloomBoost2(float_t  value) ;

/// @brief Method set_bloomBoost3, addr 0x1811634, size 0x18, virtual false, abstract: false, final false
inline void set_bloomBoost3(float_t  value) ;

/// @brief Method set_bloomBoost4, addr 0x1811654, size 0x18, virtual false, abstract: false, final false
inline void set_bloomBoost4(float_t  value) ;

/// @brief Method set_bloomBoost5, addr 0x1811674, size 0x18, virtual false, abstract: false, final false
inline void set_bloomBoost5(float_t  value) ;

/// @brief Method set_bloomCullingMask, addr 0x1811524, size 0x54, virtual false, abstract: false, final false
inline void set_bloomCullingMask(::UnityEngine::LayerMask  value) ;

/// @brief Method set_bloomCustomize, addr 0x18116fc, size 0x1c, virtual false, abstract: false, final false
inline void set_bloomCustomize(bool  value) ;

/// @brief Method set_bloomDebug, addr 0x1811720, size 0x1c, virtual false, abstract: false, final false
inline void set_bloomDebug(bool  value) ;

/// @brief Method set_bloomDepthAtten, addr 0x1811828, size 0x18, virtual false, abstract: false, final false
inline void set_bloomDepthAtten(float_t  value) ;

/// @brief Method set_bloomIntensity, addr 0x180e40c, size 0x1c, virtual false, abstract: false, final false
inline void set_bloomIntensity(float_t  value) ;

/// @brief Method set_bloomLayerMaskDownsampling, addr 0x1811580, size 0x20, virtual false, abstract: false, final false
inline void set_bloomLayerMaskDownsampling(float_t  value) ;

/// @brief Method set_bloomLayerZBias, addr 0x1811848, size 0x2c, virtual false, abstract: false, final false
inline void set_bloomLayerZBias(float_t  value) ;

/// @brief Method set_bloomMaxBrightness, addr 0x18115b0, size 0x1c, virtual false, abstract: false, final false
inline void set_bloomMaxBrightness(float_t  value) ;

/// @brief Method set_bloomThreshold, addr 0x18116dc, size 0x18, virtual false, abstract: false, final false
inline void set_bloomThreshold(float_t  value) ;

/// @brief Method set_bloomUltra, addr 0x18116b8, size 0x1c, virtual false, abstract: false, final false
inline void set_bloomUltra(bool  value) ;

/// @brief Method set_bloomWeight0, addr 0x1811744, size 0x18, virtual false, abstract: false, final false
inline void set_bloomWeight0(float_t  value) ;

/// @brief Method set_bloomWeight1, addr 0x1811764, size 0x18, virtual false, abstract: false, final false
inline void set_bloomWeight1(float_t  value) ;

/// @brief Method set_bloomWeight2, addr 0x1811784, size 0x18, virtual false, abstract: false, final false
inline void set_bloomWeight2(float_t  value) ;

/// @brief Method set_bloomWeight3, addr 0x18117a4, size 0x18, virtual false, abstract: false, final false
inline void set_bloomWeight3(float_t  value) ;

/// @brief Method set_bloomWeight4, addr 0x18117c4, size 0x18, virtual false, abstract: false, final false
inline void set_bloomWeight4(float_t  value) ;

/// @brief Method set_bloomWeight5, addr 0x18117e4, size 0x18, virtual false, abstract: false, final false
inline void set_bloomWeight5(float_t  value) ;

/// @brief Method set_blur, addr 0x1812650, size 0x1c, virtual false, abstract: false, final false
inline void set_blur(bool  value) ;

/// @brief Method set_blurIntensity, addr 0x1812674, size 0x18, virtual false, abstract: false, final false
inline void set_blurIntensity(float_t  value) ;

/// @brief Method set_brightness, addr 0x1811028, size 0x20, virtual false, abstract: false, final false
inline void set_brightness(float_t  value) ;

/// @brief Method set_compareLineAngle, addr 0x1810de8, size 0x18, virtual false, abstract: false, final false
inline void set_compareLineAngle(float_t  value) ;

/// @brief Method set_compareLineWidth, addr 0x1810e08, size 0x18, virtual false, abstract: false, final false
inline void set_compareLineWidth(float_t  value) ;

/// @brief Method set_compareMode, addr 0x1810dc4, size 0x1c, virtual false, abstract: false, final false
inline void set_compareMode(bool  value) ;

/// @brief Method set_contrast, addr 0x1811000, size 0x20, virtual false, abstract: false, final false
inline void set_contrast(float_t  value) ;

/// @brief Method set_daltonize, addr 0x1811050, size 0x20, virtual false, abstract: false, final false
inline void set_daltonize(float_t  value) ;

/// @brief Method set_depthOfField, addr 0x18119d4, size 0x1c, virtual false, abstract: false, final false
inline void set_depthOfField(bool  value) ;

/// @brief Method set_depthOfFieldAperture, addr 0x1811dd4, size 0x1c, virtual false, abstract: false, final false
inline void set_depthOfFieldAperture(float_t  value) ;

/// @brief Method set_depthOfFieldAutofocus, addr 0x1811b14, size 0x1c, virtual false, abstract: false, final false
inline void set_depthOfFieldAutofocus(bool  value) ;

/// @brief Method set_depthOfFieldAutofocusLayerMask, addr 0x1811bc0, size 0x54, virtual false, abstract: false, final false
inline void set_depthOfFieldAutofocusLayerMask(::UnityEngine::LayerMask  value) ;

/// @brief Method set_depthOfFieldAutofocusMaxDistance, addr 0x1811ba0, size 0x18, virtual false, abstract: false, final false
inline void set_depthOfFieldAutofocusMaxDistance(float_t  value) ;

/// @brief Method set_depthOfFieldAutofocusMinDistance, addr 0x1811b80, size 0x18, virtual false, abstract: false, final false
inline void set_depthOfFieldAutofocusMinDistance(float_t  value) ;

/// @brief Method set_depthOfFieldBokeh, addr 0x1811e60, size 0x1c, virtual false, abstract: false, final false
inline void set_depthOfFieldBokeh(bool  value) ;

/// @brief Method set_depthOfFieldBokehIntensity, addr 0x1811eac, size 0x20, virtual false, abstract: false, final false
inline void set_depthOfFieldBokehIntensity(float_t  value) ;

/// @brief Method set_depthOfFieldBokehThreshold, addr 0x1811e84, size 0x20, virtual false, abstract: false, final false
inline void set_depthOfFieldBokehThreshold(float_t  value) ;

/// @brief Method set_depthOfFieldDebug, addr 0x1811af0, size 0x1c, virtual false, abstract: false, final false
inline void set_depthOfFieldDebug(bool  value) ;

/// @brief Method set_depthOfFieldDistance, addr 0x1811cfc, size 0x20, virtual false, abstract: false, final false
inline void set_depthOfFieldDistance(float_t  value) ;

/// @brief Method set_depthOfFieldDownsampling, addr 0x1811d5c, size 0x20, virtual false, abstract: false, final false
inline void set_depthOfFieldDownsampling(int32_t  value) ;

/// @brief Method set_depthOfFieldExclusionBias, addr 0x1811cc8, size 0x2c, virtual false, abstract: false, final false
inline void set_depthOfFieldExclusionBias(float_t  value) ;

/// @brief Method set_depthOfFieldExclusionLayerMask, addr 0x1811c1c, size 0x54, virtual false, abstract: false, final false
inline void set_depthOfFieldExclusionLayerMask(::UnityEngine::LayerMask  value) ;

/// @brief Method set_depthOfFieldExclusionLayerMaskDownsampling, addr 0x1811c78, size 0x20, virtual false, abstract: false, final false
inline void set_depthOfFieldExclusionLayerMaskDownsampling(float_t  value) ;

/// @brief Method set_depthOfFieldFilterMode, addr 0x1811f1c, size 0x18, virtual false, abstract: false, final false
inline void set_depthOfFieldFilterMode(::UnityEngine::FilterMode  value) ;

/// @brief Method set_depthOfFieldFocalLength, addr 0x1811db0, size 0x1c, virtual false, abstract: false, final false
inline void set_depthOfFieldFocalLength(float_t  value) ;

/// @brief Method set_depthOfFieldFocusSpeed, addr 0x1811d24, size 0x30, virtual false, abstract: false, final false
inline void set_depthOfFieldFocusSpeed(float_t  value) ;

/// @brief Method set_depthOfFieldForegroundBlur, addr 0x1811df8, size 0x1c, virtual false, abstract: false, final false
inline void set_depthOfFieldForegroundBlur(bool  value) ;

/// @brief Method set_depthOfFieldForegroundBlurHQ, addr 0x1811e1c, size 0x1c, virtual false, abstract: false, final false
inline void set_depthOfFieldForegroundBlurHQ(bool  value) ;

/// @brief Method set_depthOfFieldForegroundDistance, addr 0x1811e40, size 0x18, virtual false, abstract: false, final false
inline void set_depthOfFieldForegroundDistance(float_t  value) ;

/// @brief Method set_depthOfFieldMaxBrightness, addr 0x1811ed4, size 0x1c, virtual false, abstract: false, final false
inline void set_depthOfFieldMaxBrightness(float_t  value) ;

/// @brief Method set_depthOfFieldMaxDistance, addr 0x1811ef8, size 0x1c, virtual false, abstract: false, final false
inline void set_depthOfFieldMaxDistance(float_t  value) ;

/// @brief Method set_depthOfFieldMaxSamples, addr 0x1811d84, size 0x24, virtual false, abstract: false, final false
inline void set_depthOfFieldMaxSamples(int32_t  value) ;

/// @brief Method set_depthOfFieldTargetFocus, addr 0x1811a5c, size 0x8c, virtual false, abstract: false, final false
inline void set_depthOfFieldTargetFocus(::UnityEngine::Transform*  value) ;

/// @brief Method set_depthOfFieldTransparencyLayerMask, addr 0x1811a00, size 0x54, virtual false, abstract: false, final false
inline void set_depthOfFieldTransparencyLayerMask(::UnityEngine::LayerMask  value) ;

/// @brief Method set_depthOfFieldTransparencySupport, addr 0x180ef98, size 0x1c, virtual false, abstract: false, final false
inline void set_depthOfFieldTransparencySupport(bool  value) ;

/// @brief Method set_depthOfFieldTransparencySupportDownsampling, addr 0x1811ca0, size 0x20, virtual false, abstract: false, final false
inline void set_depthOfFieldTransparencySupportDownsampling(float_t  value) ;

/// @brief Method set_depthofFieldAutofocusViewportPoint, addr 0x1811b3c, size 0x3c, virtual false, abstract: false, final false
inline void set_depthofFieldAutofocusViewportPoint(::UnityEngine::Vector2  value) ;

/// @brief Method set_dither, addr 0x1810e28, size 0x20, virtual false, abstract: false, final false
inline void set_dither(float_t  value) ;

/// @brief Method set_ditherDepth, addr 0x1810e50, size 0x20, virtual false, abstract: false, final false
inline void set_ditherDepth(float_t  value) ;

/// @brief Method set_eyeAdaptation, addr 0x1811f3c, size 0x1c, virtual false, abstract: false, final false
inline void set_eyeAdaptation(bool  value) ;

/// @brief Method set_eyeAdaptationMaxExposure, addr 0x1811f94, size 0x30, virtual false, abstract: false, final false
inline void set_eyeAdaptationMaxExposure(float_t  value) ;

/// @brief Method set_eyeAdaptationMinExposure, addr 0x1811f60, size 0x2c, virtual false, abstract: false, final false
inline void set_eyeAdaptationMinExposure(float_t  value) ;

/// @brief Method set_eyeAdaptationSpeedToDark, addr 0x1812000, size 0x2c, virtual false, abstract: false, final false
inline void set_eyeAdaptationSpeedToDark(float_t  value) ;

/// @brief Method set_eyeAdaptationSpeedToLight, addr 0x1811fcc, size 0x2c, virtual false, abstract: false, final false
inline void set_eyeAdaptationSpeedToLight(float_t  value) ;

/// @brief Method set_frame, addr 0x180ed94, size 0x1c, virtual false, abstract: false, final false
inline void set_frame(bool  value) ;

/// @brief Method set_frameColor, addr 0x18111b0, size 0x54, virtual false, abstract: false, final false
inline void set_frameColor(::UnityEngine::Color  value) ;

/// @brief Method set_frameMask, addr 0x181120c, size 0x8c, virtual false, abstract: false, final false
inline void set_frameMask(::UnityEngine::Texture2D*  value) ;

/// @brief Method set_lensDirt, addr 0x180ed5c, size 0x1c, virtual false, abstract: false, final false
inline void set_lensDirt(bool  value) ;

/// @brief Method set_lensDirtIntensity, addr 0x1811468, size 0x18, virtual false, abstract: false, final false
inline void set_lensDirtIntensity(float_t  value) ;

/// @brief Method set_lensDirtTexture, addr 0x1811488, size 0x8c, virtual false, abstract: false, final false
inline void set_lensDirtTexture(::UnityEngine::Texture2D*  value) ;

/// @brief Method set_lensDirtThreshold, addr 0x1811448, size 0x18, virtual false, abstract: false, final false
inline void set_lensDirtThreshold(float_t  value) ;

/// @brief Method set_lut, addr 0x180ec94, size 0x28, virtual false, abstract: false, final false
inline void set_lut(bool  value) ;

/// @brief Method set_lutIntensity, addr 0x18112a8, size 0x18, virtual false, abstract: false, final false
inline void set_lutIntensity(float_t  value) ;

/// @brief Method set_lutTexture, addr 0x18112c8, size 0x8c, virtual false, abstract: false, final false
inline void set_lutTexture(::UnityEngine::Texture2D*  value) ;

/// @brief Method set_nightVision, addr 0x180ecd8, size 0x4c, virtual false, abstract: false, final false
inline void set_nightVision(bool  value) ;

/// @brief Method set_nightVisionColor, addr 0x1811368, size 0x54, virtual false, abstract: false, final false
inline void set_nightVisionColor(::UnityEngine::Color  value) ;

/// @brief Method set_outline, addr 0x180ecbc, size 0x1c, virtual false, abstract: false, final false
inline void set_outline(bool  value) ;

/// @brief Method set_outlineColor, addr 0x18113d4, size 0x5c, virtual false, abstract: false, final false
inline void set_outlineColor(::UnityEngine::Color  value) ;

/// @brief Method set_pixelateAmount, addr 0x1812694, size 0x18, virtual false, abstract: false, final false
inline void set_pixelateAmount(int32_t  value) ;

/// @brief Method set_pixelateDownscale, addr 0x18126b4, size 0x1c, virtual false, abstract: false, final false
inline void set_pixelateDownscale(bool  value) ;

/// @brief Method set_preset, addr 0x180fb4c, size 0x18, virtual false, abstract: false, final false
inline void set_preset(::BeautifyEffect::BEAUTIFY_PRESET  value) ;

/// @brief Method set_profile, addr 0x180fc68, size 0xb8, virtual false, abstract: false, final false
inline void set_profile(::BeautifyEffect::BeautifyProfile*  value) ;

/// @brief Method set_purkinje, addr 0x1812034, size 0x1c, virtual false, abstract: false, final false
inline void set_purkinje(bool  value) ;

/// @brief Method set_purkinjeAmount, addr 0x1812058, size 0x2c, virtual false, abstract: false, final false
inline void set_purkinjeAmount(float_t  value) ;

/// @brief Method set_purkinjeLuminanceThreshold, addr 0x181208c, size 0x2c, virtual false, abstract: false, final false
inline void set_purkinjeLuminanceThreshold(float_t  value) ;

/// @brief Method set_quality, addr 0x180fbe0, size 0x48, virtual false, abstract: false, final false
inline void set_quality(::BeautifyEffect::BEAUTIFY_QUALITY  value) ;

/// @brief Method set_saturate, addr 0x1810fd8, size 0x20, virtual false, abstract: false, final false
inline void set_saturate(float_t  value) ;

/// @brief Method set_sharpen, addr 0x1810eb8, size 0x20, virtual false, abstract: false, final false
inline void set_sharpen(float_t  value) ;

/// @brief Method set_sharpenClamp, addr 0x1810f90, size 0x20, virtual false, abstract: false, final false
inline void set_sharpenClamp(float_t  value) ;

/// @brief Method set_sharpenDepthThreshold, addr 0x1810ee0, size 0x20, virtual false, abstract: false, final false
inline void set_sharpenDepthThreshold(float_t  value) ;

/// @brief Method set_sharpenMaxDepth, addr 0x1810e98, size 0x18, virtual false, abstract: false, final false
inline void set_sharpenMaxDepth(float_t  value) ;

/// @brief Method set_sharpenMinDepth, addr 0x1810e78, size 0x18, virtual false, abstract: false, final false
inline void set_sharpenMinDepth(float_t  value) ;

/// @brief Method set_sharpenMotionSensibility, addr 0x1810fb8, size 0x18, virtual false, abstract: false, final false
inline void set_sharpenMotionSensibility(float_t  value) ;

/// @brief Method set_sharpenRelaxation, addr 0x1810f68, size 0x20, virtual false, abstract: false, final false
inline void set_sharpenRelaxation(float_t  value) ;

/// @brief Method set_sun, addr 0x18120fc, size 0x8c, virtual false, abstract: false, final false
inline void set_sun(::UnityEngine::Transform*  value) ;

/// @brief Method set_sunFlares, addr 0x180edb0, size 0x1c, virtual false, abstract: false, final false
inline void set_sunFlares(bool  value) ;

/// @brief Method set_sunFlaresCoronaRays1AngleOffset, addr 0x18123ac, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresCoronaRays1AngleOffset(float_t  value) ;

/// @brief Method set_sunFlaresCoronaRays1Length, addr 0x181234c, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresCoronaRays1Length(float_t  value) ;

/// @brief Method set_sunFlaresCoronaRays1Spread, addr 0x181238c, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresCoronaRays1Spread(float_t  value) ;

/// @brief Method set_sunFlaresCoronaRays1Streaks, addr 0x181236c, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresCoronaRays1Streaks(int32_t  value) ;

/// @brief Method set_sunFlaresCoronaRays2AngleOffset, addr 0x181242c, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresCoronaRays2AngleOffset(float_t  value) ;

/// @brief Method set_sunFlaresCoronaRays2Length, addr 0x18123cc, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresCoronaRays2Length(float_t  value) ;

/// @brief Method set_sunFlaresCoronaRays2Spread, addr 0x181240c, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresCoronaRays2Spread(float_t  value) ;

/// @brief Method set_sunFlaresCoronaRays2Streaks, addr 0x18123ec, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresCoronaRays2Streaks(int32_t  value) ;

/// @brief Method set_sunFlaresDownsampling, addr 0x18122a4, size 0x20, virtual false, abstract: false, final false
inline void set_sunFlaresDownsampling(int32_t  value) ;

/// @brief Method set_sunFlaresGhosts1Brightness, addr 0x181248c, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresGhosts1Brightness(float_t  value) ;

/// @brief Method set_sunFlaresGhosts1Offset, addr 0x181246c, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresGhosts1Offset(float_t  value) ;

/// @brief Method set_sunFlaresGhosts1Size, addr 0x181244c, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresGhosts1Size(float_t  value) ;

/// @brief Method set_sunFlaresGhosts2Brightness, addr 0x18124ec, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresGhosts2Brightness(float_t  value) ;

/// @brief Method set_sunFlaresGhosts2Offset, addr 0x18124cc, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresGhosts2Offset(float_t  value) ;

/// @brief Method set_sunFlaresGhosts2Size, addr 0x18124ac, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresGhosts2Size(float_t  value) ;

/// @brief Method set_sunFlaresGhosts3Brightness, addr 0x181252c, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresGhosts3Brightness(float_t  value) ;

/// @brief Method set_sunFlaresGhosts3Offset, addr 0x181254c, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresGhosts3Offset(float_t  value) ;

/// @brief Method set_sunFlaresGhosts3Size, addr 0x181250c, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresGhosts3Size(float_t  value) ;

/// @brief Method set_sunFlaresGhosts4Brightness, addr 0x18125ac, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresGhosts4Brightness(float_t  value) ;

/// @brief Method set_sunFlaresGhosts4Offset, addr 0x181258c, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresGhosts4Offset(float_t  value) ;

/// @brief Method set_sunFlaresGhosts4Size, addr 0x181256c, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresGhosts4Size(float_t  value) ;

/// @brief Method set_sunFlaresHaloAmplitude, addr 0x18125ec, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresHaloAmplitude(float_t  value) ;

/// @brief Method set_sunFlaresHaloIntensity, addr 0x181260c, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresHaloIntensity(float_t  value) ;

/// @brief Method set_sunFlaresHaloOffset, addr 0x18125cc, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresHaloOffset(float_t  value) ;

/// @brief Method set_sunFlaresIntensity, addr 0x18121ec, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresIntensity(float_t  value) ;

/// @brief Method set_sunFlaresLayerMask, addr 0x1812190, size 0x54, virtual false, abstract: false, final false
inline void set_sunFlaresLayerMask(::UnityEngine::LayerMask  value) ;

/// @brief Method set_sunFlaresRotationDeadZone, addr 0x181262c, size 0x1c, virtual false, abstract: false, final false
inline void set_sunFlaresRotationDeadZone(bool  value) ;

/// @brief Method set_sunFlaresSolarWindSpeed, addr 0x181220c, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresSolarWindSpeed(float_t  value) ;

/// @brief Method set_sunFlaresSunDiskSize, addr 0x18122ec, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresSunDiskSize(float_t  value) ;

/// @brief Method set_sunFlaresSunIntensity, addr 0x18122cc, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresSunIntensity(float_t  value) ;

/// @brief Method set_sunFlaresSunRayDiffractionIntensity, addr 0x181230c, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresSunRayDiffractionIntensity(float_t  value) ;

/// @brief Method set_sunFlaresSunRayDiffractionThreshold, addr 0x181232c, size 0x18, virtual false, abstract: false, final false
inline void set_sunFlaresSunRayDiffractionThreshold(float_t  value) ;

/// @brief Method set_sunFlaresTint, addr 0x1812238, size 0x64, virtual false, abstract: false, final false
inline void set_sunFlaresTint(::UnityEngine::Color  value) ;

/// @brief Method set_thermalVision, addr 0x180ee3c, size 0x4c, virtual false, abstract: false, final false
inline void set_thermalVision(bool  value) ;

/// @brief Method set_tintColor, addr 0x1810f0c, size 0x54, virtual false, abstract: false, final false
inline void set_tintColor(::UnityEngine::Color  value) ;

/// @brief Method set_tonemap, addr 0x18120c0, size 0x2c, virtual false, abstract: false, final false
inline void set_tonemap(::BeautifyEffect::BEAUTIFY_TMO  value) ;

/// @brief Method set_vignetting, addr 0x180ed78, size 0x1c, virtual false, abstract: false, final false
inline void set_vignetting(bool  value) ;

/// @brief Method set_vignettingAspectRatio, addr 0x18110d0, size 0x18, virtual false, abstract: false, final false
inline void set_vignettingAspectRatio(float_t  value) ;

/// @brief Method set_vignettingBlink, addr 0x18110f0, size 0x18, virtual false, abstract: false, final false
inline void set_vignettingBlink(float_t  value) ;

/// @brief Method set_vignettingCircularShape, addr 0x18110ac, size 0x1c, virtual false, abstract: false, final false
inline void set_vignettingCircularShape(bool  value) ;

/// @brief Method set_vignettingColor, addr 0x180edcc, size 0x54, virtual false, abstract: false, final false
inline void set_vignettingColor(::UnityEngine::Color  value) ;

/// @brief Method set_vignettingFade, addr 0x181108c, size 0x18, virtual false, abstract: false, final false
inline void set_vignettingFade(float_t  value) ;

/// @brief Method set_vignettingMask, addr 0x1811110, size 0x8c, virtual false, abstract: false, final false
inline void set_vignettingMask(::UnityEngine::Texture2D*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Beautify() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Beautify", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Beautify(Beautify && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Beautify", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Beautify(Beautify const& ) = delete;

/// @brief Field BEAUTIFY_BUILD_HINT offset 0xffffffff size 0x8
static constexpr ::ConstString  BEAUTIFY_BUILD_HINT{u"BeautifyBuildHint702b2"};

/// @brief Field SKW_BLOOM offset 0xffffffff size 0x8
static constexpr ::ConstString  SKW_BLOOM{u"BEAUTIFY_BLOOM"};

/// @brief Field SKW_BLOOM_USE_DEPTH offset 0xffffffff size 0x8
static constexpr ::ConstString  SKW_BLOOM_USE_DEPTH{u"BEAUTIFY_BLOOM_USE_DEPTH"};

/// @brief Field SKW_BLOOM_USE_LAYER offset 0xffffffff size 0x8
static constexpr ::ConstString  SKW_BLOOM_USE_LAYER{u"BEAUTIFY_BLOOM_USE_LAYER"};

/// @brief Field SKW_DALTONIZE offset 0xffffffff size 0x8
static constexpr ::ConstString  SKW_DALTONIZE{u"BEAUTIFY_DALTONIZE"};

/// @brief Field SKW_DEPTH_OF_FIELD offset 0xffffffff size 0x8
static constexpr ::ConstString  SKW_DEPTH_OF_FIELD{u"BEAUTIFY_DEPTH_OF_FIELD"};

/// @brief Field SKW_DEPTH_OF_FIELD_TRANSPARENT offset 0xffffffff size 0x8
static constexpr ::ConstString  SKW_DEPTH_OF_FIELD_TRANSPARENT{u"BEAUTIFY_DEPTH_OF_FIELD_TRANSPARENT"};

/// @brief Field SKW_DIRT offset 0xffffffff size 0x8
static constexpr ::ConstString  SKW_DIRT{u"BEAUTIFY_DIRT"};

/// @brief Field SKW_EYE_ADAPTATION offset 0xffffffff size 0x8
static constexpr ::ConstString  SKW_EYE_ADAPTATION{u"BEAUTIFY_EYE_ADAPTATION"};

/// @brief Field SKW_FRAME offset 0xffffffff size 0x8
static constexpr ::ConstString  SKW_FRAME{u"BEAUTIFY_FRAME"};

/// @brief Field SKW_FRAME_MASK offset 0xffffffff size 0x8
static constexpr ::ConstString  SKW_FRAME_MASK{u"BEAUTIFY_FRAME_MASK"};

/// @brief Field SKW_LUT offset 0xffffffff size 0x8
static constexpr ::ConstString  SKW_LUT{u"BEAUTIFY_LUT"};

/// @brief Field SKW_NIGHT_VISION offset 0xffffffff size 0x8
static constexpr ::ConstString  SKW_NIGHT_VISION{u"BEAUTIFY_NIGHT_VISION"};

/// @brief Field SKW_OUTLINE offset 0xffffffff size 0x8
static constexpr ::ConstString  SKW_OUTLINE{u"BEAUTIFY_OUTLINE"};

/// @brief Field SKW_PURKINJE offset 0xffffffff size 0x8
static constexpr ::ConstString  SKW_PURKINJE{u"BEAUTIFY_PURKINJE"};

/// @brief Field SKW_THERMAL_VISION offset 0xffffffff size 0x8
static constexpr ::ConstString  SKW_THERMAL_VISION{u"BEAUTIFY_THERMAL_VISION"};

/// @brief Field SKW_TONEMAP_ACES offset 0xffffffff size 0x8
static constexpr ::ConstString  SKW_TONEMAP_ACES{u"BEAUTIFY_TONEMAP_ACES"};

/// @brief Field SKW_VIGNETTING offset 0xffffffff size 0x8
static constexpr ::ConstString  SKW_VIGNETTING{u"BEAUTIFY_VIGNETTING"};

/// @brief Field SKW_VIGNETTING_MASK offset 0xffffffff size 0x8
static constexpr ::ConstString  SKW_VIGNETTING_MASK{u"BEAUTIFY_VIGNETTING_MASK"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1843};

/// @brief Field _preset, offset: 0x20, size: 0x4, def value: None
 ::BeautifyEffect::BEAUTIFY_PRESET  ____preset;

/// @brief Field _quality, offset: 0x24, size: 0x4, def value: None
 ::BeautifyEffect::BEAUTIFY_QUALITY  ____quality;

/// @brief Field _profile, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::BeautifyEffect::BeautifyProfile>  ____profile;

/// @brief Field _compareMode, offset: 0x30, size: 0x1, def value: None
 bool  ____compareMode;

/// @brief Field _compareLineAngle, offset: 0x34, size: 0x4, def value: None
 float_t  ____compareLineAngle;

/// @brief Field _compareLineWidth, offset: 0x38, size: 0x4, def value: None
 float_t  ____compareLineWidth;

/// @brief Field _dither, offset: 0x3c, size: 0x4, def value: None
 float_t  ____dither;

/// @brief Field _ditherDepth, offset: 0x40, size: 0x4, def value: None
 float_t  ____ditherDepth;

/// @brief Field _sharpenMinDepth, offset: 0x44, size: 0x4, def value: None
 float_t  ____sharpenMinDepth;

/// @brief Field _sharpenMaxDepth, offset: 0x48, size: 0x4, def value: None
 float_t  ____sharpenMaxDepth;

/// @brief Field _sharpen, offset: 0x4c, size: 0x4, def value: None
 float_t  ____sharpen;

/// @brief Field _sharpenDepthThreshold, offset: 0x50, size: 0x4, def value: None
 float_t  ____sharpenDepthThreshold;

/// @brief Field _tintColor, offset: 0x54, size: 0x10, def value: None
 ::UnityEngine::Color  ____tintColor;

/// @brief Field _sharpenRelaxation, offset: 0x64, size: 0x4, def value: None
 float_t  ____sharpenRelaxation;

/// @brief Field _sharpenClamp, offset: 0x68, size: 0x4, def value: None
 float_t  ____sharpenClamp;

/// @brief Field _sharpenMotionSensibility, offset: 0x6c, size: 0x4, def value: None
 float_t  ____sharpenMotionSensibility;

/// @brief Field _saturate, offset: 0x70, size: 0x4, def value: None
 float_t  ____saturate;

/// @brief Field _contrast, offset: 0x74, size: 0x4, def value: None
 float_t  ____contrast;

/// @brief Field _brightness, offset: 0x78, size: 0x4, def value: None
 float_t  ____brightness;

/// @brief Field _daltonize, offset: 0x7c, size: 0x4, def value: None
 float_t  ____daltonize;

/// @brief Field _vignetting, offset: 0x80, size: 0x1, def value: None
 bool  ____vignetting;

/// @brief Field _vignettingColor, offset: 0x84, size: 0x10, def value: None
 ::UnityEngine::Color  ____vignettingColor;

/// @brief Field _vignettingFade, offset: 0x94, size: 0x4, def value: None
 float_t  ____vignettingFade;

/// @brief Field _vignettingCircularShape, offset: 0x98, size: 0x1, def value: None
 bool  ____vignettingCircularShape;

/// @brief Field _vignettingAspectRatio, offset: 0x9c, size: 0x4, def value: None
 float_t  ____vignettingAspectRatio;

/// @brief Field _vignettingBlink, offset: 0xa0, size: 0x4, def value: None
 float_t  ____vignettingBlink;

/// @brief Field _vignettingMask, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____vignettingMask;

/// @brief Field _frame, offset: 0xb0, size: 0x1, def value: None
 bool  ____frame;

/// @brief Field _frameColor, offset: 0xb4, size: 0x10, def value: None
 ::UnityEngine::Color  ____frameColor;

/// @brief Field _frameMask, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____frameMask;

/// @brief Field _lut, offset: 0xd0, size: 0x1, def value: None
 bool  ____lut;

/// @brief Field _lutIntensity, offset: 0xd4, size: 0x4, def value: None
 float_t  ____lutIntensity;

/// @brief Field _lutTexture, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____lutTexture;

/// @brief Field _nightVision, offset: 0xe0, size: 0x1, def value: None
 bool  ____nightVision;

/// @brief Field _nightVisionColor, offset: 0xe4, size: 0x10, def value: None
 ::UnityEngine::Color  ____nightVisionColor;

/// @brief Field _outline, offset: 0xf4, size: 0x1, def value: None
 bool  ____outline;

/// @brief Field _outlineColor, offset: 0xf8, size: 0x10, def value: None
 ::UnityEngine::Color  ____outlineColor;

/// @brief Field _thermalVision, offset: 0x108, size: 0x1, def value: None
 bool  ____thermalVision;

/// @brief Field _lensDirt, offset: 0x109, size: 0x1, def value: None
 bool  ____lensDirt;

/// @brief Field _lensDirtThreshold, offset: 0x10c, size: 0x4, def value: None
 float_t  ____lensDirtThreshold;

/// @brief Field _lensDirtIntensity, offset: 0x110, size: 0x4, def value: None
 float_t  ____lensDirtIntensity;

/// @brief Field _lensDirtTexture, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____lensDirtTexture;

/// @brief Field _bloom, offset: 0x120, size: 0x1, def value: None
 bool  ____bloom;

/// @brief Field _bloomCullingMask, offset: 0x124, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____bloomCullingMask;

/// @brief Field _bloomLayerMaskDownsampling, offset: 0x128, size: 0x4, def value: None
 float_t  ____bloomLayerMaskDownsampling;

/// @brief Field _bloomIntensity, offset: 0x12c, size: 0x4, def value: None
 float_t  ____bloomIntensity;

/// @brief Field _bloomMaxBrightness, offset: 0x130, size: 0x4, def value: None
 float_t  ____bloomMaxBrightness;

/// @brief Field _bloomBoost0, offset: 0x134, size: 0x4, def value: None
 float_t  ____bloomBoost0;

/// @brief Field _bloomBoost1, offset: 0x138, size: 0x4, def value: None
 float_t  ____bloomBoost1;

/// @brief Field _bloomBoost2, offset: 0x13c, size: 0x4, def value: None
 float_t  ____bloomBoost2;

/// @brief Field _bloomBoost3, offset: 0x140, size: 0x4, def value: None
 float_t  ____bloomBoost3;

/// @brief Field _bloomBoost4, offset: 0x144, size: 0x4, def value: None
 float_t  ____bloomBoost4;

/// @brief Field _bloomBoost5, offset: 0x148, size: 0x4, def value: None
 float_t  ____bloomBoost5;

/// @brief Field _bloomAntiflicker, offset: 0x14c, size: 0x1, def value: None
 bool  ____bloomAntiflicker;

/// @brief Field _bloomUltra, offset: 0x14d, size: 0x1, def value: None
 bool  ____bloomUltra;

/// @brief Field _bloomThreshold, offset: 0x150, size: 0x4, def value: None
 float_t  ____bloomThreshold;

/// @brief Field _bloomCustomize, offset: 0x154, size: 0x1, def value: None
 bool  ____bloomCustomize;

/// @brief Field _bloomDebug, offset: 0x155, size: 0x1, def value: None
 bool  ____bloomDebug;

/// @brief Field _bloomWeight0, offset: 0x158, size: 0x4, def value: None
 float_t  ____bloomWeight0;

/// @brief Field _bloomWeight1, offset: 0x15c, size: 0x4, def value: None
 float_t  ____bloomWeight1;

/// @brief Field _bloomWeight2, offset: 0x160, size: 0x4, def value: None
 float_t  ____bloomWeight2;

/// @brief Field _bloomWeight3, offset: 0x164, size: 0x4, def value: None
 float_t  ____bloomWeight3;

/// @brief Field _bloomWeight4, offset: 0x168, size: 0x4, def value: None
 float_t  ____bloomWeight4;

/// @brief Field _bloomWeight5, offset: 0x16c, size: 0x4, def value: None
 float_t  ____bloomWeight5;

/// @brief Field _bloomBlur, offset: 0x170, size: 0x1, def value: None
 bool  ____bloomBlur;

/// @brief Field _bloomDepthAtten, offset: 0x174, size: 0x4, def value: None
 float_t  ____bloomDepthAtten;

/// @brief Field _bloomLayerZBias, offset: 0x178, size: 0x4, def value: None
 float_t  ____bloomLayerZBias;

/// @brief Field _anamorphicFlares, offset: 0x17c, size: 0x1, def value: None
 bool  ____anamorphicFlares;

/// @brief Field _anamorphicFlaresIntensity, offset: 0x180, size: 0x4, def value: None
 float_t  ____anamorphicFlaresIntensity;

/// @brief Field _anamorphicFlaresAntiflicker, offset: 0x184, size: 0x1, def value: None
 bool  ____anamorphicFlaresAntiflicker;

/// @brief Field _anamorphicFlaresUltra, offset: 0x185, size: 0x1, def value: None
 bool  ____anamorphicFlaresUltra;

/// @brief Field _anamorphicFlaresThreshold, offset: 0x188, size: 0x4, def value: None
 float_t  ____anamorphicFlaresThreshold;

/// @brief Field _anamorphicFlaresSpread, offset: 0x18c, size: 0x4, def value: None
 float_t  ____anamorphicFlaresSpread;

/// @brief Field _anamorphicFlaresVertical, offset: 0x190, size: 0x1, def value: None
 bool  ____anamorphicFlaresVertical;

/// @brief Field _anamorphicFlaresTint, offset: 0x194, size: 0x10, def value: None
 ::UnityEngine::Color  ____anamorphicFlaresTint;

/// @brief Field _anamorphicFlaresBlur, offset: 0x1a4, size: 0x1, def value: None
 bool  ____anamorphicFlaresBlur;

/// @brief Field _depthOfField, offset: 0x1a5, size: 0x1, def value: None
 bool  ____depthOfField;

/// @brief Field _depthOfFieldTransparencySupport, offset: 0x1a6, size: 0x1, def value: None
 bool  ____depthOfFieldTransparencySupport;

/// @brief Field _depthOfFieldTransparencyLayerMask, offset: 0x1a8, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____depthOfFieldTransparencyLayerMask;

/// @brief Field _depthOfFieldTargetFocus, offset: 0x1b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____depthOfFieldTargetFocus;

/// @brief Field _depthOfFieldDebug, offset: 0x1b8, size: 0x1, def value: None
 bool  ____depthOfFieldDebug;

/// @brief Field _depthOfFieldAutofocus, offset: 0x1b9, size: 0x1, def value: None
 bool  ____depthOfFieldAutofocus;

/// @brief Field _depthofFieldAutofocusViewportPoint, offset: 0x1bc, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____depthofFieldAutofocusViewportPoint;

/// @brief Field _depthOfFieldAutofocusMinDistance, offset: 0x1c4, size: 0x4, def value: None
 float_t  ____depthOfFieldAutofocusMinDistance;

/// @brief Field _depthOfFieldAutofocusMaxDistance, offset: 0x1c8, size: 0x4, def value: None
 float_t  ____depthOfFieldAutofocusMaxDistance;

/// @brief Field _depthOfFieldAutofocusLayerMask, offset: 0x1cc, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____depthOfFieldAutofocusLayerMask;

/// @brief Field _depthOfFieldExclusionLayerMask, offset: 0x1d0, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____depthOfFieldExclusionLayerMask;

/// @brief Field _depthOfFieldExclusionLayerMaskDownsampling, offset: 0x1d4, size: 0x4, def value: None
 float_t  ____depthOfFieldExclusionLayerMaskDownsampling;

/// @brief Field _depthOfFieldTransparencySupportDownsampling, offset: 0x1d8, size: 0x4, def value: None
 float_t  ____depthOfFieldTransparencySupportDownsampling;

/// @brief Field _depthOfFieldExclusionBias, offset: 0x1dc, size: 0x4, def value: None
 float_t  ____depthOfFieldExclusionBias;

/// @brief Field _depthOfFieldDistance, offset: 0x1e0, size: 0x4, def value: None
 float_t  ____depthOfFieldDistance;

/// @brief Field _depthOfFieldFocusSpeed, offset: 0x1e4, size: 0x4, def value: None
 float_t  ____depthOfFieldFocusSpeed;

/// @brief Field _depthOfFieldDownsampling, offset: 0x1e8, size: 0x4, def value: None
 int32_t  ____depthOfFieldDownsampling;

/// @brief Field _depthOfFieldMaxSamples, offset: 0x1ec, size: 0x4, def value: None
 int32_t  ____depthOfFieldMaxSamples;

/// @brief Field _depthOfFieldFocalLength, offset: 0x1f0, size: 0x4, def value: None
 float_t  ____depthOfFieldFocalLength;

/// @brief Field _depthOfFieldAperture, offset: 0x1f4, size: 0x4, def value: None
 float_t  ____depthOfFieldAperture;

/// @brief Field _depthOfFieldForegroundBlur, offset: 0x1f8, size: 0x1, def value: None
 bool  ____depthOfFieldForegroundBlur;

/// @brief Field _depthOfFieldForegroundBlurHQ, offset: 0x1f9, size: 0x1, def value: None
 bool  ____depthOfFieldForegroundBlurHQ;

/// @brief Field _depthOfFieldForegroundDistance, offset: 0x1fc, size: 0x4, def value: None
 float_t  ____depthOfFieldForegroundDistance;

/// @brief Field _depthOfFieldBokeh, offset: 0x200, size: 0x1, def value: None
 bool  ____depthOfFieldBokeh;

/// @brief Field _depthOfFieldBokehThreshold, offset: 0x204, size: 0x4, def value: None
 float_t  ____depthOfFieldBokehThreshold;

/// @brief Field _depthOfFieldBokehIntensity, offset: 0x208, size: 0x4, def value: None
 float_t  ____depthOfFieldBokehIntensity;

/// @brief Field _depthOfFieldMaxBrightness, offset: 0x20c, size: 0x4, def value: None
 float_t  ____depthOfFieldMaxBrightness;

/// @brief Field _depthOfFieldMaxDistance, offset: 0x210, size: 0x4, def value: None
 float_t  ____depthOfFieldMaxDistance;

/// @brief Field _depthOfFieldFilterMode, offset: 0x214, size: 0x4, def value: None
 ::UnityEngine::FilterMode  ____depthOfFieldFilterMode;

/// @brief Field OnBeforeFocus, offset: 0x218, size: 0x8, def value: None
 ::BeautifyEffect::OnBeforeFocusEvent*  ___OnBeforeFocus;

/// @brief Field _eyeAdaptation, offset: 0x220, size: 0x1, def value: None
 bool  ____eyeAdaptation;

/// @brief Field _eyeAdaptationMinExposure, offset: 0x224, size: 0x4, def value: None
 float_t  ____eyeAdaptationMinExposure;

/// @brief Field _eyeAdaptationMaxExposure, offset: 0x228, size: 0x4, def value: None
 float_t  ____eyeAdaptationMaxExposure;

/// @brief Field _eyeAdaptationSpeedToLight, offset: 0x22c, size: 0x4, def value: None
 float_t  ____eyeAdaptationSpeedToLight;

/// @brief Field _eyeAdaptationSpeedToDark, offset: 0x230, size: 0x4, def value: None
 float_t  ____eyeAdaptationSpeedToDark;

/// @brief Field _purkinje, offset: 0x234, size: 0x1, def value: None
 bool  ____purkinje;

/// @brief Field _purkinjeAmount, offset: 0x238, size: 0x4, def value: None
 float_t  ____purkinjeAmount;

/// @brief Field _purkinjeLuminanceThreshold, offset: 0x23c, size: 0x4, def value: None
 float_t  ____purkinjeLuminanceThreshold;

/// @brief Field _tonemap, offset: 0x240, size: 0x4, def value: None
 ::BeautifyEffect::BEAUTIFY_TMO  ____tonemap;

/// @brief Field _sunFlares, offset: 0x244, size: 0x1, def value: None
 bool  ____sunFlares;

/// @brief Field _sun, offset: 0x248, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____sun;

/// @brief Field _sunFlaresLayerMask, offset: 0x250, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____sunFlaresLayerMask;

/// @brief Field _sunFlaresIntensity, offset: 0x254, size: 0x4, def value: None
 float_t  ____sunFlaresIntensity;

/// @brief Field _sunFlaresSolarWindSpeed, offset: 0x258, size: 0x4, def value: None
 float_t  ____sunFlaresSolarWindSpeed;

/// @brief Field _sunFlaresTint, offset: 0x25c, size: 0x10, def value: None
 ::UnityEngine::Color  ____sunFlaresTint;

/// @brief Field _sunFlaresDownsampling, offset: 0x26c, size: 0x4, def value: None
 int32_t  ____sunFlaresDownsampling;

/// @brief Field _sunFlaresSunIntensity, offset: 0x270, size: 0x4, def value: None
 float_t  ____sunFlaresSunIntensity;

/// @brief Field _sunFlaresSunDiskSize, offset: 0x274, size: 0x4, def value: None
 float_t  ____sunFlaresSunDiskSize;

/// @brief Field _sunFlaresSunRayDiffractionIntensity, offset: 0x278, size: 0x4, def value: None
 float_t  ____sunFlaresSunRayDiffractionIntensity;

/// @brief Field _sunFlaresSunRayDiffractionThreshold, offset: 0x27c, size: 0x4, def value: None
 float_t  ____sunFlaresSunRayDiffractionThreshold;

/// @brief Field _sunFlaresCoronaRays1Length, offset: 0x280, size: 0x4, def value: None
 float_t  ____sunFlaresCoronaRays1Length;

/// @brief Field _sunFlaresCoronaRays1Streaks, offset: 0x284, size: 0x4, def value: None
 int32_t  ____sunFlaresCoronaRays1Streaks;

/// @brief Field _sunFlaresCoronaRays1Spread, offset: 0x288, size: 0x4, def value: None
 float_t  ____sunFlaresCoronaRays1Spread;

/// @brief Field _sunFlaresCoronaRays1AngleOffset, offset: 0x28c, size: 0x4, def value: None
 float_t  ____sunFlaresCoronaRays1AngleOffset;

/// @brief Field _sunFlaresCoronaRays2Length, offset: 0x290, size: 0x4, def value: None
 float_t  ____sunFlaresCoronaRays2Length;

/// @brief Field _sunFlaresCoronaRays2Streaks, offset: 0x294, size: 0x4, def value: None
 int32_t  ____sunFlaresCoronaRays2Streaks;

/// @brief Field _sunFlaresCoronaRays2Spread, offset: 0x298, size: 0x4, def value: None
 float_t  ____sunFlaresCoronaRays2Spread;

/// @brief Field _sunFlaresCoronaRays2AngleOffset, offset: 0x29c, size: 0x4, def value: None
 float_t  ____sunFlaresCoronaRays2AngleOffset;

/// @brief Field _sunFlaresGhosts1Size, offset: 0x2a0, size: 0x4, def value: None
 float_t  ____sunFlaresGhosts1Size;

/// @brief Field _sunFlaresGhosts1Offset, offset: 0x2a4, size: 0x4, def value: None
 float_t  ____sunFlaresGhosts1Offset;

/// @brief Field _sunFlaresGhosts1Brightness, offset: 0x2a8, size: 0x4, def value: None
 float_t  ____sunFlaresGhosts1Brightness;

/// @brief Field _sunFlaresGhosts2Size, offset: 0x2ac, size: 0x4, def value: None
 float_t  ____sunFlaresGhosts2Size;

/// @brief Field _sunFlaresGhosts2Offset, offset: 0x2b0, size: 0x4, def value: None
 float_t  ____sunFlaresGhosts2Offset;

/// @brief Field _sunFlaresGhosts2Brightness, offset: 0x2b4, size: 0x4, def value: None
 float_t  ____sunFlaresGhosts2Brightness;

/// @brief Field _sunFlaresGhosts3Size, offset: 0x2b8, size: 0x4, def value: None
 float_t  ____sunFlaresGhosts3Size;

/// @brief Field _sunFlaresGhosts3Brightness, offset: 0x2bc, size: 0x4, def value: None
 float_t  ____sunFlaresGhosts3Brightness;

/// @brief Field _sunFlaresGhosts3Offset, offset: 0x2c0, size: 0x4, def value: None
 float_t  ____sunFlaresGhosts3Offset;

/// @brief Field _sunFlaresGhosts4Size, offset: 0x2c4, size: 0x4, def value: None
 float_t  ____sunFlaresGhosts4Size;

/// @brief Field _sunFlaresGhosts4Offset, offset: 0x2c8, size: 0x4, def value: None
 float_t  ____sunFlaresGhosts4Offset;

/// @brief Field _sunFlaresGhosts4Brightness, offset: 0x2cc, size: 0x4, def value: None
 float_t  ____sunFlaresGhosts4Brightness;

/// @brief Field _sunFlaresHaloOffset, offset: 0x2d0, size: 0x4, def value: None
 float_t  ____sunFlaresHaloOffset;

/// @brief Field _sunFlaresHaloAmplitude, offset: 0x2d4, size: 0x4, def value: None
 float_t  ____sunFlaresHaloAmplitude;

/// @brief Field _sunFlaresHaloIntensity, offset: 0x2d8, size: 0x4, def value: None
 float_t  ____sunFlaresHaloIntensity;

/// @brief Field _sunFlaresRotationDeadZone, offset: 0x2dc, size: 0x1, def value: None
 bool  ____sunFlaresRotationDeadZone;

/// @brief Field _blur, offset: 0x2dd, size: 0x1, def value: None
 bool  ____blur;

/// @brief Field _blurIntensity, offset: 0x2e0, size: 0x4, def value: None
 float_t  ____blurIntensity;

/// @brief Field _pixelateAmount, offset: 0x2e4, size: 0x4, def value: None
 int32_t  ____pixelateAmount;

/// @brief Field _pixelateDownscale, offset: 0x2e8, size: 0x1, def value: None
 bool  ____pixelateDownscale;

/// @brief Field _antialiasStrength, offset: 0x2ec, size: 0x4, def value: None
 float_t  ____antialiasStrength;

/// @brief Field _antialiasDepthThreshold, offset: 0x2f0, size: 0x4, def value: None
 float_t  ____antialiasDepthThreshold;

/// @brief Field isDirty, offset: 0x2f4, size: 0x1, def value: None
 bool  ___isDirty;

/// @brief Field bMatDesktop, offset: 0x2f8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___bMatDesktop;

/// @brief Field bMatMobile, offset: 0x300, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___bMatMobile;

/// @brief Field bMatBasic, offset: 0x308, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___bMatBasic;

/// @brief Field bMat, offset: 0x310, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___bMat;

/// @brief Field currentCamera, offset: 0x318, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___currentCamera;

/// @brief Field camPrevForward, offset: 0x320, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___camPrevForward;

/// @brief Field camPrevPos, offset: 0x32c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___camPrevPos;

/// @brief Field currSens, offset: 0x338, size: 0x4, def value: None
 float_t  ___currSens;

/// @brief Field renderPass, offset: 0x33c, size: 0x4, def value: None
 int32_t  ___renderPass;

/// @brief Field rtFormat, offset: 0x340, size: 0x4, def value: None
 ::UnityEngine::RenderTextureFormat  ___rtFormat;

/// @brief Field rt, offset: 0x348, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::RenderTexture>,::Array<::UnityW<::UnityEngine::RenderTexture>>*>  ___rt;

/// @brief Field rtAF, offset: 0x350, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::RenderTexture>,::Array<::UnityW<::UnityEngine::RenderTexture>>*>  ___rtAF;

/// @brief Field rtEA, offset: 0x358, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::RenderTexture>,::Array<::UnityW<::UnityEngine::RenderTexture>>*>  ___rtEA;

/// @brief Field rtEAacum, offset: 0x360, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___rtEAacum;

/// @brief Field rtEAHist, offset: 0x368, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___rtEAHist;

/// @brief Field dofPrevDistance, offset: 0x370, size: 0x4, def value: None
 float_t  ___dofPrevDistance;

/// @brief Field dofLastAutofocusDistance, offset: 0x374, size: 0x4, def value: None
 float_t  ___dofLastAutofocusDistance;

/// @brief Field dofLastBokehData, offset: 0x378, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___dofLastBokehData;

/// @brief Field sceneCamera, offset: 0x388, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___sceneCamera;

/// @brief Field depthCam, offset: 0x390, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___depthCam;

/// @brief Field depthCamObj, offset: 0x398, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___depthCamObj;

/// @brief Field shaderKeywords, offset: 0x3a0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___shaderKeywords;

/// @brief Field depthShader, offset: 0x3a8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___depthShader;

/// @brief Field dofExclusionShader, offset: 0x3b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___dofExclusionShader;

/// @brief Field shouldUpdateMaterialProperties, offset: 0x3b8, size: 0x1, def value: None
 bool  ___shouldUpdateMaterialProperties;

/// @brief Field sunFlareCurrentIntensity, offset: 0x3bc, size: 0x4, def value: None
 float_t  ___sunFlareCurrentIntensity;

/// @brief Field sunLastScrPos, offset: 0x3c0, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___sunLastScrPos;

/// @brief Field sunLastRot, offset: 0x3d0, size: 0x4, def value: None
 float_t  ___sunLastRot;

/// @brief Field flareNoise, offset: 0x3d8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___flareNoise;

/// @brief Field dofDepthTexture, offset: 0x3e0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___dofDepthTexture;

/// @brief Field dofExclusionTexture, offset: 0x3e8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___dofExclusionTexture;

/// @brief Field bloomSourceTexture, offset: 0x3f0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___bloomSourceTexture;

/// @brief Field bloomSourceDepthTexture, offset: 0x3f8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___bloomSourceDepthTexture;

/// @brief Field pixelateTexture, offset: 0x400, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___pixelateTexture;

/// @brief Field rtDescBase, offset: 0x408, size: 0x34, def value: None
 ::UnityEngine::RenderTextureDescriptor  ___rtDescBase;

/// @brief Field sunFlareTime, offset: 0x43c, size: 0x4, def value: None
 float_t  ___sunFlareTime;

/// @brief Field dofCurrentLayerMaskValue, offset: 0x440, size: 0x4, def value: None
 int32_t  ___dofCurrentLayerMaskValue;

/// @brief Field bloomCurrentLayerMaskValue, offset: 0x444, size: 0x4, def value: None
 int32_t  ___bloomCurrentLayerMaskValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeautifyEffect::Beautify, ____preset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____quality) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____profile) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____compareMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____compareLineAngle) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____compareLineWidth) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____dither) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____ditherDepth) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sharpenMinDepth) == 0x44, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sharpenMaxDepth) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sharpen) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sharpenDepthThreshold) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____tintColor) == 0x54, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sharpenRelaxation) == 0x64, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sharpenClamp) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sharpenMotionSensibility) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____saturate) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____contrast) == 0x74, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____brightness) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____daltonize) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____vignetting) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____vignettingColor) == 0x84, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____vignettingFade) == 0x94, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____vignettingCircularShape) == 0x98, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____vignettingAspectRatio) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____vignettingBlink) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____vignettingMask) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____frame) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____frameColor) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____frameMask) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____lut) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____lutIntensity) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____lutTexture) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____nightVision) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____nightVisionColor) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____outline) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____outlineColor) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____thermalVision) == 0x108, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____lensDirt) == 0x109, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____lensDirtThreshold) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____lensDirtIntensity) == 0x110, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____lensDirtTexture) == 0x118, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloom) == 0x120, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomCullingMask) == 0x124, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomLayerMaskDownsampling) == 0x128, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomIntensity) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomMaxBrightness) == 0x130, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomBoost0) == 0x134, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomBoost1) == 0x138, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomBoost2) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomBoost3) == 0x140, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomBoost4) == 0x144, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomBoost5) == 0x148, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomAntiflicker) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomUltra) == 0x14d, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomThreshold) == 0x150, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomCustomize) == 0x154, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomDebug) == 0x155, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomWeight0) == 0x158, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomWeight1) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomWeight2) == 0x160, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomWeight3) == 0x164, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomWeight4) == 0x168, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomWeight5) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomBlur) == 0x170, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomDepthAtten) == 0x174, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____bloomLayerZBias) == 0x178, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____anamorphicFlares) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____anamorphicFlaresIntensity) == 0x180, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____anamorphicFlaresAntiflicker) == 0x184, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____anamorphicFlaresUltra) == 0x185, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____anamorphicFlaresThreshold) == 0x188, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____anamorphicFlaresSpread) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____anamorphicFlaresVertical) == 0x190, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____anamorphicFlaresTint) == 0x194, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____anamorphicFlaresBlur) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfField) == 0x1a5, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldTransparencySupport) == 0x1a6, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldTransparencyLayerMask) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldTargetFocus) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldDebug) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldAutofocus) == 0x1b9, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthofFieldAutofocusViewportPoint) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldAutofocusMinDistance) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldAutofocusMaxDistance) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldAutofocusLayerMask) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldExclusionLayerMask) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldExclusionLayerMaskDownsampling) == 0x1d4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldTransparencySupportDownsampling) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldExclusionBias) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldDistance) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldFocusSpeed) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldDownsampling) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldMaxSamples) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldFocalLength) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldAperture) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldForegroundBlur) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldForegroundBlurHQ) == 0x1f9, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldForegroundDistance) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldBokeh) == 0x200, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldBokehThreshold) == 0x204, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldBokehIntensity) == 0x208, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldMaxBrightness) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldMaxDistance) == 0x210, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____depthOfFieldFilterMode) == 0x214, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___OnBeforeFocus) == 0x218, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____eyeAdaptation) == 0x220, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____eyeAdaptationMinExposure) == 0x224, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____eyeAdaptationMaxExposure) == 0x228, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____eyeAdaptationSpeedToLight) == 0x22c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____eyeAdaptationSpeedToDark) == 0x230, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____purkinje) == 0x234, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____purkinjeAmount) == 0x238, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____purkinjeLuminanceThreshold) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____tonemap) == 0x240, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlares) == 0x244, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sun) == 0x248, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresLayerMask) == 0x250, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresIntensity) == 0x254, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresSolarWindSpeed) == 0x258, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresTint) == 0x25c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresDownsampling) == 0x26c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresSunIntensity) == 0x270, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresSunDiskSize) == 0x274, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresSunRayDiffractionIntensity) == 0x278, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresSunRayDiffractionThreshold) == 0x27c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresCoronaRays1Length) == 0x280, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresCoronaRays1Streaks) == 0x284, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresCoronaRays1Spread) == 0x288, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresCoronaRays1AngleOffset) == 0x28c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresCoronaRays2Length) == 0x290, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresCoronaRays2Streaks) == 0x294, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresCoronaRays2Spread) == 0x298, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresCoronaRays2AngleOffset) == 0x29c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresGhosts1Size) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresGhosts1Offset) == 0x2a4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresGhosts1Brightness) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresGhosts2Size) == 0x2ac, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresGhosts2Offset) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresGhosts2Brightness) == 0x2b4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresGhosts3Size) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresGhosts3Brightness) == 0x2bc, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresGhosts3Offset) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresGhosts4Size) == 0x2c4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresGhosts4Offset) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresGhosts4Brightness) == 0x2cc, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresHaloOffset) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresHaloAmplitude) == 0x2d4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresHaloIntensity) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____sunFlaresRotationDeadZone) == 0x2dc, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____blur) == 0x2dd, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____blurIntensity) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____pixelateAmount) == 0x2e4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____pixelateDownscale) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____antialiasStrength) == 0x2ec, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ____antialiasDepthThreshold) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___isDirty) == 0x2f4, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___bMatDesktop) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___bMatMobile) == 0x300, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___bMatBasic) == 0x308, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___bMat) == 0x310, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___currentCamera) == 0x318, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___camPrevForward) == 0x320, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___camPrevPos) == 0x32c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___currSens) == 0x338, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___renderPass) == 0x33c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___rtFormat) == 0x340, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___rt) == 0x348, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___rtAF) == 0x350, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___rtEA) == 0x358, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___rtEAacum) == 0x360, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___rtEAHist) == 0x368, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___dofPrevDistance) == 0x370, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___dofLastAutofocusDistance) == 0x374, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___dofLastBokehData) == 0x378, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___sceneCamera) == 0x388, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___depthCam) == 0x390, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___depthCamObj) == 0x398, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___shaderKeywords) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___depthShader) == 0x3a8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___dofExclusionShader) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___shouldUpdateMaterialProperties) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___sunFlareCurrentIntensity) == 0x3bc, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___sunLastScrPos) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___sunLastRot) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___flareNoise) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___dofDepthTexture) == 0x3e0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___dofExclusionTexture) == 0x3e8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___bloomSourceTexture) == 0x3f0, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___bloomSourceDepthTexture) == 0x3f8, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___pixelateTexture) == 0x400, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___rtDescBase) == 0x408, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___sunFlareTime) == 0x43c, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___dofCurrentLayerMaskValue) == 0x440, "Offset mismatch!");

static_assert(offsetof(::BeautifyEffect::Beautify, ___bloomCurrentLayerMaskValue) == 0x444, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeautifyEffect::Beautify, 0x448>, "Size mismatch!");

} // namespace end def BeautifyEffect
NEED_NO_BOX(::BeautifyEffect::Beautify);
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::Beautify*, "BeautifyEffect", "Beautify");
NEED_NO_BOX(::BeautifyEffect::Beautify__DoBlink_d__712);
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::Beautify__DoBlink_d__712*, "BeautifyEffect", "Beautify/<DoBlink>d__712");
