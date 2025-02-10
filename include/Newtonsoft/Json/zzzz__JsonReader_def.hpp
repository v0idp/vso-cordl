#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__DateParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonPosition_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonReader)
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace Newtonsoft::Json {
struct DateParseHandling;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace Newtonsoft::Json {
struct FloatParseHandling;
}
namespace Newtonsoft::Json {
struct JsonContainerType;
}
namespace Newtonsoft::Json {
struct JsonPosition;
}
namespace Newtonsoft::Json {
class JsonReaderException;
}
namespace Newtonsoft::Json {
struct JsonReader_State;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Globalization {
class CultureInfo;
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
struct JsonReader_State;
}
namespace Newtonsoft::Json {
class JsonReader;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::JsonReader_State);
MARK_REF_PTR_T(::Newtonsoft::Json::JsonReader);
// Dependencies 
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonReader/State
struct CORDL_TYPE JsonReader_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JsonReader_State_Unwrapped
enum struct __JsonReader_State_Unwrapped : int32_t {
__E_Start = static_cast<int32_t>(0x0),
__E_Complete = static_cast<int32_t>(0x1),
__E_Property = static_cast<int32_t>(0x2),
__E_ObjectStart = static_cast<int32_t>(0x3),
__E_Object = static_cast<int32_t>(0x4),
__E_ArrayStart = static_cast<int32_t>(0x5),
__E_Array = static_cast<int32_t>(0x6),
__E_Closed = static_cast<int32_t>(0x7),
__E_PostValue = static_cast<int32_t>(0x8),
__E_ConstructorStart = static_cast<int32_t>(0x9),
__E_Constructor = static_cast<int32_t>(0xa),
__E_Error = static_cast<int32_t>(0xb),
__E_Finished = static_cast<int32_t>(0xc),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JsonReader_State_Unwrapped () const noexcept {
return static_cast<__JsonReader_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JsonReader_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr JsonReader_State(int32_t  value__) noexcept;

/// @brief Field Array value: I32(6)
static ::Newtonsoft::Json::JsonReader_State const Array;

/// @brief Field ArrayStart value: I32(5)
static ::Newtonsoft::Json::JsonReader_State const ArrayStart;

/// @brief Field Closed value: I32(7)
static ::Newtonsoft::Json::JsonReader_State const Closed;

/// @brief Field Complete value: I32(1)
static ::Newtonsoft::Json::JsonReader_State const Complete;

/// @brief Field Constructor value: I32(10)
static ::Newtonsoft::Json::JsonReader_State const Constructor;

/// @brief Field ConstructorStart value: I32(9)
static ::Newtonsoft::Json::JsonReader_State const ConstructorStart;

/// @brief Field Error value: I32(11)
static ::Newtonsoft::Json::JsonReader_State const Error;

/// @brief Field Finished value: I32(12)
static ::Newtonsoft::Json::JsonReader_State const Finished;

/// @brief Field Object value: I32(4)
static ::Newtonsoft::Json::JsonReader_State const Object;

/// @brief Field ObjectStart value: I32(3)
static ::Newtonsoft::Json::JsonReader_State const ObjectStart;

/// @brief Field PostValue value: I32(8)
static ::Newtonsoft::Json::JsonReader_State const PostValue;

/// @brief Field Property value: I32(2)
static ::Newtonsoft::Json::JsonReader_State const Property;

/// @brief Field Start value: I32(0)
static ::Newtonsoft::Json::JsonReader_State const Start;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9675};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonReader_State, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonReader_State, 0x4>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
// Dependencies Newtonsoft.Json.DateParseHandling, Newtonsoft.Json.DateTimeZoneHandling, Newtonsoft.Json.FloatParseHandling, Newtonsoft.Json.JsonPosition, Newtonsoft.Json.JsonReader::State, Newtonsoft.Json.JsonToken, System.IDisposable, System.Nullable`1<T>, System.Object
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonReader
class CORDL_TYPE JsonReader : public ::System::Object {
public:
// Declarations
using State = ::Newtonsoft::Json::JsonReader_State;

 __declspec(property(get=get_CloseInput, put=set_CloseInput)) bool  CloseInput;

 __declspec(property(get=get_Culture, put=set_Culture)) ::System::Globalization::CultureInfo*  Culture;

 __declspec(property(get=get_CurrentState)) ::Newtonsoft::Json::JsonReader_State  CurrentState;

 __declspec(property(get=get_DateFormatString, put=set_DateFormatString)) ::StringW  DateFormatString;

 __declspec(property(get=get_DateParseHandling, put=set_DateParseHandling)) ::Newtonsoft::Json::DateParseHandling  DateParseHandling;

 __declspec(property(get=get_DateTimeZoneHandling, put=set_DateTimeZoneHandling)) ::Newtonsoft::Json::DateTimeZoneHandling  DateTimeZoneHandling;

 __declspec(property(get=get_Depth)) int32_t  Depth;

 __declspec(property(get=get_FloatParseHandling, put=set_FloatParseHandling)) ::Newtonsoft::Json::FloatParseHandling  FloatParseHandling;

 __declspec(property(get=get_MaxDepth, put=set_MaxDepth)) ::System::Nullable_1<int32_t>  MaxDepth;

 __declspec(property(get=get_Path)) ::StringW  Path;

 __declspec(property(get=get_SupportMultipleContent, put=set_SupportMultipleContent)) bool  SupportMultipleContent;

 __declspec(property(get=get_TokenType)) ::Newtonsoft::Json::JsonToken  TokenType;

 __declspec(property(get=get_Value)) ::System::Object*  Value;

 __declspec(property(get=get_ValueType)) ::System::Type*  ValueType;

/// @brief Field <CloseInput>k__BackingField, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__CloseInput_k__BackingField, put=__cordl_internal_set__CloseInput_k__BackingField)) bool  _CloseInput_k__BackingField;

/// @brief Field <SupportMultipleContent>k__BackingField, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get__SupportMultipleContent_k__BackingField, put=__cordl_internal_set__SupportMultipleContent_k__BackingField)) bool  _SupportMultipleContent_k__BackingField;

/// @brief Field _culture, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__culture, put=__cordl_internal_set__culture)) ::System::Globalization::CultureInfo*  _culture;

/// @brief Field _currentPosition, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get__currentPosition, put=__cordl_internal_set__currentPosition)) ::Newtonsoft::Json::JsonPosition  _currentPosition;

/// @brief Field _currentState, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentState, put=__cordl_internal_set__currentState)) ::Newtonsoft::Json::JsonReader_State  _currentState;

/// @brief Field _dateFormatString, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__dateFormatString, put=__cordl_internal_set__dateFormatString)) ::StringW  _dateFormatString;

/// @brief Field _dateParseHandling, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__dateParseHandling, put=__cordl_internal_set__dateParseHandling)) ::Newtonsoft::Json::DateParseHandling  _dateParseHandling;

/// @brief Field _dateTimeZoneHandling, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__dateTimeZoneHandling, put=__cordl_internal_set__dateTimeZoneHandling)) ::Newtonsoft::Json::DateTimeZoneHandling  _dateTimeZoneHandling;

/// @brief Field _floatParseHandling, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__floatParseHandling, put=__cordl_internal_set__floatParseHandling)) ::Newtonsoft::Json::FloatParseHandling  _floatParseHandling;

/// @brief Field _hasExceededMaxDepth, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasExceededMaxDepth, put=__cordl_internal_set__hasExceededMaxDepth)) bool  _hasExceededMaxDepth;

/// @brief Field _maxDepth, offset 0x4c, size 0x8 
 __declspec(property(get=__cordl_internal_get__maxDepth, put=__cordl_internal_set__maxDepth)) ::System::Nullable_1<int32_t>  _maxDepth;

/// @brief Field _quoteChar, offset 0x20, size 0x2 
 __declspec(property(get=__cordl_internal_get__quoteChar, put=__cordl_internal_set__quoteChar)) char16_t  _quoteChar;

/// @brief Field _stack, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__stack, put=__cordl_internal_set__stack)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*  _stack;

/// @brief Field _tokenType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__tokenType, put=__cordl_internal_set__tokenType)) ::Newtonsoft::Json::JsonToken  _tokenType;

/// @brief Field _value, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) ::System::Object*  _value;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Close, addr 0x27d16f8, size 0x14, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method CreateUnexpectedEndException, addr 0x27d1284, size 0x4c, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonReaderException* CreateUnexpectedEndException() ;

/// @brief Method Dispose, addr 0x27d16d4, size 0x24, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method GetContentToken, addr 0x27ce7ac, size 0x74, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonToken GetContentToken() ;

/// @brief Method GetPosition, addr 0x27cdee4, size 0xa4, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonPosition GetPosition(int32_t  depth) ;

/// @brief Method GetTypeForCloseToken, addr 0x27d14d0, size 0xa8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonContainerType GetTypeForCloseToken(::Newtonsoft::Json::JsonToken  token) ;

/// @brief Method MoveToContent, addr 0x27d1a68, size 0x58, virtual false, abstract: false, final false
inline bool MoveToContent() ;

static inline ::Newtonsoft::Json::JsonReader* New_ctor() ;

/// @brief Method Peek, addr 0x27ce3ec, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonContainerType Peek() ;

/// @brief Method Pop, addr 0x27ce2d0, size 0x11c, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonContainerType Pop() ;

/// @brief Method Push, addr 0x27ce018, size 0x298, virtual false, abstract: false, final false
inline void Push(::Newtonsoft::Json::JsonContainerType  value) ;

/// @brief Method Read, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Read() ;

/// @brief Method ReadAndAssert, addr 0x27d170c, size 0x54, virtual false, abstract: false, final false
inline void ReadAndAssert() ;

/// @brief Method ReadAndMoveToContent, addr 0x27d1a38, size 0x30, virtual false, abstract: false, final false
inline bool ReadAndMoveToContent() ;

/// @brief Method ReadArrayElementIntoByteArrayReportDone, addr 0x27cf5a8, size 0x204, virtual false, abstract: false, final false
inline bool ReadArrayElementIntoByteArrayReportDone(::System::Collections::Generic::List_1<uint8_t>*  buffer) ;

/// @brief Method ReadArrayIntoByteArray, addr 0x27cf45c, size 0x140, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ReadArrayIntoByteArray() ;

/// @brief Method ReadAsBoolean, addr 0x27cfc7c, size 0x330, virtual true, abstract: false, final false
inline ::System::Nullable_1<bool> ReadAsBoolean() ;

/// @brief Method ReadAsBytes, addr 0x27cee78, size 0x3d4, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ReadAsBytes() ;

/// @brief Method ReadAsDateTime, addr 0x27d0824, size 0x2a0, virtual true, abstract: false, final false
inline ::System::Nullable_1<::System::DateTime> ReadAsDateTime() ;

/// @brief Method ReadAsDateTimeOffset, addr 0x27d0d74, size 0x2a4, virtual true, abstract: false, final false
inline ::System::Nullable_1<::System::DateTimeOffset> ReadAsDateTimeOffset() ;

/// @brief Method ReadAsDecimal, addr 0x27d018c, size 0x40c, virtual true, abstract: false, final false
inline ::System::Nullable_1<::System::Decimal> ReadAsDecimal() ;

/// @brief Method ReadAsDouble, addr 0x27cf7ac, size 0x2f8, virtual true, abstract: false, final false
inline ::System::Nullable_1<double_t> ReadAsDouble() ;

/// @brief Method ReadAsInt32, addr 0x27ce3f4, size 0x3b8, virtual true, abstract: false, final false
inline ::System::Nullable_1<int32_t> ReadAsInt32() ;

/// @brief Method ReadAsString, addr 0x27cebd8, size 0x2a0, virtual true, abstract: false, final false
inline ::StringW ReadAsString() ;

/// @brief Method ReadBooleanString, addr 0x27cffac, size 0x1e0, virtual false, abstract: false, final false
inline ::System::Nullable_1<bool> ReadBooleanString(::StringW  s) ;

/// @brief Method ReadDateTimeOffsetString, addr 0x27d1018, size 0x26c, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::DateTimeOffset> ReadDateTimeOffsetString(::StringW  s) ;

/// @brief Method ReadDateTimeString, addr 0x27d0ac4, size 0x2b0, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::DateTime> ReadDateTimeString(::StringW  s) ;

/// @brief Method ReadDecimalString, addr 0x27d0598, size 0x28c, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::Decimal> ReadDecimalString(::StringW  s) ;

/// @brief Method ReadDoubleString, addr 0x27cfaa4, size 0x1d8, virtual false, abstract: false, final false
inline ::System::Nullable_1<double_t> ReadDoubleString(::StringW  s) ;

/// @brief Method ReadForType, addr 0x27d17b8, size 0x280, virtual false, abstract: false, final false
inline bool ReadForType(::Newtonsoft::Json::Serialization::JsonContract*  contract, bool  hasConverter) ;

/// @brief Method ReadForTypeAndAssert, addr 0x27d1768, size 0x50, virtual false, abstract: false, final false
inline void ReadForTypeAndAssert(::Newtonsoft::Json::Serialization::JsonContract*  contract, bool  hasConverter) ;

/// @brief Method ReadInt32String, addr 0x27ce9f8, size 0x1e0, virtual false, abstract: false, final false
inline ::System::Nullable_1<int32_t> ReadInt32String(::StringW  s) ;

/// @brief Method ReadIntoWrappedTypeObject, addr 0x27cf24c, size 0x1cc, virtual false, abstract: false, final false
inline void ReadIntoWrappedTypeObject() ;

/// @brief Method ReaderReadAndAssert, addr 0x27cf418, size 0x44, virtual false, abstract: false, final false
inline void ReaderReadAndAssert() ;

/// @brief Method SetFinished, addr 0x27d14a8, size 0x28, virtual false, abstract: false, final false
inline void SetFinished() ;

/// @brief Method SetPostValueState, addr 0x27d146c, size 0x3c, virtual false, abstract: false, final false
inline void SetPostValueState(bool  updateIndex) ;

/// @brief Method SetStateBasedOnCurrent, addr 0x27d1578, size 0xec, virtual false, abstract: false, final false
inline void SetStateBasedOnCurrent() ;

/// @brief Method SetToken, addr 0x27cf59c, size 0xc, virtual false, abstract: false, final false
inline void SetToken(::Newtonsoft::Json::JsonToken  newToken) ;

/// @brief Method SetToken, addr 0x27d1368, size 0x8, virtual false, abstract: false, final false
inline void SetToken(::Newtonsoft::Json::JsonToken  newToken, ::System::Object*  value) ;

/// @brief Method SetToken, addr 0x27ce8a4, size 0x154, virtual false, abstract: false, final false
inline void SetToken(::Newtonsoft::Json::JsonToken  newToken, ::System::Object*  value, bool  updateIndex) ;

/// @brief Method Skip, addr 0x27d12d0, size 0x98, virtual false, abstract: false, final false
inline void Skip() ;

/// @brief Method System.IDisposable.Dispose, addr 0x27d1664, size 0x70, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method UpdateScopeWithFinishedValue, addr 0x27ce2b0, size 0x18, virtual false, abstract: false, final false
inline void UpdateScopeWithFinishedValue() ;

/// @brief Method ValidateEnd, addr 0x27d1370, size 0xfc, virtual false, abstract: false, final false
inline void ValidateEnd(::Newtonsoft::Json::JsonToken  endToken) ;

constexpr bool const& __cordl_internal_get__CloseInput_k__BackingField() const;

constexpr bool& __cordl_internal_get__CloseInput_k__BackingField() ;

constexpr bool const& __cordl_internal_get__SupportMultipleContent_k__BackingField() const;

constexpr bool& __cordl_internal_get__SupportMultipleContent_k__BackingField() ;

constexpr ::System::Globalization::CultureInfo* const& __cordl_internal_get__culture() const;

constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__culture() ;

constexpr ::Newtonsoft::Json::JsonPosition const& __cordl_internal_get__currentPosition() const;

constexpr ::Newtonsoft::Json::JsonPosition& __cordl_internal_get__currentPosition() ;

constexpr ::Newtonsoft::Json::JsonReader_State const& __cordl_internal_get__currentState() const;

constexpr ::Newtonsoft::Json::JsonReader_State& __cordl_internal_get__currentState() ;

constexpr ::StringW const& __cordl_internal_get__dateFormatString() const;

constexpr ::StringW& __cordl_internal_get__dateFormatString() ;

constexpr ::Newtonsoft::Json::DateParseHandling const& __cordl_internal_get__dateParseHandling() const;

constexpr ::Newtonsoft::Json::DateParseHandling& __cordl_internal_get__dateParseHandling() ;

constexpr ::Newtonsoft::Json::DateTimeZoneHandling const& __cordl_internal_get__dateTimeZoneHandling() const;

constexpr ::Newtonsoft::Json::DateTimeZoneHandling& __cordl_internal_get__dateTimeZoneHandling() ;

constexpr ::Newtonsoft::Json::FloatParseHandling const& __cordl_internal_get__floatParseHandling() const;

constexpr ::Newtonsoft::Json::FloatParseHandling& __cordl_internal_get__floatParseHandling() ;

constexpr bool const& __cordl_internal_get__hasExceededMaxDepth() const;

constexpr bool& __cordl_internal_get__hasExceededMaxDepth() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__maxDepth() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__maxDepth() ;

constexpr char16_t const& __cordl_internal_get__quoteChar() const;

constexpr char16_t& __cordl_internal_get__quoteChar() ;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* const& __cordl_internal_get__stack() const;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*& __cordl_internal_get__stack() ;

constexpr ::Newtonsoft::Json::JsonToken const& __cordl_internal_get__tokenType() const;

constexpr ::Newtonsoft::Json::JsonToken& __cordl_internal_get__tokenType() ;

constexpr ::System::Object* const& __cordl_internal_get__value() const;

constexpr ::System::Object*& __cordl_internal_get__value() ;

constexpr void __cordl_internal_set__CloseInput_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__SupportMultipleContent_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__culture(::System::Globalization::CultureInfo*  value) ;

constexpr void __cordl_internal_set__currentPosition(::Newtonsoft::Json::JsonPosition  value) ;

constexpr void __cordl_internal_set__currentState(::Newtonsoft::Json::JsonReader_State  value) ;

constexpr void __cordl_internal_set__dateFormatString(::StringW  value) ;

constexpr void __cordl_internal_set__dateParseHandling(::Newtonsoft::Json::DateParseHandling  value) ;

constexpr void __cordl_internal_set__dateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling  value) ;

constexpr void __cordl_internal_set__floatParseHandling(::Newtonsoft::Json::FloatParseHandling  value) ;

constexpr void __cordl_internal_set__hasExceededMaxDepth(bool  value) ;

constexpr void __cordl_internal_set__maxDepth(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set__quoteChar(char16_t  value) ;

constexpr void __cordl_internal_set__stack(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*  value) ;

constexpr void __cordl_internal_set__tokenType(::Newtonsoft::Json::JsonToken  value) ;

constexpr void __cordl_internal_set__value(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x27cdf88, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CloseInput, addr 0x27cda88, size 0x8, virtual false, abstract: false, final false
inline bool get_CloseInput() ;

/// @brief Method get_Culture, addr 0x27cde74, size 0x68, virtual false, abstract: false, final false
inline ::System::Globalization::CultureInfo* get_Culture() ;

/// @brief Method get_CurrentState, addr 0x27cda80, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonReader_State get_CurrentState() ;

/// @brief Method get_DateFormatString, addr 0x27cdbe8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DateFormatString() ;

/// @brief Method get_DateParseHandling, addr 0x27cdb18, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::DateParseHandling get_DateParseHandling() ;

/// @brief Method get_DateTimeZoneHandling, addr 0x27cdab0, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling() ;

/// @brief Method get_Depth, addr 0x27cdce0, size 0x7c, virtual true, abstract: false, final false
inline int32_t get_Depth() ;

/// @brief Method get_FloatParseHandling, addr 0x27cdb80, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::FloatParseHandling get_FloatParseHandling() ;

/// @brief Method get_MaxDepth, addr 0x27cdbf8, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<int32_t> get_MaxDepth() ;

/// @brief Method get_Path, addr 0x27cdd5c, size 0x118, virtual true, abstract: false, final false
inline ::StringW get_Path() ;

/// @brief Method get_SupportMultipleContent, addr 0x27cda9c, size 0x8, virtual false, abstract: false, final false
inline bool get_SupportMultipleContent() ;

/// @brief Method get_TokenType, addr 0x27cdcbc, size 0x8, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::JsonToken get_TokenType() ;

/// @brief Method get_Value, addr 0x27cdcc4, size 0x8, virtual true, abstract: false, final false
inline ::System::Object* get_Value() ;

/// @brief Method get_ValueType, addr 0x27cdccc, size 0x14, virtual true, abstract: false, final false
inline ::System::Type* get_ValueType() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_CloseInput, addr 0x27cda90, size 0xc, virtual false, abstract: false, final false
inline void set_CloseInput(bool  value) ;

/// @brief Method set_Culture, addr 0x27cdedc, size 0x8, virtual false, abstract: false, final false
inline void set_Culture(::System::Globalization::CultureInfo*  value) ;

/// @brief Method set_DateFormatString, addr 0x27cdbf0, size 0x8, virtual false, abstract: false, final false
inline void set_DateFormatString(::StringW  value) ;

/// @brief Method set_DateParseHandling, addr 0x27cdb20, size 0x60, virtual false, abstract: false, final false
inline void set_DateParseHandling(::Newtonsoft::Json::DateParseHandling  value) ;

/// @brief Method set_DateTimeZoneHandling, addr 0x27cdab8, size 0x60, virtual false, abstract: false, final false
inline void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling  value) ;

/// @brief Method set_FloatParseHandling, addr 0x27cdb88, size 0x60, virtual false, abstract: false, final false
inline void set_FloatParseHandling(::Newtonsoft::Json::FloatParseHandling  value) ;

/// @brief Method set_MaxDepth, addr 0x27cdc00, size 0xbc, virtual false, abstract: false, final false
inline void set_MaxDepth(::System::Nullable_1<int32_t>  value) ;

/// @brief Method set_SupportMultipleContent, addr 0x27cdaa4, size 0xc, virtual false, abstract: false, final false
inline void set_SupportMultipleContent(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonReader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonReader(JsonReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonReader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonReader(JsonReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9676};

/// @brief Field _tokenType, offset: 0x10, size: 0x4, def value: None
 ::Newtonsoft::Json::JsonToken  ____tokenType;

/// @brief Field _value, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ____value;

/// @brief Field _quoteChar, offset: 0x20, size: 0x2, def value: None
 char16_t  ____quoteChar;

/// @brief Field _currentState, offset: 0x24, size: 0x4, def value: None
 ::Newtonsoft::Json::JsonReader_State  ____currentState;

/// @brief Field _currentPosition, offset: 0x28, size: 0x18, def value: None
 ::Newtonsoft::Json::JsonPosition  ____currentPosition;

/// @brief Field _culture, offset: 0x40, size: 0x8, def value: None
 ::System::Globalization::CultureInfo*  ____culture;

/// @brief Field _dateTimeZoneHandling, offset: 0x48, size: 0x4, def value: None
 ::Newtonsoft::Json::DateTimeZoneHandling  ____dateTimeZoneHandling;

/// @brief Field _maxDepth, offset: 0x4c, size: 0x8, def value: None
 ::System::Nullable_1<int32_t>  ____maxDepth;

/// @brief Field _hasExceededMaxDepth, offset: 0x54, size: 0x1, def value: None
 bool  ____hasExceededMaxDepth;

/// @brief Field _dateParseHandling, offset: 0x58, size: 0x4, def value: None
 ::Newtonsoft::Json::DateParseHandling  ____dateParseHandling;

/// @brief Field _floatParseHandling, offset: 0x5c, size: 0x4, def value: None
 ::Newtonsoft::Json::FloatParseHandling  ____floatParseHandling;

/// @brief Field _dateFormatString, offset: 0x60, size: 0x8, def value: None
 ::StringW  ____dateFormatString;

/// @brief Field _stack, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*  ____stack;

/// @brief Field <CloseInput>k__BackingField, offset: 0x70, size: 0x1, def value: None
 bool  ____CloseInput_k__BackingField;

/// @brief Field <SupportMultipleContent>k__BackingField, offset: 0x71, size: 0x1, def value: None
 bool  ____SupportMultipleContent_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____tokenType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____quoteChar) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____currentState) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____currentPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____culture) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____dateTimeZoneHandling) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____maxDepth) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____hasExceededMaxDepth) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____dateParseHandling) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____floatParseHandling) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____dateFormatString) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____stack) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____CloseInput_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonReader, ____SupportMultipleContent_k__BackingField) == 0x71, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonReader, 0x78>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonReader_State, "Newtonsoft.Json", "JsonReader/State");
NEED_NO_BOX(::Newtonsoft::Json::JsonReader);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonReader*, "Newtonsoft.Json", "JsonReader");
