#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/DrumpadEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/AudioReactive/zzzz__CoroutineDrivenEffect_def.hpp"
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
struct Color;
}
namespace VROSC::AudioReactive {
class AudioReactiveBehaviour;
}
namespace VROSC::AudioReactive {
class ChangeColorEffectData;
}
namespace VROSC::AudioReactive {
class DrumpadEffect__SpecificFlow_d__8;
}
namespace VROSC::AudioReactive {
class ReactToBeat;
}
namespace VROSC {
class GlobalDrumPadEffect;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class DrumpadEffect;
}
namespace VROSC::AudioReactive {
class DrumpadEffect__SpecificFlow_d__8;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::DrumpadEffect);
MARK_REF_PTR_T(::VROSC::AudioReactive::DrumpadEffect__SpecificFlow_d__8);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Color
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.DrumpadEffect/<SpecificFlow>d__8
class CORDL_TYPE DrumpadEffect__SpecificFlow_d__8 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::AudioReactive::DrumpadEffect*  __4__this;

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

/// @brief Method MoveNext, addr 0x17d4ba4, size 0x15c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::AudioReactive::DrumpadEffect__SpecificFlow_d__8* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17d4d00, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17d4d08, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17d4d40, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17d4ba0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::VROSC::AudioReactive::DrumpadEffect* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::AudioReactive::DrumpadEffect*& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__endColor_5__4() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__endColor_5__4() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__startColor_5__3() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__startColor_5__3() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::VROSC::AudioReactive::DrumpadEffect*  value) ;

constexpr void __cordl_internal_set__endColor_5__4(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__startColor_5__3(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

/// @brief Method .ctor, addr 0x17d4a6c, size 0x28, virtual false, abstract: false, final false
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
constexpr DrumpadEffect__SpecificFlow_d__8() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrumpadEffect__SpecificFlow_d__8", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrumpadEffect__SpecificFlow_d__8(DrumpadEffect__SpecificFlow_d__8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrumpadEffect__SpecificFlow_d__8", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrumpadEffect__SpecificFlow_d__8(DrumpadEffect__SpecificFlow_d__8 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1504};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::AudioReactive::DrumpadEffect*  _____4__this;

/// @brief Field <time>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____time_5__2;

/// @brief Field <startColor>5__3, offset: 0x2c, size: 0x10, def value: None
 ::UnityEngine::Color  ____startColor_5__3;

/// @brief Field <endColor>5__4, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Color  ____endColor_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::DrumpadEffect__SpecificFlow_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::DrumpadEffect__SpecificFlow_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::DrumpadEffect__SpecificFlow_d__8, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::DrumpadEffect__SpecificFlow_d__8, ____time_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::DrumpadEffect__SpecificFlow_d__8, ____startColor_5__3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::DrumpadEffect__SpecificFlow_d__8, ____endColor_5__4) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::DrumpadEffect__SpecificFlow_d__8, 0x50>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies UnityEngine.Color, VROSC.AudioReactive.CoroutineDrivenEffect
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.DrumpadEffect
class CORDL_TYPE DrumpadEffect : public ::VROSC::AudioReactive::CoroutineDrivenEffect {
public:
// Declarations
using _SpecificFlow_d__8 = ::VROSC::AudioReactive::DrumpadEffect__SpecificFlow_d__8;

 __declspec(property(get=get_Data)) ::UnityW<::VROSC::AudioReactive::ChangeColorEffectData>  Data;

/// @brief Field _currentColor, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__currentColor, put=__cordl_internal_set__currentColor)) ::UnityEngine::Color  _currentColor;

/// @brief Field _currentInt, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentInt, put=__cordl_internal_set__currentInt)) int32_t  _currentInt;

/// @brief Field _data, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::VROSC::AudioReactive::ChangeColorEffectData>  _data;

/// @brief Field _pingPongDirection, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__pingPongDirection, put=__cordl_internal_set__pingPongDirection)) int32_t  _pingPongDirection;

/// @brief Field _targets, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__targets, put=__cordl_internal_set__targets)) ::ArrayW<::UnityW<::VROSC::GlobalDrumPadEffect>,::Array<::UnityW<::VROSC::GlobalDrumPadEffect>>*>  _targets;

/// @brief Method DrawGizmos, addr 0x17d4a94, size 0xf0, virtual true, abstract: false, final false
inline void DrawGizmos(::VROSC::AudioReactive::ReactToBeat*  sender) ;

/// @brief Method GetNewColor, addr 0x17d4710, size 0x260, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetNewColor() ;

static inline ::VROSC::AudioReactive::DrumpadEffect* New_ctor() ;

/// @brief Method SetColor, addr 0x17d4970, size 0x9c, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method Setup, addr 0x17d464c, size 0x4c, virtual true, abstract: false, final false
inline void Setup(::VROSC::AudioReactive::AudioReactiveBehaviour*  behaviour) ;

/// @brief Method SpecificFlow, addr 0x17d4a0c, size 0x60, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* SpecificFlow() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__currentColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__currentColor() ;

constexpr int32_t const& __cordl_internal_get__currentInt() const;

constexpr int32_t& __cordl_internal_get__currentInt() ;

constexpr ::UnityW<::VROSC::AudioReactive::ChangeColorEffectData> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::VROSC::AudioReactive::ChangeColorEffectData>& __cordl_internal_get__data() ;

constexpr int32_t const& __cordl_internal_get__pingPongDirection() const;

constexpr int32_t& __cordl_internal_get__pingPongDirection() ;

constexpr ::ArrayW<::UnityW<::VROSC::GlobalDrumPadEffect>,::Array<::UnityW<::VROSC::GlobalDrumPadEffect>>*> const& __cordl_internal_get__targets() const;

constexpr ::ArrayW<::UnityW<::VROSC::GlobalDrumPadEffect>,::Array<::UnityW<::VROSC::GlobalDrumPadEffect>>*>& __cordl_internal_get__targets() ;

constexpr void __cordl_internal_set__currentColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__currentInt(int32_t  value) ;

constexpr void __cordl_internal_set__data(::UnityW<::VROSC::AudioReactive::ChangeColorEffectData>  value) ;

constexpr void __cordl_internal_set__pingPongDirection(int32_t  value) ;

constexpr void __cordl_internal_set__targets(::ArrayW<::UnityW<::VROSC::GlobalDrumPadEffect>,::Array<::UnityW<::VROSC::GlobalDrumPadEffect>>*>  value) ;

/// @brief Method .ctor, addr 0x17d4b88, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x17d4644, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::AudioReactive::ChangeColorEffectData> get_Data() ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1505};

/// @brief Field _data, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::AudioReactive::ChangeColorEffectData>  ____data;

/// @brief Field _targets, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::GlobalDrumPadEffect>,::Array<::UnityW<::VROSC::GlobalDrumPadEffect>>*>  ____targets;

/// @brief Field _currentInt, offset: 0x40, size: 0x4, def value: None
 int32_t  ____currentInt;

/// @brief Field _pingPongDirection, offset: 0x44, size: 0x4, def value: None
 int32_t  ____pingPongDirection;

/// @brief Field _currentColor, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  ____currentColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::DrumpadEffect, ____data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::DrumpadEffect, ____targets) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::DrumpadEffect, ____currentInt) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::DrumpadEffect, ____pingPongDirection) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::DrumpadEffect, ____currentColor) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::DrumpadEffect, 0x58>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::DrumpadEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::DrumpadEffect*, "VROSC.AudioReactive", "DrumpadEffect");
NEED_NO_BOX(::VROSC::AudioReactive::DrumpadEffect__SpecificFlow_d__8);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::DrumpadEffect__SpecificFlow_d__8*, "VROSC.AudioReactive", "DrumpadEffect/<SpecificFlow>d__8");
