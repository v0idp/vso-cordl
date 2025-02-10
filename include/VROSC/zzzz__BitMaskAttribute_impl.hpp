#pragma once
// IWYU pragma private; include "VROSC/BitMaskAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "VROSC/zzzz__BitMaskAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::VROSC::BitMaskAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BitMaskAttribute::*)(::System::Type*)>(&::VROSC::BitMaskAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x182cc24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BitMaskAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& VROSC::BitMaskAttribute::__cordl_internal_get_propType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propType;
}
constexpr ::System::Type* const& VROSC::BitMaskAttribute::__cordl_internal_get_propType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propType;
}
constexpr void VROSC::BitMaskAttribute::__cordl_internal_set_propType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___propType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::BitMaskAttribute::_ctor(::System::Type*  aType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BitMaskAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aType);
}
inline ::VROSC::BitMaskAttribute* VROSC::BitMaskAttribute::New_ctor(::System::Type*  aType)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::BitMaskAttribute*>(aType));
}
// Ctor Parameters []
constexpr ::VROSC::BitMaskAttribute::BitMaskAttribute()   {
}
