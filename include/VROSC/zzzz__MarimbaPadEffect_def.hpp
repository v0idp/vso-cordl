#pragma once
// IWYU pragma private; include "VROSC/MarimbaPadEffect.hpp"
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
CORDL_MODULE_EXPORT(MarimbaPadEffect)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC {
class DrumpadEffect;
}
namespace VROSC {
class DrumpadPulseEffect;
}
namespace VROSC {
class MarimbaPadEffect__PlayEffect_d__7;
}
// Forward declare root types
namespace VROSC {
class MarimbaPadEffect;
}
namespace VROSC {
class MarimbaPadEffect__PlayEffect_d__7;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MarimbaPadEffect);
MARK_REF_PTR_T(::VROSC::MarimbaPadEffect__PlayEffect_d__7);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MarimbaPadEffect/<PlayEffect>d__7
class CORDL_TYPE MarimbaPadEffect__PlayEffect_d__7 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::MarimbaPadEffect>  __4__this;

/// @brief Field <inwards>5__3, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__inwards_5__3, put=__cordl_internal_set__inwards_5__3)) bool  _inwards_5__3;

/// @brief Field <position>5__2, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__position_5__2, put=__cordl_internal_set__position_5__2)) float_t  _position_5__2;

/// @brief Field <pulsePositionScaling>5__4, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__pulsePositionScaling_5__4, put=__cordl_internal_set__pulsePositionScaling_5__4)) float_t  _pulsePositionScaling_5__4;

/// @brief Field power, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_power, put=__cordl_internal_set_power)) float_t  power;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1728168, size 0x244, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::MarimbaPadEffect__PlayEffect_d__7* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17283ac, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17283b4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17283ec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1728164, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::MarimbaPadEffect> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::MarimbaPadEffect>& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get__inwards_5__3() const;

constexpr bool& __cordl_internal_get__inwards_5__3() ;

constexpr float_t const& __cordl_internal_get__position_5__2() const;

constexpr float_t& __cordl_internal_get__position_5__2() ;

constexpr float_t const& __cordl_internal_get__pulsePositionScaling_5__4() const;

constexpr float_t& __cordl_internal_get__pulsePositionScaling_5__4() ;

constexpr float_t const& __cordl_internal_get_power() const;

constexpr float_t& __cordl_internal_get_power() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::MarimbaPadEffect>  value) ;

constexpr void __cordl_internal_set__inwards_5__3(bool  value) ;

constexpr void __cordl_internal_set__position_5__2(float_t  value) ;

constexpr void __cordl_internal_set__pulsePositionScaling_5__4(float_t  value) ;

constexpr void __cordl_internal_set_power(float_t  value) ;

/// @brief Method .ctor, addr 0x17280c4, size 0x28, virtual false, abstract: false, final false
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
constexpr MarimbaPadEffect__PlayEffect_d__7() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MarimbaPadEffect__PlayEffect_d__7", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MarimbaPadEffect__PlayEffect_d__7(MarimbaPadEffect__PlayEffect_d__7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MarimbaPadEffect__PlayEffect_d__7", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MarimbaPadEffect__PlayEffect_d__7(MarimbaPadEffect__PlayEffect_d__7 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1031};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::MarimbaPadEffect>  _____4__this;

/// @brief Field power, offset: 0x28, size: 0x4, def value: None
 float_t  ___power;

/// @brief Field <position>5__2, offset: 0x2c, size: 0x4, def value: None
 float_t  ____position_5__2;

/// @brief Field <inwards>5__3, offset: 0x30, size: 0x1, def value: None
 bool  ____inwards_5__3;

/// @brief Field <pulsePositionScaling>5__4, offset: 0x34, size: 0x4, def value: None
 float_t  ____pulsePositionScaling_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MarimbaPadEffect__PlayEffect_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPadEffect__PlayEffect_d__7, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPadEffect__PlayEffect_d__7, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPadEffect__PlayEffect_d__7, ___power) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPadEffect__PlayEffect_d__7, ____position_5__2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPadEffect__PlayEffect_d__7, ____inwards_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPadEffect__PlayEffect_d__7, ____pulsePositionScaling_5__4) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MarimbaPadEffect__PlayEffect_d__7, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MarimbaPadEffect
class CORDL_TYPE MarimbaPadEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _PlayEffect_d__7 = ::VROSC::MarimbaPadEffect__PlayEffect_d__7;

/// @brief Field _effectDuration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__effectDuration, put=__cordl_internal_set__effectDuration)) float_t  _effectDuration;

/// @brief Field _powerMultiplier, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__powerMultiplier, put=__cordl_internal_set__powerMultiplier)) float_t  _powerMultiplier;

/// @brief Field _pulseEffect, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__pulseEffect, put=__cordl_internal_set__pulseEffect)) ::UnityW<::VROSC::DrumpadPulseEffect>  _pulseEffect;

/// @brief Field _sustaining, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__sustaining, put=__cordl_internal_set__sustaining)) bool  _sustaining;

/// @brief Field _target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::VROSC::DrumpadEffect>  _target;

static inline ::VROSC::MarimbaPadEffect* New_ctor() ;

/// @brief Method PlayEffect, addr 0x172804c, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PlayEffect(float_t  power) ;

/// @brief Method SetColor, addr 0x1728134, size 0x1c, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method StartEffect, addr 0x1728008, size 0x44, virtual false, abstract: false, final false
inline void StartEffect(float_t  power) ;

/// @brief Method StartPulsating, addr 0x17280ec, size 0x2c, virtual false, abstract: false, final false
inline void StartPulsating() ;

/// @brief Method StopEffect, addr 0x17280bc, size 0x8, virtual false, abstract: false, final false
inline void StopEffect() ;

/// @brief Method StopPulsating, addr 0x1728118, size 0x1c, virtual false, abstract: false, final false
inline void StopPulsating() ;

constexpr float_t const& __cordl_internal_get__effectDuration() const;

constexpr float_t& __cordl_internal_get__effectDuration() ;

constexpr float_t const& __cordl_internal_get__powerMultiplier() const;

constexpr float_t& __cordl_internal_get__powerMultiplier() ;

constexpr ::UnityW<::VROSC::DrumpadPulseEffect> const& __cordl_internal_get__pulseEffect() const;

constexpr ::UnityW<::VROSC::DrumpadPulseEffect>& __cordl_internal_get__pulseEffect() ;

constexpr bool const& __cordl_internal_get__sustaining() const;

constexpr bool& __cordl_internal_get__sustaining() ;

constexpr ::UnityW<::VROSC::DrumpadEffect> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::VROSC::DrumpadEffect>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__effectDuration(float_t  value) ;

constexpr void __cordl_internal_set__powerMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__pulseEffect(::UnityW<::VROSC::DrumpadPulseEffect>  value) ;

constexpr void __cordl_internal_set__sustaining(bool  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::VROSC::DrumpadEffect>  value) ;

/// @brief Method .ctor, addr 0x1728150, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MarimbaPadEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MarimbaPadEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MarimbaPadEffect(MarimbaPadEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MarimbaPadEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MarimbaPadEffect(MarimbaPadEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1032};

/// @brief Field _target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::DrumpadEffect>  ____target;

/// @brief Field _pulseEffect, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::DrumpadPulseEffect>  ____pulseEffect;

/// @brief Field _effectDuration, offset: 0x30, size: 0x4, def value: None
 float_t  ____effectDuration;

/// @brief Field _powerMultiplier, offset: 0x34, size: 0x4, def value: None
 float_t  ____powerMultiplier;

/// @brief Field _sustaining, offset: 0x38, size: 0x1, def value: None
 bool  ____sustaining;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MarimbaPadEffect, ____target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPadEffect, ____pulseEffect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPadEffect, ____effectDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPadEffect, ____powerMultiplier) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPadEffect, ____sustaining) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MarimbaPadEffect, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MarimbaPadEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MarimbaPadEffect*, "VROSC", "MarimbaPadEffect");
NEED_NO_BOX(::VROSC::MarimbaPadEffect__PlayEffect_d__7);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MarimbaPadEffect__PlayEffect_d__7*, "VROSC", "MarimbaPadEffect/<PlayEffect>d__7");
