#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/SignInResponse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__SignInResponse_def.hpp"
#include "Unity/Services/Authentication/zzzz__User_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::SignInResponse._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::SignInResponse::*)()>(&::Unity::Services::Authentication::SignInResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e98598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::SignInResponse*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Authentication::SignInResponse::__cordl_internal_get_UserId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserId;
}
constexpr ::StringW const& Unity::Services::Authentication::SignInResponse::__cordl_internal_get_UserId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserId;
}
constexpr void Unity::Services::Authentication::SignInResponse::__cordl_internal_set_UserId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UserId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Authentication::SignInResponse::__cordl_internal_get_IdToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IdToken;
}
constexpr ::StringW const& Unity::Services::Authentication::SignInResponse::__cordl_internal_get_IdToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IdToken;
}
constexpr void Unity::Services::Authentication::SignInResponse::__cordl_internal_set_IdToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___IdToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Authentication::SignInResponse::__cordl_internal_get_SessionToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionToken;
}
constexpr ::StringW const& Unity::Services::Authentication::SignInResponse::__cordl_internal_get_SessionToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionToken;
}
constexpr void Unity::Services::Authentication::SignInResponse::__cordl_internal_set_SessionToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SessionToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Unity::Services::Authentication::SignInResponse::__cordl_internal_get_ExpiresIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpiresIn;
}
constexpr int32_t const& Unity::Services::Authentication::SignInResponse::__cordl_internal_get_ExpiresIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpiresIn;
}
constexpr void Unity::Services::Authentication::SignInResponse::__cordl_internal_set_ExpiresIn(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpiresIn = value;
}
constexpr ::Unity::Services::Authentication::User*& Unity::Services::Authentication::SignInResponse::__cordl_internal_get_User()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___User;
}
constexpr ::Unity::Services::Authentication::User* const& Unity::Services::Authentication::SignInResponse::__cordl_internal_get_User() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___User;
}
constexpr void Unity::Services::Authentication::SignInResponse::__cordl_internal_set_User(::Unity::Services::Authentication::User*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___User)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Authentication::SignInResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::SignInResponse*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::SignInResponse* Unity::Services::Authentication::SignInResponse::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::SignInResponse*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::SignInResponse::SignInResponse()   {
}
