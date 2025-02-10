#pragma once
// IWYU pragma private; include "UnityEngine/AnimationState.hpp"
#include "UnityEngine/zzzz__TrackedReference_impl.hpp"
#include "UnityEngine/zzzz__AnimationState_def.hpp"
//  Writing Method size for method: ::UnityEngine::AnimationState._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AnimationState::*)()>(&::UnityEngine::AnimationState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f52d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::AnimationState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimationState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::AnimationState* UnityEngine::AnimationState::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AnimationState*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimationState::AnimationState()   {
}
