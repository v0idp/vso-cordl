#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/RotateEffectData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/AudioReactive/zzzz__AudioReactiveEffectData_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RotateEffectData)
namespace UnityEngine {
class AnimationCurve;
}
namespace VROSC {
class MinMaxVector3;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class RotateEffectData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::RotateEffectData);
// Dependencies VROSC.AudioReactive.AudioReactiveEffectData
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.RotateEffectData
class CORDL_TYPE RotateEffectData : public ::VROSC::AudioReactive::AudioReactiveEffectData {
public:
// Declarations
 __declspec(property(get=get_ConstantRotation)) ::VROSC::MinMaxVector3*  ConstantRotation;

 __declspec(property(get=get_Curve)) ::UnityEngine::AnimationCurve*  Curve;

 __declspec(property(get=get_Duration)) float_t  Duration;

 __declspec(property(get=get_Local)) bool  Local;

 __declspec(property(get=get_Rotation)) ::VROSC::MinMaxVector3*  Rotation;

 __declspec(property(get=get_UniformRandom)) bool  UniformRandom;

 __declspec(property(get=get_UseConstantRotation)) bool  UseConstantRotation;

/// @brief Field _constantRotation, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__constantRotation, put=__cordl_internal_set__constantRotation)) ::VROSC::MinMaxVector3*  _constantRotation;

/// @brief Field _curve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__curve, put=__cordl_internal_set__curve)) ::UnityEngine::AnimationCurve*  _curve;

/// @brief Field _duration, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__duration, put=__cordl_internal_set__duration)) float_t  _duration;

/// @brief Field _local, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get__local, put=__cordl_internal_set__local)) bool  _local;

/// @brief Field _rotation, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotation, put=__cordl_internal_set__rotation)) ::VROSC::MinMaxVector3*  _rotation;

/// @brief Field _uniformRandom, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__uniformRandom, put=__cordl_internal_set__uniformRandom)) bool  _uniformRandom;

/// @brief Field _useConstantRotation, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__useConstantRotation, put=__cordl_internal_set__useConstantRotation)) bool  _useConstantRotation;

static inline ::VROSC::AudioReactive::RotateEffectData* New_ctor() ;

constexpr ::VROSC::MinMaxVector3* const& __cordl_internal_get__constantRotation() const;

constexpr ::VROSC::MinMaxVector3*& __cordl_internal_get__constantRotation() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__curve() ;

constexpr float_t const& __cordl_internal_get__duration() const;

constexpr float_t& __cordl_internal_get__duration() ;

constexpr bool const& __cordl_internal_get__local() const;

constexpr bool& __cordl_internal_get__local() ;

constexpr ::VROSC::MinMaxVector3* const& __cordl_internal_get__rotation() const;

constexpr ::VROSC::MinMaxVector3*& __cordl_internal_get__rotation() ;

constexpr bool const& __cordl_internal_get__uniformRandom() const;

constexpr bool& __cordl_internal_get__uniformRandom() ;

constexpr bool const& __cordl_internal_get__useConstantRotation() const;

constexpr bool& __cordl_internal_get__useConstantRotation() ;

constexpr void __cordl_internal_set__constantRotation(::VROSC::MinMaxVector3*  value) ;

constexpr void __cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__duration(float_t  value) ;

constexpr void __cordl_internal_set__local(bool  value) ;

constexpr void __cordl_internal_set__rotation(::VROSC::MinMaxVector3*  value) ;

constexpr void __cordl_internal_set__uniformRandom(bool  value) ;

constexpr void __cordl_internal_set__useConstantRotation(bool  value) ;

/// @brief Method .ctor, addr 0x17d6c98, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ConstantRotation, addr 0x17d6c90, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::MinMaxVector3* get_ConstantRotation() ;

/// @brief Method get_Curve, addr 0x17d6c80, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_Curve() ;

/// @brief Method get_Duration, addr 0x17d6c78, size 0x8, virtual false, abstract: false, final false
inline float_t get_Duration() ;

/// @brief Method get_Local, addr 0x17d6c60, size 0x8, virtual false, abstract: false, final false
inline bool get_Local() ;

/// @brief Method get_Rotation, addr 0x17d6c70, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::MinMaxVector3* get_Rotation() ;

/// @brief Method get_UniformRandom, addr 0x17d6c68, size 0x8, virtual false, abstract: false, final false
inline bool get_UniformRandom() ;

/// @brief Method get_UseConstantRotation, addr 0x17d6c88, size 0x8, virtual false, abstract: false, final false
inline bool get_UseConstantRotation() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotateEffectData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotateEffectData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RotateEffectData(RotateEffectData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotateEffectData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotateEffectData(RotateEffectData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1519};

/// @brief Field _uniformRandom, offset: 0x18, size: 0x1, def value: None
 bool  ____uniformRandom;

/// @brief Field _local, offset: 0x19, size: 0x1, def value: None
 bool  ____local;

/// @brief Field _rotation, offset: 0x20, size: 0x8, def value: None
 ::VROSC::MinMaxVector3*  ____rotation;

/// @brief Field _duration, offset: 0x28, size: 0x4, def value: None
 float_t  ____duration;

/// @brief Field _curve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____curve;

/// @brief Field _useConstantRotation, offset: 0x38, size: 0x1, def value: None
 bool  ____useConstantRotation;

/// @brief Field _constantRotation, offset: 0x40, size: 0x8, def value: None
 ::VROSC::MinMaxVector3*  ____constantRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::RotateEffectData, ____uniformRandom) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::RotateEffectData, ____local) == 0x19, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::RotateEffectData, ____rotation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::RotateEffectData, ____duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::RotateEffectData, ____curve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::RotateEffectData, ____useConstantRotation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::RotateEffectData, ____constantRotation) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::RotateEffectData, 0x48>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::RotateEffectData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::RotateEffectData*, "VROSC.AudioReactive", "RotateEffectData");
