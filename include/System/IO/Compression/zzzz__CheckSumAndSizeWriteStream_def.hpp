#pragma once
// IWYU pragma private; include "System/IO/Compression/CheckSumAndSizeWriteStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CheckSumAndSizeWriteStream)
namespace System::IO::Compression {
class ZipArchiveEntry;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class Action_6;
}
namespace System {
class EventHandler;
}
// Forward declare root types
namespace System::IO::Compression {
class CheckSumAndSizeWriteStream;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::CheckSumAndSizeWriteStream);
// Dependencies System.IO.Stream
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.CheckSumAndSizeWriteStream
class CORDL_TYPE CheckSumAndSizeWriteStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field _baseBaseStream, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseBaseStream, put=__cordl_internal_set__baseBaseStream)) ::System::IO::Stream*  _baseBaseStream;

/// @brief Field _baseStream, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseStream, put=__cordl_internal_set__baseStream)) ::System::IO::Stream*  _baseStream;

/// @brief Field _canWrite, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get__canWrite, put=__cordl_internal_set__canWrite)) bool  _canWrite;

/// @brief Field _checksum, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__checksum, put=__cordl_internal_set__checksum)) uint32_t  _checksum;

/// @brief Field _everWritten, offset 0x47, size 0x1 
 __declspec(property(get=__cordl_internal_get__everWritten, put=__cordl_internal_set__everWritten)) bool  _everWritten;

/// @brief Field _initialPosition, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__initialPosition, put=__cordl_internal_set__initialPosition)) int64_t  _initialPosition;

/// @brief Field _isDisposed, offset 0x46, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDisposed, put=__cordl_internal_set__isDisposed)) bool  _isDisposed;

/// @brief Field _leaveOpenOnClose, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__leaveOpenOnClose, put=__cordl_internal_set__leaveOpenOnClose)) bool  _leaveOpenOnClose;

/// @brief Field _onClose, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__onClose, put=__cordl_internal_set__onClose)) ::System::EventHandler*  _onClose;

/// @brief Field _position, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__position, put=__cordl_internal_set__position)) int64_t  _position;

/// @brief Field _saveCrcAndSizes, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__saveCrcAndSizes, put=__cordl_internal_set__saveCrcAndSizes)) ::System::Action_6<int64_t,int64_t,uint32_t,::System::IO::Stream*,::System::IO::Compression::ZipArchiveEntry*,::System::EventHandler*>*  _saveCrcAndSizes;

/// @brief Field _zipArchiveEntry, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__zipArchiveEntry, put=__cordl_internal_set__zipArchiveEntry)) ::System::IO::Compression::ZipArchiveEntry*  _zipArchiveEntry;

/// @brief Method Dispose, addr 0x2b19a8c, size 0xc4, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Flush, addr 0x2b19a60, size 0x2c, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::System::IO::Compression::CheckSumAndSizeWriteStream* New_ctor(::System::IO::Stream*  baseStream, ::System::IO::Stream*  baseBaseStream, bool  leaveOpenOnClose, ::System::IO::Compression::ZipArchiveEntry*  entry, ::System::EventHandler*  onClose, ::System::Action_6<int64_t,int64_t,uint32_t,::System::IO::Stream*,::System::IO::Compression::ZipArchiveEntry*,::System::EventHandler*>*  saveCrcAndSizes) ;

/// @brief Method Read, addr 0x2b19708, size 0x50, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Seek, addr 0x2b19758, size 0x50, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0x2b197a8, size 0x50, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method ThrowIfDisposed, addr 0x2b195fc, size 0x8c, virtual false, abstract: false, final false
inline void ThrowIfDisposed() ;

/// @brief Method Write, addr 0x2b197f8, size 0x1ec, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__baseBaseStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__baseBaseStream() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__baseStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__baseStream() ;

constexpr bool const& __cordl_internal_get__canWrite() const;

constexpr bool& __cordl_internal_get__canWrite() ;

constexpr uint32_t const& __cordl_internal_get__checksum() const;

constexpr uint32_t& __cordl_internal_get__checksum() ;

constexpr bool const& __cordl_internal_get__everWritten() const;

constexpr bool& __cordl_internal_get__everWritten() ;

constexpr int64_t const& __cordl_internal_get__initialPosition() const;

constexpr int64_t& __cordl_internal_get__initialPosition() ;

constexpr bool const& __cordl_internal_get__isDisposed() const;

constexpr bool& __cordl_internal_get__isDisposed() ;

constexpr bool const& __cordl_internal_get__leaveOpenOnClose() const;

constexpr bool& __cordl_internal_get__leaveOpenOnClose() ;

constexpr ::System::EventHandler* const& __cordl_internal_get__onClose() const;

constexpr ::System::EventHandler*& __cordl_internal_get__onClose() ;

constexpr int64_t const& __cordl_internal_get__position() const;

constexpr int64_t& __cordl_internal_get__position() ;

constexpr ::System::Action_6<int64_t,int64_t,uint32_t,::System::IO::Stream*,::System::IO::Compression::ZipArchiveEntry*,::System::EventHandler*>* const& __cordl_internal_get__saveCrcAndSizes() const;

constexpr ::System::Action_6<int64_t,int64_t,uint32_t,::System::IO::Stream*,::System::IO::Compression::ZipArchiveEntry*,::System::EventHandler*>*& __cordl_internal_get__saveCrcAndSizes() ;

constexpr ::System::IO::Compression::ZipArchiveEntry* const& __cordl_internal_get__zipArchiveEntry() const;

constexpr ::System::IO::Compression::ZipArchiveEntry*& __cordl_internal_get__zipArchiveEntry() ;

constexpr void __cordl_internal_set__baseBaseStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__baseStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__canWrite(bool  value) ;

constexpr void __cordl_internal_set__checksum(uint32_t  value) ;

constexpr void __cordl_internal_set__everWritten(bool  value) ;

constexpr void __cordl_internal_set__initialPosition(int64_t  value) ;

constexpr void __cordl_internal_set__isDisposed(bool  value) ;

constexpr void __cordl_internal_set__leaveOpenOnClose(bool  value) ;

constexpr void __cordl_internal_set__onClose(::System::EventHandler*  value) ;

constexpr void __cordl_internal_set__position(int64_t  value) ;

constexpr void __cordl_internal_set__saveCrcAndSizes(::System::Action_6<int64_t,int64_t,uint32_t,::System::IO::Stream*,::System::IO::Compression::ZipArchiveEntry*,::System::EventHandler*>*  value) ;

constexpr void __cordl_internal_set__zipArchiveEntry(::System::IO::Compression::ZipArchiveEntry*  value) ;

/// @brief Method .ctor, addr 0x2b164d4, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  baseStream, ::System::IO::Stream*  baseBaseStream, bool  leaveOpenOnClose, ::System::IO::Compression::ZipArchiveEntry*  entry, ::System::EventHandler*  onClose, ::System::Action_6<int64_t,int64_t,uint32_t,::System::IO::Stream*,::System::IO::Compression::ZipArchiveEntry*,::System::EventHandler*>*  saveCrcAndSizes) ;

/// @brief Method get_CanRead, addr 0x2b196f0, size 0x8, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0x2b196f8, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0x2b19700, size 0x8, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Length, addr 0x2b195ac, size 0x50, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0x2b19688, size 0x18, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method set_Position, addr 0x2b196a0, size 0x50, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CheckSumAndSizeWriteStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CheckSumAndSizeWriteStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CheckSumAndSizeWriteStream(CheckSumAndSizeWriteStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CheckSumAndSizeWriteStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CheckSumAndSizeWriteStream(CheckSumAndSizeWriteStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11307};

/// @brief Field _baseStream, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  ____baseStream;

/// @brief Field _baseBaseStream, offset: 0x30, size: 0x8, def value: None
 ::System::IO::Stream*  ____baseBaseStream;

/// @brief Field _position, offset: 0x38, size: 0x8, def value: None
 int64_t  ____position;

/// @brief Field _checksum, offset: 0x40, size: 0x4, def value: None
 uint32_t  ____checksum;

/// @brief Field _leaveOpenOnClose, offset: 0x44, size: 0x1, def value: None
 bool  ____leaveOpenOnClose;

/// @brief Field _canWrite, offset: 0x45, size: 0x1, def value: None
 bool  ____canWrite;

/// @brief Field _isDisposed, offset: 0x46, size: 0x1, def value: None
 bool  ____isDisposed;

/// @brief Field _everWritten, offset: 0x47, size: 0x1, def value: None
 bool  ____everWritten;

/// @brief Field _initialPosition, offset: 0x48, size: 0x8, def value: None
 int64_t  ____initialPosition;

/// @brief Field _zipArchiveEntry, offset: 0x50, size: 0x8, def value: None
 ::System::IO::Compression::ZipArchiveEntry*  ____zipArchiveEntry;

/// @brief Field _onClose, offset: 0x58, size: 0x8, def value: None
 ::System::EventHandler*  ____onClose;

/// @brief Field _saveCrcAndSizes, offset: 0x60, size: 0x8, def value: None
 ::System::Action_6<int64_t,int64_t,uint32_t,::System::IO::Stream*,::System::IO::Compression::ZipArchiveEntry*,::System::EventHandler*>*  ____saveCrcAndSizes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::CheckSumAndSizeWriteStream, ____baseStream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::CheckSumAndSizeWriteStream, ____baseBaseStream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::CheckSumAndSizeWriteStream, ____position) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::CheckSumAndSizeWriteStream, ____checksum) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::CheckSumAndSizeWriteStream, ____leaveOpenOnClose) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::CheckSumAndSizeWriteStream, ____canWrite) == 0x45, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::CheckSumAndSizeWriteStream, ____isDisposed) == 0x46, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::CheckSumAndSizeWriteStream, ____everWritten) == 0x47, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::CheckSumAndSizeWriteStream, ____initialPosition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::CheckSumAndSizeWriteStream, ____zipArchiveEntry) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::CheckSumAndSizeWriteStream, ____onClose) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::CheckSumAndSizeWriteStream, ____saveCrcAndSizes) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::CheckSumAndSizeWriteStream, 0x68>, "Size mismatch!");

} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::CheckSumAndSizeWriteStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::CheckSumAndSizeWriteStream*, "System.IO.Compression", "CheckSumAndSizeWriteStream");
