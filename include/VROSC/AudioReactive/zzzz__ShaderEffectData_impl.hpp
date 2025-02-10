#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/ShaderEffectData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/AudioReactive/zzzz__AudioReactiveEffectData_impl.hpp"
#include "VROSC/AudioReactive/zzzz__ShaderEffectData_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "VROSC/AudioReactive/zzzz__ShaderEffectData_def.hpp"
#include "VROSC/zzzz__MinMaxFloat_def.hpp"
#include "VROSC/zzzz__MinMaxVector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::AudioReactive::Effect_ShaderEffectData_EffectType::Effect_ShaderEffectData_EffectType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::Effect_ShaderEffectData_EffectType::Effect_ShaderEffectData_EffectType()   {
}
constexpr ::VROSC::AudioReactive::Effect_ShaderEffectData_EffectType  VROSC::AudioReactive::Effect_ShaderEffectData_EffectType::Color{static_cast<int32_t>(0x0)};
constexpr ::VROSC::AudioReactive::Effect_ShaderEffectData_EffectType  VROSC::AudioReactive::Effect_ShaderEffectData_EffectType::Float{static_cast<int32_t>(0x1)};
constexpr ::VROSC::AudioReactive::Effect_ShaderEffectData_EffectType  VROSC::AudioReactive::Effect_ShaderEffectData_EffectType::Vector{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::VROSC::AudioReactive::ShaderEffectData_Effect.SetShaderEffects
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ShaderEffectData_Effect::*)(::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Renderer*, float_t)>(&::VROSC::AudioReactive::ShaderEffectData_Effect::SetShaderEffects)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x17d74ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ShaderEffectData_Effect*>::get(),
                        "SetShaderEffects",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ShaderEffectData_Effect.SetColorValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ShaderEffectData_Effect::*)(::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Renderer*, float_t)>(&::VROSC::AudioReactive::ShaderEffectData_Effect::SetColorValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x17d9364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ShaderEffectData_Effect*>::get(),
                        "SetColorValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ShaderEffectData_Effect.SetFloatValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ShaderEffectData_Effect::*)(::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Renderer*, float_t)>(&::VROSC::AudioReactive::ShaderEffectData_Effect::SetFloatValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x17d93dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ShaderEffectData_Effect*>::get(),
                        "SetFloatValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ShaderEffectData_Effect.SetVectorValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ShaderEffectData_Effect::*)(::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Renderer*, float_t)>(&::VROSC::AudioReactive::ShaderEffectData_Effect::SetVectorValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17d9454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ShaderEffectData_Effect*>::get(),
                        "SetVectorValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ShaderEffectData_Effect._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ShaderEffectData_Effect::*)()>(&::VROSC::AudioReactive::ShaderEffectData_Effect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d94d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ShaderEffectData_Effect*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::AudioReactive::Effect_ShaderEffectData_EffectType& VROSC::AudioReactive::ShaderEffectData_Effect::__cordl_internal_get__type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr ::VROSC::AudioReactive::Effect_ShaderEffectData_EffectType const& VROSC::AudioReactive::ShaderEffectData_Effect::__cordl_internal_get__type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr void VROSC::AudioReactive::ShaderEffectData_Effect::__cordl_internal_set__type(::VROSC::AudioReactive::Effect_ShaderEffectData_EffectType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____type = value;
}
constexpr ::StringW& VROSC::AudioReactive::ShaderEffectData_Effect::__cordl_internal_get__propertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propertyName;
}
constexpr ::StringW const& VROSC::AudioReactive::ShaderEffectData_Effect::__cordl_internal_get__propertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propertyName;
}
constexpr void VROSC::AudioReactive::ShaderEffectData_Effect::__cordl_internal_set__propertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____propertyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::MinMaxFloat*& VROSC::AudioReactive::ShaderEffectData_Effect::__cordl_internal_get__floatValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____floatValue;
}
constexpr ::VROSC::MinMaxFloat* const& VROSC::AudioReactive::ShaderEffectData_Effect::__cordl_internal_get__floatValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____floatValue;
}
constexpr void VROSC::AudioReactive::ShaderEffectData_Effect::__cordl_internal_set__floatValue(::VROSC::MinMaxFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floatValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Gradient*& VROSC::AudioReactive::ShaderEffectData_Effect::__cordl_internal_get__colorValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorValue;
}
constexpr ::UnityEngine::Gradient* const& VROSC::AudioReactive::ShaderEffectData_Effect::__cordl_internal_get__colorValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorValue;
}
constexpr void VROSC::AudioReactive::ShaderEffectData_Effect::__cordl_internal_set__colorValue(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::MinMaxVector4*& VROSC::AudioReactive::ShaderEffectData_Effect::__cordl_internal_get__vectorValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vectorValue;
}
constexpr ::VROSC::MinMaxVector4* const& VROSC::AudioReactive::ShaderEffectData_Effect::__cordl_internal_get__vectorValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vectorValue;
}
constexpr void VROSC::AudioReactive::ShaderEffectData_Effect::__cordl_internal_set__vectorValue(::VROSC::MinMaxVector4*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vectorValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::AudioReactive::ShaderEffectData_Effect::__cordl_internal_get__curve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::AudioReactive::ShaderEffectData_Effect::__cordl_internal_get__curve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr void VROSC::AudioReactive::ShaderEffectData_Effect::__cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::AudioReactive::ShaderEffectData_Effect::SetShaderEffects(::UnityEngine::MaterialPropertyBlock*  block, ::UnityEngine::Renderer*  renderer, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ShaderEffectData_Effect*>::get(),
                        "SetShaderEffects",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, block, renderer, value);
}
inline void VROSC::AudioReactive::ShaderEffectData_Effect::SetColorValue(::UnityEngine::MaterialPropertyBlock*  block, ::UnityEngine::Renderer*  renderer, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ShaderEffectData_Effect*>::get(),
                        "SetColorValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, block, renderer, value);
}
inline void VROSC::AudioReactive::ShaderEffectData_Effect::SetFloatValue(::UnityEngine::MaterialPropertyBlock*  block, ::UnityEngine::Renderer*  renderer, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ShaderEffectData_Effect*>::get(),
                        "SetFloatValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, block, renderer, value);
}
inline void VROSC::AudioReactive::ShaderEffectData_Effect::SetVectorValue(::UnityEngine::MaterialPropertyBlock*  block, ::UnityEngine::Renderer*  renderer, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ShaderEffectData_Effect*>::get(),
                        "SetVectorValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, block, renderer, value);
}
inline void VROSC::AudioReactive::ShaderEffectData_Effect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ShaderEffectData_Effect*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AudioReactive::ShaderEffectData_Effect* VROSC::AudioReactive::ShaderEffectData_Effect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioReactive::ShaderEffectData_Effect*>());
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::ShaderEffectData_Effect::ShaderEffectData_Effect()   {
}
//  Writing Method size for method: ::VROSC::AudioReactive::ShaderEffectData.get_Duration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::AudioReactive::ShaderEffectData::*)()>(&::VROSC::AudioReactive::ShaderEffectData::get_Duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d934c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ShaderEffectData*>::get(),
                        "get_Duration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ShaderEffectData.get_Effects
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::VROSC::AudioReactive::ShaderEffectData_Effect*,::Array<::VROSC::AudioReactive::ShaderEffectData_Effect*>*> (::VROSC::AudioReactive::ShaderEffectData::*)()>(&::VROSC::AudioReactive::ShaderEffectData::get_Effects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d9354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ShaderEffectData*>::get(),
                        "get_Effects",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ShaderEffectData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ShaderEffectData::*)()>(&::VROSC::AudioReactive::ShaderEffectData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d935c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ShaderEffectData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::AudioReactive::ShaderEffectData::__cordl_internal_get__duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____duration;
}
constexpr float_t const& VROSC::AudioReactive::ShaderEffectData::__cordl_internal_get__duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____duration;
}
constexpr void VROSC::AudioReactive::ShaderEffectData::__cordl_internal_set__duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____duration = value;
}
constexpr ::ArrayW<::VROSC::AudioReactive::ShaderEffectData_Effect*,::Array<::VROSC::AudioReactive::ShaderEffectData_Effect*>*>& VROSC::AudioReactive::ShaderEffectData::__cordl_internal_get__effects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effects;
}
constexpr ::ArrayW<::VROSC::AudioReactive::ShaderEffectData_Effect*,::Array<::VROSC::AudioReactive::ShaderEffectData_Effect*>*> const& VROSC::AudioReactive::ShaderEffectData::__cordl_internal_get__effects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effects;
}
constexpr void VROSC::AudioReactive::ShaderEffectData::__cordl_internal_set__effects(::ArrayW<::VROSC::AudioReactive::ShaderEffectData_Effect*,::Array<::VROSC::AudioReactive::ShaderEffectData_Effect*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____effects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t VROSC::AudioReactive::ShaderEffectData::get_Duration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ShaderEffectData*>::get(),
                        "get_Duration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::ArrayW<::VROSC::AudioReactive::ShaderEffectData_Effect*,::Array<::VROSC::AudioReactive::ShaderEffectData_Effect*>*> VROSC::AudioReactive::ShaderEffectData::get_Effects()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ShaderEffectData*>::get(),
                        "get_Effects",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::VROSC::AudioReactive::ShaderEffectData_Effect*,::Array<::VROSC::AudioReactive::ShaderEffectData_Effect*>*>, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::ShaderEffectData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ShaderEffectData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AudioReactive::ShaderEffectData* VROSC::AudioReactive::ShaderEffectData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioReactive::ShaderEffectData*>());
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::ShaderEffectData::ShaderEffectData()   {
}
