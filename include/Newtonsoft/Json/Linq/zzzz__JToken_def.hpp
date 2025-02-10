#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JToken.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__IJsonLineInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Dynamic/zzzz__IDynamicMetaObjectProvider_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JToken)
namespace Newtonsoft::Json::Linq {
class JContainer;
}
namespace Newtonsoft::Json::Linq {
template<typename T>
struct JEnumerable_1;
}
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace Newtonsoft::Json::Linq {
class JToken_LineInfoAnnotation;
}
namespace Newtonsoft::Json::Linq {
class JValue;
}
namespace Newtonsoft::Json::Linq {
class JsonCloneSettings;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace Newtonsoft::Json {
struct Formatting;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Dynamic {
class DynamicMetaObject;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Numerics {
struct BigInteger;
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
class Type;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class JToken_LineInfoAnnotation;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JToken);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation);
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JToken/LineInfoAnnotation
class CORDL_TYPE JToken_LineInfoAnnotation : public ::System::Object {
public:
// Declarations
/// @brief Field LineNumber, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_LineNumber, put=__cordl_internal_set_LineNumber)) int32_t  LineNumber;

/// @brief Field LinePosition, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_LinePosition, put=__cordl_internal_set_LinePosition)) int32_t  LinePosition;

static inline ::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation* New_ctor(int32_t  lineNumber, int32_t  linePosition) ;

constexpr int32_t const& __cordl_internal_get_LineNumber() const;

constexpr int32_t& __cordl_internal_get_LineNumber() ;

constexpr int32_t const& __cordl_internal_get_LinePosition() const;

constexpr int32_t& __cordl_internal_get_LinePosition() ;

constexpr void __cordl_internal_set_LineNumber(int32_t  value) ;

constexpr void __cordl_internal_set_LinePosition(int32_t  value) ;

/// @brief Method .ctor, addr 0x282fd88, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(int32_t  lineNumber, int32_t  linePosition) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JToken_LineInfoAnnotation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JToken_LineInfoAnnotation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JToken_LineInfoAnnotation(JToken_LineInfoAnnotation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JToken_LineInfoAnnotation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JToken_LineInfoAnnotation(JToken_LineInfoAnnotation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9877};

/// @brief Field LineNumber, offset: 0x10, size: 0x4, def value: None
 int32_t  ___LineNumber;

/// @brief Field LinePosition, offset: 0x14, size: 0x4, def value: None
 int32_t  ___LinePosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation, ___LineNumber) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation, ___LinePosition) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation, 0x18>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
// Dependencies Newtonsoft.Json.IJsonLineInfo, System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, System.Dynamic.IDynamicMetaObjectProvider, System.ICloneable, System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JToken
class CORDL_TYPE JToken : public ::System::Object {
public:
// Declarations
using LineInfoAnnotation = ::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation;

/// @brief Field BigIntegerTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BigIntegerTypes, put=setStaticF_BigIntegerTypes)) ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  BigIntegerTypes;

/// @brief Field BooleanTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BooleanTypes, put=setStaticF_BooleanTypes)) ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  BooleanTypes;

/// @brief Field BytesTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BytesTypes, put=setStaticF_BytesTypes)) ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  BytesTypes;

/// @brief Field CharTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CharTypes, put=setStaticF_CharTypes)) ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  CharTypes;

/// @brief Field DateTimeTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DateTimeTypes, put=setStaticF_DateTimeTypes)) ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  DateTimeTypes;

 __declspec(property(get=get_First)) ::Newtonsoft::Json::Linq::JToken*  First;

/// @brief Field GuidTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GuidTypes, put=setStaticF_GuidTypes)) ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  GuidTypes;

 __declspec(property(get=get_HasValues)) bool  HasValues;

 __declspec(property(get=get_Item, put=set_Item)) ::Newtonsoft::Json::Linq::JToken*  Item[];

 __declspec(property(get=get_Last)) ::Newtonsoft::Json::Linq::JToken*  Last;

 __declspec(property(get=Newtonsoft_Json_IJsonLineInfo_get_LineNumber)) int32_t  Newtonsoft_Json_IJsonLineInfo_LineNumber;

 __declspec(property(get=Newtonsoft_Json_IJsonLineInfo_get_LinePosition)) int32_t  Newtonsoft_Json_IJsonLineInfo_LinePosition;

 __declspec(property(get=get_Next, put=set_Next)) ::Newtonsoft::Json::Linq::JToken*  Next;

/// @brief Field NumberTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NumberTypes, put=setStaticF_NumberTypes)) ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  NumberTypes;

 __declspec(property(get=get_Parent, put=set_Parent)) ::Newtonsoft::Json::Linq::JContainer*  Parent;

 __declspec(property(get=get_Path)) ::StringW  Path;

 __declspec(property(get=get_Previous, put=set_Previous)) ::Newtonsoft::Json::Linq::JToken*  Previous;

 __declspec(property(get=get_Root)) ::Newtonsoft::Json::Linq::JToken*  Root;

/// @brief Field StringTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_StringTypes, put=setStaticF_StringTypes)) ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  StringTypes;

/// @brief Field TimeSpanTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TimeSpanTypes, put=setStaticF_TimeSpanTypes)) ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  TimeSpanTypes;

 __declspec(property(get=get_Type)) ::Newtonsoft::Json::Linq::JTokenType  Type;

/// @brief Field UriTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UriTypes, put=setStaticF_UriTypes)) ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  UriTypes;

/// @brief Field _annotations, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__annotations, put=__cordl_internal_set__annotations)) ::System::Object*  _annotations;

/// @brief Field _next, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__next, put=__cordl_internal_set__next)) ::Newtonsoft::Json::Linq::JToken*  _next;

/// @brief Field _parent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__parent, put=__cordl_internal_set__parent)) ::Newtonsoft::Json::Linq::JContainer*  _parent;

/// @brief Field _previous, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__previous, put=__cordl_internal_set__previous)) ::Newtonsoft::Json::Linq::JToken*  _previous;

/// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
constexpr operator  ::Newtonsoft::Json::IJsonLineInfo*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Dynamic::IDynamicMetaObjectProvider"
constexpr operator  ::System::Dynamic::IDynamicMetaObjectProvider*() noexcept;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Method AddAnnotation, addr 0x282fdb4, size 0x218, virtual false, abstract: false, final false
inline void AddAnnotation(::System::Object*  annotation) ;

/// @brief Method Annotation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T Annotation() ;

/// @brief Method Children, addr 0x2829414, size 0x58, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*> Children() ;

/// @brief Method CloneToken, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// @brief Method CopyAnnotations, addr 0x282110c, size 0x8c, virtual false, abstract: false, final false
inline void CopyAnnotations(::Newtonsoft::Json::Linq::JToken*  target, ::Newtonsoft::Json::Linq::JToken*  source) ;

/// @brief Method CreateReader, addr 0x282e9d0, size 0x58, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonReader* CreateReader() ;

/// @brief Method DeepClone, addr 0x28301b0, size 0x10, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* DeepClone() ;

/// @brief Method EnsureValue, addr 0x282975c, size 0x114, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JValue* EnsureValue(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method FromObjectInternal, addr 0x28257d0, size 0x214, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JToken* FromObjectInternal(::System::Object*  o, ::Newtonsoft::Json::JsonSerializer*  jsonSerializer) ;

/// @brief Method GetMetaObject, addr 0x28300c8, size 0xc8, virtual true, abstract: false, final false
inline ::System::Dynamic::DynamicMetaObject* GetMetaObject(::System::Linq::Expressions::Expression*  parameter) ;

/// @brief Method GetType, addr 0x2829870, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW GetType(::Newtonsoft::Json::Linq::JToken*  token) ;

static inline ::Newtonsoft::Json::Linq::JToken* New_ctor() ;

/// @brief Method Newtonsoft.Json.IJsonLineInfo.HasLineInfo, addr 0x282ffcc, size 0x54, virtual true, abstract: false, final true
inline bool Newtonsoft_Json_IJsonLineInfo_HasLineInfo() ;

/// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LineNumber, addr 0x2830020, size 0x54, virtual true, abstract: false, final true
inline int32_t Newtonsoft_Json_IJsonLineInfo_get_LineNumber() ;

/// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LinePosition, addr 0x2830074, size 0x54, virtual true, abstract: false, final true
inline int32_t Newtonsoft_Json_IJsonLineInfo_get_LinePosition() ;

/// @brief Method ReadFrom, addr 0x282f9e0, size 0x58, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JToken* ReadFrom(::Newtonsoft::Json::JsonReader*  reader) ;

/// @brief Method ReadFrom, addr 0x282fa38, size 0x2e0, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JToken* ReadFrom(::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings) ;

/// @brief Method Remove, addr 0x2825d6c, size 0x6c, virtual false, abstract: false, final false
inline void Remove() ;

/// @brief Method Replace, addr 0x28242a4, size 0x74, virtual false, abstract: false, final false
inline void Replace(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method SetLineInfo, addr 0x2820178, size 0x1a0, virtual false, abstract: false, final false
inline void SetLineInfo(::Newtonsoft::Json::IJsonLineInfo*  lineInfo, ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings) ;

/// @brief Method SetLineInfo, addr 0x282fd18, size 0x70, virtual false, abstract: false, final false
inline void SetLineInfo(int32_t  lineNumber, int32_t  linePosition) ;

/// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator, addr 0x282e938, size 0x98, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x282e8a4, size 0x94, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Dynamic.IDynamicMetaObjectProvider.GetMetaObject, addr 0x2830190, size 0x10, virtual true, abstract: false, final true
inline ::System::Dynamic::DynamicMetaObject* System_Dynamic_IDynamicMetaObjectProvider_GetMetaObject(::System::Linq::Expressions::Expression*  parameter) ;

/// @brief Method System.ICloneable.Clone, addr 0x28301a0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_ICloneable_Clone() ;

/// @brief Method ToBigInteger, addr 0x282e548, size 0x14c, virtual false, abstract: false, final false
static inline ::System::Numerics::BigInteger ToBigInteger(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method ToBigIntegerNullable, addr 0x282e694, size 0x1ac, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::System::Numerics::BigInteger> ToBigIntegerNullable(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method ToObject, addr 0x282eb08, size 0xc6c, virtual false, abstract: false, final false
inline ::System::Object* ToObject(::System::Type*  objectType) ;

/// @brief Method ToObject, addr 0x282f774, size 0x26c, virtual false, abstract: false, final false
inline ::System::Object* ToObject(::System::Type*  objectType, ::Newtonsoft::Json::JsonSerializer*  jsonSerializer) ;

/// @brief Method ToObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T ToObject() ;

/// @brief Method ToString, addr 0x282946c, size 0x98, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x2829504, size 0x258, virtual false, abstract: false, final false
inline ::StringW ToString(::Newtonsoft::Json::Formatting  formatting, ::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>  converters) ;

/// @brief Method ValidateToken, addr 0x2829960, size 0xc0, virtual false, abstract: false, final false
static inline bool ValidateToken(::Newtonsoft::Json::Linq::JToken*  o, ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  validTypes, bool  nullable) ;

/// @brief Method WriteTo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void WriteTo(::Newtonsoft::Json::JsonWriter*  writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>  converters) ;

constexpr ::System::Object* const& __cordl_internal_get__annotations() const;

constexpr ::System::Object*& __cordl_internal_get__annotations() ;

constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get__next() const;

constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__next() ;

constexpr ::Newtonsoft::Json::Linq::JContainer* const& __cordl_internal_get__parent() const;

constexpr ::Newtonsoft::Json::Linq::JContainer*& __cordl_internal_get__parent() ;

constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get__previous() const;

constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__previous() ;

constexpr void __cordl_internal_set__annotations(::System::Object*  value) ;

constexpr void __cordl_internal_set__next(::Newtonsoft::Json::Linq::JToken*  value) ;

constexpr void __cordl_internal_set__parent(::Newtonsoft::Json::Linq::JContainer*  value) ;

constexpr void __cordl_internal_set__previous(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method .ctor, addr 0x2821104, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_BigIntegerTypes() ;

static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_BooleanTypes() ;

static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_BytesTypes() ;

static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_CharTypes() ;

static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_DateTimeTypes() ;

static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_GuidTypes() ;

static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_NumberTypes() ;

static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_StringTypes() ;

static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_TimeSpanTypes() ;

static inline ::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*> getStaticF_UriTypes() ;

/// @brief Method get_First, addr 0x28292f4, size 0x90, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* get_First() ;

/// @brief Method get_HasValues, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_HasValues() ;

/// @brief Method get_Item, addr 0x28291d4, size 0x90, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object*  key) ;

/// @brief Method get_Last, addr 0x2829384, size 0x90, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* get_Last() ;

/// @brief Method get_Next, addr 0x2828e44, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* get_Next() ;

/// @brief Method get_Parent, addr 0x2828e34, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JContainer* get_Parent() ;

/// @brief Method get_Path, addr 0x2828e64, size 0x370, virtual false, abstract: false, final false
inline ::StringW get_Path() ;

/// @brief Method get_Previous, addr 0x2828e54, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* get_Previous() ;

/// @brief Method get_Root, addr 0x2821cd0, size 0x18, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* get_Root() ;

/// @brief Method get_Type, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JTokenType get_Type() ;

/// @brief Convert to "::Newtonsoft::Json::IJsonLineInfo"
constexpr ::Newtonsoft::Json::IJsonLineInfo* i___Newtonsoft__Json__IJsonLineInfo() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Dynamic::IDynamicMetaObjectProvider"
constexpr ::System::Dynamic::IDynamicMetaObjectProvider* i___System__Dynamic__IDynamicMetaObjectProvider() noexcept;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

/// @brief Method op_Explicit, addr 0x282d454, size 0x278, virtual false, abstract: false, final false
static inline ::StringW op_Explicit___StringW(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282c430, size 0x1ec, virtual false, abstract: false, final false
static inline ::System::DateTime op_Explicit___System__DateTime(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x2829c28, size 0x24c, virtual false, abstract: false, final false
static inline ::System::DateTimeOffset op_Explicit___System__DateTimeOffset(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282ca60, size 0x1e4, virtual false, abstract: false, final false
static inline ::System::Decimal op_Explicit___System__Decimal(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282da94, size 0x220, virtual false, abstract: false, final false
static inline ::System::Guid op_Explicit___System__Guid(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282a4cc, size 0x2d4, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::System::DateTimeOffset> op_Explicit___System__Nullable_1___System__DateTimeOffset_(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282a2a8, size 0x224, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::System::DateTime> op_Explicit___System__Nullable_1___System__DateTime_(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282a7a0, size 0x240, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::System::Decimal> op_Explicit___System__Nullable_1___System__Decimal_(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282dcb4, size 0x264, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::System::Guid> op_Explicit___System__Nullable_1___System__Guid_(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282e114, size 0x238, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::System::TimeSpan> op_Explicit___System__Nullable_1___System__TimeSpan_(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x2829e74, size 0x250, virtual false, abstract: false, final false
static inline ::System::Nullable_1<bool> op_Explicit___System__Nullable_1_bool_(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282ac00, size 0x224, virtual false, abstract: false, final false
static inline ::System::Nullable_1<char16_t> op_Explicit___System__Nullable_1_char16_t_(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282a9e0, size 0x220, virtual false, abstract: false, final false
static inline ::System::Nullable_1<double_t> op_Explicit___System__Nullable_1_double_t_(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282c840, size 0x220, virtual false, abstract: false, final false
static inline ::System::Nullable_1<float_t> op_Explicit___System__Nullable_1_float_t_(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282bba0, size 0x224, virtual false, abstract: false, final false
static inline ::System::Nullable_1<int16_t> op_Explicit___System__Nullable_1_int16_t_(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282b97c, size 0x224, virtual false, abstract: false, final false
static inline ::System::Nullable_1<int32_t> op_Explicit___System__Nullable_1_int32_t_(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282c61c, size 0x224, virtual false, abstract: false, final false
static inline ::System::Nullable_1<int64_t> op_Explicit___System__Nullable_1_int64_t_(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282c20c, size 0x224, virtual false, abstract: false, final false
static inline ::System::Nullable_1<int8_t> op_Explicit___System__Nullable_1_int8_t_(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282bdc4, size 0x224, virtual false, abstract: false, final false
static inline ::System::Nullable_1<uint16_t> op_Explicit___System__Nullable_1_uint16_t_(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282cc44, size 0x224, virtual false, abstract: false, final false
static inline ::System::Nullable_1<uint32_t> op_Explicit___System__Nullable_1_uint32_t_(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282ce68, size 0x224, virtual false, abstract: false, final false
static inline ::System::Nullable_1<uint64_t> op_Explicit___System__Nullable_1_uint64_t_(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282bfe8, size 0x224, virtual false, abstract: false, final false
static inline ::System::Nullable_1<uint8_t> op_Explicit___System__Nullable_1_uint8_t_(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282df18, size 0x1fc, virtual false, abstract: false, final false
static inline ::System::TimeSpan op_Explicit___System__TimeSpan(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282e34c, size 0x1fc, virtual false, abstract: false, final false
static inline ::System::Uri* op_Explicit___System__Uri_(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x2829a20, size 0x208, virtual false, abstract: false, final false
static inline bool op_Explicit_bool(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282b3d0, size 0x1e4, virtual false, abstract: false, final false
static inline char16_t op_Explicit_char16_t(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282d08c, size 0x1e4, virtual false, abstract: false, final false
static inline double_t op_Explicit_double_t(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282d270, size 0x1e4, virtual false, abstract: false, final false
static inline float_t op_Explicit_float_t(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282b008, size 0x1e4, virtual false, abstract: false, final false
static inline int16_t op_Explicit_int16_t(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282ae24, size 0x1e4, virtual false, abstract: false, final false
static inline int32_t op_Explicit_int32_t(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282a0c4, size 0x1e4, virtual false, abstract: false, final false
static inline int64_t op_Explicit_int64_t(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282b798, size 0x1e4, virtual false, abstract: false, final false
static inline int8_t op_Explicit_int8_t(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282b1ec, size 0x1e4, virtual false, abstract: false, final false
static inline uint16_t op_Explicit_uint16_t(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282d6cc, size 0x1e4, virtual false, abstract: false, final false
static inline uint32_t op_Explicit_uint32_t(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282d8b0, size 0x1e4, virtual false, abstract: false, final false
static inline uint64_t op_Explicit_uint64_t(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Explicit, addr 0x282b5b4, size 0x1e4, virtual false, abstract: false, final false
static inline uint8_t op_Explicit_uint8_t(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method op_Implicit, addr 0x282e840, size 0x5c, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JToken* op_Implicit___Newtonsoft__Json__Linq__JToken_(::StringW  value) ;

static inline void setStaticF_BigIntegerTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  value) ;

static inline void setStaticF_BooleanTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  value) ;

static inline void setStaticF_BytesTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  value) ;

static inline void setStaticF_CharTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  value) ;

static inline void setStaticF_DateTimeTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  value) ;

static inline void setStaticF_GuidTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  value) ;

static inline void setStaticF_NumberTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  value) ;

static inline void setStaticF_StringTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  value) ;

static inline void setStaticF_TimeSpanTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  value) ;

static inline void setStaticF_UriTypes(::ArrayW<::Newtonsoft::Json::Linq::JTokenType,::Array<::Newtonsoft::Json::Linq::JTokenType>*>  value) ;

/// @brief Method set_Item, addr 0x2829264, size 0x90, virtual true, abstract: false, final false
inline void set_Item(::System::Object*  key, ::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method set_Next, addr 0x2828e4c, size 0x8, virtual false, abstract: false, final false
inline void set_Next(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method set_Parent, addr 0x2828e3c, size 0x8, virtual false, abstract: false, final false
inline void set_Parent(::Newtonsoft::Json::Linq::JContainer*  value) ;

/// @brief Method set_Previous, addr 0x2828e5c, size 0x8, virtual false, abstract: false, final false
inline void set_Previous(::Newtonsoft::Json::Linq::JToken*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JToken() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JToken", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JToken(JToken && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JToken", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JToken(JToken const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9878};

/// @brief Field _parent, offset: 0x10, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JContainer*  ____parent;

/// @brief Field _previous, offset: 0x18, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JToken*  ____previous;

/// @brief Field _next, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JToken*  ____next;

/// @brief Field _annotations, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ____annotations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JToken, ____parent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken, ____previous) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken, ____next) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JToken, ____annotations) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JToken, 0x30>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JToken);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JToken*, "Newtonsoft.Json.Linq", "JToken");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JToken_LineInfoAnnotation*, "Newtonsoft.Json.Linq", "JToken/LineInfoAnnotation");
