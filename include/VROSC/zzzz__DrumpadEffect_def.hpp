#pragma once
// IWYU pragma private; include "VROSC/DrumpadEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DrumpadEffect)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class DrumpadEffect__ActivateFlow_d__19;
}
namespace VROSC {
class MinMaxInt;
}
// Forward declare root types
namespace VROSC {
class DrumpadEffect;
}
namespace VROSC {
class DrumpadEffect__ActivateFlow_d__19;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DrumpadEffect);
MARK_REF_PTR_T(::VROSC::DrumpadEffect__ActivateFlow_d__19);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DrumpadEffect/<ActivateFlow>d__19
class CORDL_TYPE DrumpadEffect__ActivateFlow_d__19 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::DrumpadEffect>  __4__this;

/// @brief Field <time>5__2, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__2, put=__cordl_internal_set__time_5__2)) float_t  _time_5__2;

/// @brief Field power, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_power, put=__cordl_internal_set_power)) float_t  power;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17267b0, size 0x13c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::DrumpadEffect__ActivateFlow_d__19* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17268ec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17268f4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x172692c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17267ac, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::DrumpadEffect> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::DrumpadEffect>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr float_t const& __cordl_internal_get_power() const;

constexpr float_t& __cordl_internal_get_power() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::DrumpadEffect>  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

constexpr void __cordl_internal_set_power(float_t  value) ;

/// @brief Method .ctor, addr 0x17265f4, size 0x28, virtual false, abstract: false, final false
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
constexpr DrumpadEffect__ActivateFlow_d__19() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrumpadEffect__ActivateFlow_d__19", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrumpadEffect__ActivateFlow_d__19(DrumpadEffect__ActivateFlow_d__19 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrumpadEffect__ActivateFlow_d__19", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrumpadEffect__ActivateFlow_d__19(DrumpadEffect__ActivateFlow_d__19 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1019};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::DrumpadEffect>  _____4__this;

/// @brief Field power, offset: 0x28, size: 0x4, def value: None
 float_t  ___power;

/// @brief Field <time>5__2, offset: 0x2c, size: 0x4, def value: None
 float_t  ____time_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DrumpadEffect__ActivateFlow_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadEffect__ActivateFlow_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadEffect__ActivateFlow_d__19, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadEffect__ActivateFlow_d__19, ___power) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadEffect__ActivateFlow_d__19, ____time_5__2) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DrumpadEffect__ActivateFlow_d__19, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DrumpadEffect
class CORDL_TYPE DrumpadEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _ActivateFlow_d__19 = ::VROSC::DrumpadEffect__ActivateFlow_d__19;

 __declspec(property(get=get_Color)) ::UnityEngine::Color  Color;

/// @brief Field _color, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) ::UnityEngine::Color  _color;

/// @brief Field _duration, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__duration, put=__cordl_internal_set__duration)) float_t  _duration;

/// @brief Field _effectRenderers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__effectRenderers, put=__cordl_internal_set__effectRenderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*>  _effectRenderers;

/// @brief Field _effectScaledByPower, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__effectScaledByPower, put=__cordl_internal_set__effectScaledByPower)) bool  _effectScaledByPower;

/// @brief Field _padRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__padRenderer, put=__cordl_internal_set__padRenderer)) ::UnityW<::UnityEngine::Renderer>  _padRenderer;

/// @brief Field _particleAmount, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__particleAmount, put=__cordl_internal_set__particleAmount)) ::VROSC::MinMaxInt*  _particleAmount;

/// @brief Field _particleSystem, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__particleSystem, put=__cordl_internal_set__particleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  _particleSystem;

/// @brief Field _powerCurve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__powerCurve, put=__cordl_internal_set__powerCurve)) ::UnityEngine::AnimationCurve*  _powerCurve;

/// @brief Field _preview, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__preview, put=__cordl_internal_set__preview)) bool  _preview;

/// @brief Field _previewColor, offset 0x64, size 0x10 
 __declspec(property(get=__cordl_internal_get__previewColor, put=__cordl_internal_set__previewColor)) ::UnityEngine::Color  _previewColor;

/// @brief Field _previewTiming, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__previewTiming, put=__cordl_internal_set__previewTiming)) float_t  _previewTiming;

/// @brief Field _propBlock, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__propBlock, put=__cordl_internal_set__propBlock)) ::UnityEngine::MaterialPropertyBlock*  _propBlock;

/// @brief Field _scaleCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaleCurve, put=__cordl_internal_set__scaleCurve)) ::UnityEngine::AnimationCurve*  _scaleCurve;

/// @brief Field _scalingTransform, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__scalingTransform, put=__cordl_internal_set__scalingTransform)) ::UnityW<::UnityEngine::Transform>  _scalingTransform;

/// @brief Method Activate, addr 0x17264b4, size 0xd0, virtual false, abstract: false, final false
inline void Activate(float_t  power) ;

/// @brief Method ActivateFlow, addr 0x1726584, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ActivateFlow(float_t  power) ;

/// @brief Method CreatePropBlock, addr 0x1726744, size 0x60, virtual false, abstract: false, final false
inline void CreatePropBlock() ;

/// @brief Method DisplayEffectForTime, addr 0x172661c, size 0x128, virtual false, abstract: false, final false
inline void DisplayEffectForTime(float_t  time, float_t  scalepower, ::UnityEngine::Color  color) ;

static inline ::VROSC::DrumpadEffect* New_ctor() ;

/// @brief Method OnEnable, addr 0x1726130, size 0x18, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetColor, addr 0x1726300, size 0x120, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color, bool  affectVisual) ;

/// @brief Method SetEffectOnShader, addr 0x1726148, size 0x1b8, virtual false, abstract: false, final false
inline void SetEffectOnShader(float_t  timing, float_t  power, ::UnityEngine::Color  color, bool  hit) ;

/// @brief Method SetOuterActive, addr 0x1726420, size 0x94, virtual false, abstract: false, final false
inline void SetOuterActive(bool  active) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__color() ;

constexpr float_t const& __cordl_internal_get__duration() const;

constexpr float_t& __cordl_internal_get__duration() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*> const& __cordl_internal_get__effectRenderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*>& __cordl_internal_get__effectRenderers() ;

constexpr bool const& __cordl_internal_get__effectScaledByPower() const;

constexpr bool& __cordl_internal_get__effectScaledByPower() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__padRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__padRenderer() ;

constexpr ::VROSC::MinMaxInt* const& __cordl_internal_get__particleAmount() const;

constexpr ::VROSC::MinMaxInt*& __cordl_internal_get__particleAmount() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particleSystem() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__powerCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__powerCurve() ;

constexpr bool const& __cordl_internal_get__preview() const;

constexpr bool& __cordl_internal_get__preview() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__previewColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__previewColor() ;

constexpr float_t const& __cordl_internal_get__previewTiming() const;

constexpr float_t& __cordl_internal_get__previewTiming() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__propBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__propBlock() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__scaleCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__scaleCurve() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__scalingTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__scalingTransform() ;

constexpr void __cordl_internal_set__color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__duration(float_t  value) ;

constexpr void __cordl_internal_set__effectRenderers(::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*>  value) ;

constexpr void __cordl_internal_set__effectScaledByPower(bool  value) ;

constexpr void __cordl_internal_set__padRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__particleAmount(::VROSC::MinMaxInt*  value) ;

constexpr void __cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set__powerCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__preview(bool  value) ;

constexpr void __cordl_internal_set__previewColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__previewTiming(float_t  value) ;

constexpr void __cordl_internal_set__propBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__scaleCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__scalingTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x17267a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Color, addr 0x1726124, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Color() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrumpadEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrumpadEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrumpadEffect(DrumpadEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrumpadEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrumpadEffect(DrumpadEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1020};

/// @brief Field _padRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____padRenderer;

/// @brief Field _effectRenderers, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*>  ____effectRenderers;

/// @brief Field _effectScaledByPower, offset: 0x30, size: 0x1, def value: None
 bool  ____effectScaledByPower;

/// @brief Field _duration, offset: 0x34, size: 0x4, def value: None
 float_t  ____duration;

/// @brief Field _powerCurve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____powerCurve;

/// @brief Field _scaleCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____scaleCurve;

/// @brief Field _scalingTransform, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____scalingTransform;

/// @brief Field _particleSystem, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ____particleSystem;

/// @brief Field _particleAmount, offset: 0x58, size: 0x8, def value: None
 ::VROSC::MinMaxInt*  ____particleAmount;

/// @brief Field _preview, offset: 0x60, size: 0x1, def value: None
 bool  ____preview;

/// @brief Field _previewColor, offset: 0x64, size: 0x10, def value: None
 ::UnityEngine::Color  ____previewColor;

/// @brief Field _previewTiming, offset: 0x74, size: 0x4, def value: None
 float_t  ____previewTiming;

/// @brief Field _color, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Color  ____color;

/// @brief Field _propBlock, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____propBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DrumpadEffect, ____padRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadEffect, ____effectRenderers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadEffect, ____effectScaledByPower) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadEffect, ____duration) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadEffect, ____powerCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadEffect, ____scaleCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadEffect, ____scalingTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadEffect, ____particleSystem) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadEffect, ____particleAmount) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadEffect, ____preview) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadEffect, ____previewColor) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadEffect, ____previewTiming) == 0x74, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadEffect, ____color) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadEffect, ____propBlock) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DrumpadEffect, 0x90>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DrumpadEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DrumpadEffect*, "VROSC", "DrumpadEffect");
NEED_NO_BOX(::VROSC::DrumpadEffect__ActivateFlow_d__19);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DrumpadEffect__ActivateFlow_d__19*, "VROSC", "DrumpadEffect/<ActivateFlow>d__19");
