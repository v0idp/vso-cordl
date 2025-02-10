#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/SlowdownParticlesEffectData.hpp"
#include "VROSC/AudioReactive/zzzz__AudioReactiveEffectData_impl.hpp"
#include "VROSC/AudioReactive/zzzz__SlowdownParticlesEffectData_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::VROSC::AudioReactive::SlowdownParticlesEffectData.get_Duration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::AudioReactive::SlowdownParticlesEffectData::*)()>(&::VROSC::AudioReactive::SlowdownParticlesEffectData::get_Duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d94d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::SlowdownParticlesEffectData*>::get(),
                        "get_Duration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::SlowdownParticlesEffectData.get_Curve
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (::VROSC::AudioReactive::SlowdownParticlesEffectData::*)()>(&::VROSC::AudioReactive::SlowdownParticlesEffectData::get_Curve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d94e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::SlowdownParticlesEffectData*>::get(),
                        "get_Curve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::SlowdownParticlesEffectData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::SlowdownParticlesEffectData::*)()>(&::VROSC::AudioReactive::SlowdownParticlesEffectData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17d94e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::SlowdownParticlesEffectData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::AudioReactive::SlowdownParticlesEffectData::__cordl_internal_get__duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____duration;
}
constexpr float_t const& VROSC::AudioReactive::SlowdownParticlesEffectData::__cordl_internal_get__duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____duration;
}
constexpr void VROSC::AudioReactive::SlowdownParticlesEffectData::__cordl_internal_set__duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____duration = value;
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::AudioReactive::SlowdownParticlesEffectData::__cordl_internal_get__curve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::AudioReactive::SlowdownParticlesEffectData::__cordl_internal_get__curve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr void VROSC::AudioReactive::SlowdownParticlesEffectData::__cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t VROSC::AudioReactive::SlowdownParticlesEffectData::get_Duration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::SlowdownParticlesEffectData*>::get(),
                        "get_Duration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::AnimationCurve* VROSC::AudioReactive::SlowdownParticlesEffectData::get_Curve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::SlowdownParticlesEffectData*>::get(),
                        "get_Curve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*, false>(this, ___internal_method);
}
inline void VROSC::AudioReactive::SlowdownParticlesEffectData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::SlowdownParticlesEffectData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AudioReactive::SlowdownParticlesEffectData* VROSC::AudioReactive::SlowdownParticlesEffectData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioReactive::SlowdownParticlesEffectData*>());
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::SlowdownParticlesEffectData::SlowdownParticlesEffectData()   {
}
