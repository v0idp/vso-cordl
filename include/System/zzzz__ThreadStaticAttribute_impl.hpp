#pragma once
// IWYU pragma private; include "System/ThreadStaticAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__ThreadStaticAttribute_def.hpp"
//  Writing Method size for method: ::System::ThreadStaticAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ThreadStaticAttribute::*)()>(&::System::ThreadStaticAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x275c61c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ThreadStaticAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void System::ThreadStaticAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ThreadStaticAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::ThreadStaticAttribute* System::ThreadStaticAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ThreadStaticAttribute*>());
}
// Ctor Parameters []
constexpr ::System::ThreadStaticAttribute::ThreadStaticAttribute()   {
}
