#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/UsernameInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__UsernameInfo_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::UsernameInfo._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::UsernameInfo::*)()>(&::Unity::Services::Authentication::UsernameInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e985b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::UsernameInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Authentication::UsernameInfo::__cordl_internal_get_Username()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr ::StringW const& Unity::Services::Authentication::UsernameInfo::__cordl_internal_get_Username() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr void Unity::Services::Authentication::UsernameInfo::__cordl_internal_set_Username(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Username)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Authentication::UsernameInfo::__cordl_internal_get_PasswordUpdatedAt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PasswordUpdatedAt;
}
constexpr ::StringW const& Unity::Services::Authentication::UsernameInfo::__cordl_internal_get_PasswordUpdatedAt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PasswordUpdatedAt;
}
constexpr void Unity::Services::Authentication::UsernameInfo::__cordl_internal_set_PasswordUpdatedAt(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PasswordUpdatedAt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Authentication::UsernameInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::UsernameInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::UsernameInfo* Unity::Services::Authentication::UsernameInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::UsernameInfo*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::UsernameInfo::UsernameInfo()   {
}
