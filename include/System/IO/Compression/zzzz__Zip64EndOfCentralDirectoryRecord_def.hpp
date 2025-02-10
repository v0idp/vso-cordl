#pragma once
// IWYU pragma private; include "System/IO/Compression/Zip64EndOfCentralDirectoryRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Zip64EndOfCentralDirectoryRecord)
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::IO::Compression {
struct Zip64EndOfCentralDirectoryRecord;
}
// Write type traits
MARK_VAL_T(::System::IO::Compression::Zip64EndOfCentralDirectoryRecord);
// Dependencies 
namespace System::IO::Compression {
// Is value type: true
// CS Name: System.IO.Compression.Zip64EndOfCentralDirectoryRecord
struct CORDL_TYPE Zip64EndOfCentralDirectoryRecord {
public:
// Declarations
/// @brief Method TryReadBlock, addr 0x2b1351c, size 0x140, virtual false, abstract: false, final false
static inline bool TryReadBlock(::System::IO::BinaryReader*  reader, ::ByRef<::System::IO::Compression::Zip64EndOfCentralDirectoryRecord>  zip64EOCDRecord) ;

/// @brief Method WriteBlock, addr 0x2b13f04, size 0x16c, virtual false, abstract: false, final false
static inline void WriteBlock(::System::IO::Stream*  stream, int64_t  numberOfEntries, int64_t  startOfCentralDirectory, int64_t  sizeOfCentralDirectory) ;

// Ctor Parameters []
// @brief default ctor
constexpr Zip64EndOfCentralDirectoryRecord() ;

// Ctor Parameters [CppParam { name: "SizeOfThisRecord", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "VersionMadeBy", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "VersionNeededToExtract", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "NumberOfThisDisk", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "NumberOfDiskWithStartOfCD", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "NumberOfEntriesOnThisDisk", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "NumberOfEntriesTotal", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "SizeOfCentralDirectory", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "OffsetOfCentralDirectory", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr Zip64EndOfCentralDirectoryRecord(uint64_t  SizeOfThisRecord, uint16_t  VersionMadeBy, uint16_t  VersionNeededToExtract, uint32_t  NumberOfThisDisk, uint32_t  NumberOfDiskWithStartOfCD, uint64_t  NumberOfEntriesOnThisDisk, uint64_t  NumberOfEntriesTotal, uint64_t  SizeOfCentralDirectory, uint64_t  OffsetOfCentralDirectory) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11301};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field SizeOfThisRecord, offset: 0x0, size: 0x8, def value: None
 uint64_t  SizeOfThisRecord;

/// @brief Field VersionMadeBy, offset: 0x8, size: 0x2, def value: None
 uint16_t  VersionMadeBy;

/// @brief Field VersionNeededToExtract, offset: 0xa, size: 0x2, def value: None
 uint16_t  VersionNeededToExtract;

/// @brief Field NumberOfThisDisk, offset: 0xc, size: 0x4, def value: None
 uint32_t  NumberOfThisDisk;

/// @brief Field NumberOfDiskWithStartOfCD, offset: 0x10, size: 0x4, def value: None
 uint32_t  NumberOfDiskWithStartOfCD;

/// @brief Field NumberOfEntriesOnThisDisk, offset: 0x18, size: 0x8, def value: None
 uint64_t  NumberOfEntriesOnThisDisk;

/// @brief Field NumberOfEntriesTotal, offset: 0x20, size: 0x8, def value: None
 uint64_t  NumberOfEntriesTotal;

/// @brief Field SizeOfCentralDirectory, offset: 0x28, size: 0x8, def value: None
 uint64_t  SizeOfCentralDirectory;

/// @brief Field OffsetOfCentralDirectory, offset: 0x30, size: 0x8, def value: None
 uint64_t  OffsetOfCentralDirectory;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::Zip64EndOfCentralDirectoryRecord, SizeOfThisRecord) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::Zip64EndOfCentralDirectoryRecord, VersionMadeBy) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::Zip64EndOfCentralDirectoryRecord, VersionNeededToExtract) == 0xa, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::Zip64EndOfCentralDirectoryRecord, NumberOfThisDisk) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::Zip64EndOfCentralDirectoryRecord, NumberOfDiskWithStartOfCD) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::Zip64EndOfCentralDirectoryRecord, NumberOfEntriesOnThisDisk) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::Zip64EndOfCentralDirectoryRecord, NumberOfEntriesTotal) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::Zip64EndOfCentralDirectoryRecord, SizeOfCentralDirectory) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::Zip64EndOfCentralDirectoryRecord, OffsetOfCentralDirectory) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::Zip64EndOfCentralDirectoryRecord, 0x38>, "Size mismatch!");

} // namespace end def System::IO::Compression
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::Zip64EndOfCentralDirectoryRecord, "System.IO.Compression", "Zip64EndOfCentralDirectoryRecord");
