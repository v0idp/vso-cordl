#pragma once
// IWYU pragma private; include "Firebase/Firestore/FirestoreDataAttribute.hpp"
#include "Firebase/Firestore/zzzz__UnknownPropertyHandling_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Firebase/Firestore/zzzz__FirestoreDataAttribute_def.hpp"
#include "Firebase/Firestore/zzzz__UnknownPropertyHandling_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::FirestoreDataAttribute.get_UnknownPropertyHandling
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::UnknownPropertyHandling (::Firebase::Firestore::FirestoreDataAttribute::*)()>(&::Firebase::Firestore::FirestoreDataAttribute::get_UnknownPropertyHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x191a468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FirestoreDataAttribute*>::get(),
                        "get_UnknownPropertyHandling",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FirestoreDataAttribute.get_ConverterType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Firebase::Firestore::FirestoreDataAttribute::*)()>(&::Firebase::Firestore::FirestoreDataAttribute::get_ConverterType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x191a470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FirestoreDataAttribute*>::get(),
                        "get_ConverterType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Firebase::Firestore::UnknownPropertyHandling& Firebase::Firestore::FirestoreDataAttribute::__cordl_internal_get__UnknownPropertyHandling_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnknownPropertyHandling_k__BackingField;
}
constexpr ::Firebase::Firestore::UnknownPropertyHandling const& Firebase::Firestore::FirestoreDataAttribute::__cordl_internal_get__UnknownPropertyHandling_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnknownPropertyHandling_k__BackingField;
}
constexpr void Firebase::Firestore::FirestoreDataAttribute::__cordl_internal_set__UnknownPropertyHandling_k__BackingField(::Firebase::Firestore::UnknownPropertyHandling  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UnknownPropertyHandling_k__BackingField = value;
}
constexpr ::System::Type*& Firebase::Firestore::FirestoreDataAttribute::__cordl_internal_get__ConverterType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConverterType_k__BackingField;
}
constexpr ::System::Type* const& Firebase::Firestore::FirestoreDataAttribute::__cordl_internal_get__ConverterType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConverterType_k__BackingField;
}
constexpr void Firebase::Firestore::FirestoreDataAttribute::__cordl_internal_set__ConverterType_k__BackingField(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ConverterType_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Firebase::Firestore::UnknownPropertyHandling Firebase::Firestore::FirestoreDataAttribute::get_UnknownPropertyHandling()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FirestoreDataAttribute*>::get(),
                        "get_UnknownPropertyHandling",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::UnknownPropertyHandling, false>(this, ___internal_method);
}
inline ::System::Type* Firebase::Firestore::FirestoreDataAttribute::get_ConverterType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FirestoreDataAttribute*>::get(),
                        "get_ConverterType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::FirestoreDataAttribute::FirestoreDataAttribute()   {
}
