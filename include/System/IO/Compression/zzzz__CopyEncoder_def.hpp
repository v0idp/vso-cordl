#pragma once
// IWYU pragma private; include "System/IO/Compression/CopyEncoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CopyEncoder)
namespace System::IO::Compression {
class DeflateInput;
}
namespace System::IO::Compression {
class OutputBuffer;
}
// Forward declare root types
namespace System::IO::Compression {
class CopyEncoder;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::CopyEncoder);
// Dependencies System.Object
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.CopyEncoder
class CORDL_TYPE CopyEncoder : public ::System::Object {
public:
// Declarations
/// @brief Method GetBlock, addr 0x2b0a818, size 0x124, virtual false, abstract: false, final false
inline void GetBlock(::System::IO::Compression::DeflateInput*  input, ::System::IO::Compression::OutputBuffer*  output, bool  isFinal) ;

/// @brief Method WriteLenNLen, addr 0x2b0aab0, size 0x34, virtual false, abstract: false, final false
inline void WriteLenNLen(uint16_t  len, ::System::IO::Compression::OutputBuffer*  output) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CopyEncoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CopyEncoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CopyEncoder(CopyEncoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CopyEncoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CopyEncoder(CopyEncoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11268};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::CopyEncoder, 0x10>, "Size mismatch!");

} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::CopyEncoder);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::CopyEncoder*, "System.IO.Compression", "CopyEncoder");
