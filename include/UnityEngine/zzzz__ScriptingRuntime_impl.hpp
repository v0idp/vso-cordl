#pragma once
// IWYU pragma private; include "UnityEngine/ScriptingRuntime.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptingRuntime_def.hpp"
//  Writing Method size for method: ::UnityEngine::ScriptingRuntime.GetAllUserAssemblies
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW,::Array<::StringW>*> (*)()>(&::UnityEngine::ScriptingRuntime::GetAllUserAssemblies)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f8ceac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScriptingRuntime*>::get(),
                        "GetAllUserAssemblies",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<::StringW,::Array<::StringW>*> UnityEngine::ScriptingRuntime::GetAllUserAssemblies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScriptingRuntime*>::get(),
                        "GetAllUserAssemblies",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW,::Array<::StringW>*>, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ScriptingRuntime::ScriptingRuntime()   {
}
