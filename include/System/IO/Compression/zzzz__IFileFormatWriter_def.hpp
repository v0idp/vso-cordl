#pragma once
// IWYU pragma private; include "System/IO/Compression/IFileFormatWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IFileFormatWriter)
// Forward declare root types
namespace System::IO::Compression {
class IFileFormatWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::IFileFormatWriter);
// Dependencies 
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.IFileFormatWriter
class CORDL_TYPE IFileFormatWriter {
public:
// Declarations
/// @brief Method GetFooter, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetFooter() ;

/// @brief Method GetHeader, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetHeader() ;

/// @brief Method UpdateWithBytesRead, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UpdateWithBytesRead(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  bytesToCopy) ;

// Ctor Parameters [CppParam { name: "", ty: "IFileFormatWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFileFormatWriter(IFileFormatWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11279};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::IFileFormatWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::IFileFormatWriter*, "System.IO.Compression", "IFileFormatWriter");
