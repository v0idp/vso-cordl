#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/CoroutineDrivenEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/AudioReactive/zzzz__ReactiveEffect_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CoroutineDrivenEffect)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class WaitForSeconds;
}
namespace VROSC::AudioReactive {
class AudioReactiveBehaviour;
}
namespace VROSC::AudioReactive {
class CoroutineDrivenEffect__Reaction_d__7;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class CoroutineDrivenEffect;
}
namespace VROSC::AudioReactive {
class CoroutineDrivenEffect__Reaction_d__7;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::CoroutineDrivenEffect);
MARK_REF_PTR_T(::VROSC::AudioReactive::CoroutineDrivenEffect__Reaction_d__7);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.CoroutineDrivenEffect/<Reaction>d__7
class CORDL_TYPE CoroutineDrivenEffect__Reaction_d__7 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::AudioReactive::CoroutineDrivenEffect*  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17d6380, size 0xa0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::AudioReactive::CoroutineDrivenEffect__Reaction_d__7* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17d6420, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17d6428, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17d6460, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17d637c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::VROSC::AudioReactive::CoroutineDrivenEffect* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::AudioReactive::CoroutineDrivenEffect*& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::VROSC::AudioReactive::CoroutineDrivenEffect*  value) ;

/// @brief Method .ctor, addr 0x17d6354, size 0x28, virtual false, abstract: false, final false
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
constexpr CoroutineDrivenEffect__Reaction_d__7() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoroutineDrivenEffect__Reaction_d__7", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CoroutineDrivenEffect__Reaction_d__7(CoroutineDrivenEffect__Reaction_d__7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoroutineDrivenEffect__Reaction_d__7", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoroutineDrivenEffect__Reaction_d__7(CoroutineDrivenEffect__Reaction_d__7 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1515};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::AudioReactive::CoroutineDrivenEffect*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::CoroutineDrivenEffect__Reaction_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::CoroutineDrivenEffect__Reaction_d__7, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::CoroutineDrivenEffect__Reaction_d__7, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::CoroutineDrivenEffect__Reaction_d__7, 0x28>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies VROSC.AudioReactive.ReactiveEffect
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.CoroutineDrivenEffect
class CORDL_TYPE CoroutineDrivenEffect : public ::VROSC::AudioReactive::ReactiveEffect {
public:
// Declarations
using _Reaction_d__7 = ::VROSC::AudioReactive::CoroutineDrivenEffect__Reaction_d__7;

/// @brief Field _behaviour, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__behaviour, put=__cordl_internal_set__behaviour)) ::UnityW<::VROSC::AudioReactive::AudioReactiveBehaviour>  _behaviour;

/// @brief Field _coroutine, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__coroutine, put=__cordl_internal_set__coroutine)) ::UnityEngine::Coroutine*  _coroutine;

/// @brief Field _delay, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__delay, put=__cordl_internal_set__delay)) float_t  _delay;

/// @brief Field _waitDelay, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__waitDelay, put=__cordl_internal_set__waitDelay)) ::UnityEngine::WaitForSeconds*  _waitDelay;

static inline ::VROSC::AudioReactive::CoroutineDrivenEffect* New_ctor() ;

/// @brief Method Reaction, addr 0x17d62f4, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Reaction() ;

/// @brief Method Setup, addr 0x17d4698, size 0x78, virtual true, abstract: false, final false
inline void Setup(::VROSC::AudioReactive::AudioReactiveBehaviour*  behaviour) ;

/// @brief Method SpecificFlow, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::IEnumerator* SpecificFlow() ;

/// @brief Method Trigger, addr 0x17d629c, size 0x58, virtual true, abstract: false, final false
inline void Trigger() ;

/// @brief Method Update, addr 0x17d5acc, size 0x4, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::VROSC::AudioReactive::AudioReactiveBehaviour> const& __cordl_internal_get__behaviour() const;

constexpr ::UnityW<::VROSC::AudioReactive::AudioReactiveBehaviour>& __cordl_internal_get__behaviour() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__coroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__coroutine() ;

constexpr float_t const& __cordl_internal_get__delay() const;

constexpr float_t& __cordl_internal_get__delay() ;

constexpr ::UnityEngine::WaitForSeconds* const& __cordl_internal_get__waitDelay() const;

constexpr ::UnityEngine::WaitForSeconds*& __cordl_internal_get__waitDelay() ;

constexpr void __cordl_internal_set__behaviour(::UnityW<::VROSC::AudioReactive::AudioReactiveBehaviour>  value) ;

constexpr void __cordl_internal_set__coroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__delay(float_t  value) ;

constexpr void __cordl_internal_set__waitDelay(::UnityEngine::WaitForSeconds*  value) ;

/// @brief Method .ctor, addr 0x17d4b98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CoroutineDrivenEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoroutineDrivenEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CoroutineDrivenEffect(CoroutineDrivenEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoroutineDrivenEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoroutineDrivenEffect(CoroutineDrivenEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1516};

/// @brief Field _delay, offset: 0x10, size: 0x4, def value: None
 float_t  ____delay;

/// @brief Field _behaviour, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::AudioReactive::AudioReactiveBehaviour>  ____behaviour;

/// @brief Field _coroutine, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____coroutine;

/// @brief Field _waitDelay, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::WaitForSeconds*  ____waitDelay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::CoroutineDrivenEffect, ____delay) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::CoroutineDrivenEffect, ____behaviour) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::CoroutineDrivenEffect, ____coroutine) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::CoroutineDrivenEffect, ____waitDelay) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::CoroutineDrivenEffect, 0x30>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::CoroutineDrivenEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::CoroutineDrivenEffect*, "VROSC.AudioReactive", "CoroutineDrivenEffect");
NEED_NO_BOX(::VROSC::AudioReactive::CoroutineDrivenEffect__Reaction_d__7);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::CoroutineDrivenEffect__Reaction_d__7*, "VROSC.AudioReactive", "CoroutineDrivenEffect/<Reaction>d__7");
