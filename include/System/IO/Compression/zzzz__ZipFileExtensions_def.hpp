#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipFileExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ZipFileExtensions)
namespace System::IO::Compression {
struct CompressionLevel;
}
namespace System::IO::Compression {
class ZipArchiveEntry;
}
namespace System::IO::Compression {
class ZipArchive;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace System::IO::Compression {
class ZipFileExtensions;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::ZipFileExtensions);
// Dependencies System.Object
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.ZipFileExtensions
class CORDL_TYPE ZipFileExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method DoCreateEntryFromFile, addr 0x2b1bcc0, size 0x544, virtual false, abstract: false, final false
static inline ::System::IO::Compression::ZipArchiveEntry* DoCreateEntryFromFile(::System::IO::Compression::ZipArchive*  destination, ::StringW  sourceFileName, ::StringW  entryName, ::System::Nullable_1<::System::IO::Compression::CompressionLevel>  compressionLevel) ;

/// @brief Method ExtractToDirectory, addr 0x2b1b490, size 0x5b0, virtual false, abstract: false, final false
static inline void ExtractToDirectory(::System::IO::Compression::ZipArchive*  source, ::StringW  destinationDirectoryName, bool  overwrite) ;

/// @brief Method ExtractToFile, addr 0x2b1c5fc, size 0x3e0, virtual false, abstract: false, final false
static inline void ExtractToFile(::System::IO::Compression::ZipArchiveEntry*  source, ::StringW  destinationFileName, bool  overwrite) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipFileExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipFileExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipFileExtensions(ZipFileExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipFileExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipFileExtensions(ZipFileExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12441};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::ZipFileExtensions, 0x10>, "Size mismatch!");

} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::ZipFileExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::ZipFileExtensions*, "System.IO.Compression", "ZipFileExtensions");
