#pragma once
// IWYU pragma private; include "System/IO/Compression/OutputBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OutputBuffer)
namespace System::IO::Compression {
struct OutputBuffer_BufferState;
}
// Forward declare root types
namespace System::IO::Compression {
class OutputBuffer;
}
namespace System::IO::Compression {
struct OutputBuffer_BufferState;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::OutputBuffer);
MARK_VAL_T(::System::IO::Compression::OutputBuffer_BufferState);
// Dependencies 
namespace System::IO::Compression {
// Is value type: true
// CS Name: System.IO.Compression.OutputBuffer/BufferState
struct CORDL_TYPE OutputBuffer_BufferState {
public:
// Declarations
/// @brief Method .ctor, addr 0x2b10814, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  pos, uint32_t  bitBuf, int32_t  bitCount) ;

// Ctor Parameters []
// @brief default ctor
constexpr OutputBuffer_BufferState() ;

// Ctor Parameters [CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_bitBuf", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_bitCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OutputBuffer_BufferState(int32_t  _pos, uint32_t  _bitBuf, int32_t  _bitCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11287};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field _pos, offset: 0x0, size: 0x4, def value: None
 int32_t  _pos;

/// @brief Field _bitBuf, offset: 0x4, size: 0x4, def value: None
 uint32_t  _bitBuf;

/// @brief Field _bitCount, offset: 0x8, size: 0x4, def value: None
 int32_t  _bitCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::OutputBuffer_BufferState, _pos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::OutputBuffer_BufferState, _bitBuf) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::OutputBuffer_BufferState, _bitCount) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::OutputBuffer_BufferState, 0xc>, "Size mismatch!");

} // namespace end def System::IO::Compression
// Dependencies System.Object
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.OutputBuffer
class CORDL_TYPE OutputBuffer : public ::System::Object {
public:
// Declarations
using BufferState = ::System::IO::Compression::OutputBuffer_BufferState;

 __declspec(property(get=get_BitsInBuffer)) int32_t  BitsInBuffer;

 __declspec(property(get=get_BytesWritten)) int32_t  BytesWritten;

 __declspec(property(get=get_FreeBytes)) int32_t  FreeBytes;

/// @brief Field _bitBuf, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__bitBuf, put=__cordl_internal_set__bitBuf)) uint32_t  _bitBuf;

/// @brief Field _bitCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__bitCount, put=__cordl_internal_set__bitCount)) int32_t  _bitCount;

/// @brief Field _byteBuffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__byteBuffer, put=__cordl_internal_set__byteBuffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _byteBuffer;

/// @brief Field _pos, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__pos, put=__cordl_internal_set__pos)) int32_t  _pos;

/// @brief Method DumpState, addr 0x2b0d364, size 0xc, virtual false, abstract: false, final false
inline ::System::IO::Compression::OutputBuffer_BufferState DumpState() ;

/// @brief Method FlushBits, addr 0x2b0aa14, size 0x9c, virtual false, abstract: false, final false
inline void FlushBits() ;

/// @brief Method RestoreState, addr 0x2b0d390, size 0x10, virtual false, abstract: false, final false
inline void RestoreState(::System::IO::Compression::OutputBuffer_BufferState  state) ;

/// @brief Method UpdateBuffer, addr 0x2b0d358, size 0xc, virtual false, abstract: false, final false
inline void UpdateBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  output) ;

/// @brief Method WriteBits, addr 0x2b0a97c, size 0x98, virtual false, abstract: false, final false
inline void WriteBits(int32_t  n, uint32_t  bits) ;

/// @brief Method WriteByteUnaligned, addr 0x2b10808, size 0xc, virtual false, abstract: false, final false
inline void WriteByteUnaligned(uint8_t  b) ;

/// @brief Method WriteBytes, addr 0x2b0aae4, size 0x64, virtual false, abstract: false, final false
inline void WriteBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  byteArray, int32_t  offset, int32_t  count) ;

/// @brief Method WriteBytesUnaligned, addr 0x2b10788, size 0x80, virtual false, abstract: false, final false
inline void WriteBytesUnaligned(::ArrayW<uint8_t,::Array<uint8_t>*>  byteArray, int32_t  offset, int32_t  count) ;

/// @brief Method WriteUInt16, addr 0x2b0ab5c, size 0x68, virtual false, abstract: false, final false
inline void WriteUInt16(uint16_t  value) ;

constexpr uint32_t const& __cordl_internal_get__bitBuf() const;

constexpr uint32_t& __cordl_internal_get__bitBuf() ;

constexpr int32_t const& __cordl_internal_get__bitCount() const;

constexpr int32_t& __cordl_internal_get__bitCount() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__byteBuffer() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__byteBuffer() ;

constexpr int32_t const& __cordl_internal_get__pos() const;

constexpr int32_t& __cordl_internal_get__pos() ;

constexpr void __cordl_internal_set__bitBuf(uint32_t  value) ;

constexpr void __cordl_internal_set__bitCount(int32_t  value) ;

constexpr void __cordl_internal_set__byteBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set__pos(int32_t  value) ;

/// @brief Method get_BitsInBuffer, addr 0x2b0a960, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_BitsInBuffer() ;

/// @brief Method get_BytesWritten, addr 0x2b10780, size 0x8, virtual false, abstract: false, final false
inline int32_t get_BytesWritten() ;

/// @brief Method get_FreeBytes, addr 0x2b0a93c, size 0x24, virtual false, abstract: false, final false
inline int32_t get_FreeBytes() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OutputBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OutputBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OutputBuffer(OutputBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OutputBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OutputBuffer(OutputBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11288};

/// @brief Field _byteBuffer, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____byteBuffer;

/// @brief Field _pos, offset: 0x18, size: 0x4, def value: None
 int32_t  ____pos;

/// @brief Field _bitBuf, offset: 0x1c, size: 0x4, def value: None
 uint32_t  ____bitBuf;

/// @brief Field _bitCount, offset: 0x20, size: 0x4, def value: None
 int32_t  ____bitCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::OutputBuffer, ____byteBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::OutputBuffer, ____pos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::OutputBuffer, ____bitBuf) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::OutputBuffer, ____bitCount) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::OutputBuffer, 0x28>, "Size mismatch!");

} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::OutputBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::OutputBuffer*, "System.IO.Compression", "OutputBuffer");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::OutputBuffer_BufferState, "System.IO.Compression", "OutputBuffer/BufferState");
