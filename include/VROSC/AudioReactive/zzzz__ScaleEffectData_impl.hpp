#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/ScaleEffectData.hpp"
#include "VROSC/AudioReactive/zzzz__AudioReactiveEffectData_impl.hpp"
#include "VROSC/AudioReactive/zzzz__ScaleEffectData_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "VROSC/zzzz__MinMaxVector3_def.hpp"
//  Writing Method size for method: ::VROSC::AudioReactive::ScaleEffectData.get_Scaling
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MinMaxVector3* (::VROSC::AudioReactive::ScaleEffectData::*)()>(&::VROSC::AudioReactive::ScaleEffectData::get_Scaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d9264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ScaleEffectData*>::get(),
                        "get_Scaling",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ScaleEffectData.get_UniformRandom
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::AudioReactive::ScaleEffectData::*)()>(&::VROSC::AudioReactive::ScaleEffectData::get_UniformRandom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d926c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ScaleEffectData*>::get(),
                        "get_UniformRandom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ScaleEffectData.get_Duration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::AudioReactive::ScaleEffectData::*)()>(&::VROSC::AudioReactive::ScaleEffectData::get_Duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d9274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ScaleEffectData*>::get(),
                        "get_Duration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ScaleEffectData.get_Curve
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (::VROSC::AudioReactive::ScaleEffectData::*)()>(&::VROSC::AudioReactive::ScaleEffectData::get_Curve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d927c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ScaleEffectData*>::get(),
                        "get_Curve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ScaleEffectData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ScaleEffectData::*)()>(&::VROSC::AudioReactive::ScaleEffectData::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x17d9284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ScaleEffectData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::MinMaxVector3*& VROSC::AudioReactive::ScaleEffectData::__cordl_internal_get__scaling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaling;
}
constexpr ::VROSC::MinMaxVector3* const& VROSC::AudioReactive::ScaleEffectData::__cordl_internal_get__scaling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaling;
}
constexpr void VROSC::AudioReactive::ScaleEffectData::__cordl_internal_set__scaling(::VROSC::MinMaxVector3*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scaling)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::AudioReactive::ScaleEffectData::__cordl_internal_get__uniformRandom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uniformRandom;
}
constexpr bool const& VROSC::AudioReactive::ScaleEffectData::__cordl_internal_get__uniformRandom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uniformRandom;
}
constexpr void VROSC::AudioReactive::ScaleEffectData::__cordl_internal_set__uniformRandom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uniformRandom = value;
}
constexpr float_t& VROSC::AudioReactive::ScaleEffectData::__cordl_internal_get__duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____duration;
}
constexpr float_t const& VROSC::AudioReactive::ScaleEffectData::__cordl_internal_get__duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____duration;
}
constexpr void VROSC::AudioReactive::ScaleEffectData::__cordl_internal_set__duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____duration = value;
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::AudioReactive::ScaleEffectData::__cordl_internal_get__curve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::AudioReactive::ScaleEffectData::__cordl_internal_get__curve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr void VROSC::AudioReactive::ScaleEffectData::__cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::VROSC::MinMaxVector3* VROSC::AudioReactive::ScaleEffectData::get_Scaling()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ScaleEffectData*>::get(),
                        "get_Scaling",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::MinMaxVector3*, false>(this, ___internal_method);
}
inline bool VROSC::AudioReactive::ScaleEffectData::get_UniformRandom()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ScaleEffectData*>::get(),
                        "get_UniformRandom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t VROSC::AudioReactive::ScaleEffectData::get_Duration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ScaleEffectData*>::get(),
                        "get_Duration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::AnimationCurve* VROSC::AudioReactive::ScaleEffectData::get_Curve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ScaleEffectData*>::get(),
                        "get_Curve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::ScaleEffectData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ScaleEffectData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AudioReactive::ScaleEffectData* VROSC::AudioReactive::ScaleEffectData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioReactive::ScaleEffectData*>());
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::ScaleEffectData::ScaleEffectData()   {
}
