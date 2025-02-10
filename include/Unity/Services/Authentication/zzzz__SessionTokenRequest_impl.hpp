#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/SessionTokenRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__SessionTokenRequest_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::SessionTokenRequest._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::SessionTokenRequest::*)()>(&::Unity::Services::Authentication::SessionTokenRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e98548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::SessionTokenRequest*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Authentication::SessionTokenRequest::__cordl_internal_get_SessionToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionToken;
}
constexpr ::StringW const& Unity::Services::Authentication::SessionTokenRequest::__cordl_internal_get_SessionToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionToken;
}
constexpr void Unity::Services::Authentication::SessionTokenRequest::__cordl_internal_set_SessionToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SessionToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Authentication::SessionTokenRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::SessionTokenRequest*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::SessionTokenRequest* Unity::Services::Authentication::SessionTokenRequest::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::SessionTokenRequest*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::SessionTokenRequest::SessionTokenRequest()   {
}
