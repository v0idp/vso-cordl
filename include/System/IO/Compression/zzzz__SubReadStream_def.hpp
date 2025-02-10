#pragma once
// IWYU pragma private; include "System/IO/Compression/SubReadStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubReadStream)
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::IO::Compression {
class SubReadStream;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::SubReadStream);
// Dependencies System.IO.Stream
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.SubReadStream
class CORDL_TYPE SubReadStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field _canRead, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__canRead, put=__cordl_internal_set__canRead)) bool  _canRead;

/// @brief Field _endInSuperStream, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__endInSuperStream, put=__cordl_internal_set__endInSuperStream)) int64_t  _endInSuperStream;

/// @brief Field _isDisposed, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDisposed, put=__cordl_internal_set__isDisposed)) bool  _isDisposed;

/// @brief Field _positionInSuperStream, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__positionInSuperStream, put=__cordl_internal_set__positionInSuperStream)) int64_t  _positionInSuperStream;

/// @brief Field _startInSuperStream, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__startInSuperStream, put=__cordl_internal_set__startInSuperStream)) int64_t  _startInSuperStream;

/// @brief Field _superStream, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__superStream, put=__cordl_internal_set__superStream)) ::System::IO::Stream*  _superStream;

/// @brief Method Dispose, addr 0x2b1958c, size 0x20, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Flush, addr 0x2b1953c, size 0x50, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::System::IO::Compression::SubReadStream* New_ctor(::System::IO::Stream*  superStream, int64_t  startPosition, int64_t  maxLength) ;

/// @brief Method Read, addr 0x2b1938c, size 0xc0, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Seek, addr 0x2b1944c, size 0x50, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0x2b1949c, size 0x50, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method ThrowIfCantRead, addr 0x2b19328, size 0x64, virtual false, abstract: false, final false
inline void ThrowIfCantRead() ;

/// @brief Method ThrowIfDisposed, addr 0x2b191e0, size 0x8c, virtual false, abstract: false, final false
inline void ThrowIfDisposed() ;

/// @brief Method Write, addr 0x2b194ec, size 0x50, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

constexpr bool const& __cordl_internal_get__canRead() const;

constexpr bool& __cordl_internal_get__canRead() ;

constexpr int64_t const& __cordl_internal_get__endInSuperStream() const;

constexpr int64_t& __cordl_internal_get__endInSuperStream() ;

constexpr bool const& __cordl_internal_get__isDisposed() const;

constexpr bool& __cordl_internal_get__isDisposed() ;

constexpr int64_t const& __cordl_internal_get__positionInSuperStream() const;

constexpr int64_t& __cordl_internal_get__positionInSuperStream() ;

constexpr int64_t const& __cordl_internal_get__startInSuperStream() const;

constexpr int64_t& __cordl_internal_get__startInSuperStream() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__superStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__superStream() ;

constexpr void __cordl_internal_set__canRead(bool  value) ;

constexpr void __cordl_internal_set__endInSuperStream(int64_t  value) ;

constexpr void __cordl_internal_set__isDisposed(bool  value) ;

constexpr void __cordl_internal_set__positionInSuperStream(int64_t  value) ;

constexpr void __cordl_internal_set__startInSuperStream(int64_t  value) ;

constexpr void __cordl_internal_set__superStream(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0x2b16630, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  superStream, int64_t  startPosition, int64_t  maxLength) ;

/// @brief Method get_CanRead, addr 0x2b192d8, size 0x40, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0x2b19318, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0x2b19320, size 0x8, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Length, addr 0x2b191c0, size 0x20, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0x2b1926c, size 0x1c, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method set_Position, addr 0x2b19288, size 0x50, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubReadStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubReadStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubReadStream(SubReadStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubReadStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubReadStream(SubReadStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11306};

/// @brief Field _startInSuperStream, offset: 0x28, size: 0x8, def value: None
 int64_t  ____startInSuperStream;

/// @brief Field _positionInSuperStream, offset: 0x30, size: 0x8, def value: None
 int64_t  ____positionInSuperStream;

/// @brief Field _endInSuperStream, offset: 0x38, size: 0x8, def value: None
 int64_t  ____endInSuperStream;

/// @brief Field _superStream, offset: 0x40, size: 0x8, def value: None
 ::System::IO::Stream*  ____superStream;

/// @brief Field _canRead, offset: 0x48, size: 0x1, def value: None
 bool  ____canRead;

/// @brief Field _isDisposed, offset: 0x49, size: 0x1, def value: None
 bool  ____isDisposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::SubReadStream, ____startInSuperStream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::SubReadStream, ____positionInSuperStream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::SubReadStream, ____endInSuperStream) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::SubReadStream, ____superStream) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::SubReadStream, ____canRead) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::SubReadStream, ____isDisposed) == 0x49, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::SubReadStream, 0x50>, "Size mismatch!");

} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::SubReadStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::SubReadStream*, "System.IO.Compression", "SubReadStream");
