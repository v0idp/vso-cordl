#pragma once
// IWYU pragma private; include "NatSuite/Devices/Internal/DocAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "NatSuite/Devices/Internal/zzzz__DocAttribute_def.hpp"
//  Writing Method size for method: ::NatSuite::Devices::Internal::DocAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::DocAttribute::*)(::StringW)>(&::NatSuite::Devices::Internal::DocAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ff5e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::DocAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::DocAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::DocAttribute::*)(::StringW, ::StringW)>(&::NatSuite::Devices::Internal::DocAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ff5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::DocAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void NatSuite::Devices::Internal::DocAttribute::_ctor(::StringW  descriptionKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::DocAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, descriptionKey);
}
inline void NatSuite::Devices::Internal::DocAttribute::_ctor(::StringW  summaryKey, ::StringW  descriptionKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::DocAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, summaryKey, descriptionKey);
}
inline ::NatSuite::Devices::Internal::DocAttribute* NatSuite::Devices::Internal::DocAttribute::New_ctor(::StringW  descriptionKey)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::NatSuite::Devices::Internal::DocAttribute*>(descriptionKey));
}
inline ::NatSuite::Devices::Internal::DocAttribute* NatSuite::Devices::Internal::DocAttribute::New_ctor(::StringW  summaryKey, ::StringW  descriptionKey)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::NatSuite::Devices::Internal::DocAttribute*>(summaryKey, descriptionKey));
}
// Ctor Parameters []
constexpr ::NatSuite::Devices::Internal::DocAttribute::DocAttribute()   {
}
