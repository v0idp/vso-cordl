#pragma once
// IWYU pragma private; include "VROSC/FailedEntitlementState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FailedEntitlementState)
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Object;
}
namespace VROSC {
class FailedEntitlementState__FadeInWorldVisually_d__6;
}
namespace VROSC {
struct FailedEntitlementState__OnEnter_d__4;
}
namespace VROSC {
struct FailedEntitlementState__RecenterPlayer_d__13;
}
namespace VROSC {
class FailedStartMenu;
}
namespace VROSC {
class FullScreenFxController;
}
// Forward declare root types
namespace VROSC {
class FailedEntitlementState;
}
namespace VROSC {
class FailedEntitlementState__FadeInWorldVisually_d__6;
}
namespace VROSC {
struct FailedEntitlementState__OnEnter_d__4;
}
namespace VROSC {
struct FailedEntitlementState__RecenterPlayer_d__13;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::FailedEntitlementState);
MARK_REF_PTR_T(::VROSC::FailedEntitlementState__FadeInWorldVisually_d__6);
MARK_VAL_T(::VROSC::FailedEntitlementState__OnEnter_d__4);
MARK_VAL_T(::VROSC::FailedEntitlementState__RecenterPlayer_d__13);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FailedEntitlementState/<FadeInWorldVisually>d__6
class CORDL_TYPE FailedEntitlementState__FadeInWorldVisually_d__6 : public ::System::Object {
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

/// @brief Method MoveNext, addr 0x16f85d4, size 0x120, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::FailedEntitlementState__FadeInWorldVisually_d__6* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x16f86f4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x16f86fc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x16f8734, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x16f85d0, size 0x4, virtual true, abstract: false, final true
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

/// @brief Method .ctor, addr 0x16f821c, size 0x28, virtual false, abstract: false, final false
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
constexpr FailedEntitlementState__FadeInWorldVisually_d__6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FailedEntitlementState__FadeInWorldVisually_d__6", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FailedEntitlementState__FadeInWorldVisually_d__6(FailedEntitlementState__FadeInWorldVisually_d__6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FailedEntitlementState__FadeInWorldVisually_d__6", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FailedEntitlementState__FadeInWorldVisually_d__6(FailedEntitlementState__FadeInWorldVisually_d__6 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{799};

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
static_assert(offsetof(::VROSC::FailedEntitlementState__FadeInWorldVisually_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedEntitlementState__FadeInWorldVisually_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedEntitlementState__FadeInWorldVisually_d__6, ____fadeoutTime_5__2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedEntitlementState__FadeInWorldVisually_d__6, ____progress_5__3) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FailedEntitlementState__FadeInWorldVisually_d__6, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.FailedEntitlementState/<OnEnter>d__4
struct CORDL_TYPE FailedEntitlementState__OnEnter_d__4 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16f873c, size 0x2c8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16f8a04, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FailedEntitlementState__OnEnter_d__4() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::FailedEntitlementState*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr FailedEntitlementState__OnEnter_d__4(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::FailedEntitlementState*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{800};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::FailedEntitlementState*  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FailedEntitlementState__OnEnter_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedEntitlementState__OnEnter_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedEntitlementState__OnEnter_d__4, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedEntitlementState__OnEnter_d__4, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FailedEntitlementState__OnEnter_d__4, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.FailedEntitlementState/<RecenterPlayer>d__13
struct CORDL_TYPE FailedEntitlementState__RecenterPlayer_d__13 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16f8a10, size 0x190, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16f8ba0, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FailedEntitlementState__RecenterPlayer_d__13() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::FailedEntitlementState*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr FailedEntitlementState__RecenterPlayer_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::FailedEntitlementState*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{801};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::FailedEntitlementState*  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FailedEntitlementState__RecenterPlayer_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedEntitlementState__RecenterPlayer_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedEntitlementState__RecenterPlayer_d__13, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedEntitlementState__RecenterPlayer_d__13, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FailedEntitlementState__RecenterPlayer_d__13, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, VROSC.IState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FailedEntitlementState
class CORDL_TYPE FailedEntitlementState : public ::System::Object {
public:
// Declarations
using _FadeInWorldVisually_d__6 = ::VROSC::FailedEntitlementState__FadeInWorldVisually_d__6;

using _OnEnter_d__4 = ::VROSC::FailedEntitlementState__OnEnter_d__4;

using _RecenterPlayer_d__13 = ::VROSC::FailedEntitlementState__RecenterPlayer_d__13;

/// @brief Field _failedStartMenuPrefab, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__failedStartMenuPrefab, put=__cordl_internal_set__failedStartMenuPrefab)) ::UnityW<::VROSC::FailedStartMenu>  _failedStartMenuPrefab;

/// @brief Field _fullScreenFxController, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__fullScreenFxController, put=__cordl_internal_set__fullScreenFxController)) ::UnityW<::VROSC::FullScreenFxController>  _fullScreenFxController;

/// @brief Field _steamHasInputFocus, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__steamHasInputFocus, put=__cordl_internal_set__steamHasInputFocus)) bool  _steamHasInputFocus;

/// @brief Convert operator to "::VROSC::IState"
constexpr operator  ::VROSC::IState*() noexcept;

/// @brief Method CheckForPlayerOutOfBounds, addr 0x16f847c, size 0xc4, virtual false, abstract: false, final false
inline void CheckForPlayerOutOfBounds() ;

/// @brief Method FadeInWorldVisually, addr 0x16f81c4, size 0x58, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* FadeInWorldVisually() ;

/// @brief Method HasFocus, addr 0x16f83f0, size 0x7c, virtual false, abstract: false, final false
inline bool HasFocus() ;

static inline ::VROSC::FailedEntitlementState* New_ctor(::VROSC::FullScreenFxController*  fullScreenFxController, ::VROSC::FailedStartMenu*  failedStartMenuPrefab) ;

/// @brief Method OnEnter, addr 0x16f8130, size 0x90, virtual true, abstract: false, final true
inline void OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method OnExit, addr 0x16f81c0, size 0x4, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method OnInputFocus, addr 0x16f846c, size 0xc, virtual false, abstract: false, final false
inline void OnInputFocus(bool  hasFocus) ;

/// @brief Method RecenterPlayer, addr 0x16f8540, size 0x90, virtual false, abstract: false, final false
inline void RecenterPlayer() ;

/// @brief Method SetWorldVisuallyFaded, addr 0x16f8244, size 0x54, virtual false, abstract: false, final false
static inline void SetWorldVisuallyFaded(float_t  amount) ;

/// @brief Method Tick, addr 0x16f8298, size 0x158, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateData, addr 0x16f8478, size 0x4, virtual true, abstract: false, final true
inline void UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

constexpr ::UnityW<::VROSC::FailedStartMenu> const& __cordl_internal_get__failedStartMenuPrefab() const;

constexpr ::UnityW<::VROSC::FailedStartMenu>& __cordl_internal_get__failedStartMenuPrefab() ;

constexpr ::UnityW<::VROSC::FullScreenFxController> const& __cordl_internal_get__fullScreenFxController() const;

constexpr ::UnityW<::VROSC::FullScreenFxController>& __cordl_internal_get__fullScreenFxController() ;

constexpr bool const& __cordl_internal_get__steamHasInputFocus() const;

constexpr bool& __cordl_internal_get__steamHasInputFocus() ;

constexpr void __cordl_internal_set__failedStartMenuPrefab(::UnityW<::VROSC::FailedStartMenu>  value) ;

constexpr void __cordl_internal_set__fullScreenFxController(::UnityW<::VROSC::FullScreenFxController>  value) ;

constexpr void __cordl_internal_set__steamHasInputFocus(bool  value) ;

/// @brief Method .ctor, addr 0x16f80fc, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::VROSC::FullScreenFxController*  fullScreenFxController, ::VROSC::FailedStartMenu*  failedStartMenuPrefab) ;

/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* i___VROSC__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FailedEntitlementState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FailedEntitlementState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FailedEntitlementState(FailedEntitlementState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FailedEntitlementState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FailedEntitlementState(FailedEntitlementState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{802};

/// @brief Field _fullScreenFxController, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::FullScreenFxController>  ____fullScreenFxController;

/// @brief Field _failedStartMenuPrefab, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::FailedStartMenu>  ____failedStartMenuPrefab;

/// @brief Field _steamHasInputFocus, offset: 0x20, size: 0x1, def value: None
 bool  ____steamHasInputFocus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FailedEntitlementState, ____fullScreenFxController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedEntitlementState, ____failedStartMenuPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedEntitlementState, ____steamHasInputFocus) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FailedEntitlementState, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::FailedEntitlementState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FailedEntitlementState*, "VROSC", "FailedEntitlementState");
NEED_NO_BOX(::VROSC::FailedEntitlementState__FadeInWorldVisually_d__6);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FailedEntitlementState__FadeInWorldVisually_d__6*, "VROSC", "FailedEntitlementState/<FadeInWorldVisually>d__6");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FailedEntitlementState__OnEnter_d__4, "VROSC", "FailedEntitlementState/<OnEnter>d__4");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FailedEntitlementState__RecenterPlayer_d__13, "VROSC", "FailedEntitlementState/<RecenterPlayer>d__13");
