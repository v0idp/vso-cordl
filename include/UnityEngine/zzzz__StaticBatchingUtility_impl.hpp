#pragma once
// IWYU pragma private; include "UnityEngine/StaticBatchingUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/zzzz__StaticBatchingUtility_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::StaticBatchingUtility.Combine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, ::UnityEngine::GameObject*)>(&::UnityEngine::StaticBatchingUtility::Combine)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2f906f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StaticBatchingUtility*>::get(),
                        "Combine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::StaticBatchingUtility::setStaticF_s_CombineMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_CombineMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StaticBatchingUtility*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::StaticBatchingUtility::getStaticF_s_CombineMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_CombineMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StaticBatchingUtility*>::get>();
}
inline void UnityEngine::StaticBatchingUtility::Combine(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  gos, ::UnityEngine::GameObject*  staticBatchRoot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StaticBatchingUtility*>::get(),
                        "Combine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, gos, staticBatchRoot);
}
// Ctor Parameters []
constexpr ::UnityEngine::StaticBatchingUtility::StaticBatchingUtility()   {
}
