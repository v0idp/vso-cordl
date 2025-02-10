#pragma once
// IWYU pragma private; include "System/IO/Compression/Crc32Helper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Crc32Helper)
// Forward declare root types
namespace System::IO::Compression {
class Crc32Helper;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::Crc32Helper);
// Dependencies System.Object
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.Crc32Helper
class CORDL_TYPE Crc32Helper : public ::System::Object {
public:
// Declarations
/// @brief Field s_crcTable_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_crcTable_0, put=setStaticF_s_crcTable_0)) ::ArrayW<uint32_t,::Array<uint32_t>*>  s_crcTable_0;

/// @brief Field s_crcTable_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_crcTable_1, put=setStaticF_s_crcTable_1)) ::ArrayW<uint32_t,::Array<uint32_t>*>  s_crcTable_1;

/// @brief Field s_crcTable_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_crcTable_2, put=setStaticF_s_crcTable_2)) ::ArrayW<uint32_t,::Array<uint32_t>*>  s_crcTable_2;

/// @brief Field s_crcTable_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_crcTable_3, put=setStaticF_s_crcTable_3)) ::ArrayW<uint32_t,::Array<uint32_t>*>  s_crcTable_3;

/// @brief Field s_crcTable_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_crcTable_4, put=setStaticF_s_crcTable_4)) ::ArrayW<uint32_t,::Array<uint32_t>*>  s_crcTable_4;

/// @brief Field s_crcTable_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_crcTable_5, put=setStaticF_s_crcTable_5)) ::ArrayW<uint32_t,::Array<uint32_t>*>  s_crcTable_5;

/// @brief Field s_crcTable_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_crcTable_6, put=setStaticF_s_crcTable_6)) ::ArrayW<uint32_t,::Array<uint32_t>*>  s_crcTable_6;

/// @brief Field s_crcTable_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_crcTable_7, put=setStaticF_s_crcTable_7)) ::ArrayW<uint32_t,::Array<uint32_t>*>  s_crcTable_7;

/// @brief Method ManagedCrc32, addr 0x2b19d3c, size 0x31c, virtual false, abstract: false, final false
static inline uint32_t ManagedCrc32(uint32_t  crc32, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  length) ;

/// @brief Method UpdateCrc32, addr 0x2b199e4, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t UpdateCrc32(uint32_t  crc32, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  length) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_s_crcTable_0() ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_s_crcTable_1() ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_s_crcTable_2() ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_s_crcTable_3() ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_s_crcTable_4() ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_s_crcTable_5() ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_s_crcTable_6() ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_s_crcTable_7() ;

static inline void setStaticF_s_crcTable_0(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline void setStaticF_s_crcTable_1(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline void setStaticF_s_crcTable_2(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline void setStaticF_s_crcTable_3(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline void setStaticF_s_crcTable_4(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline void setStaticF_s_crcTable_5(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline void setStaticF_s_crcTable_6(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline void setStaticF_s_crcTable_7(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Crc32Helper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Crc32Helper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Crc32Helper(Crc32Helper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Crc32Helper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Crc32Helper(Crc32Helper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11311};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::Crc32Helper, 0x10>, "Size mismatch!");

} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::Crc32Helper);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::Crc32Helper*, "System.IO.Compression", "Crc32Helper");
