#pragma once
// IWYU pragma private; include "System/IO/Compression/PositionPreservingWriteOnlyStreamWrapper.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/IO/Compression/zzzz__PositionPreservingWriteOnlyStreamWrapper_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)(::System::IO::Stream*)>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b10828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.get_CanRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)()>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b10894;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.get_CanSeek
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)()>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b1089c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.get_CanWrite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)()>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b108a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.get_Position
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)()>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::get_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b108ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.set_Position
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)(int64_t)>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::set_Position)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b108b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.Write
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::Write)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2b10900;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.BeginWrite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::BeginWrite)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2b10930;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.EndWrite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)(::System::IAsyncResult*)>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::EndWrite)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b10960;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.WriteByte
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)(uint8_t)>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::WriteByte)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2b10984;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.WriteAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::WriteAsync)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2b109b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.get_CanTimeout
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)()>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::get_CanTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2b109e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.get_ReadTimeout
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)()>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::get_ReadTimeout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b10a04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.set_ReadTimeout
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)(int32_t)>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::set_ReadTimeout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b10a28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.get_WriteTimeout
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)()>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::get_WriteTimeout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b10a4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.set_WriteTimeout
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)(int32_t)>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::set_WriteTimeout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b10a70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.Flush
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)()>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::Flush)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b10a94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.FlushAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)(::System::Threading::CancellationToken)>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::FlushAsync)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b10ab8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.Close
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)()>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::Close)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b10adc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)(bool)>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b10b00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.get_Length
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)()>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::get_Length)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b10b28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.Seek
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)(int64_t, ::System::IO::SeekOrigin)>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::Seek)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b10b74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.SetLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)(int64_t)>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::SetLength)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b10bc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper.Read
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::Read)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b10c0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::__cordl_internal_get__stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr ::System::IO::Stream* const& System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::__cordl_internal_get__stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr void System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::__cordl_internal_set__stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::__cordl_internal_get__position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____position;
}
constexpr int64_t const& System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::__cordl_internal_get__position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____position;
}
constexpr void System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::__cordl_internal_set__position(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____position = value;
}
inline void System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::_ctor(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream);
}
inline bool System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::get_Position()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    36
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, count);
}
inline ::System::IAsyncResult* System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::BeginWrite(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    27
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline void System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::EndWrite(::System::IAsyncResult*  asyncResult)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    28
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncResult);
}
inline void System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::WriteByte(uint8_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    38
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::WriteAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    29
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline bool System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::get_CanTimeout()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::get_ReadTimeout()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::set_ReadTimeout(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::get_WriteTimeout()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::set_WriteTimeout(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::Flush()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::FlushAsync(::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    22
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline void System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::Close()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    19
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline int64_t System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::get_Length()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    31
                )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, offset, origin);
}
inline void System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    32
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>::get(),
                    33
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, count);
}
inline ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper* System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::New_ctor(::System::IO::Stream*  stream)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper*>(stream));
}
// Ctor Parameters []
constexpr ::System::IO::Compression::PositionPreservingWriteOnlyStreamWrapper::PositionPreservingWriteOnlyStreamWrapper()   {
}
