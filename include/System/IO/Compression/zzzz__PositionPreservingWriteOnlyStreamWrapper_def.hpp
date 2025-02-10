#pragma once
// IWYU pragma private; include "System/IO/Compression/PositionPreservingWriteOnlyStreamWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PositionPreservingWriteOnlyStreamWrapper)
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::IO::Compression {
class PositionPreservingWriteOnlyStreamWrapper;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper);
// Dependencies System.IO.Stream
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.PositionPreservingWriteOnlyStreamWrapper
class CORDL_TYPE PositionPreservingWriteOnlyStreamWrapper : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanTimeout)) bool  CanTimeout;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

 __declspec(property(get=get_ReadTimeout, put=set_ReadTimeout)) int32_t  ReadTimeout;

 __declspec(property(get=get_WriteTimeout, put=set_WriteTimeout)) int32_t  WriteTimeout;

/// @brief Field _position, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__position, put=__cordl_internal_set__position)) int64_t  _position;

/// @brief Field _stream, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__stream, put=__cordl_internal_set__stream)) ::System::IO::Stream*  _stream;

/// @brief Method BeginWrite, addr 0x2b10930, size 0x30, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method Close, addr 0x2b10adc, size 0x24, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Dispose, addr 0x2b10b00, size 0x28, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EndWrite, addr 0x2b10960, size 0x24, virtual true, abstract: false, final false
inline void EndWrite(::System::IAsyncResult*  asyncResult) ;

/// @brief Method Flush, addr 0x2b10a94, size 0x24, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method FlushAsync, addr 0x2b10ab8, size 0x24, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper* New_ctor(::System::IO::Stream*  stream) ;

/// @brief Method Read, addr 0x2b10c0c, size 0x4c, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Seek, addr 0x2b10b74, size 0x4c, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0x2b10bc0, size 0x4c, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method Write, addr 0x2b10900, size 0x30, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteAsync, addr 0x2b109b4, size 0x30, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteByte, addr 0x2b10984, size 0x30, virtual true, abstract: false, final false
inline void WriteByte(uint8_t  value) ;

constexpr int64_t const& __cordl_internal_get__position() const;

constexpr int64_t& __cordl_internal_get__position() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__stream() ;

constexpr void __cordl_internal_set__position(int64_t  value) ;

constexpr void __cordl_internal_set__stream(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0x2b10828, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream) ;

/// @brief Method get_CanRead, addr 0x2b10894, size 0x8, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0x2b1089c, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanTimeout, addr 0x2b109e4, size 0x20, virtual true, abstract: false, final false
inline bool get_CanTimeout() ;

/// @brief Method get_CanWrite, addr 0x2b108a4, size 0x8, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Length, addr 0x2b10b28, size 0x4c, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0x2b108ac, size 0x8, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method get_ReadTimeout, addr 0x2b10a04, size 0x24, virtual true, abstract: false, final false
inline int32_t get_ReadTimeout() ;

/// @brief Method get_WriteTimeout, addr 0x2b10a4c, size 0x24, virtual true, abstract: false, final false
inline int32_t get_WriteTimeout() ;

/// @brief Method set_Position, addr 0x2b108b4, size 0x4c, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

/// @brief Method set_ReadTimeout, addr 0x2b10a28, size 0x24, virtual true, abstract: false, final false
inline void set_ReadTimeout(int32_t  value) ;

/// @brief Method set_WriteTimeout, addr 0x2b10a70, size 0x24, virtual true, abstract: false, final false
inline void set_WriteTimeout(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PositionPreservingWriteOnlyStreamWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PositionPreservingWriteOnlyStreamWrapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PositionPreservingWriteOnlyStreamWrapper(PositionPreservingWriteOnlyStreamWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PositionPreservingWriteOnlyStreamWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PositionPreservingWriteOnlyStreamWrapper(PositionPreservingWriteOnlyStreamWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11290};

/// @brief Field _stream, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  ____stream;

/// @brief Field _position, offset: 0x30, size: 0x8, def value: None
 int64_t  ____position;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper, ____stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper, ____position) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper, 0x38>, "Size mismatch!");

} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*, "System.IO.Compression", "PositionPreservingWriteOnlyStreamWrapper");
