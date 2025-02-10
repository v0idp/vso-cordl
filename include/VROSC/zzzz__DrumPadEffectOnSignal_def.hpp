#pragma once
// IWYU pragma private; include "VROSC/DrumPadEffectOnSignal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__SignalNode_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrumPadEffectOnSignal)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace VROSC {
struct DrumPadEffectOnSignal__NodeBegin_d__6;
}
namespace VROSC {
class DrumpadEffect;
}
namespace VROSC {
class DrumpadPulseEffect;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class DrumPadEffectOnSignal;
}
namespace VROSC {
struct DrumPadEffectOnSignal__NodeBegin_d__6;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DrumPadEffectOnSignal);
MARK_VAL_T(::VROSC::DrumPadEffectOnSignal__NodeBegin_d__6);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.DrumPadEffectOnSignal/<NodeBegin>d__6
struct CORDL_TYPE DrumPadEffectOnSignal__NodeBegin_d__6 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1726a90, size 0x278, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1726d08, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr DrumPadEffectOnSignal__NodeBegin_d__6() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "signal", ty: "::VROSC::Signal*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::DrumPadEffectOnSignal>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr DrumPadEffectOnSignal__NodeBegin_d__6(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::Signal*  signal, ::UnityW<::VROSC::DrumPadEffectOnSignal>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1021};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field signal, offset: 0x28, size: 0x8, def value: None
 ::VROSC::Signal*  signal;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::DrumPadEffectOnSignal>  __4__this;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DrumPadEffectOnSignal__NodeBegin_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumPadEffectOnSignal__NodeBegin_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumPadEffectOnSignal__NodeBegin_d__6, signal) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumPadEffectOnSignal__NodeBegin_d__6, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumPadEffectOnSignal__NodeBegin_d__6, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DrumPadEffectOnSignal__NodeBegin_d__6, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Color, VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DrumPadEffectOnSignal
class CORDL_TYPE DrumPadEffectOnSignal : public ::VROSC::SignalNode {
public:
// Declarations
using _NodeBegin_d__6 = ::VROSC::DrumPadEffectOnSignal__NodeBegin_d__6;

/// @brief Field _color, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) ::UnityEngine::Color  _color;

/// @brief Field _effect, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__effect, put=__cordl_internal_set__effect)) ::UnityW<::VROSC::DrumpadEffect>  _effect;

/// @brief Field _propBlock, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__propBlock, put=__cordl_internal_set__propBlock)) ::UnityEngine::MaterialPropertyBlock*  _propBlock;

/// @brief Field _pulsating, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__pulsating, put=__cordl_internal_set__pulsating)) bool  _pulsating;

/// @brief Field _pulseEffect, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__pulseEffect, put=__cordl_internal_set__pulseEffect)) ::UnityW<::VROSC::DrumpadPulseEffect>  _pulseEffect;

/// @brief Method Activate, addr 0x17269e8, size 0x18, virtual false, abstract: false, final false
inline void Activate(float_t  power) ;

/// @brief Method DisplayEffectForTime, addr 0x1726a70, size 0x18, virtual false, abstract: false, final false
inline void DisplayEffectForTime(float_t  time, float_t  inputScaling, ::UnityEngine::Color  color) ;

static inline ::VROSC::DrumPadEffectOnSignal* New_ctor() ;

/// @brief Method NodeBegin, addr 0x1726950, size 0x98, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method SetColor, addr 0x1726934, size 0x1c, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color, bool  affectVisual) ;

/// @brief Method StartPulsating, addr 0x1726a00, size 0x2c, virtual false, abstract: false, final false
inline void StartPulsating() ;

/// @brief Method StopPulsating, addr 0x1726a4c, size 0x1c, virtual false, abstract: false, final false
inline void StopPulsating() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__color() ;

constexpr ::UnityW<::VROSC::DrumpadEffect> const& __cordl_internal_get__effect() const;

constexpr ::UnityW<::VROSC::DrumpadEffect>& __cordl_internal_get__effect() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__propBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__propBlock() ;

constexpr bool const& __cordl_internal_get__pulsating() const;

constexpr bool& __cordl_internal_get__pulsating() ;

constexpr ::UnityW<::VROSC::DrumpadPulseEffect> const& __cordl_internal_get__pulseEffect() const;

constexpr ::UnityW<::VROSC::DrumpadPulseEffect>& __cordl_internal_get__pulseEffect() ;

constexpr void __cordl_internal_set__color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__effect(::UnityW<::VROSC::DrumpadEffect>  value) ;

constexpr void __cordl_internal_set__propBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__pulsating(bool  value) ;

constexpr void __cordl_internal_set__pulseEffect(::UnityW<::VROSC::DrumpadPulseEffect>  value) ;

/// @brief Method .ctor, addr 0x1726a88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrumPadEffectOnSignal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrumPadEffectOnSignal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrumPadEffectOnSignal(DrumPadEffectOnSignal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrumPadEffectOnSignal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrumPadEffectOnSignal(DrumPadEffectOnSignal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1022};

/// @brief Field _effect, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::DrumpadEffect>  ____effect;

/// @brief Field _pulseEffect, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::DrumpadPulseEffect>  ____pulseEffect;

/// @brief Field _color, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Color  ____color;

/// @brief Field _pulsating, offset: 0x68, size: 0x1, def value: None
 bool  ____pulsating;

/// @brief Field _propBlock, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____propBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DrumPadEffectOnSignal, ____effect) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumPadEffectOnSignal, ____pulseEffect) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumPadEffectOnSignal, ____color) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumPadEffectOnSignal, ____pulsating) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumPadEffectOnSignal, ____propBlock) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DrumPadEffectOnSignal, 0x78>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DrumPadEffectOnSignal);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DrumPadEffectOnSignal*, "VROSC", "DrumPadEffectOnSignal");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DrumPadEffectOnSignal__NodeBegin_d__6, "VROSC", "DrumPadEffectOnSignal/<NodeBegin>d__6");
