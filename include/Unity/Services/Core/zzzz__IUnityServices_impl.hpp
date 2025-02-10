#pragma once
// IWYU pragma private; include "Unity/Services/Core/IUnityServices.hpp"
#include "Unity/Services/Core/zzzz__IUnityServices_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "Unity/Services/Core/zzzz__InitializationOptions_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::IUnityServices.InitializeAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Unity::Services::Core::IUnityServices::*)(::Unity::Services::Core::InitializationOptions*)>(&::Unity::Services::Core::IUnityServices::InitializeAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::IUnityServices*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::IUnityServices*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task* Unity::Services::Core::IUnityServices::InitializeAsync(::Unity::Services::Core::InitializationOptions*  options)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::IUnityServices*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, options);
}
