#pragma once
// IWYU pragma private; include "Unity/Collections/NativeDisableParallelForRestrictionAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Collections/zzzz__NativeDisableParallelForRestrictionAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeDisableParallelForRestrictionAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::NativeDisableParallelForRestrictionAttribute::*)()>(&::Unity::Collections::NativeDisableParallelForRestrictionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f5be84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeDisableParallelForRestrictionAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeDisableParallelForRestrictionAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::NativeDisableParallelForRestrictionAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Collections::NativeDisableParallelForRestrictionAttribute* Unity::Collections::NativeDisableParallelForRestrictionAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Collections::NativeDisableParallelForRestrictionAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeDisableParallelForRestrictionAttribute::NativeDisableParallelForRestrictionAttribute()   {
}
