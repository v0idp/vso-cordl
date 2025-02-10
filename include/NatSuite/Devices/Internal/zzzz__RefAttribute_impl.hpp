#pragma once
// IWYU pragma private; include "NatSuite/Devices/Internal/RefAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "NatSuite/Devices/Internal/zzzz__RefAttribute_def.hpp"
//  Writing Method size for method: ::NatSuite::Devices::Internal::RefAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::RefAttribute::*)(::ArrayW<::StringW,::Array<::StringW>*>)>(&::NatSuite::Devices::Internal::RefAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ff5f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::RefAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                    )));
    return ___internal_method;
  }
};
inline void NatSuite::Devices::Internal::RefAttribute::_ctor(::ArrayW<::StringW,::Array<::StringW>*>  keys)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::RefAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keys);
}
inline ::NatSuite::Devices::Internal::RefAttribute* NatSuite::Devices::Internal::RefAttribute::New_ctor(::ArrayW<::StringW,::Array<::StringW>*>  keys)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::NatSuite::Devices::Internal::RefAttribute*>(keys));
}
// Ctor Parameters []
constexpr ::NatSuite::Devices::Internal::RefAttribute::RefAttribute()   {
}
