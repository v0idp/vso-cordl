#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/ExternalIdentity.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__ExternalIdentity_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::ExternalIdentity._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::ExternalIdentity::*)()>(&::Unity::Services::Authentication::ExternalIdentity::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e98580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::ExternalIdentity*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Authentication::ExternalIdentity::__cordl_internal_get_ProviderId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProviderId;
}
constexpr ::StringW const& Unity::Services::Authentication::ExternalIdentity::__cordl_internal_get_ProviderId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProviderId;
}
constexpr void Unity::Services::Authentication::ExternalIdentity::__cordl_internal_set_ProviderId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ProviderId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Authentication::ExternalIdentity::__cordl_internal_get_ExternalId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalId;
}
constexpr ::StringW const& Unity::Services::Authentication::ExternalIdentity::__cordl_internal_get_ExternalId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalId;
}
constexpr void Unity::Services::Authentication::ExternalIdentity::__cordl_internal_set_ExternalId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ExternalId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Authentication::ExternalIdentity::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::ExternalIdentity*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::ExternalIdentity* Unity::Services::Authentication::ExternalIdentity::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::ExternalIdentity*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::ExternalIdentity::ExternalIdentity()   {
}
