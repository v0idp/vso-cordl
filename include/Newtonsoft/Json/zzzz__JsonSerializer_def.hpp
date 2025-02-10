#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonSerializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__ConstructorHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DefaultValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_def.hpp"
#include "Newtonsoft/Json/zzzz__MetadataPropertyHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__MissingMemberHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__NullValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__ObjectCreationHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__PreserveReferencesHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__ReferenceLoopHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameAssemblyFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameHandling_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSerializer)
namespace Newtonsoft::Json::Serialization {
class ErrorEventArgs;
}
namespace Newtonsoft::Json::Serialization {
class IContractResolver;
}
namespace Newtonsoft::Json::Serialization {
class IReferenceResolver;
}
namespace Newtonsoft::Json::Serialization {
class ISerializationBinder;
}
namespace Newtonsoft::Json::Serialization {
class ITraceWriter;
}
namespace Newtonsoft::Json::Serialization {
class TraceJsonReader;
}
namespace Newtonsoft::Json {
struct ConstructorHandling;
}
namespace Newtonsoft::Json {
struct DateParseHandling;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
namespace Newtonsoft::Json {
struct FloatParseHandling;
}
namespace Newtonsoft::Json {
struct Formatting;
}
namespace Newtonsoft::Json {
class JsonConverterCollection;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
struct MetadataPropertyHandling;
}
namespace Newtonsoft::Json {
struct MissingMemberHandling;
}
namespace Newtonsoft::Json {
struct NullValueHandling;
}
namespace Newtonsoft::Json {
struct ObjectCreationHandling;
}
namespace Newtonsoft::Json {
struct PreserveReferencesHandling;
}
namespace Newtonsoft::Json {
struct ReferenceLoopHandling;
}
namespace Newtonsoft::Json {
struct TypeNameAssemblyFormatHandling;
}
namespace Newtonsoft::Json {
struct TypeNameHandling;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonSerializer;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonSerializer);
// Dependencies Newtonsoft.Json.ConstructorHandling, Newtonsoft.Json.DateFormatHandling, Newtonsoft.Json.DateParseHandling, Newtonsoft.Json.DateTimeZoneHandling, Newtonsoft.Json.DefaultValueHandling, Newtonsoft.Json.FloatFormatHandling, Newtonsoft.Json.FloatParseHandling, Newtonsoft.Json.Formatting, Newtonsoft.Json.MetadataPropertyHandling, Newtonsoft.Json.MissingMemberHandling, Newtonsoft.Json.NullValueHandling, Newtonsoft.Json.ObjectCreationHandling, Newtonsoft.Json.PreserveReferencesHandling, Newtonsoft.Json.ReferenceLoopHandling, Newtonsoft.Json.StringEscapeHandling, Newtonsoft.Json.TypeNameAssemblyFormatHandling, Newtonsoft.Json.TypeNameHandling, System.Nullable`1<T>, System.Object, System.Runtime.Serialization.StreamingContext
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonSerializer
class CORDL_TYPE JsonSerializer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CheckAdditionalContent)) bool  CheckAdditionalContent;

 __declspec(property(put=set_ConstructorHandling)) ::Newtonsoft::Json::ConstructorHandling  ConstructorHandling;

 __declspec(property(get=get_Context, put=set_Context)) ::System::Runtime::Serialization::StreamingContext  Context;

 __declspec(property(get=get_ContractResolver, put=set_ContractResolver)) ::Newtonsoft::Json::Serialization::IContractResolver*  ContractResolver;

 __declspec(property(get=get_Converters)) ::Newtonsoft::Json::JsonConverterCollection*  Converters;

 __declspec(property(put=set_DefaultValueHandling)) ::Newtonsoft::Json::DefaultValueHandling  DefaultValueHandling;

 __declspec(property(put=set_EqualityComparer)) ::System::Collections::IEqualityComparer*  EqualityComparer;

/// @brief Field Error, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_Error, put=__cordl_internal_set_Error)) ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*  Error;

 __declspec(property(get=get_Formatting)) ::Newtonsoft::Json::Formatting  Formatting;

 __declspec(property(get=get_MaxDepth)) ::System::Nullable_1<int32_t>  MaxDepth;

 __declspec(property(get=get_MetadataPropertyHandling, put=set_MetadataPropertyHandling)) ::Newtonsoft::Json::MetadataPropertyHandling  MetadataPropertyHandling;

 __declspec(property(put=set_MissingMemberHandling)) ::Newtonsoft::Json::MissingMemberHandling  MissingMemberHandling;

 __declspec(property(get=get_NullValueHandling, put=set_NullValueHandling)) ::Newtonsoft::Json::NullValueHandling  NullValueHandling;

 __declspec(property(put=set_ObjectCreationHandling)) ::Newtonsoft::Json::ObjectCreationHandling  ObjectCreationHandling;

 __declspec(property(put=set_PreserveReferencesHandling)) ::Newtonsoft::Json::PreserveReferencesHandling  PreserveReferencesHandling;

 __declspec(property(put=set_ReferenceLoopHandling)) ::Newtonsoft::Json::ReferenceLoopHandling  ReferenceLoopHandling;

 __declspec(property(put=set_ReferenceResolver)) ::Newtonsoft::Json::Serialization::IReferenceResolver*  ReferenceResolver;

 __declspec(property(put=set_SerializationBinder)) ::Newtonsoft::Json::Serialization::ISerializationBinder*  SerializationBinder;

 __declspec(property(get=get_TraceWriter, put=set_TraceWriter)) ::Newtonsoft::Json::Serialization::ITraceWriter*  TraceWriter;

 __declspec(property(put=set_TypeNameAssemblyFormatHandling)) ::Newtonsoft::Json::TypeNameAssemblyFormatHandling  TypeNameAssemblyFormatHandling;

 __declspec(property(put=set_TypeNameHandling)) ::Newtonsoft::Json::TypeNameHandling  TypeNameHandling;

/// @brief Field _checkAdditionalContent, offset 0xc1, size 0x2 
 __declspec(property(get=__cordl_internal_get__checkAdditionalContent, put=__cordl_internal_set__checkAdditionalContent)) ::System::Nullable_1<bool>  _checkAdditionalContent;

/// @brief Field _constructorHandling, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__constructorHandling, put=__cordl_internal_set__constructorHandling)) ::Newtonsoft::Json::ConstructorHandling  _constructorHandling;

/// @brief Field _context, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__context, put=__cordl_internal_set__context)) ::System::Runtime::Serialization::StreamingContext  _context;

/// @brief Field _contractResolver, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__contractResolver, put=__cordl_internal_set__contractResolver)) ::Newtonsoft::Json::Serialization::IContractResolver*  _contractResolver;

/// @brief Field _converters, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__converters, put=__cordl_internal_set__converters)) ::Newtonsoft::Json::JsonConverterCollection*  _converters;

/// @brief Field _culture, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__culture, put=__cordl_internal_set__culture)) ::System::Globalization::CultureInfo*  _culture;

/// @brief Field _dateFormatHandling, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__dateFormatHandling, put=__cordl_internal_set__dateFormatHandling)) ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling>  _dateFormatHandling;

/// @brief Field _dateFormatString, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__dateFormatString, put=__cordl_internal_set__dateFormatString)) ::StringW  _dateFormatString;

/// @brief Field _dateFormatStringSet, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get__dateFormatStringSet, put=__cordl_internal_set__dateFormatStringSet)) bool  _dateFormatStringSet;

/// @brief Field _dateParseHandling, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__dateParseHandling, put=__cordl_internal_set__dateParseHandling)) ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>  _dateParseHandling;

/// @brief Field _dateTimeZoneHandling, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__dateTimeZoneHandling, put=__cordl_internal_set__dateTimeZoneHandling)) ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>  _dateTimeZoneHandling;

/// @brief Field _defaultValueHandling, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultValueHandling, put=__cordl_internal_set__defaultValueHandling)) ::Newtonsoft::Json::DefaultValueHandling  _defaultValueHandling;

/// @brief Field _equalityComparer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__equalityComparer, put=__cordl_internal_set__equalityComparer)) ::System::Collections::IEqualityComparer*  _equalityComparer;

/// @brief Field _floatFormatHandling, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__floatFormatHandling, put=__cordl_internal_set__floatFormatHandling)) ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling>  _floatFormatHandling;

/// @brief Field _floatParseHandling, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__floatParseHandling, put=__cordl_internal_set__floatParseHandling)) ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>  _floatParseHandling;

/// @brief Field _formatting, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__formatting, put=__cordl_internal_set__formatting)) ::System::Nullable_1<::Newtonsoft::Json::Formatting>  _formatting;

/// @brief Field _maxDepth, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__maxDepth, put=__cordl_internal_set__maxDepth)) ::System::Nullable_1<int32_t>  _maxDepth;

/// @brief Field _maxDepthSet, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get__maxDepthSet, put=__cordl_internal_set__maxDepthSet)) bool  _maxDepthSet;

/// @brief Field _metadataPropertyHandling, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__metadataPropertyHandling, put=__cordl_internal_set__metadataPropertyHandling)) ::Newtonsoft::Json::MetadataPropertyHandling  _metadataPropertyHandling;

/// @brief Field _missingMemberHandling, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__missingMemberHandling, put=__cordl_internal_set__missingMemberHandling)) ::Newtonsoft::Json::MissingMemberHandling  _missingMemberHandling;

/// @brief Field _nullValueHandling, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__nullValueHandling, put=__cordl_internal_set__nullValueHandling)) ::Newtonsoft::Json::NullValueHandling  _nullValueHandling;

/// @brief Field _objectCreationHandling, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__objectCreationHandling, put=__cordl_internal_set__objectCreationHandling)) ::Newtonsoft::Json::ObjectCreationHandling  _objectCreationHandling;

/// @brief Field _preserveReferencesHandling, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__preserveReferencesHandling, put=__cordl_internal_set__preserveReferencesHandling)) ::Newtonsoft::Json::PreserveReferencesHandling  _preserveReferencesHandling;

/// @brief Field _referenceLoopHandling, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__referenceLoopHandling, put=__cordl_internal_set__referenceLoopHandling)) ::Newtonsoft::Json::ReferenceLoopHandling  _referenceLoopHandling;

/// @brief Field _referenceResolver, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__referenceResolver, put=__cordl_internal_set__referenceResolver)) ::Newtonsoft::Json::Serialization::IReferenceResolver*  _referenceResolver;

/// @brief Field _serializationBinder, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__serializationBinder, put=__cordl_internal_set__serializationBinder)) ::Newtonsoft::Json::Serialization::ISerializationBinder*  _serializationBinder;

/// @brief Field _stringEscapeHandling, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__stringEscapeHandling, put=__cordl_internal_set__stringEscapeHandling)) ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling>  _stringEscapeHandling;

/// @brief Field _traceWriter, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__traceWriter, put=__cordl_internal_set__traceWriter)) ::Newtonsoft::Json::Serialization::ITraceWriter*  _traceWriter;

/// @brief Field _typeNameAssemblyFormatHandling, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__typeNameAssemblyFormatHandling, put=__cordl_internal_set__typeNameAssemblyFormatHandling)) ::Newtonsoft::Json::TypeNameAssemblyFormatHandling  _typeNameAssemblyFormatHandling;

/// @brief Field _typeNameHandling, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__typeNameHandling, put=__cordl_internal_set__typeNameHandling)) ::Newtonsoft::Json::TypeNameHandling  _typeNameHandling;

/// @brief Method ApplySerializerSettings, addr 0x27d295c, size 0x720, virtual false, abstract: false, final false
static inline void ApplySerializerSettings(::Newtonsoft::Json::JsonSerializer*  serializer, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method Create, addr 0x27d28d8, size 0x50, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::JsonSerializer* Create() ;

/// @brief Method Create, addr 0x27d2928, size 0x34, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::JsonSerializer* Create(::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method CreateDefault, addr 0x27d307c, size 0xa4, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::JsonSerializer* CreateDefault() ;

/// @brief Method CreateDefault, addr 0x27cc848, size 0x34, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::JsonSerializer* CreateDefault(::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method CreateTraceJsonReader, addr 0x27d3a14, size 0x88, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Serialization::TraceJsonReader* CreateTraceJsonReader(::Newtonsoft::Json::JsonReader*  reader) ;

/// @brief Method Deserialize, addr 0x27d3c84, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* Deserialize(::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType) ;

/// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T Deserialize(::Newtonsoft::Json::JsonReader*  reader) ;

/// @brief Method DeserializeInternal, addr 0x27d3c94, size 0x280, virtual true, abstract: false, final false
inline ::System::Object* DeserializeInternal(::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType) ;

/// @brief Method GetMatchingConverter, addr 0x27d46f0, size 0x15c, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::JsonConverter* GetMatchingConverter(::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*  converters, ::System::Type*  objectType) ;

/// @brief Method GetMatchingConverter, addr 0x27d46e8, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonConverter* GetMatchingConverter(::System::Type*  type) ;

/// @brief Method GetReferenceResolver, addr 0x27d4684, size 0x64, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Serialization::IReferenceResolver* GetReferenceResolver() ;

static inline ::Newtonsoft::Json::JsonSerializer* New_ctor() ;

/// @brief Method OnError, addr 0x27d484c, size 0x28, virtual false, abstract: false, final false
inline void OnError(::Newtonsoft::Json::Serialization::ErrorEventArgs*  e) ;

/// @brief Method Populate, addr 0x27d3408, size 0x10, virtual false, abstract: false, final false
inline void Populate(::Newtonsoft::Json::JsonReader*  reader, ::System::Object*  target) ;

/// @brief Method PopulateInternal, addr 0x27d3418, size 0x278, virtual true, abstract: false, final false
inline void PopulateInternal(::Newtonsoft::Json::JsonReader*  reader, ::System::Object*  target) ;

/// @brief Method ResetReader, addr 0x27d3a9c, size 0x1e8, virtual false, abstract: false, final false
inline void ResetReader(::Newtonsoft::Json::JsonReader*  reader, ::System::Globalization::CultureInfo*  previousCulture, ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>  previousDateTimeZoneHandling, ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>  previousDateParseHandling, ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>  previousFloatParseHandling, ::System::Nullable_1<int32_t>  previousMaxDepth, ::StringW  previousDateFormatString) ;

/// @brief Method Serialize, addr 0x27d3f14, size 0x14, virtual false, abstract: false, final false
inline void Serialize(::Newtonsoft::Json::JsonWriter*  jsonWriter, ::System::Object*  value) ;

/// @brief Method Serialize, addr 0x27cccd4, size 0x10, virtual false, abstract: false, final false
inline void Serialize(::Newtonsoft::Json::JsonWriter*  jsonWriter, ::System::Object*  value, ::System::Type*  objectType) ;

/// @brief Method SerializeInternal, addr 0x27d3f28, size 0x56c, virtual true, abstract: false, final false
inline void SerializeInternal(::Newtonsoft::Json::JsonWriter*  jsonWriter, ::System::Object*  value, ::System::Type*  objectType) ;

/// @brief Method SetupReader, addr 0x27d3690, size 0x384, virtual false, abstract: false, final false
inline void SetupReader(::Newtonsoft::Json::JsonReader*  reader, ::ByRef<::System::Globalization::CultureInfo*>  previousCulture, ::ByRef<::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>>  previousDateTimeZoneHandling, ::ByRef<::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>>  previousDateParseHandling, ::ByRef<::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>>  previousFloatParseHandling, ::ByRef<::System::Nullable_1<int32_t>>  previousMaxDepth, ::ByRef<::StringW>  previousDateFormatString) ;

constexpr ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* const& __cordl_internal_get_Error() const;

constexpr ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*& __cordl_internal_get_Error() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__checkAdditionalContent() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__checkAdditionalContent() ;

constexpr ::Newtonsoft::Json::ConstructorHandling const& __cordl_internal_get__constructorHandling() const;

constexpr ::Newtonsoft::Json::ConstructorHandling& __cordl_internal_get__constructorHandling() ;

constexpr ::System::Runtime::Serialization::StreamingContext const& __cordl_internal_get__context() const;

constexpr ::System::Runtime::Serialization::StreamingContext& __cordl_internal_get__context() ;

constexpr ::Newtonsoft::Json::Serialization::IContractResolver* const& __cordl_internal_get__contractResolver() const;

constexpr ::Newtonsoft::Json::Serialization::IContractResolver*& __cordl_internal_get__contractResolver() ;

constexpr ::Newtonsoft::Json::JsonConverterCollection* const& __cordl_internal_get__converters() const;

constexpr ::Newtonsoft::Json::JsonConverterCollection*& __cordl_internal_get__converters() ;

constexpr ::System::Globalization::CultureInfo* const& __cordl_internal_get__culture() const;

constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__culture() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling> const& __cordl_internal_get__dateFormatHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling>& __cordl_internal_get__dateFormatHandling() ;

constexpr ::StringW const& __cordl_internal_get__dateFormatString() const;

constexpr ::StringW& __cordl_internal_get__dateFormatString() ;

constexpr bool const& __cordl_internal_get__dateFormatStringSet() const;

constexpr bool& __cordl_internal_get__dateFormatStringSet() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> const& __cordl_internal_get__dateParseHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>& __cordl_internal_get__dateParseHandling() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> const& __cordl_internal_get__dateTimeZoneHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>& __cordl_internal_get__dateTimeZoneHandling() ;

constexpr ::Newtonsoft::Json::DefaultValueHandling const& __cordl_internal_get__defaultValueHandling() const;

constexpr ::Newtonsoft::Json::DefaultValueHandling& __cordl_internal_get__defaultValueHandling() ;

constexpr ::System::Collections::IEqualityComparer* const& __cordl_internal_get__equalityComparer() const;

constexpr ::System::Collections::IEqualityComparer*& __cordl_internal_get__equalityComparer() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling> const& __cordl_internal_get__floatFormatHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling>& __cordl_internal_get__floatFormatHandling() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> const& __cordl_internal_get__floatParseHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>& __cordl_internal_get__floatParseHandling() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::Formatting> const& __cordl_internal_get__formatting() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::Formatting>& __cordl_internal_get__formatting() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__maxDepth() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__maxDepth() ;

constexpr bool const& __cordl_internal_get__maxDepthSet() const;

constexpr bool& __cordl_internal_get__maxDepthSet() ;

constexpr ::Newtonsoft::Json::MetadataPropertyHandling const& __cordl_internal_get__metadataPropertyHandling() const;

constexpr ::Newtonsoft::Json::MetadataPropertyHandling& __cordl_internal_get__metadataPropertyHandling() ;

constexpr ::Newtonsoft::Json::MissingMemberHandling const& __cordl_internal_get__missingMemberHandling() const;

constexpr ::Newtonsoft::Json::MissingMemberHandling& __cordl_internal_get__missingMemberHandling() ;

constexpr ::Newtonsoft::Json::NullValueHandling const& __cordl_internal_get__nullValueHandling() const;

constexpr ::Newtonsoft::Json::NullValueHandling& __cordl_internal_get__nullValueHandling() ;

constexpr ::Newtonsoft::Json::ObjectCreationHandling const& __cordl_internal_get__objectCreationHandling() const;

constexpr ::Newtonsoft::Json::ObjectCreationHandling& __cordl_internal_get__objectCreationHandling() ;

constexpr ::Newtonsoft::Json::PreserveReferencesHandling const& __cordl_internal_get__preserveReferencesHandling() const;

constexpr ::Newtonsoft::Json::PreserveReferencesHandling& __cordl_internal_get__preserveReferencesHandling() ;

constexpr ::Newtonsoft::Json::ReferenceLoopHandling const& __cordl_internal_get__referenceLoopHandling() const;

constexpr ::Newtonsoft::Json::ReferenceLoopHandling& __cordl_internal_get__referenceLoopHandling() ;

constexpr ::Newtonsoft::Json::Serialization::IReferenceResolver* const& __cordl_internal_get__referenceResolver() const;

constexpr ::Newtonsoft::Json::Serialization::IReferenceResolver*& __cordl_internal_get__referenceResolver() ;

constexpr ::Newtonsoft::Json::Serialization::ISerializationBinder* const& __cordl_internal_get__serializationBinder() const;

constexpr ::Newtonsoft::Json::Serialization::ISerializationBinder*& __cordl_internal_get__serializationBinder() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling> const& __cordl_internal_get__stringEscapeHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling>& __cordl_internal_get__stringEscapeHandling() ;

constexpr ::Newtonsoft::Json::Serialization::ITraceWriter* const& __cordl_internal_get__traceWriter() const;

constexpr ::Newtonsoft::Json::Serialization::ITraceWriter*& __cordl_internal_get__traceWriter() ;

constexpr ::Newtonsoft::Json::TypeNameAssemblyFormatHandling const& __cordl_internal_get__typeNameAssemblyFormatHandling() const;

constexpr ::Newtonsoft::Json::TypeNameAssemblyFormatHandling& __cordl_internal_get__typeNameAssemblyFormatHandling() ;

constexpr ::Newtonsoft::Json::TypeNameHandling const& __cordl_internal_get__typeNameHandling() const;

constexpr ::Newtonsoft::Json::TypeNameHandling& __cordl_internal_get__typeNameHandling() ;

constexpr void __cordl_internal_set_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*  value) ;

constexpr void __cordl_internal_set__checkAdditionalContent(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set__constructorHandling(::Newtonsoft::Json::ConstructorHandling  value) ;

constexpr void __cordl_internal_set__context(::System::Runtime::Serialization::StreamingContext  value) ;

constexpr void __cordl_internal_set__contractResolver(::Newtonsoft::Json::Serialization::IContractResolver*  value) ;

constexpr void __cordl_internal_set__converters(::Newtonsoft::Json::JsonConverterCollection*  value) ;

constexpr void __cordl_internal_set__culture(::System::Globalization::CultureInfo*  value) ;

constexpr void __cordl_internal_set__dateFormatHandling(::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling>  value) ;

constexpr void __cordl_internal_set__dateFormatString(::StringW  value) ;

constexpr void __cordl_internal_set__dateFormatStringSet(bool  value) ;

constexpr void __cordl_internal_set__dateParseHandling(::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>  value) ;

constexpr void __cordl_internal_set__dateTimeZoneHandling(::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>  value) ;

constexpr void __cordl_internal_set__defaultValueHandling(::Newtonsoft::Json::DefaultValueHandling  value) ;

constexpr void __cordl_internal_set__equalityComparer(::System::Collections::IEqualityComparer*  value) ;

constexpr void __cordl_internal_set__floatFormatHandling(::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling>  value) ;

constexpr void __cordl_internal_set__floatParseHandling(::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>  value) ;

constexpr void __cordl_internal_set__formatting(::System::Nullable_1<::Newtonsoft::Json::Formatting>  value) ;

constexpr void __cordl_internal_set__maxDepth(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set__maxDepthSet(bool  value) ;

constexpr void __cordl_internal_set__metadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling  value) ;

constexpr void __cordl_internal_set__missingMemberHandling(::Newtonsoft::Json::MissingMemberHandling  value) ;

constexpr void __cordl_internal_set__nullValueHandling(::Newtonsoft::Json::NullValueHandling  value) ;

constexpr void __cordl_internal_set__objectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling  value) ;

constexpr void __cordl_internal_set__preserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling  value) ;

constexpr void __cordl_internal_set__referenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling  value) ;

constexpr void __cordl_internal_set__referenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver*  value) ;

constexpr void __cordl_internal_set__serializationBinder(::Newtonsoft::Json::Serialization::ISerializationBinder*  value) ;

constexpr void __cordl_internal_set__stringEscapeHandling(::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling>  value) ;

constexpr void __cordl_internal_set__traceWriter(::Newtonsoft::Json::Serialization::ITraceWriter*  value) ;

constexpr void __cordl_internal_set__typeNameAssemblyFormatHandling(::Newtonsoft::Json::TypeNameAssemblyFormatHandling  value) ;

constexpr void __cordl_internal_set__typeNameHandling(::Newtonsoft::Json::TypeNameHandling  value) ;

/// @brief Method .ctor, addr 0x27d27a8, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_Error, addr 0x27d1fcc, size 0xb0, virtual true, abstract: false, final false
inline void add_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*  value) ;

/// @brief Method get_CheckAdditionalContent, addr 0x27d276c, size 0x3c, virtual true, abstract: false, final false
inline bool get_CheckAdditionalContent() ;

/// @brief Method get_Context, addr 0x27d2714, size 0xc, virtual true, abstract: false, final false
inline ::System::Runtime::Serialization::StreamingContext get_Context() ;

/// @brief Method get_ContractResolver, addr 0x27d2664, size 0x8, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Serialization::IContractResolver* get_ContractResolver() ;

/// @brief Method get_Converters, addr 0x27d2604, size 0x60, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::JsonConverterCollection* get_Converters() ;

/// @brief Method get_Formatting, addr 0x27d2728, size 0x3c, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Formatting get_Formatting() ;

/// @brief Method get_MaxDepth, addr 0x27d2764, size 0x8, virtual true, abstract: false, final false
inline ::System::Nullable_1<int32_t> get_MaxDepth() ;

/// @brief Method get_MetadataPropertyHandling, addr 0x27d259c, size 0x8, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::MetadataPropertyHandling get_MetadataPropertyHandling() ;

/// @brief Method get_NullValueHandling, addr 0x27d2414, size 0x8, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::NullValueHandling get_NullValueHandling() ;

/// @brief Method get_TraceWriter, addr 0x27d221c, size 0x8, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Serialization::ITraceWriter* get_TraceWriter() ;

/// @brief Method remove_Error, addr 0x27d207c, size 0xb0, virtual true, abstract: false, final false
inline void remove_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*  value) ;

/// @brief Method set_ConstructorHandling, addr 0x27d253c, size 0x60, virtual true, abstract: false, final false
inline void set_ConstructorHandling(::Newtonsoft::Json::ConstructorHandling  value) ;

/// @brief Method set_Context, addr 0x27d2720, size 0x8, virtual true, abstract: false, final false
inline void set_Context(::System::Runtime::Serialization::StreamingContext  value) ;

/// @brief Method set_ContractResolver, addr 0x27d266c, size 0xa8, virtual true, abstract: false, final false
inline void set_ContractResolver(::Newtonsoft::Json::Serialization::IContractResolver*  value) ;

/// @brief Method set_DefaultValueHandling, addr 0x27d247c, size 0x60, virtual true, abstract: false, final false
inline void set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling  value) ;

/// @brief Method set_EqualityComparer, addr 0x27d222c, size 0x8, virtual true, abstract: false, final false
inline void set_EqualityComparer(::System::Collections::IEqualityComparer*  value) ;

/// @brief Method set_MetadataPropertyHandling, addr 0x27d25a4, size 0x60, virtual true, abstract: false, final false
inline void set_MetadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling  value) ;

/// @brief Method set_MissingMemberHandling, addr 0x27d23b4, size 0x60, virtual true, abstract: false, final false
inline void set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling  value) ;

/// @brief Method set_NullValueHandling, addr 0x27d241c, size 0x60, virtual true, abstract: false, final false
inline void set_NullValueHandling(::Newtonsoft::Json::NullValueHandling  value) ;

/// @brief Method set_ObjectCreationHandling, addr 0x27d24dc, size 0x60, virtual true, abstract: false, final false
inline void set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling  value) ;

/// @brief Method set_PreserveReferencesHandling, addr 0x27d22f4, size 0x60, virtual true, abstract: false, final false
inline void set_PreserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling  value) ;

/// @brief Method set_ReferenceLoopHandling, addr 0x27d2354, size 0x60, virtual true, abstract: false, final false
inline void set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling  value) ;

/// @brief Method set_ReferenceResolver, addr 0x27d212c, size 0x78, virtual true, abstract: false, final false
inline void set_ReferenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver*  value) ;

/// @brief Method set_SerializationBinder, addr 0x27d21a4, size 0x78, virtual true, abstract: false, final false
inline void set_SerializationBinder(::Newtonsoft::Json::Serialization::ISerializationBinder*  value) ;

/// @brief Method set_TraceWriter, addr 0x27d2224, size 0x8, virtual true, abstract: false, final false
inline void set_TraceWriter(::Newtonsoft::Json::Serialization::ITraceWriter*  value) ;

/// @brief Method set_TypeNameAssemblyFormatHandling, addr 0x27d2294, size 0x60, virtual true, abstract: false, final false
inline void set_TypeNameAssemblyFormatHandling(::Newtonsoft::Json::TypeNameAssemblyFormatHandling  value) ;

/// @brief Method set_TypeNameHandling, addr 0x27d2234, size 0x60, virtual true, abstract: false, final false
inline void set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonSerializer(JsonSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonSerializer(JsonSerializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9680};

/// @brief Field _typeNameHandling, offset: 0x10, size: 0x4, def value: None
 ::Newtonsoft::Json::TypeNameHandling  ____typeNameHandling;

/// @brief Field _typeNameAssemblyFormatHandling, offset: 0x14, size: 0x4, def value: None
 ::Newtonsoft::Json::TypeNameAssemblyFormatHandling  ____typeNameAssemblyFormatHandling;

/// @brief Field _preserveReferencesHandling, offset: 0x18, size: 0x4, def value: None
 ::Newtonsoft::Json::PreserveReferencesHandling  ____preserveReferencesHandling;

/// @brief Field _referenceLoopHandling, offset: 0x1c, size: 0x4, def value: None
 ::Newtonsoft::Json::ReferenceLoopHandling  ____referenceLoopHandling;

/// @brief Field _missingMemberHandling, offset: 0x20, size: 0x4, def value: None
 ::Newtonsoft::Json::MissingMemberHandling  ____missingMemberHandling;

/// @brief Field _objectCreationHandling, offset: 0x24, size: 0x4, def value: None
 ::Newtonsoft::Json::ObjectCreationHandling  ____objectCreationHandling;

/// @brief Field _nullValueHandling, offset: 0x28, size: 0x4, def value: None
 ::Newtonsoft::Json::NullValueHandling  ____nullValueHandling;

/// @brief Field _defaultValueHandling, offset: 0x2c, size: 0x4, def value: None
 ::Newtonsoft::Json::DefaultValueHandling  ____defaultValueHandling;

/// @brief Field _constructorHandling, offset: 0x30, size: 0x4, def value: None
 ::Newtonsoft::Json::ConstructorHandling  ____constructorHandling;

/// @brief Field _metadataPropertyHandling, offset: 0x34, size: 0x4, def value: None
 ::Newtonsoft::Json::MetadataPropertyHandling  ____metadataPropertyHandling;

/// @brief Field _converters, offset: 0x38, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonConverterCollection*  ____converters;

/// @brief Field _contractResolver, offset: 0x40, size: 0x8, def value: None
 ::Newtonsoft::Json::Serialization::IContractResolver*  ____contractResolver;

/// @brief Field _traceWriter, offset: 0x48, size: 0x8, def value: None
 ::Newtonsoft::Json::Serialization::ITraceWriter*  ____traceWriter;

/// @brief Field _equalityComparer, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::IEqualityComparer*  ____equalityComparer;

/// @brief Field _serializationBinder, offset: 0x58, size: 0x8, def value: None
 ::Newtonsoft::Json::Serialization::ISerializationBinder*  ____serializationBinder;

/// @brief Field _context, offset: 0x60, size: 0x10, def value: None
 ::System::Runtime::Serialization::StreamingContext  ____context;

/// @brief Field _referenceResolver, offset: 0x70, size: 0x8, def value: None
 ::Newtonsoft::Json::Serialization::IReferenceResolver*  ____referenceResolver;

/// @brief Field _formatting, offset: 0x78, size: 0x8, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::Formatting>  ____formatting;

/// @brief Field _dateFormatHandling, offset: 0x80, size: 0x8, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling>  ____dateFormatHandling;

/// @brief Field _dateTimeZoneHandling, offset: 0x88, size: 0x8, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>  ____dateTimeZoneHandling;

/// @brief Field _dateParseHandling, offset: 0x90, size: 0x8, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>  ____dateParseHandling;

/// @brief Field _floatFormatHandling, offset: 0x98, size: 0x8, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling>  ____floatFormatHandling;

/// @brief Field _floatParseHandling, offset: 0xa0, size: 0x8, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>  ____floatParseHandling;

/// @brief Field _stringEscapeHandling, offset: 0xa8, size: 0x8, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling>  ____stringEscapeHandling;

/// @brief Field _culture, offset: 0xb0, size: 0x8, def value: None
 ::System::Globalization::CultureInfo*  ____culture;

/// @brief Field _maxDepth, offset: 0xb8, size: 0x8, def value: None
 ::System::Nullable_1<int32_t>  ____maxDepth;

/// @brief Field _maxDepthSet, offset: 0xc0, size: 0x1, def value: None
 bool  ____maxDepthSet;

/// @brief Field _checkAdditionalContent, offset: 0xc1, size: 0x2, def value: None
 ::System::Nullable_1<bool>  ____checkAdditionalContent;

/// @brief Field _dateFormatString, offset: 0xc8, size: 0x8, def value: None
 ::StringW  ____dateFormatString;

/// @brief Field _dateFormatStringSet, offset: 0xd0, size: 0x1, def value: None
 bool  ____dateFormatStringSet;

/// @brief Field Error, offset: 0xd8, size: 0x8, def value: None
 ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*  ___Error;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____typeNameHandling) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____typeNameAssemblyFormatHandling) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____preserveReferencesHandling) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____referenceLoopHandling) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____missingMemberHandling) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____objectCreationHandling) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____nullValueHandling) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____defaultValueHandling) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____constructorHandling) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____metadataPropertyHandling) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____converters) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____contractResolver) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____traceWriter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____equalityComparer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____serializationBinder) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____context) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____referenceResolver) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____formatting) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____dateFormatHandling) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____dateTimeZoneHandling) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____dateParseHandling) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____floatFormatHandling) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____floatParseHandling) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____stringEscapeHandling) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____culture) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____maxDepth) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____maxDepthSet) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____checkAdditionalContent) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____dateFormatString) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____dateFormatStringSet) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ___Error) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonSerializer, 0xe0>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonSerializer);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonSerializer*, "Newtonsoft.Json", "JsonSerializer");
