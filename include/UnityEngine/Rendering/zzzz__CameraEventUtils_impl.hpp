#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CameraEventUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEventUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CameraEventUtils.IsValid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::CameraEvent)>(&::UnityEngine::Rendering::CameraEventUtils::IsValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f9d100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraEventUtils*>::get(),
                        "IsValid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CameraEvent>::get()}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::CameraEventUtils::IsValid(::UnityEngine::Rendering::CameraEvent  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::CameraEventUtils*>::get(),
                        "IsValid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CameraEvent>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CameraEventUtils::CameraEventUtils()   {
}
