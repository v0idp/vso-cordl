#pragma once
// IWYU pragma private; include "Mono/Util/MonoPInvokeCallbackAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Mono/Util/zzzz__MonoPInvokeCallbackAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Mono::Util::MonoPInvokeCallbackAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Util::MonoPInvokeCallbackAttribute::*)(::System::Type*)>(&::Mono::Util::MonoPInvokeCallbackAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a038e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Util::MonoPInvokeCallbackAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Util::MonoPInvokeCallbackAttribute::_ctor(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Util::MonoPInvokeCallbackAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline ::Mono::Util::MonoPInvokeCallbackAttribute* Mono::Util::MonoPInvokeCallbackAttribute::New_ctor(::System::Type*  t)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Util::MonoPInvokeCallbackAttribute*>(t));
}
// Ctor Parameters []
constexpr ::Mono::Util::MonoPInvokeCallbackAttribute::MonoPInvokeCallbackAttribute()   {
}
