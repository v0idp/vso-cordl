#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/DoubleConverter.hpp"
#include "Firebase/Firestore/Converters/zzzz__ConverterBase_impl.hpp"
#include "Firebase/Firestore/Converters/zzzz__DoubleConverter_def.hpp"
#include "Firebase/Firestore/zzzz__DeserializationContext_def.hpp"
#include "Firebase/Firestore/zzzz__FieldValueProxy_def.hpp"
#include "Firebase/Firestore/zzzz__SerializationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::Converters::DoubleConverter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::Converters::DoubleConverter::*)()>(&::Firebase::Firestore::Converters::DoubleConverter::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x190fff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::DoubleConverter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Converters::DoubleConverter.Serialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (::Firebase::Firestore::Converters::DoubleConverter::*)(::Firebase::Firestore::SerializationContext*, ::System::Object*)>(&::Firebase::Firestore::Converters::DoubleConverter::Serialize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1910080;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::DoubleConverter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::DoubleConverter*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Converters::DoubleConverter.DeserializeDouble
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Firebase::Firestore::Converters::DoubleConverter::*)(::Firebase::Firestore::DeserializationContext*, double_t)>(&::Firebase::Firestore::Converters::DoubleConverter::DeserializeDouble)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x19100f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::DoubleConverter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::DoubleConverter*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Converters::DoubleConverter.DeserializeInteger
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Firebase::Firestore::Converters::DoubleConverter::*)(::Firebase::Firestore::DeserializationContext*, int64_t)>(&::Firebase::Firestore::Converters::DoubleConverter::DeserializeInteger)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1910150;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::DoubleConverter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::DoubleConverter*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline void Firebase::Firestore::Converters::DoubleConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::DoubleConverter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::FieldValueProxy* Firebase::Firestore::Converters::DoubleConverter::Serialize(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::DoubleConverter*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FieldValueProxy*, false>(this, ___internal_method, context, value);
}
inline ::System::Object* Firebase::Firestore::Converters::DoubleConverter::DeserializeDouble(::Firebase::Firestore::DeserializationContext*  context, double_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::DoubleConverter*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context, value);
}
inline ::System::Object* Firebase::Firestore::Converters::DoubleConverter::DeserializeInteger(::Firebase::Firestore::DeserializationContext*  context, int64_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::DoubleConverter*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context, value);
}
inline ::Firebase::Firestore::Converters::DoubleConverter* Firebase::Firestore::Converters::DoubleConverter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::Converters::DoubleConverter*>());
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::Converters::DoubleConverter::DoubleConverter()   {
}
