#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/GlobalColorEffectData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/AudioReactive/zzzz__AudioReactiveEffectData_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalColorEffectData)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Gradient;
}
namespace VROSC::AudioReactive {
class GlobalColorEffectData_ColorGroup;
}
namespace VROSC::AudioReactive {
class GlobalColorEffectData_HueChangeGroup;
}
namespace VROSC::AudioReactive {
struct GlobalColorEffectData_OnBeatBehaviour;
}
// Forward declare root types
namespace VROSC::AudioReactive {
struct GlobalColorEffectData_OnBeatBehaviour;
}
namespace VROSC::AudioReactive {
class GlobalColorEffectData;
}
namespace VROSC::AudioReactive {
class GlobalColorEffectData_ColorGroup;
}
namespace VROSC::AudioReactive {
class GlobalColorEffectData_HueChangeGroup;
}
// Write type traits
MARK_VAL_T(::VROSC::AudioReactive::GlobalColorEffectData_OnBeatBehaviour);
MARK_REF_PTR_T(::VROSC::AudioReactive::GlobalColorEffectData);
MARK_REF_PTR_T(::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup);
MARK_REF_PTR_T(::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup);
// Dependencies 
namespace VROSC::AudioReactive {
// Is value type: true
// CS Name: VROSC.AudioReactive.GlobalColorEffectData/OnBeatBehaviour
struct CORDL_TYPE GlobalColorEffectData_OnBeatBehaviour {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GlobalColorEffectData_OnBeatBehaviour_Unwrapped
enum struct __GlobalColorEffectData_OnBeatBehaviour_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Random = static_cast<int32_t>(0x1),
__E_Cycle = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalColorEffectData_OnBeatBehaviour_Unwrapped () const noexcept {
return static_cast<__GlobalColorEffectData_OnBeatBehaviour_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GlobalColorEffectData_OnBeatBehaviour() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalColorEffectData_OnBeatBehaviour(int32_t  value__) noexcept;

/// @brief Field Cycle value: I32(2)
static ::VROSC::AudioReactive::GlobalColorEffectData_OnBeatBehaviour const Cycle;

/// @brief Field None value: I32(0)
static ::VROSC::AudioReactive::GlobalColorEffectData_OnBeatBehaviour const None;

/// @brief Field Random value: I32(1)
static ::VROSC::AudioReactive::GlobalColorEffectData_OnBeatBehaviour const Random;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1558};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::GlobalColorEffectData_OnBeatBehaviour, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::GlobalColorEffectData_OnBeatBehaviour, 0x4>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies System.Object, UnityEngine.Color
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.GlobalColorEffectData/ColorGroup
class CORDL_TYPE GlobalColorEffectData_ColorGroup : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Color1)) ::UnityEngine::Color  Color1;

 __declspec(property(get=get_Color2)) ::UnityEngine::Color  Color2;

 __declspec(property(get=get_Color3)) ::UnityEngine::Color  Color3;

 __declspec(property(get=get_Color4)) ::UnityEngine::Color  Color4;

/// @brief Field _color1, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__color1, put=__cordl_internal_set__color1)) ::UnityEngine::Color  _color1;

/// @brief Field _color2, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__color2, put=__cordl_internal_set__color2)) ::UnityEngine::Color  _color2;

/// @brief Field _color3, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__color3, put=__cordl_internal_set__color3)) ::UnityEngine::Color  _color3;

/// @brief Field _color4, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__color4, put=__cordl_internal_set__color4)) ::UnityEngine::Color  _color4;

static inline ::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__color1() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__color1() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__color2() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__color2() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__color3() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__color3() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__color4() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__color4() ;

constexpr void __cordl_internal_set__color1(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__color2(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__color3(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__color4(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x17da300, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Color1, addr 0x17da2d0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Color1() ;

/// @brief Method get_Color2, addr 0x17da2dc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Color2() ;

/// @brief Method get_Color3, addr 0x17da2e8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Color3() ;

/// @brief Method get_Color4, addr 0x17da2f4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Color4() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalColorEffectData_ColorGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalColorEffectData_ColorGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalColorEffectData_ColorGroup(GlobalColorEffectData_ColorGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalColorEffectData_ColorGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalColorEffectData_ColorGroup(GlobalColorEffectData_ColorGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1559};

/// @brief Field _color1, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  ____color1;

/// @brief Field _color2, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ____color2;

/// @brief Field _color3, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____color3;

/// @brief Field _color4, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____color4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup, ____color1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup, ____color2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup, ____color3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup, ____color4) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup, 0x50>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies System.Object
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.GlobalColorEffectData/HueChangeGroup
class CORDL_TYPE GlobalColorEffectData_HueChangeGroup : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Gradient)) ::UnityEngine::Gradient*  Gradient;

 __declspec(property(get=get_HueShift)) float_t  HueShift;

 __declspec(property(get=get_IncludeShifts)) bool  IncludeShifts;

 __declspec(property(get=get_UseGradient)) bool  UseGradient;

/// @brief Field _gradient, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__gradient, put=__cordl_internal_set__gradient)) ::UnityEngine::Gradient*  _gradient;

/// @brief Field _hueShift, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__hueShift, put=__cordl_internal_set__hueShift)) float_t  _hueShift;

/// @brief Field _includeShifts, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__includeShifts, put=__cordl_internal_set__includeShifts)) bool  _includeShifts;

/// @brief Field _useGradient, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__useGradient, put=__cordl_internal_set__useGradient)) bool  _useGradient;

static inline ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup* New_ctor() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get__gradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get__gradient() ;

constexpr float_t const& __cordl_internal_get__hueShift() const;

constexpr float_t& __cordl_internal_get__hueShift() ;

constexpr bool const& __cordl_internal_get__includeShifts() const;

constexpr bool& __cordl_internal_get__includeShifts() ;

constexpr bool const& __cordl_internal_get__useGradient() const;

constexpr bool& __cordl_internal_get__useGradient() ;

constexpr void __cordl_internal_set__gradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set__hueShift(float_t  value) ;

constexpr void __cordl_internal_set__includeShifts(bool  value) ;

constexpr void __cordl_internal_set__useGradient(bool  value) ;

/// @brief Method .ctor, addr 0x17da328, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Gradient, addr 0x17da310, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Gradient* get_Gradient() ;

/// @brief Method get_HueShift, addr 0x17da308, size 0x8, virtual false, abstract: false, final false
inline float_t get_HueShift() ;

/// @brief Method get_IncludeShifts, addr 0x17da320, size 0x8, virtual false, abstract: false, final false
inline bool get_IncludeShifts() ;

/// @brief Method get_UseGradient, addr 0x17da318, size 0x8, virtual false, abstract: false, final false
inline bool get_UseGradient() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalColorEffectData_HueChangeGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalColorEffectData_HueChangeGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalColorEffectData_HueChangeGroup(GlobalColorEffectData_HueChangeGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalColorEffectData_HueChangeGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalColorEffectData_HueChangeGroup(GlobalColorEffectData_HueChangeGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1560};

/// @brief Field _hueShift, offset: 0x10, size: 0x4, def value: None
 float_t  ____hueShift;

/// @brief Field _gradient, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ____gradient;

/// @brief Field _useGradient, offset: 0x20, size: 0x1, def value: None
 bool  ____useGradient;

/// @brief Field _includeShifts, offset: 0x21, size: 0x1, def value: None
 bool  ____includeShifts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup, ____hueShift) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup, ____gradient) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup, ____useGradient) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup, ____includeShifts) == 0x21, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup, 0x28>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies VROSC.AudioReactive.AudioReactiveEffectData, VROSC.AudioReactive.GlobalColorEffectData::OnBeatBehaviour
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.GlobalColorEffectData
class CORDL_TYPE GlobalColorEffectData : public ::VROSC::AudioReactive::AudioReactiveEffectData {
public:
// Declarations
using ColorGroup = ::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup;

using HueChangeGroup = ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup;

using OnBeatBehaviour = ::VROSC::AudioReactive::GlobalColorEffectData_OnBeatBehaviour;

 __declspec(property(get=get_BeatBehaviour)) ::VROSC::AudioReactive::GlobalColorEffectData_OnBeatBehaviour  BeatBehaviour;

 __declspec(property(get=get_Channel1)) ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup*  Channel1;

 __declspec(property(get=get_Channel2)) ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup*  Channel2;

 __declspec(property(get=get_Channel3)) ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup*  Channel3;

 __declspec(property(get=get_Channel4)) ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup*  Channel4;

 __declspec(property(get=get_Duration)) float_t  Duration;

 __declspec(property(get=get_HueCurve)) ::UnityEngine::AnimationCurve*  HueCurve;

 __declspec(property(get=get_SaturationCurve)) ::UnityEngine::AnimationCurve*  SaturationCurve;

 __declspec(property(get=get_StartColors)) ::ArrayW<::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup*,::Array<::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup*>*>  StartColors;

 __declspec(property(get=get_ValueCurve)) ::UnityEngine::AnimationCurve*  ValueCurve;

/// @brief Field _behaviour, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__behaviour, put=__cordl_internal_set__behaviour)) ::VROSC::AudioReactive::GlobalColorEffectData_OnBeatBehaviour  _behaviour;

/// @brief Field _channel1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__channel1, put=__cordl_internal_set__channel1)) ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup*  _channel1;

/// @brief Field _channel2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__channel2, put=__cordl_internal_set__channel2)) ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup*  _channel2;

/// @brief Field _channel3, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__channel3, put=__cordl_internal_set__channel3)) ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup*  _channel3;

/// @brief Field _channel4, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__channel4, put=__cordl_internal_set__channel4)) ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup*  _channel4;

/// @brief Field _duration, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__duration, put=__cordl_internal_set__duration)) float_t  _duration;

/// @brief Field _hueChange, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__hueChange, put=__cordl_internal_set__hueChange)) ::UnityEngine::AnimationCurve*  _hueChange;

/// @brief Field _saturationChange, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__saturationChange, put=__cordl_internal_set__saturationChange)) ::UnityEngine::AnimationCurve*  _saturationChange;

/// @brief Field _startColors, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__startColors, put=__cordl_internal_set__startColors)) ::ArrayW<::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup*,::Array<::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup*>*>  _startColors;

/// @brief Field _valueChange, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueChange, put=__cordl_internal_set__valueChange)) ::UnityEngine::AnimationCurve*  _valueChange;

/// @brief Method GetGroupByChannel, addr 0x17da28c, size 0x3c, virtual false, abstract: false, final false
inline ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup* GetGroupByChannel(int32_t  channel) ;

static inline ::VROSC::AudioReactive::GlobalColorEffectData* New_ctor() ;

constexpr ::VROSC::AudioReactive::GlobalColorEffectData_OnBeatBehaviour const& __cordl_internal_get__behaviour() const;

constexpr ::VROSC::AudioReactive::GlobalColorEffectData_OnBeatBehaviour& __cordl_internal_get__behaviour() ;

constexpr ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup* const& __cordl_internal_get__channel1() const;

constexpr ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup*& __cordl_internal_get__channel1() ;

constexpr ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup* const& __cordl_internal_get__channel2() const;

constexpr ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup*& __cordl_internal_get__channel2() ;

constexpr ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup* const& __cordl_internal_get__channel3() const;

constexpr ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup*& __cordl_internal_get__channel3() ;

constexpr ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup* const& __cordl_internal_get__channel4() const;

constexpr ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup*& __cordl_internal_get__channel4() ;

constexpr float_t const& __cordl_internal_get__duration() const;

constexpr float_t& __cordl_internal_get__duration() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__hueChange() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__hueChange() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__saturationChange() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__saturationChange() ;

constexpr ::ArrayW<::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup*,::Array<::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup*>*> const& __cordl_internal_get__startColors() const;

constexpr ::ArrayW<::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup*,::Array<::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup*>*>& __cordl_internal_get__startColors() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__valueChange() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__valueChange() ;

constexpr void __cordl_internal_set__behaviour(::VROSC::AudioReactive::GlobalColorEffectData_OnBeatBehaviour  value) ;

constexpr void __cordl_internal_set__channel1(::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup*  value) ;

constexpr void __cordl_internal_set__channel2(::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup*  value) ;

constexpr void __cordl_internal_set__channel3(::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup*  value) ;

constexpr void __cordl_internal_set__channel4(::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup*  value) ;

constexpr void __cordl_internal_set__duration(float_t  value) ;

constexpr void __cordl_internal_set__hueChange(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__saturationChange(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__startColors(::ArrayW<::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup*,::Array<::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup*>*>  value) ;

constexpr void __cordl_internal_set__valueChange(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x17da2c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BeatBehaviour, addr 0x17da264, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::AudioReactive::GlobalColorEffectData_OnBeatBehaviour get_BeatBehaviour() ;

/// @brief Method get_Channel1, addr 0x17da23c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup* get_Channel1() ;

/// @brief Method get_Channel2, addr 0x17da244, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup* get_Channel2() ;

/// @brief Method get_Channel3, addr 0x17da24c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup* get_Channel3() ;

/// @brief Method get_Channel4, addr 0x17da254, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup* get_Channel4() ;

/// @brief Method get_Duration, addr 0x17da26c, size 0x8, virtual false, abstract: false, final false
inline float_t get_Duration() ;

/// @brief Method get_HueCurve, addr 0x17da274, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_HueCurve() ;

/// @brief Method get_SaturationCurve, addr 0x17da27c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_SaturationCurve() ;

/// @brief Method get_StartColors, addr 0x17da25c, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup*,::Array<::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup*>*> get_StartColors() ;

/// @brief Method get_ValueCurve, addr 0x17da284, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_ValueCurve() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalColorEffectData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalColorEffectData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalColorEffectData(GlobalColorEffectData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalColorEffectData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalColorEffectData(GlobalColorEffectData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1561};

/// @brief Field _startColors, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup*,::Array<::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup*>*>  ____startColors;

/// @brief Field _channel1, offset: 0x20, size: 0x8, def value: None
 ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup*  ____channel1;

/// @brief Field _channel2, offset: 0x28, size: 0x8, def value: None
 ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup*  ____channel2;

/// @brief Field _channel3, offset: 0x30, size: 0x8, def value: None
 ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup*  ____channel3;

/// @brief Field _channel4, offset: 0x38, size: 0x8, def value: None
 ::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup*  ____channel4;

/// @brief Field _behaviour, offset: 0x40, size: 0x4, def value: None
 ::VROSC::AudioReactive::GlobalColorEffectData_OnBeatBehaviour  ____behaviour;

/// @brief Field _duration, offset: 0x44, size: 0x4, def value: None
 float_t  ____duration;

/// @brief Field _hueChange, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____hueChange;

/// @brief Field _saturationChange, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____saturationChange;

/// @brief Field _valueChange, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____valueChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::GlobalColorEffectData, ____startColors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalColorEffectData, ____channel1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalColorEffectData, ____channel2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalColorEffectData, ____channel3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalColorEffectData, ____channel4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalColorEffectData, ____behaviour) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalColorEffectData, ____duration) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalColorEffectData, ____hueChange) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalColorEffectData, ____saturationChange) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalColorEffectData, ____valueChange) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::GlobalColorEffectData, 0x60>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::GlobalColorEffectData_OnBeatBehaviour, "VROSC.AudioReactive", "GlobalColorEffectData/OnBeatBehaviour");
NEED_NO_BOX(::VROSC::AudioReactive::GlobalColorEffectData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::GlobalColorEffectData*, "VROSC.AudioReactive", "GlobalColorEffectData");
NEED_NO_BOX(::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::GlobalColorEffectData_ColorGroup*, "VROSC.AudioReactive", "GlobalColorEffectData/ColorGroup");
NEED_NO_BOX(::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::GlobalColorEffectData_HueChangeGroup*, "VROSC.AudioReactive", "GlobalColorEffectData/HueChangeGroup");
