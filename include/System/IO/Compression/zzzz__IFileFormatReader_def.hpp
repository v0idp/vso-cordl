#pragma once
// IWYU pragma private; include "System/IO/Compression/IFileFormatReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IFileFormatReader)
namespace System::IO::Compression {
class InputBuffer;
}
// Forward declare root types
namespace System::IO::Compression {
class IFileFormatReader;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::IFileFormatReader);
// Dependencies 
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.IFileFormatReader
class CORDL_TYPE IFileFormatReader {
public:
// Declarations
/// @brief Method ReadFooter, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ReadFooter(::System::IO::Compression::InputBuffer*  input) ;

/// @brief Method ReadHeader, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ReadHeader(::System::IO::Compression::InputBuffer*  input) ;

/// @brief Method UpdateWithBytesRead, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UpdateWithBytesRead(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  bytesToCopy) ;

/// @brief Method Validate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Validate() ;

// Ctor Parameters [CppParam { name: "", ty: "IFileFormatReader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFileFormatReader(IFileFormatReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11280};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::IFileFormatReader);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::IFileFormatReader*, "System.IO.Compression", "IFileFormatReader");
