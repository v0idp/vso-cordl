#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/TraceJsonWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TraceJsonWriter)
namespace Newtonsoft::Json {
class JsonTextWriter;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::IO {
class StringWriter;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class TraceJsonWriter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::TraceJsonWriter);
// Dependencies Newtonsoft.Json.JsonWriter
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.TraceJsonWriter
class CORDL_TYPE TraceJsonWriter : public ::Newtonsoft::Json::JsonWriter {
public:
// Declarations
/// @brief Field _innerWriter, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__innerWriter, put=__cordl_internal_set__innerWriter)) ::Newtonsoft::Json::JsonWriter*  _innerWriter;

/// @brief Field _sw, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__sw, put=__cordl_internal_set__sw)) ::System::IO::StringWriter*  _sw;

/// @brief Field _textWriter, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__textWriter, put=__cordl_internal_set__textWriter)) ::Newtonsoft::Json::JsonTextWriter*  _textWriter;

/// @brief Method Close, addr 0x281f9c4, size 0x44, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method GetSerializedJsonMessage, addr 0x281df90, size 0x20, virtual false, abstract: false, final false
inline ::StringW GetSerializedJsonMessage() ;

static inline ::Newtonsoft::Json::Serialization::TraceJsonWriter* New_ctor(::Newtonsoft::Json::JsonWriter*  innerWriter) ;

/// @brief Method WriteComment, addr 0x281f62c, size 0x60, virtual true, abstract: false, final false
inline void WriteComment(::StringW  text) ;

/// @brief Method WriteEndArray, addr 0x281f6d0, size 0x44, virtual true, abstract: false, final false
inline void WriteEndArray() ;

/// @brief Method WriteEndConstructor, addr 0x281f76c, size 0x44, virtual true, abstract: false, final false
inline void WriteEndConstructor() ;

/// @brief Method WriteEndObject, addr 0x281f8c0, size 0x44, virtual true, abstract: false, final false
inline void WriteEndObject() ;

/// @brief Method WriteNull, addr 0x281e8d4, size 0x4c, virtual true, abstract: false, final false
inline void WriteNull() ;

/// @brief Method WritePropertyName, addr 0x281f7b0, size 0x60, virtual true, abstract: false, final false
inline void WritePropertyName(::StringW  name) ;

/// @brief Method WritePropertyName, addr 0x281f810, size 0x6c, virtual true, abstract: false, final false
inline void WritePropertyName(::StringW  name, bool  escape) ;

/// @brief Method WriteRaw, addr 0x281f964, size 0x60, virtual true, abstract: false, final false
inline void WriteRaw(::StringW  json) ;

/// @brief Method WriteRawValue, addr 0x281f904, size 0x60, virtual true, abstract: false, final false
inline void WriteRawValue(::StringW  json) ;

/// @brief Method WriteStartArray, addr 0x281f68c, size 0x44, virtual true, abstract: false, final false
inline void WriteStartArray() ;

/// @brief Method WriteStartConstructor, addr 0x281f714, size 0x58, virtual true, abstract: false, final false
inline void WriteStartConstructor(::StringW  name) ;

/// @brief Method WriteStartObject, addr 0x281f87c, size 0x44, virtual true, abstract: false, final false
inline void WriteStartObject() ;

/// @brief Method WriteUndefined, addr 0x281e888, size 0x4c, virtual true, abstract: false, final false
inline void WriteUndefined() ;

/// @brief Method WriteValue, addr 0x281e470, size 0x74, virtual true, abstract: false, final false
inline void WriteValue(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method WriteValue, addr 0x281f0ac, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(::StringW  value) ;

/// @brief Method WriteValue, addr 0x281e4e4, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(::System::DateTime  value) ;

/// @brief Method WriteValue, addr 0x281e604, size 0x6c, virtual true, abstract: false, final false
inline void WriteValue(::System::DateTimeOffset  value) ;

/// @brief Method WriteValue, addr 0x281dfb0, size 0x6c, virtual true, abstract: false, final false
inline void WriteValue(::System::Decimal  value) ;

/// @brief Method WriteValue, addr 0x281ea30, size 0x6c, virtual true, abstract: false, final false
inline void WriteValue(::System::Guid  value) ;

/// @brief Method WriteValue, addr 0x281e544, size 0xc0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::DateTime>  value) ;

/// @brief Method WriteValue, addr 0x281e670, size 0xf4, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::DateTimeOffset>  value) ;

/// @brief Method WriteValue, addr 0x281e01c, size 0x11c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::Decimal>  value) ;

/// @brief Method WriteValue, addr 0x281ea9c, size 0xf8, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::Guid>  value) ;

/// @brief Method WriteValue, addr 0x281f16c, size 0xc0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::TimeSpan>  value) ;

/// @brief Method WriteValue, addr 0x281e19c, size 0xb4, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<bool>  value) ;

/// @brief Method WriteValue, addr 0x281e3c0, size 0xb0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<char16_t>  value) ;

/// @brief Method WriteValue, addr 0x281e7c4, size 0xc4, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<double_t>  value) ;

/// @brief Method WriteValue, addr 0x281e980, size 0xb0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<float_t>  value) ;

/// @brief Method WriteValue, addr 0x281effc, size 0xb0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<int16_t>  value) ;

/// @brief Method WriteValue, addr 0x281ebf4, size 0xac, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<int32_t>  value) ;

/// @brief Method WriteValue, addr 0x281ed00, size 0xc0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<int64_t>  value) ;

/// @brief Method WriteValue, addr 0x281eeec, size 0xb0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<int8_t>  value) ;

/// @brief Method WriteValue, addr 0x281f57c, size 0xb0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<uint16_t>  value) ;

/// @brief Method WriteValue, addr 0x281f28c, size 0xac, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<uint32_t>  value) ;

/// @brief Method WriteValue, addr 0x281f398, size 0xc0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<uint64_t>  value) ;

/// @brief Method WriteValue, addr 0x281e2b0, size 0xb0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<uint8_t>  value) ;

/// @brief Method WriteValue, addr 0x281edc0, size 0xcc, virtual true, abstract: false, final false
inline void WriteValue(::System::Object*  value) ;

/// @brief Method WriteValue, addr 0x281f10c, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(::System::TimeSpan  value) ;

/// @brief Method WriteValue, addr 0x281f458, size 0xc4, virtual true, abstract: false, final false
inline void WriteValue(::System::Uri*  value) ;

/// @brief Method WriteValue, addr 0x281e138, size 0x64, virtual true, abstract: false, final false
inline void WriteValue(bool  value) ;

/// @brief Method WriteValue, addr 0x281e360, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(char16_t  value) ;

/// @brief Method WriteValue, addr 0x281e764, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(double_t  value) ;

/// @brief Method WriteValue, addr 0x281e920, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(float_t  value) ;

/// @brief Method WriteValue, addr 0x281ef9c, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(int16_t  value) ;

/// @brief Method WriteValue, addr 0x281eb94, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(int32_t  value) ;

/// @brief Method WriteValue, addr 0x281eca0, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(int64_t  value) ;

/// @brief Method WriteValue, addr 0x281ee8c, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(int8_t  value) ;

/// @brief Method WriteValue, addr 0x281f51c, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(uint16_t  value) ;

/// @brief Method WriteValue, addr 0x281f22c, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(uint32_t  value) ;

/// @brief Method WriteValue, addr 0x281f338, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(uint64_t  value) ;

/// @brief Method WriteValue, addr 0x281e250, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(uint8_t  value) ;

constexpr ::Newtonsoft::Json::JsonWriter* const& __cordl_internal_get__innerWriter() const;

constexpr ::Newtonsoft::Json::JsonWriter*& __cordl_internal_get__innerWriter() ;

constexpr ::System::IO::StringWriter* const& __cordl_internal_get__sw() const;

constexpr ::System::IO::StringWriter*& __cordl_internal_get__sw() ;

constexpr ::Newtonsoft::Json::JsonTextWriter* const& __cordl_internal_get__textWriter() const;

constexpr ::Newtonsoft::Json::JsonTextWriter*& __cordl_internal_get__textWriter() ;

constexpr void __cordl_internal_set__innerWriter(::Newtonsoft::Json::JsonWriter*  value) ;

constexpr void __cordl_internal_set__sw(::System::IO::StringWriter*  value) ;

constexpr void __cordl_internal_set__textWriter(::Newtonsoft::Json::JsonTextWriter*  value) ;

/// @brief Method .ctor, addr 0x281ddcc, size 0x1c4, virtual false, abstract: false, final false
inline void _ctor(::Newtonsoft::Json::JsonWriter*  innerWriter) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TraceJsonWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TraceJsonWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TraceJsonWriter(TraceJsonWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TraceJsonWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TraceJsonWriter(TraceJsonWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9857};

/// @brief Field _innerWriter, offset: 0x60, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonWriter*  ____innerWriter;

/// @brief Field _textWriter, offset: 0x68, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  ____textWriter;

/// @brief Field _sw, offset: 0x70, size: 0x8, def value: None
 ::System::IO::StringWriter*  ____sw;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::TraceJsonWriter, ____innerWriter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::TraceJsonWriter, ____textWriter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::TraceJsonWriter, ____sw) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::TraceJsonWriter, 0x78>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::TraceJsonWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::TraceJsonWriter*, "Newtonsoft.Json.Serialization", "TraceJsonWriter");
