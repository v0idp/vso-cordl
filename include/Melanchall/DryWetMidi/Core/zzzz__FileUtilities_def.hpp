#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/FileUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileUtilities)
namespace Microsoft::Win32::SafeHandles {
class SafeFileHandle;
}
namespace System::IO {
class FileStream;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class FileUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::FileUtilities);
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.FileUtilities
class CORDL_TYPE FileUtilities : public ::System::Object {
public:
// Declarations
/// @brief Method CreateFile, addr 0x25a4e8c, size 0x118, virtual false, abstract: false, final false
static inline ::Microsoft::Win32::SafeHandles::SafeFileHandle* CreateFile(::StringW  lpFileName, uint32_t  dwDesiredAccess, uint32_t  dwShareMode, ::System::IntPtr  lpSecurityAttributes, uint32_t  dwCreationDisposition, uint32_t  dwFlagsAndAttributes, ::System::IntPtr  hTemplateFile) ;

/// @brief Method GetFileHandle, addr 0x25a502c, size 0x114, virtual false, abstract: false, final false
static inline ::Microsoft::Win32::SafeHandles::SafeFileHandle* GetFileHandle(::StringW  filePath, uint32_t  fileAccess, uint32_t  creationDisposition) ;

/// @brief Method OpenFileForWrite, addr 0x25a3e3c, size 0x138, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* OpenFileForWrite(::StringW  filePath, bool  overwriteFile) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileUtilities(FileUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileUtilities(FileUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11657};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::FileUtilities, 0x10>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::FileUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::FileUtilities*, "Melanchall.DryWetMidi.Core", "FileUtilities");
