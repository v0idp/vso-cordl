#pragma once
// IWYU pragma private; include "Firebase/Firestore/FirestorePropertyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Firebase/Firestore/zzzz__FirestorePropertyAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::FirestorePropertyAttribute.get_Name
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Firebase::Firestore::FirestorePropertyAttribute::*)()>(&::Firebase::Firestore::FirestorePropertyAttribute::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x191a450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FirestorePropertyAttribute*>::get(),
                        "get_Name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FirestorePropertyAttribute.get_ConverterType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Firebase::Firestore::FirestorePropertyAttribute::*)()>(&::Firebase::Firestore::FirestorePropertyAttribute::get_ConverterType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x191a458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FirestorePropertyAttribute*>::get(),
                        "get_ConverterType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Firebase::Firestore::FirestorePropertyAttribute::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& Firebase::Firestore::FirestorePropertyAttribute::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void Firebase::Firestore::FirestorePropertyAttribute::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Name_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Firebase::Firestore::FirestorePropertyAttribute::__cordl_internal_get__ConverterType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConverterType_k__BackingField;
}
constexpr ::System::Type* const& Firebase::Firestore::FirestorePropertyAttribute::__cordl_internal_get__ConverterType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConverterType_k__BackingField;
}
constexpr void Firebase::Firestore::FirestorePropertyAttribute::__cordl_internal_set__ConverterType_k__BackingField(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ConverterType_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Firebase::Firestore::FirestorePropertyAttribute::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FirestorePropertyAttribute*>::get(),
                        "get_Name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Type* Firebase::Firestore::FirestorePropertyAttribute::get_ConverterType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FirestorePropertyAttribute*>::get(),
                        "get_ConverterType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::FirestorePropertyAttribute::FirestorePropertyAttribute()   {
}
