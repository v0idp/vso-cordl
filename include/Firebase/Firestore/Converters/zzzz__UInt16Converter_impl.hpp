#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/UInt16Converter.hpp"
#include "Firebase/Firestore/Converters/zzzz__IntegerConverterBase_impl.hpp"
#include "Firebase/Firestore/Converters/zzzz__UInt16Converter_def.hpp"
#include "Firebase/Firestore/zzzz__DeserializationContext_def.hpp"
#include "Firebase/Firestore/zzzz__FieldValueProxy_def.hpp"
#include "Firebase/Firestore/zzzz__SerializationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::Converters::UInt16Converter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::Converters::UInt16Converter::*)()>(&::Firebase::Firestore::Converters::UInt16Converter::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x190f700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::UInt16Converter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Converters::UInt16Converter.Serialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (::Firebase::Firestore::Converters::UInt16Converter::*)(::Firebase::Firestore::SerializationContext*, ::System::Object*)>(&::Firebase::Firestore::Converters::UInt16Converter::Serialize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x190f790;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::UInt16Converter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::UInt16Converter*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Converters::UInt16Converter.DeserializeInteger
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Firebase::Firestore::Converters::UInt16Converter::*)(::Firebase::Firestore::DeserializationContext*, int64_t)>(&::Firebase::Firestore::Converters::UInt16Converter::DeserializeInteger)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x190f800;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::UInt16Converter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::UInt16Converter*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline void Firebase::Firestore::Converters::UInt16Converter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::UInt16Converter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::FieldValueProxy* Firebase::Firestore::Converters::UInt16Converter::Serialize(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::UInt16Converter*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FieldValueProxy*, false>(this, ___internal_method, context, value);
}
inline ::System::Object* Firebase::Firestore::Converters::UInt16Converter::DeserializeInteger(::Firebase::Firestore::DeserializationContext*  context, int64_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::UInt16Converter*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context, value);
}
inline ::Firebase::Firestore::Converters::UInt16Converter* Firebase::Firestore::Converters::UInt16Converter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::Converters::UInt16Converter*>());
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::Converters::UInt16Converter::UInt16Converter()   {
}
