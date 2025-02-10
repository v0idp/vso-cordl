#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/Identity.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__Identity_def.hpp"
#include "Unity/Services/Authentication/zzzz__ExternalIdentity_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::Identity._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::Identity::*)(::Unity::Services::Authentication::ExternalIdentity*)>(&::Unity::Services::Authentication::Identity::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2e98118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::Identity*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::ExternalIdentity*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Authentication::Identity::__cordl_internal_get_TypeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TypeId;
}
constexpr ::StringW const& Unity::Services::Authentication::Identity::__cordl_internal_get_TypeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TypeId;
}
constexpr void Unity::Services::Authentication::Identity::__cordl_internal_set_TypeId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TypeId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Authentication::Identity::__cordl_internal_get_UserId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserId;
}
constexpr ::StringW const& Unity::Services::Authentication::Identity::__cordl_internal_get_UserId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserId;
}
constexpr void Unity::Services::Authentication::Identity::__cordl_internal_set_UserId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UserId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Authentication::Identity::_ctor(::Unity::Services::Authentication::ExternalIdentity*  externalIdentity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::Identity*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::ExternalIdentity*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, externalIdentity);
}
inline ::Unity::Services::Authentication::Identity* Unity::Services::Authentication::Identity::New_ctor(::Unity::Services::Authentication::ExternalIdentity*  externalIdentity)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::Identity*>(externalIdentity));
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::Identity::Identity()   {
}
