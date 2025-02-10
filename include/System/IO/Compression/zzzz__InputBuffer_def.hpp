#pragma once
// IWYU pragma private; include "System/IO/Compression/InputBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputBuffer)
// Forward declare root types
namespace System::IO::Compression {
class InputBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::InputBuffer);
// Dependencies System.Object
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.InputBuffer
class CORDL_TYPE InputBuffer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AvailableBits)) int32_t  AvailableBits;

 __declspec(property(get=get_AvailableBytes)) int32_t  AvailableBytes;

/// @brief Field _bitBuffer, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__bitBuffer, put=__cordl_internal_set__bitBuffer)) uint32_t  _bitBuffer;

/// @brief Field _bitsInBuffer, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__bitsInBuffer, put=__cordl_internal_set__bitsInBuffer)) int32_t  _bitsInBuffer;

/// @brief Field _buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _buffer;

/// @brief Field _end, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__end, put=__cordl_internal_set__end)) int32_t  _end;

/// @brief Field _start, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__start, put=__cordl_internal_set__start)) int32_t  _start;

/// @brief Method CopyTo, addr 0x2b10660, size 0xe0, virtual false, abstract: false, final false
inline int32_t CopyTo(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  offset, int32_t  length) ;

/// @brief Method EnsureBitsAvailable, addr 0x2b0f438, size 0xac, virtual false, abstract: false, final false
inline bool EnsureBitsAvailable(int32_t  count) ;

/// @brief Method GetBitMask, addr 0x2b10650, size 0x10, virtual false, abstract: false, final false
inline uint32_t GetBitMask(int32_t  count) ;

/// @brief Method GetBits, addr 0x2b0f4e4, size 0x44, virtual false, abstract: false, final false
inline int32_t GetBits(int32_t  count) ;

/// @brief Method NeedsInput, addr 0x2b10640, size 0x10, virtual false, abstract: false, final false
inline bool NeedsInput() ;

static inline ::System::IO::Compression::InputBuffer* New_ctor() ;

/// @brief Method SetInput, addr 0x2b0ef98, size 0x10, virtual false, abstract: false, final false
inline void SetInput(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  length) ;

/// @brief Method SkipBits, addr 0x2b0ee68, size 0x14, virtual false, abstract: false, final false
inline void SkipBits(int32_t  n) ;

/// @brief Method SkipToByteBoundary, addr 0x2b101ac, size 0x24, virtual false, abstract: false, final false
inline void SkipToByteBoundary() ;

/// @brief Method TryLoad16Bits, addr 0x2b0ed78, size 0xf0, virtual false, abstract: false, final false
inline uint32_t TryLoad16Bits() ;

constexpr uint32_t const& __cordl_internal_get__bitBuffer() const;

constexpr uint32_t& __cordl_internal_get__bitBuffer() ;

constexpr int32_t const& __cordl_internal_get__bitsInBuffer() const;

constexpr int32_t& __cordl_internal_get__bitsInBuffer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__buffer() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__buffer() ;

constexpr int32_t const& __cordl_internal_get__end() const;

constexpr int32_t& __cordl_internal_get__end() ;

constexpr int32_t const& __cordl_internal_get__start() const;

constexpr int32_t& __cordl_internal_get__start() ;

constexpr void __cordl_internal_set__bitBuffer(uint32_t  value) ;

constexpr void __cordl_internal_set__bitsInBuffer(int32_t  value) ;

constexpr void __cordl_internal_set__buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set__end(int32_t  value) ;

constexpr void __cordl_internal_set__start(int32_t  value) ;

/// @brief Method .ctor, addr 0x2b0ef68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AvailableBits, addr 0x2b10618, size 0x8, virtual false, abstract: false, final false
inline int32_t get_AvailableBits() ;

/// @brief Method get_AvailableBytes, addr 0x2b10620, size 0x20, virtual false, abstract: false, final false
inline int32_t get_AvailableBytes() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputBuffer(InputBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputBuffer(InputBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11284};

/// @brief Field _buffer, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____buffer;

/// @brief Field _start, offset: 0x18, size: 0x4, def value: None
 int32_t  ____start;

/// @brief Field _end, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____end;

/// @brief Field _bitBuffer, offset: 0x20, size: 0x4, def value: None
 uint32_t  ____bitBuffer;

/// @brief Field _bitsInBuffer, offset: 0x24, size: 0x4, def value: None
 int32_t  ____bitsInBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::InputBuffer, ____buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InputBuffer, ____start) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InputBuffer, ____end) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InputBuffer, ____bitBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InputBuffer, ____bitsInBuffer) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::InputBuffer, 0x28>, "Size mismatch!");

} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::InputBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::InputBuffer*, "System.IO.Compression", "InputBuffer");
