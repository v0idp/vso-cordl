#pragma once
// IWYU pragma private; include "Unity/Burst/BurstDiscardAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Burst/zzzz__BurstDiscardAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Burst::BurstDiscardAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::BurstDiscardAttribute::*)()>(&::Unity::Burst::BurstDiscardAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f5c424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstDiscardAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstDiscardAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstDiscardAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Burst::BurstDiscardAttribute* Unity::Burst::BurstDiscardAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Burst::BurstDiscardAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstDiscardAttribute::BurstDiscardAttribute()   {
}
