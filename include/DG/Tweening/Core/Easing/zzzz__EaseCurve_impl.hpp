#pragma once
// IWYU pragma private; include "DG/Tweening/Core/Easing/EaseCurve.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DG/Tweening/Core/Easing/zzzz__EaseCurve_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::DG::Tweening::Core::Easing::EaseCurve._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Core::Easing::EaseCurve::*)(::UnityEngine::AnimationCurve*)>(&::DG::Tweening::Core::Easing::EaseCurve::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x18ed724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::Easing::EaseCurve*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Core::Easing::EaseCurve.Evaluate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::DG::Tweening::Core::Easing::EaseCurve::*)(float_t, float_t, float_t, float_t)>(&::DG::Tweening::Core::Easing::EaseCurve::Evaluate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x18ed74c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::Easing::EaseCurve*>::get(),
                        "Evaluate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationCurve*& DG::Tweening::Core::Easing::EaseCurve::__cordl_internal_get__animCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& DG::Tweening::Core::Easing::EaseCurve::__cordl_internal_get__animCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animCurve;
}
constexpr void DG::Tweening::Core::Easing::EaseCurve::__cordl_internal_set__animCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void DG::Tweening::Core::Easing::EaseCurve::_ctor(::UnityEngine::AnimationCurve*  animCurve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::Easing::EaseCurve*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, animCurve);
}
inline float_t DG::Tweening::Core::Easing::EaseCurve::Evaluate(float_t  time, float_t  duration, float_t  unusedOvershoot, float_t  unusedPeriod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::Easing::EaseCurve*>::get(),
                        "Evaluate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, time, duration, unusedOvershoot, unusedPeriod);
}
inline ::DG::Tweening::Core::Easing::EaseCurve* DG::Tweening::Core::Easing::EaseCurve::New_ctor(::UnityEngine::AnimationCurve*  animCurve)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::Core::Easing::EaseCurve*>(animCurve));
}
// Ctor Parameters []
constexpr ::DG::Tweening::Core::Easing::EaseCurve::EaseCurve()   {
}
