#pragma once
// IWYU pragma private; include "System/IO/Compression/WrappedStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WrappedStream)
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
template<typename T>
class Action_1;
}
// Forward declare root types
namespace System::IO::Compression {
class WrappedStream;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::WrappedStream);
// Dependencies System.IO.Stream
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.WrappedStream
class CORDL_TYPE WrappedStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field _baseStream, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseStream, put=__cordl_internal_set__baseStream)) ::System::IO::Stream*  _baseStream;

/// @brief Field _closeBaseStream, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__closeBaseStream, put=__cordl_internal_set__closeBaseStream)) bool  _closeBaseStream;

/// @brief Field _isDisposed, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDisposed, put=__cordl_internal_set__isDisposed)) bool  _isDisposed;

/// @brief Field _onClosed, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__onClosed, put=__cordl_internal_set__onClosed)) ::System::Action_1<::System::IO::Compression::ZipArchiveEntry*>*  _onClosed;

/// @brief Field _zipArchiveEntry, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__zipArchiveEntry, put=__cordl_internal_set__zipArchiveEntry)) ::System::IO::Compression::ZipArchiveEntry*  _zipArchiveEntry;

/// @brief Method Dispose, addr 0x2b1914c, size 0x74, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Flush, addr 0x2b19118, size 0x34, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::System::IO::Compression::WrappedStream* New_ctor(::System::IO::Stream*  baseStream, bool  closeBaseStream) ;

static inline ::System::IO::Compression::WrappedStream* New_ctor(::System::IO::Stream*  baseStream, bool  closeBaseStream, ::System::IO::Compression::ZipArchiveEntry*  entry, ::System::Action_1<::System::IO::Compression::ZipArchiveEntry*>*  onClosed) ;

static inline ::System::IO::Compression::WrappedStream* New_ctor(::System::IO::Stream*  baseStream, ::System::IO::Compression::ZipArchiveEntry*  entry, ::System::Action_1<::System::IO::Compression::ZipArchiveEntry*>*  onClosed) ;

/// @brief Method Read, addr 0x2b18fc8, size 0x5c, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Seek, addr 0x2b19024, size 0x4c, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0x2b19070, size 0x4c, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method ThrowIfCantRead, addr 0x2b18f00, size 0x64, virtual false, abstract: false, final false
inline void ThrowIfCantRead() ;

/// @brief Method ThrowIfCantSeek, addr 0x2b18e00, size 0x64, virtual false, abstract: false, final false
inline void ThrowIfCantSeek() ;

/// @brief Method ThrowIfCantWrite, addr 0x2b18f64, size 0x64, virtual false, abstract: false, final false
inline void ThrowIfCantWrite() ;

/// @brief Method ThrowIfDisposed, addr 0x2b18d08, size 0x8c, virtual false, abstract: false, final false
inline void ThrowIfDisposed() ;

/// @brief Method Write, addr 0x2b190bc, size 0x5c, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__baseStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__baseStream() ;

constexpr bool const& __cordl_internal_get__closeBaseStream() const;

constexpr bool& __cordl_internal_get__closeBaseStream() ;

constexpr bool const& __cordl_internal_get__isDisposed() const;

constexpr bool& __cordl_internal_get__isDisposed() ;

constexpr ::System::Action_1<::System::IO::Compression::ZipArchiveEntry*>* const& __cordl_internal_get__onClosed() const;

constexpr ::System::Action_1<::System::IO::Compression::ZipArchiveEntry*>*& __cordl_internal_get__onClosed() ;

constexpr ::System::IO::Compression::ZipArchiveEntry* const& __cordl_internal_get__zipArchiveEntry() const;

constexpr ::System::IO::Compression::ZipArchiveEntry*& __cordl_internal_get__zipArchiveEntry() ;

constexpr void __cordl_internal_set__baseStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__closeBaseStream(bool  value) ;

constexpr void __cordl_internal_set__isDisposed(bool  value) ;

constexpr void __cordl_internal_set__onClosed(::System::Action_1<::System::IO::Compression::ZipArchiveEntry*>*  value) ;

constexpr void __cordl_internal_set__zipArchiveEntry(::System::IO::Compression::ZipArchiveEntry*  value) ;

/// @brief Method .ctor, addr 0x2b1673c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  baseStream, bool  closeBaseStream) ;

/// @brief Method .ctor, addr 0x2b18c50, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  baseStream, bool  closeBaseStream, ::System::IO::Compression::ZipArchiveEntry*  entry, ::System::Action_1<::System::IO::Compression::ZipArchiveEntry*>*  onClosed) ;

/// @brief Method .ctor, addr 0x2b1674c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  baseStream, ::System::IO::Compression::ZipArchiveEntry*  entry, ::System::Action_1<::System::IO::Compression::ZipArchiveEntry*>*  onClosed) ;

/// @brief Method get_CanRead, addr 0x2b18e64, size 0x34, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0x2b18e98, size 0x34, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0x2b18ecc, size 0x34, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Length, addr 0x2b18ce0, size 0x28, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0x2b18d94, size 0x28, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method set_Position, addr 0x2b18dbc, size 0x44, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WrappedStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WrappedStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WrappedStream(WrappedStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WrappedStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WrappedStream(WrappedStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11305};

/// @brief Field _baseStream, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  ____baseStream;

/// @brief Field _closeBaseStream, offset: 0x30, size: 0x1, def value: None
 bool  ____closeBaseStream;

/// @brief Field _onClosed, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::System::IO::Compression::ZipArchiveEntry*>*  ____onClosed;

/// @brief Field _zipArchiveEntry, offset: 0x40, size: 0x8, def value: None
 ::System::IO::Compression::ZipArchiveEntry*  ____zipArchiveEntry;

/// @brief Field _isDisposed, offset: 0x48, size: 0x1, def value: None
 bool  ____isDisposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::WrappedStream, ____baseStream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::WrappedStream, ____closeBaseStream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::WrappedStream, ____onClosed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::WrappedStream, ____zipArchiveEntry) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::WrappedStream, ____isDisposed) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::WrappedStream, 0x50>, "Size mismatch!");

} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::WrappedStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::WrappedStream*, "System.IO.Compression", "WrappedStream");
