#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/GlobalDrumOnBeat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/AudioReactive/zzzz__AudioReactiveBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalDrumOnBeat)
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
namespace VROSC::AudioReactive {
class ChangeColorEffectData;
}
namespace VROSC::AudioReactive {
class GlobalDrumOnBeat__AnimateTiming_d__13;
}
namespace VROSC::AudioReactive {
class GlobalDrumOnBeat__ChangeColor_d__12;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class GlobalDrumOnBeat;
}
namespace VROSC::AudioReactive {
class GlobalDrumOnBeat__AnimateTiming_d__13;
}
namespace VROSC::AudioReactive {
class GlobalDrumOnBeat__ChangeColor_d__12;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::GlobalDrumOnBeat);
MARK_REF_PTR_T(::VROSC::AudioReactive::GlobalDrumOnBeat__AnimateTiming_d__13);
MARK_REF_PTR_T(::VROSC::AudioReactive::GlobalDrumOnBeat__ChangeColor_d__12);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.GlobalDrumOnBeat/<AnimateTiming>d__13
class CORDL_TYPE GlobalDrumOnBeat__AnimateTiming_d__13 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::AudioReactive::GlobalDrumOnBeat>  __4__this;

/// @brief Field <time>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__2, put=__cordl_internal_set__time_5__2)) float_t  _time_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17dac04, size 0xb0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::AudioReactive::GlobalDrumOnBeat__AnimateTiming_d__13* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17dacb4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17dacbc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17dacf4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17dac00, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::AudioReactive::GlobalDrumOnBeat> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::AudioReactive::GlobalDrumOnBeat>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::AudioReactive::GlobalDrumOnBeat>  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

/// @brief Method .ctor, addr 0x17dabc8, size 0x28, virtual false, abstract: false, final false
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
constexpr GlobalDrumOnBeat__AnimateTiming_d__13() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalDrumOnBeat__AnimateTiming_d__13", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalDrumOnBeat__AnimateTiming_d__13(GlobalDrumOnBeat__AnimateTiming_d__13 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalDrumOnBeat__AnimateTiming_d__13", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalDrumOnBeat__AnimateTiming_d__13(GlobalDrumOnBeat__AnimateTiming_d__13 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1563};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::AudioReactive::GlobalDrumOnBeat>  _____4__this;

/// @brief Field <time>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____time_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::GlobalDrumOnBeat__AnimateTiming_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalDrumOnBeat__AnimateTiming_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalDrumOnBeat__AnimateTiming_d__13, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalDrumOnBeat__AnimateTiming_d__13, ____time_5__2) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::GlobalDrumOnBeat__AnimateTiming_d__13, 0x30>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Color
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.GlobalDrumOnBeat/<ChangeColor>d__12
class CORDL_TYPE GlobalDrumOnBeat__ChangeColor_d__12 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::AudioReactive::GlobalDrumOnBeat>  __4__this;

/// @brief Field <endColor>5__4, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get__endColor_5__4, put=__cordl_internal_set__endColor_5__4)) ::UnityEngine::Color  _endColor_5__4;

/// @brief Field <startColor>5__3, offset 0x2c, size 0x10 
 __declspec(property(get=__cordl_internal_get__startColor_5__3, put=__cordl_internal_set__startColor_5__3)) ::UnityEngine::Color  _startColor_5__3;

/// @brief Field <time>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__2, put=__cordl_internal_set__time_5__2)) float_t  _time_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17dad00, size 0x108, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::AudioReactive::GlobalDrumOnBeat__ChangeColor_d__12* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17dae08, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17dae10, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17dae48, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17dacfc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::AudioReactive::GlobalDrumOnBeat> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::AudioReactive::GlobalDrumOnBeat>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__endColor_5__4() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__endColor_5__4() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__startColor_5__3() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__startColor_5__3() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::AudioReactive::GlobalDrumOnBeat>  value) ;

constexpr void __cordl_internal_set__endColor_5__4(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__startColor_5__3(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

/// @brief Method .ctor, addr 0x17daba0, size 0x28, virtual false, abstract: false, final false
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
constexpr GlobalDrumOnBeat__ChangeColor_d__12() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalDrumOnBeat__ChangeColor_d__12", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalDrumOnBeat__ChangeColor_d__12(GlobalDrumOnBeat__ChangeColor_d__12 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalDrumOnBeat__ChangeColor_d__12", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalDrumOnBeat__ChangeColor_d__12(GlobalDrumOnBeat__ChangeColor_d__12 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1564};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::AudioReactive::GlobalDrumOnBeat>  _____4__this;

/// @brief Field <time>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____time_5__2;

/// @brief Field <startColor>5__3, offset: 0x2c, size: 0x10, def value: None
 ::UnityEngine::Color  ____startColor_5__3;

/// @brief Field <endColor>5__4, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Color  ____endColor_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::GlobalDrumOnBeat__ChangeColor_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalDrumOnBeat__ChangeColor_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalDrumOnBeat__ChangeColor_d__12, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalDrumOnBeat__ChangeColor_d__12, ____time_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalDrumOnBeat__ChangeColor_d__12, ____startColor_5__3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalDrumOnBeat__ChangeColor_d__12, ____endColor_5__4) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::GlobalDrumOnBeat__ChangeColor_d__12, 0x50>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies UnityEngine.Color, VROSC.AudioReactive.AudioReactiveBehaviour
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.GlobalDrumOnBeat
class CORDL_TYPE GlobalDrumOnBeat : public ::VROSC::AudioReactive::AudioReactiveBehaviour {
public:
// Declarations
using _AnimateTiming_d__13 = ::VROSC::AudioReactive::GlobalDrumOnBeat__AnimateTiming_d__13;

using _ChangeColor_d__12 = ::VROSC::AudioReactive::GlobalDrumOnBeat__ChangeColor_d__12;

/// @brief Field _active, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__active, put=__cordl_internal_set__active)) bool  _active;

/// @brief Field _currentColor, offset 0x4c, size 0x10 
 __declspec(property(get=__cordl_internal_get__currentColor, put=__cordl_internal_set__currentColor)) ::UnityEngine::Color  _currentColor;

/// @brief Field _currentInt, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentInt, put=__cordl_internal_set__currentInt)) int32_t  _currentInt;

/// @brief Field _data, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::VROSC::AudioReactive::ChangeColorEffectData>  _data;

/// @brief Field _pingPongDirection, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__pingPongDirection, put=__cordl_internal_set__pingPongDirection)) int32_t  _pingPongDirection;

/// @brief Field _powerCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__powerCurve, put=__cordl_internal_set__powerCurve)) ::UnityEngine::AnimationCurve*  _powerCurve;

/// @brief Field _timeIfBPM0, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeIfBPM0, put=__cordl_internal_set__timeIfBPM0)) float_t  _timeIfBPM0;

/// @brief Method AnimateTiming, addr 0x17dab40, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* AnimateTiming() ;

/// @brief Method ChangeColor, addr 0x17daae0, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ChangeColor() ;

/// @brief Method GetNewColor, addr 0x17da614, size 0x260, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetNewColor() ;

static inline ::VROSC::AudioReactive::GlobalDrumOnBeat* New_ctor() ;

/// @brief Method OnBeat, addr 0x17daa48, size 0x98, virtual true, abstract: false, final false
inline void OnBeat(int32_t  beat) ;

/// @brief Method OnEnable, addr 0x17da5c4, size 0x50, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetDrumcolor, addr 0x17da874, size 0x74, virtual false, abstract: false, final false
inline void SetDrumcolor(::UnityEngine::Color  color) ;

/// @brief Method Update, addr 0x17da978, size 0xd0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateDrums, addr 0x17da8e8, size 0x90, virtual false, abstract: false, final false
inline void UpdateDrums(float_t  timing) ;

constexpr bool const& __cordl_internal_get__active() const;

constexpr bool& __cordl_internal_get__active() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__currentColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__currentColor() ;

constexpr int32_t const& __cordl_internal_get__currentInt() const;

constexpr int32_t& __cordl_internal_get__currentInt() ;

constexpr ::UnityW<::VROSC::AudioReactive::ChangeColorEffectData> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::VROSC::AudioReactive::ChangeColorEffectData>& __cordl_internal_get__data() ;

constexpr int32_t const& __cordl_internal_get__pingPongDirection() const;

constexpr int32_t& __cordl_internal_get__pingPongDirection() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__powerCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__powerCurve() ;

constexpr float_t const& __cordl_internal_get__timeIfBPM0() const;

constexpr float_t& __cordl_internal_get__timeIfBPM0() ;

constexpr void __cordl_internal_set__active(bool  value) ;

constexpr void __cordl_internal_set__currentColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__currentInt(int32_t  value) ;

constexpr void __cordl_internal_set__data(::UnityW<::VROSC::AudioReactive::ChangeColorEffectData>  value) ;

constexpr void __cordl_internal_set__pingPongDirection(int32_t  value) ;

constexpr void __cordl_internal_set__powerCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__timeIfBPM0(float_t  value) ;

/// @brief Method .ctor, addr 0x17dabf0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalDrumOnBeat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalDrumOnBeat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalDrumOnBeat(GlobalDrumOnBeat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalDrumOnBeat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalDrumOnBeat(GlobalDrumOnBeat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1565};

/// @brief Field _powerCurve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____powerCurve;

/// @brief Field _data, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::AudioReactive::ChangeColorEffectData>  ____data;

/// @brief Field _timeIfBPM0, offset: 0x40, size: 0x4, def value: None
 float_t  ____timeIfBPM0;

/// @brief Field _currentInt, offset: 0x44, size: 0x4, def value: None
 int32_t  ____currentInt;

/// @brief Field _pingPongDirection, offset: 0x48, size: 0x4, def value: None
 int32_t  ____pingPongDirection;

/// @brief Field _currentColor, offset: 0x4c, size: 0x10, def value: None
 ::UnityEngine::Color  ____currentColor;

/// @brief Field _active, offset: 0x5c, size: 0x1, def value: None
 bool  ____active;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::GlobalDrumOnBeat, ____powerCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalDrumOnBeat, ____data) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalDrumOnBeat, ____timeIfBPM0) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalDrumOnBeat, ____currentInt) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalDrumOnBeat, ____pingPongDirection) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalDrumOnBeat, ____currentColor) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::GlobalDrumOnBeat, ____active) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::GlobalDrumOnBeat, 0x60>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::GlobalDrumOnBeat);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::GlobalDrumOnBeat*, "VROSC.AudioReactive", "GlobalDrumOnBeat");
NEED_NO_BOX(::VROSC::AudioReactive::GlobalDrumOnBeat__AnimateTiming_d__13);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::GlobalDrumOnBeat__AnimateTiming_d__13*, "VROSC.AudioReactive", "GlobalDrumOnBeat/<AnimateTiming>d__13");
NEED_NO_BOX(::VROSC::AudioReactive::GlobalDrumOnBeat__ChangeColor_d__12);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::GlobalDrumOnBeat__ChangeColor_d__12*, "VROSC.AudioReactive", "GlobalDrumOnBeat/<ChangeColor>d__12");
