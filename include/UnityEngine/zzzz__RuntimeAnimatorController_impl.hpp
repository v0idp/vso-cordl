#pragma once
// IWYU pragma private; include "UnityEngine/RuntimeAnimatorController.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_def.hpp"
//  Writing Method size for method: ::UnityEngine::RuntimeAnimatorController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RuntimeAnimatorController::*)()>(&::UnityEngine::RuntimeAnimatorController::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f53c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeAnimatorController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::RuntimeAnimatorController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeAnimatorController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::RuntimeAnimatorController* UnityEngine::RuntimeAnimatorController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::RuntimeAnimatorController*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::RuntimeAnimatorController::RuntimeAnimatorController()   {
}
