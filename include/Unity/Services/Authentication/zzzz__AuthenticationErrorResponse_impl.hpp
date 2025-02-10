#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationErrorResponse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__AuthenticationErrorResponse_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationErrorResponse._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationErrorResponse::*)()>(&::Unity::Services::Authentication::AuthenticationErrorResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e98578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationErrorResponse*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Authentication::AuthenticationErrorResponse::__cordl_internal_get_Title()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Title;
}
constexpr ::StringW const& Unity::Services::Authentication::AuthenticationErrorResponse::__cordl_internal_get_Title() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Title;
}
constexpr void Unity::Services::Authentication::AuthenticationErrorResponse::__cordl_internal_set_Title(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Title)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Authentication::AuthenticationErrorResponse::__cordl_internal_get_Detail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Detail;
}
constexpr ::StringW const& Unity::Services::Authentication::AuthenticationErrorResponse::__cordl_internal_get_Detail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Detail;
}
constexpr void Unity::Services::Authentication::AuthenticationErrorResponse::__cordl_internal_set_Detail(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Detail)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Authentication::AuthenticationErrorResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationErrorResponse*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::AuthenticationErrorResponse* Unity::Services::Authentication::AuthenticationErrorResponse::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::AuthenticationErrorResponse*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::AuthenticationErrorResponse::AuthenticationErrorResponse()   {
}
