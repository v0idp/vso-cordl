#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/ReactToBeat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/AudioReactive/zzzz__AudioReactiveBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReactToBeat)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC::AudioReactive {
class DrumpadEffect;
}
namespace VROSC::AudioReactive {
class EmitParticlesEffect;
}
namespace VROSC::AudioReactive {
class LerpColorEffect;
}
namespace VROSC::AudioReactive {
struct ReactToBeatEffect_ReactToBeat_Type;
}
namespace VROSC::AudioReactive {
class ReactToBeat_ReactToBeatEffect;
}
namespace VROSC::AudioReactive {
class ReactiveEffect;
}
namespace VROSC::AudioReactive {
class RotateEffect;
}
namespace VROSC::AudioReactive {
class ScaleEffect;
}
namespace VROSC::AudioReactive {
class ShaderEffect;
}
namespace VROSC::AudioReactive {
class ShiftColorEffect;
}
namespace VROSC::AudioReactive {
class SlowdownParticlesEffect;
}
namespace VROSC::AudioReactive {
class TransformLerpEffect;
}
namespace VROSC::AudioReactive {
class TranslateEffect;
}
// Forward declare root types
namespace VROSC::AudioReactive {
struct ReactToBeatEffect_ReactToBeat_Type;
}
namespace VROSC::AudioReactive {
class ReactToBeat;
}
namespace VROSC::AudioReactive {
class ReactToBeat_ReactToBeatEffect;
}
// Write type traits
MARK_VAL_T(::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type);
MARK_REF_PTR_T(::VROSC::AudioReactive::ReactToBeat);
MARK_REF_PTR_T(::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect);
// Dependencies 
namespace VROSC::AudioReactive {
// Is value type: true
// CS Name: VROSC.AudioReactive.ReactToBeat/ReactToBeatEffect/Type
struct CORDL_TYPE ReactToBeatEffect_ReactToBeat_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ReactToBeatEffect_ReactToBeat_Type_Unwrapped
enum struct __ReactToBeatEffect_ReactToBeat_Type_Unwrapped : int32_t {
__E_ColorChange = static_cast<int32_t>(0x0),
__E_Rotate = static_cast<int32_t>(0x1),
__E_Translate = static_cast<int32_t>(0x2),
__E_Scale = static_cast<int32_t>(0x3),
__E_Transform = static_cast<int32_t>(0x4),
__E_EmitParticles = static_cast<int32_t>(0x5),
__E_AffectParticleSpeed = static_cast<int32_t>(0x6),
__E_ShaderEffect = static_cast<int32_t>(0x7),
__E_ShiftColor = static_cast<int32_t>(0x8),
__E_DrumpadEffect = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReactToBeatEffect_ReactToBeat_Type_Unwrapped () const noexcept {
return static_cast<__ReactToBeatEffect_ReactToBeat_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ReactToBeatEffect_ReactToBeat_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReactToBeatEffect_ReactToBeat_Type(int32_t  value__) noexcept;

/// @brief Field AffectParticleSpeed value: I32(6)
static ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type const AffectParticleSpeed;

/// @brief Field ColorChange value: I32(0)
static ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type const ColorChange;

/// @brief Field DrumpadEffect value: I32(9)
static ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type const DrumpadEffect;

/// @brief Field EmitParticles value: I32(5)
static ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type const EmitParticles;

/// @brief Field Rotate value: I32(1)
static ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type const Rotate;

/// @brief Field Scale value: I32(3)
static ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type const Scale;

/// @brief Field ShaderEffect value: I32(7)
static ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type const ShaderEffect;

/// @brief Field ShiftColor value: I32(8)
static ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type const ShiftColor;

/// @brief Field Transform value: I32(4)
static ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type const Transform;

/// @brief Field Translate value: I32(2)
static ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type const Translate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1567};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type, 0x4>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies System.Object, VROSC.AudioReactive.ReactToBeat::ReactToBeatEffect::Type
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.ReactToBeat/ReactToBeatEffect
class CORDL_TYPE ReactToBeat_ReactToBeatEffect : public ::System::Object {
public:
// Declarations
using Type = ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type;

 __declspec(property(get=get_Effect)) ::VROSC::AudioReactive::ReactiveEffect*  Effect;

/// @brief Field _colorEffect, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorEffect, put=__cordl_internal_set__colorEffect)) ::VROSC::AudioReactive::LerpColorEffect*  _colorEffect;

/// @brief Field _drumpadEffect, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__drumpadEffect, put=__cordl_internal_set__drumpadEffect)) ::VROSC::AudioReactive::DrumpadEffect*  _drumpadEffect;

/// @brief Field _emitParticlesEffect, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__emitParticlesEffect, put=__cordl_internal_set__emitParticlesEffect)) ::VROSC::AudioReactive::EmitParticlesEffect*  _emitParticlesEffect;

/// @brief Field _rotateEffect, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotateEffect, put=__cordl_internal_set__rotateEffect)) ::VROSC::AudioReactive::RotateEffect*  _rotateEffect;

/// @brief Field _scaleEffect, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaleEffect, put=__cordl_internal_set__scaleEffect)) ::VROSC::AudioReactive::ScaleEffect*  _scaleEffect;

/// @brief Field _shaderEffect, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__shaderEffect, put=__cordl_internal_set__shaderEffect)) ::VROSC::AudioReactive::ShaderEffect*  _shaderEffect;

/// @brief Field _shiftColorEffect, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__shiftColorEffect, put=__cordl_internal_set__shiftColorEffect)) ::VROSC::AudioReactive::ShiftColorEffect*  _shiftColorEffect;

/// @brief Field _slowdownParticlesEffect, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__slowdownParticlesEffect, put=__cordl_internal_set__slowdownParticlesEffect)) ::VROSC::AudioReactive::SlowdownParticlesEffect*  _slowdownParticlesEffect;

/// @brief Field _transformEffect, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformEffect, put=__cordl_internal_set__transformEffect)) ::VROSC::AudioReactive::TransformLerpEffect*  _transformEffect;

/// @brief Field _translateEffect, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__translateEffect, put=__cordl_internal_set__translateEffect)) ::VROSC::AudioReactive::TranslateEffect*  _translateEffect;

/// @brief Field _type, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__type, put=__cordl_internal_set__type)) ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type  _type;

/// @brief Method GetEffectByType, addr 0x17db9d0, size 0x80, virtual false, abstract: false, final false
inline ::VROSC::AudioReactive::ReactiveEffect* GetEffectByType() ;

static inline ::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect* New_ctor(::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type  type) ;

constexpr ::VROSC::AudioReactive::LerpColorEffect* const& __cordl_internal_get__colorEffect() const;

constexpr ::VROSC::AudioReactive::LerpColorEffect*& __cordl_internal_get__colorEffect() ;

constexpr ::VROSC::AudioReactive::DrumpadEffect* const& __cordl_internal_get__drumpadEffect() const;

constexpr ::VROSC::AudioReactive::DrumpadEffect*& __cordl_internal_get__drumpadEffect() ;

constexpr ::VROSC::AudioReactive::EmitParticlesEffect* const& __cordl_internal_get__emitParticlesEffect() const;

constexpr ::VROSC::AudioReactive::EmitParticlesEffect*& __cordl_internal_get__emitParticlesEffect() ;

constexpr ::VROSC::AudioReactive::RotateEffect* const& __cordl_internal_get__rotateEffect() const;

constexpr ::VROSC::AudioReactive::RotateEffect*& __cordl_internal_get__rotateEffect() ;

constexpr ::VROSC::AudioReactive::ScaleEffect* const& __cordl_internal_get__scaleEffect() const;

constexpr ::VROSC::AudioReactive::ScaleEffect*& __cordl_internal_get__scaleEffect() ;

constexpr ::VROSC::AudioReactive::ShaderEffect* const& __cordl_internal_get__shaderEffect() const;

constexpr ::VROSC::AudioReactive::ShaderEffect*& __cordl_internal_get__shaderEffect() ;

constexpr ::VROSC::AudioReactive::ShiftColorEffect* const& __cordl_internal_get__shiftColorEffect() const;

constexpr ::VROSC::AudioReactive::ShiftColorEffect*& __cordl_internal_get__shiftColorEffect() ;

constexpr ::VROSC::AudioReactive::SlowdownParticlesEffect* const& __cordl_internal_get__slowdownParticlesEffect() const;

constexpr ::VROSC::AudioReactive::SlowdownParticlesEffect*& __cordl_internal_get__slowdownParticlesEffect() ;

constexpr ::VROSC::AudioReactive::TransformLerpEffect* const& __cordl_internal_get__transformEffect() const;

constexpr ::VROSC::AudioReactive::TransformLerpEffect*& __cordl_internal_get__transformEffect() ;

constexpr ::VROSC::AudioReactive::TranslateEffect* const& __cordl_internal_get__translateEffect() const;

constexpr ::VROSC::AudioReactive::TranslateEffect*& __cordl_internal_get__translateEffect() ;

constexpr ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type const& __cordl_internal_get__type() const;

constexpr ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type& __cordl_internal_get__type() ;

constexpr void __cordl_internal_set__colorEffect(::VROSC::AudioReactive::LerpColorEffect*  value) ;

constexpr void __cordl_internal_set__drumpadEffect(::VROSC::AudioReactive::DrumpadEffect*  value) ;

constexpr void __cordl_internal_set__emitParticlesEffect(::VROSC::AudioReactive::EmitParticlesEffect*  value) ;

constexpr void __cordl_internal_set__rotateEffect(::VROSC::AudioReactive::RotateEffect*  value) ;

constexpr void __cordl_internal_set__scaleEffect(::VROSC::AudioReactive::ScaleEffect*  value) ;

constexpr void __cordl_internal_set__shaderEffect(::VROSC::AudioReactive::ShaderEffect*  value) ;

constexpr void __cordl_internal_set__shiftColorEffect(::VROSC::AudioReactive::ShiftColorEffect*  value) ;

constexpr void __cordl_internal_set__slowdownParticlesEffect(::VROSC::AudioReactive::SlowdownParticlesEffect*  value) ;

constexpr void __cordl_internal_set__transformEffect(::VROSC::AudioReactive::TransformLerpEffect*  value) ;

constexpr void __cordl_internal_set__translateEffect(::VROSC::AudioReactive::TranslateEffect*  value) ;

constexpr void __cordl_internal_set__type(::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type  value) ;

/// @brief Method .ctor, addr 0x17db538, size 0x250, virtual false, abstract: false, final false
inline void _ctor(::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type  type) ;

/// @brief Method get_Effect, addr 0x17db198, size 0x4, virtual false, abstract: false, final false
inline ::VROSC::AudioReactive::ReactiveEffect* get_Effect() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReactToBeat_ReactToBeatEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReactToBeat_ReactToBeatEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReactToBeat_ReactToBeatEffect(ReactToBeat_ReactToBeatEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReactToBeat_ReactToBeatEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReactToBeat_ReactToBeatEffect(ReactToBeat_ReactToBeatEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1568};

/// @brief Field _colorEffect, offset: 0x10, size: 0x8, def value: None
 ::VROSC::AudioReactive::LerpColorEffect*  ____colorEffect;

/// @brief Field _rotateEffect, offset: 0x18, size: 0x8, def value: None
 ::VROSC::AudioReactive::RotateEffect*  ____rotateEffect;

/// @brief Field _translateEffect, offset: 0x20, size: 0x8, def value: None
 ::VROSC::AudioReactive::TranslateEffect*  ____translateEffect;

/// @brief Field _scaleEffect, offset: 0x28, size: 0x8, def value: None
 ::VROSC::AudioReactive::ScaleEffect*  ____scaleEffect;

/// @brief Field _transformEffect, offset: 0x30, size: 0x8, def value: None
 ::VROSC::AudioReactive::TransformLerpEffect*  ____transformEffect;

/// @brief Field _emitParticlesEffect, offset: 0x38, size: 0x8, def value: None
 ::VROSC::AudioReactive::EmitParticlesEffect*  ____emitParticlesEffect;

/// @brief Field _slowdownParticlesEffect, offset: 0x40, size: 0x8, def value: None
 ::VROSC::AudioReactive::SlowdownParticlesEffect*  ____slowdownParticlesEffect;

/// @brief Field _shaderEffect, offset: 0x48, size: 0x8, def value: None
 ::VROSC::AudioReactive::ShaderEffect*  ____shaderEffect;

/// @brief Field _shiftColorEffect, offset: 0x50, size: 0x8, def value: None
 ::VROSC::AudioReactive::ShiftColorEffect*  ____shiftColorEffect;

/// @brief Field _drumpadEffect, offset: 0x58, size: 0x8, def value: None
 ::VROSC::AudioReactive::DrumpadEffect*  ____drumpadEffect;

/// @brief Field _type, offset: 0x60, size: 0x4, def value: None
 ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type  ____type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect, ____colorEffect) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect, ____rotateEffect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect, ____translateEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect, ____scaleEffect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect, ____transformEffect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect, ____emitParticlesEffect) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect, ____slowdownParticlesEffect) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect, ____shaderEffect) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect, ____shiftColorEffect) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect, ____drumpadEffect) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect, ____type) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect, 0x68>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies VROSC.AudioReactive.AudioReactiveBehaviour
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.ReactToBeat
class CORDL_TYPE ReactToBeat : public ::VROSC::AudioReactive::AudioReactiveBehaviour {
public:
// Declarations
using ReactToBeatEffect = ::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect;

/// @brief Field _effects, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__effects, put=__cordl_internal_set__effects)) ::System::Collections::Generic::List_1<::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect*>*  _effects;

/// @brief Field _showGuides, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__showGuides, put=__cordl_internal_set__showGuides)) bool  _showGuides;

/// @brief Method AddEffect, addr 0x17db45c, size 0xdc, virtual false, abstract: false, final false
inline void AddEffect(::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type  type) ;

/// @brief Method Awake, addr 0x17db034, size 0x164, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::AudioReactive::ReactToBeat* New_ctor() ;

/// @brief Method OnBeat, addr 0x17db2fc, size 0x160, virtual true, abstract: false, final false
inline void OnBeat(int32_t  beat) ;

/// @brief Method OnDrawGizmos, addr 0x17db788, size 0x1cc, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method Update, addr 0x17db19c, size 0x160, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect*>* const& __cordl_internal_get__effects() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect*>*& __cordl_internal_get__effects() ;

constexpr bool const& __cordl_internal_get__showGuides() const;

constexpr bool& __cordl_internal_get__showGuides() ;

constexpr void __cordl_internal_set__effects(::System::Collections::Generic::List_1<::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect*>*  value) ;

constexpr void __cordl_internal_set__showGuides(bool  value) ;

/// @brief Method .ctor, addr 0x17db954, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReactToBeat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReactToBeat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReactToBeat(ReactToBeat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReactToBeat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReactToBeat(ReactToBeat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1569};

/// @brief Field _effects, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect*>*  ____effects;

/// @brief Field _showGuides, offset: 0x38, size: 0x1, def value: None
 bool  ____showGuides;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::ReactToBeat, ____effects) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::ReactToBeat, ____showGuides) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::ReactToBeat, 0x40>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type, "VROSC.AudioReactive", "ReactToBeat/ReactToBeatEffect/Type");
NEED_NO_BOX(::VROSC::AudioReactive::ReactToBeat);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ReactToBeat*, "VROSC.AudioReactive", "ReactToBeat");
NEED_NO_BOX(::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect*, "VROSC.AudioReactive", "ReactToBeat/ReactToBeatEffect");
