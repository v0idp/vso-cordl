#pragma once
// IWYU pragma private; include "UnityEngine/GUILayout.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GUILayout_def.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUILayout.Width
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUILayoutOption* (*)(float_t)>(&::UnityEngine::GUILayout::Width)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2faeaa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayout*>::get(),
                        "Width",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.Height
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUILayoutOption* (*)(float_t)>(&::UnityEngine::GUILayout::Height)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2faeb34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayout*>::get(),
                        "Height",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::GUILayoutOption* UnityEngine::GUILayout::Width(float_t  width)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayout*>::get(),
                        "Width",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUILayoutOption*, false>(nullptr, ___internal_method, width);
}
inline ::UnityEngine::GUILayoutOption* UnityEngine::GUILayout::Height(float_t  height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayout*>::get(),
                        "Height",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUILayoutOption*, false>(nullptr, ___internal_method, height);
}
// Ctor Parameters []
constexpr ::UnityEngine::GUILayout::GUILayout()   {
}
