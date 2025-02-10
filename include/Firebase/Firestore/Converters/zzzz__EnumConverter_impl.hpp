#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/EnumConverter.hpp"
#include "Firebase/Firestore/Converters/zzzz__ConverterBase_impl.hpp"
#include "System/zzzz__TypeCode_impl.hpp"
#include "Firebase/Firestore/Converters/zzzz__EnumConverter_def.hpp"
#include "Firebase/Firestore/zzzz__DeserializationContext_def.hpp"
#include "Firebase/Firestore/zzzz__FieldValueProxy_def.hpp"
#include "Firebase/Firestore/zzzz__SerializationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::Converters::EnumConverter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::Converters::EnumConverter::*)(::System::Type*)>(&::Firebase::Firestore::Converters::EnumConverter::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1912564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::EnumConverter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Converters::EnumConverter.DeserializeInteger
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Firebase::Firestore::Converters::EnumConverter::*)(::Firebase::Firestore::DeserializationContext*, int64_t)>(&::Firebase::Firestore::Converters::EnumConverter::DeserializeInteger)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x19125e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::EnumConverter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::EnumConverter*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Converters::EnumConverter.Serialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (::Firebase::Firestore::Converters::EnumConverter::*)(::Firebase::Firestore::SerializationContext*, ::System::Object*)>(&::Firebase::Firestore::Converters::EnumConverter::Serialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x191286c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::EnumConverter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::EnumConverter*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Converters::EnumConverter.EnumToInt64
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Firebase::Firestore::Converters::EnumConverter::*)(::System::Object*)>(&::Firebase::Firestore::Converters::EnumConverter::EnumToInt64)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x1912880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::EnumConverter*>::get(),
                        "EnumToInt64",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::Converters::EnumConverter.Int64ToEnumBaseType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Firebase::Firestore::Converters::EnumConverter::*)(int64_t)>(&::Firebase::Firestore::Converters::EnumConverter::Int64ToEnumBaseType)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x1912660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::EnumConverter*>::get(),
                        "Int64ToEnumBaseType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::TypeCode& Firebase::Firestore::Converters::EnumConverter::__cordl_internal_get__typeCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeCode;
}
constexpr ::System::TypeCode const& Firebase::Firestore::Converters::EnumConverter::__cordl_internal_get__typeCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeCode;
}
constexpr void Firebase::Firestore::Converters::EnumConverter::__cordl_internal_set__typeCode(::System::TypeCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____typeCode = value;
}
inline void Firebase::Firestore::Converters::EnumConverter::_ctor(::System::Type*  targetType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::EnumConverter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetType);
}
inline ::System::Object* Firebase::Firestore::Converters::EnumConverter::DeserializeInteger(::Firebase::Firestore::DeserializationContext*  context, int64_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::EnumConverter*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context, value);
}
inline ::Firebase::Firestore::FieldValueProxy* Firebase::Firestore::Converters::EnumConverter::Serialize(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::EnumConverter*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FieldValueProxy*, false>(this, ___internal_method, context, value);
}
inline int64_t Firebase::Firestore::Converters::EnumConverter::EnumToInt64(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::EnumConverter*>::get(),
                        "EnumToInt64",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, value);
}
inline ::System::Object* Firebase::Firestore::Converters::EnumConverter::Int64ToEnumBaseType(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Converters::EnumConverter*>::get(),
                        "Int64ToEnumBaseType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value);
}
inline ::Firebase::Firestore::Converters::EnumConverter* Firebase::Firestore::Converters::EnumConverter::New_ctor(::System::Type*  targetType)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::Converters::EnumConverter*>(targetType));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::Converters::EnumConverter::EnumConverter()   {
}
