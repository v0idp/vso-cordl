#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/LinkWithSteamRequest.hpp"
#include "Unity/Services/Authentication/zzzz__LinkWithExternalTokenRequest_impl.hpp"
#include "Unity/Services/Authentication/zzzz__LinkWithSteamRequest_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::LinkWithSteamRequest._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::LinkWithSteamRequest::*)()>(&::Unity::Services::Authentication::LinkWithSteamRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e98528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::LinkWithSteamRequest*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Authentication::LinkWithSteamRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::LinkWithSteamRequest*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::LinkWithSteamRequest* Unity::Services::Authentication::LinkWithSteamRequest::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::LinkWithSteamRequest*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::LinkWithSteamRequest::LinkWithSteamRequest()   {
}
