#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Common/SevenBitNumber.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SevenBitNumber)
namespace Melanchall::DryWetMidi::Common {
class SevenBitNumber___c;
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
namespace Melanchall::DryWetMidi::Common {
class SevenBitNumber___c;
}
namespace Melanchall::DryWetMidi::Common {
struct SevenBitNumber;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Common::SevenBitNumber___c);
MARK_VAL_T(::Melanchall::DryWetMidi::Common::SevenBitNumber);
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Common {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Common.SevenBitNumber/<>c
class CORDL_TYPE SevenBitNumber___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Melanchall::DryWetMidi::Common::SevenBitNumber___c*  __9;

static inline ::Melanchall::DryWetMidi::Common::SevenBitNumber___c* New_ctor() ;

/// @brief Method <.cctor>b__33_0, addr 0x25a6a84, size 0x6c, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Common::SevenBitNumber __cctor_b__33_0(int32_t  value) ;

/// @brief Method .ctor, addr 0x25a6a7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Melanchall::DryWetMidi::Common::SevenBitNumber___c* getStaticF___9() ;

static inline void setStaticF___9(::Melanchall::DryWetMidi::Common::SevenBitNumber___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SevenBitNumber___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SevenBitNumber___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SevenBitNumber___c(SevenBitNumber___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SevenBitNumber___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SevenBitNumber___c(SevenBitNumber___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11664};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Common::SevenBitNumber___c, 0x10>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Common
// Dependencies System.IComparable`1<T>, System.IConvertible
namespace Melanchall::DryWetMidi::Common {
// Is value type: true
// CS Name: Melanchall.DryWetMidi.Common.SevenBitNumber
struct CORDL_TYPE SevenBitNumber {
public:
// Declarations
using __c = ::Melanchall::DryWetMidi::Common::SevenBitNumber___c;

/// @brief Field MaxValue, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_MaxValue, put=setStaticF_MaxValue)) ::Melanchall::DryWetMidi::Common::SevenBitNumber  MaxValue;

/// @brief Field MinValue, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_MinValue, put=setStaticF_MinValue)) ::Melanchall::DryWetMidi::Common::SevenBitNumber  MinValue;

/// @brief Field Values, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Values, put=setStaticF_Values)) ::ArrayW<::Melanchall::DryWetMidi::Common::SevenBitNumber,::Array<::Melanchall::DryWetMidi::Common::SevenBitNumber>*>  Values;

/// @brief Convert operator to "::System::IComparable_1<::Melanchall::DryWetMidi::Common::SevenBitNumber>"
constexpr operator  ::System::IComparable_1<::Melanchall::DryWetMidi::Common::SevenBitNumber>*() ;

/// @brief Convert operator to "::System::IConvertible"
constexpr operator  ::System::IConvertible*() ;

/// @brief Method CompareTo, addr 0x25a5ecc, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::Melanchall::DryWetMidi::Common::SevenBitNumber  other) ;

/// @brief Method Equals, addr 0x25a680c, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x25a6884, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetTypeCode, addr 0x25a5eec, size 0x20, virtual true, abstract: false, final true
inline ::System::TypeCode GetTypeCode() ;

/// @brief Method System.IConvertible.ToBoolean, addr 0x25a5f0c, size 0x98, virtual true, abstract: false, final true
inline bool System_IConvertible_ToBoolean(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToByte, addr 0x25a60cc, size 0x94, virtual true, abstract: false, final true
inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToChar, addr 0x25a5fa4, size 0x94, virtual true, abstract: false, final true
inline char16_t System_IConvertible_ToChar(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDateTime, addr 0x25a6694, size 0x94, virtual true, abstract: false, final true
inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDecimal, addr 0x25a6600, size 0x94, virtual true, abstract: false, final true
inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDouble, addr 0x25a656c, size 0x94, virtual true, abstract: false, final true
inline double_t System_IConvertible_ToDouble(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt16, addr 0x25a6160, size 0x94, virtual true, abstract: false, final true
inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt32, addr 0x25a6288, size 0x94, virtual true, abstract: false, final true
inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt64, addr 0x25a63b0, size 0x94, virtual true, abstract: false, final true
inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSByte, addr 0x25a6038, size 0x94, virtual true, abstract: false, final true
inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSingle, addr 0x25a64d8, size 0x94, virtual true, abstract: false, final true
inline float_t System_IConvertible_ToSingle(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToString, addr 0x25a6728, size 0x20, virtual true, abstract: false, final true
inline ::StringW System_IConvertible_ToString(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToType, addr 0x25a6748, size 0xa4, virtual true, abstract: false, final true
inline ::System::Object* System_IConvertible_ToType(::System::Type*  conversionType, ::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt16, addr 0x25a61f4, size 0x94, virtual true, abstract: false, final true
inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt32, addr 0x25a631c, size 0x94, virtual true, abstract: false, final true
inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt64, addr 0x25a6444, size 0x94, virtual true, abstract: false, final true
inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x25a67ec, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x25a5e4c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(uint8_t  value) ;

static inline ::Melanchall::DryWetMidi::Common::SevenBitNumber getStaticF_MaxValue() ;

static inline ::Melanchall::DryWetMidi::Common::SevenBitNumber getStaticF_MinValue() ;

static inline ::ArrayW<::Melanchall::DryWetMidi::Common::SevenBitNumber,::Array<::Melanchall::DryWetMidi::Common::SevenBitNumber>*> getStaticF_Values() ;

/// @brief Convert to "::System::IComparable_1<::Melanchall::DryWetMidi::Common::SevenBitNumber>"
constexpr ::System::IComparable_1<::Melanchall::DryWetMidi::Common::SevenBitNumber>* i___System__IComparable_1___Melanchall__DryWetMidi__Common__SevenBitNumber_() ;

/// @brief Convert to "::System::IConvertible"
constexpr ::System::IConvertible* i___System__IConvertible() ;

/// @brief Method op_Explicit, addr 0x25a1814, size 0x20, virtual false, abstract: false, final false
static inline ::Melanchall::DryWetMidi::Common::SevenBitNumber op_Explicit___Melanchall__DryWetMidi__Common__SevenBitNumber(uint8_t  number) ;

/// @brief Method op_Implicit, addr 0x25a5ec8, size 0x4, virtual false, abstract: false, final false
static inline uint8_t op_Implicit_uint8_t(::Melanchall::DryWetMidi::Common::SevenBitNumber  number) ;

static inline void setStaticF_MaxValue(::Melanchall::DryWetMidi::Common::SevenBitNumber  value) ;

static inline void setStaticF_MinValue(::Melanchall::DryWetMidi::Common::SevenBitNumber  value) ;

static inline void setStaticF_Values(::ArrayW<::Melanchall::DryWetMidi::Common::SevenBitNumber,::Array<::Melanchall::DryWetMidi::Common::SevenBitNumber>*>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SevenBitNumber() ;

// Ctor Parameters [CppParam { name: "_value", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr SevenBitNumber(uint8_t  _value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11665};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field _value, offset: 0x0, size: 0x1, def value: None
 uint8_t  _value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Common::SevenBitNumber, _value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Common::SevenBitNumber, 0x1>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Common
NEED_NO_BOX(::Melanchall::DryWetMidi::Common::SevenBitNumber___c);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Common::SevenBitNumber___c*, "Melanchall.DryWetMidi.Common", "SevenBitNumber/<>c");
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Common::SevenBitNumber, "Melanchall.DryWetMidi.Common", "SevenBitNumber");
