#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/FieldValueProxyConverter.hpp"
#include "Firebase/Firestore/Converters/zzzz__ConverterBase_impl.hpp"
#include "Firebase/Firestore/Converters/zzzz__FieldValueProxyConverter_def.hpp"
#include "Firebase/Firestore/zzzz__FieldValueProxy_def.hpp"
#include "Firebase/Firestore/zzzz__SerializationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::Converters::FieldValueProxyConverter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::Converters::FieldValueProxyConverter::*)()>(&::Firebase::Firestore::Converters::FieldValueProxyConverter::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1910c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::FieldValueProxyConverter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Converters::FieldValueProxyConverter.Serialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (::Firebase::Firestore::Converters::FieldValueProxyConverter::*)(::Firebase::Firestore::SerializationContext*, ::System::Object*)>(&::Firebase::Firestore::Converters::FieldValueProxyConverter::Serialize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1910ca0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::FieldValueProxyConverter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::FieldValueProxyConverter*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
inline void Firebase::Firestore::Converters::FieldValueProxyConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::FieldValueProxyConverter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::FieldValueProxy* Firebase::Firestore::Converters::FieldValueProxyConverter::Serialize(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::FieldValueProxyConverter*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FieldValueProxy*, false>(this, ___internal_method, context, value);
}
inline ::Firebase::Firestore::Converters::FieldValueProxyConverter* Firebase::Firestore::Converters::FieldValueProxyConverter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::Converters::FieldValueProxyConverter*>());
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::Converters::FieldValueProxyConverter::FieldValueProxyConverter()   {
}
