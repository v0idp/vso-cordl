#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/UpdatePasswordRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__UpdatePasswordRequest_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::UpdatePasswordRequest._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::UpdatePasswordRequest::*)()>(&::Unity::Services::Authentication::UpdatePasswordRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e98568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::UpdatePasswordRequest*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Authentication::UpdatePasswordRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::UpdatePasswordRequest*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::UpdatePasswordRequest* Unity::Services::Authentication::UpdatePasswordRequest::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::UpdatePasswordRequest*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::UpdatePasswordRequest::UpdatePasswordRequest()   {
}
