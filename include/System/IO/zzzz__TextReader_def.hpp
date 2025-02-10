#pragma once
// IWYU pragma private; include "System/IO/TextReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextReader)
namespace GlobalNamespace {
class TextReader_NullTextReader;
}
namespace GlobalNamespace {
class TextReader_SyncTextReader;
}
namespace System::IO {
struct TextReader__ReadToEndAsync_d__14;
}
namespace System::IO {
class TextReader___c;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
struct Memory_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::IO {
class TextReader;
}
namespace System::IO {
class TextReader___c;
}
namespace System::IO {
struct TextReader__ReadToEndAsync_d__14;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::TextReader);
MARK_REF_PTR_T(::System::IO::TextReader___c);
MARK_VAL_T(::System::IO::TextReader__ReadToEndAsync_d__14);
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.TextReader/<>c
class CORDL_TYPE TextReader___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::IO::TextReader___c*  __9;

/// @brief Field <>9__17_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_0, put=setStaticF___9__17_0)) ::System::Func_2<::System::Object*,int32_t>*  __9__17_0;

static inline ::System::IO::TextReader___c* New_ctor() ;

/// @brief Method <ReadAsyncInternal>b__17_0, addr 0x26a9d88, size 0xf0, virtual false, abstract: false, final false
inline int32_t _ReadAsyncInternal_b__17_0(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x26a9d80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::IO::TextReader___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Object*,int32_t>* getStaticF___9__17_0() ;

static inline void setStaticF___9(::System::IO::TextReader___c*  value) ;

static inline void setStaticF___9__17_0(::System::Func_2<::System::Object*,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextReader___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextReader___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextReader___c(TextReader___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextReader___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextReader___c(TextReader___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3239};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::TextReader___c, 0x10>, "Size mismatch!");

} // namespace end def System::IO
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1::ConfiguredValueTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine
namespace System::IO {
// Is value type: true
// CS Name: System.IO.TextReader/<ReadToEndAsync>d__14
struct CORDL_TYPE TextReader__ReadToEndAsync_d__14 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x26a9e78, size 0x504, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x26aa37c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr TextReader__ReadToEndAsync_d__14() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::IO::TextReader*", modifiers: "", def_value: None }, CppParam { name: "_sb_5__2", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: None }, CppParam { name: "_chars_5__3", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr TextReader__ReadToEndAsync_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::System::IO::TextReader*  __4__this, ::System::Text::StringBuilder*  _sb_5__2, ::ArrayW<char16_t,::Array<char16_t>*>  _chars_5__3, ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3240};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::System::IO::TextReader*  __4__this;

/// @brief Field <sb>5__2, offset: 0x28, size: 0x8, def value: None
 ::System::Text::StringBuilder*  _sb_5__2;

/// @brief Field <chars>5__3, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<char16_t,::Array<char16_t>*>  _chars_5__3;

/// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::TextReader__ReadToEndAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::TextReader__ReadToEndAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::TextReader__ReadToEndAsync_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::TextReader__ReadToEndAsync_d__14, _sb_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::TextReader__ReadToEndAsync_d__14, _chars_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::TextReader__ReadToEndAsync_d__14, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::TextReader__ReadToEndAsync_d__14, 0x48>, "Size mismatch!");

} // namespace end def System::IO
// Dependencies System.IDisposable, System.MarshalByRefObject
namespace System::IO {
// Is value type: false
// CS Name: System.IO.TextReader
class CORDL_TYPE TextReader : public ::System::MarshalByRefObject {
public:
// Declarations
using NullTextReader = ::GlobalNamespace::TextReader_NullTextReader;

using SyncTextReader = ::GlobalNamespace::TextReader_SyncTextReader;

using _ReadToEndAsync_d__14 = ::System::IO::TextReader__ReadToEndAsync_d__14;

using __c = ::System::IO::TextReader___c;

/// @brief Field Null, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Null, put=setStaticF_Null)) ::System::IO::TextReader*  Null;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Close, addr 0x26a8f48, size 0x6c, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Dispose, addr 0x26a8fb4, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x26a9020, size 0x4, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::System::IO::TextReader* New_ctor() ;

/// @brief Method Peek, addr 0x26a9024, size 0x8, virtual true, abstract: false, final false
inline int32_t Peek() ;

/// @brief Method Read, addr 0x26a902c, size 0x8, virtual true, abstract: false, final false
inline int32_t Read() ;

/// @brief Method Read, addr 0x26a9034, size 0x1b0, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method Read, addr 0x26a91e4, size 0x258, virtual true, abstract: false, final false
inline int32_t Read(::System::Span_1<char16_t>  buffer) ;

/// @brief Method ReadAsyncInternal, addr 0x26a9710, size 0x21c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsyncInternal(::System::Memory_1<char16_t>  buffer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReadLine, addr 0x26a9538, size 0xf8, virtual true, abstract: false, final false
inline ::StringW ReadLine() ;

/// @brief Method ReadToEnd, addr 0x26a943c, size 0xfc, virtual true, abstract: false, final false
inline ::StringW ReadToEnd() ;

/// @brief Method ReadToEndAsync, addr 0x26a9630, size 0xe0, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* ReadToEndAsync() ;

/// @brief Method Synchronized, addr 0x26a992c, size 0xb4, virtual false, abstract: false, final false
static inline ::System::IO::TextReader* Synchronized(::System::IO::TextReader*  reader) ;

/// @brief Method .ctor, addr 0x26a8f40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::IO::TextReader* getStaticF_Null() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_Null(::System::IO::TextReader*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextReader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextReader(TextReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextReader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextReader(TextReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3241};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::TextReader, 0x18>, "Size mismatch!");

} // namespace end def System::IO
NEED_NO_BOX(::System::IO::TextReader);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::TextReader*, "System.IO", "TextReader");
NEED_NO_BOX(::System::IO::TextReader___c);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::TextReader___c*, "System.IO", "TextReader/<>c");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::TextReader__ReadToEndAsync_d__14, "System.IO", "TextReader/<ReadToEndAsync>d__14");
