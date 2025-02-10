#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/IAuthenticationNetworkClient.hpp"
#include "Unity/Services/Authentication/zzzz__IAuthenticationNetworkClient_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Unity/Services/Authentication/zzzz__SignInResponse_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::IAuthenticationNetworkClient.SignInAnonymouslyAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>* (::Unity::Services::Authentication::IAuthenticationNetworkClient::*)()>(&::Unity::Services::Authentication::IAuthenticationNetworkClient::SignInAnonymouslyAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IAuthenticationNetworkClient*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IAuthenticationNetworkClient*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::IAuthenticationNetworkClient.SignInWithSessionTokenAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>* (::Unity::Services::Authentication::IAuthenticationNetworkClient::*)(::StringW)>(&::Unity::Services::Authentication::IAuthenticationNetworkClient::SignInWithSessionTokenAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IAuthenticationNetworkClient*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IAuthenticationNetworkClient*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>* Unity::Services::Authentication::IAuthenticationNetworkClient::SignInAnonymouslyAsync()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IAuthenticationNetworkClient*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>* Unity::Services::Authentication::IAuthenticationNetworkClient::SignInWithSessionTokenAsync(::StringW  token)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IAuthenticationNetworkClient*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Authentication::SignInResponse*>*, false>(this, ___internal_method, token);
}
