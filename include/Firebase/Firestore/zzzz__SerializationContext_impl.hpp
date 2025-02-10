#pragma once
// IWYU pragma private; include "Firebase/Firestore/SerializationContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/zzzz__SerializationContext_def.hpp"
#include "Firebase/Firestore/Converters/zzzz__IFirestoreInternalConverter_def.hpp"
#include "Firebase/Firestore/zzzz__ConverterRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::SerializationContext._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::SerializationContext::*)(::Firebase::Firestore::ConverterRegistry*)>(&::Firebase::Firestore::SerializationContext::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x190ec50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SerializationContext*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::ConverterRegistry*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::SerializationContext.get_Default
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::SerializationContext* (*)()>(&::Firebase::Firestore::SerializationContext::get_Default)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x190ed10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SerializationContext*>::get(),
                        "get_Default",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::SerializationContext.GetConverter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::Converters::IFirestoreInternalConverter* (::Firebase::Firestore::SerializationContext::*)(::System::Type*)>(&::Firebase::Firestore::SerializationContext::GetConverter)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x190e2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SerializationContext*>::get(),
                        "GetConverter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*,::Firebase::Firestore::Converters::IFirestoreInternalConverter*>*& Firebase::Firestore::SerializationContext::__cordl_internal_get__customConverters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customConverters;
}
constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*,::Firebase::Firestore::Converters::IFirestoreInternalConverter*>* const& Firebase::Firestore::SerializationContext::__cordl_internal_get__customConverters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customConverters;
}
constexpr void Firebase::Firestore::SerializationContext::__cordl_internal_set__customConverters(::System::Collections::Generic::IDictionary_2<::System::Type*,::Firebase::Firestore::Converters::IFirestoreInternalConverter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____customConverters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Firestore::SerializationContext::setStaticF__Default_k__BackingField(::Firebase::Firestore::SerializationContext*  value)  {
::cordl_internals::setStaticField<::Firebase::Firestore::SerializationContext*, "<Default>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SerializationContext*>::get>(std::forward<::Firebase::Firestore::SerializationContext*>(value));
}
inline ::Firebase::Firestore::SerializationContext* Firebase::Firestore::SerializationContext::getStaticF__Default_k__BackingField()  {
return ::cordl_internals::getStaticField<::Firebase::Firestore::SerializationContext*, "<Default>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SerializationContext*>::get>();
}
inline void Firebase::Firestore::SerializationContext::_ctor(::Firebase::Firestore::ConverterRegistry*  converterRegistry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SerializationContext*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::ConverterRegistry*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, converterRegistry);
}
inline ::Firebase::Firestore::SerializationContext* Firebase::Firestore::SerializationContext::get_Default()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SerializationContext*>::get(),
                        "get_Default",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::SerializationContext*, false>(nullptr, ___internal_method);
}
inline ::Firebase::Firestore::Converters::IFirestoreInternalConverter* Firebase::Firestore::SerializationContext::GetConverter(::System::Type*  targetType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::SerializationContext*>::get(),
                        "GetConverter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::Converters::IFirestoreInternalConverter*, false>(this, ___internal_method, targetType);
}
inline ::Firebase::Firestore::SerializationContext* Firebase::Firestore::SerializationContext::New_ctor(::Firebase::Firestore::ConverterRegistry*  converterRegistry)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::SerializationContext*>(converterRegistry));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::SerializationContext::SerializationContext()   {
}
