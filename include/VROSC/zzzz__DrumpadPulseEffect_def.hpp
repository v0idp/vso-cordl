#pragma once
// IWYU pragma private; include "VROSC/DrumpadPulseEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DrumpadPulseEffect)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace VROSC {
class DrumpadEffect;
}
namespace VROSC {
class DrumpadPulseEffect__PulsateCoroutine_d__8;
}
namespace VROSC {
class MinMaxFloat;
}
// Forward declare root types
namespace VROSC {
class DrumpadPulseEffect;
}
namespace VROSC {
class DrumpadPulseEffect__PulsateCoroutine_d__8;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DrumpadPulseEffect);
MARK_REF_PTR_T(::VROSC::DrumpadPulseEffect__PulsateCoroutine_d__8);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DrumpadPulseEffect/<PulsateCoroutine>d__8
class CORDL_TYPE DrumpadPulseEffect__PulsateCoroutine_d__8 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::DrumpadPulseEffect>  __4__this;

/// @brief Field <fadeOut>5__4, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeOut_5__4, put=__cordl_internal_set__fadeOut_5__4)) float_t  _fadeOut_5__4;

/// @brief Field <fadeSpeed>5__3, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeSpeed_5__3, put=__cordl_internal_set__fadeSpeed_5__3)) float_t  _fadeSpeed_5__3;

/// @brief Field <time>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__2, put=__cordl_internal_set__time_5__2)) float_t  _time_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1726db0, size 0x2d0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::DrumpadPulseEffect__PulsateCoroutine_d__8* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1727080, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1727088, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17270c0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1726dac, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::DrumpadPulseEffect> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::DrumpadPulseEffect>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__fadeOut_5__4() const;

constexpr float_t& __cordl_internal_get__fadeOut_5__4() ;

constexpr float_t const& __cordl_internal_get__fadeSpeed_5__3() const;

constexpr float_t& __cordl_internal_get__fadeSpeed_5__3() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::DrumpadPulseEffect>  value) ;

constexpr void __cordl_internal_set__fadeOut_5__4(float_t  value) ;

constexpr void __cordl_internal_set__fadeSpeed_5__3(float_t  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

/// @brief Method .ctor, addr 0x1726d74, size 0x28, virtual false, abstract: false, final false
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
constexpr DrumpadPulseEffect__PulsateCoroutine_d__8() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrumpadPulseEffect__PulsateCoroutine_d__8", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrumpadPulseEffect__PulsateCoroutine_d__8(DrumpadPulseEffect__PulsateCoroutine_d__8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrumpadPulseEffect__PulsateCoroutine_d__8", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrumpadPulseEffect__PulsateCoroutine_d__8(DrumpadPulseEffect__PulsateCoroutine_d__8 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1023};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::DrumpadPulseEffect>  _____4__this;

/// @brief Field <time>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____time_5__2;

/// @brief Field <fadeSpeed>5__3, offset: 0x2c, size: 0x4, def value: None
 float_t  ____fadeSpeed_5__3;

/// @brief Field <fadeOut>5__4, offset: 0x30, size: 0x4, def value: None
 float_t  ____fadeOut_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DrumpadPulseEffect__PulsateCoroutine_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadPulseEffect__PulsateCoroutine_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadPulseEffect__PulsateCoroutine_d__8, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadPulseEffect__PulsateCoroutine_d__8, ____time_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadPulseEffect__PulsateCoroutine_d__8, ____fadeSpeed_5__3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadPulseEffect__PulsateCoroutine_d__8, ____fadeOut_5__4) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DrumpadPulseEffect__PulsateCoroutine_d__8, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DrumpadPulseEffect
class CORDL_TYPE DrumpadPulseEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _PulsateCoroutine_d__8 = ::VROSC::DrumpadPulseEffect__PulsateCoroutine_d__8;

/// @brief Field _curve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__curve, put=__cordl_internal_set__curve)) ::UnityEngine::AnimationCurve*  _curve;

/// @brief Field _power, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__power, put=__cordl_internal_set__power)) float_t  _power;

/// @brief Field _pulsating, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__pulsating, put=__cordl_internal_set__pulsating)) bool  _pulsating;

/// @brief Field _range, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__range, put=__cordl_internal_set__range)) ::VROSC::MinMaxFloat*  _range;

/// @brief Field _speed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__speed, put=__cordl_internal_set__speed)) float_t  _speed;

/// @brief Field _target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::VROSC::DrumpadEffect>  _target;

static inline ::VROSC::DrumpadPulseEffect* New_ctor() ;

/// @brief Method PulsateCoroutine, addr 0x1726d14, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PulsateCoroutine() ;

/// @brief Method StartPulsating, addr 0x1726a2c, size 0x20, virtual false, abstract: false, final false
inline void StartPulsating() ;

/// @brief Method StopPulsating, addr 0x1726a68, size 0x8, virtual false, abstract: false, final false
inline void StopPulsating() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__curve() ;

constexpr float_t const& __cordl_internal_get__power() const;

constexpr float_t& __cordl_internal_get__power() ;

constexpr bool const& __cordl_internal_get__pulsating() const;

constexpr bool& __cordl_internal_get__pulsating() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__range() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__range() ;

constexpr float_t const& __cordl_internal_get__speed() const;

constexpr float_t& __cordl_internal_get__speed() ;

constexpr ::UnityW<::VROSC::DrumpadEffect> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::VROSC::DrumpadEffect>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__power(float_t  value) ;

constexpr void __cordl_internal_set__pulsating(bool  value) ;

constexpr void __cordl_internal_set__range(::VROSC::MinMaxFloat*  value) ;

constexpr void __cordl_internal_set__speed(float_t  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::VROSC::DrumpadEffect>  value) ;

/// @brief Method .ctor, addr 0x1726d9c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrumpadPulseEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrumpadPulseEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrumpadPulseEffect(DrumpadPulseEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrumpadPulseEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrumpadPulseEffect(DrumpadPulseEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1024};

/// @brief Field _target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::DrumpadEffect>  ____target;

/// @brief Field _range, offset: 0x28, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____range;

/// @brief Field _speed, offset: 0x30, size: 0x4, def value: None
 float_t  ____speed;

/// @brief Field _curve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____curve;

/// @brief Field _power, offset: 0x40, size: 0x4, def value: None
 float_t  ____power;

/// @brief Field _pulsating, offset: 0x44, size: 0x1, def value: None
 bool  ____pulsating;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DrumpadPulseEffect, ____target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadPulseEffect, ____range) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadPulseEffect, ____speed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadPulseEffect, ____curve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadPulseEffect, ____power) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadPulseEffect, ____pulsating) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DrumpadPulseEffect, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DrumpadPulseEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DrumpadPulseEffect*, "VROSC", "DrumpadPulseEffect");
NEED_NO_BOX(::VROSC::DrumpadPulseEffect__PulsateCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DrumpadPulseEffect__PulsateCoroutine_d__8*, "VROSC", "DrumpadPulseEffect/<PulsateCoroutine>d__8");
