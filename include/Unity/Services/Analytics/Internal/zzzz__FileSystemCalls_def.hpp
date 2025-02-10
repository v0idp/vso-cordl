#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/FileSystemCalls.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IFileSystemCalls_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileSystemCalls)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class FileSystemCalls;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::FileSystemCalls);
// Dependencies System.Object, Unity.Services.Analytics.Internal.IFileSystemCalls
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.FileSystemCalls
class CORDL_TYPE FileSystemCalls : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IFileSystemCalls"
constexpr operator  ::Unity::Services::Analytics::Internal::IFileSystemCalls*() noexcept;

/// @brief Method CanAccessFileSystem, addr 0x2e91e18, size 0x10c, virtual true, abstract: false, final true
inline bool CanAccessFileSystem() ;

/// @brief Method DeleteFile, addr 0x2e91f30, size 0xc, virtual true, abstract: false, final true
inline void DeleteFile(::StringW  path) ;

/// @brief Method FileExists, addr 0x2e91f24, size 0xc, virtual true, abstract: false, final true
inline bool FileExists(::StringW  path) ;

static inline ::Unity::Services::Analytics::Internal::FileSystemCalls* New_ctor() ;

/// @brief Method OpenFileForWriting, addr 0x2e91f3c, size 0x60, virtual true, abstract: false, final true
inline ::System::IO::Stream* OpenFileForWriting(::StringW  path) ;

/// @brief Method .ctor, addr 0x2e8a864, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Services::Analytics::Internal::IFileSystemCalls"
constexpr ::Unity::Services::Analytics::Internal::IFileSystemCalls* i___Unity__Services__Analytics__Internal__IFileSystemCalls() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileSystemCalls() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileSystemCalls", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileSystemCalls(FileSystemCalls && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemCalls", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileSystemCalls(FileSystemCalls const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11888};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Internal::FileSystemCalls, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::FileSystemCalls);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::FileSystemCalls*, "Unity.Services.Analytics.Internal", "FileSystemCalls");
