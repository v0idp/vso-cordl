#pragma once
// IWYU pragma private; include "System/IO/FileInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileSystemInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileInfo)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::IO {
class FileInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::FileInfo);
// Dependencies System.IO.FileSystemInfo
namespace System::IO {
// Is value type: false
// CS Name: System.IO.FileInfo
class CORDL_TYPE FileInfo : public ::System::IO::FileSystemInfo {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

static inline ::System::IO::FileInfo* New_ctor() ;

static inline ::System::IO::FileInfo* New_ctor(::StringW  fileName) ;

static inline ::System::IO::FileInfo* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::IO::FileInfo* New_ctor(::StringW  originalPath, ::StringW  fullPath, ::StringW  fileName, bool  isNormalized) ;

/// @brief Method .ctor, addr 0x26b1e58, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x26b1e5c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::StringW  fileName) ;

/// @brief Method .ctor, addr 0x26b209c, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0x26b1e6c, size 0x124, virtual false, abstract: false, final false
inline void _ctor(::StringW  originalPath, ::StringW  fullPath, ::StringW  fileName, bool  isNormalized) ;

/// @brief Method get_Name, addr 0x26b20a0, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileInfo(FileInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileInfo(FileInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3252};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::FileInfo, 0xa8>, "Size mismatch!");

} // namespace end def System::IO
NEED_NO_BOX(::System::IO::FileInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileInfo*, "System.IO", "FileInfo");
