#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipHelper)
namespace System::IO {
class Stream;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::IO::Compression {
class ZipHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::ZipHelper);
// Dependencies System.DateTime, System.Object
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.ZipHelper
class CORDL_TYPE ZipHelper : public ::System::Object {
public:
// Declarations
/// @brief Field s_invalidDateIndicator, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_invalidDateIndicator, put=setStaticF_s_invalidDateIndicator)) ::System::DateTime  s_invalidDateIndicator;

/// @brief Method AdvanceToPosition, addr 0x2b18b58, size 0xf8, virtual false, abstract: false, final false
static inline void AdvanceToPosition(::System::IO::Stream*  stream, int64_t  position) ;

/// @brief Method DateTimeToDosTime, addr 0x2b159d4, size 0xe8, virtual false, abstract: false, final false
static inline uint32_t DateTimeToDosTime(::System::DateTime  dateTime) ;

/// @brief Method DosTimeToDateTime, addr 0x2b14348, size 0xfc, virtual false, abstract: false, final false
static inline ::System::DateTime DosTimeToDateTime(uint32_t  dateTime) ;

/// @brief Method ReadBytes, addr 0x2b16010, size 0xb8, virtual false, abstract: false, final false
static inline void ReadBytes(::System::IO::Stream*  stream, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  bytesToRead) ;

/// @brief Method RequiresUnicode, addr 0x2b154b8, size 0x70, virtual false, abstract: false, final false
static inline bool RequiresUnicode(::StringW  test) ;

/// @brief Method SeekBackwardsAndRead, addr 0x2b19b50, size 0x178, virtual false, abstract: false, final false
static inline bool SeekBackwardsAndRead(::System::IO::Stream*  stream, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, ::ByRef<int32_t>  bufferPointer) ;

/// @brief Method SeekBackwardsToSignature, addr 0x2b13228, size 0x128, virtual false, abstract: false, final false
static inline bool SeekBackwardsToSignature(::System::IO::Stream*  stream, uint32_t  signatureToFind) ;

static inline ::System::DateTime getStaticF_s_invalidDateIndicator() ;

static inline void setStaticF_s_invalidDateIndicator(::System::DateTime  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipHelper(ZipHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipHelper(ZipHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11308};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::ZipHelper, 0x10>, "Size mismatch!");

} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::ZipHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::ZipHelper*, "System.IO.Compression", "ZipHelper");
