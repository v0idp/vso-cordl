#pragma once
// IWYU pragma private; include "System/IO/Compression/Zip64EndOfCentralDirectoryLocator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Zip64EndOfCentralDirectoryLocator)
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::IO::Compression {
struct Zip64EndOfCentralDirectoryLocator;
}
// Write type traits
MARK_VAL_T(::System::IO::Compression::Zip64EndOfCentralDirectoryLocator);
// Dependencies 
namespace System::IO::Compression {
// Is value type: true
// CS Name: System.IO.Compression.Zip64EndOfCentralDirectoryLocator
struct CORDL_TYPE Zip64EndOfCentralDirectoryLocator {
public:
// Declarations
/// @brief Method TryReadBlock, addr 0x2b13474, size 0xa8, virtual false, abstract: false, final false
static inline bool TryReadBlock(::System::IO::BinaryReader*  reader, ::ByRef<::System::IO::Compression::Zip64EndOfCentralDirectoryLocator>  zip64EOCDLocator) ;

/// @brief Method WriteBlock, addr 0x2b14070, size 0xcc, virtual false, abstract: false, final false
static inline void WriteBlock(::System::IO::Stream*  stream, int64_t  zip64EOCDRecordStart) ;

// Ctor Parameters []
// @brief default ctor
constexpr Zip64EndOfCentralDirectoryLocator() ;

// Ctor Parameters [CppParam { name: "NumberOfDiskWithZip64EOCD", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "OffsetOfZip64EOCD", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "TotalNumberOfDisks", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Zip64EndOfCentralDirectoryLocator(uint32_t  NumberOfDiskWithZip64EOCD, uint64_t  OffsetOfZip64EOCD, uint32_t  TotalNumberOfDisks) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11300};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field NumberOfDiskWithZip64EOCD, offset: 0x0, size: 0x4, def value: None
 uint32_t  NumberOfDiskWithZip64EOCD;

/// @brief Field OffsetOfZip64EOCD, offset: 0x8, size: 0x8, def value: None
 uint64_t  OffsetOfZip64EOCD;

/// @brief Field TotalNumberOfDisks, offset: 0x10, size: 0x4, def value: None
 uint32_t  TotalNumberOfDisks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::Zip64EndOfCentralDirectoryLocator, NumberOfDiskWithZip64EOCD) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::Zip64EndOfCentralDirectoryLocator, OffsetOfZip64EOCD) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::Zip64EndOfCentralDirectoryLocator, TotalNumberOfDisks) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::Zip64EndOfCentralDirectoryLocator, 0x18>, "Size mismatch!");

} // namespace end def System::IO::Compression
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::Zip64EndOfCentralDirectoryLocator, "System.IO.Compression", "Zip64EndOfCentralDirectoryLocator");
