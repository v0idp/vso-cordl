#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/ProfileEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Unity/Services/Authentication/zzzz__ProfileEventArgs_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::ProfileEventArgs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::ProfileEventArgs::*)(::StringW)>(&::Unity::Services::Authentication::ProfileEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2e97f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::ProfileEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Authentication::ProfileEventArgs::__cordl_internal_get__Profile_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Profile_k__BackingField;
}
constexpr ::StringW const& Unity::Services::Authentication::ProfileEventArgs::__cordl_internal_get__Profile_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Profile_k__BackingField;
}
constexpr void Unity::Services::Authentication::ProfileEventArgs::__cordl_internal_set__Profile_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Profile_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Authentication::ProfileEventArgs::_ctor(::StringW  profile)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::ProfileEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, profile);
}
inline ::Unity::Services::Authentication::ProfileEventArgs* Unity::Services::Authentication::ProfileEventArgs::New_ctor(::StringW  profile)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::ProfileEventArgs*>(profile));
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::ProfileEventArgs::ProfileEventArgs()   {
}
