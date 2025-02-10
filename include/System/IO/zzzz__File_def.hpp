#pragma once
// IWYU pragma private; include "System/IO/File.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(File)
namespace System::IO {
struct FileAccess;
}
namespace System::IO {
struct FileMode;
}
namespace System::IO {
struct FileShare;
}
namespace System::IO {
class FileStream;
}
namespace System::IO {
class StreamReader;
}
namespace System::IO {
class StreamWriter;
}
namespace System::Text {
class Encoding;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::IO {
class File;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::File);
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.File
class CORDL_TYPE File : public ::System::Object {
public:
// Declarations
/// @brief Method Copy, addr 0x26afce4, size 0x8, virtual false, abstract: false, final false
static inline void Copy(::StringW  sourceFileName, ::StringW  destFileName) ;

/// @brief Method Copy, addr 0x26afcec, size 0x18c, virtual false, abstract: false, final false
static inline void Copy(::StringW  sourceFileName, ::StringW  destFileName, bool  overwrite) ;

/// @brief Method Create, addr 0x26b02c4, size 0x8, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* Create(::StringW  path) ;

/// @brief Method Create, addr 0x26b02cc, size 0x84, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* Create(::StringW  path, int32_t  bufferSize) ;

/// @brief Method CreateText, addr 0x26afc38, size 0xac, virtual false, abstract: false, final false
static inline ::System::IO::StreamWriter* CreateText(::StringW  path) ;

/// @brief Method Delete, addr 0x26b0370, size 0xa4, virtual false, abstract: false, final false
static inline void Delete(::StringW  path) ;

/// @brief Method Exists, addr 0x26b05c4, size 0x1c0, virtual false, abstract: false, final false
static inline bool Exists(::StringW  path) ;

/// @brief Method GetLastWriteTime, addr 0x26b0a54, size 0x9c, virtual false, abstract: false, final false
static inline ::System::DateTime GetLastWriteTime(::StringW  path) ;

/// @brief Method InternalReadAllText, addr 0x26b0d48, size 0x1b8, virtual false, abstract: false, final false
static inline ::StringW InternalReadAllText(::StringW  path, ::System::Text::Encoding*  encoding) ;

/// @brief Method InternalWriteAllBytes, addr 0x26b194c, size 0x1d0, virtual false, abstract: false, final false
static inline void InternalWriteAllBytes(::StringW  path, ::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

/// @brief Method Move, addr 0x26b1b1c, size 0x224, virtual false, abstract: false, final false
static inline void Move(::StringW  sourceFileName, ::StringW  destFileName) ;

/// @brief Method Open, addr 0x26b0804, size 0x14, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* Open(::StringW  path, ::System::IO::FileMode  mode) ;

/// @brief Method Open, addr 0x26b0818, size 0x94, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* Open(::StringW  path, ::System::IO::FileMode  mode, ::System::IO::FileAccess  access, ::System::IO::FileShare  share) ;

/// @brief Method OpenRead, addr 0x26b0b94, size 0x78, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* OpenRead(::StringW  path) ;

/// @brief Method OpenText, addr 0x26afb90, size 0xa8, virtual false, abstract: false, final false
static inline ::System::IO::StreamReader* OpenText(::StringW  path) ;

/// @brief Method OpenWrite, addr 0x26b0c0c, size 0x78, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* OpenWrite(::StringW  path) ;

/// @brief Method ReadAllBytes, addr 0x26b1140, size 0x2c8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> ReadAllBytes(::StringW  path) ;

/// @brief Method ReadAllBytesUnknownLength, addr 0x26b1408, size 0x448, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> ReadAllBytesUnknownLength(::System::IO::FileStream*  fs) ;

/// @brief Method ReadAllText, addr 0x26b0c84, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW ReadAllText(::StringW  path) ;

/// @brief Method SetLastWriteTime, addr 0x26b08d0, size 0xb4, virtual false, abstract: false, final false
static inline void SetLastWriteTime(::StringW  path, ::System::DateTime  lastWriteTime) ;

/// @brief Method WriteAllBytes, addr 0x26b1850, size 0xfc, virtual false, abstract: false, final false
static inline void WriteAllBytes(::StringW  path, ::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

/// @brief Method WriteAllText, addr 0x26b0f00, size 0x240, virtual false, abstract: false, final false
static inline void WriteAllText(::StringW  path, ::StringW  contents) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr File() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "File", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
File(File && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "File", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
File(File const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3251};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::File, 0x10>, "Size mismatch!");

} // namespace end def System::IO
NEED_NO_BOX(::System::IO::File);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::File*, "System.IO", "File");
