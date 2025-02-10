#pragma once
// IWYU pragma private; include "System/IO/StreamWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamWriter)
namespace System::IO {
struct StreamWriter__FlushAsyncInternal_d__74;
}
namespace System::IO {
struct StreamWriter__WriteAsyncInternal_d__59;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Text {
class Encoder;
}
namespace System::Text {
class Encoding;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::IO {
class StreamWriter;
}
namespace System::IO {
struct StreamWriter__FlushAsyncInternal_d__74;
}
namespace System::IO {
struct StreamWriter__WriteAsyncInternal_d__59;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::StreamWriter);
MARK_VAL_T(::System::IO::StreamWriter__FlushAsyncInternal_d__74);
MARK_VAL_T(::System::IO::StreamWriter__WriteAsyncInternal_d__59);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.IAsyncStateMachine
namespace System::IO {
// Is value type: true
// CS Name: System.IO.StreamWriter/<WriteAsyncInternal>d__59
struct CORDL_TYPE StreamWriter__WriteAsyncInternal_d__59 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x26a80b0, size 0x4e4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x26a8594, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr StreamWriter__WriteAsyncInternal_d__59() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "charPos", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "charLen", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_this", ty: "::System::IO::StreamWriter*", modifiers: "", def_value: None }, CppParam { name: "charBuffer", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: None }, CppParam { name: "appendNewLine", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "coreNewLine", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: None }, CppParam { name: "autoFlush", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_count_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "_i_5__4", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StreamWriter__WriteAsyncInternal_d__59(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::StringW  value, int32_t  charPos, int32_t  charLen, ::System::IO::StreamWriter*  _this, ::ArrayW<char16_t,::Array<char16_t>*>  charBuffer, bool  appendNewLine, ::ArrayW<char16_t,::Array<char16_t>*>  coreNewLine, bool  autoFlush, int32_t  _count_5__2, int32_t  _index_5__3, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1, int32_t  _i_5__4) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3234};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field value, offset: 0x20, size: 0x8, def value: None
 ::StringW  value;

/// @brief Field charPos, offset: 0x28, size: 0x4, def value: None
 int32_t  charPos;

/// @brief Field charLen, offset: 0x2c, size: 0x4, def value: None
 int32_t  charLen;

/// @brief Field _this, offset: 0x30, size: 0x8, def value: None
 ::System::IO::StreamWriter*  _this;

/// @brief Field charBuffer, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<char16_t,::Array<char16_t>*>  charBuffer;

/// @brief Field appendNewLine, offset: 0x40, size: 0x1, def value: None
 bool  appendNewLine;

/// @brief Field coreNewLine, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<char16_t,::Array<char16_t>*>  coreNewLine;

/// @brief Field autoFlush, offset: 0x50, size: 0x1, def value: None
 bool  autoFlush;

/// @brief Field <count>5__2, offset: 0x54, size: 0x4, def value: None
 int32_t  _count_5__2;

/// @brief Field <index>5__3, offset: 0x58, size: 0x4, def value: None
 int32_t  _index_5__3;

/// @brief Field <>u__1, offset: 0x60, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

/// @brief Field <i>5__4, offset: 0x70, size: 0x4, def value: None
 int32_t  _i_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::StreamWriter__WriteAsyncInternal_d__59, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__WriteAsyncInternal_d__59, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__WriteAsyncInternal_d__59, value) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__WriteAsyncInternal_d__59, charPos) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__WriteAsyncInternal_d__59, charLen) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__WriteAsyncInternal_d__59, _this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__WriteAsyncInternal_d__59, charBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__WriteAsyncInternal_d__59, appendNewLine) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__WriteAsyncInternal_d__59, coreNewLine) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__WriteAsyncInternal_d__59, autoFlush) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__WriteAsyncInternal_d__59, _count_5__2) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__WriteAsyncInternal_d__59, _index_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__WriteAsyncInternal_d__59, __u__1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__WriteAsyncInternal_d__59, _i_5__4) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::StreamWriter__WriteAsyncInternal_d__59, 0x78>, "Size mismatch!");

} // namespace end def System::IO
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace System::IO {
// Is value type: true
// CS Name: System.IO.StreamWriter/<FlushAsyncInternal>d__74
struct CORDL_TYPE StreamWriter__FlushAsyncInternal_d__74 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x26a85fc, size 0x8dc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x26a8ed8, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr StreamWriter__FlushAsyncInternal_d__74() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "haveWrittenPreamble", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_this", ty: "::System::IO::StreamWriter*", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "::System::Text::Encoding*", modifiers: "", def_value: None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "encoder", ty: "::System::Text::Encoder*", modifiers: "", def_value: None }, CppParam { name: "charBuffer", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: None }, CppParam { name: "charPos", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "byteBuffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "flushEncoder", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "flushStream", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr StreamWriter__FlushAsyncInternal_d__74(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, bool  haveWrittenPreamble, ::System::IO::StreamWriter*  _this, ::System::Text::Encoding*  encoding, ::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellationToken, ::System::Text::Encoder*  encoder, ::ArrayW<char16_t,::Array<char16_t>*>  charBuffer, int32_t  charPos, ::ArrayW<uint8_t,::Array<uint8_t>*>  byteBuffer, bool  flushEncoder, bool  flushStream, ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter  __u__1, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3235};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field haveWrittenPreamble, offset: 0x20, size: 0x1, def value: None
 bool  haveWrittenPreamble;

/// @brief Field _this, offset: 0x28, size: 0x8, def value: None
 ::System::IO::StreamWriter*  _this;

/// @brief Field encoding, offset: 0x30, size: 0x8, def value: None
 ::System::Text::Encoding*  encoding;

/// @brief Field stream, offset: 0x38, size: 0x8, def value: None
 ::System::IO::Stream*  stream;

/// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field encoder, offset: 0x48, size: 0x8, def value: None
 ::System::Text::Encoder*  encoder;

/// @brief Field charBuffer, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<char16_t,::Array<char16_t>*>  charBuffer;

/// @brief Field charPos, offset: 0x58, size: 0x4, def value: None
 int32_t  charPos;

/// @brief Field byteBuffer, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  byteBuffer;

/// @brief Field flushEncoder, offset: 0x68, size: 0x1, def value: None
 bool  flushEncoder;

/// @brief Field flushStream, offset: 0x69, size: 0x1, def value: None
 bool  flushStream;

/// @brief Field <>u__1, offset: 0x70, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x80, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::StreamWriter__FlushAsyncInternal_d__74, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__FlushAsyncInternal_d__74, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__FlushAsyncInternal_d__74, haveWrittenPreamble) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__FlushAsyncInternal_d__74, _this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__FlushAsyncInternal_d__74, encoding) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__FlushAsyncInternal_d__74, stream) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__FlushAsyncInternal_d__74, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__FlushAsyncInternal_d__74, encoder) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__FlushAsyncInternal_d__74, charBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__FlushAsyncInternal_d__74, charPos) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__FlushAsyncInternal_d__74, byteBuffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__FlushAsyncInternal_d__74, flushEncoder) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__FlushAsyncInternal_d__74, flushStream) == 0x69, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__FlushAsyncInternal_d__74, __u__1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter__FlushAsyncInternal_d__74, __u__2) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::StreamWriter__FlushAsyncInternal_d__74, 0x90>, "Size mismatch!");

} // namespace end def System::IO
// Dependencies System.IO.TextWriter
namespace System::IO {
// Is value type: false
// CS Name: System.IO.StreamWriter
class CORDL_TYPE StreamWriter : public ::System::IO::TextWriter {
public:
// Declarations
using _FlushAsyncInternal_d__74 = ::System::IO::StreamWriter__FlushAsyncInternal_d__74;

using _WriteAsyncInternal_d__59 = ::System::IO::StreamWriter__WriteAsyncInternal_d__59;

 __declspec(property(put=set_AutoFlush)) bool  AutoFlush;

 __declspec(property(get=get_BaseStream)) ::System::IO::Stream*  BaseStream;

 __declspec(property(put=set_CharPos_Prop)) int32_t  CharPos_Prop;

 __declspec(property(get=get_Encoding)) ::System::Text::Encoding*  Encoding;

 __declspec(property(put=set_HaveWrittenPreamble_Prop)) bool  HaveWrittenPreamble_Prop;

 __declspec(property(get=get_LeaveOpen)) bool  LeaveOpen;

/// @brief Field Null, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Null, put=setStaticF_Null)) ::System::IO::StreamWriter*  Null;

/// @brief Field _asyncWriteTask, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__asyncWriteTask, put=__cordl_internal_set__asyncWriteTask)) ::System::Threading::Tasks::Task*  _asyncWriteTask;

/// @brief Field _autoFlush, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__autoFlush, put=__cordl_internal_set__autoFlush)) bool  _autoFlush;

/// @brief Field _byteBuffer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__byteBuffer, put=__cordl_internal_set__byteBuffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _byteBuffer;

/// @brief Field _charBuffer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__charBuffer, put=__cordl_internal_set__charBuffer)) ::ArrayW<char16_t,::Array<char16_t>*>  _charBuffer;

/// @brief Field _charLen, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__charLen, put=__cordl_internal_set__charLen)) int32_t  _charLen;

/// @brief Field _charPos, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__charPos, put=__cordl_internal_set__charPos)) int32_t  _charPos;

/// @brief Field _closable, offset 0x62, size 0x1 
 __declspec(property(get=__cordl_internal_get__closable, put=__cordl_internal_set__closable)) bool  _closable;

/// @brief Field _encoder, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__encoder, put=__cordl_internal_set__encoder)) ::System::Text::Encoder*  _encoder;

/// @brief Field _encoding, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__encoding, put=__cordl_internal_set__encoding)) ::System::Text::Encoding*  _encoding;

/// @brief Field _haveWrittenPreamble, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__haveWrittenPreamble, put=__cordl_internal_set__haveWrittenPreamble)) bool  _haveWrittenPreamble;

/// @brief Field _stream, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__stream, put=__cordl_internal_set__stream)) ::System::IO::Stream*  _stream;

/// @brief Method CheckAsyncTaskInProgress, addr 0x26a6500, size 0x64, virtual false, abstract: false, final false
inline void CheckAsyncTaskInProgress() ;

/// @brief Method Close, addr 0x26a6da8, size 0x6c, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Dispose, addr 0x26a6e14, size 0x94, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Flush, addr 0x26a7024, size 0x20, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method Flush, addr 0x26a6ea8, size 0x17c, virtual false, abstract: false, final false
inline void Flush(bool  flushStream, bool  flushEncoder) ;

/// @brief Method FlushAsyncInternal, addr 0x26a7c08, size 0x138, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* FlushAsyncInternal(::System::IO::StreamWriter*  _this, bool  flushStream, bool  flushEncoder, ::ArrayW<char16_t,::Array<char16_t>*>  charBuffer, int32_t  charPos, bool  haveWrittenPreamble, ::System::Text::Encoding*  encoding, ::System::Text::Encoder*  encoder, ::ArrayW<uint8_t,::Array<uint8_t>*>  byteBuffer, ::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method FlushAsyncInternal, addr 0x26a7a68, size 0x1a0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* FlushAsyncInternal(bool  flushStream, bool  flushEncoder, ::ArrayW<char16_t,::Array<char16_t>*>  sCharBuffer, int32_t  sCharPos, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Init, addr 0x26a6944, size 0x138, virtual false, abstract: false, final false
inline void Init(::System::IO::Stream*  streamArg, ::System::Text::Encoding*  encodingArg, int32_t  bufferSize, bool  shouldLeaveOpen) ;

static inline ::System::IO::StreamWriter* New_ctor() ;

static inline ::System::IO::StreamWriter* New_ctor(::StringW  path) ;

static inline ::System::IO::StreamWriter* New_ctor(::StringW  path, bool  append) ;

static inline ::System::IO::StreamWriter* New_ctor(::StringW  path, bool  append, ::System::Text::Encoding*  encoding, int32_t  bufferSize) ;

static inline ::System::IO::StreamWriter* New_ctor(::System::IO::Stream*  stream) ;

static inline ::System::IO::StreamWriter* New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding) ;

static inline ::System::IO::StreamWriter* New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, int32_t  bufferSize, bool  leaveOpen) ;

/// @brief Method ThrowAsyncIOInProgress, addr 0x26a6564, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowAsyncIOInProgress() ;

/// @brief Method Write, addr 0x26a7134, size 0x74, virtual true, abstract: false, final false
inline void Write(::ArrayW<char16_t,::Array<char16_t>*>  buffer) ;

/// @brief Method Write, addr 0x26a71a8, size 0x1dc, virtual true, abstract: false, final false
inline void Write(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method Write, addr 0x26a7648, size 0x70, virtual true, abstract: false, final false
inline void Write(::StringW  value) ;

/// @brief Method Write, addr 0x26a70a8, size 0x8c, virtual true, abstract: false, final false
inline void Write(char16_t  value) ;

/// @brief Method WriteAsync, addr 0x26a772c, size 0x200, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsync(::StringW  value) ;

/// @brief Method WriteAsyncInternal, addr 0x26a792c, size 0x128, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* WriteAsyncInternal(::System::IO::StreamWriter*  _this, ::StringW  value, ::ArrayW<char16_t,::Array<char16_t>*>  charBuffer, int32_t  charPos, int32_t  charLen, ::ArrayW<char16_t,::Array<char16_t>*>  coreNewLine, bool  autoFlush, bool  appendNewLine) ;

/// @brief Method WriteLine, addr 0x26a76b8, size 0x74, virtual true, abstract: false, final false
inline void WriteLine(::StringW  value) ;

/// @brief Method WriteSpan, addr 0x26a7384, size 0x2c4, virtual false, abstract: false, final false
inline void WriteSpan(::System::ReadOnlySpan_1<char16_t>  buffer, bool  appendNewLine) ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__asyncWriteTask() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__asyncWriteTask() ;

constexpr bool const& __cordl_internal_get__autoFlush() const;

constexpr bool& __cordl_internal_get__autoFlush() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__byteBuffer() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__byteBuffer() ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __cordl_internal_get__charBuffer() const;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __cordl_internal_get__charBuffer() ;

constexpr int32_t const& __cordl_internal_get__charLen() const;

constexpr int32_t& __cordl_internal_get__charLen() ;

constexpr int32_t const& __cordl_internal_get__charPos() const;

constexpr int32_t& __cordl_internal_get__charPos() ;

constexpr bool const& __cordl_internal_get__closable() const;

constexpr bool& __cordl_internal_get__closable() ;

constexpr ::System::Text::Encoder* const& __cordl_internal_get__encoder() const;

constexpr ::System::Text::Encoder*& __cordl_internal_get__encoder() ;

constexpr ::System::Text::Encoding* const& __cordl_internal_get__encoding() const;

constexpr ::System::Text::Encoding*& __cordl_internal_get__encoding() ;

constexpr bool const& __cordl_internal_get__haveWrittenPreamble() const;

constexpr bool& __cordl_internal_get__haveWrittenPreamble() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__stream() ;

constexpr void __cordl_internal_set__asyncWriteTask(::System::Threading::Tasks::Task*  value) ;

constexpr void __cordl_internal_set__autoFlush(bool  value) ;

constexpr void __cordl_internal_set__byteBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set__charBuffer(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr void __cordl_internal_set__charLen(int32_t  value) ;

constexpr void __cordl_internal_set__charPos(int32_t  value) ;

constexpr void __cordl_internal_set__closable(bool  value) ;

constexpr void __cordl_internal_set__encoder(::System::Text::Encoder*  value) ;

constexpr void __cordl_internal_set__encoding(::System::Text::Encoding*  value) ;

constexpr void __cordl_internal_set__haveWrittenPreamble(bool  value) ;

constexpr void __cordl_internal_set__stream(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0x26a6600, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x26a6a7c, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::StringW  path) ;

/// @brief Method .ctor, addr 0x26a6d30, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::StringW  path, bool  append) ;

/// @brief Method .ctor, addr 0x26a6af0, size 0x240, virtual false, abstract: false, final false
inline void _ctor(::StringW  path, bool  append, ::System::Text::Encoding*  encoding, int32_t  bufferSize) ;

/// @brief Method .ctor, addr 0x26a66c0, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream) ;

/// @brief Method .ctor, addr 0x26a6938, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding) ;

/// @brief Method .ctor, addr 0x26a6734, size 0x204, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, int32_t  bufferSize, bool  leaveOpen) ;

static inline ::System::IO::StreamWriter* getStaticF_Null() ;

/// @brief Method get_BaseStream, addr 0x26a7088, size 0x8, virtual true, abstract: false, final false
inline ::System::IO::Stream* get_BaseStream() ;

/// @brief Method get_Encoding, addr 0x26a70a0, size 0x8, virtual true, abstract: false, final false
inline ::System::Text::Encoding* get_Encoding() ;

/// @brief Method get_LeaveOpen, addr 0x26a7090, size 0x10, virtual false, abstract: false, final false
inline bool get_LeaveOpen() ;

/// @brief Method get_UTF8NoBOM, addr 0x26a65b0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Text::Encoding* get_UTF8NoBOM() ;

static inline void setStaticF_Null(::System::IO::StreamWriter*  value) ;

/// @brief Method set_AutoFlush, addr 0x26a7044, size 0x44, virtual true, abstract: false, final false
inline void set_AutoFlush(bool  value) ;

/// @brief Method set_CharPos_Prop, addr 0x26a7a54, size 0x8, virtual false, abstract: false, final false
inline void set_CharPos_Prop(int32_t  value) ;

/// @brief Method set_HaveWrittenPreamble_Prop, addr 0x26a7a5c, size 0xc, virtual false, abstract: false, final false
inline void set_HaveWrittenPreamble_Prop(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamWriter(StreamWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamWriter(StreamWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3236};

/// @brief Field _stream, offset: 0x30, size: 0x8, def value: None
 ::System::IO::Stream*  ____stream;

/// @brief Field _encoding, offset: 0x38, size: 0x8, def value: None
 ::System::Text::Encoding*  ____encoding;

/// @brief Field _encoder, offset: 0x40, size: 0x8, def value: None
 ::System::Text::Encoder*  ____encoder;

/// @brief Field _byteBuffer, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____byteBuffer;

/// @brief Field _charBuffer, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<char16_t,::Array<char16_t>*>  ____charBuffer;

/// @brief Field _charPos, offset: 0x58, size: 0x4, def value: None
 int32_t  ____charPos;

/// @brief Field _charLen, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____charLen;

/// @brief Field _autoFlush, offset: 0x60, size: 0x1, def value: None
 bool  ____autoFlush;

/// @brief Field _haveWrittenPreamble, offset: 0x61, size: 0x1, def value: None
 bool  ____haveWrittenPreamble;

/// @brief Field _closable, offset: 0x62, size: 0x1, def value: None
 bool  ____closable;

/// @brief Field _asyncWriteTask, offset: 0x68, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ____asyncWriteTask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::StreamWriter, ____stream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____encoding) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____encoder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____byteBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____charBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____charPos) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____charLen) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____autoFlush) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____haveWrittenPreamble) == 0x61, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____closable) == 0x62, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____asyncWriteTask) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::StreamWriter, 0x70>, "Size mismatch!");

} // namespace end def System::IO
NEED_NO_BOX(::System::IO::StreamWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::StreamWriter*, "System.IO", "StreamWriter");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::StreamWriter__FlushAsyncInternal_d__74, "System.IO", "StreamWriter/<FlushAsyncInternal>d__74");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::StreamWriter__WriteAsyncInternal_d__59, "System.IO", "StreamWriter/<WriteAsyncInternal>d__59");
