#pragma once
// IWYU pragma private; include "VROSC/LaunchPadEffectOnSignal.hpp"
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
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__SignalNode_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LaunchPadEffectOnSignal)
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
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
namespace VROSC {
class LaunchPadEffectOnSignal__ActivateFlow_d__16;
}
namespace VROSC {
struct LaunchPadEffectOnSignal__NodeBegin_d__14;
}
namespace VROSC {
class MinMaxInt;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class LaunchPadEffectOnSignal;
}
namespace VROSC {
class LaunchPadEffectOnSignal__ActivateFlow_d__16;
}
namespace VROSC {
struct LaunchPadEffectOnSignal__NodeBegin_d__14;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LaunchPadEffectOnSignal);
MARK_REF_PTR_T(::VROSC::LaunchPadEffectOnSignal__ActivateFlow_d__16);
MARK_VAL_T(::VROSC::LaunchPadEffectOnSignal__NodeBegin_d__14);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LaunchPadEffectOnSignal/<ActivateFlow>d__16
class CORDL_TYPE LaunchPadEffectOnSignal__ActivateFlow_d__16 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::LaunchPadEffectOnSignal>  __4__this;

/// @brief Field <time>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__2, put=__cordl_internal_set__time_5__2)) float_t  _time_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1727c5c, size 0xf0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::LaunchPadEffectOnSignal__ActivateFlow_d__16* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1727d4c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1727d54, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1727d8c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1727c58, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::LaunchPadEffectOnSignal> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::LaunchPadEffectOnSignal>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::LaunchPadEffectOnSignal>  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

/// @brief Method .ctor, addr 0x1727b58, size 0x28, virtual false, abstract: false, final false
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
constexpr LaunchPadEffectOnSignal__ActivateFlow_d__16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LaunchPadEffectOnSignal__ActivateFlow_d__16", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LaunchPadEffectOnSignal__ActivateFlow_d__16(LaunchPadEffectOnSignal__ActivateFlow_d__16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LaunchPadEffectOnSignal__ActivateFlow_d__16", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LaunchPadEffectOnSignal__ActivateFlow_d__16(LaunchPadEffectOnSignal__ActivateFlow_d__16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1028};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::LaunchPadEffectOnSignal>  _____4__this;

/// @brief Field <time>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____time_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal__ActivateFlow_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal__ActivateFlow_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal__ActivateFlow_d__16, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal__ActivateFlow_d__16, ____time_5__2) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LaunchPadEffectOnSignal__ActivateFlow_d__16, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LaunchPadEffectOnSignal/<NodeBegin>d__14
struct CORDL_TYPE LaunchPadEffectOnSignal__NodeBegin_d__14 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1727d94, size 0x268, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1727ffc, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LaunchPadEffectOnSignal__NodeBegin_d__14() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "signal", ty: "::VROSC::Signal*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::LaunchPadEffectOnSignal>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr LaunchPadEffectOnSignal__NodeBegin_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::Signal*  signal, ::UnityW<::VROSC::LaunchPadEffectOnSignal>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1029};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field signal, offset: 0x28, size: 0x8, def value: None
 ::VROSC::Signal*  signal;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::LaunchPadEffectOnSignal>  __4__this;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal__NodeBegin_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal__NodeBegin_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal__NodeBegin_d__14, signal) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal__NodeBegin_d__14, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal__NodeBegin_d__14, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LaunchPadEffectOnSignal__NodeBegin_d__14, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Color, VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LaunchPadEffectOnSignal
class CORDL_TYPE LaunchPadEffectOnSignal : public ::VROSC::SignalNode {
public:
// Declarations
using _ActivateFlow_d__16 = ::VROSC::LaunchPadEffectOnSignal__ActivateFlow_d__16;

using _NodeBegin_d__14 = ::VROSC::LaunchPadEffectOnSignal__NodeBegin_d__14;

/// @brief Field _color, offset 0x8c, size 0x10 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) ::UnityEngine::Color  _color;

/// @brief Field _currentTiming, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentTiming, put=__cordl_internal_set__currentTiming)) float_t  _currentTiming;

/// @brief Field _duration, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__duration, put=__cordl_internal_set__duration)) float_t  _duration;

/// @brief Field _effectScaledByPower, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__effectScaledByPower, put=__cordl_internal_set__effectScaledByPower)) bool  _effectScaledByPower;

/// @brief Field _isPlaying, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__isPlaying, put=__cordl_internal_set__isPlaying)) bool  _isPlaying;

/// @brief Field _multiplier, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get__multiplier, put=__cordl_internal_set__multiplier)) float_t  _multiplier;

/// @brief Field _padRenderer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__padRenderer, put=__cordl_internal_set__padRenderer)) ::UnityW<::UnityEngine::Renderer>  _padRenderer;

/// @brief Field _particleAmount, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__particleAmount, put=__cordl_internal_set__particleAmount)) ::VROSC::MinMaxInt*  _particleAmount;

/// @brief Field _particleSystem, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__particleSystem, put=__cordl_internal_set__particleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  _particleSystem;

/// @brief Field _powerCurve, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__powerCurve, put=__cordl_internal_set__powerCurve)) ::UnityEngine::AnimationCurve*  _powerCurve;

/// @brief Field _preview, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__preview, put=__cordl_internal_set__preview)) bool  _preview;

/// @brief Field _previewColor, offset 0x74, size 0x10 
 __declspec(property(get=__cordl_internal_get__previewColor, put=__cordl_internal_set__previewColor)) ::UnityEngine::Color  _previewColor;

/// @brief Field _previewMultiplier, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__previewMultiplier, put=__cordl_internal_set__previewMultiplier)) float_t  _previewMultiplier;

/// @brief Field _previewTiming, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__previewTiming, put=__cordl_internal_set__previewTiming)) float_t  _previewTiming;

/// @brief Field _propBlock, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__propBlock, put=__cordl_internal_set__propBlock)) ::UnityEngine::MaterialPropertyBlock*  _propBlock;

/// @brief Method Activate, addr 0x1727a3c, size 0xbc, virtual false, abstract: false, final false
inline void Activate(float_t  power) ;

/// @brief Method ActivateFlow, addr 0x1727af8, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ActivateFlow(float_t  power) ;

/// @brief Method CreatePropBlock, addr 0x1727ba8, size 0x60, virtual false, abstract: false, final false
inline void CreatePropBlock() ;

/// @brief Method DisplayEffectForTime, addr 0x1727b80, size 0x28, virtual false, abstract: false, final false
inline void DisplayEffectForTime(float_t  time) ;

static inline ::VROSC::LaunchPadEffectOnSignal* New_ctor() ;

/// @brief Method NodeBegin, addr 0x17279a4, size 0x98, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method OnEnable, addr 0x17276f0, size 0x2c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetColor, addr 0x1727888, size 0x11c, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color, bool  affectVisual) ;

/// @brief Method SetEffectOnMesh, addr 0x172771c, size 0xcc, virtual false, abstract: false, final false
inline void SetEffectOnMesh(float_t  hitEffectTiming) ;

/// @brief Method SetMeshColor, addr 0x17277e8, size 0xa0, virtual false, abstract: false, final false
inline void SetMeshColor(::UnityEngine::Color  color) ;

/// @brief Method SetMultiplier, addr 0x1727c14, size 0x1c, virtual false, abstract: false, final false
inline void SetMultiplier(float_t  multiplier) ;

/// @brief Method SetPlaying, addr 0x1727c30, size 0x20, virtual false, abstract: false, final false
inline void SetPlaying(bool  isPlaying) ;

/// @brief Method UpdateColor, addr 0x1727c08, size 0xc, virtual false, abstract: false, final false
inline void UpdateColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__color() ;

constexpr float_t const& __cordl_internal_get__currentTiming() const;

constexpr float_t& __cordl_internal_get__currentTiming() ;

constexpr float_t const& __cordl_internal_get__duration() const;

constexpr float_t& __cordl_internal_get__duration() ;

constexpr bool const& __cordl_internal_get__effectScaledByPower() const;

constexpr bool& __cordl_internal_get__effectScaledByPower() ;

constexpr bool const& __cordl_internal_get__isPlaying() const;

constexpr bool& __cordl_internal_get__isPlaying() ;

constexpr float_t const& __cordl_internal_get__multiplier() const;

constexpr float_t& __cordl_internal_get__multiplier() ;

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

constexpr float_t const& __cordl_internal_get__previewMultiplier() const;

constexpr float_t& __cordl_internal_get__previewMultiplier() ;

constexpr float_t const& __cordl_internal_get__previewTiming() const;

constexpr float_t& __cordl_internal_get__previewTiming() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__propBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__propBlock() ;

constexpr void __cordl_internal_set__color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__currentTiming(float_t  value) ;

constexpr void __cordl_internal_set__duration(float_t  value) ;

constexpr void __cordl_internal_set__effectScaledByPower(bool  value) ;

constexpr void __cordl_internal_set__isPlaying(bool  value) ;

constexpr void __cordl_internal_set__multiplier(float_t  value) ;

constexpr void __cordl_internal_set__padRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__particleAmount(::VROSC::MinMaxInt*  value) ;

constexpr void __cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set__powerCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__preview(bool  value) ;

constexpr void __cordl_internal_set__previewColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__previewMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__previewTiming(float_t  value) ;

constexpr void __cordl_internal_set__propBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

/// @brief Method .ctor, addr 0x1727c50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LaunchPadEffectOnSignal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LaunchPadEffectOnSignal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LaunchPadEffectOnSignal(LaunchPadEffectOnSignal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LaunchPadEffectOnSignal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LaunchPadEffectOnSignal(LaunchPadEffectOnSignal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1030};

/// @brief Field _padRenderer, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____padRenderer;

/// @brief Field _effectScaledByPower, offset: 0x50, size: 0x1, def value: None
 bool  ____effectScaledByPower;

/// @brief Field _duration, offset: 0x54, size: 0x4, def value: None
 float_t  ____duration;

/// @brief Field _powerCurve, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____powerCurve;

/// @brief Field _particleSystem, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ____particleSystem;

/// @brief Field _particleAmount, offset: 0x68, size: 0x8, def value: None
 ::VROSC::MinMaxInt*  ____particleAmount;

/// @brief Field _preview, offset: 0x70, size: 0x1, def value: None
 bool  ____preview;

/// @brief Field _previewColor, offset: 0x74, size: 0x10, def value: None
 ::UnityEngine::Color  ____previewColor;

/// @brief Field _previewTiming, offset: 0x84, size: 0x4, def value: None
 float_t  ____previewTiming;

/// @brief Field _previewMultiplier, offset: 0x88, size: 0x4, def value: None
 float_t  ____previewMultiplier;

/// @brief Field _color, offset: 0x8c, size: 0x10, def value: None
 ::UnityEngine::Color  ____color;

/// @brief Field _propBlock, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____propBlock;

/// @brief Field _currentTiming, offset: 0xa8, size: 0x4, def value: None
 float_t  ____currentTiming;

/// @brief Field _multiplier, offset: 0xac, size: 0x4, def value: None
 float_t  ____multiplier;

/// @brief Field _isPlaying, offset: 0xb0, size: 0x1, def value: None
 bool  ____isPlaying;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal, ____padRenderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal, ____effectScaledByPower) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal, ____duration) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal, ____powerCurve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal, ____particleSystem) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal, ____particleAmount) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal, ____preview) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal, ____previewColor) == 0x74, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal, ____previewTiming) == 0x84, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal, ____previewMultiplier) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal, ____color) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal, ____propBlock) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal, ____currentTiming) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal, ____multiplier) == 0xac, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchPadEffectOnSignal, ____isPlaying) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LaunchPadEffectOnSignal, 0xb8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LaunchPadEffectOnSignal);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LaunchPadEffectOnSignal*, "VROSC", "LaunchPadEffectOnSignal");
NEED_NO_BOX(::VROSC::LaunchPadEffectOnSignal__ActivateFlow_d__16);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LaunchPadEffectOnSignal__ActivateFlow_d__16*, "VROSC", "LaunchPadEffectOnSignal/<ActivateFlow>d__16");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LaunchPadEffectOnSignal__NodeBegin_d__14, "VROSC", "LaunchPadEffectOnSignal/<NodeBegin>d__14");
