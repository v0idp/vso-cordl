#pragma once
// IWYU pragma private; include "VROSC/PredictiveHitWisp.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__PredictiveHitWisp_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__TrailRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__MalletVisual_def.hpp"
#include "VROSC/zzzz__PredictiveHitWisp_def.hpp"
#include "VROSC/zzzz__PredictiveHittable_def.hpp"
//  Writing Method size for method: ::VROSC::PredictiveHitWisp_ParticleEffect.Trigger
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PredictiveHitWisp_ParticleEffect::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::VROSC::PredictiveHitWisp_ParticleEffect::Trigger)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x17284d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitWisp_ParticleEffect*>::get(),
                        "Trigger",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PredictiveHitWisp_ParticleEffect.SetColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PredictiveHitWisp_ParticleEffect::*)(::UnityEngine::Color)>(&::VROSC::PredictiveHitWisp_ParticleEffect::SetColor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x17285e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitWisp_ParticleEffect*>::get(),
                        "SetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PredictiveHitWisp_ParticleEffect._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PredictiveHitWisp_ParticleEffect::*)()>(&::VROSC::PredictiveHitWisp_ParticleEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17286cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitWisp_ParticleEffect*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& VROSC::PredictiveHitWisp_ParticleEffect::__cordl_internal_get__particleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____particleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& VROSC::PredictiveHitWisp_ParticleEffect::__cordl_internal_get__particleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____particleSystem;
}
constexpr void VROSC::PredictiveHitWisp_ParticleEffect::__cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____particleSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::PredictiveHitWisp_ParticleEffect::__cordl_internal_get__emitAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emitAmount;
}
constexpr int32_t const& VROSC::PredictiveHitWisp_ParticleEffect::__cordl_internal_get__emitAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emitAmount;
}
constexpr void VROSC::PredictiveHitWisp_ParticleEffect::__cordl_internal_set__emitAmount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emitAmount = value;
}
inline void VROSC::PredictiveHitWisp_ParticleEffect::Trigger(::UnityEngine::Vector3  hitpoint, ::UnityEngine::Vector3  lookDirection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitWisp_ParticleEffect*>::get(),
                        "Trigger",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hitpoint, lookDirection);
}
inline void VROSC::PredictiveHitWisp_ParticleEffect::SetColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitWisp_ParticleEffect*>::get(),
                        "SetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void VROSC::PredictiveHitWisp_ParticleEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitWisp_ParticleEffect*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::PredictiveHitWisp_ParticleEffect* VROSC::PredictiveHitWisp_ParticleEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PredictiveHitWisp_ParticleEffect*>());
}
// Ctor Parameters []
constexpr ::VROSC::PredictiveHitWisp_ParticleEffect::PredictiveHitWisp_ParticleEffect()   {
}
//  Writing Method size for method: ::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7::*)()>(&::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x17286d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1728c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::PredictiveHitWisp__SetAtHitpoint_d__7::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::PredictiveHitWisp__SetAtHitpoint_d__7::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::PredictiveHitWisp__SetAtHitpoint_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::PredictiveHitWisp__SetAtHitpoint_d__7::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "dspTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::PredictiveHitWisp>", modifiers: "", def_value: Some("{}") }, CppParam { name: "hitpoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "predictiveHittable", ty: "::UnityW<::VROSC::PredictiveHittable>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7::PredictiveHitWisp__SetAtHitpoint_d__7(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, double_t  dspTime, ::UnityW<::VROSC::PredictiveHitWisp>  __4__this, ::UnityEngine::Vector3  hitpoint, ::UnityW<::VROSC::PredictiveHittable>  predictiveHittable, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->dspTime = dspTime;
this->__4__this = __4__this;
this->hitpoint = hitpoint;
this->predictiveHittable = predictiveHittable;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::PredictiveHitWisp__SetAtHitpoint_d__7::PredictiveHitWisp__SetAtHitpoint_d__7()   {
}
//  Writing Method size for method: ::VROSC::PredictiveHitWisp.SetAtHitpoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PredictiveHitWisp::*)(double_t, ::UnityEngine::Vector3, ::VROSC::PredictiveHittable*)>(&::VROSC::PredictiveHitWisp::SetAtHitpoint)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x17283f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitWisp*>::get(),
                        "SetAtHitpoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PredictiveHittable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PredictiveHitWisp.SetTrailColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PredictiveHitWisp::*)(::UnityEngine::Color)>(&::VROSC::PredictiveHitWisp::SetTrailColor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x171a418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitWisp*>::get(),
                        "SetTrailColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PredictiveHitWisp._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PredictiveHitWisp::*)()>(&::VROSC::PredictiveHitWisp::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x17284c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitWisp*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::PredictiveHitWisp::__cordl_internal_get__wisp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wisp;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::PredictiveHitWisp::__cordl_internal_get__wisp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wisp;
}
constexpr void VROSC::PredictiveHitWisp::__cordl_internal_set__wisp(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____wisp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::PredictiveHitWisp::__cordl_internal_get_remainMs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainMs;
}
constexpr int32_t const& VROSC::PredictiveHitWisp::__cordl_internal_get_remainMs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainMs;
}
constexpr void VROSC::PredictiveHitWisp::__cordl_internal_set_remainMs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remainMs = value;
}
constexpr ::ArrayW<::VROSC::PredictiveHitWisp_ParticleEffect*,::Array<::VROSC::PredictiveHitWisp_ParticleEffect*>*>& VROSC::PredictiveHitWisp::__cordl_internal_get__particleEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____particleEffects;
}
constexpr ::ArrayW<::VROSC::PredictiveHitWisp_ParticleEffect*,::Array<::VROSC::PredictiveHitWisp_ParticleEffect*>*> const& VROSC::PredictiveHitWisp::__cordl_internal_get__particleEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____particleEffects;
}
constexpr void VROSC::PredictiveHitWisp::__cordl_internal_set__particleEffects(::ArrayW<::VROSC::PredictiveHitWisp_ParticleEffect*,::Array<::VROSC::PredictiveHitWisp_ParticleEffect*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____particleEffects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::PredictiveHitWisp::__cordl_internal_get__lookAtPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lookAtPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::PredictiveHitWisp::__cordl_internal_get__lookAtPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lookAtPoint;
}
constexpr void VROSC::PredictiveHitWisp::__cordl_internal_set__lookAtPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lookAtPoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::TrailRenderer>& VROSC::PredictiveHitWisp::__cordl_internal_get__trailRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trailRenderer;
}
constexpr ::UnityW<::UnityEngine::TrailRenderer> const& VROSC::PredictiveHitWisp::__cordl_internal_get__trailRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trailRenderer;
}
constexpr void VROSC::PredictiveHitWisp::__cordl_internal_set__trailRenderer(::UnityW<::UnityEngine::TrailRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trailRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::MalletVisual>& VROSC::PredictiveHitWisp::__cordl_internal_get__malletVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____malletVisual;
}
constexpr ::UnityW<::VROSC::MalletVisual> const& VROSC::PredictiveHitWisp::__cordl_internal_get__malletVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____malletVisual;
}
constexpr void VROSC::PredictiveHitWisp::__cordl_internal_set__malletVisual(::UnityW<::VROSC::MalletVisual>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____malletVisual)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::PredictiveHitWisp::SetAtHitpoint(double_t  dspTime, ::UnityEngine::Vector3  hitpoint, ::VROSC::PredictiveHittable*  predictiveHittable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitWisp*>::get(),
                        "SetAtHitpoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PredictiveHittable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dspTime, hitpoint, predictiveHittable);
}
inline void VROSC::PredictiveHitWisp::SetTrailColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitWisp*>::get(),
                        "SetTrailColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void VROSC::PredictiveHitWisp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitWisp*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::PredictiveHitWisp* VROSC::PredictiveHitWisp::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PredictiveHitWisp*>());
}
// Ctor Parameters []
constexpr ::VROSC::PredictiveHitWisp::PredictiveHitWisp()   {
}
