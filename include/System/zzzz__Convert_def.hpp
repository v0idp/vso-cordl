#pragma once
// IWYU pragma private; include "System/Convert.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Convert)
namespace System {
struct Base64FormattingOptions;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class IConvertible;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class Convert;
}
// Write type traits
MARK_REF_PTR_T(::System::Convert);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Convert
class CORDL_TYPE Convert : public ::System::Object {
public:
// Declarations
/// @brief Field ConvertTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ConvertTypes, put=setStaticF_ConvertTypes)) ::ArrayW<::System::Type*,::Array<::System::Type*>*>  ConvertTypes;

/// @brief Field DBNull, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DBNull, put=setStaticF_DBNull)) ::System::Object*  DBNull;

/// @brief Field EnumType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EnumType, put=setStaticF_EnumType)) ::System::Type*  EnumType;

/// @brief Field base64Table, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_base64Table, put=setStaticF_base64Table)) ::ArrayW<char16_t,::Array<char16_t>*>  base64Table;

/// @brief Field s_decodingMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_decodingMap, put=setStaticF_s_decodingMap)) ::ArrayW<int8_t,::Array<int8_t>*>  s_decodingMap;

/// @brief Method ChangeType, addr 0x26d7f60, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  conversionType) ;

/// @brief Method ChangeType, addr 0x26d7ffc, size 0xca8, virtual false, abstract: false, final false
static inline ::System::Object* ChangeType(::System::Object*  value, ::System::Type*  conversionType, ::System::IFormatProvider*  provider) ;

/// @brief Method ChangeType, addr 0x26d7670, size 0x8f0, virtual false, abstract: false, final false
static inline ::System::Object* ChangeType(::System::Object*  value, ::System::TypeCode  typeCode, ::System::IFormatProvider*  provider) ;

/// @brief Method ConvertToBase64Array, addr 0x26dde54, size 0x244, virtual false, abstract: false, final false
static inline int32_t ConvertToBase64Array(::cordl_internals::Ptr<char16_t>  outChars, ::cordl_internals::Ptr<uint8_t>  inData, int32_t  offset, int32_t  length, bool  insertLineBreaks) ;

/// @brief Method CopyToTempBufferWithoutWhiteSpace, addr 0x26deb3c, size 0x124, virtual false, abstract: false, final false
static inline void CopyToTempBufferWithoutWhiteSpace(::System::ReadOnlySpan_1<char16_t>  chars, ::System::Span_1<char16_t>  tempBuffer, ::ByRef<int32_t>  consumed, ::ByRef<int32_t>  charsWritten) ;

/// @brief Method Decode, addr 0x26d7544, size 0x50, virtual false, abstract: false, final false
static inline int32_t Decode(::ByRef<char16_t>  encodedChars, ::ByRef<int8_t>  decodingMap) ;

/// @brief Method DefaultToType, addr 0x26d3548, size 0xe28, virtual false, abstract: false, final false
static inline ::System::Object* DefaultToType(::System::IConvertible*  value, ::System::Type*  targetType, ::System::IFormatProvider*  provider) ;

/// @brief Method FromBase64CharArray, addr 0x26dec8c, size 0x1f0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FromBase64CharArray(::ArrayW<char16_t,::Array<char16_t>*>  inArray, int32_t  offset, int32_t  length) ;

/// @brief Method FromBase64CharPtr, addr 0x26de4e0, size 0x188, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FromBase64CharPtr(::cordl_internals::Ptr<char16_t>  inputPtr, int32_t  inputLength) ;

/// @brief Method FromBase64String, addr 0x26de42c, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FromBase64String(::StringW  s) ;

/// @brief Method FromBase64_ComputeResultLength, addr 0x26dee7c, size 0xbc, virtual false, abstract: false, final false
static inline int32_t FromBase64_ComputeResultLength(::cordl_internals::Ptr<char16_t>  inputPtr, int32_t  inputLength) ;

/// @brief Method GetTypeCode, addr 0x26d75ac, size 0xc4, virtual false, abstract: false, final false
static inline ::System::TypeCode GetTypeCode(::System::Object*  value) ;

/// @brief Method IsSpace, addr 0x26dec60, size 0x2c, virtual false, abstract: false, final false
static inline bool IsSpace(char16_t  c) ;

/// @brief Method ThrowByteOverflowException, addr 0x26d8cf0, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowByteOverflowException() ;

/// @brief Method ThrowCharOverflowException, addr 0x26d8ca4, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowCharOverflowException() ;

/// @brief Method ThrowInt16OverflowException, addr 0x26d8d88, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInt16OverflowException() ;

/// @brief Method ThrowInt32OverflowException, addr 0x26d8e20, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInt32OverflowException() ;

/// @brief Method ThrowInt64OverflowException, addr 0x26d8eb8, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInt64OverflowException() ;

/// @brief Method ThrowSByteOverflowException, addr 0x26d8d3c, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowSByteOverflowException() ;

/// @brief Method ThrowUInt16OverflowException, addr 0x26d8dd4, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowUInt16OverflowException() ;

/// @brief Method ThrowUInt32OverflowException, addr 0x26d8e6c, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowUInt32OverflowException() ;

/// @brief Method ThrowUInt64OverflowException, addr 0x26d8f04, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowUInt64OverflowException() ;

/// @brief Method ToBase64CharArray, addr 0x26de098, size 0x88, virtual false, abstract: false, final false
static inline int32_t ToBase64CharArray(::ArrayW<uint8_t,::Array<uint8_t>*>  inArray, int32_t  offsetIn, int32_t  length, ::ArrayW<char16_t,::Array<char16_t>*>  outArray, int32_t  offsetOut) ;

/// @brief Method ToBase64CharArray, addr 0x26de120, size 0x30c, virtual false, abstract: false, final false
static inline int32_t ToBase64CharArray(::ArrayW<uint8_t,::Array<uint8_t>*>  inArray, int32_t  offsetIn, int32_t  length, ::ArrayW<char16_t,::Array<char16_t>*>  outArray, int32_t  offsetOut, ::System::Base64FormattingOptions  options) ;

/// @brief Method ToBase64String, addr 0x26dd9e8, size 0x1b0, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::System::ReadOnlySpan_1<uint8_t>  bytes, ::System::Base64FormattingOptions  options) ;

/// @brief Method ToBase64String, addr 0x26dd934, size 0xb4, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::ArrayW<uint8_t,::Array<uint8_t>*>  inArray) ;

/// @brief Method ToBase64String, addr 0x26ddb98, size 0x70, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::ArrayW<uint8_t,::Array<uint8_t>*>  inArray, int32_t  offset, int32_t  length) ;

/// @brief Method ToBase64String, addr 0x26ddc08, size 0x19c, virtual false, abstract: false, final false
static inline ::StringW ToBase64String(::ArrayW<uint8_t,::Array<uint8_t>*>  inArray, int32_t  offset, int32_t  length, ::System::Base64FormattingOptions  options) ;

/// @brief Method ToBase64_CalculateAndValidateOutputLength, addr 0x26ddda4, size 0xb0, virtual false, abstract: false, final false
static inline int32_t ToBase64_CalculateAndValidateOutputLength(int32_t  inputLength, bool  insertLineBreaks) ;

/// @brief Method ToBoolean, addr 0x26d919c, size 0x68, virtual false, abstract: false, final false
static inline bool ToBoolean(::StringW  value) ;

/// @brief Method ToBoolean, addr 0x26d9204, size 0x68, virtual false, abstract: false, final false
static inline bool ToBoolean(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToBoolean, addr 0x26d9284, size 0x74, virtual false, abstract: false, final false
static inline bool ToBoolean(::System::Decimal  value) ;

/// @brief Method ToBoolean, addr 0x26d8f50, size 0xf4, virtual false, abstract: false, final false
static inline bool ToBoolean(::System::Object*  value) ;

/// @brief Method ToBoolean, addr 0x26d9044, size 0x104, virtual false, abstract: false, final false
static inline bool ToBoolean(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToBoolean, addr 0x26d9278, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(double_t  value) ;

/// @brief Method ToBoolean, addr 0x26d926c, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(float_t  value) ;

/// @brief Method ToBoolean, addr 0x26d9154, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(int16_t  value) ;

/// @brief Method ToBoolean, addr 0x26d916c, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(int32_t  value) ;

/// @brief Method ToBoolean, addr 0x26d9184, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(int64_t  value) ;

/// @brief Method ToBoolean, addr 0x26d9148, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(int8_t  value) ;

/// @brief Method ToBoolean, addr 0x26d9160, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(uint16_t  value) ;

/// @brief Method ToBoolean, addr 0x26d9178, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(uint32_t  value) ;

/// @brief Method ToBoolean, addr 0x26d9190, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(uint64_t  value) ;

/// @brief Method ToBoolean, addr 0x26d4d20, size 0xc, virtual false, abstract: false, final false
static inline bool ToBoolean(uint8_t  value) ;

/// @brief Method ToByte, addr 0x26da3d4, size 0x74, virtual false, abstract: false, final false
static inline uint8_t ToByte(::StringW  value) ;

/// @brief Method ToByte, addr 0x26dd124, size 0x108, virtual false, abstract: false, final false
static inline uint8_t ToByte(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToByte, addr 0x26da448, size 0x14, virtual false, abstract: false, final false
static inline uint8_t ToByte(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToByte, addr 0x26da360, size 0x74, virtual false, abstract: false, final false
static inline uint8_t ToByte(::System::Decimal  value) ;

/// @brief Method ToByte, addr 0x26d9e40, size 0xf4, virtual false, abstract: false, final false
static inline uint8_t ToByte(::System::Object*  value) ;

/// @brief Method ToByte, addr 0x26d9f34, size 0x104, virtual false, abstract: false, final false
static inline uint8_t ToByte(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToByte, addr 0x26d3010, size 0x8, virtual false, abstract: false, final false
static inline uint8_t ToByte(bool  value) ;

/// @brief Method ToByte, addr 0x26d5f4c, size 0x5c, virtual false, abstract: false, final false
static inline uint8_t ToByte(char16_t  value) ;

/// @brief Method ToByte, addr 0x26da300, size 0x60, virtual false, abstract: false, final false
static inline uint8_t ToByte(double_t  value) ;

/// @brief Method ToByte, addr 0x26da2a4, size 0x5c, virtual false, abstract: false, final false
static inline uint8_t ToByte(float_t  value) ;

/// @brief Method ToByte, addr 0x26da08c, size 0x5c, virtual false, abstract: false, final false
static inline uint8_t ToByte(int16_t  value) ;

/// @brief Method ToByte, addr 0x26da144, size 0x58, virtual false, abstract: false, final false
static inline uint8_t ToByte(int32_t  value) ;

/// @brief Method ToByte, addr 0x26da1f4, size 0x58, virtual false, abstract: false, final false
static inline uint8_t ToByte(int64_t  value) ;

/// @brief Method ToByte, addr 0x26da038, size 0x54, virtual false, abstract: false, final false
static inline uint8_t ToByte(int8_t  value) ;

/// @brief Method ToByte, addr 0x26da0e8, size 0x5c, virtual false, abstract: false, final false
static inline uint8_t ToByte(uint16_t  value) ;

/// @brief Method ToByte, addr 0x26da19c, size 0x58, virtual false, abstract: false, final false
static inline uint8_t ToByte(uint32_t  value) ;

/// @brief Method ToByte, addr 0x26da24c, size 0x58, virtual false, abstract: false, final false
static inline uint8_t ToByte(uint64_t  value) ;

/// @brief Method ToChar, addr 0x26d96fc, size 0x54, virtual false, abstract: false, final false
static inline char16_t ToChar(::StringW  value) ;

/// @brief Method ToChar, addr 0x26d9750, size 0x9c, virtual false, abstract: false, final false
static inline char16_t ToChar(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToChar, addr 0x26d92f8, size 0xf4, virtual false, abstract: false, final false
static inline char16_t ToChar(::System::Object*  value) ;

/// @brief Method ToChar, addr 0x26d93ec, size 0x104, virtual false, abstract: false, final false
static inline char16_t ToChar(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToChar, addr 0x26d9544, size 0x54, virtual false, abstract: false, final false
static inline char16_t ToChar(int16_t  value) ;

/// @brief Method ToChar, addr 0x26d959c, size 0x58, virtual false, abstract: false, final false
static inline char16_t ToChar(int32_t  value) ;

/// @brief Method ToChar, addr 0x26d964c, size 0x58, virtual false, abstract: false, final false
static inline char16_t ToChar(int64_t  value) ;

/// @brief Method ToChar, addr 0x26d94f0, size 0x54, virtual false, abstract: false, final false
static inline char16_t ToChar(int8_t  value) ;

/// @brief Method ToChar, addr 0x26d9598, size 0x4, virtual false, abstract: false, final false
static inline char16_t ToChar(uint16_t  value) ;

/// @brief Method ToChar, addr 0x26d95f4, size 0x58, virtual false, abstract: false, final false
static inline char16_t ToChar(uint32_t  value) ;

/// @brief Method ToChar, addr 0x26d96a4, size 0x58, virtual false, abstract: false, final false
static inline char16_t ToChar(uint64_t  value) ;

/// @brief Method ToChar, addr 0x26d4d84, size 0x8, virtual false, abstract: false, final false
static inline char16_t ToChar(uint8_t  value) ;

/// @brief Method ToDateTime, addr 0x26dce80, size 0x90, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDateTime, addr 0x26dcd50, size 0x130, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDecimal, addr 0x26dccc4, size 0x88, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDecimal, addr 0x26dcd4c, size 0x4, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(::System::Decimal  value) ;

/// @brief Method ToDecimal, addr 0x26dc874, size 0x128, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDecimal, addr 0x26d33bc, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(bool  value) ;

/// @brief Method ToDecimal, addr 0x26dcc64, size 0x60, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(double_t  value) ;

/// @brief Method ToDecimal, addr 0x26dcc04, size 0x60, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(float_t  value) ;

/// @brief Method ToDecimal, addr 0x26dc9f4, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int16_t  value) ;

/// @brief Method ToDecimal, addr 0x26dcaa4, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int32_t  value) ;

/// @brief Method ToDecimal, addr 0x26dcb54, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int64_t  value) ;

/// @brief Method ToDecimal, addr 0x26dc99c, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(int8_t  value) ;

/// @brief Method ToDecimal, addr 0x26dca4c, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint16_t  value) ;

/// @brief Method ToDecimal, addr 0x26dcafc, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint32_t  value) ;

/// @brief Method ToDecimal, addr 0x26dcbac, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint64_t  value) ;

/// @brief Method ToDecimal, addr 0x26d51a0, size 0x58, virtual false, abstract: false, final false
static inline ::System::Decimal ToDecimal(uint8_t  value) ;

/// @brief Method ToDouble, addr 0x26dc858, size 0x1c, virtual false, abstract: false, final false
static inline double_t ToDouble(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDouble, addr 0x26dc7f0, size 0x68, virtual false, abstract: false, final false
static inline double_t ToDouble(::System::Decimal  value) ;

/// @brief Method ToDouble, addr 0x26dc5ac, size 0xf4, virtual false, abstract: false, final false
static inline double_t ToDouble(::System::Object*  value) ;

/// @brief Method ToDouble, addr 0x26dc6a0, size 0x104, virtual false, abstract: false, final false
static inline double_t ToDouble(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToDouble, addr 0x26d334c, size 0x14, virtual false, abstract: false, final false
static inline double_t ToDouble(bool  value) ;

/// @brief Method ToDouble, addr 0x26dc7e8, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(float_t  value) ;

/// @brief Method ToDouble, addr 0x26dc7b0, size 0xc, virtual false, abstract: false, final false
static inline double_t ToDouble(int16_t  value) ;

/// @brief Method ToDouble, addr 0x26dc7c8, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(int32_t  value) ;

/// @brief Method ToDouble, addr 0x26dc7d8, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(int64_t  value) ;

/// @brief Method ToDouble, addr 0x26dc7a4, size 0xc, virtual false, abstract: false, final false
static inline double_t ToDouble(int8_t  value) ;

/// @brief Method ToDouble, addr 0x26dc7bc, size 0xc, virtual false, abstract: false, final false
static inline double_t ToDouble(uint16_t  value) ;

/// @brief Method ToDouble, addr 0x26dc7d0, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(uint32_t  value) ;

/// @brief Method ToDouble, addr 0x26dc7e0, size 0x8, virtual false, abstract: false, final false
static inline double_t ToDouble(uint64_t  value) ;

/// @brief Method ToDouble, addr 0x26d513c, size 0xc, virtual false, abstract: false, final false
static inline double_t ToDouble(uint8_t  value) ;

/// @brief Method ToInt16, addr 0x26dd344, size 0x118, virtual false, abstract: false, final false
static inline int16_t ToInt16(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToInt16, addr 0x26da940, size 0x18, virtual false, abstract: false, final false
static inline int16_t ToInt16(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt16, addr 0x26da8cc, size 0x74, virtual false, abstract: false, final false
static inline int16_t ToInt16(::System::Decimal  value) ;

/// @brief Method ToInt16, addr 0x26da45c, size 0xf4, virtual false, abstract: false, final false
static inline int16_t ToInt16(::System::Object*  value) ;

/// @brief Method ToInt16, addr 0x26da550, size 0x104, virtual false, abstract: false, final false
static inline int16_t ToInt16(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt16, addr 0x26d3074, size 0x8, virtual false, abstract: false, final false
static inline int16_t ToInt16(bool  value) ;

/// @brief Method ToInt16, addr 0x26d6000, size 0x54, virtual false, abstract: false, final false
static inline int16_t ToInt16(char16_t  value) ;

/// @brief Method ToInt16, addr 0x26da86c, size 0x60, virtual false, abstract: false, final false
static inline int16_t ToInt16(double_t  value) ;

/// @brief Method ToInt16, addr 0x26da810, size 0x5c, virtual false, abstract: false, final false
static inline int16_t ToInt16(float_t  value) ;

/// @brief Method ToInt16, addr 0x26da6b0, size 0x58, virtual false, abstract: false, final false
static inline int16_t ToInt16(int32_t  value) ;

/// @brief Method ToInt16, addr 0x26da760, size 0x58, virtual false, abstract: false, final false
static inline int16_t ToInt16(int64_t  value) ;

/// @brief Method ToInt16, addr 0x26da654, size 0x8, virtual false, abstract: false, final false
static inline int16_t ToInt16(int8_t  value) ;

/// @brief Method ToInt16, addr 0x26da65c, size 0x54, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint16_t  value) ;

/// @brief Method ToInt16, addr 0x26da708, size 0x58, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint32_t  value) ;

/// @brief Method ToInt16, addr 0x26da7b8, size 0x58, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint64_t  value) ;

/// @brief Method ToInt16, addr 0x26d4e98, size 0x8, virtual false, abstract: false, final false
static inline int16_t ToInt16(uint8_t  value) ;

/// @brief Method ToInt32, addr 0x26db27c, size 0x78, virtual false, abstract: false, final false
static inline int32_t ToInt32(::StringW  value) ;

/// @brief Method ToInt32, addr 0x26dd564, size 0xd4, virtual false, abstract: false, final false
static inline int32_t ToInt32(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToInt32, addr 0x26db2f4, size 0x18, virtual false, abstract: false, final false
static inline int32_t ToInt32(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt32, addr 0x26db208, size 0x74, virtual false, abstract: false, final false
static inline int32_t ToInt32(::System::Decimal  value) ;

/// @brief Method ToInt32, addr 0x26daea0, size 0xf4, virtual false, abstract: false, final false
static inline int32_t ToInt32(::System::Object*  value) ;

/// @brief Method ToInt32, addr 0x26daf94, size 0x104, virtual false, abstract: false, final false
static inline int32_t ToInt32(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt32, addr 0x26d313c, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(bool  value) ;

/// @brief Method ToInt32, addr 0x26d6108, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(char16_t  value) ;

/// @brief Method ToInt32, addr 0x26d9cbc, size 0x100, virtual false, abstract: false, final false
static inline int32_t ToInt32(double_t  value) ;

/// @brief Method ToInt32, addr 0x26db1ac, size 0x5c, virtual false, abstract: false, final false
static inline int32_t ToInt32(float_t  value) ;

/// @brief Method ToInt32, addr 0x26db098, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(int16_t  value) ;

/// @brief Method ToInt32, addr 0x26db0fc, size 0x58, virtual false, abstract: false, final false
static inline int32_t ToInt32(int64_t  value) ;

/// @brief Method ToInt32, addr 0x26db0a0, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint16_t  value) ;

/// @brief Method ToInt32, addr 0x26db0a8, size 0x54, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint32_t  value) ;

/// @brief Method ToInt32, addr 0x26db154, size 0x58, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint64_t  value) ;

/// @brief Method ToInt32, addr 0x26d4f58, size 0x8, virtual false, abstract: false, final false
static inline int32_t ToInt32(uint8_t  value) ;

/// @brief Method ToInt64, addr 0x26dbc9c, size 0x78, virtual false, abstract: false, final false
static inline int64_t ToInt64(::StringW  value) ;

/// @brief Method ToInt64, addr 0x26dd70c, size 0xd4, virtual false, abstract: false, final false
static inline int64_t ToInt64(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToInt64, addr 0x26dbd14, size 0x18, virtual false, abstract: false, final false
static inline int64_t ToInt64(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt64, addr 0x26dbc28, size 0x74, virtual false, abstract: false, final false
static inline int64_t ToInt64(::System::Decimal  value) ;

/// @brief Method ToInt64, addr 0x26db848, size 0xf4, virtual false, abstract: false, final false
static inline int64_t ToInt64(::System::Object*  value) ;

/// @brief Method ToInt64, addr 0x26db93c, size 0x104, virtual false, abstract: false, final false
static inline int64_t ToInt64(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToInt64, addr 0x26d3204, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(bool  value) ;

/// @brief Method ToInt64, addr 0x26d61c8, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(char16_t  value) ;

/// @brief Method ToInt64, addr 0x26dbb18, size 0x110, virtual false, abstract: false, final false
static inline int64_t ToInt64(double_t  value) ;

/// @brief Method ToInt64, addr 0x26dbabc, size 0x5c, virtual false, abstract: false, final false
static inline int64_t ToInt64(float_t  value) ;

/// @brief Method ToInt64, addr 0x26dba48, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(int16_t  value) ;

/// @brief Method ToInt64, addr 0x26dba58, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(int32_t  value) ;

/// @brief Method ToInt64, addr 0x26dba40, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(int8_t  value) ;

/// @brief Method ToInt64, addr 0x26dba50, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint16_t  value) ;

/// @brief Method ToInt64, addr 0x26dba60, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint32_t  value) ;

/// @brief Method ToInt64, addr 0x26dba68, size 0x54, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint64_t  value) ;

/// @brief Method ToInt64, addr 0x26d5018, size 0x8, virtual false, abstract: false, final false
static inline int64_t ToInt64(uint8_t  value) ;

/// @brief Method ToSByte, addr 0x26dd22c, size 0x118, virtual false, abstract: false, final false
static inline int8_t ToSByte(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToSByte, addr 0x26d9e30, size 0x10, virtual false, abstract: false, final false
static inline int8_t ToSByte(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToSByte, addr 0x26d9dbc, size 0x74, virtual false, abstract: false, final false
static inline int8_t ToSByte(::System::Decimal  value) ;

/// @brief Method ToSByte, addr 0x26d97ec, size 0xf4, virtual false, abstract: false, final false
static inline int8_t ToSByte(::System::Object*  value) ;

/// @brief Method ToSByte, addr 0x26d98e0, size 0x104, virtual false, abstract: false, final false
static inline int8_t ToSByte(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToSByte, addr 0x26d2fac, size 0x8, virtual false, abstract: false, final false
static inline int8_t ToSByte(bool  value) ;

/// @brief Method ToSByte, addr 0x26d5e98, size 0x5c, virtual false, abstract: false, final false
static inline int8_t ToSByte(char16_t  value) ;

/// @brief Method ToSByte, addr 0x26d9c5c, size 0x60, virtual false, abstract: false, final false
static inline int8_t ToSByte(double_t  value) ;

/// @brief Method ToSByte, addr 0x26d9c00, size 0x5c, virtual false, abstract: false, final false
static inline int8_t ToSByte(float_t  value) ;

/// @brief Method ToSByte, addr 0x26d99e4, size 0x60, virtual false, abstract: false, final false
static inline int8_t ToSByte(int16_t  value) ;

/// @brief Method ToSByte, addr 0x26d9aa0, size 0x58, virtual false, abstract: false, final false
static inline int8_t ToSByte(int32_t  value) ;

/// @brief Method ToSByte, addr 0x26d9b50, size 0x58, virtual false, abstract: false, final false
static inline int8_t ToSByte(int64_t  value) ;

/// @brief Method ToSByte, addr 0x26d9a44, size 0x5c, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint16_t  value) ;

/// @brief Method ToSByte, addr 0x26d9af8, size 0x58, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint32_t  value) ;

/// @brief Method ToSByte, addr 0x26d9ba8, size 0x58, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint64_t  value) ;

/// @brief Method ToSByte, addr 0x26d4de4, size 0x54, virtual false, abstract: false, final false
static inline int8_t ToSByte(uint8_t  value) ;

/// @brief Method ToSingle, addr 0x26dc518, size 0x78, virtual false, abstract: false, final false
static inline float_t ToSingle(::StringW  value) ;

/// @brief Method ToSingle, addr 0x26dc590, size 0x1c, virtual false, abstract: false, final false
static inline float_t ToSingle(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToSingle, addr 0x26dc4b0, size 0x68, virtual false, abstract: false, final false
static inline float_t ToSingle(::System::Decimal  value) ;

/// @brief Method ToSingle, addr 0x26dc268, size 0xf4, virtual false, abstract: false, final false
static inline float_t ToSingle(::System::Object*  value) ;

/// @brief Method ToSingle, addr 0x26dc35c, size 0x104, virtual false, abstract: false, final false
static inline float_t ToSingle(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToSingle, addr 0x26d32d4, size 0x14, virtual false, abstract: false, final false
static inline float_t ToSingle(bool  value) ;

/// @brief Method ToSingle, addr 0x26dc4a8, size 0x8, virtual false, abstract: false, final false
static inline float_t ToSingle(double_t  value) ;

/// @brief Method ToSingle, addr 0x26dc46c, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(int16_t  value) ;

/// @brief Method ToSingle, addr 0x26dc484, size 0x8, virtual false, abstract: false, final false
static inline float_t ToSingle(int32_t  value) ;

/// @brief Method ToSingle, addr 0x26dc494, size 0x8, virtual false, abstract: false, final false
static inline float_t ToSingle(int64_t  value) ;

/// @brief Method ToSingle, addr 0x26dc460, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(int8_t  value) ;

/// @brief Method ToSingle, addr 0x26dc478, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(uint16_t  value) ;

/// @brief Method ToSingle, addr 0x26dc48c, size 0x8, virtual false, abstract: false, final false
static inline float_t ToSingle(uint32_t  value) ;

/// @brief Method ToSingle, addr 0x26dc49c, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(uint64_t  value) ;

/// @brief Method ToSingle, addr 0x26d50d8, size 0xc, virtual false, abstract: false, final false
static inline float_t ToSingle(uint8_t  value) ;

/// @brief Method ToString, addr 0x26dcf10, size 0x1a0, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x26dd0b0, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ToString(char16_t  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x26dd108, size 0x1c, virtual false, abstract: false, final false
static inline ::StringW ToString(int32_t  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x26dd8b4, size 0x80, virtual false, abstract: false, final false
static inline ::StringW ToString(int64_t  value, int32_t  toBase) ;

/// @brief Method ToUInt16, addr 0x26dd45c, size 0x108, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToUInt16, addr 0x26dae88, size 0x18, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt16, addr 0x26dae14, size 0x74, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::System::Decimal  value) ;

/// @brief Method ToUInt16, addr 0x26da958, size 0xf4, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::System::Object*  value) ;

/// @brief Method ToUInt16, addr 0x26daa4c, size 0x104, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt16, addr 0x26d30d8, size 0x8, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(bool  value) ;

/// @brief Method ToUInt16, addr 0x26d60ac, size 0x4, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(char16_t  value) ;

/// @brief Method ToUInt16, addr 0x26dadb4, size 0x60, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(double_t  value) ;

/// @brief Method ToUInt16, addr 0x26dad58, size 0x5c, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(float_t  value) ;

/// @brief Method ToUInt16, addr 0x26daba4, size 0x54, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int16_t  value) ;

/// @brief Method ToUInt16, addr 0x26dabf8, size 0x58, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int32_t  value) ;

/// @brief Method ToUInt16, addr 0x26daca8, size 0x58, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int64_t  value) ;

/// @brief Method ToUInt16, addr 0x26dab50, size 0x54, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(int8_t  value) ;

/// @brief Method ToUInt16, addr 0x26dac50, size 0x58, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(uint32_t  value) ;

/// @brief Method ToUInt16, addr 0x26dad00, size 0x58, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(uint64_t  value) ;

/// @brief Method ToUInt16, addr 0x26d4ef8, size 0x8, virtual false, abstract: false, final false
static inline uint16_t ToUInt16(uint8_t  value) ;

/// @brief Method ToUInt32, addr 0x26dd638, size 0xd4, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToUInt32, addr 0x26db830, size 0x18, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt32, addr 0x26db7bc, size 0x74, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::System::Decimal  value) ;

/// @brief Method ToUInt32, addr 0x26db30c, size 0xf4, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::System::Object*  value) ;

/// @brief Method ToUInt32, addr 0x26db400, size 0x104, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt32, addr 0x26d31a0, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(bool  value) ;

/// @brief Method ToUInt32, addr 0x26d6168, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(char16_t  value) ;

/// @brief Method ToUInt32, addr 0x26db714, size 0xa8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(double_t  value) ;

/// @brief Method ToUInt32, addr 0x26db6b8, size 0x5c, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(float_t  value) ;

/// @brief Method ToUInt32, addr 0x26db558, size 0x54, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int16_t  value) ;

/// @brief Method ToUInt32, addr 0x26db5b4, size 0x54, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int32_t  value) ;

/// @brief Method ToUInt32, addr 0x26db608, size 0x58, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int64_t  value) ;

/// @brief Method ToUInt32, addr 0x26db504, size 0x54, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(int8_t  value) ;

/// @brief Method ToUInt32, addr 0x26db5ac, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(uint16_t  value) ;

/// @brief Method ToUInt32, addr 0x26db660, size 0x58, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(uint64_t  value) ;

/// @brief Method ToUInt32, addr 0x26d4fb8, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(uint8_t  value) ;

/// @brief Method ToUInt64, addr 0x26dd7e0, size 0xd4, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::StringW  value, int32_t  fromBase) ;

/// @brief Method ToUInt64, addr 0x26dc250, size 0x18, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::StringW  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt64, addr 0x26dc1dc, size 0x74, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::System::Decimal  value) ;

/// @brief Method ToUInt64, addr 0x26dbd2c, size 0xf4, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::System::Object*  value) ;

/// @brief Method ToUInt64, addr 0x26dbe20, size 0x104, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(::System::Object*  value, ::System::IFormatProvider*  provider) ;

/// @brief Method ToUInt64, addr 0x26d3268, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(bool  value) ;

/// @brief Method ToUInt64, addr 0x26d6228, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(char16_t  value) ;

/// @brief Method ToUInt64, addr 0x26dc0e0, size 0xfc, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(double_t  value) ;

/// @brief Method ToUInt64, addr 0x26dc084, size 0x5c, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(float_t  value) ;

/// @brief Method ToUInt64, addr 0x26dbf78, size 0x54, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int16_t  value) ;

/// @brief Method ToUInt64, addr 0x26dbfd4, size 0x54, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int32_t  value) ;

/// @brief Method ToUInt64, addr 0x26dc030, size 0x54, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int64_t  value) ;

/// @brief Method ToUInt64, addr 0x26dbf24, size 0x54, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(int8_t  value) ;

/// @brief Method ToUInt64, addr 0x26dbfcc, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(uint16_t  value) ;

/// @brief Method ToUInt64, addr 0x26dc028, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(uint32_t  value) ;

/// @brief Method ToUInt64, addr 0x26d5078, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ToUInt64(uint8_t  value) ;

/// @brief Method TryDecodeFromUtf16, addr 0x26d71e8, size 0x35c, virtual false, abstract: false, final false
static inline bool TryDecodeFromUtf16(::System::ReadOnlySpan_1<char16_t>  utf16, ::System::Span_1<uint8_t>  bytes, ::ByRef<int32_t>  consumed, ::ByRef<int32_t>  written) ;

/// @brief Method TryFromBase64Chars, addr 0x26de668, size 0x4d4, virtual false, abstract: false, final false
static inline bool TryFromBase64Chars(::System::ReadOnlySpan_1<char16_t>  chars, ::System::Span_1<uint8_t>  bytes, ::ByRef<int32_t>  bytesWritten) ;

/// @brief Method WriteThreeLowOrderBytes, addr 0x26d7594, size 0x18, virtual false, abstract: false, final false
static inline void WriteThreeLowOrderBytes(::ByRef<uint8_t>  destination, int32_t  value) ;

static inline ::ArrayW<::System::Type*,::Array<::System::Type*>*> getStaticF_ConvertTypes() ;

static inline ::System::Object* getStaticF_DBNull() ;

static inline ::System::Type* getStaticF_EnumType() ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_base64Table() ;

static inline ::ArrayW<int8_t,::Array<int8_t>*> getStaticF_s_decodingMap() ;

static inline void setStaticF_ConvertTypes(::ArrayW<::System::Type*,::Array<::System::Type*>*>  value) ;

static inline void setStaticF_DBNull(::System::Object*  value) ;

static inline void setStaticF_EnumType(::System::Type*  value) ;

static inline void setStaticF_base64Table(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline void setStaticF_s_decodingMap(::ArrayW<int8_t,::Array<int8_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Convert() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Convert(Convert && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Convert(Convert const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2076};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Convert, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::Convert);
DEFINE_IL2CPP_ARG_TYPE(::System::Convert*, "System", "Convert");
