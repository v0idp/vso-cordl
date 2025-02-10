#pragma once
// IWYU pragma private; include "VROSC/Utils/TransformExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/Utils/zzzz__TransformExtensions_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::VROSC::Utils::TransformExtensions.GetNormalizedPointInTransfrom
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Collider*)>(&::VROSC::Utils::TransformExtensions::GetNormalizedPointInTransfrom)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x17dbc88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Utils::TransformExtensions*>::get(),
                        "GetNormalizedPointInTransfrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Utils::TransformExtensions.GetRelativeVelocity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::VROSC::Utils::TransformExtensions::GetRelativeVelocity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x17dbde8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Utils::TransformExtensions*>::get(),
                        "GetRelativeVelocity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 VROSC::Utils::TransformExtensions::GetNormalizedPointInTransfrom(::UnityEngine::Transform*  t, ::UnityEngine::Vector3  point, ::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Utils::TransformExtensions*>::get(),
                        "GetNormalizedPointInTransfrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, t, point, collider);
}
inline ::UnityEngine::Vector3 VROSC::Utils::TransformExtensions::GetRelativeVelocity(::UnityEngine::Transform*  t, ::UnityEngine::Vector3  sourceVelocity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Utils::TransformExtensions*>::get(),
                        "GetRelativeVelocity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, t, sourceVelocity);
}
// Ctor Parameters []
constexpr ::VROSC::Utils::TransformExtensions::TransformExtensions()   {
}
