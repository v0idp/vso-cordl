#pragma once
// IWYU pragma private; include "System/BitConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BitConverter)
namespace System::Buffers {
template<typename T,typename TArg>
class SpanAction_2;
}
namespace System {
class BitConverter___c;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
// Forward declare root types
namespace System {
class BitConverter;
}
namespace System {
class BitConverter___c;
}
// Write type traits
MARK_REF_PTR_T(::System::BitConverter);
MARK_REF_PTR_T(::System::BitConverter___c);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.BitConverter/<>c
class CORDL_TYPE BitConverter___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::BitConverter___c*  __9;

/// @brief Field <>9__38_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__38_0, put=setStaticF___9__38_0)) ::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_3<::ArrayW<uint8_t,::Array<uint8_t>*>,int32_t,int32_t>>*  __9__38_0;

static inline ::System::BitConverter___c* New_ctor() ;

/// @brief Method <ToString>b__38_0, addr 0x26d234c, size 0x198, virtual false, abstract: false, final false
inline void _ToString_b__38_0(::System::Span_1<char16_t>  dst, ::System::ValueTuple_3<::ArrayW<uint8_t,::Array<uint8_t>*>,int32_t,int32_t>  state) ;

/// @brief Method .ctor, addr 0x26d2344, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::BitConverter___c* getStaticF___9() ;

static inline ::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_3<::ArrayW<uint8_t,::Array<uint8_t>*>,int32_t,int32_t>>* getStaticF___9__38_0() ;

static inline void setStaticF___9(::System::BitConverter___c*  value) ;

static inline void setStaticF___9__38_0(::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_3<::ArrayW<uint8_t,::Array<uint8_t>*>,int32_t,int32_t>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BitConverter___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BitConverter___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BitConverter___c(BitConverter___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitConverter___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitConverter___c(BitConverter___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2069};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::BitConverter___c, 0x10>, "Size mismatch!");

} // namespace end def System
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.BitConverter
class CORDL_TYPE BitConverter : public ::System::Object {
public:
// Declarations
using __c = ::System::BitConverter___c;

/// @brief Field IsLittleEndian, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_IsLittleEndian, put=setStaticF_IsLittleEndian)) bool  IsLittleEndian;

/// @brief Method DoubleToInt64Bits, addr 0x26d227c, size 0x8, virtual false, abstract: false, final false
static inline int64_t DoubleToInt64Bits(double_t  value) ;

/// @brief Method GetBytes, addr 0x26d19c0, size 0x68, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetBytes(bool  value) ;

/// @brief Method GetBytes, addr 0x26d1a28, size 0x64, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetBytes(char16_t  value) ;

/// @brief Method GetBytes, addr 0x26d1dd0, size 0x6c, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetBytes(double_t  value) ;

/// @brief Method GetBytes, addr 0x26d1d64, size 0x6c, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetBytes(float_t  value) ;

/// @brief Method GetBytes, addr 0x26d1a8c, size 0x64, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetBytes(int16_t  value) ;

/// @brief Method GetBytes, addr 0x26d1af0, size 0x64, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetBytes(int32_t  value) ;

/// @brief Method GetBytes, addr 0x26d1b54, size 0x64, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetBytes(int64_t  value) ;

/// @brief Method GetBytes, addr 0x26d1bb8, size 0x64, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetBytes(uint16_t  value) ;

/// @brief Method GetBytes, addr 0x26d1c1c, size 0x64, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetBytes(uint32_t  value) ;

/// @brief Method GetBytes, addr 0x26d1d00, size 0x64, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetBytes(uint64_t  value) ;

/// @brief Method Int32BitsToSingle, addr 0x26d2294, size 0x8, virtual false, abstract: false, final false
static inline float_t Int32BitsToSingle(int32_t  value) ;

/// @brief Method Int64BitsToDouble, addr 0x26d2284, size 0x8, virtual false, abstract: false, final false
static inline double_t Int64BitsToDouble(int64_t  value) ;

/// @brief Method SingleToInt32Bits, addr 0x26d228c, size 0x8, virtual false, abstract: false, final false
static inline int32_t SingleToInt32Bits(float_t  value) ;

/// @brief Method ToDouble, addr 0x26d1f5c, size 0x14, virtual false, abstract: false, final false
static inline double_t ToDouble(::ArrayW<uint8_t,::Array<uint8_t>*>  value, int32_t  startIndex) ;

/// @brief Method ToInt32, addr 0x26d1e3c, size 0x84, virtual false, abstract: false, final false
static inline int32_t ToInt32(::ArrayW<uint8_t,::Array<uint8_t>*>  value, int32_t  startIndex) ;

/// @brief Method ToInt64, addr 0x26d1ec0, size 0x84, virtual false, abstract: false, final false
static inline int64_t ToInt64(::ArrayW<uint8_t,::Array<uint8_t>*>  value, int32_t  startIndex) ;

/// @brief Method ToSingle, addr 0x26d1f48, size 0x14, virtual false, abstract: false, final false
static inline float_t ToSingle(::ArrayW<uint8_t,::Array<uint8_t>*>  value, int32_t  startIndex) ;

/// @brief Method ToString, addr 0x26d2254, size 0x28, virtual false, abstract: false, final false
static inline ::StringW ToString(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method ToString, addr 0x26d1f70, size 0x2e4, virtual false, abstract: false, final false
static inline ::StringW ToString(::ArrayW<uint8_t,::Array<uint8_t>*>  value, int32_t  startIndex, int32_t  length) ;

/// @brief Method ToUInt32, addr 0x26d1f44, size 0x4, virtual false, abstract: false, final false
static inline uint32_t ToUInt32(::ArrayW<uint8_t,::Array<uint8_t>*>  value, int32_t  startIndex) ;

/// @brief Method TryWriteBytes, addr 0x26d1c80, size 0x80, virtual false, abstract: false, final false
static inline bool TryWriteBytes(::System::Span_1<uint8_t>  destination, uint32_t  value) ;

static inline bool getStaticF_IsLittleEndian() ;

static inline void setStaticF_IsLittleEndian(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BitConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BitConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BitConverter(BitConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitConverter(BitConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2070};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::BitConverter, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::BitConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::BitConverter*, "System", "BitConverter");
NEED_NO_BOX(::System::BitConverter___c);
DEFINE_IL2CPP_ARG_TYPE(::System::BitConverter___c*, "System", "BitConverter/<>c");
