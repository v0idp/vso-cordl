#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/AnalyticExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__AnalyticExtensions_def.hpp"
template<typename TSource>
inline void UnityEngine::InputSystem::AnalyticExtensions::Send(TSource  analytic)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::AnalyticExtensions*>::get(),
                    "Send",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSource>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, analytic);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::AnalyticExtensions::AnalyticExtensions()   {
}
