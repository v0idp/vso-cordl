#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/AttributedIdAssigner.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/Converters/zzzz__AttributedIdAssigner_def.hpp"
#include "Firebase/Firestore/zzzz__DocumentReference_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::Converters::AttributedIdAssigner._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::Converters::AttributedIdAssigner::*)(::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*, ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*)>(&::Firebase::Firestore::Converters::AttributedIdAssigner::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x19171c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::AttributedIdAssigner*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Converters::AttributedIdAssigner.AssignId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::Converters::AttributedIdAssigner::*)(::System::Object*, ::Firebase::Firestore::DocumentReference*)>(&::Firebase::Firestore::Converters::AttributedIdAssigner::AssignId)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x19171ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::AttributedIdAssigner*>::get(),
                        "AssignId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReference*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Converters::AttributedIdAssigner.MaybeAssignId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::Firebase::Firestore::DocumentReference*)>(&::Firebase::Firestore::Converters::AttributedIdAssigner::MaybeAssignId)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x1916b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::AttributedIdAssigner*>::get(),
                        "MaybeAssignId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReference*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Converters::AttributedIdAssigner.MaybeCreateAssigner
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::Converters::AttributedIdAssigner* (*)(::System::Type*)>(&::Firebase::Firestore::Converters::AttributedIdAssigner::MaybeCreateAssigner)> {
  constexpr static std::size_t size = 0x6f8;
  constexpr static std::size_t addrs = 0x191746c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::AttributedIdAssigner*>::get(),
                        "MaybeCreateAssigner",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*& Firebase::Firestore::Converters::AttributedIdAssigner::__cordl_internal_get__idProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____idProperties;
}
constexpr ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>* const& Firebase::Firestore::Converters::AttributedIdAssigner::__cordl_internal_get__idProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____idProperties;
}
constexpr void Firebase::Firestore::Converters::AttributedIdAssigner::__cordl_internal_set__idProperties(::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____idProperties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*& Firebase::Firestore::Converters::AttributedIdAssigner::__cordl_internal_get__referenceProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____referenceProperties;
}
constexpr ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>* const& Firebase::Firestore::Converters::AttributedIdAssigner::__cordl_internal_get__referenceProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____referenceProperties;
}
constexpr void Firebase::Firestore::Converters::AttributedIdAssigner::__cordl_internal_set__referenceProperties(::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____referenceProperties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Firestore::Converters::AttributedIdAssigner::setStaticF_s_assigners(::System::Collections::Generic::Dictionary_2<::System::Type*,::Firebase::Firestore::Converters::AttributedIdAssigner*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::Firebase::Firestore::Converters::AttributedIdAssigner*>*, "s_assigners", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::AttributedIdAssigner*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::Firebase::Firestore::Converters::AttributedIdAssigner*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::Firebase::Firestore::Converters::AttributedIdAssigner*>* Firebase::Firestore::Converters::AttributedIdAssigner::getStaticF_s_assigners()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::Firebase::Firestore::Converters::AttributedIdAssigner*>*, "s_assigners", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::AttributedIdAssigner*>::get>();
}
inline void Firebase::Firestore::Converters::AttributedIdAssigner::_ctor(::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*  idProperties, ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*  referenceProperties)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::AttributedIdAssigner*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idProperties, referenceProperties);
}
inline void Firebase::Firestore::Converters::AttributedIdAssigner::AssignId(::System::Object*  value, ::Firebase::Firestore::DocumentReference*  reference)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::AttributedIdAssigner*>::get(),
                        "AssignId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReference*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, reference);
}
inline void Firebase::Firestore::Converters::AttributedIdAssigner::MaybeAssignId(::System::Object*  value, ::Firebase::Firestore::DocumentReference*  reference)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::AttributedIdAssigner*>::get(),
                        "MaybeAssignId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReference*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value, reference);
}
inline ::Firebase::Firestore::Converters::AttributedIdAssigner* Firebase::Firestore::Converters::AttributedIdAssigner::MaybeCreateAssigner(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::AttributedIdAssigner*>::get(),
                        "MaybeCreateAssigner",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::Converters::AttributedIdAssigner*, false>(nullptr, ___internal_method, type);
}
inline ::Firebase::Firestore::Converters::AttributedIdAssigner* Firebase::Firestore::Converters::AttributedIdAssigner::New_ctor(::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*  idProperties, ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*  referenceProperties)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::Converters::AttributedIdAssigner*>(idProperties, referenceProperties));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::Converters::AttributedIdAssigner::AttributedIdAssigner()   {
}
