#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/ArrayConverter.hpp"
#include "Firebase/Firestore/Converters/zzzz__EnumerableConverterBase_impl.hpp"
#include "Firebase/Firestore/Converters/zzzz__ArrayConverter_def.hpp"
#include "Firebase/Firestore/zzzz__DeserializationContext_def.hpp"
#include "Firebase/Firestore/zzzz__FieldValueProxy_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::Converters::ArrayConverter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::Converters::ArrayConverter::*)(::System::Type*)>(&::Firebase::Firestore::Converters::ArrayConverter::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x19134cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::ArrayConverter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Converters::ArrayConverter.DeserializeArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Firebase::Firestore::Converters::ArrayConverter::*)(::Firebase::Firestore::DeserializationContext*, ::Firebase::Firestore::FieldValueProxy*)>(&::Firebase::Firestore::Converters::ArrayConverter::DeserializeArray)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x1917bf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::ArrayConverter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::ArrayConverter*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Firebase::Firestore::Converters::ArrayConverter::__cordl_internal_get__elementType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementType;
}
constexpr ::System::Type* const& Firebase::Firestore::Converters::ArrayConverter::__cordl_internal_get__elementType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementType;
}
constexpr void Firebase::Firestore::Converters::ArrayConverter::__cordl_internal_set__elementType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____elementType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Firestore::Converters::ArrayConverter::_ctor(::System::Type*  elementType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::ArrayConverter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elementType);
}
inline ::System::Object* Firebase::Firestore::Converters::ArrayConverter::DeserializeArray(::Firebase::Firestore::DeserializationContext*  context, ::Firebase::Firestore::FieldValueProxy*  arrayValue)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::ArrayConverter*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context, arrayValue);
}
inline ::Firebase::Firestore::Converters::ArrayConverter* Firebase::Firestore::Converters::ArrayConverter::New_ctor(::System::Type*  elementType)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::Converters::ArrayConverter*>(elementType));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::Converters::ArrayConverter::ArrayConverter()   {
}
