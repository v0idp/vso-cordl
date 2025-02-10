#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/ChangeColorEffectData.hpp"
#include "VROSC/AudioReactive/zzzz__AudioReactiveEffectData_impl.hpp"
#include "VROSC/AudioReactive/zzzz__ChangeColorEffectData_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/AudioReactive/zzzz__ChangeColorEffectData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle::ChangeColorEffectData_CycleStyle(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle::ChangeColorEffectData_CycleStyle()   {
}
constexpr ::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle  VROSC::AudioReactive::ChangeColorEffectData_CycleStyle::Random{static_cast<int32_t>(0x0)};
constexpr ::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle  VROSC::AudioReactive::ChangeColorEffectData_CycleStyle::Cycle{static_cast<int32_t>(0x1)};
constexpr ::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle  VROSC::AudioReactive::ChangeColorEffectData_CycleStyle::PingPoing{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::VROSC::AudioReactive::ChangeColorEffectData.get_Colors
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> (::VROSC::AudioReactive::ChangeColorEffectData::*)()>(&::VROSC::AudioReactive::ChangeColorEffectData::get_Colors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d460c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ChangeColorEffectData*>::get(),
                        "get_Colors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ChangeColorEffectData.get_Duration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::AudioReactive::ChangeColorEffectData::*)()>(&::VROSC::AudioReactive::ChangeColorEffectData::get_Duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d4614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ChangeColorEffectData*>::get(),
                        "get_Duration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ChangeColorEffectData.get_Curve
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (::VROSC::AudioReactive::ChangeColorEffectData::*)()>(&::VROSC::AudioReactive::ChangeColorEffectData::get_Curve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d461c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ChangeColorEffectData*>::get(),
                        "get_Curve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ChangeColorEffectData.get_Style
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle (::VROSC::AudioReactive::ChangeColorEffectData::*)()>(&::VROSC::AudioReactive::ChangeColorEffectData::get_Style)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d4624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ChangeColorEffectData*>::get(),
                        "get_Style",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ChangeColorEffectData.get_StartBlack
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::AudioReactive::ChangeColorEffectData::*)()>(&::VROSC::AudioReactive::ChangeColorEffectData::get_StartBlack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d462c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ChangeColorEffectData*>::get(),
                        "get_StartBlack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ChangeColorEffectData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ChangeColorEffectData::*)()>(&::VROSC::AudioReactive::ChangeColorEffectData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d4634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ChangeColorEffectData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& VROSC::AudioReactive::ChangeColorEffectData::__cordl_internal_get__colors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colors;
}
constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& VROSC::AudioReactive::ChangeColorEffectData::__cordl_internal_get__colors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colors;
}
constexpr void VROSC::AudioReactive::ChangeColorEffectData::__cordl_internal_set__colors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::AudioReactive::ChangeColorEffectData::__cordl_internal_get__duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____duration;
}
constexpr float_t const& VROSC::AudioReactive::ChangeColorEffectData::__cordl_internal_get__duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____duration;
}
constexpr void VROSC::AudioReactive::ChangeColorEffectData::__cordl_internal_set__duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____duration = value;
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::AudioReactive::ChangeColorEffectData::__cordl_internal_get__curve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::AudioReactive::ChangeColorEffectData::__cordl_internal_get__curve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr void VROSC::AudioReactive::ChangeColorEffectData::__cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle& VROSC::AudioReactive::ChangeColorEffectData::__cordl_internal_get__style()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____style;
}
constexpr ::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle const& VROSC::AudioReactive::ChangeColorEffectData::__cordl_internal_get__style() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____style;
}
constexpr void VROSC::AudioReactive::ChangeColorEffectData::__cordl_internal_set__style(::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____style = value;
}
constexpr bool& VROSC::AudioReactive::ChangeColorEffectData::__cordl_internal_get__startBlack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startBlack;
}
constexpr bool const& VROSC::AudioReactive::ChangeColorEffectData::__cordl_internal_get__startBlack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startBlack;
}
constexpr void VROSC::AudioReactive::ChangeColorEffectData::__cordl_internal_set__startBlack(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startBlack = value;
}
inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> VROSC::AudioReactive::ChangeColorEffectData::get_Colors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ChangeColorEffectData*>::get(),
                        "get_Colors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>, false>(this, ___internal_method);
}
inline float_t VROSC::AudioReactive::ChangeColorEffectData::get_Duration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ChangeColorEffectData*>::get(),
                        "get_Duration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::AnimationCurve* VROSC::AudioReactive::ChangeColorEffectData::get_Curve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ChangeColorEffectData*>::get(),
                        "get_Curve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*, false>(this, ___internal_method);
}
inline ::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle VROSC::AudioReactive::ChangeColorEffectData::get_Style()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ChangeColorEffectData*>::get(),
                        "get_Style",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::AudioReactive::ChangeColorEffectData_CycleStyle, false>(this, ___internal_method);
}
inline bool VROSC::AudioReactive::ChangeColorEffectData::get_StartBlack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ChangeColorEffectData*>::get(),
                        "get_StartBlack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::ChangeColorEffectData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ChangeColorEffectData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AudioReactive::ChangeColorEffectData* VROSC::AudioReactive::ChangeColorEffectData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioReactive::ChangeColorEffectData*>());
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::ChangeColorEffectData::ChangeColorEffectData()   {
}
