#pragma once
// IWYU pragma private; include "System/IO/Compression/DeflateManagedStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/Compression/zzzz__CompressionMode_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeflateManagedStream)
namespace System::IO::Compression {
struct DeflateManagedStream__ReadAsyncCore_d__40;
}
namespace System::IO::Compression {
struct DeflateManagedStream__WriteAsyncCore_d__47;
}
namespace System::IO::Compression {
class DeflaterManaged;
}
namespace System::IO::Compression {
class IFileFormatReader;
}
namespace System::IO::Compression {
class IFileFormatWriter;
}
namespace System::IO::Compression {
class InflaterManaged;
}
namespace System::IO::Compression {
struct ZipArchiveEntry_CompressionMethodValues;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
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
class DeflateManagedStream;
}
namespace System::IO::Compression {
struct DeflateManagedStream__ReadAsyncCore_d__40;
}
namespace System::IO::Compression {
struct DeflateManagedStream__WriteAsyncCore_d__47;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::DeflateManagedStream);
MARK_VAL_T(::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40);
MARK_VAL_T(::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace System::IO::Compression {
// Is value type: true
// CS Name: System.IO.Compression.DeflateManagedStream/<ReadAsyncCore>d__40
struct CORDL_TYPE DeflateManagedStream__ReadAsyncCore_d__40 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2b0ca48, size 0x550, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2b0cf98, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr DeflateManagedStream__ReadAsyncCore_d__40() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "readTask", ty: "::System::Threading::Tasks::Task_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::Compression::DeflateManagedStream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "array", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr DeflateManagedStream__ReadAsyncCore_d__40(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  __t__builder, ::System::Threading::Tasks::Task_1<int32_t>*  readTask, ::System::IO::Compression::DeflateManagedStream*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11271};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  __t__builder;

/// @brief Field readTask, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<int32_t>*  readTask;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Compression::DeflateManagedStream*  __4__this;

/// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field array, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  array;

/// @brief Field offset, offset: 0x40, size: 0x4, def value: None
 int32_t  offset;

/// @brief Field count, offset: 0x44, size: 0x4, def value: None
 int32_t  count;

/// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40, readTask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40, array) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40, offset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40, count) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40, 0x58>, "Size mismatch!");

} // namespace end def System::IO::Compression
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace System::IO::Compression {
// Is value type: true
// CS Name: System.IO.Compression.DeflateManagedStream/<WriteAsyncCore>d__47
struct CORDL_TYPE DeflateManagedStream__WriteAsyncCore_d__47 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2b0d014, size 0x2bc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2b0d2d0, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr DeflateManagedStream__WriteAsyncCore_d__47() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::Compression::DeflateManagedStream*", modifiers: "", def_value: None }, CppParam { name: "array", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr DeflateManagedStream__WriteAsyncCore_d__47(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::IO::Compression::DeflateManagedStream*  __4__this, ::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11272};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::System::IO::Compression::DeflateManagedStream*  __4__this;

/// @brief Field array, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  array;

/// @brief Field offset, offset: 0x30, size: 0x4, def value: None
 int32_t  offset;

/// @brief Field count, offset: 0x34, size: 0x4, def value: None
 int32_t  count;

/// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47, array) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47, offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47, count) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47, 0x50>, "Size mismatch!");

} // namespace end def System::IO::Compression
// Dependencies System.IO.Compression.CompressionMode, System.IO.Stream
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.DeflateManagedStream
class CORDL_TYPE DeflateManagedStream : public ::System::IO::Stream {
public:
// Declarations
using _ReadAsyncCore_d__40 = ::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40;

using _WriteAsyncCore_d__47 = ::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field _asyncOperations, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__asyncOperations, put=__cordl_internal_set__asyncOperations)) int32_t  _asyncOperations;

/// @brief Field _buffer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _buffer;

/// @brief Field _deflater, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__deflater, put=__cordl_internal_set__deflater)) ::System::IO::Compression::DeflaterManaged*  _deflater;

/// @brief Field _formatWriter, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__formatWriter, put=__cordl_internal_set__formatWriter)) ::System::IO::Compression::IFileFormatWriter*  _formatWriter;

/// @brief Field _inflater, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__inflater, put=__cordl_internal_set__inflater)) ::System::IO::Compression::InflaterManaged*  _inflater;

/// @brief Field _leaveOpen, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__leaveOpen, put=__cordl_internal_set__leaveOpen)) bool  _leaveOpen;

/// @brief Field _mode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__mode, put=__cordl_internal_set__mode)) ::System::IO::Compression::CompressionMode  _mode;

/// @brief Field _stream, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__stream, put=__cordl_internal_set__stream)) ::System::IO::Stream*  _stream;

/// @brief Field _wroteBytes, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__wroteBytes, put=__cordl_internal_set__wroteBytes)) bool  _wroteBytes;

/// @brief Field _wroteHeader, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__wroteHeader, put=__cordl_internal_set__wroteHeader)) bool  _wroteHeader;

/// @brief Method BeginRead, addr 0x2b0b7f4, size 0xb0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  asyncCallback, ::System::Object*  asyncState) ;

/// @brief Method BeginWrite, addr 0x2b0c898, size 0xb0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  asyncCallback, ::System::Object*  asyncState) ;

/// @brief Method Dispose, addr 0x2b0c5b0, size 0x98, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method DoMaintenance, addr 0x2b0beec, size 0x184, virtual false, abstract: false, final false
inline void DoMaintenance(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method EndRead, addr 0x2b0b99c, size 0x48, virtual true, abstract: false, final false
inline int32_t EndRead(::System::IAsyncResult*  asyncResult) ;

/// @brief Method EndWrite, addr 0x2b0c948, size 0x8, virtual true, abstract: false, final false
inline void EndWrite(::System::IAsyncResult*  asyncResult) ;

/// @brief Method EnsureCompressionMode, addr 0x2b0b78c, size 0x1c, virtual false, abstract: false, final false
inline void EnsureCompressionMode() ;

/// @brief Method EnsureDecompressionMode, addr 0x2b0b3f0, size 0x18, virtual false, abstract: false, final false
inline void EnsureDecompressionMode() ;

/// @brief Method EnsureNotDisposed, addr 0x2b0b0f4, size 0x18, virtual false, abstract: false, final false
inline void EnsureNotDisposed() ;

/// @brief Method Flush, addr 0x2b0b0dc, size 0x18, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method FlushAsync, addr 0x2b0b10c, size 0xfc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method InitializeInflater, addr 0x2b0ad4c, size 0x138, virtual false, abstract: false, final false
inline void InitializeInflater(::System::IO::Stream*  stream, bool  leaveOpen, ::System::IO::Compression::IFileFormatReader*  reader, ::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues  method) ;

static inline ::System::IO::Compression::DeflateManagedStream* New_ctor(::System::IO::Stream*  stream, ::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues  method) ;

/// @brief Method PurgeBuffers, addr 0x2b0c3ac, size 0x17c, virtual false, abstract: false, final false
inline void PurgeBuffers(bool  disposing) ;

/// @brief Method Read, addr 0x2b0b2a0, size 0x150, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadAsync, addr 0x2b0b9e4, size 0x358, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReadAsyncCore, addr 0x2b0bd3c, size 0x128, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsyncCore(::System::Threading::Tasks::Task_1<int32_t>*  readTask, ::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Seek, addr 0x2b0b208, size 0x4c, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0x2b0b254, size 0x4c, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method ThrowCannotReadFromDeflateManagedStreamException, addr 0x2b0b740, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowCannotReadFromDeflateManagedStreamException() ;

/// @brief Method ThrowCannotWriteToDeflateManagedStreamException, addr 0x2b0b7a8, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowCannotWriteToDeflateManagedStreamException() ;

/// @brief Method ThrowStreamClosedException, addr 0x2b0b6f0, size 0x50, virtual false, abstract: false, final false
static inline void ThrowStreamClosedException() ;

/// @brief Method ValidateParameters, addr 0x2b0b408, size 0xf8, virtual false, abstract: false, final false
inline void ValidateParameters(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method Write, addr 0x2b0be64, size 0x88, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count) ;

/// @brief Method WriteAsync, addr 0x2b0c648, size 0x160, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteAsyncCore, addr 0x2b0c7a8, size 0xf0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsyncCore(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WriteDeflaterOutput, addr 0x2b0c070, size 0x68, virtual false, abstract: false, final false
inline void WriteDeflaterOutput() ;

constexpr int32_t const& __cordl_internal_get__asyncOperations() const;

constexpr int32_t& __cordl_internal_get__asyncOperations() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__buffer() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__buffer() ;

constexpr ::System::IO::Compression::DeflaterManaged* const& __cordl_internal_get__deflater() const;

constexpr ::System::IO::Compression::DeflaterManaged*& __cordl_internal_get__deflater() ;

constexpr ::System::IO::Compression::IFileFormatWriter* const& __cordl_internal_get__formatWriter() const;

constexpr ::System::IO::Compression::IFileFormatWriter*& __cordl_internal_get__formatWriter() ;

constexpr ::System::IO::Compression::InflaterManaged* const& __cordl_internal_get__inflater() const;

constexpr ::System::IO::Compression::InflaterManaged*& __cordl_internal_get__inflater() ;

constexpr bool const& __cordl_internal_get__leaveOpen() const;

constexpr bool& __cordl_internal_get__leaveOpen() ;

constexpr ::System::IO::Compression::CompressionMode const& __cordl_internal_get__mode() const;

constexpr ::System::IO::Compression::CompressionMode& __cordl_internal_get__mode() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__stream() ;

constexpr bool const& __cordl_internal_get__wroteBytes() const;

constexpr bool& __cordl_internal_get__wroteBytes() ;

constexpr bool const& __cordl_internal_get__wroteHeader() const;

constexpr bool& __cordl_internal_get__wroteHeader() ;

constexpr void __cordl_internal_set__asyncOperations(int32_t  value) ;

constexpr void __cordl_internal_set__buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set__deflater(::System::IO::Compression::DeflaterManaged*  value) ;

constexpr void __cordl_internal_set__formatWriter(::System::IO::Compression::IFileFormatWriter*  value) ;

constexpr void __cordl_internal_set__inflater(::System::IO::Compression::InflaterManaged*  value) ;

constexpr void __cordl_internal_set__leaveOpen(bool  value) ;

constexpr void __cordl_internal_set__mode(::System::IO::Compression::CompressionMode  value) ;

constexpr void __cordl_internal_set__stream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__wroteBytes(bool  value) ;

constexpr void __cordl_internal_set__wroteHeader(bool  value) ;

/// @brief Method <>n__0, addr 0x2b0ca40, size 0x8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* __n__0(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method .ctor, addr 0x2b0ac14, size 0x138, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues  method) ;

/// @brief Method get_CanRead, addr 0x2b0af9c, size 0x28, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0x2b0aff0, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0x2b0afc4, size 0x2c, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Length, addr 0x2b0aff8, size 0x4c, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0x2b0b044, size 0x4c, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method set_Position, addr 0x2b0b090, size 0x4c, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeflateManagedStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeflateManagedStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DeflateManagedStream(DeflateManagedStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeflateManagedStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeflateManagedStream(DeflateManagedStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11273};

/// @brief Field _stream, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  ____stream;

/// @brief Field _mode, offset: 0x30, size: 0x4, def value: None
 ::System::IO::Compression::CompressionMode  ____mode;

/// @brief Field _leaveOpen, offset: 0x34, size: 0x1, def value: None
 bool  ____leaveOpen;

/// @brief Field _inflater, offset: 0x38, size: 0x8, def value: None
 ::System::IO::Compression::InflaterManaged*  ____inflater;

/// @brief Field _deflater, offset: 0x40, size: 0x8, def value: None
 ::System::IO::Compression::DeflaterManaged*  ____deflater;

/// @brief Field _buffer, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____buffer;

/// @brief Field _asyncOperations, offset: 0x50, size: 0x4, def value: None
 int32_t  ____asyncOperations;

/// @brief Field _formatWriter, offset: 0x58, size: 0x8, def value: None
 ::System::IO::Compression::IFileFormatWriter*  ____formatWriter;

/// @brief Field _wroteHeader, offset: 0x60, size: 0x1, def value: None
 bool  ____wroteHeader;

/// @brief Field _wroteBytes, offset: 0x61, size: 0x1, def value: None
 bool  ____wroteBytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::DeflateManagedStream, ____stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream, ____mode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream, ____leaveOpen) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream, ____inflater) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream, ____deflater) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream, ____buffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream, ____asyncOperations) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream, ____formatWriter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream, ____wroteHeader) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateManagedStream, ____wroteBytes) == 0x61, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::DeflateManagedStream, 0x68>, "Size mismatch!");

} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::DeflateManagedStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::DeflateManagedStream*, "System.IO.Compression", "DeflateManagedStream");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40, "System.IO.Compression", "DeflateManagedStream/<ReadAsyncCore>d__40");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47, "System.IO.Compression", "DeflateManagedStream/<WriteAsyncCore>d__47");
