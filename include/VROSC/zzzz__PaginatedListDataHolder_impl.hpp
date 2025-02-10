#pragma once
// IWYU pragma private; include "VROSC/PaginatedListDataHolder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__PaginatedListDataHolder_def.hpp"
#include "VROSC/zzzz__PaginatedListItemData_def.hpp"
//  Writing Method size for method: ::VROSC::PaginatedListDataHolder.set_ID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PaginatedListDataHolder::*)(::StringW)>(&::VROSC::PaginatedListDataHolder::set_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x174aff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PaginatedListDataHolder*>::get(),
                        "set_ID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PaginatedListDataHolder.get_ID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::PaginatedListDataHolder::*)()>(&::VROSC::PaginatedListDataHolder::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x174aff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PaginatedListDataHolder*>::get(),
                        "get_ID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PaginatedListDataHolder.set_Data
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PaginatedListDataHolder::*)(::VROSC::PaginatedListItemData*)>(&::VROSC::PaginatedListDataHolder::set_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x174b000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PaginatedListDataHolder*>::get(),
                        "set_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PaginatedListItemData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PaginatedListDataHolder.get_Data
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::PaginatedListItemData* (::VROSC::PaginatedListDataHolder::*)()>(&::VROSC::PaginatedListDataHolder::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x174b008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PaginatedListDataHolder*>::get(),
                        "get_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PaginatedListDataHolder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PaginatedListDataHolder::*)(::StringW, ::VROSC::PaginatedListItemData*)>(&::VROSC::PaginatedListDataHolder::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x174b010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PaginatedListDataHolder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PaginatedListItemData*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::PaginatedListDataHolder::__cordl_internal_get__ID_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ID_k__BackingField;
}
constexpr ::StringW const& VROSC::PaginatedListDataHolder::__cordl_internal_get__ID_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ID_k__BackingField;
}
constexpr void VROSC::PaginatedListDataHolder::__cordl_internal_set__ID_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ID_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::PaginatedListItemData*& VROSC::PaginatedListDataHolder::__cordl_internal_get__Data_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
constexpr ::VROSC::PaginatedListItemData* const& VROSC::PaginatedListDataHolder::__cordl_internal_get__Data_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
constexpr void VROSC::PaginatedListDataHolder::__cordl_internal_set__Data_k__BackingField(::VROSC::PaginatedListItemData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Data_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::PaginatedListDataHolder::set_ID(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PaginatedListDataHolder*>::get(),
                        "set_ID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW VROSC::PaginatedListDataHolder::get_ID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PaginatedListDataHolder*>::get(),
                        "get_ID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void VROSC::PaginatedListDataHolder::set_Data(::VROSC::PaginatedListItemData*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PaginatedListDataHolder*>::get(),
                        "set_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PaginatedListItemData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::PaginatedListItemData* VROSC::PaginatedListDataHolder::get_Data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PaginatedListDataHolder*>::get(),
                        "get_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::PaginatedListItemData*, false>(this, ___internal_method);
}
inline void VROSC::PaginatedListDataHolder::_ctor(::StringW  id, ::VROSC::PaginatedListItemData*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PaginatedListDataHolder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PaginatedListItemData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, data);
}
inline ::VROSC::PaginatedListDataHolder* VROSC::PaginatedListDataHolder::New_ctor(::StringW  id, ::VROSC::PaginatedListItemData*  data)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PaginatedListDataHolder*>(id, data));
}
// Ctor Parameters []
constexpr ::VROSC::PaginatedListDataHolder::PaginatedListDataHolder()   {
}
