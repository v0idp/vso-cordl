#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/OnScreen/UGUIOnScreenControlUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__UGUIOnScreenControlUtils_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::UGUIOnScreenControlUtils.GetCanvasRectTransform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RectTransform> (*)(::UnityEngine::Transform*)>(&::UnityEngine::InputSystem::OnScreen::UGUIOnScreenControlUtils::GetCanvasRectTransform)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2e5af48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::UGUIOnScreenControlUtils*>::get(),
                        "GetCanvasRectTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::RectTransform> UnityEngine::InputSystem::OnScreen::UGUIOnScreenControlUtils::GetCanvasRectTransform(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::OnScreen::UGUIOnScreenControlUtils*>::get(),
                        "GetCanvasRectTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>, false>(nullptr, ___internal_method, transform);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::OnScreen::UGUIOnScreenControlUtils::UGUIOnScreenControlUtils()   {
}
