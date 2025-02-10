#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipLocalFileHeader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ZipLocalFileHeader)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::IO::Compression {
struct ZipGenericExtraField;
}
namespace System::IO {
class BinaryReader;
}
// Forward declare root types
namespace System::IO::Compression {
struct ZipLocalFileHeader;
}
// Write type traits
MARK_VAL_T(::System::IO::Compression::ZipLocalFileHeader);
// Dependencies 
namespace System::IO::Compression {
// Is value type: true
// CS Name: System.IO.Compression.ZipLocalFileHeader
#pragma pack(push, 0)
struct CORDL_TYPE ZipLocalFileHeader {
public:
// Declarations
/// @brief Method GetExtraFields, addr 0x2b15da0, size 0x270, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>* GetExtraFields(::System::IO::BinaryReader*  reader) ;

/// @brief Method TrySkipBlock, addr 0x2b15074, size 0x188, virtual false, abstract: false, final false
static inline bool TrySkipBlock(::System::IO::BinaryReader*  reader) ;

// Ctor Parameters []
// @brief default ctor
constexpr ZipLocalFileHeader() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11302};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::ZipLocalFileHeader, 0x1>, "Size mismatch!");

} // namespace end def System::IO::Compression
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::ZipLocalFileHeader, "System.IO.Compression", "ZipLocalFileHeader");
