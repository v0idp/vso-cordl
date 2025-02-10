#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/AnonymousTypeConverter.hpp"
#include "Firebase/Firestore/Converters/zzzz__MapConverterBase_impl.hpp"
#include "Firebase/Firestore/Converters/zzzz__AnonymousTypeConverter_def.hpp"
#include "Firebase/Firestore/zzzz__FieldValueProxy_def.hpp"
#include "Firebase/Firestore/zzzz__SerializationContext_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::Converters::AnonymousTypeConverter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::Converters::AnonymousTypeConverter::*)(::System::Type*)>(&::Firebase::Firestore::Converters::AnonymousTypeConverter::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x19136c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::AnonymousTypeConverter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Converters::AnonymousTypeConverter.SerializeMap
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::Converters::AnonymousTypeConverter::*)(::Firebase::Firestore::SerializationContext*, ::System::Object*, ::System::Collections::Generic::IDictionary_2<::StringW,::Firebase::Firestore::FieldValueProxy*>*)>(&::Firebase::Firestore::Converters::AnonymousTypeConverter::SerializeMap)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x1917ec8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::AnonymousTypeConverter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::AnonymousTypeConverter*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IList_1<::System::Reflection::PropertyInfo*>*& Firebase::Firestore::Converters::AnonymousTypeConverter::__cordl_internal_get__properties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____properties;
}
constexpr ::System::Collections::Generic::IList_1<::System::Reflection::PropertyInfo*>* const& Firebase::Firestore::Converters::AnonymousTypeConverter::__cordl_internal_get__properties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____properties;
}
constexpr void Firebase::Firestore::Converters::AnonymousTypeConverter::__cordl_internal_set__properties(::System::Collections::Generic::IList_1<::System::Reflection::PropertyInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____properties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Firestore::Converters::AnonymousTypeConverter::_ctor(::System::Type*  targetType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::AnonymousTypeConverter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetType);
}
inline void Firebase::Firestore::Converters::AnonymousTypeConverter::SerializeMap(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value, ::System::Collections::Generic::IDictionary_2<::StringW,::Firebase::Firestore::FieldValueProxy*>*  map)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::AnonymousTypeConverter*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, value, map);
}
inline ::Firebase::Firestore::Converters::AnonymousTypeConverter* Firebase::Firestore::Converters::AnonymousTypeConverter::New_ctor(::System::Type*  targetType)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::Converters::AnonymousTypeConverter*>(targetType));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::Converters::AnonymousTypeConverter::AnonymousTypeConverter()   {
}
