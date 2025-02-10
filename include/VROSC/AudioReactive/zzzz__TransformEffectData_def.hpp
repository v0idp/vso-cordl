#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/TransformEffectData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/AudioReactive/zzzz__AudioReactiveEffectData_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TransformEffectData)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class TransformEffectData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::TransformEffectData);
// Dependencies VROSC.AudioReactive.AudioReactiveEffectData
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.TransformEffectData
class CORDL_TYPE TransformEffectData : public ::VROSC::AudioReactive::AudioReactiveEffectData {
public:
// Declarations
 __declspec(property(get=get_Curve)) ::UnityEngine::AnimationCurve*  Curve;

 __declspec(property(get=get_Duration)) float_t  Duration;

/// @brief Field _curve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__curve, put=__cordl_internal_set__curve)) ::UnityEngine::AnimationCurve*  _curve;

/// @brief Field _duration, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__duration, put=__cordl_internal_set__duration)) float_t  _duration;

static inline ::VROSC::AudioReactive::TransformEffectData* New_ctor() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__curve() ;

constexpr float_t const& __cordl_internal_get__duration() const;

constexpr float_t& __cordl_internal_get__duration() ;

constexpr void __cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__duration(float_t  value) ;

/// @brief Method .ctor, addr 0x17d9500, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Curve, addr 0x17d94f8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_Curve() ;

/// @brief Method get_Duration, addr 0x17d94f0, size 0x8, virtual false, abstract: false, final false
inline float_t get_Duration() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformEffectData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformEffectData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformEffectData(TransformEffectData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformEffectData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformEffectData(TransformEffectData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1551};

/// @brief Field _duration, offset: 0x18, size: 0x4, def value: None
 float_t  ____duration;

/// @brief Field _curve, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____curve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::TransformEffectData, ____duration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::TransformEffectData, ____curve) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::TransformEffectData, 0x28>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::TransformEffectData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::TransformEffectData*, "VROSC.AudioReactive", "TransformEffectData");
