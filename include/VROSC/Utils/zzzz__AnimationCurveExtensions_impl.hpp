#pragma once
// IWYU pragma private; include "VROSC/Utils/AnimationCurveExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/Utils/zzzz__AnimationCurveExtensions_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::VROSC::Utils::AnimationCurveExtensions.InverseEvaluate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::AnimationCurve*, float_t)>(&::VROSC::Utils::AnimationCurveExtensions::InverseEvaluate)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x17dbba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Utils::AnimationCurveExtensions*>::get(),
                        "InverseEvaluate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline float_t VROSC::Utils::AnimationCurveExtensions::InverseEvaluate(::UnityEngine::AnimationCurve*  ac, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Utils::AnimationCurveExtensions*>::get(),
                        "InverseEvaluate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, ac, value);
}
// Ctor Parameters []
constexpr ::VROSC::Utils::AnimationCurveExtensions::AnimationCurveExtensions()   {
}
