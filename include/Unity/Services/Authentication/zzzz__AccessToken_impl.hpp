#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AccessToken.hpp"
#include "Unity/Services/Authentication/zzzz__BaseJwt_impl.hpp"
#include "Unity/Services/Authentication/zzzz__AccessToken_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::AccessToken._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AccessToken::*)()>(&::Unity::Services::Authentication::AccessToken::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e985b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AccessToken*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& Unity::Services::Authentication::AccessToken::__cordl_internal_get_Audience()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Audience;
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& Unity::Services::Authentication::AccessToken::__cordl_internal_get_Audience() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Audience;
}
constexpr void Unity::Services::Authentication::AccessToken::__cordl_internal_set_Audience(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Audience)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Authentication::AccessToken::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AccessToken*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::AccessToken* Unity::Services::Authentication::AccessToken::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::AccessToken*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::AccessToken::AccessToken()   {
}
