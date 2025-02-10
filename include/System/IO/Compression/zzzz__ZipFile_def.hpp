#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipFile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipFile)
namespace System::IO::Compression {
struct CompressionLevel;
}
namespace System::IO::Compression {
struct ZipArchiveMode;
}
namespace System::IO::Compression {
class ZipArchive;
}
namespace System::IO {
class DirectoryInfo;
}
namespace System::Text {
class Encoding;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace System::IO::Compression {
class ZipFile;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::ZipFile);
// Dependencies System.Object
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.ZipFile
class CORDL_TYPE ZipFile : public ::System::Object {
public:
// Declarations
/// @brief Method CreateFromDirectory, addr 0x2b1aa54, size 0x10, virtual false, abstract: false, final false
static inline void CreateFromDirectory(::StringW  sourceDirectoryName, ::StringW  destinationArchiveFileName) ;

/// @brief Method DoCreateFromDirectory, addr 0x2b1aa64, size 0x84c, virtual false, abstract: false, final false
static inline void DoCreateFromDirectory(::StringW  sourceDirectoryName, ::StringW  destinationArchiveFileName, ::System::Nullable_1<::System::IO::Compression::CompressionLevel>  compressionLevel, bool  includeBaseDirectory, ::System::Text::Encoding*  entryNameEncoding) ;

/// @brief Method EnsureCapacity, addr 0x2b1c478, size 0x184, virtual false, abstract: false, final false
static inline void EnsureCapacity(::ByRef<::ArrayW<char16_t,::Array<char16_t>*>>  buffer, int32_t  min) ;

/// @brief Method EntryFromPath, addr 0x2b1ba40, size 0x280, virtual false, abstract: false, final false
static inline ::StringW EntryFromPath(::StringW  entry, int32_t  offset, int32_t  length, ::ByRef<::ArrayW<char16_t,::Array<char16_t>*>>  buffer, bool  appendPathSeparator) ;

/// @brief Method ExtractToDirectory, addr 0x2b1b2b0, size 0xc, virtual false, abstract: false, final false
static inline void ExtractToDirectory(::StringW  sourceArchiveFileName, ::StringW  destinationDirectoryName) ;

/// @brief Method ExtractToDirectory, addr 0x2b1b2bc, size 0x8, virtual false, abstract: false, final false
static inline void ExtractToDirectory(::StringW  sourceArchiveFileName, ::StringW  destinationDirectoryName, ::System::Text::Encoding*  entryNameEncoding) ;

/// @brief Method ExtractToDirectory, addr 0x2b1b2c4, size 0x1cc, virtual false, abstract: false, final false
static inline void ExtractToDirectory(::StringW  sourceArchiveFileName, ::StringW  destinationDirectoryName, ::System::Text::Encoding*  entryNameEncoding, bool  overwrite) ;

/// @brief Method IsDirEmpty, addr 0x2b1c204, size 0x274, virtual false, abstract: false, final false
static inline bool IsDirEmpty(::System::IO::DirectoryInfo*  possiblyEmptyDir) ;

/// @brief Method Open, addr 0x2b1a88c, size 0x8, virtual false, abstract: false, final false
static inline ::System::IO::Compression::ZipArchive* Open(::StringW  archiveFileName, ::System::IO::Compression::ZipArchiveMode  mode) ;

/// @brief Method Open, addr 0x2b1a894, size 0x1c0, virtual false, abstract: false, final false
static inline ::System::IO::Compression::ZipArchive* Open(::StringW  archiveFileName, ::System::IO::Compression::ZipArchiveMode  mode, ::System::Text::Encoding*  entryNameEncoding) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipFile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipFile", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipFile(ZipFile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipFile", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipFile(ZipFile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12440};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::ZipFile, 0x10>, "Size mismatch!");

} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::ZipFile);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::ZipFile*, "System.IO.Compression", "ZipFile");
