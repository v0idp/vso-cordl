#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/SignInWithSteamRequest.hpp"
#include "Unity/Services/Authentication/zzzz__SignInWithExternalTokenRequest_impl.hpp"
#include "Unity/Services/Authentication/zzzz__SignInWithSteamRequest_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::SignInWithSteamRequest._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::SignInWithSteamRequest::*)()>(&::Unity::Services::Authentication::SignInWithSteamRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e98550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::SignInWithSteamRequest*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Authentication::SignInWithSteamRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::SignInWithSteamRequest*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::SignInWithSteamRequest* Unity::Services::Authentication::SignInWithSteamRequest::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::SignInWithSteamRequest*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::SignInWithSteamRequest::SignInWithSteamRequest()   {
}
