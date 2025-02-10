#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationService.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__AuthenticationService_def.hpp"
#include "Unity/Services/Authentication/zzzz__IAuthenticationService_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationService.get_Instance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Authentication::IAuthenticationService* (*)()>(&::Unity::Services::Authentication::AuthenticationService::get_Instance)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2e93128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationService*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationService.set_Instance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Services::Authentication::IAuthenticationService*)>(&::Unity::Services::Authentication::AuthenticationService::set_Instance)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2e931bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationService*>::get(),
                        "set_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IAuthenticationService*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Authentication::AuthenticationService::setStaticF_s_Instance(::Unity::Services::Authentication::IAuthenticationService*  value)  {
::cordl_internals::setStaticField<::Unity::Services::Authentication::IAuthenticationService*, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationService*>::get>(std::forward<::Unity::Services::Authentication::IAuthenticationService*>(value));
}
inline ::Unity::Services::Authentication::IAuthenticationService* Unity::Services::Authentication::AuthenticationService::getStaticF_s_Instance()  {
return ::cordl_internals::getStaticField<::Unity::Services::Authentication::IAuthenticationService*, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationService*>::get>();
}
inline ::Unity::Services::Authentication::IAuthenticationService* Unity::Services::Authentication::AuthenticationService::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationService*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Authentication::IAuthenticationService*, false>(nullptr, ___internal_method);
}
inline void Unity::Services::Authentication::AuthenticationService::set_Instance(::Unity::Services::Authentication::IAuthenticationService*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationService*>::get(),
                        "set_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IAuthenticationService*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::AuthenticationService::AuthenticationService()   {
}
