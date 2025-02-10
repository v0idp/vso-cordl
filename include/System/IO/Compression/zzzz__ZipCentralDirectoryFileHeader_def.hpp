#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipCentralDirectoryFileHeader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZipCentralDirectoryFileHeader)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::IO::Compression {
struct ZipGenericExtraField;
}
namespace System::IO {
class BinaryReader;
}
// Forward declare root types
namespace System::IO::Compression {
struct ZipCentralDirectoryFileHeader;
}
// Write type traits
MARK_VAL_T(::System::IO::Compression::ZipCentralDirectoryFileHeader);
// Dependencies 
namespace System::IO::Compression {
// Is value type: true
// CS Name: System.IO.Compression.ZipCentralDirectoryFileHeader
struct CORDL_TYPE ZipCentralDirectoryFileHeader {
public:
// Declarations
/// @brief Method TryReadBlock, addr 0x2b12b9c, size 0x68c, virtual false, abstract: false, final false
static inline bool TryReadBlock(::System::IO::BinaryReader*  reader, bool  saveExtraFieldsAndComments, ::ByRef<::System::IO::Compression::ZipCentralDirectoryFileHeader>  header) ;

// Ctor Parameters []
// @brief default ctor
constexpr ZipCentralDirectoryFileHeader() ;

// Ctor Parameters [CppParam { name: "VersionMadeByCompatibility", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "VersionMadeBySpecification", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "VersionNeededToExtract", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "GeneralPurposeBitFlag", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "CompressionMethod", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "LastModified", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Crc32", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "CompressedSize", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "UncompressedSize", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "FilenameLength", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "ExtraFieldLength", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "FileCommentLength", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "DiskNumberStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "InternalFileAttributes", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "ExternalFileAttributes", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "RelativeOffsetOfLocalHeader", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "Filename", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "FileComment", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "ExtraFields", ty: "::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*", modifiers: "", def_value: None }]
constexpr ZipCentralDirectoryFileHeader(uint8_t  VersionMadeByCompatibility, uint8_t  VersionMadeBySpecification, uint16_t  VersionNeededToExtract, uint16_t  GeneralPurposeBitFlag, uint16_t  CompressionMethod, uint32_t  LastModified, uint32_t  Crc32, int64_t  CompressedSize, int64_t  UncompressedSize, uint16_t  FilenameLength, uint16_t  ExtraFieldLength, uint16_t  FileCommentLength, int32_t  DiskNumberStart, uint16_t  InternalFileAttributes, uint32_t  ExternalFileAttributes, int64_t  RelativeOffsetOfLocalHeader, ::ArrayW<uint8_t,::Array<uint8_t>*>  Filename, ::ArrayW<uint8_t,::Array<uint8_t>*>  FileComment, ::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*  ExtraFields) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11303};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field VersionMadeByCompatibility, offset: 0x0, size: 0x1, def value: None
 uint8_t  VersionMadeByCompatibility;

/// @brief Field VersionMadeBySpecification, offset: 0x1, size: 0x1, def value: None
 uint8_t  VersionMadeBySpecification;

/// @brief Field VersionNeededToExtract, offset: 0x2, size: 0x2, def value: None
 uint16_t  VersionNeededToExtract;

/// @brief Field GeneralPurposeBitFlag, offset: 0x4, size: 0x2, def value: None
 uint16_t  GeneralPurposeBitFlag;

/// @brief Field CompressionMethod, offset: 0x6, size: 0x2, def value: None
 uint16_t  CompressionMethod;

/// @brief Field LastModified, offset: 0x8, size: 0x4, def value: None
 uint32_t  LastModified;

/// @brief Field Crc32, offset: 0xc, size: 0x4, def value: None
 uint32_t  Crc32;

/// @brief Field CompressedSize, offset: 0x10, size: 0x8, def value: None
 int64_t  CompressedSize;

/// @brief Field UncompressedSize, offset: 0x18, size: 0x8, def value: None
 int64_t  UncompressedSize;

/// @brief Field FilenameLength, offset: 0x20, size: 0x2, def value: None
 uint16_t  FilenameLength;

/// @brief Field ExtraFieldLength, offset: 0x22, size: 0x2, def value: None
 uint16_t  ExtraFieldLength;

/// @brief Field FileCommentLength, offset: 0x24, size: 0x2, def value: None
 uint16_t  FileCommentLength;

/// @brief Field DiskNumberStart, offset: 0x28, size: 0x4, def value: None
 int32_t  DiskNumberStart;

/// @brief Field InternalFileAttributes, offset: 0x2c, size: 0x2, def value: None
 uint16_t  InternalFileAttributes;

/// @brief Field ExternalFileAttributes, offset: 0x30, size: 0x4, def value: None
 uint32_t  ExternalFileAttributes;

/// @brief Field RelativeOffsetOfLocalHeader, offset: 0x38, size: 0x8, def value: None
 int64_t  RelativeOffsetOfLocalHeader;

/// @brief Field Filename, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  Filename;

/// @brief Field FileComment, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  FileComment;

/// @brief Field ExtraFields, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*  ExtraFields;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::ZipCentralDirectoryFileHeader, VersionMadeByCompatibility) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipCentralDirectoryFileHeader, VersionMadeBySpecification) == 0x1, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipCentralDirectoryFileHeader, VersionNeededToExtract) == 0x2, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipCentralDirectoryFileHeader, GeneralPurposeBitFlag) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipCentralDirectoryFileHeader, CompressionMethod) == 0x6, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipCentralDirectoryFileHeader, LastModified) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipCentralDirectoryFileHeader, Crc32) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipCentralDirectoryFileHeader, CompressedSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipCentralDirectoryFileHeader, UncompressedSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipCentralDirectoryFileHeader, FilenameLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipCentralDirectoryFileHeader, ExtraFieldLength) == 0x22, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipCentralDirectoryFileHeader, FileCommentLength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipCentralDirectoryFileHeader, DiskNumberStart) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipCentralDirectoryFileHeader, InternalFileAttributes) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipCentralDirectoryFileHeader, ExternalFileAttributes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipCentralDirectoryFileHeader, RelativeOffsetOfLocalHeader) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipCentralDirectoryFileHeader, Filename) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipCentralDirectoryFileHeader, FileComment) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipCentralDirectoryFileHeader, ExtraFields) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::ZipCentralDirectoryFileHeader, 0x58>, "Size mismatch!");

} // namespace end def System::IO::Compression
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::ZipCentralDirectoryFileHeader, "System.IO.Compression", "ZipCentralDirectoryFileHeader");
