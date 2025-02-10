#pragma once
// IWYU pragma private; include "UnityEngine/ScalableBufferManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScalableBufferManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::ScalableBufferManager.ResizeBuffers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t)>(&::UnityEngine::ScalableBufferManager::ResizeBuffers)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2f6a218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScalableBufferManager*>::get(),
                        "ResizeBuffers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::ScalableBufferManager::ResizeBuffers(float_t  widthScale, float_t  heightScale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScalableBufferManager*>::get(),
                        "ResizeBuffers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, widthScale, heightScale);
}
// Ctor Parameters []
constexpr ::UnityEngine::ScalableBufferManager::ScalableBufferManager()   {
}
