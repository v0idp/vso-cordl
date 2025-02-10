#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/AccessToken.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/RemoteConfig/zzzz__AccessToken_def.hpp"
//  Writing Method size for method: ::Unity::Services::RemoteConfig::AccessToken._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::AccessToken::*)()>(&::Unity::Services::RemoteConfig::AccessToken::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eaad10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::AccessToken*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& Unity::Services::RemoteConfig::AccessToken::__cordl_internal_get_aud()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aud;
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& Unity::Services::RemoteConfig::AccessToken::__cordl_internal_get_aud() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aud;
}
constexpr void Unity::Services::RemoteConfig::AccessToken::__cordl_internal_set_aud(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___aud)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::RemoteConfig::AccessToken::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::AccessToken*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::RemoteConfig::AccessToken* Unity::Services::RemoteConfig::AccessToken::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::RemoteConfig::AccessToken*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::RemoteConfig::AccessToken::AccessToken()   {
}
