#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/ScaleEffectData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/AudioReactive/zzzz__AudioReactiveEffectData_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ScaleEffectData)
namespace UnityEngine {
class AnimationCurve;
}
namespace VROSC {
class MinMaxVector3;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class ScaleEffectData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::ScaleEffectData);
// Dependencies VROSC.AudioReactive.AudioReactiveEffectData
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.ScaleEffectData
class CORDL_TYPE ScaleEffectData : public ::VROSC::AudioReactive::AudioReactiveEffectData {
public:
// Declarations
 __declspec(property(get=get_Curve)) ::UnityEngine::AnimationCurve*  Curve;

 __declspec(property(get=get_Duration)) float_t  Duration;

 __declspec(property(get=get_Scaling)) ::VROSC::MinMaxVector3*  Scaling;

 __declspec(property(get=get_UniformRandom)) bool  UniformRandom;

/// @brief Field _curve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__curve, put=__cordl_internal_set__curve)) ::UnityEngine::AnimationCurve*  _curve;

/// @brief Field _duration, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__duration, put=__cordl_internal_set__duration)) float_t  _duration;

/// @brief Field _scaling, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaling, put=__cordl_internal_set__scaling)) ::VROSC::MinMaxVector3*  _scaling;

/// @brief Field _uniformRandom, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__uniformRandom, put=__cordl_internal_set__uniformRandom)) bool  _uniformRandom;

static inline ::VROSC::AudioReactive::ScaleEffectData* New_ctor() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__curve() ;

constexpr float_t const& __cordl_internal_get__duration() const;

constexpr float_t& __cordl_internal_get__duration() ;

constexpr ::VROSC::MinMaxVector3* const& __cordl_internal_get__scaling() const;

constexpr ::VROSC::MinMaxVector3*& __cordl_internal_get__scaling() ;

constexpr bool const& __cordl_internal_get__uniformRandom() const;

constexpr bool& __cordl_internal_get__uniformRandom() ;

constexpr void __cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__duration(float_t  value) ;

constexpr void __cordl_internal_set__scaling(::VROSC::MinMaxVector3*  value) ;

constexpr void __cordl_internal_set__uniformRandom(bool  value) ;

/// @brief Method .ctor, addr 0x17d9284, size 0xc8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Curve, addr 0x17d927c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_Curve() ;

/// @brief Method get_Duration, addr 0x17d9274, size 0x8, virtual false, abstract: false, final false
inline float_t get_Duration() ;

/// @brief Method get_Scaling, addr 0x17d9264, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::MinMaxVector3* get_Scaling() ;

/// @brief Method get_UniformRandom, addr 0x17d926c, size 0x8, virtual false, abstract: false, final false
inline bool get_UniformRandom() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScaleEffectData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScaleEffectData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScaleEffectData(ScaleEffectData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScaleEffectData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScaleEffectData(ScaleEffectData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1546};

/// @brief Field _scaling, offset: 0x18, size: 0x8, def value: None
 ::VROSC::MinMaxVector3*  ____scaling;

/// @brief Field _uniformRandom, offset: 0x20, size: 0x1, def value: None
 bool  ____uniformRandom;

/// @brief Field _duration, offset: 0x24, size: 0x4, def value: None
 float_t  ____duration;

/// @brief Field _curve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____curve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::ScaleEffectData, ____scaling) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ScaleEffectData, ____uniformRandom) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ScaleEffectData, ____duration) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ScaleEffectData, ____curve) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::ScaleEffectData, 0x30>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::ScaleEffectData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ScaleEffectData*, "VROSC.AudioReactive", "ScaleEffectData");
