#pragma once
// IWYU pragma private; include "VROSC/PaginatedListItemData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__PaginatedListItemData_def.hpp"
//  Writing Method size for method: ::VROSC::PaginatedListItemData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PaginatedListItemData::*)()>(&::VROSC::PaginatedListItemData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x174b03c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PaginatedListItemData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void VROSC::PaginatedListItemData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PaginatedListItemData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::PaginatedListItemData* VROSC::PaginatedListItemData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PaginatedListItemData*>());
}
// Ctor Parameters []
constexpr ::VROSC::PaginatedListItemData::PaginatedListItemData()   {
}
