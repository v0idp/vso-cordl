#pragma once
// IWYU pragma private; include "VROSC/ParameterLinksPreset.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "VROSC/zzzz__ParameterLinksPreset_def.hpp"
#include "VROSC/zzzz__ParameterLink_def.hpp"
//  Writing Method size for method: ::VROSC::ParameterLinksPreset._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ParameterLinksPreset::*)()>(&::VROSC::ParameterLinksPreset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1711268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ParameterLinksPreset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::ParameterLinksPreset::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& VROSC::ParameterLinksPreset::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void VROSC::ParameterLinksPreset::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::VROSC::ParameterLink*,::Array<::VROSC::ParameterLink*>*>& VROSC::ParameterLinksPreset::__cordl_internal_get_ParameterLinks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ParameterLinks;
}
constexpr ::ArrayW<::VROSC::ParameterLink*,::Array<::VROSC::ParameterLink*>*> const& VROSC::ParameterLinksPreset::__cordl_internal_get_ParameterLinks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ParameterLinks;
}
constexpr void VROSC::ParameterLinksPreset::__cordl_internal_set_ParameterLinks(::ArrayW<::VROSC::ParameterLink*,::Array<::VROSC::ParameterLink*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ParameterLinks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ParameterLinksPreset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ParameterLinksPreset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ParameterLinksPreset* VROSC::ParameterLinksPreset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ParameterLinksPreset*>());
}
// Ctor Parameters []
constexpr ::VROSC::ParameterLinksPreset::ParameterLinksPreset()   {
}
