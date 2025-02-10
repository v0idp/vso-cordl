#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/ShaderEffectData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/AudioReactive/zzzz__AudioReactiveEffectData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderEffectData)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
namespace VROSC::AudioReactive {
struct Effect_ShaderEffectData_EffectType;
}
namespace VROSC::AudioReactive {
class ShaderEffectData_Effect;
}
namespace VROSC {
class MinMaxFloat;
}
namespace VROSC {
class MinMaxVector4;
}
// Forward declare root types
namespace VROSC::AudioReactive {
struct Effect_ShaderEffectData_EffectType;
}
namespace VROSC::AudioReactive {
class ShaderEffectData;
}
namespace VROSC::AudioReactive {
class ShaderEffectData_Effect;
}
// Write type traits
MARK_VAL_T(::VROSC::AudioReactive::Effect_ShaderEffectData_EffectType);
MARK_REF_PTR_T(::VROSC::AudioReactive::ShaderEffectData);
MARK_REF_PTR_T(::VROSC::AudioReactive::ShaderEffectData_Effect);
// Dependencies 
namespace VROSC::AudioReactive {
// Is value type: true
// CS Name: VROSC.AudioReactive.ShaderEffectData/Effect/EffectType
struct CORDL_TYPE Effect_ShaderEffectData_EffectType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Effect_ShaderEffectData_EffectType_Unwrapped
enum struct __Effect_ShaderEffectData_EffectType_Unwrapped : int32_t {
__E_Color = static_cast<int32_t>(0x0),
__E_Float = static_cast<int32_t>(0x1),
__E_Vector = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Effect_ShaderEffectData_EffectType_Unwrapped () const noexcept {
return static_cast<__Effect_ShaderEffectData_EffectType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Effect_ShaderEffectData_EffectType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Effect_ShaderEffectData_EffectType(int32_t  value__) noexcept;

/// @brief Field Color value: I32(0)
static ::VROSC::AudioReactive::Effect_ShaderEffectData_EffectType const Color;

/// @brief Field Float value: I32(1)
static ::VROSC::AudioReactive::Effect_ShaderEffectData_EffectType const Float;

/// @brief Field Vector value: I32(2)
static ::VROSC::AudioReactive::Effect_ShaderEffectData_EffectType const Vector;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1547};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::Effect_ShaderEffectData_EffectType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::Effect_ShaderEffectData_EffectType, 0x4>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies System.Object, VROSC.AudioReactive.ShaderEffectData::Effect::EffectType
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.ShaderEffectData/Effect
class CORDL_TYPE ShaderEffectData_Effect : public ::System::Object {
public:
// Declarations
using EffectType = ::VROSC::AudioReactive::Effect_ShaderEffectData_EffectType;

/// @brief Field _colorValue, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorValue, put=__cordl_internal_set__colorValue)) ::UnityEngine::Gradient*  _colorValue;

/// @brief Field _curve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__curve, put=__cordl_internal_set__curve)) ::UnityEngine::AnimationCurve*  _curve;

/// @brief Field _floatValue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__floatValue, put=__cordl_internal_set__floatValue)) ::VROSC::MinMaxFloat*  _floatValue;

/// @brief Field _propertyName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__propertyName, put=__cordl_internal_set__propertyName)) ::StringW  _propertyName;

/// @brief Field _type, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__type, put=__cordl_internal_set__type)) ::VROSC::AudioReactive::Effect_ShaderEffectData_EffectType  _type;

/// @brief Field _vectorValue, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__vectorValue, put=__cordl_internal_set__vectorValue)) ::VROSC::MinMaxVector4*  _vectorValue;

static inline ::VROSC::AudioReactive::ShaderEffectData_Effect* New_ctor() ;

/// @brief Method SetColorValue, addr 0x17d9364, size 0x78, virtual false, abstract: false, final false
inline void SetColorValue(::UnityEngine::MaterialPropertyBlock*  block, ::UnityEngine::Renderer*  renderer, float_t  value) ;

/// @brief Method SetFloatValue, addr 0x17d93dc, size 0x78, virtual false, abstract: false, final false
inline void SetFloatValue(::UnityEngine::MaterialPropertyBlock*  block, ::UnityEngine::Renderer*  renderer, float_t  value) ;

/// @brief Method SetShaderEffects, addr 0x17d74ac, size 0x28, virtual false, abstract: false, final false
inline void SetShaderEffects(::UnityEngine::MaterialPropertyBlock*  block, ::UnityEngine::Renderer*  renderer, float_t  value) ;

/// @brief Method SetVectorValue, addr 0x17d9454, size 0x7c, virtual false, abstract: false, final false
inline void SetVectorValue(::UnityEngine::MaterialPropertyBlock*  block, ::UnityEngine::Renderer*  renderer, float_t  value) ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get__colorValue() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get__colorValue() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__curve() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__floatValue() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__floatValue() ;

constexpr ::StringW const& __cordl_internal_get__propertyName() const;

constexpr ::StringW& __cordl_internal_get__propertyName() ;

constexpr ::VROSC::AudioReactive::Effect_ShaderEffectData_EffectType const& __cordl_internal_get__type() const;

constexpr ::VROSC::AudioReactive::Effect_ShaderEffectData_EffectType& __cordl_internal_get__type() ;

constexpr ::VROSC::MinMaxVector4* const& __cordl_internal_get__vectorValue() const;

constexpr ::VROSC::MinMaxVector4*& __cordl_internal_get__vectorValue() ;

constexpr void __cordl_internal_set__colorValue(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__floatValue(::VROSC::MinMaxFloat*  value) ;

constexpr void __cordl_internal_set__propertyName(::StringW  value) ;

constexpr void __cordl_internal_set__type(::VROSC::AudioReactive::Effect_ShaderEffectData_EffectType  value) ;

constexpr void __cordl_internal_set__vectorValue(::VROSC::MinMaxVector4*  value) ;

/// @brief Method .ctor, addr 0x17d94d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderEffectData_Effect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderEffectData_Effect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderEffectData_Effect(ShaderEffectData_Effect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderEffectData_Effect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderEffectData_Effect(ShaderEffectData_Effect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1548};

/// @brief Field _type, offset: 0x10, size: 0x4, def value: None
 ::VROSC::AudioReactive::Effect_ShaderEffectData_EffectType  ____type;

/// @brief Field _propertyName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____propertyName;

/// @brief Field _floatValue, offset: 0x20, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____floatValue;

/// @brief Field _colorValue, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ____colorValue;

/// @brief Field _vectorValue, offset: 0x30, size: 0x8, def value: None
 ::VROSC::MinMaxVector4*  ____vectorValue;

/// @brief Field _curve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____curve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::ShaderEffectData_Effect, ____type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShaderEffectData_Effect, ____propertyName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShaderEffectData_Effect, ____floatValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShaderEffectData_Effect, ____colorValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShaderEffectData_Effect, ____vectorValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShaderEffectData_Effect, ____curve) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::ShaderEffectData_Effect, 0x40>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies VROSC.AudioReactive.AudioReactiveEffectData
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.ShaderEffectData
class CORDL_TYPE ShaderEffectData : public ::VROSC::AudioReactive::AudioReactiveEffectData {
public:
// Declarations
using Effect = ::VROSC::AudioReactive::ShaderEffectData_Effect;

 __declspec(property(get=get_Duration)) float_t  Duration;

 __declspec(property(get=get_Effects)) ::ArrayW<::VROSC::AudioReactive::ShaderEffectData_Effect*,::Array<::VROSC::AudioReactive::ShaderEffectData_Effect*>*>  Effects;

/// @brief Field _duration, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__duration, put=__cordl_internal_set__duration)) float_t  _duration;

/// @brief Field _effects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__effects, put=__cordl_internal_set__effects)) ::ArrayW<::VROSC::AudioReactive::ShaderEffectData_Effect*,::Array<::VROSC::AudioReactive::ShaderEffectData_Effect*>*>  _effects;

static inline ::VROSC::AudioReactive::ShaderEffectData* New_ctor() ;

constexpr float_t const& __cordl_internal_get__duration() const;

constexpr float_t& __cordl_internal_get__duration() ;

constexpr ::ArrayW<::VROSC::AudioReactive::ShaderEffectData_Effect*,::Array<::VROSC::AudioReactive::ShaderEffectData_Effect*>*> const& __cordl_internal_get__effects() const;

constexpr ::ArrayW<::VROSC::AudioReactive::ShaderEffectData_Effect*,::Array<::VROSC::AudioReactive::ShaderEffectData_Effect*>*>& __cordl_internal_get__effects() ;

constexpr void __cordl_internal_set__duration(float_t  value) ;

constexpr void __cordl_internal_set__effects(::ArrayW<::VROSC::AudioReactive::ShaderEffectData_Effect*,::Array<::VROSC::AudioReactive::ShaderEffectData_Effect*>*>  value) ;

/// @brief Method .ctor, addr 0x17d935c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Duration, addr 0x17d934c, size 0x8, virtual false, abstract: false, final false
inline float_t get_Duration() ;

/// @brief Method get_Effects, addr 0x17d9354, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::VROSC::AudioReactive::ShaderEffectData_Effect*,::Array<::VROSC::AudioReactive::ShaderEffectData_Effect*>*> get_Effects() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderEffectData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderEffectData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderEffectData(ShaderEffectData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderEffectData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderEffectData(ShaderEffectData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1549};

/// @brief Field _duration, offset: 0x18, size: 0x4, def value: None
 float_t  ____duration;

/// @brief Field _effects, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::VROSC::AudioReactive::ShaderEffectData_Effect*,::Array<::VROSC::AudioReactive::ShaderEffectData_Effect*>*>  ____effects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::ShaderEffectData, ____duration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ShaderEffectData, ____effects) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::ShaderEffectData, 0x28>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::Effect_ShaderEffectData_EffectType, "VROSC.AudioReactive", "ShaderEffectData/Effect/EffectType");
NEED_NO_BOX(::VROSC::AudioReactive::ShaderEffectData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ShaderEffectData*, "VROSC.AudioReactive", "ShaderEffectData");
NEED_NO_BOX(::VROSC::AudioReactive::ShaderEffectData_Effect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ShaderEffectData_Effect*, "VROSC.AudioReactive", "ShaderEffectData/Effect");
