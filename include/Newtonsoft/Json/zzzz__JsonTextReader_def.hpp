#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonTextReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Utilities/zzzz__StringBuffer_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringReference_def.hpp"
#include "Newtonsoft/Json/zzzz__IJsonLineInfo_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonTextReader)
namespace Newtonsoft::Json {
template<typename T>
class IArrayPool_1;
}
namespace Newtonsoft::Json {
class JsonNameTable;
}
namespace Newtonsoft::Json {
class JsonReaderException;
}
namespace Newtonsoft::Json {
struct ReadType;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::IO {
class TextReader;
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
class Exception;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonTextReader;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonTextReader);
// Dependencies Newtonsoft.Json.IJsonLineInfo, Newtonsoft.Json.JsonReader, Newtonsoft.Json.Utilities.StringBuffer, Newtonsoft.Json.Utilities.StringReference
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonTextReader
class CORDL_TYPE JsonTextReader : public ::Newtonsoft::Json::JsonReader {
public:
// Declarations
 __declspec(property(get=get_LineNumber)) int32_t  LineNumber;

 __declspec(property(get=get_LinePosition)) int32_t  LinePosition;

 __declspec(property(get=get_PropertyNameTable, put=set_PropertyNameTable)) ::Newtonsoft::Json::JsonNameTable*  PropertyNameTable;

/// @brief Field <PropertyNameTable>k__BackingField, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__PropertyNameTable_k__BackingField, put=__cordl_internal_set__PropertyNameTable_k__BackingField)) ::Newtonsoft::Json::JsonNameTable*  _PropertyNameTable_k__BackingField;

/// @brief Field _arrayPool, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__arrayPool, put=__cordl_internal_set__arrayPool)) ::Newtonsoft::Json::IArrayPool_1<char16_t>*  _arrayPool;

/// @brief Field _charPos, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__charPos, put=__cordl_internal_set__charPos)) int32_t  _charPos;

/// @brief Field _chars, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__chars, put=__cordl_internal_set__chars)) ::ArrayW<char16_t,::Array<char16_t>*>  _chars;

/// @brief Field _charsUsed, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__charsUsed, put=__cordl_internal_set__charsUsed)) int32_t  _charsUsed;

/// @brief Field _isEndOfFile, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__isEndOfFile, put=__cordl_internal_set__isEndOfFile)) bool  _isEndOfFile;

/// @brief Field _lineNumber, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__lineNumber, put=__cordl_internal_set__lineNumber)) int32_t  _lineNumber;

/// @brief Field _lineStartPos, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__lineStartPos, put=__cordl_internal_set__lineStartPos)) int32_t  _lineStartPos;

/// @brief Field _reader, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__reader, put=__cordl_internal_set__reader)) ::System::IO::TextReader*  _reader;

/// @brief Field _safeAsync, offset 0x72, size 0x1 
 __declspec(property(get=__cordl_internal_get__safeAsync, put=__cordl_internal_set__safeAsync)) bool  _safeAsync;

/// @brief Field _stringBuffer, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get__stringBuffer, put=__cordl_internal_set__stringBuffer)) ::Newtonsoft::Json::Utilities::StringBuffer  _stringBuffer;

/// @brief Field _stringReference, offset 0xb0, size 0x10 
 __declspec(property(get=__cordl_internal_get__stringReference, put=__cordl_internal_set__stringReference)) ::Newtonsoft::Json::Utilities::StringReference  _stringReference;

/// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
constexpr operator  ::Newtonsoft::Json::IJsonLineInfo*() noexcept;

/// @brief Method BigIntegerParse, addr 0x27da79c, size 0x88, virtual false, abstract: false, final false
static inline ::System::Object* BigIntegerParse(::StringW  number, ::System::Globalization::CultureInfo*  culture) ;

/// @brief Method BlockCopyChars, addr 0x27d55c4, size 0x14, virtual false, abstract: false, final false
static inline void BlockCopyChars(::ArrayW<char16_t,::Array<char16_t>*>  src, int32_t  srcOffset, ::ArrayW<char16_t,::Array<char16_t>*>  dst, int32_t  dstOffset, int32_t  count) ;

/// @brief Method ClearRecentString, addr 0x27d8ce8, size 0xc, virtual false, abstract: false, final false
inline void ClearRecentString() ;

/// @brief Method Close, addr 0x27daf14, size 0x60, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method ConvertUnicode, addr 0x27d8994, size 0x154, virtual false, abstract: false, final false
inline char16_t ConvertUnicode(bool  enoughChars) ;

/// @brief Method CreateUnexpectedCharacterException, addr 0x27d7730, size 0xd0, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonReaderException* CreateUnexpectedCharacterException(char16_t  c) ;

/// @brief Method EatWhitespace, addr 0x27d6364, size 0x114, virtual false, abstract: false, final false
inline void EatWhitespace() ;

/// @brief Method EndComment, addr 0x27da824, size 0x60, virtual false, abstract: false, final false
inline void EndComment(bool  setToken, int32_t  initialPosition, int32_t  endPosition) ;

/// @brief Method EnsureBuffer, addr 0x27d5ac8, size 0x44, virtual false, abstract: false, final false
inline void EnsureBuffer() ;

/// @brief Method EnsureBufferNotEmpty, addr 0x27d4ba0, size 0x54, virtual false, abstract: false, final false
inline void EnsureBufferNotEmpty() ;

/// @brief Method EnsureChars, addr 0x27d580c, size 0x20, virtual false, abstract: false, final false
inline bool EnsureChars(int32_t  relativePosition, bool  append) ;

/// @brief Method FinishReadQuotedNumber, addr 0x27d83ec, size 0x188, virtual false, abstract: false, final false
inline ::System::Object* FinishReadQuotedNumber(::Newtonsoft::Json::ReadType  readType) ;

/// @brief Method FinishReadQuotedStringValue, addr 0x27d79b0, size 0x24c, virtual false, abstract: false, final false
inline ::System::Object* FinishReadQuotedStringValue(::Newtonsoft::Json::ReadType  readType) ;

/// @brief Method FinishReadStringIntoBuffer, addr 0x27d88fc, size 0x98, virtual false, abstract: false, final false
inline void FinishReadStringIntoBuffer(int32_t  charPos, int32_t  initialPosition, int32_t  lastWritePosition) ;

/// @brief Method HandleNull, addr 0x27d75f4, size 0xd0, virtual false, abstract: false, final false
inline void HandleNull() ;

/// @brief Method HasLineInfo, addr 0x27daf74, size 0x8, virtual true, abstract: false, final true
inline bool HasLineInfo() ;

/// @brief Method IsSeparator, addr 0x27da9c0, size 0x158, virtual false, abstract: false, final false
inline bool IsSeparator(char16_t  c) ;

/// @brief Method MatchValue, addr 0x27da8e0, size 0xe0, virtual false, abstract: false, final false
inline bool MatchValue(bool  enoughChars, ::StringW  value) ;

/// @brief Method MatchValue, addr 0x27da884, size 0x5c, virtual false, abstract: false, final false
inline bool MatchValue(::StringW  value) ;

/// @brief Method MatchValueWithTrailingSeparator, addr 0x27d7ce0, size 0xa4, virtual false, abstract: false, final false
inline bool MatchValueWithTrailingSeparator(::StringW  value) ;

static inline ::Newtonsoft::Json::JsonTextReader* New_ctor(::System::IO::TextReader*  reader) ;

/// @brief Method OnNewLine, addr 0x27d4c54, size 0x10, virtual false, abstract: false, final false
inline void OnNewLine(int32_t  pos) ;

/// @brief Method ParseComment, addr 0x27d6478, size 0x28c, virtual false, abstract: false, final false
inline void ParseComment(bool  setToken) ;

/// @brief Method ParseConstructor, addr 0x27d9388, size 0x320, virtual false, abstract: false, final false
inline void ParseConstructor() ;

/// @brief Method ParseFalse, addr 0x27d92b0, size 0xd8, virtual false, abstract: false, final false
inline void ParseFalse() ;

/// @brief Method ParseNull, addr 0x27d87c0, size 0xac, virtual false, abstract: false, final false
inline void ParseNull() ;

/// @brief Method ParseNumber, addr 0x27d7c78, size 0x68, virtual false, abstract: false, final false
inline void ParseNumber(::Newtonsoft::Json::ReadType  readType) ;

/// @brief Method ParseNumberNaN, addr 0x27d7e00, size 0x7c, virtual false, abstract: false, final false
inline ::System::Object* ParseNumberNaN(::Newtonsoft::Json::ReadType  readType) ;

/// @brief Method ParseNumberNaN, addr 0x27dadc0, size 0x154, virtual false, abstract: false, final false
inline ::System::Object* ParseNumberNaN(::Newtonsoft::Json::ReadType  readType, bool  matched) ;

/// @brief Method ParseNumberNegativeInfinity, addr 0x27d7bfc, size 0x7c, virtual false, abstract: false, final false
inline ::System::Object* ParseNumberNegativeInfinity(::Newtonsoft::Json::ReadType  readType) ;

/// @brief Method ParseNumberNegativeInfinity, addr 0x27dab18, size 0x154, virtual false, abstract: false, final false
inline ::System::Object* ParseNumberNegativeInfinity(::Newtonsoft::Json::ReadType  readType, bool  matched) ;

/// @brief Method ParseNumberPositiveInfinity, addr 0x27d7d84, size 0x7c, virtual false, abstract: false, final false
inline ::System::Object* ParseNumberPositiveInfinity(::Newtonsoft::Json::ReadType  readType) ;

/// @brief Method ParseNumberPositiveInfinity, addr 0x27dac6c, size 0x154, virtual false, abstract: false, final false
inline ::System::Object* ParseNumberPositiveInfinity(::Newtonsoft::Json::ReadType  readType, bool  matched) ;

/// @brief Method ParseObject, addr 0x27d5f2c, size 0x190, virtual false, abstract: false, final false
inline bool ParseObject() ;

/// @brief Method ParsePostValue, addr 0x27d60bc, size 0x2a8, virtual false, abstract: false, final false
inline bool ParsePostValue(bool  ignoreComments) ;

/// @brief Method ParseProperty, addr 0x27d8cf4, size 0x224, virtual false, abstract: false, final false
inline bool ParseProperty() ;

/// @brief Method ParseReadNumber, addr 0x27d9754, size 0xfcc, virtual false, abstract: false, final false
inline void ParseReadNumber(::Newtonsoft::Json::ReadType  readType, char16_t  firstChar, int32_t  initialPosition) ;

/// @brief Method ParseReadString, addr 0x27d51cc, size 0x3f8, virtual false, abstract: false, final false
inline void ParseReadString(char16_t  quote, ::Newtonsoft::Json::ReadType  readType) ;

/// @brief Method ParseString, addr 0x27d4c64, size 0x48, virtual false, abstract: false, final false
inline void ParseString(char16_t  quote, ::Newtonsoft::Json::ReadType  readType) ;

/// @brief Method ParseTrue, addr 0x27d91d8, size 0xd8, virtual false, abstract: false, final false
inline void ParseTrue() ;

/// @brief Method ParseUndefined, addr 0x27d96a8, size 0xac, virtual false, abstract: false, final false
inline void ParseUndefined() ;

/// @brief Method ParseUnicode, addr 0x27d886c, size 0x40, virtual false, abstract: false, final false
inline char16_t ParseUnicode() ;

/// @brief Method ParseUnquotedProperty, addr 0x27d8f94, size 0xf4, virtual false, abstract: false, final false
inline void ParseUnquotedProperty() ;

/// @brief Method ParseValue, addr 0x27d5b0c, size 0x420, virtual false, abstract: false, final false
inline bool ParseValue() ;

/// @brief Method PrepareBufferForReadData, addr 0x27d5674, size 0x198, virtual false, abstract: false, final false
inline void PrepareBufferForReadData(bool  append, int32_t  charsRequired) ;

/// @brief Method ProcessCarriageReturn, addr 0x27d7800, size 0x48, virtual false, abstract: false, final false
inline void ProcessCarriageReturn(bool  append) ;

/// @brief Method ProcessLineFeed, addr 0x27d7848, size 0x1c, virtual false, abstract: false, final false
inline void ProcessLineFeed() ;

/// @brief Method ProcessValueComma, addr 0x27d76c4, size 0x6c, virtual false, abstract: false, final false
inline void ProcessValueComma() ;

/// @brief Method Read, addr 0x27d589c, size 0x22c, virtual true, abstract: false, final false
inline bool Read() ;

/// @brief Method ReadAsBoolean, addr 0x27d7e7c, size 0x570, virtual true, abstract: false, final false
inline ::System::Nullable_1<bool> ReadAsBoolean() ;

/// @brief Method ReadAsBytes, addr 0x27d710c, size 0x498, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ReadAsBytes() ;

/// @brief Method ReadAsDateTime, addr 0x27d6b60, size 0x90, virtual true, abstract: false, final false
inline ::System::Nullable_1<::System::DateTime> ReadAsDateTime() ;

/// @brief Method ReadAsDateTimeOffset, addr 0x27d8574, size 0xcc, virtual true, abstract: false, final false
inline ::System::Nullable_1<::System::DateTimeOffset> ReadAsDateTimeOffset() ;

/// @brief Method ReadAsDecimal, addr 0x27d8640, size 0xcc, virtual true, abstract: false, final false
inline ::System::Nullable_1<::System::Decimal> ReadAsDecimal() ;

/// @brief Method ReadAsDouble, addr 0x27d870c, size 0xb4, virtual true, abstract: false, final false
inline ::System::Nullable_1<double_t> ReadAsDouble() ;

/// @brief Method ReadAsInt32, addr 0x27d6704, size 0x90, virtual true, abstract: false, final false
inline ::System::Nullable_1<int32_t> ReadAsInt32() ;

/// @brief Method ReadAsString, addr 0x27d70a8, size 0x64, virtual true, abstract: false, final false
inline ::StringW ReadAsString() ;

/// @brief Method ReadChars, addr 0x27d582c, size 0x70, virtual false, abstract: false, final false
inline bool ReadChars(int32_t  relativePosition, bool  append) ;

/// @brief Method ReadData, addr 0x27d55d8, size 0xc, virtual false, abstract: false, final false
inline int32_t ReadData(bool  append) ;

/// @brief Method ReadData, addr 0x27d55e4, size 0x90, virtual false, abstract: false, final false
inline int32_t ReadData(bool  append, int32_t  charsRequired) ;

/// @brief Method ReadFinished, addr 0x27d7864, size 0x14c, virtual false, abstract: false, final false
inline void ReadFinished() ;

/// @brief Method ReadNullChar, addr 0x27d75a4, size 0x50, virtual false, abstract: false, final false
inline bool ReadNullChar() ;

/// @brief Method ReadNumberCharIntoBuffer, addr 0x27d8b6c, size 0x17c, virtual false, abstract: false, final false
inline bool ReadNumberCharIntoBuffer(char16_t  currentChar, int32_t  charPos) ;

/// @brief Method ReadNumberIntoBuffer, addr 0x27d8ae8, size 0x84, virtual false, abstract: false, final false
inline void ReadNumberIntoBuffer() ;

/// @brief Method ReadNumberValue, addr 0x27d6794, size 0x3cc, virtual false, abstract: false, final false
inline ::System::Object* ReadNumberValue(::Newtonsoft::Json::ReadType  readType) ;

/// @brief Method ReadStringIntoBuffer, addr 0x27d4d60, size 0x46c, virtual false, abstract: false, final false
inline void ReadStringIntoBuffer(char16_t  quote) ;

/// @brief Method ReadStringValue, addr 0x27d6bf0, size 0x4b8, virtual false, abstract: false, final false
inline ::System::Object* ReadStringValue(::Newtonsoft::Json::ReadType  readType) ;

/// @brief Method ReadUnquotedPropertyReportIfDone, addr 0x27d9088, size 0x150, virtual false, abstract: false, final false
inline bool ReadUnquotedPropertyReportIfDone(char16_t  currentChar, int32_t  initialPosition) ;

/// @brief Method SetNewLine, addr 0x27d4bf4, size 0x60, virtual false, abstract: false, final false
inline void SetNewLine(bool  hasNextChar) ;

/// @brief Method ShiftBufferIfNeeded, addr 0x27d4cac, size 0xb4, virtual false, abstract: false, final false
inline void ShiftBufferIfNeeded() ;

/// @brief Method ThrowReaderError, addr 0x27da720, size 0x7c, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonReaderException* ThrowReaderError(::StringW  message, ::System::Exception*  ex) ;

/// @brief Method ValidIdentifierChar, addr 0x27d8f18, size 0x7c, virtual false, abstract: false, final false
inline bool ValidIdentifierChar(char16_t  value) ;

/// @brief Method WriteCharToBuffer, addr 0x27d88ac, size 0x50, virtual false, abstract: false, final false
inline void WriteCharToBuffer(char16_t  writeChar, int32_t  lastWritePosition, int32_t  writeToPosition) ;

constexpr ::Newtonsoft::Json::JsonNameTable* const& __cordl_internal_get__PropertyNameTable_k__BackingField() const;

constexpr ::Newtonsoft::Json::JsonNameTable*& __cordl_internal_get__PropertyNameTable_k__BackingField() ;

constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>* const& __cordl_internal_get__arrayPool() const;

constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>*& __cordl_internal_get__arrayPool() ;

constexpr int32_t const& __cordl_internal_get__charPos() const;

constexpr int32_t& __cordl_internal_get__charPos() ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __cordl_internal_get__chars() const;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __cordl_internal_get__chars() ;

constexpr int32_t const& __cordl_internal_get__charsUsed() const;

constexpr int32_t& __cordl_internal_get__charsUsed() ;

constexpr bool const& __cordl_internal_get__isEndOfFile() const;

constexpr bool& __cordl_internal_get__isEndOfFile() ;

constexpr int32_t const& __cordl_internal_get__lineNumber() const;

constexpr int32_t& __cordl_internal_get__lineNumber() ;

constexpr int32_t const& __cordl_internal_get__lineStartPos() const;

constexpr int32_t& __cordl_internal_get__lineStartPos() ;

constexpr ::System::IO::TextReader* const& __cordl_internal_get__reader() const;

constexpr ::System::IO::TextReader*& __cordl_internal_get__reader() ;

constexpr bool const& __cordl_internal_get__safeAsync() const;

constexpr bool& __cordl_internal_get__safeAsync() ;

constexpr ::Newtonsoft::Json::Utilities::StringBuffer const& __cordl_internal_get__stringBuffer() const;

constexpr ::Newtonsoft::Json::Utilities::StringBuffer& __cordl_internal_get__stringBuffer() ;

constexpr ::Newtonsoft::Json::Utilities::StringReference const& __cordl_internal_get__stringReference() const;

constexpr ::Newtonsoft::Json::Utilities::StringReference& __cordl_internal_get__stringReference() ;

constexpr void __cordl_internal_set__PropertyNameTable_k__BackingField(::Newtonsoft::Json::JsonNameTable*  value) ;

constexpr void __cordl_internal_set__arrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t>*  value) ;

constexpr void __cordl_internal_set__charPos(int32_t  value) ;

constexpr void __cordl_internal_set__chars(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr void __cordl_internal_set__charsUsed(int32_t  value) ;

constexpr void __cordl_internal_set__isEndOfFile(bool  value) ;

constexpr void __cordl_internal_set__lineNumber(int32_t  value) ;

constexpr void __cordl_internal_set__lineStartPos(int32_t  value) ;

constexpr void __cordl_internal_set__reader(::System::IO::TextReader*  value) ;

constexpr void __cordl_internal_set__safeAsync(bool  value) ;

constexpr void __cordl_internal_set__stringBuffer(::Newtonsoft::Json::Utilities::StringBuffer  value) ;

constexpr void __cordl_internal_set__stringReference(::Newtonsoft::Json::Utilities::StringReference  value) ;

/// @brief Method .ctor, addr 0x27d4a84, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::IO::TextReader*  reader) ;

/// @brief Method get_LineNumber, addr 0x27daf7c, size 0x48, virtual true, abstract: false, final true
inline int32_t get_LineNumber() ;

/// @brief Method get_LinePosition, addr 0x27dafc4, size 0xc, virtual true, abstract: false, final true
inline int32_t get_LinePosition() ;

/// @brief Method get_PropertyNameTable, addr 0x27d4b90, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonNameTable* get_PropertyNameTable() ;

/// @brief Convert to "::Newtonsoft::Json::IJsonLineInfo"
constexpr ::Newtonsoft::Json::IJsonLineInfo* i___Newtonsoft__Json__IJsonLineInfo() noexcept;

/// @brief Method set_PropertyNameTable, addr 0x27d4b98, size 0x8, virtual false, abstract: false, final false
inline void set_PropertyNameTable(::Newtonsoft::Json::JsonNameTable*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonTextReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonTextReader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonTextReader(JsonTextReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonTextReader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonTextReader(JsonTextReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9682};

/// @brief Field _safeAsync, offset: 0x72, size: 0x1, def value: None
 bool  ____safeAsync;

/// @brief Field _reader, offset: 0x78, size: 0x8, def value: None
 ::System::IO::TextReader*  ____reader;

/// @brief Field _chars, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<char16_t,::Array<char16_t>*>  ____chars;

/// @brief Field _charsUsed, offset: 0x88, size: 0x4, def value: None
 int32_t  ____charsUsed;

/// @brief Field _charPos, offset: 0x8c, size: 0x4, def value: None
 int32_t  ____charPos;

/// @brief Field _lineStartPos, offset: 0x90, size: 0x4, def value: None
 int32_t  ____lineStartPos;

/// @brief Field _lineNumber, offset: 0x94, size: 0x4, def value: None
 int32_t  ____lineNumber;

/// @brief Field _isEndOfFile, offset: 0x98, size: 0x1, def value: None
 bool  ____isEndOfFile;

/// @brief Field _stringBuffer, offset: 0xa0, size: 0x10, def value: None
 ::Newtonsoft::Json::Utilities::StringBuffer  ____stringBuffer;

/// @brief Field _stringReference, offset: 0xb0, size: 0x10, def value: None
 ::Newtonsoft::Json::Utilities::StringReference  ____stringReference;

/// @brief Field _arrayPool, offset: 0xc0, size: 0x8, def value: None
 ::Newtonsoft::Json::IArrayPool_1<char16_t>*  ____arrayPool;

/// @brief Field <PropertyNameTable>k__BackingField, offset: 0xc8, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonNameTable*  ____PropertyNameTable_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____safeAsync) == 0x72, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____reader) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____chars) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____charsUsed) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____charPos) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____lineStartPos) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____lineNumber) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____isEndOfFile) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____stringBuffer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____stringReference) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____arrayPool) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____PropertyNameTable_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader, 0xd0>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonTextReader);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader*, "Newtonsoft.Json", "JsonTextReader");
