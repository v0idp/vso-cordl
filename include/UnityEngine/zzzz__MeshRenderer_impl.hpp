#pragma once
// IWYU pragma private; include "UnityEngine/MeshRenderer.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::UnityEngine::MeshRenderer.DontStripMeshRenderer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::MeshRenderer::*)()>(&::UnityEngine::MeshRenderer::DontStripMeshRenderer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2f6eeac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::MeshRenderer*>::get(),
                        "DontStripMeshRenderer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::MeshRenderer::DontStripMeshRenderer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::MeshRenderer*>::get(),
                        "DontStripMeshRenderer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::MeshRenderer::MeshRenderer()   {
}
