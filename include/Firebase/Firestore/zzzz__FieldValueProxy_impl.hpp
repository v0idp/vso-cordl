#pragma once
// IWYU pragma private; include "Firebase/Firestore/FieldValueProxy.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/zzzz__FieldValueProxy_def.hpp"
#include "Firebase/Firestore/zzzz__DocumentReferenceProxy_def.hpp"
#include "Firebase/Firestore/zzzz__FieldValueProxy_def.hpp"
#include "Firebase/Firestore/zzzz__GeoPointProxy_def.hpp"
#include "Firebase/Firestore/zzzz__SWIGTYPE_p_unsigned_char_def.hpp"
#include "Firebase/Firestore/zzzz__TimestampProxy_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Firebase::Firestore::FieldValueProxy_Type::FieldValueProxy_Type(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::FieldValueProxy_Type::FieldValueProxy_Type()   {
}
constexpr ::Firebase::Firestore::FieldValueProxy_Type  Firebase::Firestore::FieldValueProxy_Type::Null{static_cast<int32_t>(0x0)};
constexpr ::Firebase::Firestore::FieldValueProxy_Type  Firebase::Firestore::FieldValueProxy_Type::Boolean{static_cast<int32_t>(0x1)};
constexpr ::Firebase::Firestore::FieldValueProxy_Type  Firebase::Firestore::FieldValueProxy_Type::Integer{static_cast<int32_t>(0x2)};
constexpr ::Firebase::Firestore::FieldValueProxy_Type  Firebase::Firestore::FieldValueProxy_Type::Double{static_cast<int32_t>(0x3)};
constexpr ::Firebase::Firestore::FieldValueProxy_Type  Firebase::Firestore::FieldValueProxy_Type::Timestamp{static_cast<int32_t>(0x4)};
constexpr ::Firebase::Firestore::FieldValueProxy_Type  Firebase::Firestore::FieldValueProxy_Type::String{static_cast<int32_t>(0x5)};
constexpr ::Firebase::Firestore::FieldValueProxy_Type  Firebase::Firestore::FieldValueProxy_Type::Blob{static_cast<int32_t>(0x6)};
constexpr ::Firebase::Firestore::FieldValueProxy_Type  Firebase::Firestore::FieldValueProxy_Type::Reference{static_cast<int32_t>(0x7)};
constexpr ::Firebase::Firestore::FieldValueProxy_Type  Firebase::Firestore::FieldValueProxy_Type::GeoPoint{static_cast<int32_t>(0x8)};
constexpr ::Firebase::Firestore::FieldValueProxy_Type  Firebase::Firestore::FieldValueProxy_Type::Array{static_cast<int32_t>(0x9)};
constexpr ::Firebase::Firestore::FieldValueProxy_Type  Firebase::Firestore::FieldValueProxy_Type::Map{static_cast<int32_t>(0xa)};
constexpr ::Firebase::Firestore::FieldValueProxy_Type  Firebase::Firestore::FieldValueProxy_Type::Delete{static_cast<int32_t>(0xb)};
constexpr ::Firebase::Firestore::FieldValueProxy_Type  Firebase::Firestore::FieldValueProxy_Type::ServerTimestamp{static_cast<int32_t>(0xc)};
constexpr ::Firebase::Firestore::FieldValueProxy_Type  Firebase::Firestore::FieldValueProxy_Type::ArrayUnion{static_cast<int32_t>(0xd)};
constexpr ::Firebase::Firestore::FieldValueProxy_Type  Firebase::Firestore::FieldValueProxy_Type::ArrayRemove{static_cast<int32_t>(0xe)};
constexpr ::Firebase::Firestore::FieldValueProxy_Type  Firebase::Firestore::FieldValueProxy_Type::IncrementInteger{static_cast<int32_t>(0xf)};
constexpr ::Firebase::Firestore::FieldValueProxy_Type  Firebase::Firestore::FieldValueProxy_Type::IncrementDouble{static_cast<int32_t>(0x10)};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::FieldValueProxy::*)(::System::IntPtr, bool)>(&::Firebase::Firestore::FieldValueProxy::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18fdc7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.getCPtr
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Firebase::Firestore::FieldValueProxy*)>(&::Firebase::Firestore::FieldValueProxy::getCPtr)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x18fd9b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "getCPtr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FieldValueProxy*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.Finalize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::FieldValueProxy::*)()>(&::Firebase::Firestore::FieldValueProxy::Finalize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1907f88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::FieldValueProxy::*)()>(&::Firebase::Firestore::FieldValueProxy::Dispose)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x1908024;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.Boolean
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (*)(bool)>(&::Firebase::Firestore::FieldValueProxy::Boolean)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x19081c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "Boolean",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.Integer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (*)(int64_t)>(&::Firebase::Firestore::FieldValueProxy::Integer)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x19082a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "Integer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.Double
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (*)(double_t)>(&::Firebase::Firestore::FieldValueProxy::Double)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x1908388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "Double",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.Timestamp
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (*)(::Firebase::Firestore::TimestampProxy*)>(&::Firebase::Firestore::FieldValueProxy::Timestamp)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1908474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "Timestamp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::TimestampProxy*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.String
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (*)(::StringW)>(&::Firebase::Firestore::FieldValueProxy::String)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x19085b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "String",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.Blob
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (*)(::Firebase::Firestore::SWIGTYPE_p_unsigned_char*, uint32_t)>(&::Firebase::Firestore::FieldValueProxy::Blob)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1908694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "Blob",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::SWIGTYPE_p_unsigned_char*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.Reference
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (*)(::Firebase::Firestore::DocumentReferenceProxy*)>(&::Firebase::Firestore::FieldValueProxy::Reference)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x190879c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "Reference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReferenceProxy*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.GeoPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (*)(::Firebase::Firestore::GeoPointProxy*)>(&::Firebase::Firestore::FieldValueProxy::GeoPoint)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1908894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "GeoPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::GeoPointProxy*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.type
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy_Type (::Firebase::Firestore::FieldValueProxy::*)()>(&::Firebase::Firestore::FieldValueProxy::type)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x19089d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "type",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.is_null
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Firebase::Firestore::FieldValueProxy::*)()>(&::Firebase::Firestore::FieldValueProxy::is_null)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1908a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "is_null",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.is_map
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Firebase::Firestore::FieldValueProxy::*)()>(&::Firebase::Firestore::FieldValueProxy::is_map)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1908af0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "is_map",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.boolean_value
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Firebase::Firestore::FieldValueProxy::*)()>(&::Firebase::Firestore::FieldValueProxy::boolean_value)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1908b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "boolean_value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.integer_value
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Firebase::Firestore::FieldValueProxy::*)()>(&::Firebase::Firestore::FieldValueProxy::integer_value)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1908c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "integer_value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.double_value
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::Firebase::Firestore::FieldValueProxy::*)()>(&::Firebase::Firestore::FieldValueProxy::double_value)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1908ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "double_value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.timestamp_value
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::TimestampProxy* (::Firebase::Firestore::FieldValueProxy::*)()>(&::Firebase::Firestore::FieldValueProxy::timestamp_value)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x1908d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "timestamp_value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.string_value
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Firebase::Firestore::FieldValueProxy::*)()>(&::Firebase::Firestore::FieldValueProxy::string_value)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1908e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "string_value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.blob_value
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::SWIGTYPE_p_unsigned_char* (::Firebase::Firestore::FieldValueProxy::*)()>(&::Firebase::Firestore::FieldValueProxy::blob_value)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x1908f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "blob_value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.blob_size
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Firebase::Firestore::FieldValueProxy::*)()>(&::Firebase::Firestore::FieldValueProxy::blob_size)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1908ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "blob_size",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.reference_value
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::DocumentReferenceProxy* (::Firebase::Firestore::FieldValueProxy::*)()>(&::Firebase::Firestore::FieldValueProxy::reference_value)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x190908c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "reference_value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.geo_point_value
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::GeoPointProxy* (::Firebase::Firestore::FieldValueProxy::*)()>(&::Firebase::Firestore::FieldValueProxy::geo_point_value)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x1909178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "geo_point_value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.is_valid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Firebase::Firestore::FieldValueProxy::*)()>(&::Firebase::Firestore::FieldValueProxy::is_valid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x19092b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "is_valid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.Null
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (*)()>(&::Firebase::Firestore::FieldValueProxy::Null)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1909348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "Null",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.Delete
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (*)()>(&::Firebase::Firestore::FieldValueProxy::Delete)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1909424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "Delete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.ServerTimestamp
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (*)()>(&::Firebase::Firestore::FieldValueProxy::ServerTimestamp)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1909500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "ServerTimestamp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FieldValueProxy.IntegerIncrement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (*)(int64_t)>(&::Firebase::Firestore::FieldValueProxy::IntegerIncrement)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x19095dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "IntegerIncrement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& Firebase::Firestore::FieldValueProxy::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& Firebase::Firestore::FieldValueProxy::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void Firebase::Firestore::FieldValueProxy::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
constexpr bool& Firebase::Firestore::FieldValueProxy::__cordl_internal_get_swigCMemOwn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr bool const& Firebase::Firestore::FieldValueProxy::__cordl_internal_get_swigCMemOwn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCMemOwn;
}
constexpr void Firebase::Firestore::FieldValueProxy::__cordl_internal_set_swigCMemOwn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCMemOwn = value;
}
inline void Firebase::Firestore::FieldValueProxy::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef Firebase::Firestore::FieldValueProxy::getCPtr(::Firebase::Firestore::FieldValueProxy*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "getCPtr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FieldValueProxy*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef, false>(nullptr, ___internal_method, obj);
}
inline void Firebase::Firestore::FieldValueProxy::Finalize()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Firebase::Firestore::FieldValueProxy::Dispose()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::FieldValueProxy* Firebase::Firestore::FieldValueProxy::Boolean(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "Boolean",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FieldValueProxy*, false>(nullptr, ___internal_method, value);
}
inline ::Firebase::Firestore::FieldValueProxy* Firebase::Firestore::FieldValueProxy::Integer(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "Integer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FieldValueProxy*, false>(nullptr, ___internal_method, value);
}
inline ::Firebase::Firestore::FieldValueProxy* Firebase::Firestore::FieldValueProxy::Double(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "Double",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FieldValueProxy*, false>(nullptr, ___internal_method, value);
}
inline ::Firebase::Firestore::FieldValueProxy* Firebase::Firestore::FieldValueProxy::Timestamp(::Firebase::Firestore::TimestampProxy*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "Timestamp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::TimestampProxy*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FieldValueProxy*, false>(nullptr, ___internal_method, value);
}
inline ::Firebase::Firestore::FieldValueProxy* Firebase::Firestore::FieldValueProxy::String(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "String",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FieldValueProxy*, false>(nullptr, ___internal_method, value);
}
inline ::Firebase::Firestore::FieldValueProxy* Firebase::Firestore::FieldValueProxy::Blob(::Firebase::Firestore::SWIGTYPE_p_unsigned_char*  value, uint32_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "Blob",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::SWIGTYPE_p_unsigned_char*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FieldValueProxy*, false>(nullptr, ___internal_method, value, size);
}
inline ::Firebase::Firestore::FieldValueProxy* Firebase::Firestore::FieldValueProxy::Reference(::Firebase::Firestore::DocumentReferenceProxy*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "Reference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReferenceProxy*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FieldValueProxy*, false>(nullptr, ___internal_method, value);
}
inline ::Firebase::Firestore::FieldValueProxy* Firebase::Firestore::FieldValueProxy::GeoPoint(::Firebase::Firestore::GeoPointProxy*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "GeoPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::GeoPointProxy*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FieldValueProxy*, false>(nullptr, ___internal_method, value);
}
inline ::Firebase::Firestore::FieldValueProxy_Type Firebase::Firestore::FieldValueProxy::type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "type",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FieldValueProxy_Type, false>(this, ___internal_method);
}
inline bool Firebase::Firestore::FieldValueProxy::is_null()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "is_null",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Firebase::Firestore::FieldValueProxy::is_map()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "is_map",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Firebase::Firestore::FieldValueProxy::boolean_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "boolean_value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t Firebase::Firestore::FieldValueProxy::integer_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "integer_value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline double_t Firebase::Firestore::FieldValueProxy::double_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "double_value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::TimestampProxy* Firebase::Firestore::FieldValueProxy::timestamp_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "timestamp_value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::TimestampProxy*, false>(this, ___internal_method);
}
inline ::StringW Firebase::Firestore::FieldValueProxy::string_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "string_value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::SWIGTYPE_p_unsigned_char* Firebase::Firestore::FieldValueProxy::blob_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "blob_value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::SWIGTYPE_p_unsigned_char*, false>(this, ___internal_method);
}
inline uint32_t Firebase::Firestore::FieldValueProxy::blob_size()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "blob_size",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::DocumentReferenceProxy* Firebase::Firestore::FieldValueProxy::reference_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "reference_value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::DocumentReferenceProxy*, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::GeoPointProxy* Firebase::Firestore::FieldValueProxy::geo_point_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "geo_point_value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::GeoPointProxy*, false>(this, ___internal_method);
}
inline bool Firebase::Firestore::FieldValueProxy::is_valid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "is_valid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::FieldValueProxy* Firebase::Firestore::FieldValueProxy::Null()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "Null",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FieldValueProxy*, false>(nullptr, ___internal_method);
}
inline ::Firebase::Firestore::FieldValueProxy* Firebase::Firestore::FieldValueProxy::Delete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "Delete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FieldValueProxy*, false>(nullptr, ___internal_method);
}
inline ::Firebase::Firestore::FieldValueProxy* Firebase::Firestore::FieldValueProxy::ServerTimestamp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "ServerTimestamp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FieldValueProxy*, false>(nullptr, ___internal_method);
}
inline ::Firebase::Firestore::FieldValueProxy* Firebase::Firestore::FieldValueProxy::IntegerIncrement(int64_t  byValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FieldValueProxy*>::get(),
                        "IntegerIncrement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::FieldValueProxy*, false>(nullptr, ___internal_method, byValue);
}
inline ::Firebase::Firestore::FieldValueProxy* Firebase::Firestore::FieldValueProxy::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::FieldValueProxy*>(cPtr, cMemoryOwn));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Firebase::Firestore::FieldValueProxy::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Firebase::Firestore::FieldValueProxy::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::FieldValueProxy::FieldValueProxy()   {
}
