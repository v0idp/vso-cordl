#pragma once
// IWYU pragma private; include "NatSuite/Devices/Internal/CodeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "NatSuite/Devices/Internal/zzzz__CodeAttribute_def.hpp"
//  Writing Method size for method: ::NatSuite::Devices::Internal::CodeAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::CodeAttribute::*)(::StringW)>(&::NatSuite::Devices::Internal::CodeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ff5f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::CodeAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void NatSuite::Devices::Internal::CodeAttribute::_ctor(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::CodeAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline ::NatSuite::Devices::Internal::CodeAttribute* NatSuite::Devices::Internal::CodeAttribute::New_ctor(::StringW  key)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::NatSuite::Devices::Internal::CodeAttribute*>(key));
}
// Ctor Parameters []
constexpr ::NatSuite::Devices::Internal::CodeAttribute::CodeAttribute()   {
}
