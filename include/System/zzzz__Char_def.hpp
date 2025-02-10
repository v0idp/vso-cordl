#pragma once
// IWYU pragma private; include "System/Char.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Char)
namespace System::Globalization {
class CultureInfo;
}
namespace System::Globalization {
struct UnicodeCategory;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
struct Char;
}
// Write type traits
MARK_VAL_T(::System::Char);
// Dependencies System.IComparable, System.IComparable`1<T>, System.IConvertible, System.IEquatable`1<T>
namespace System {
// Is value type: true
// CS Name: System.Char
struct CORDL_TYPE Char {
public:
// Declarations
/// @brief Field s_categoryForLatin1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_categoryForLatin1, put=setStaticF_s_categoryForLatin1)) ::ArrayW<uint8_t,::Array<uint8_t>*>  s_categoryForLatin1;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IComparable_1<char16_t>"
constexpr operator  ::System::IComparable_1<char16_t>*() ;

/// @brief Convert operator to "::System::IConvertible"
constexpr operator  ::System::IConvertible*() ;

/// @brief Convert operator to "::System::IEquatable_1<char16_t>"
constexpr operator  ::System::IEquatable_1<char16_t>*() ;

/// @brief Method CheckLetter, addr 0x26d5680, size 0xc, virtual false, abstract: false, final false
static inline bool CheckLetter(::System::Globalization::UnicodeCategory  uc) ;

/// @brief Method CheckLetterOrDigit, addr 0x26d59d4, size 0x20, virtual false, abstract: false, final false
static inline bool CheckLetterOrDigit(::System::Globalization::UnicodeCategory  uc) ;

/// @brief Method CheckNumber, addr 0x26d6574, size 0x10, virtual false, abstract: false, final false
static inline bool CheckNumber(::System::Globalization::UnicodeCategory  uc) ;

/// @brief Method CheckPunctuation, addr 0x26d5918, size 0x10, virtual false, abstract: false, final false
static inline bool CheckPunctuation(::System::Globalization::UnicodeCategory  uc) ;

/// @brief Method CheckSeparator, addr 0x26d67e0, size 0x10, virtual false, abstract: false, final false
static inline bool CheckSeparator(::System::Globalization::UnicodeCategory  uc) ;

/// @brief Method CompareTo, addr 0x26d547c, size 0xb8, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Object*  value) ;

/// @brief Method CompareTo, addr 0x26d5534, size 0xc, virtual true, abstract: false, final true
inline int32_t CompareTo(char16_t  value) ;

/// @brief Method ConvertToUtf32, addr 0x26d6e3c, size 0x124, virtual false, abstract: false, final false
static inline int32_t ConvertToUtf32(char16_t  highSurrogate, char16_t  lowSurrogate) ;

/// @brief Method Equals, addr 0x26d53f4, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x26d546c, size 0x10, virtual true, abstract: false, final true
inline bool Equals(char16_t  obj) ;

/// @brief Method GetHashCode, addr 0x26d53e8, size 0xc, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetLatin1UnicodeCategory, addr 0x26d536c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Globalization::UnicodeCategory GetLatin1UnicodeCategory(char16_t  ch) ;

/// @brief Method GetTypeCode, addr 0x26d5dac, size 0x8, virtual true, abstract: false, final true
inline ::System::TypeCode GetTypeCode() ;

/// @brief Method GetUnicodeCategory, addr 0x26d6b38, size 0x80, virtual false, abstract: false, final false
static inline ::System::Globalization::UnicodeCategory GetUnicodeCategory(char16_t  c) ;

/// @brief Method GetUnicodeCategory, addr 0x26d6bb8, size 0x144, virtual false, abstract: false, final false
static inline ::System::Globalization::UnicodeCategory GetUnicodeCategory(::StringW  s, int32_t  index) ;

/// @brief Method IsAscii, addr 0x26d535c, size 0x10, virtual false, abstract: false, final false
static inline bool IsAscii(char16_t  ch) ;

/// @brief Method IsControl, addr 0x26d64e8, size 0x8c, virtual false, abstract: false, final false
static inline bool IsControl(char16_t  c) ;

/// @brief Method IsDigit, addr 0x26cedc8, size 0x84, virtual false, abstract: false, final false
static inline bool IsDigit(char16_t  c) ;

/// @brief Method IsHighSurrogate, addr 0x26d6cfc, size 0x10, virtual false, abstract: false, final false
static inline bool IsHighSurrogate(char16_t  c) ;

/// @brief Method IsHighSurrogate, addr 0x26d6d0c, size 0x100, virtual false, abstract: false, final false
static inline bool IsHighSurrogate(::StringW  s, int32_t  index) ;

/// @brief Method IsLatin1, addr 0x26d534c, size 0x10, virtual false, abstract: false, final false
static inline bool IsLatin1(char16_t  ch) ;

/// @brief Method IsLetter, addr 0x26d568c, size 0xd8, virtual false, abstract: false, final false
static inline bool IsLetter(char16_t  c) ;

/// @brief Method IsLetterOrDigit, addr 0x26d59f4, size 0xc8, virtual false, abstract: false, final false
static inline bool IsLetterOrDigit(char16_t  c) ;

/// @brief Method IsLowSurrogate, addr 0x26d6e0c, size 0x10, virtual false, abstract: false, final false
static inline bool IsLowSurrogate(char16_t  c) ;

/// @brief Method IsLower, addr 0x26d585c, size 0xbc, virtual false, abstract: false, final false
static inline bool IsLower(char16_t  c) ;

/// @brief Method IsNumber, addr 0x26d6584, size 0xd8, virtual false, abstract: false, final false
static inline bool IsNumber(char16_t  c) ;

/// @brief Method IsNumber, addr 0x26d665c, size 0x184, virtual false, abstract: false, final false
static inline bool IsNumber(::StringW  s, int32_t  index) ;

/// @brief Method IsPunctuation, addr 0x26d5928, size 0xac, virtual false, abstract: false, final false
static inline bool IsPunctuation(char16_t  c) ;

/// @brief Method IsSeparator, addr 0x26d6804, size 0xb0, virtual false, abstract: false, final false
static inline bool IsSeparator(char16_t  c) ;

/// @brief Method IsSeparatorLatin1, addr 0x26d67f0, size 0x14, virtual false, abstract: false, final false
static inline bool IsSeparatorLatin1(char16_t  c) ;

/// @brief Method IsSurrogate, addr 0x26d68b4, size 0x10, virtual false, abstract: false, final false
static inline bool IsSurrogate(char16_t  c) ;

/// @brief Method IsSurrogate, addr 0x26d68c4, size 0xfc, virtual false, abstract: false, final false
static inline bool IsSurrogate(::StringW  s, int32_t  index) ;

/// @brief Method IsSurrogatePair, addr 0x26d6e1c, size 0x20, virtual false, abstract: false, final false
static inline bool IsSurrogatePair(char16_t  highSurrogate, char16_t  lowSurrogate) ;

/// @brief Method IsUpper, addr 0x26d57a0, size 0xbc, virtual false, abstract: false, final false
static inline bool IsUpper(char16_t  c) ;

/// @brief Method IsWhiteSpace, addr 0x26d2dfc, size 0xb8, virtual false, abstract: false, final false
static inline bool IsWhiteSpace(char16_t  c) ;

/// @brief Method IsWhiteSpace, addr 0x26d69c0, size 0x178, virtual false, abstract: false, final false
static inline bool IsWhiteSpace(::StringW  s, int32_t  index) ;

/// @brief Method IsWhiteSpaceLatin1, addr 0x26d5764, size 0x3c, virtual false, abstract: false, final false
static inline bool IsWhiteSpaceLatin1(char16_t  c) ;

/// @brief Method Parse, addr 0x26d55a4, size 0x9c, virtual false, abstract: false, final false
static inline char16_t Parse(::StringW  s) ;

/// @brief Method System.IConvertible.ToBoolean, addr 0x26d5db4, size 0x84, virtual true, abstract: false, final true
inline bool System_IConvertible_ToBoolean(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToByte, addr 0x26d5ef4, size 0x58, virtual true, abstract: false, final true
inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToChar, addr 0x26d5e38, size 0x8, virtual true, abstract: false, final true
inline char16_t System_IConvertible_ToChar(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDateTime, addr 0x26d63bc, size 0x84, virtual true, abstract: false, final true
inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDecimal, addr 0x26d6338, size 0x84, virtual true, abstract: false, final true
inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDouble, addr 0x26d62b4, size 0x84, virtual true, abstract: false, final true
inline double_t System_IConvertible_ToDouble(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt16, addr 0x26d5fa8, size 0x58, virtual true, abstract: false, final true
inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt32, addr 0x26d60b0, size 0x58, virtual true, abstract: false, final true
inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt64, addr 0x26d6170, size 0x58, virtual true, abstract: false, final true
inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSByte, addr 0x26d5e40, size 0x58, virtual true, abstract: false, final true
inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSingle, addr 0x26d6230, size 0x84, virtual true, abstract: false, final true
inline float_t System_IConvertible_ToSingle(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToType, addr 0x26d6440, size 0xa8, virtual true, abstract: false, final true
inline ::System::Object* System_IConvertible_ToType(::System::Type*  type, ::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt16, addr 0x26d6054, size 0x58, virtual true, abstract: false, final true
inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt32, addr 0x26d6110, size 0x58, virtual true, abstract: false, final true
inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt64, addr 0x26d61d0, size 0x58, virtual true, abstract: false, final true
inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider*  provider) ;

/// @brief Method ToLower, addr 0x26d5cb4, size 0x7c, virtual false, abstract: false, final false
static inline char16_t ToLower(char16_t  c) ;

/// @brief Method ToLower, addr 0x26d5c34, size 0x80, virtual false, abstract: false, final false
static inline char16_t ToLower(char16_t  c, ::System::Globalization::CultureInfo*  culture) ;

/// @brief Method ToLowerInvariant, addr 0x26d5d30, size 0x7c, virtual false, abstract: false, final false
static inline char16_t ToLowerInvariant(char16_t  c) ;

/// @brief Method ToString, addr 0x26c5380, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x26d5540, size 0x8, virtual false, abstract: false, final false
static inline ::StringW ToString(char16_t  c) ;

/// @brief Method ToString, addr 0x26d5548, size 0x5c, virtual true, abstract: false, final true
inline ::StringW ToString(::System::IFormatProvider*  provider) ;

/// @brief Method ToUpper, addr 0x26d5b3c, size 0x7c, virtual false, abstract: false, final false
static inline char16_t ToUpper(char16_t  c) ;

/// @brief Method ToUpper, addr 0x26d5abc, size 0x80, virtual false, abstract: false, final false
static inline char16_t ToUpper(char16_t  c, ::System::Globalization::CultureInfo*  culture) ;

/// @brief Method ToUpperInvariant, addr 0x26d5bb8, size 0x7c, virtual false, abstract: false, final false
static inline char16_t ToUpperInvariant(char16_t  c) ;

/// @brief Method TryParse, addr 0x26d5640, size 0x40, virtual false, abstract: false, final false
static inline bool TryParse(::StringW  s, ::ByRef<char16_t>  result) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_s_categoryForLatin1() ;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() ;

/// @brief Convert to "::System::IComparable_1<char16_t>"
constexpr ::System::IComparable_1<char16_t>* i___System__IComparable_1_char16_t_() ;

/// @brief Convert to "::System::IConvertible"
constexpr ::System::IConvertible* i___System__IConvertible() ;

/// @brief Convert to "::System::IEquatable_1<char16_t>"
constexpr ::System::IEquatable_1<char16_t>* i___System__IEquatable_1_char16_t_() ;

static inline void setStaticF_s_categoryForLatin1(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Char() ;

// Ctor Parameters [CppParam { name: "m_value", ty: "char16_t", modifiers: "", def_value: None }]
constexpr Char(char16_t  m_value) noexcept;

/// @brief Field HIGH_SURROGATE_START offset 0xffffffff size 0x4
static constexpr int32_t  HIGH_SURROGATE_START{static_cast<int32_t>(0xd800)};

/// @brief Field LOW_SURROGATE_END offset 0xffffffff size 0x4
static constexpr int32_t  LOW_SURROGATE_END{static_cast<int32_t>(0xdfff)};

/// @brief Field MaxValue offset 0xffffffff size 0x2
static constexpr char16_t  MaxValue{u'\u{ffff}'};

/// @brief Field MinValue offset 0xffffffff size 0x2
static constexpr char16_t  MinValue{u'\u{0}'};

/// @brief Field UNICODE_PLANE00_END offset 0xffffffff size 0x4
static constexpr int32_t  UNICODE_PLANE00_END{static_cast<int32_t>(0xffff)};

/// @brief Field UNICODE_PLANE01_START offset 0xffffffff size 0x4
static constexpr int32_t  UNICODE_PLANE01_START{static_cast<int32_t>(0x10000)};

/// @brief Field UNICODE_PLANE16_END offset 0xffffffff size 0x4
static constexpr int32_t  UNICODE_PLANE16_END{static_cast<int32_t>(0x10ffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2074};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field m_value, offset: 0x0, size: 0x2, def value: None
 char16_t  m_value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Char, m_value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Char, 0x2>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::Char, "System", "Char");
