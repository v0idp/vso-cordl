#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Common/FourBitNumber.hpp"
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
CORDL_MODULE_EXPORT(FourBitNumber)
namespace Melanchall::DryWetMidi::Common {
class FourBitNumber___c;
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
class FourBitNumber___c;
}
namespace Melanchall::DryWetMidi::Common {
struct FourBitNumber;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Common::FourBitNumber___c);
MARK_VAL_T(::Melanchall::DryWetMidi::Common::FourBitNumber);
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Common {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Common.FourBitNumber/<>c
class CORDL_TYPE FourBitNumber___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Melanchall::DryWetMidi::Common::FourBitNumber___c*  __9;

static inline ::Melanchall::DryWetMidi::Common::FourBitNumber___c* New_ctor() ;

/// @brief Method <.cctor>b__33_0, addr 0x25a5de0, size 0x6c, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Common::FourBitNumber __cctor_b__33_0(int32_t  value) ;

/// @brief Method .ctor, addr 0x25a5dd8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Melanchall::DryWetMidi::Common::FourBitNumber___c* getStaticF___9() ;

static inline void setStaticF___9(::Melanchall::DryWetMidi::Common::FourBitNumber___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FourBitNumber___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FourBitNumber___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FourBitNumber___c(FourBitNumber___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FourBitNumber___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FourBitNumber___c(FourBitNumber___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11662};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Common::FourBitNumber___c, 0x10>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Common
// Dependencies System.IComparable`1<T>, System.IConvertible
namespace Melanchall::DryWetMidi::Common {
// Is value type: true
// CS Name: Melanchall.DryWetMidi.Common.FourBitNumber
struct CORDL_TYPE FourBitNumber {
public:
// Declarations
using __c = ::Melanchall::DryWetMidi::Common::FourBitNumber___c;

/// @brief Field MaxValue, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_MaxValue, put=setStaticF_MaxValue)) ::Melanchall::DryWetMidi::Common::FourBitNumber  MaxValue;

/// @brief Field MinValue, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_MinValue, put=setStaticF_MinValue)) ::Melanchall::DryWetMidi::Common::FourBitNumber  MinValue;

/// @brief Field Values, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Values, put=setStaticF_Values)) ::ArrayW<::Melanchall::DryWetMidi::Common::FourBitNumber,::Array<::Melanchall::DryWetMidi::Common::FourBitNumber>*>  Values;

/// @brief Convert operator to "::System::IComparable_1<::Melanchall::DryWetMidi::Common::FourBitNumber>"
constexpr operator  ::System::IComparable_1<::Melanchall::DryWetMidi::Common::FourBitNumber>*() ;

/// @brief Convert operator to "::System::IConvertible"
constexpr operator  ::System::IConvertible*() ;

/// @brief Method CompareTo, addr 0x25a5228, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::Melanchall::DryWetMidi::Common::FourBitNumber  other) ;

/// @brief Method Equals, addr 0x25a5b68, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x25a5be0, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetTypeCode, addr 0x25a5248, size 0x20, virtual true, abstract: false, final true
inline ::System::TypeCode GetTypeCode() ;

/// @brief Method System.IConvertible.ToBoolean, addr 0x25a5268, size 0x98, virtual true, abstract: false, final true
inline bool System_IConvertible_ToBoolean(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToByte, addr 0x25a5428, size 0x94, virtual true, abstract: false, final true
inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToChar, addr 0x25a5300, size 0x94, virtual true, abstract: false, final true
inline char16_t System_IConvertible_ToChar(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDateTime, addr 0x25a59f0, size 0x94, virtual true, abstract: false, final true
inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDecimal, addr 0x25a595c, size 0x94, virtual true, abstract: false, final true
inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToDouble, addr 0x25a58c8, size 0x94, virtual true, abstract: false, final true
inline double_t System_IConvertible_ToDouble(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt16, addr 0x25a54bc, size 0x94, virtual true, abstract: false, final true
inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt32, addr 0x25a55e4, size 0x94, virtual true, abstract: false, final true
inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToInt64, addr 0x25a570c, size 0x94, virtual true, abstract: false, final true
inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSByte, addr 0x25a5394, size 0x94, virtual true, abstract: false, final true
inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToSingle, addr 0x25a5834, size 0x94, virtual true, abstract: false, final true
inline float_t System_IConvertible_ToSingle(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToString, addr 0x25a5a84, size 0x20, virtual true, abstract: false, final true
inline ::StringW System_IConvertible_ToString(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToType, addr 0x25a5aa4, size 0xa4, virtual true, abstract: false, final true
inline ::System::Object* System_IConvertible_ToType(::System::Type*  conversionType, ::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt16, addr 0x25a5550, size 0x94, virtual true, abstract: false, final true
inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt32, addr 0x25a5678, size 0x94, virtual true, abstract: false, final true
inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider*  provider) ;

/// @brief Method System.IConvertible.ToUInt64, addr 0x25a57a0, size 0x94, virtual true, abstract: false, final true
inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider*  provider) ;

/// @brief Method ToString, addr 0x25a5b48, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x25a51a8, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(uint8_t  value) ;

static inline ::Melanchall::DryWetMidi::Common::FourBitNumber getStaticF_MaxValue() ;

static inline ::Melanchall::DryWetMidi::Common::FourBitNumber getStaticF_MinValue() ;

static inline ::ArrayW<::Melanchall::DryWetMidi::Common::FourBitNumber,::Array<::Melanchall::DryWetMidi::Common::FourBitNumber>*> getStaticF_Values() ;

/// @brief Convert to "::System::IComparable_1<::Melanchall::DryWetMidi::Common::FourBitNumber>"
constexpr ::System::IComparable_1<::Melanchall::DryWetMidi::Common::FourBitNumber>* i___System__IComparable_1___Melanchall__DryWetMidi__Common__FourBitNumber_() ;

/// @brief Convert to "::System::IConvertible"
constexpr ::System::IConvertible* i___System__IConvertible() ;

/// @brief Method op_Explicit, addr 0x259e654, size 0x20, virtual false, abstract: false, final false
static inline ::Melanchall::DryWetMidi::Common::FourBitNumber op_Explicit___Melanchall__DryWetMidi__Common__FourBitNumber(uint8_t  number) ;

/// @brief Method op_Implicit, addr 0x25a5224, size 0x4, virtual false, abstract: false, final false
static inline uint8_t op_Implicit_uint8_t(::Melanchall::DryWetMidi::Common::FourBitNumber  number) ;

static inline void setStaticF_MaxValue(::Melanchall::DryWetMidi::Common::FourBitNumber  value) ;

static inline void setStaticF_MinValue(::Melanchall::DryWetMidi::Common::FourBitNumber  value) ;

static inline void setStaticF_Values(::ArrayW<::Melanchall::DryWetMidi::Common::FourBitNumber,::Array<::Melanchall::DryWetMidi::Common::FourBitNumber>*>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FourBitNumber() ;

// Ctor Parameters [CppParam { name: "_value", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr FourBitNumber(uint8_t  _value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11663};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field _value, offset: 0x0, size: 0x1, def value: None
 uint8_t  _value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Common::FourBitNumber, _value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Common::FourBitNumber, 0x1>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Common
NEED_NO_BOX(::Melanchall::DryWetMidi::Common::FourBitNumber___c);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Common::FourBitNumber___c*, "Melanchall.DryWetMidi.Common", "FourBitNumber/<>c");
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Common::FourBitNumber, "Melanchall.DryWetMidi.Common", "FourBitNumber");
