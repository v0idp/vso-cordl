#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/IAuthenticationExceptionHandler.hpp"
#include "Unity/Services/Authentication/zzzz__IAuthenticationExceptionHandler_def.hpp"
#include "Unity/Services/Authentication/zzzz__AuthenticationState_def.hpp"
#include "Unity/Services/Authentication/zzzz__WebRequestException_def.hpp"
#include "Unity/Services/Core/zzzz__RequestFailedException_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::IAuthenticationExceptionHandler.BuildClientInvalidStateException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::RequestFailedException* (::Unity::Services::Authentication::IAuthenticationExceptionHandler::*)(::Unity::Services::Authentication::AuthenticationState)>(&::Unity::Services::Authentication::IAuthenticationExceptionHandler::BuildClientInvalidStateException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IAuthenticationExceptionHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IAuthenticationExceptionHandler*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::IAuthenticationExceptionHandler.BuildClientSessionTokenNotExistsException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::RequestFailedException* (::Unity::Services::Authentication::IAuthenticationExceptionHandler::*)()>(&::Unity::Services::Authentication::IAuthenticationExceptionHandler::BuildClientSessionTokenNotExistsException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IAuthenticationExceptionHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IAuthenticationExceptionHandler*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::IAuthenticationExceptionHandler.ConvertException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::RequestFailedException* (::Unity::Services::Authentication::IAuthenticationExceptionHandler::*)(::Unity::Services::Authentication::WebRequestException*)>(&::Unity::Services::Authentication::IAuthenticationExceptionHandler::ConvertException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IAuthenticationExceptionHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IAuthenticationExceptionHandler*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
inline ::Unity::Services::Core::RequestFailedException* Unity::Services::Authentication::IAuthenticationExceptionHandler::BuildClientInvalidStateException(::Unity::Services::Authentication::AuthenticationState  state)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IAuthenticationExceptionHandler*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::RequestFailedException*, false>(this, ___internal_method, state);
}
inline ::Unity::Services::Core::RequestFailedException* Unity::Services::Authentication::IAuthenticationExceptionHandler::BuildClientSessionTokenNotExistsException()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IAuthenticationExceptionHandler*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::RequestFailedException*, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::RequestFailedException* Unity::Services::Authentication::IAuthenticationExceptionHandler::ConvertException(::Unity::Services::Authentication::WebRequestException*  exception)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IAuthenticationExceptionHandler*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::RequestFailedException*, false>(this, ___internal_method, exception);
}
