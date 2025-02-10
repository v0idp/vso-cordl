#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/SignInOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__SignInOptions_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::SignInOptions.get_CreateAccount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Authentication::SignInOptions::*)()>(&::Unity::Services::Authentication::SignInOptions::get_CreateAccount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e98610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::SignInOptions*>::get(),
                        "get_CreateAccount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& Unity::Services::Authentication::SignInOptions::__cordl_internal_get__CreateAccount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CreateAccount_k__BackingField;
}
constexpr bool const& Unity::Services::Authentication::SignInOptions::__cordl_internal_get__CreateAccount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CreateAccount_k__BackingField;
}
constexpr void Unity::Services::Authentication::SignInOptions::__cordl_internal_set__CreateAccount_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CreateAccount_k__BackingField = value;
}
inline bool Unity::Services::Authentication::SignInOptions::get_CreateAccount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::SignInOptions*>::get(),
                        "get_CreateAccount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::SignInOptions::SignInOptions()   {
}
