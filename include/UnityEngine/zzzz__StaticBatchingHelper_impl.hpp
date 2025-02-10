#pragma once
// IWYU pragma private; include "UnityEngine/StaticBatchingHelper.hpp"
#include "UnityEngine/zzzz__StaticBatchingHelper_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::StaticBatchingHelper.CombineMeshes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, ::UnityEngine::GameObject*)>(&::UnityEngine::StaticBatchingHelper::CombineMeshes)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f726ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StaticBatchingHelper>::get(),
                        "CombineMeshes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::StaticBatchingHelper::CombineMeshes(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  gos, ::UnityEngine::GameObject*  staticBatchRoot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StaticBatchingHelper>::get(),
                        "CombineMeshes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, gos, staticBatchRoot);
}
// Ctor Parameters []
constexpr ::UnityEngine::StaticBatchingHelper::StaticBatchingHelper()   {
}
