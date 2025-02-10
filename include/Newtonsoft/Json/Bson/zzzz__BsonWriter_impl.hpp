#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonWriter.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonWriter_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.AddValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::System::Object*, ::Newtonsoft::Json::Bson::BsonType)>(&::Newtonsoft::Json::Bson::BsonWriter::AddValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x284a9d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonWriter*>::get(),
                        "AddValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.AddToken
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::Newtonsoft::Json::Bson::BsonToken*)>(&::Newtonsoft::Json::Bson::BsonWriter::AddToken)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x284aa4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonWriter*>::get(),
                        "AddToken",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonToken*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteObjectId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteObjectId)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x284ac10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonWriter*>::get(),
                        "WriteObjectId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonWriter.WriteRegex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonWriter::*)(::StringW, ::StringW)>(&::Newtonsoft::Json::Bson::BsonWriter::WriteRegex)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x283ca20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonWriter*>::get(),
                        "WriteRegex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Bson::BsonToken*& Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_get__root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr ::Newtonsoft::Json::Bson::BsonToken* const& Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_get__root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr void Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_set__root(::Newtonsoft::Json::Bson::BsonToken*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____root)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Bson::BsonToken*& Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_get__parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr ::Newtonsoft::Json::Bson::BsonToken* const& Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_get__parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr void Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_set__parent(::Newtonsoft::Json::Bson::BsonToken*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_get__propertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propertyName;
}
constexpr ::StringW const& Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_get__propertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propertyName;
}
constexpr void Newtonsoft::Json::Bson::BsonWriter::__cordl_internal_set__propertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____propertyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Newtonsoft::Json::Bson::BsonWriter::AddValue(::System::Object*  value, ::Newtonsoft::Json::Bson::BsonType  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonWriter*>::get(),
                        "AddValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, type);
}
inline void Newtonsoft::Json::Bson::BsonWriter::AddToken(::Newtonsoft::Json::Bson::BsonToken*  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonWriter*>::get(),
                        "AddToken",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonToken*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteObjectId(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonWriter*>::get(),
                        "WriteObjectId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonWriter::WriteRegex(::StringW  pattern, ::StringW  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonWriter*>::get(),
                        "WriteRegex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pattern, options);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonWriter::BsonWriter()   {
}
