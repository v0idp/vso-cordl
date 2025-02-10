#pragma once
// IWYU pragma private; include "System/IO/StreamWriter.hpp"
#include "System/IO/zzzz__TextWriter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::IO::StreamWriter__WriteAsyncInternal_d__59.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter__WriteAsyncInternal_d__59::*)()>(&::System::IO::StreamWriter__WriteAsyncInternal_d__59::MoveNext)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x26a80b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter__WriteAsyncInternal_d__59>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter__WriteAsyncInternal_d__59.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter__WriteAsyncInternal_d__59::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::IO::StreamWriter__WriteAsyncInternal_d__59::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26a8594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter__WriteAsyncInternal_d__59>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::StreamWriter__WriteAsyncInternal_d__59::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter__WriteAsyncInternal_d__59>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::StreamWriter__WriteAsyncInternal_d__59::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter__WriteAsyncInternal_d__59>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  System::IO::StreamWriter__WriteAsyncInternal_d__59::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::IO::StreamWriter__WriteAsyncInternal_d__59::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "charPos", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "charLen", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_this", ty: "::System::IO::StreamWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "charBuffer", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "appendNewLine", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "coreNewLine", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "autoFlush", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_count_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_index_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "_i_5__4", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::StreamWriter__WriteAsyncInternal_d__59::StreamWriter__WriteAsyncInternal_d__59(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::StringW  value, int32_t  charPos, int32_t  charLen, ::System::IO::StreamWriter*  _this, ::ArrayW<char16_t,::Array<char16_t>*>  charBuffer, bool  appendNewLine, ::ArrayW<char16_t,::Array<char16_t>*>  coreNewLine, bool  autoFlush, int32_t  _count_5__2, int32_t  _index_5__3, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1, int32_t  _i_5__4) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->value = value;
this->charPos = charPos;
this->charLen = charLen;
this->_this = _this;
this->charBuffer = charBuffer;
this->appendNewLine = appendNewLine;
this->coreNewLine = coreNewLine;
this->autoFlush = autoFlush;
this->_count_5__2 = _count_5__2;
this->_index_5__3 = _index_5__3;
this->__u__1 = __u__1;
this->_i_5__4 = _i_5__4;
}
// Ctor Parameters []
constexpr ::System::IO::StreamWriter__WriteAsyncInternal_d__59::StreamWriter__WriteAsyncInternal_d__59()   {
}
//  Writing Method size for method: ::System::IO::StreamWriter__FlushAsyncInternal_d__74.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter__FlushAsyncInternal_d__74::*)()>(&::System::IO::StreamWriter__FlushAsyncInternal_d__74::MoveNext)> {
  constexpr static std::size_t size = 0x8dc;
  constexpr static std::size_t addrs = 0x26a85fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter__FlushAsyncInternal_d__74>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter__FlushAsyncInternal_d__74.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter__FlushAsyncInternal_d__74::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::IO::StreamWriter__FlushAsyncInternal_d__74::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26a8ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter__FlushAsyncInternal_d__74>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::StreamWriter__FlushAsyncInternal_d__74::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter__FlushAsyncInternal_d__74>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::StreamWriter__FlushAsyncInternal_d__74::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter__FlushAsyncInternal_d__74>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  System::IO::StreamWriter__FlushAsyncInternal_d__74::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::IO::StreamWriter__FlushAsyncInternal_d__74::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "haveWrittenPreamble", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_this", ty: "::System::IO::StreamWriter*", modifiers: "", def_value: Some("{}") }, CppParam { name: "encoding", ty: "::System::Text::Encoding*", modifiers: "", def_value: Some("{}") }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "encoder", ty: "::System::Text::Encoder*", modifiers: "", def_value: Some("{}") }, CppParam { name: "charBuffer", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "charPos", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "byteBuffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "flushEncoder", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "flushStream", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::StreamWriter__FlushAsyncInternal_d__74::StreamWriter__FlushAsyncInternal_d__74(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, bool  haveWrittenPreamble, ::System::IO::StreamWriter*  _this, ::System::Text::Encoding*  encoding, ::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellationToken, ::System::Text::Encoder*  encoder, ::ArrayW<char16_t,::Array<char16_t>*>  charBuffer, int32_t  charPos, ::ArrayW<uint8_t,::Array<uint8_t>*>  byteBuffer, bool  flushEncoder, bool  flushStream, ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter  __u__1, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->haveWrittenPreamble = haveWrittenPreamble;
this->_this = _this;
this->encoding = encoding;
this->stream = stream;
this->cancellationToken = cancellationToken;
this->encoder = encoder;
this->charBuffer = charBuffer;
this->charPos = charPos;
this->byteBuffer = byteBuffer;
this->flushEncoder = flushEncoder;
this->flushStream = flushStream;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::IO::StreamWriter__FlushAsyncInternal_d__74::StreamWriter__FlushAsyncInternal_d__74()   {
}
//  Writing Method size for method: ::System::IO::StreamWriter.CheckAsyncTaskInProgress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter::*)()>(&::System::IO::StreamWriter::CheckAsyncTaskInProgress)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x26a6500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "CheckAsyncTaskInProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.ThrowAsyncIOInProgress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::IO::StreamWriter::ThrowAsyncIOInProgress)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x26a6564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "ThrowAsyncIOInProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.get_UTF8NoBOM
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&::System::IO::StreamWriter::get_UTF8NoBOM)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x26a65b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "get_UTF8NoBOM",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter::*)()>(&::System::IO::StreamWriter::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x26a6600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter::*)(::System::IO::Stream*)>(&::System::IO::StreamWriter::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x26a66c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter::*)(::System::IO::Stream*, ::System::Text::Encoding*)>(&::System::IO::StreamWriter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26a6938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter::*)(::System::IO::Stream*, ::System::Text::Encoding*, int32_t, bool)>(&::System::IO::StreamWriter::_ctor)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x26a6734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter::*)(::StringW)>(&::System::IO::StreamWriter::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x26a6a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter::*)(::StringW, bool)>(&::System::IO::StreamWriter::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x26a6d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter::*)(::StringW, bool, ::System::Text::Encoding*, int32_t)>(&::System::IO::StreamWriter::_ctor)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x26a6af0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter::*)(::System::IO::Stream*, ::System::Text::Encoding*, int32_t, bool)>(&::System::IO::StreamWriter::Init)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x26a6944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.Close
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter::*)()>(&::System::IO::StreamWriter::Close)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26a6da8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter::*)(bool)>(&::System::IO::StreamWriter::Dispose)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x26a6e14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.Flush
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter::*)()>(&::System::IO::StreamWriter::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26a7024;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.Flush
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter::*)(bool, bool)>(&::System::IO::StreamWriter::Flush)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x26a6ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "Flush",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.set_AutoFlush
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter::*)(bool)>(&::System::IO::StreamWriter::set_AutoFlush)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x26a7044;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.get_BaseStream
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::IO::StreamWriter::*)()>(&::System::IO::StreamWriter::get_BaseStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a7088;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.get_LeaveOpen
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::StreamWriter::*)()>(&::System::IO::StreamWriter::get_LeaveOpen)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26a7090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "get_LeaveOpen",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.get_Encoding
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (::System::IO::StreamWriter::*)()>(&::System::IO::StreamWriter::get_Encoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a70a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.Write
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter::*)(char16_t)>(&::System::IO::StreamWriter::Write)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26a70a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.Write
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter::*)(::ArrayW<char16_t,::Array<char16_t>*>)>(&::System::IO::StreamWriter::Write)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x26a7134;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.Write
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter::*)(::ArrayW<char16_t,::Array<char16_t>*>, int32_t, int32_t)>(&::System::IO::StreamWriter::Write)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x26a71a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.WriteSpan
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter::*)(::System::ReadOnlySpan_1<char16_t>, bool)>(&::System::IO::StreamWriter::WriteSpan)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x26a7384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "WriteSpan",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.Write
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter::*)(::StringW)>(&::System::IO::StreamWriter::Write)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x26a7648;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.WriteLine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter::*)(::StringW)>(&::System::IO::StreamWriter::WriteLine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x26a76b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.WriteAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::StreamWriter::*)(::StringW)>(&::System::IO::StreamWriter::WriteAsync)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x26a772c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.WriteAsyncInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)(::System::IO::StreamWriter*, ::StringW, ::ArrayW<char16_t,::Array<char16_t>*>, int32_t, int32_t, ::ArrayW<char16_t,::Array<char16_t>*>, bool, bool)>(&::System::IO::StreamWriter::WriteAsyncInternal)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x26a792c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "WriteAsyncInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::StreamWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.set_CharPos_Prop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter::*)(int32_t)>(&::System::IO::StreamWriter::set_CharPos_Prop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a7a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "set_CharPos_Prop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.set_HaveWrittenPreamble_Prop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::StreamWriter::*)(bool)>(&::System::IO::StreamWriter::set_HaveWrittenPreamble_Prop)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26a7a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "set_HaveWrittenPreamble_Prop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.FlushAsyncInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::StreamWriter::*)(bool, bool, ::ArrayW<char16_t,::Array<char16_t>*>, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::StreamWriter::FlushAsyncInternal)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x26a7a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "FlushAsyncInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StreamWriter.FlushAsyncInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)(::System::IO::StreamWriter*, bool, bool, ::ArrayW<char16_t,::Array<char16_t>*>, int32_t, bool, ::System::Text::Encoding*, ::System::Text::Encoder*, ::ArrayW<uint8_t,::Array<uint8_t>*>, ::System::IO::Stream*, ::System::Threading::CancellationToken)>(&::System::IO::StreamWriter::FlushAsyncInternal)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x26a7c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "FlushAsyncInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 11>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::StreamWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::IO::StreamWriter::__cordl_internal_get__stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr ::System::IO::Stream* const& System::IO::StreamWriter::__cordl_internal_get__stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr void System::IO::StreamWriter::__cordl_internal_set__stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::Encoding*& System::IO::StreamWriter::__cordl_internal_get__encoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoding;
}
constexpr ::System::Text::Encoding* const& System::IO::StreamWriter::__cordl_internal_get__encoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoding;
}
constexpr void System::IO::StreamWriter::__cordl_internal_set__encoding(::System::Text::Encoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____encoding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::Encoder*& System::IO::StreamWriter::__cordl_internal_get__encoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr ::System::Text::Encoder* const& System::IO::StreamWriter::__cordl_internal_get__encoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr void System::IO::StreamWriter::__cordl_internal_set__encoder(::System::Text::Encoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____encoder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::IO::StreamWriter::__cordl_internal_get__byteBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____byteBuffer;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::IO::StreamWriter::__cordl_internal_get__byteBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____byteBuffer;
}
constexpr void System::IO::StreamWriter::__cordl_internal_set__byteBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____byteBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*>& System::IO::StreamWriter::__cordl_internal_get__charBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charBuffer;
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& System::IO::StreamWriter::__cordl_internal_get__charBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charBuffer;
}
constexpr void System::IO::StreamWriter::__cordl_internal_set__charBuffer(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____charBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::IO::StreamWriter::__cordl_internal_get__charPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charPos;
}
constexpr int32_t const& System::IO::StreamWriter::__cordl_internal_get__charPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charPos;
}
constexpr void System::IO::StreamWriter::__cordl_internal_set__charPos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____charPos = value;
}
constexpr int32_t& System::IO::StreamWriter::__cordl_internal_get__charLen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charLen;
}
constexpr int32_t const& System::IO::StreamWriter::__cordl_internal_get__charLen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charLen;
}
constexpr void System::IO::StreamWriter::__cordl_internal_set__charLen(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____charLen = value;
}
constexpr bool& System::IO::StreamWriter::__cordl_internal_get__autoFlush()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoFlush;
}
constexpr bool const& System::IO::StreamWriter::__cordl_internal_get__autoFlush() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoFlush;
}
constexpr void System::IO::StreamWriter::__cordl_internal_set__autoFlush(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____autoFlush = value;
}
constexpr bool& System::IO::StreamWriter::__cordl_internal_get__haveWrittenPreamble()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____haveWrittenPreamble;
}
constexpr bool const& System::IO::StreamWriter::__cordl_internal_get__haveWrittenPreamble() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____haveWrittenPreamble;
}
constexpr void System::IO::StreamWriter::__cordl_internal_set__haveWrittenPreamble(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____haveWrittenPreamble = value;
}
constexpr bool& System::IO::StreamWriter::__cordl_internal_get__closable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closable;
}
constexpr bool const& System::IO::StreamWriter::__cordl_internal_get__closable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closable;
}
constexpr void System::IO::StreamWriter::__cordl_internal_set__closable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____closable = value;
}
constexpr ::System::Threading::Tasks::Task*& System::IO::StreamWriter::__cordl_internal_get__asyncWriteTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncWriteTask;
}
constexpr ::System::Threading::Tasks::Task* const& System::IO::StreamWriter::__cordl_internal_get__asyncWriteTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncWriteTask;
}
constexpr void System::IO::StreamWriter::__cordl_internal_set__asyncWriteTask(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____asyncWriteTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::IO::StreamWriter::setStaticF_Null(::System::IO::StreamWriter*  value)  {
::cordl_internals::setStaticField<::System::IO::StreamWriter*, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get>(std::forward<::System::IO::StreamWriter*>(value));
}
inline ::System::IO::StreamWriter* System::IO::StreamWriter::getStaticF_Null()  {
return ::cordl_internals::getStaticField<::System::IO::StreamWriter*, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get>();
}
inline void System::IO::StreamWriter::CheckAsyncTaskInProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "CheckAsyncTaskInProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::StreamWriter::ThrowAsyncIOInProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "ThrowAsyncIOInProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::System::Text::Encoding* System::IO::StreamWriter::get_UTF8NoBOM()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "get_UTF8NoBOM",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method);
}
inline void System::IO::StreamWriter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::StreamWriter::_ctor(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream);
}
inline void System::IO::StreamWriter::_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, encoding);
}
inline void System::IO::StreamWriter::_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, int32_t  bufferSize, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, encoding, bufferSize, leaveOpen);
}
inline void System::IO::StreamWriter::_ctor(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path);
}
inline void System::IO::StreamWriter::_ctor(::StringW  path, bool  append)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path, append);
}
inline void System::IO::StreamWriter::_ctor(::StringW  path, bool  append, ::System::Text::Encoding*  encoding, int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path, append, encoding, bufferSize);
}
inline void System::IO::StreamWriter::Init(::System::IO::Stream*  streamArg, ::System::Text::Encoding*  encodingArg, int32_t  bufferSize, bool  shouldLeaveOpen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, streamArg, encodingArg, bufferSize, shouldLeaveOpen);
}
inline void System::IO::StreamWriter::Close()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::StreamWriter::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::IO::StreamWriter::Flush()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::StreamWriter::Flush(bool  flushStream, bool  flushEncoder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "Flush",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flushStream, flushEncoder);
}
inline void System::IO::StreamWriter::set_AutoFlush(bool  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::IO::Stream* System::IO::StreamWriter::get_BaseStream()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline bool System::IO::StreamWriter::get_LeaveOpen()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "get_LeaveOpen",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Text::Encoding* System::IO::StreamWriter::get_Encoding()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(this, ___internal_method);
}
inline void System::IO::StreamWriter::Write(char16_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::IO::StreamWriter::Write(::ArrayW<char16_t,::Array<char16_t>*>  buffer)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer);
}
inline void System::IO::StreamWriter::Write(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, index, count);
}
inline void System::IO::StreamWriter::WriteSpan(::System::ReadOnlySpan_1<char16_t>  buffer, bool  appendNewLine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "WriteSpan",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, appendNewLine);
}
inline void System::IO::StreamWriter::Write(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::IO::StreamWriter::WriteLine(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                    18
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* System::IO::StreamWriter::WriteAsync(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                    19
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* System::IO::StreamWriter::WriteAsyncInternal(::System::IO::StreamWriter*  _this, ::StringW  value, ::ArrayW<char16_t,::Array<char16_t>*>  charBuffer, int32_t  charPos, int32_t  charLen, ::ArrayW<char16_t,::Array<char16_t>*>  coreNewLine, bool  autoFlush, bool  appendNewLine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "WriteAsyncInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::StreamWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, _this, value, charBuffer, charPos, charLen, coreNewLine, autoFlush, appendNewLine);
}
inline void System::IO::StreamWriter::set_CharPos_Prop(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "set_CharPos_Prop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::IO::StreamWriter::set_HaveWrittenPreamble_Prop(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "set_HaveWrittenPreamble_Prop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* System::IO::StreamWriter::FlushAsyncInternal(bool  flushStream, bool  flushEncoder, ::ArrayW<char16_t,::Array<char16_t>*>  sCharBuffer, int32_t  sCharPos, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "FlushAsyncInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, flushStream, flushEncoder, sCharBuffer, sCharPos, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::IO::StreamWriter::FlushAsyncInternal(::System::IO::StreamWriter*  _this, bool  flushStream, bool  flushEncoder, ::ArrayW<char16_t,::Array<char16_t>*>  charBuffer, int32_t  charPos, bool  haveWrittenPreamble, ::System::Text::Encoding*  encoding, ::System::Text::Encoder*  encoder, ::ArrayW<uint8_t,::Array<uint8_t>*>  byteBuffer, ::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::StreamWriter*>::get(),
                        "FlushAsyncInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 11>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::StreamWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, _this, flushStream, flushEncoder, charBuffer, charPos, haveWrittenPreamble, encoding, encoder, byteBuffer, stream, cancellationToken);
}
inline ::System::IO::StreamWriter* System::IO::StreamWriter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::StreamWriter*>());
}
inline ::System::IO::StreamWriter* System::IO::StreamWriter::New_ctor(::System::IO::Stream*  stream)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::StreamWriter*>(stream));
}
inline ::System::IO::StreamWriter* System::IO::StreamWriter::New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::StreamWriter*>(stream, encoding));
}
inline ::System::IO::StreamWriter* System::IO::StreamWriter::New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, int32_t  bufferSize, bool  leaveOpen)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::StreamWriter*>(stream, encoding, bufferSize, leaveOpen));
}
inline ::System::IO::StreamWriter* System::IO::StreamWriter::New_ctor(::StringW  path)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::StreamWriter*>(path));
}
inline ::System::IO::StreamWriter* System::IO::StreamWriter::New_ctor(::StringW  path, bool  append)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::StreamWriter*>(path, append));
}
inline ::System::IO::StreamWriter* System::IO::StreamWriter::New_ctor(::StringW  path, bool  append, ::System::Text::Encoding*  encoding, int32_t  bufferSize)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::StreamWriter*>(path, append, encoding, bufferSize));
}
// Ctor Parameters []
constexpr ::System::IO::StreamWriter::StreamWriter()   {
}
