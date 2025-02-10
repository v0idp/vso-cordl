#pragma once
// IWYU pragma private; include "VROSC/PredictiveHitWisp.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PredictiveHitWisp)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class TrailRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class MalletVisual;
}
namespace VROSC {
class PredictiveHitWisp_ParticleEffect;
}
namespace VROSC {
struct PredictiveHitWisp__SetAtHitpoint_d__7;
}
namespace VROSC {
class PredictiveHittable;
}
// Forward declare root types
namespace VROSC {
class PredictiveHitWisp;
}
namespace VROSC {
class PredictiveHitWisp_ParticleEffect;
}
namespace VROSC {
struct PredictiveHitWisp__SetAtHitpoint_d__7;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PredictiveHitWisp);
MARK_REF_PTR_T(::VROSC::PredictiveHitWisp_ParticleEffect);
MARK_VAL_T(::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PredictiveHitWisp/ParticleEffect
class CORDL_TYPE PredictiveHitWisp_ParticleEffect : public ::System::Object {
public:
// Declarations
/// @brief Field _emitAmount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__emitAmount, put=__cordl_internal_set__emitAmount)) int32_t  _emitAmount;

/// @brief Field _particleSystem, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__particleSystem, put=__cordl_internal_set__particleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  _particleSystem;

static inline ::VROSC::PredictiveHitWisp_ParticleEffect* New_ctor() ;

/// @brief Method SetColor, addr 0x17285e4, size 0xe8, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method Trigger, addr 0x17284d4, size 0x110, virtual false, abstract: false, final false
inline void Trigger(::UnityEngine::Vector3  hitpoint, ::UnityEngine::Vector3  lookDirection) ;

constexpr int32_t const& __cordl_internal_get__emitAmount() const;

constexpr int32_t& __cordl_internal_get__emitAmount() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particleSystem() ;

constexpr void __cordl_internal_set__emitAmount(int32_t  value) ;

constexpr void __cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

/// @brief Method .ctor, addr 0x17286cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PredictiveHitWisp_ParticleEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PredictiveHitWisp_ParticleEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PredictiveHitWisp_ParticleEffect(PredictiveHitWisp_ParticleEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PredictiveHitWisp_ParticleEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PredictiveHitWisp_ParticleEffect(PredictiveHitWisp_ParticleEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1033};

/// @brief Field _particleSystem, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ____particleSystem;

/// @brief Field _emitAmount, offset: 0x18, size: 0x4, def value: None
 int32_t  ____emitAmount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PredictiveHitWisp_ParticleEffect, ____particleSystem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitWisp_ParticleEffect, ____emitAmount) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PredictiveHitWisp_ParticleEffect, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter, UnityEngine.Vector3
namespace VROSC {
// Is value type: true
// CS Name: VROSC.PredictiveHitWisp/<SetAtHitpoint>d__7
struct CORDL_TYPE PredictiveHitWisp__SetAtHitpoint_d__7 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17286d4, size 0x52c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1728c00, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr PredictiveHitWisp__SetAtHitpoint_d__7() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "dspTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::PredictiveHitWisp>", modifiers: "", def_value: None }, CppParam { name: "hitpoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "predictiveHittable", ty: "::UnityW<::VROSC::PredictiveHittable>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr PredictiveHitWisp__SetAtHitpoint_d__7(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, double_t  dspTime, ::UnityW<::VROSC::PredictiveHitWisp>  __4__this, ::UnityEngine::Vector3  hitpoint, ::UnityW<::VROSC::PredictiveHittable>  predictiveHittable, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1034};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field dspTime, offset: 0x28, size: 0x8, def value: None
 double_t  dspTime;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::PredictiveHitWisp>  __4__this;

/// @brief Field hitpoint, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  hitpoint;

/// @brief Field predictiveHittable, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::PredictiveHittable>  predictiveHittable;

/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7, dspTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7, hitpoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7, predictiveHittable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7, __u__1) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7, 0x58>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PredictiveHitWisp
class CORDL_TYPE PredictiveHitWisp : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ParticleEffect = ::VROSC::PredictiveHitWisp_ParticleEffect;

using _SetAtHitpoint_d__7 = ::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7;

/// @brief Field _lookAtPoint, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__lookAtPoint, put=__cordl_internal_set__lookAtPoint)) ::UnityW<::UnityEngine::Transform>  _lookAtPoint;

/// @brief Field _malletVisual, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__malletVisual, put=__cordl_internal_set__malletVisual)) ::UnityW<::VROSC::MalletVisual>  _malletVisual;

/// @brief Field _particleEffects, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__particleEffects, put=__cordl_internal_set__particleEffects)) ::ArrayW<::VROSC::PredictiveHitWisp_ParticleEffect*,::Array<::VROSC::PredictiveHitWisp_ParticleEffect*>*>  _particleEffects;

/// @brief Field _trailRenderer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__trailRenderer, put=__cordl_internal_set__trailRenderer)) ::UnityW<::UnityEngine::TrailRenderer>  _trailRenderer;

/// @brief Field _wisp, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__wisp, put=__cordl_internal_set__wisp)) ::UnityW<::UnityEngine::Transform>  _wisp;

/// @brief Field remainMs, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_remainMs, put=__cordl_internal_set_remainMs)) int32_t  remainMs;

static inline ::VROSC::PredictiveHitWisp* New_ctor() ;

/// @brief Method SetAtHitpoint, addr 0x17283f4, size 0xd0, virtual false, abstract: false, final false
inline void SetAtHitpoint(double_t  dspTime, ::UnityEngine::Vector3  hitpoint, ::VROSC::PredictiveHittable*  predictiveHittable) ;

/// @brief Method SetTrailColor, addr 0x171a418, size 0x64, virtual false, abstract: false, final false
inline void SetTrailColor(::UnityEngine::Color  color) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__lookAtPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__lookAtPoint() ;

constexpr ::UnityW<::VROSC::MalletVisual> const& __cordl_internal_get__malletVisual() const;

constexpr ::UnityW<::VROSC::MalletVisual>& __cordl_internal_get__malletVisual() ;

constexpr ::ArrayW<::VROSC::PredictiveHitWisp_ParticleEffect*,::Array<::VROSC::PredictiveHitWisp_ParticleEffect*>*> const& __cordl_internal_get__particleEffects() const;

constexpr ::ArrayW<::VROSC::PredictiveHitWisp_ParticleEffect*,::Array<::VROSC::PredictiveHitWisp_ParticleEffect*>*>& __cordl_internal_get__particleEffects() ;

constexpr ::UnityW<::UnityEngine::TrailRenderer> const& __cordl_internal_get__trailRenderer() const;

constexpr ::UnityW<::UnityEngine::TrailRenderer>& __cordl_internal_get__trailRenderer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__wisp() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__wisp() ;

constexpr int32_t const& __cordl_internal_get_remainMs() const;

constexpr int32_t& __cordl_internal_get_remainMs() ;

constexpr void __cordl_internal_set__lookAtPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__malletVisual(::UnityW<::VROSC::MalletVisual>  value) ;

constexpr void __cordl_internal_set__particleEffects(::ArrayW<::VROSC::PredictiveHitWisp_ParticleEffect*,::Array<::VROSC::PredictiveHitWisp_ParticleEffect*>*>  value) ;

constexpr void __cordl_internal_set__trailRenderer(::UnityW<::UnityEngine::TrailRenderer>  value) ;

constexpr void __cordl_internal_set__wisp(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_remainMs(int32_t  value) ;

/// @brief Method .ctor, addr 0x17284c4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PredictiveHitWisp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PredictiveHitWisp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PredictiveHitWisp(PredictiveHitWisp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PredictiveHitWisp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PredictiveHitWisp(PredictiveHitWisp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1035};

/// @brief Field _wisp, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____wisp;

/// @brief Field remainMs, offset: 0x28, size: 0x4, def value: None
 int32_t  ___remainMs;

/// @brief Field _particleEffects, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::VROSC::PredictiveHitWisp_ParticleEffect*,::Array<::VROSC::PredictiveHitWisp_ParticleEffect*>*>  ____particleEffects;

/// @brief Field _lookAtPoint, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____lookAtPoint;

/// @brief Field _trailRenderer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TrailRenderer>  ____trailRenderer;

/// @brief Field _malletVisual, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::MalletVisual>  ____malletVisual;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PredictiveHitWisp, ____wisp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitWisp, ___remainMs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitWisp, ____particleEffects) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitWisp, ____lookAtPoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitWisp, ____trailRenderer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::PredictiveHitWisp, ____malletVisual) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PredictiveHitWisp, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PredictiveHitWisp);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PredictiveHitWisp*, "VROSC", "PredictiveHitWisp");
NEED_NO_BOX(::VROSC::PredictiveHitWisp_ParticleEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PredictiveHitWisp_ParticleEffect*, "VROSC", "PredictiveHitWisp/ParticleEffect");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7, "VROSC", "PredictiveHitWisp/<SetAtHitpoint>d__7");
