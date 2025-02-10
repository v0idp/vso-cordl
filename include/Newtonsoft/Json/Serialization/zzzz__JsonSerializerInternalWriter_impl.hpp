#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonSerializerInternalWriter.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalBase_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalWriter_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonArrayContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonDictionaryContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonDynamicContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonISerializableContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonObjectContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonPrimitiveContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonProperty_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerProxy_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonStringContract_def.hpp"
#include "Newtonsoft/Json/zzzz__DefaultValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__PreserveReferencesHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameHandling_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Dynamic/zzzz__IDynamicMetaObjectProvider_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonSerializer*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2814a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.Serialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::System::Type*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::Serialize)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2814a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "Serialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.GetInternalSerializer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonSerializerProxy* (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)()>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetInternalSerializer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x28157ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "GetInternalSerializer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.GetContractSafe
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonContract* (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetContractSafe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2814cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "GetContractSafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.GetContract
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonContract* (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetContract)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2815854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "GetContract",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializePrimitive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonPrimitiveContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializePrimitive)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2815918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "SerializePrimitive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonPrimitiveContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeValue)> {
  constexpr static std::size_t size = 0x660;
  constexpr static std::size_t addrs = 0x2815118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "SerializeValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.ResolveIsReference
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ResolveIsReference)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x281898c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "ResolveIsReference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.ShouldWriteReference
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::System::Object*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteReference)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2814d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "ShouldWriteReference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.ShouldWriteProperty
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::System::Object*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteProperty)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2818a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "ShouldWriteProperty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonObjectContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.CheckForCircularReference
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::CheckForCircularReference)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x2818b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "CheckForCircularReference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.WriteReference
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteReference)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x2814e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "WriteReference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.GetReference
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetReference)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2819090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "GetReference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.TryConvertToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Object*, ::System::Type*, ::ByRef<::StringW>)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::TryConvertToString)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x281927c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "TryConvertToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonStringContract*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2817464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "SerializeString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonStringContract*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.OnSerializing
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::OnSerializing)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2819384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "OnSerializing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.OnSerialized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::OnSerialized)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2819588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "OnSerialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeObject)> {
  constexpr static std::size_t size = 0x744;
  constexpr static std::size_t addrs = 0x2816444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "SerializeObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonObjectContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.CalculatePropertyValues
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::ByRef<::Newtonsoft::Json::Serialization::JsonContract*>, ::ByRef<::System::Object*>)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::CalculatePropertyValues)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x28198cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "CalculatePropertyValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Newtonsoft::Json::Serialization::JsonContract*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Object*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.WriteObjectStart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteObjectStart)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x281978c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "WriteObjectStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.HasCreatorParameter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HasCreatorParameter)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x281a6a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "HasCreatorParameter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.WriteReferenceIdProperty
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Type*, ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteReferenceIdProperty)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x281a75c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "WriteReferenceIdProperty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.WriteTypeProperty
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Type*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteTypeProperty)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2815cac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "WriteTypeProperty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.HasFlag
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::DefaultValueHandling, ::Newtonsoft::Json::DefaultValueHandling)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HasFlag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2818b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "HasFlag",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DefaultValueHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DefaultValueHandling>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.HasFlag
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::PreserveReferencesHandling, ::Newtonsoft::Json::PreserveReferencesHandling)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HasFlag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2818a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "HasFlag",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::PreserveReferencesHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::PreserveReferencesHandling>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.HasFlag
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::TypeNameHandling, ::Newtonsoft::Json::TypeNameHandling)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HasFlag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x281a9a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "HasFlag",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::TypeNameHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::TypeNameHandling>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeConvertable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::JsonConverter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeConvertable)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x2815f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "SerializeConvertable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonConverter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Collections::IEnumerable*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeList)> {
  constexpr static std::size_t size = 0x6e8;
  constexpr static std::size_t addrs = 0x2816b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "SerializeList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonArrayContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeMultidimensionalArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Array*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeMultidimensionalArray)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2817270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "SerializeMultidimensionalArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonArrayContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeMultidimensionalArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Array*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, int32_t, ::ArrayW<int32_t,::Array<int32_t>*>)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeMultidimensionalArray)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x281ac80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "SerializeMultidimensionalArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonArrayContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.WriteStartArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteStartArray)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x281a9b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "WriteStartArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonArrayContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeISerializable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Runtime::Serialization::ISerializable*, ::Newtonsoft::Json::Serialization::JsonISerializableContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeISerializable)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x2818520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "SerializeISerializable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISerializable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonISerializableContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeDynamic
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Dynamic::IDynamicMetaObjectProvider*, ::Newtonsoft::Json::Serialization::JsonDynamicContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeDynamic)> {
  constexpr static std::size_t size = 0x790;
  constexpr static std::size_t addrs = 0x2817d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "SerializeDynamic",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::IDynamicMetaObjectProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonDynamicContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.ShouldWriteDynamicProperty
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteDynamicProperty)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x281afec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "ShouldWriteDynamicProperty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.ShouldWriteType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::TypeNameHandling, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteType)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x2815a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "ShouldWriteType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::TypeNameHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeDictionary
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Collections::IDictionary*, ::Newtonsoft::Json::Serialization::JsonDictionaryContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeDictionary)> {
  constexpr static std::size_t size = 0x8ac;
  constexpr static std::size_t addrs = 0x28174e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "SerializeDictionary",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonDictionaryContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.GetPropertyName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::ByRef<bool>)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetPropertyName)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x2819cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "GetPropertyName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.HandleError
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, int32_t)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HandleError)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2815778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "HandleError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.ShouldSerialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldSerialize)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x281a1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "ShouldSerialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.IsSpecified
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::IsSpecified)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x281a448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "IsSpecified",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__cordl_internal_get__rootType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootType;
}
constexpr ::System::Type* const& Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__cordl_internal_get__rootType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootType;
}
constexpr void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__cordl_internal_set__rootType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rootType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__cordl_internal_get__rootLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootLevel;
}
constexpr int32_t const& Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__cordl_internal_get__rootLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootLevel;
}
constexpr void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__cordl_internal_set__rootLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rootLevel = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__cordl_internal_get__serializeStack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serializeStack;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__cordl_internal_get__serializeStack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serializeStack;
}
constexpr void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__cordl_internal_set__serializeStack(::System::Collections::Generic::List_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serializeStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::_ctor(::Newtonsoft::Json::JsonSerializer*  serializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializer);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::Serialize(::Newtonsoft::Json::JsonWriter*  jsonWriter, ::System::Object*  value, ::System::Type*  objectType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "Serialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jsonWriter, value, objectType);
}
inline ::Newtonsoft::Json::Serialization::JsonSerializerProxy* Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetInternalSerializer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "GetInternalSerializer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonSerializerProxy*, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::JsonContract* Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetContractSafe(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "GetContractSafe",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonContract*, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::JsonContract* Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetContract(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "GetContract",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonContract*, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializePrimitive(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::Serialization::JsonPrimitiveContract*  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::Newtonsoft::Json::Serialization::JsonContainerContract*  containerContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "SerializePrimitive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonPrimitiveContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, value, contract, member, containerContract, containerProperty);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeValue(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::Serialization::JsonContract*  valueContract, ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::Newtonsoft::Json::Serialization::JsonContainerContract*  containerContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "SerializeValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, value, valueContract, member, containerContract, containerProperty);
}
inline ::System::Nullable_1<bool> Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ResolveIsReference(::Newtonsoft::Json::Serialization::JsonContract*  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  property, ::Newtonsoft::Json::Serialization::JsonContainerContract*  collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "ResolveIsReference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(this, ___internal_method, contract, property, collectionContract, containerProperty);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteReference(::System::Object*  value, ::Newtonsoft::Json::Serialization::JsonProperty*  property, ::Newtonsoft::Json::Serialization::JsonContract*  valueContract, ::Newtonsoft::Json::Serialization::JsonContainerContract*  collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "ShouldWriteReference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, property, valueContract, collectionContract, containerProperty);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteProperty(::System::Object*  memberValue, ::Newtonsoft::Json::Serialization::JsonObjectContract*  containerContract, ::Newtonsoft::Json::Serialization::JsonProperty*  property)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "ShouldWriteProperty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonObjectContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, memberValue, containerContract, property);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::CheckForCircularReference(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::Serialization::JsonProperty*  property, ::Newtonsoft::Json::Serialization::JsonContract*  contract, ::Newtonsoft::Json::Serialization::JsonContainerContract*  containerContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "CheckForCircularReference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, writer, value, property, contract, containerContract, containerProperty);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteReference(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "WriteReference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, value);
}
inline ::StringW Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetReference(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "GetReference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, writer, value);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::TryConvertToString(::System::Object*  value, ::System::Type*  type, ::ByRef<::StringW>  s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "TryConvertToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, type, s);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeString(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::Serialization::JsonStringContract*  contract)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "SerializeString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonStringContract*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, value, contract);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::OnSerializing(::Newtonsoft::Json::JsonWriter*  writer, ::Newtonsoft::Json::Serialization::JsonContract*  contract, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "OnSerializing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, contract, value);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::OnSerialized(::Newtonsoft::Json::JsonWriter*  writer, ::Newtonsoft::Json::Serialization::JsonContract*  contract, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "OnSerialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, contract, value);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeObject(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::Serialization::JsonObjectContract*  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::Newtonsoft::Json::Serialization::JsonContainerContract*  collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "SerializeObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonObjectContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, value, contract, member, collectionContract, containerProperty);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::CalculatePropertyValues(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::Serialization::JsonContainerContract*  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::Newtonsoft::Json::Serialization::JsonProperty*  property, ::ByRef<::Newtonsoft::Json::Serialization::JsonContract*>  memberContract, ::ByRef<::System::Object*>  memberValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "CalculatePropertyValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Newtonsoft::Json::Serialization::JsonContract*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Object*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, writer, value, contract, member, property, memberContract, memberValue);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteObjectStart(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::Serialization::JsonContract*  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::Newtonsoft::Json::Serialization::JsonContainerContract*  collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "WriteObjectStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, value, contract, member, collectionContract, containerProperty);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HasCreatorParameter(::Newtonsoft::Json::Serialization::JsonContainerContract*  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  property)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "HasCreatorParameter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, contract, property);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteReferenceIdProperty(::Newtonsoft::Json::JsonWriter*  writer, ::System::Type*  type, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "WriteReferenceIdProperty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, type, value);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteTypeProperty(::Newtonsoft::Json::JsonWriter*  writer, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "WriteTypeProperty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, type);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HasFlag(::Newtonsoft::Json::DefaultValueHandling  value, ::Newtonsoft::Json::DefaultValueHandling  flag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "HasFlag",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DefaultValueHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DefaultValueHandling>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, flag);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HasFlag(::Newtonsoft::Json::PreserveReferencesHandling  value, ::Newtonsoft::Json::PreserveReferencesHandling  flag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "HasFlag",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::PreserveReferencesHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::PreserveReferencesHandling>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, flag);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HasFlag(::Newtonsoft::Json::TypeNameHandling  value, ::Newtonsoft::Json::TypeNameHandling  flag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "HasFlag",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::TypeNameHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::TypeNameHandling>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, flag);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeConvertable(::Newtonsoft::Json::JsonWriter*  writer, ::Newtonsoft::Json::JsonConverter*  converter, ::System::Object*  value, ::Newtonsoft::Json::Serialization::JsonContract*  contract, ::Newtonsoft::Json::Serialization::JsonContainerContract*  collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "SerializeConvertable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonConverter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, converter, value, contract, collectionContract, containerProperty);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeList(::Newtonsoft::Json::JsonWriter*  writer, ::System::Collections::IEnumerable*  values, ::Newtonsoft::Json::Serialization::JsonArrayContract*  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::Newtonsoft::Json::Serialization::JsonContainerContract*  collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "SerializeList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonArrayContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, values, contract, member, collectionContract, containerProperty);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeMultidimensionalArray(::Newtonsoft::Json::JsonWriter*  writer, ::System::Array*  values, ::Newtonsoft::Json::Serialization::JsonArrayContract*  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::Newtonsoft::Json::Serialization::JsonContainerContract*  collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "SerializeMultidimensionalArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonArrayContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, values, contract, member, collectionContract, containerProperty);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeMultidimensionalArray(::Newtonsoft::Json::JsonWriter*  writer, ::System::Array*  values, ::Newtonsoft::Json::Serialization::JsonArrayContract*  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  member, int32_t  initialDepth, ::ArrayW<int32_t,::Array<int32_t>*>  indices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "SerializeMultidimensionalArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonArrayContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, values, contract, member, initialDepth, indices);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteStartArray(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  values, ::Newtonsoft::Json::Serialization::JsonArrayContract*  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::Newtonsoft::Json::Serialization::JsonContainerContract*  containerContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "WriteStartArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonArrayContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, writer, values, contract, member, containerContract, containerProperty);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeISerializable(::Newtonsoft::Json::JsonWriter*  writer, ::System::Runtime::Serialization::ISerializable*  value, ::Newtonsoft::Json::Serialization::JsonISerializableContract*  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::Newtonsoft::Json::Serialization::JsonContainerContract*  collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "SerializeISerializable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISerializable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonISerializableContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, value, contract, member, collectionContract, containerProperty);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeDynamic(::Newtonsoft::Json::JsonWriter*  writer, ::System::Dynamic::IDynamicMetaObjectProvider*  value, ::Newtonsoft::Json::Serialization::JsonDynamicContract*  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::Newtonsoft::Json::Serialization::JsonContainerContract*  collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "SerializeDynamic",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Dynamic::IDynamicMetaObjectProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonDynamicContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, value, contract, member, collectionContract, containerProperty);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteDynamicProperty(::System::Object*  memberValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "ShouldWriteDynamicProperty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, memberValue);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteType(::Newtonsoft::Json::TypeNameHandling  typeNameHandlingFlag, ::Newtonsoft::Json::Serialization::JsonContract*  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::Newtonsoft::Json::Serialization::JsonContainerContract*  containerContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "ShouldWriteType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::TypeNameHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, typeNameHandlingFlag, contract, member, containerContract, containerProperty);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeDictionary(::Newtonsoft::Json::JsonWriter*  writer, ::System::Collections::IDictionary*  values, ::Newtonsoft::Json::Serialization::JsonDictionaryContract*  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  member, ::Newtonsoft::Json::Serialization::JsonContainerContract*  collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty*  containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "SerializeDictionary",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonDictionaryContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, values, contract, member, collectionContract, containerProperty);
}
inline ::StringW Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetPropertyName(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  name, ::Newtonsoft::Json::Serialization::JsonContract*  contract, ::ByRef<bool>  escape)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "GetPropertyName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, writer, name, contract, escape);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HandleError(::Newtonsoft::Json::JsonWriter*  writer, int32_t  initialDepth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "HandleError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, initialDepth);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldSerialize(::Newtonsoft::Json::JsonWriter*  writer, ::Newtonsoft::Json::Serialization::JsonProperty*  property, ::System::Object*  target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "ShouldSerialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, writer, property, target);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::IsSpecified(::Newtonsoft::Json::JsonWriter*  writer, ::Newtonsoft::Json::Serialization::JsonProperty*  property, ::System::Object*  target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>::get(),
                        "IsSpecified",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, writer, property, target);
}
inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter* Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::New_ctor(::Newtonsoft::Json::JsonSerializer*  serializer)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(serializer));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::JsonSerializerInternalWriter()   {
}
