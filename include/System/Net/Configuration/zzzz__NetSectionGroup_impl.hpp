#pragma once
// IWYU pragma private; include "System/Net/Configuration/NetSectionGroup.hpp"
#include "System/Configuration/zzzz__ConfigurationSectionGroup_impl.hpp"
#include "System/Net/Configuration/zzzz__NetSectionGroup_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::NetSectionGroup._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::NetSectionGroup::*)()>(&::System::Net::Configuration::NetSectionGroup::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2cd6c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::NetSectionGroup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::NetSectionGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::NetSectionGroup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::Configuration::NetSectionGroup* System::Net::Configuration::NetSectionGroup::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Configuration::NetSectionGroup*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::NetSectionGroup::NetSectionGroup()   {
}
