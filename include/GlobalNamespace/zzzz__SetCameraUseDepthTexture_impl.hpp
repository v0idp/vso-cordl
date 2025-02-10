#pragma once
// IWYU pragma private; include "GlobalNamespace/SetCameraUseDepthTexture.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SetCameraUseDepthTexture_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetCameraUseDepthTexture.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetCameraUseDepthTexture::*)()>(&::GlobalNamespace::SetCameraUseDepthTexture::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x16c1164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetCameraUseDepthTexture*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetCameraUseDepthTexture._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetCameraUseDepthTexture::*)()>(&::GlobalNamespace::SetCameraUseDepthTexture::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16c11c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetCameraUseDepthTexture*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::SetCameraUseDepthTexture::__cordl_internal_get_cam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cam;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::SetCameraUseDepthTexture::__cordl_internal_get_cam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cam;
}
constexpr void GlobalNamespace::SetCameraUseDepthTexture::__cordl_internal_set_cam(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cam)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SetCameraUseDepthTexture::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetCameraUseDepthTexture*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SetCameraUseDepthTexture::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetCameraUseDepthTexture*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SetCameraUseDepthTexture* GlobalNamespace::SetCameraUseDepthTexture::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SetCameraUseDepthTexture*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetCameraUseDepthTexture::SetCameraUseDepthTexture()   {
}
