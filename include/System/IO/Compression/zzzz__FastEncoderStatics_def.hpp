#pragma once
// IWYU pragma private; include "System/IO/Compression/FastEncoderStatics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FastEncoderStatics)
// Forward declare root types
namespace System::IO::Compression {
class FastEncoderStatics;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::FastEncoderStatics);
// Dependencies System.Object
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.FastEncoderStatics
class CORDL_TYPE FastEncoderStatics : public ::System::Object {
public:
// Declarations
/// @brief Field BFinalFastEncoderTreeStructureData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BFinalFastEncoderTreeStructureData, put=setStaticF_BFinalFastEncoderTreeStructureData)) ::ArrayW<uint8_t,::Array<uint8_t>*>  BFinalFastEncoderTreeStructureData;

/// @brief Field BitMask, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BitMask, put=setStaticF_BitMask)) ::ArrayW<uint32_t,::Array<uint32_t>*>  BitMask;

/// @brief Field ExtraDistanceBits, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ExtraDistanceBits, put=setStaticF_ExtraDistanceBits)) ::ArrayW<uint8_t,::Array<uint8_t>*>  ExtraDistanceBits;

/// @brief Field ExtraLengthBits, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ExtraLengthBits, put=setStaticF_ExtraLengthBits)) ::ArrayW<uint8_t,::Array<uint8_t>*>  ExtraLengthBits;

/// @brief Field FastEncoderDistanceCodeInfo, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FastEncoderDistanceCodeInfo, put=setStaticF_FastEncoderDistanceCodeInfo)) ::ArrayW<uint32_t,::Array<uint32_t>*>  FastEncoderDistanceCodeInfo;

/// @brief Field FastEncoderLiteralCodeInfo, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FastEncoderLiteralCodeInfo, put=setStaticF_FastEncoderLiteralCodeInfo)) ::ArrayW<uint32_t,::Array<uint32_t>*>  FastEncoderLiteralCodeInfo;

/// @brief Field FastEncoderTreeStructureData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FastEncoderTreeStructureData, put=setStaticF_FastEncoderTreeStructureData)) ::ArrayW<uint8_t,::Array<uint8_t>*>  FastEncoderTreeStructureData;

/// @brief Field s_distLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_distLookup, put=setStaticF_s_distLookup)) ::ArrayW<uint8_t,::Array<uint8_t>*>  s_distLookup;

/// @brief Method BitReverse, addr 0x2b0df58, size 0x28, virtual false, abstract: false, final false
static inline uint32_t BitReverse(uint32_t  code, int32_t  length) ;

/// @brief Method CreateDistanceLookup, addr 0x2b0ddd0, size 0x188, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> CreateDistanceLookup() ;

/// @brief Method GetSlot, addr 0x2b0dd44, size 0x8c, virtual false, abstract: false, final false
static inline int32_t GetSlot(int32_t  pos) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_BFinalFastEncoderTreeStructureData() ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_BitMask() ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_ExtraDistanceBits() ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_ExtraLengthBits() ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_FastEncoderDistanceCodeInfo() ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_FastEncoderLiteralCodeInfo() ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_FastEncoderTreeStructureData() ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_s_distLookup() ;

static inline void setStaticF_BFinalFastEncoderTreeStructureData(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline void setStaticF_BitMask(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline void setStaticF_ExtraDistanceBits(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline void setStaticF_ExtraLengthBits(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline void setStaticF_FastEncoderDistanceCodeInfo(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline void setStaticF_FastEncoderLiteralCodeInfo(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline void setStaticF_FastEncoderTreeStructureData(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline void setStaticF_s_distLookup(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FastEncoderStatics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FastEncoderStatics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FastEncoderStatics(FastEncoderStatics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FastEncoderStatics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FastEncoderStatics(FastEncoderStatics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11277};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::FastEncoderStatics, 0x10>, "Size mismatch!");

} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::FastEncoderStatics);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::FastEncoderStatics*, "System.IO.Compression", "FastEncoderStatics");
