#pragma once
// IWYU pragma private; include "UnityEngine/DisallowMultipleComponent.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__DisallowMultipleComponent_def.hpp"
//  Writing Method size for method: ::UnityEngine::DisallowMultipleComponent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::DisallowMultipleComponent::*)()>(&::UnityEngine::DisallowMultipleComponent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f873ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::DisallowMultipleComponent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::DisallowMultipleComponent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::DisallowMultipleComponent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::DisallowMultipleComponent* UnityEngine::DisallowMultipleComponent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::DisallowMultipleComponent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::DisallowMultipleComponent::DisallowMultipleComponent()   {
}
