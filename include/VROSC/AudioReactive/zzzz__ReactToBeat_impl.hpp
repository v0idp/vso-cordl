#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/ReactToBeat.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/AudioReactive/zzzz__AudioReactiveBehaviour_impl.hpp"
#include "VROSC/AudioReactive/zzzz__ReactToBeat_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "VROSC/AudioReactive/zzzz__DrumpadEffect_def.hpp"
#include "VROSC/AudioReactive/zzzz__EmitParticlesEffect_def.hpp"
#include "VROSC/AudioReactive/zzzz__LerpColorEffect_def.hpp"
#include "VROSC/AudioReactive/zzzz__ReactToBeat_def.hpp"
#include "VROSC/AudioReactive/zzzz__ReactiveEffect_def.hpp"
#include "VROSC/AudioReactive/zzzz__RotateEffect_def.hpp"
#include "VROSC/AudioReactive/zzzz__ScaleEffect_def.hpp"
#include "VROSC/AudioReactive/zzzz__ShaderEffect_def.hpp"
#include "VROSC/AudioReactive/zzzz__ShiftColorEffect_def.hpp"
#include "VROSC/AudioReactive/zzzz__SlowdownParticlesEffect_def.hpp"
#include "VROSC/AudioReactive/zzzz__TransformLerpEffect_def.hpp"
#include "VROSC/AudioReactive/zzzz__TranslateEffect_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type::ReactToBeatEffect_ReactToBeat_Type(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type::ReactToBeatEffect_ReactToBeat_Type()   {
}
constexpr ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type  VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type::ColorChange{static_cast<int32_t>(0x0)};
constexpr ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type  VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type::Rotate{static_cast<int32_t>(0x1)};
constexpr ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type  VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type::Translate{static_cast<int32_t>(0x2)};
constexpr ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type  VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type::Scale{static_cast<int32_t>(0x3)};
constexpr ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type  VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type::Transform{static_cast<int32_t>(0x4)};
constexpr ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type  VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type::EmitParticles{static_cast<int32_t>(0x5)};
constexpr ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type  VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type::AffectParticleSpeed{static_cast<int32_t>(0x6)};
constexpr ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type  VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type::ShaderEffect{static_cast<int32_t>(0x7)};
constexpr ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type  VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type::ShiftColor{static_cast<int32_t>(0x8)};
constexpr ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type  VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type::DrumpadEffect{static_cast<int32_t>(0x9)};
//  Writing Method size for method: ::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect.get_Effect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AudioReactive::ReactiveEffect* (::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::*)()>(&::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::get_Effect)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17db198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect*>::get(),
                        "get_Effect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::*)(::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type)>(&::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::_ctor)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x17db538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect.GetEffectByType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AudioReactive::ReactiveEffect* (::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::*)()>(&::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::GetEffectByType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x17db9d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect*>::get(),
                        "GetEffectByType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::AudioReactive::LerpColorEffect*& VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_get__colorEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorEffect;
}
constexpr ::VROSC::AudioReactive::LerpColorEffect* const& VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_get__colorEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorEffect;
}
constexpr void VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_set__colorEffect(::VROSC::AudioReactive::LerpColorEffect*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::AudioReactive::RotateEffect*& VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_get__rotateEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotateEffect;
}
constexpr ::VROSC::AudioReactive::RotateEffect* const& VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_get__rotateEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotateEffect;
}
constexpr void VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_set__rotateEffect(::VROSC::AudioReactive::RotateEffect*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rotateEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::AudioReactive::TranslateEffect*& VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_get__translateEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____translateEffect;
}
constexpr ::VROSC::AudioReactive::TranslateEffect* const& VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_get__translateEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____translateEffect;
}
constexpr void VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_set__translateEffect(::VROSC::AudioReactive::TranslateEffect*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____translateEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::AudioReactive::ScaleEffect*& VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_get__scaleEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleEffect;
}
constexpr ::VROSC::AudioReactive::ScaleEffect* const& VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_get__scaleEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleEffect;
}
constexpr void VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_set__scaleEffect(::VROSC::AudioReactive::ScaleEffect*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scaleEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::AudioReactive::TransformLerpEffect*& VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_get__transformEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformEffect;
}
constexpr ::VROSC::AudioReactive::TransformLerpEffect* const& VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_get__transformEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformEffect;
}
constexpr void VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_set__transformEffect(::VROSC::AudioReactive::TransformLerpEffect*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transformEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::AudioReactive::EmitParticlesEffect*& VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_get__emitParticlesEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emitParticlesEffect;
}
constexpr ::VROSC::AudioReactive::EmitParticlesEffect* const& VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_get__emitParticlesEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emitParticlesEffect;
}
constexpr void VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_set__emitParticlesEffect(::VROSC::AudioReactive::EmitParticlesEffect*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____emitParticlesEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::AudioReactive::SlowdownParticlesEffect*& VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_get__slowdownParticlesEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slowdownParticlesEffect;
}
constexpr ::VROSC::AudioReactive::SlowdownParticlesEffect* const& VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_get__slowdownParticlesEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slowdownParticlesEffect;
}
constexpr void VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_set__slowdownParticlesEffect(::VROSC::AudioReactive::SlowdownParticlesEffect*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____slowdownParticlesEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::AudioReactive::ShaderEffect*& VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_get__shaderEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shaderEffect;
}
constexpr ::VROSC::AudioReactive::ShaderEffect* const& VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_get__shaderEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shaderEffect;
}
constexpr void VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_set__shaderEffect(::VROSC::AudioReactive::ShaderEffect*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shaderEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::AudioReactive::ShiftColorEffect*& VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_get__shiftColorEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shiftColorEffect;
}
constexpr ::VROSC::AudioReactive::ShiftColorEffect* const& VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_get__shiftColorEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shiftColorEffect;
}
constexpr void VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_set__shiftColorEffect(::VROSC::AudioReactive::ShiftColorEffect*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shiftColorEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::AudioReactive::DrumpadEffect*& VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_get__drumpadEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drumpadEffect;
}
constexpr ::VROSC::AudioReactive::DrumpadEffect* const& VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_get__drumpadEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drumpadEffect;
}
constexpr void VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_set__drumpadEffect(::VROSC::AudioReactive::DrumpadEffect*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____drumpadEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type& VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_get__type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr ::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type const& VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_get__type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr void VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::__cordl_internal_set__type(::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____type = value;
}
inline ::VROSC::AudioReactive::ReactiveEffect* VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::get_Effect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect*>::get(),
                        "get_Effect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::AudioReactive::ReactiveEffect*, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::_ctor(::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::VROSC::AudioReactive::ReactiveEffect* VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::GetEffectByType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect*>::get(),
                        "GetEffectByType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::AudioReactive::ReactiveEffect*, false>(this, ___internal_method);
}
inline ::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect* VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::New_ctor(::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type  type)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect*>(type));
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect::ReactToBeat_ReactToBeatEffect()   {
}
//  Writing Method size for method: ::VROSC::AudioReactive::ReactToBeat.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ReactToBeat::*)()>(&::VROSC::AudioReactive::ReactToBeat::Awake)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x17db034;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ReactToBeat*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ReactToBeat*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ReactToBeat.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ReactToBeat::*)()>(&::VROSC::AudioReactive::ReactToBeat::Update)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x17db19c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ReactToBeat*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ReactToBeat.OnBeat
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ReactToBeat::*)(int32_t)>(&::VROSC::AudioReactive::ReactToBeat::OnBeat)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x17db2fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ReactToBeat*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ReactToBeat*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ReactToBeat.AddEffect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ReactToBeat::*)(::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type)>(&::VROSC::AudioReactive::ReactToBeat::AddEffect)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x17db45c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ReactToBeat*>::get(),
                        "AddEffect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ReactToBeat.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ReactToBeat::*)()>(&::VROSC::AudioReactive::ReactToBeat::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x17db788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ReactToBeat*>::get(),
                        "OnDrawGizmos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ReactToBeat._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ReactToBeat::*)()>(&::VROSC::AudioReactive::ReactToBeat::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17db954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ReactToBeat*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect*>*& VROSC::AudioReactive::ReactToBeat::__cordl_internal_get__effects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effects;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect*>* const& VROSC::AudioReactive::ReactToBeat::__cordl_internal_get__effects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effects;
}
constexpr void VROSC::AudioReactive::ReactToBeat::__cordl_internal_set__effects(::System::Collections::Generic::List_1<::VROSC::AudioReactive::ReactToBeat_ReactToBeatEffect*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____effects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::AudioReactive::ReactToBeat::__cordl_internal_get__showGuides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showGuides;
}
constexpr bool const& VROSC::AudioReactive::ReactToBeat::__cordl_internal_get__showGuides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showGuides;
}
constexpr void VROSC::AudioReactive::ReactToBeat::__cordl_internal_set__showGuides(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____showGuides = value;
}
inline void VROSC::AudioReactive::ReactToBeat::Awake()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ReactToBeat*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::ReactToBeat::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ReactToBeat*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::ReactToBeat::OnBeat(int32_t  beat)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ReactToBeat*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat);
}
inline void VROSC::AudioReactive::ReactToBeat::AddEffect(::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ReactToBeat*>::get(),
                        "AddEffect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AudioReactive::ReactToBeatEffect_ReactToBeat_Type>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void VROSC::AudioReactive::ReactToBeat::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ReactToBeat*>::get(),
                        "OnDrawGizmos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::ReactToBeat::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ReactToBeat*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AudioReactive::ReactToBeat* VROSC::AudioReactive::ReactToBeat::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioReactive::ReactToBeat*>());
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::ReactToBeat::ReactToBeat()   {
}
