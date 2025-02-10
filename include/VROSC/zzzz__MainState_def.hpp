#pragma once
// IWYU pragma private; include "VROSC/MainState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MainState)
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioSource;
}
namespace VROSC {
class FullScreenFxController;
}
namespace VROSC {
class MainState__FadeInWorldVisually_d__10;
}
namespace VROSC {
struct MainState__OnEnter_d__6;
}
namespace VROSC {
struct MainState__RecenterPlayer_d__17;
}
namespace VROSC {
class MainState__StopMenuMusicCoroutine_d__9;
}
namespace VROSC {
class StartMenu;
}
// Forward declare root types
namespace VROSC {
class MainState;
}
namespace VROSC {
class MainState__FadeInWorldVisually_d__10;
}
namespace VROSC {
class MainState__StopMenuMusicCoroutine_d__9;
}
namespace VROSC {
struct MainState__OnEnter_d__6;
}
namespace VROSC {
struct MainState__RecenterPlayer_d__17;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MainState);
MARK_REF_PTR_T(::VROSC::MainState__FadeInWorldVisually_d__10);
MARK_REF_PTR_T(::VROSC::MainState__StopMenuMusicCoroutine_d__9);
MARK_VAL_T(::VROSC::MainState__OnEnter_d__6);
MARK_VAL_T(::VROSC::MainState__RecenterPlayer_d__17);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MainState/<FadeInWorldVisually>d__10
class CORDL_TYPE MainState__FadeInWorldVisually_d__10 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <fadeoutTime>5__2, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeoutTime_5__2, put=__cordl_internal_set__fadeoutTime_5__2)) float_t  _fadeoutTime_5__2;

/// @brief Field <progress>5__3, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__progress_5__3, put=__cordl_internal_set__progress_5__3)) float_t  _progress_5__3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x16f9690, size 0x120, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::MainState__FadeInWorldVisually_d__10* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x16f97b0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x16f97b8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x16f97f0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x16f968c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr float_t const& __cordl_internal_get__fadeoutTime_5__2() const;

constexpr float_t& __cordl_internal_get__fadeoutTime_5__2() ;

constexpr float_t const& __cordl_internal_get__progress_5__3() const;

constexpr float_t& __cordl_internal_get__progress_5__3() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__fadeoutTime_5__2(float_t  value) ;

constexpr void __cordl_internal_set__progress_5__3(float_t  value) ;

/// @brief Method .ctor, addr 0x16f92a8, size 0x28, virtual false, abstract: false, final false
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
constexpr MainState__FadeInWorldVisually_d__10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainState__FadeInWorldVisually_d__10", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MainState__FadeInWorldVisually_d__10(MainState__FadeInWorldVisually_d__10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainState__FadeInWorldVisually_d__10", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainState__FadeInWorldVisually_d__10(MainState__FadeInWorldVisually_d__10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{806};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <fadeoutTime>5__2, offset: 0x20, size: 0x4, def value: None
 float_t  ____fadeoutTime_5__2;

/// @brief Field <progress>5__3, offset: 0x24, size: 0x4, def value: None
 float_t  ____progress_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MainState__FadeInWorldVisually_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::MainState__FadeInWorldVisually_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::MainState__FadeInWorldVisually_d__10, ____fadeoutTime_5__2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::MainState__FadeInWorldVisually_d__10, ____progress_5__3) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MainState__FadeInWorldVisually_d__10, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.MainState/<OnEnter>d__6
struct CORDL_TYPE MainState__OnEnter_d__6 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16f97f8, size 0x550, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16f9d48, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MainState__OnEnter_d__6() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::MainState*", modifiers: "", def_value: None }, CppParam { name: "_startMenu_5__2", ty: "::UnityW<::VROSC::StartMenu>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None }]
constexpr MainState__OnEnter_d__6(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::MainState*  __4__this, ::UnityW<::VROSC::StartMenu>  _startMenu_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{807};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::MainState*  __4__this;

/// @brief Field <startMenu>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::StartMenu>  _startMenu_5__2;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x40, size: 0x1, def value: None
 ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MainState__OnEnter_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::MainState__OnEnter_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::MainState__OnEnter_d__6, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::MainState__OnEnter_d__6, _startMenu_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::MainState__OnEnter_d__6, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::MainState__OnEnter_d__6, __u__2) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MainState__OnEnter_d__6, 0x48>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.MainState/<RecenterPlayer>d__17
struct CORDL_TYPE MainState__RecenterPlayer_d__17 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16f9d54, size 0x190, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16f9ee4, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MainState__RecenterPlayer_d__17() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::MainState*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr MainState__RecenterPlayer_d__17(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::MainState*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{808};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::MainState*  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MainState__RecenterPlayer_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::MainState__RecenterPlayer_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::MainState__RecenterPlayer_d__17, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::MainState__RecenterPlayer_d__17, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MainState__RecenterPlayer_d__17, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MainState/<StopMenuMusicCoroutine>d__9
class CORDL_TYPE MainState__StopMenuMusicCoroutine_d__9 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::MainState*  __4__this;

/// @brief Field <fadeoutTime>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeoutTime_5__2, put=__cordl_internal_set__fadeoutTime_5__2)) float_t  _fadeoutTime_5__2;

/// @brief Field <progress>5__3, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__progress_5__3, put=__cordl_internal_set__progress_5__3)) float_t  _progress_5__3;

/// @brief Field <startVolume>5__4, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__startVolume_5__4, put=__cordl_internal_set__startVolume_5__4)) float_t  _startVolume_5__4;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x16f9ef4, size 0x14c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::MainState__StopMenuMusicCoroutine_d__9* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x16fa040, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x16fa048, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x16fa080, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x16f9ef0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::VROSC::MainState* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::MainState*& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__fadeoutTime_5__2() const;

constexpr float_t& __cordl_internal_get__fadeoutTime_5__2() ;

constexpr float_t const& __cordl_internal_get__progress_5__3() const;

constexpr float_t& __cordl_internal_get__progress_5__3() ;

constexpr float_t const& __cordl_internal_get__startVolume_5__4() const;

constexpr float_t& __cordl_internal_get__startVolume_5__4() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::VROSC::MainState*  value) ;

constexpr void __cordl_internal_set__fadeoutTime_5__2(float_t  value) ;

constexpr void __cordl_internal_set__progress_5__3(float_t  value) ;

constexpr void __cordl_internal_set__startVolume_5__4(float_t  value) ;

/// @brief Method .ctor, addr 0x16f9280, size 0x28, virtual false, abstract: false, final false
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
constexpr MainState__StopMenuMusicCoroutine_d__9() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainState__StopMenuMusicCoroutine_d__9", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MainState__StopMenuMusicCoroutine_d__9(MainState__StopMenuMusicCoroutine_d__9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainState__StopMenuMusicCoroutine_d__9", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainState__StopMenuMusicCoroutine_d__9(MainState__StopMenuMusicCoroutine_d__9 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{809};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::MainState*  _____4__this;

/// @brief Field <fadeoutTime>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____fadeoutTime_5__2;

/// @brief Field <progress>5__3, offset: 0x2c, size: 0x4, def value: None
 float_t  ____progress_5__3;

/// @brief Field <startVolume>5__4, offset: 0x30, size: 0x4, def value: None
 float_t  ____startVolume_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MainState__StopMenuMusicCoroutine_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::MainState__StopMenuMusicCoroutine_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::MainState__StopMenuMusicCoroutine_d__9, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::MainState__StopMenuMusicCoroutine_d__9, ____fadeoutTime_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::MainState__StopMenuMusicCoroutine_d__9, ____progress_5__3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::MainState__StopMenuMusicCoroutine_d__9, ____startVolume_5__4) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MainState__StopMenuMusicCoroutine_d__9, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MainState
class CORDL_TYPE MainState : public ::System::Object {
public:
// Declarations
using _FadeInWorldVisually_d__10 = ::VROSC::MainState__FadeInWorldVisually_d__10;

using _OnEnter_d__6 = ::VROSC::MainState__OnEnter_d__6;

using _RecenterPlayer_d__17 = ::VROSC::MainState__RecenterPlayer_d__17;

using _StopMenuMusicCoroutine_d__9 = ::VROSC::MainState__StopMenuMusicCoroutine_d__9;

/// @brief Field OnMainStateEntered, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnMainStateEntered, put=setStaticF_OnMainStateEntered)) ::System::Action*  OnMainStateEntered;

/// @brief Field _fullScreenFxController, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__fullScreenFxController, put=__cordl_internal_set__fullScreenFxController)) ::UnityW<::VROSC::FullScreenFxController>  _fullScreenFxController;

/// @brief Field _startMenuMusic, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__startMenuMusic, put=__cordl_internal_set__startMenuMusic)) ::UnityW<::UnityEngine::AudioSource>  _startMenuMusic;

/// @brief Field _startMenuPrefab, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__startMenuPrefab, put=__cordl_internal_set__startMenuPrefab)) ::UnityW<::VROSC::StartMenu>  _startMenuPrefab;

/// @brief Field _steamHasInputFocus, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__steamHasInputFocus, put=__cordl_internal_set__steamHasInputFocus)) bool  _steamHasInputFocus;

/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

/// @brief Method CheckForPlayerOutOfBounds, addr 0x16f9538, size 0xc4, virtual false, abstract: false, final false
inline void CheckForPlayerOutOfBounds() ;

/// @brief Method FadeInWorldVisually, addr 0x16f9228, size 0x58, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* FadeInWorldVisually() ;

/// @brief Method HasFocus, addr 0x16f94ac, size 0x7c, virtual false, abstract: false, final false
inline bool HasFocus() ;

static inline ::VROSC::MainState* New_ctor(::VROSC::FullScreenFxController*  fullScreenFxController, ::VROSC::StartMenu*  startMenuPrefab, ::UnityEngine::AudioSource*  startMenuMusic) ;

/// @brief Method OnEnter, addr 0x16f8fd4, size 0x90, virtual true, abstract: false, final true
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x16f9064, size 0x4, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method OnInputFocus, addr 0x16f9528, size 0xc, virtual false, abstract: false, final false
inline void OnInputFocus(bool  hasFocus) ;

/// @brief Method RecenterPlayer, addr 0x16f95fc, size 0x90, virtual false, abstract: false, final false
inline void RecenterPlayer() ;

/// @brief Method SetWorldVisuallyFaded, addr 0x16f92d0, size 0x54, virtual false, abstract: false, final false
static inline void SetWorldVisuallyFaded(float_t  amount) ;

/// @brief Method StartMenuClosed, addr 0x16f9068, size 0x160, virtual false, abstract: false, final false
inline void StartMenuClosed() ;

/// @brief Method StopMenuMusicCoroutine, addr 0x16f91c8, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* StopMenuMusicCoroutine() ;

/// @brief Method Tick, addr 0x16f9324, size 0x188, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateData, addr 0x16f9534, size 0x4, virtual true, abstract: false, final true
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

constexpr ::UnityW<::VROSC::FullScreenFxController> const& __cordl_internal_get__fullScreenFxController() const;

constexpr ::UnityW<::VROSC::FullScreenFxController>& __cordl_internal_get__fullScreenFxController() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__startMenuMusic() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__startMenuMusic() ;

constexpr ::UnityW<::VROSC::StartMenu> const& __cordl_internal_get__startMenuPrefab() const;

constexpr ::UnityW<::VROSC::StartMenu>& __cordl_internal_get__startMenuPrefab() ;

constexpr bool const& __cordl_internal_get__steamHasInputFocus() const;

constexpr bool& __cordl_internal_get__steamHasInputFocus() ;

constexpr void __cordl_internal_set__fullScreenFxController(::UnityW<::VROSC::FullScreenFxController>  value) ;

constexpr void __cordl_internal_set__startMenuMusic(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__startMenuPrefab(::UnityW<::VROSC::StartMenu>  value) ;

constexpr void __cordl_internal_set__steamHasInputFocus(bool  value) ;

/// @brief Method .ctor, addr 0x16f8f90, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::VROSC::FullScreenFxController*  fullScreenFxController, ::VROSC::StartMenu*  startMenuPrefab, ::UnityEngine::AudioSource*  startMenuMusic) ;

static inline ::System::Action* getStaticF_OnMainStateEntered() ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

static inline void setStaticF_OnMainStateEntered(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MainState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MainState(MainState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainState(MainState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{810};

/// @brief Field _fullScreenFxController, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::FullScreenFxController>  ____fullScreenFxController;

/// @brief Field _startMenuPrefab, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::StartMenu>  ____startMenuPrefab;

/// @brief Field _startMenuMusic, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____startMenuMusic;

/// @brief Field _steamHasInputFocus, offset: 0x28, size: 0x1, def value: None
 bool  ____steamHasInputFocus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MainState, ____fullScreenFxController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::MainState, ____startMenuPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::MainState, ____startMenuMusic) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::MainState, ____steamHasInputFocus) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MainState, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MainState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MainState*, "VROSC", "MainState");
NEED_NO_BOX(::VROSC::MainState__FadeInWorldVisually_d__10);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MainState__FadeInWorldVisually_d__10*, "VROSC", "MainState/<FadeInWorldVisually>d__10");
NEED_NO_BOX(::VROSC::MainState__StopMenuMusicCoroutine_d__9);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MainState__StopMenuMusicCoroutine_d__9*, "VROSC", "MainState/<StopMenuMusicCoroutine>d__9");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MainState__OnEnter_d__6, "VROSC", "MainState/<OnEnter>d__6");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MainState__RecenterPlayer_d__17, "VROSC", "MainState/<RecenterPlayer>d__17");
