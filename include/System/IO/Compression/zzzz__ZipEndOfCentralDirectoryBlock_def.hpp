#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipEndOfCentralDirectoryBlock.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZipEndOfCentralDirectoryBlock)
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::IO::Compression {
struct ZipEndOfCentralDirectoryBlock;
}
// Write type traits
MARK_VAL_T(::System::IO::Compression::ZipEndOfCentralDirectoryBlock);
// Dependencies 
namespace System::IO::Compression {
// Is value type: true
// CS Name: System.IO.Compression.ZipEndOfCentralDirectoryBlock
struct CORDL_TYPE ZipEndOfCentralDirectoryBlock {
public:
// Declarations
/// @brief Method TryReadBlock, addr 0x2b13350, size 0x124, virtual false, abstract: false, final false
static inline bool TryReadBlock(::System::IO::BinaryReader*  reader, ::ByRef<::System::IO::Compression::ZipEndOfCentralDirectoryBlock>  eocdBlock) ;

/// @brief Method WriteBlock, addr 0x2b1413c, size 0x1a0, virtual false, abstract: false, final false
static inline void WriteBlock(::System::IO::Stream*  stream, int64_t  numberOfEntries, int64_t  startOfCentralDirectory, int64_t  sizeOfCentralDirectory, ::ArrayW<uint8_t,::Array<uint8_t>*>  archiveComment) ;

// Ctor Parameters []
// @brief default ctor
constexpr ZipEndOfCentralDirectoryBlock() ;

// Ctor Parameters [CppParam { name: "Signature", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "NumberOfThisDisk", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "NumberOfTheDiskWithTheStartOfTheCentralDirectory", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "NumberOfEntriesInTheCentralDirectoryOnThisDisk", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "NumberOfEntriesInTheCentralDirectory", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "SizeOfCentralDirectory", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ArchiveComment", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
constexpr ZipEndOfCentralDirectoryBlock(uint32_t  Signature, uint16_t  NumberOfThisDisk, uint16_t  NumberOfTheDiskWithTheStartOfTheCentralDirectory, uint16_t  NumberOfEntriesInTheCentralDirectoryOnThisDisk, uint16_t  NumberOfEntriesInTheCentralDirectory, uint32_t  SizeOfCentralDirectory, uint32_t  OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber, ::ArrayW<uint8_t,::Array<uint8_t>*>  ArchiveComment) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11304};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Signature, offset: 0x0, size: 0x4, def value: None
 uint32_t  Signature;

/// @brief Field NumberOfThisDisk, offset: 0x4, size: 0x2, def value: None
 uint16_t  NumberOfThisDisk;

/// @brief Field NumberOfTheDiskWithTheStartOfTheCentralDirectory, offset: 0x6, size: 0x2, def value: None
 uint16_t  NumberOfTheDiskWithTheStartOfTheCentralDirectory;

/// @brief Field NumberOfEntriesInTheCentralDirectoryOnThisDisk, offset: 0x8, size: 0x2, def value: None
 uint16_t  NumberOfEntriesInTheCentralDirectoryOnThisDisk;

/// @brief Field NumberOfEntriesInTheCentralDirectory, offset: 0xa, size: 0x2, def value: None
 uint16_t  NumberOfEntriesInTheCentralDirectory;

/// @brief Field SizeOfCentralDirectory, offset: 0xc, size: 0x4, def value: None
 uint32_t  SizeOfCentralDirectory;

/// @brief Field OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber, offset: 0x10, size: 0x4, def value: None
 uint32_t  OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber;

/// @brief Field ArchiveComment, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ArchiveComment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::ZipEndOfCentralDirectoryBlock, Signature) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipEndOfCentralDirectoryBlock, NumberOfThisDisk) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipEndOfCentralDirectoryBlock, NumberOfTheDiskWithTheStartOfTheCentralDirectory) == 0x6, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipEndOfCentralDirectoryBlock, NumberOfEntriesInTheCentralDirectoryOnThisDisk) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipEndOfCentralDirectoryBlock, NumberOfEntriesInTheCentralDirectory) == 0xa, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipEndOfCentralDirectoryBlock, SizeOfCentralDirectory) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipEndOfCentralDirectoryBlock, OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipEndOfCentralDirectoryBlock, ArchiveComment) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::ZipEndOfCentralDirectoryBlock, 0x20>, "Size mismatch!");

} // namespace end def System::IO::Compression
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::ZipEndOfCentralDirectoryBlock, "System.IO.Compression", "ZipEndOfCentralDirectoryBlock");
