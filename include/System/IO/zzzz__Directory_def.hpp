#pragma once
// IWYU pragma private; include "System/IO/Directory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Directory)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::IO {
class DirectoryInfo;
}
namespace System::IO {
class EnumerationOptions;
}
namespace System::IO {
struct SearchTarget;
}
// Forward declare root types
namespace System::IO {
class Directory;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Directory);
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.Directory
class CORDL_TYPE Directory : public ::System::Object {
public:
// Declarations
/// @brief Method CreateDirectory, addr 0x26ad89c, size 0x13c, virtual false, abstract: false, final false
static inline ::System::IO::DirectoryInfo* CreateDirectory(::StringW  path) ;

/// @brief Method Delete, addr 0x26ae7f4, size 0x68, virtual false, abstract: false, final false
static inline void Delete(::StringW  path, bool  recursive) ;

/// @brief Method EnumerateFileSystemEntries, addr 0x26ae678, size 0xac, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EnumerateFileSystemEntries(::StringW  path) ;

/// @brief Method EnumerateFileSystemEntries, addr 0x26ae724, size 0xc, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* EnumerateFileSystemEntries(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions) ;

/// @brief Method Exists, addr 0x26ae060, size 0x178, virtual false, abstract: false, final false
static inline bool Exists(::StringW  path) ;

/// @brief Method GetCurrentDirectory, addr 0x26ae7ec, size 0x8, virtual false, abstract: false, final false
static inline ::StringW GetCurrentDirectory() ;

/// @brief Method GetDirectories, addr 0x26ae568, size 0xa8, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW,::Array<::StringW>*> GetDirectories(::StringW  path) ;

/// @brief Method GetDirectories, addr 0x26ae610, size 0x68, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW,::Array<::StringW>*> GetDirectories(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions) ;

/// @brief Method GetFiles, addr 0x26ae1f8, size 0xa8, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW,::Array<::StringW>*> GetFiles(::StringW  path) ;

/// @brief Method GetFiles, addr 0x26ae308, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW,::Array<::StringW>*> GetFiles(::StringW  path, ::StringW  searchPattern) ;

/// @brief Method GetFiles, addr 0x26ae2a0, size 0x68, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW,::Array<::StringW>*> GetFiles(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions) ;

/// @brief Method InsecureGetCurrentDirectory, addr 0x26ae920, size 0x94, virtual false, abstract: false, final false
static inline ::StringW InsecureGetCurrentDirectory() ;

/// @brief Method InternalEnumeratePaths, addr 0x26ae3a8, size 0x1c0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* InternalEnumeratePaths(::StringW  path, ::StringW  searchPattern, ::System::IO::SearchTarget  searchTarget, ::System::IO::EnumerationOptions*  options) ;

/// @brief Method InternalGetDirectoryRoot, addr 0x26ae730, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW InternalGetDirectoryRoot(::StringW  path) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Directory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Directory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Directory(Directory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Directory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Directory(Directory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3248};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Directory, 0x10>, "Size mismatch!");

} // namespace end def System::IO
NEED_NO_BOX(::System::IO::Directory);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Directory*, "System.IO", "Directory");
