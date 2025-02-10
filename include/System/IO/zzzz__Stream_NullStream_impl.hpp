#pragma once
// IWYU pragma private; include "System/IO/Stream_NullStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/IO/zzzz__Stream_NullStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Stream_NullStream::*)()>(&::GlobalNamespace::Stream_NullStream::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26b6440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.get_CanRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::Stream_NullStream::*)()>(&::GlobalNamespace::Stream_NullStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b6640;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::Stream_NullStream::*)()>(&::GlobalNamespace::Stream_NullStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b6648;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::Stream_NullStream::*)()>(&::GlobalNamespace::Stream_NullStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b6650;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.get_Length
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::Stream_NullStream::*)()>(&::GlobalNamespace::Stream_NullStream::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b6658;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.get_Position
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::Stream_NullStream::*)()>(&::GlobalNamespace::Stream_NullStream::get_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b6660;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.set_Position
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Stream_NullStream::*)(int64_t)>(&::GlobalNamespace::Stream_NullStream::set_Position)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26b6668;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.CopyTo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Stream_NullStream::*)(::System::IO::Stream*, int32_t)>(&::GlobalNamespace::Stream_NullStream::CopyTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b666c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Stream_NullStream::*)(bool)>(&::GlobalNamespace::Stream_NullStream::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26b6674;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.Flush
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Stream_NullStream::*)()>(&::GlobalNamespace::Stream_NullStream::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26b6678;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.FlushAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::Stream_NullStream::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::Stream_NullStream::FlushAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x26b667c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.BeginRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Stream_NullStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::Stream_NullStream::BeginRead)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26b6760;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.EndRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::Stream_NullStream::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Stream_NullStream::EndRead)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x26b67ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.BeginWrite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Stream_NullStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::Stream_NullStream::BeginWrite)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26b688c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.EndWrite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Stream_NullStream::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Stream_NullStream::EndWrite)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x26b6918;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.Read
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::Stream_NullStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::GlobalNamespace::Stream_NullStream::Read)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b69b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.Read
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::Stream_NullStream::*)(::System::Span_1<uint8_t>)>(&::GlobalNamespace::Stream_NullStream::Read)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b69c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.ReadAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::GlobalNamespace::Stream_NullStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::GlobalNamespace::Stream_NullStream::ReadAsync)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26b69c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.ReadAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::GlobalNamespace::Stream_NullStream::*)(::System::Memory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::GlobalNamespace::Stream_NullStream::ReadAsync)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x26b6a20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.ReadByte
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::Stream_NullStream::*)()>(&::GlobalNamespace::Stream_NullStream::ReadByte)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b6a54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.Write
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Stream_NullStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::GlobalNamespace::Stream_NullStream::Write)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26b6a5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.Write
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Stream_NullStream::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::GlobalNamespace::Stream_NullStream::Write)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26b6a60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.WriteAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::Stream_NullStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::GlobalNamespace::Stream_NullStream::WriteAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x26b6a64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.WriteAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask (::GlobalNamespace::Stream_NullStream::*)(::System::ReadOnlyMemory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::GlobalNamespace::Stream_NullStream::WriteAsync)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x26b6b48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.WriteByte
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Stream_NullStream::*)(uint8_t)>(&::GlobalNamespace::Stream_NullStream::WriteByte)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26b6c00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.Seek
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::Stream_NullStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::GlobalNamespace::Stream_NullStream::Seek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b6c04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.SetLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Stream_NullStream::*)(int64_t)>(&::GlobalNamespace::Stream_NullStream::SetLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26b6c0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Stream_NullStream::setStaticF_s_zeroTask(::System::Threading::Tasks::Task_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<int32_t>*, "s_zeroTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get>(std::forward<::System::Threading::Tasks::Task_1<int32_t>*>(value));
}
inline ::System::Threading::Tasks::Task_1<int32_t>* GlobalNamespace::Stream_NullStream::getStaticF_s_zeroTask()  {
return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<int32_t>*, "s_zeroTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get>();
}
inline void GlobalNamespace::Stream_NullStream::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::Stream_NullStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::Stream_NullStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::Stream_NullStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t GlobalNamespace::Stream_NullStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t GlobalNamespace::Stream_NullStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::Stream_NullStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::Stream_NullStream::CopyTo(::System::IO::Stream*  destination, int32_t  bufferSize)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    18
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destination, bufferSize);
}
inline void GlobalNamespace::Stream_NullStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::Stream_NullStream::Flush()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::Stream_NullStream::FlushAsync(::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    22
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline ::System::IAsyncResult* GlobalNamespace::Stream_NullStream::BeginRead(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    23
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline int32_t GlobalNamespace::Stream_NullStream::EndRead(::System::IAsyncResult*  asyncResult)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    24
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, asyncResult);
}
inline ::System::IAsyncResult* GlobalNamespace::Stream_NullStream::BeginWrite(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    27
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline void GlobalNamespace::Stream_NullStream::EndWrite(::System::IAsyncResult*  asyncResult)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    28
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncResult);
}
inline int32_t GlobalNamespace::Stream_NullStream::Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    33
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, count);
}
inline int32_t GlobalNamespace::Stream_NullStream::Read(::System::Span_1<uint8_t>  buffer)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    34
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* GlobalNamespace::Stream_NullStream::ReadAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    25
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> GlobalNamespace::Stream_NullStream::ReadAsync(::System::Memory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    26
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>, false>(this, ___internal_method, buffer, cancellationToken);
}
inline int32_t GlobalNamespace::Stream_NullStream::ReadByte()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    35
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::Stream_NullStream::Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    36
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, count);
}
inline void GlobalNamespace::Stream_NullStream::Write(::System::ReadOnlySpan_1<uint8_t>  buffer)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    37
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::Stream_NullStream::WriteAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    29
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask GlobalNamespace::Stream_NullStream::WriteAsync(::System::ReadOnlyMemory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    30
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask, false>(this, ___internal_method, buffer, cancellationToken);
}
inline void GlobalNamespace::Stream_NullStream::WriteByte(uint8_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    38
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t GlobalNamespace::Stream_NullStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    31
                )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, offset, origin);
}
inline void GlobalNamespace::Stream_NullStream::SetLength(int64_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Stream_NullStream*>::get(),
                    32
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, length);
}
inline ::GlobalNamespace::Stream_NullStream* GlobalNamespace::Stream_NullStream::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::Stream_NullStream*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Stream_NullStream::Stream_NullStream()   {
}
