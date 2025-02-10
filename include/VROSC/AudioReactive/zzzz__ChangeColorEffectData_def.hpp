#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/ChangeColorEffectData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/AudioReactive/zzzz__AudioReactiveEffectData_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChangeColorEffectData)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC::AudioReactive {
struct ChangeColorEffectData_CycleStyle;
}
// Forward declare root types
namespace VROSC::AudioReactive {
struct ChangeColorEffectData_CycleStyle;
}
namespace VROSC::AudioReactive {
class ChangeColorEffectData;
}
// Write type traits
MARK_VAL_T(::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle);
MARK_REF_PTR_T(::VROSC::AudioReactive::ChangeColorEffectData);
// Dependencies 
namespace VROSC::AudioReactive {
// Is value type: true
// CS Name: VROSC.AudioReactive.ChangeColorEffectData/CycleStyle
struct CORDL_TYPE ChangeColorEffectData_CycleStyle {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ChangeColorEffectData_CycleStyle_Unwrapped
enum struct __ChangeColorEffectData_CycleStyle_Unwrapped : int32_t {
__E_Random = static_cast<int32_t>(0x0),
__E_Cycle = static_cast<int32_t>(0x1),
__E_PingPoing = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ChangeColorEffectData_CycleStyle_Unwrapped () const noexcept {
return static_cast<__ChangeColorEffectData_CycleStyle_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ChangeColorEffectData_CycleStyle() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ChangeColorEffectData_CycleStyle(int32_t  value__) noexcept;

/// @brief Field Cycle value: I32(1)
static ::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle const Cycle;

/// @brief Field PingPoing value: I32(2)
static ::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle const PingPoing;

/// @brief Field Random value: I32(0)
static ::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle const Random;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1502};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle, 0x4>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies VROSC.AudioReactive.AudioReactiveEffectData, VROSC.AudioReactive.ChangeColorEffectData::CycleStyle
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.ChangeColorEffectData
class CORDL_TYPE ChangeColorEffectData : public ::VROSC::AudioReactive::AudioReactiveEffectData {
public:
// Declarations
using CycleStyle = ::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle;

 __declspec(property(get=get_Colors)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  Colors;

 __declspec(property(get=get_Curve)) ::UnityEngine::AnimationCurve*  Curve;

 __declspec(property(get=get_Duration)) float_t  Duration;

 __declspec(property(get=get_StartBlack)) bool  StartBlack;

 __declspec(property(get=get_Style)) ::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle  Style;

/// @brief Field _colors, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__colors, put=__cordl_internal_set__colors)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  _colors;

/// @brief Field _curve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__curve, put=__cordl_internal_set__curve)) ::UnityEngine::AnimationCurve*  _curve;

/// @brief Field _duration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__duration, put=__cordl_internal_set__duration)) float_t  _duration;

/// @brief Field _startBlack, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__startBlack, put=__cordl_internal_set__startBlack)) bool  _startBlack;

/// @brief Field _style, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__style, put=__cordl_internal_set__style)) ::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle  _style;

static inline ::VROSC::AudioReactive::ChangeColorEffectData* New_ctor() ;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& __cordl_internal_get__colors() const;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& __cordl_internal_get__colors() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__curve() ;

constexpr float_t const& __cordl_internal_get__duration() const;

constexpr float_t& __cordl_internal_get__duration() ;

constexpr bool const& __cordl_internal_get__startBlack() const;

constexpr bool& __cordl_internal_get__startBlack() ;

constexpr ::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle const& __cordl_internal_get__style() const;

constexpr ::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle& __cordl_internal_get__style() ;

constexpr void __cordl_internal_set__colors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value) ;

constexpr void __cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__duration(float_t  value) ;

constexpr void __cordl_internal_set__startBlack(bool  value) ;

constexpr void __cordl_internal_set__style(::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle  value) ;

/// @brief Method .ctor, addr 0x17d4634, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Colors, addr 0x17d460c, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> get_Colors() ;

/// @brief Method get_Curve, addr 0x17d461c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_Curve() ;

/// @brief Method get_Duration, addr 0x17d4614, size 0x8, virtual false, abstract: false, final false
inline float_t get_Duration() ;

/// @brief Method get_StartBlack, addr 0x17d462c, size 0x8, virtual false, abstract: false, final false
inline bool get_StartBlack() ;

/// @brief Method get_Style, addr 0x17d4624, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle get_Style() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChangeColorEffectData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChangeColorEffectData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChangeColorEffectData(ChangeColorEffectData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChangeColorEffectData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChangeColorEffectData(ChangeColorEffectData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1503};

/// @brief Field _colors, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  ____colors;

/// @brief Field _duration, offset: 0x20, size: 0x4, def value: None
 float_t  ____duration;

/// @brief Field _curve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____curve;

/// @brief Field _style, offset: 0x30, size: 0x4, def value: None
 ::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle  ____style;

/// @brief Field _startBlack, offset: 0x34, size: 0x1, def value: None
 bool  ____startBlack;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::ChangeColorEffectData, ____colors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ChangeColorEffectData, ____duration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ChangeColorEffectData, ____curve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ChangeColorEffectData, ____style) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ChangeColorEffectData, ____startBlack) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::ChangeColorEffectData, 0x38>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle, "VROSC.AudioReactive", "ChangeColorEffectData/CycleStyle");
NEED_NO_BOX(::VROSC::AudioReactive::ChangeColorEffectData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ChangeColorEffectData*, "VROSC.AudioReactive", "ChangeColorEffectData");
