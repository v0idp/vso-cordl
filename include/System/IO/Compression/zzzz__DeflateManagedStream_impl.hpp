#pragma once
// IWYU pragma private; include "System/IO/Compression/DeflateManagedStream.hpp"
#include "System/IO/Compression/zzzz__CompressionMode_impl.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/IO/Compression/zzzz__DeflateManagedStream_def.hpp"
#include "System/IO/Compression/zzzz__DeflateManagedStream_def.hpp"
#include "System/IO/Compression/zzzz__DeflaterManaged_def.hpp"
#include "System/IO/Compression/zzzz__IFileFormatReader_def.hpp"
#include "System/IO/Compression/zzzz__IFileFormatWriter_def.hpp"
#include "System/IO/Compression/zzzz__InflaterManaged_def.hpp"
#include "System/IO/Compression/zzzz__ZipArchiveEntry_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40::*)()>(&::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40::MoveNext)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x2b0ca48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b0cf98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "readTask", ty: "::System::Threading::Tasks::Task_1<int32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::IO::Compression::DeflateManagedStream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "array", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40::DeflateManagedStream__ReadAsyncCore_d__40(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  __t__builder, ::System::Threading::Tasks::Task_1<int32_t>*  readTask, ::System::IO::Compression::DeflateManagedStream*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->readTask = readTask;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->array = array;
this->offset = offset;
this->count = count;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::IO::Compression::DeflateManagedStream__ReadAsyncCore_d__40::DeflateManagedStream__ReadAsyncCore_d__40()   {
}
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47::*)()>(&::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47::MoveNext)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x2b0d014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b0d2d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::IO::Compression::DeflateManagedStream*", modifiers: "", def_value: Some("{}") }, CppParam { name: "array", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47::DeflateManagedStream__WriteAsyncCore_d__47(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::IO::Compression::DeflateManagedStream*  __4__this, ::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->array = array;
this->offset = offset;
this->count = count;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::System::IO::Compression::DeflateManagedStream__WriteAsyncCore_d__47::DeflateManagedStream__WriteAsyncCore_d__47()   {
}
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateManagedStream::*)(::System::IO::Stream*, ::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues)>(&::System::IO::Compression::DeflateManagedStream::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2b0ac14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.InitializeInflater
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateManagedStream::*)(::System::IO::Stream*, bool, ::System::IO::Compression::IFileFormatReader*, ::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues)>(&::System::IO::Compression::DeflateManagedStream::InitializeInflater)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2b0ad4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "InitializeInflater",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::IFileFormatReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.get_CanRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Compression::DeflateManagedStream::*)()>(&::System::IO::Compression::DeflateManagedStream::get_CanRead)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b0af9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.get_CanWrite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Compression::DeflateManagedStream::*)()>(&::System::IO::Compression::DeflateManagedStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b0afc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.get_CanSeek
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Compression::DeflateManagedStream::*)()>(&::System::IO::Compression::DeflateManagedStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b0aff0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.get_Length
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::IO::Compression::DeflateManagedStream::*)()>(&::System::IO::Compression::DeflateManagedStream::get_Length)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b0aff8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.get_Position
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::IO::Compression::DeflateManagedStream::*)()>(&::System::IO::Compression::DeflateManagedStream::get_Position)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b0b044;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.set_Position
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateManagedStream::*)(int64_t)>(&::System::IO::Compression::DeflateManagedStream::set_Position)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b0b090;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.Flush
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateManagedStream::*)()>(&::System::IO::Compression::DeflateManagedStream::Flush)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b0b0dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.FlushAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::Compression::DeflateManagedStream::*)(::System::Threading::CancellationToken)>(&::System::IO::Compression::DeflateManagedStream::FlushAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2b0b10c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.Seek
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::IO::Compression::DeflateManagedStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::System::IO::Compression::DeflateManagedStream::Seek)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b0b208;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.SetLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateManagedStream::*)(int64_t)>(&::System::IO::Compression::DeflateManagedStream::SetLength)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b0b254;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.Read
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Compression::DeflateManagedStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::Compression::DeflateManagedStream::Read)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2b0b2a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.ValidateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateManagedStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::Compression::DeflateManagedStream::ValidateParameters)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2b0b408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "ValidateParameters",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.EnsureNotDisposed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateManagedStream::*)()>(&::System::IO::Compression::DeflateManagedStream::EnsureNotDisposed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b0b0f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "EnsureNotDisposed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.ThrowStreamClosedException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::IO::Compression::DeflateManagedStream::ThrowStreamClosedException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2b0b6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "ThrowStreamClosedException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.EnsureDecompressionMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateManagedStream::*)()>(&::System::IO::Compression::DeflateManagedStream::EnsureDecompressionMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b0b3f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "EnsureDecompressionMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.ThrowCannotReadFromDeflateManagedStreamException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::IO::Compression::DeflateManagedStream::ThrowCannotReadFromDeflateManagedStreamException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b0b740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "ThrowCannotReadFromDeflateManagedStreamException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.EnsureCompressionMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateManagedStream::*)()>(&::System::IO::Compression::DeflateManagedStream::EnsureCompressionMode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2b0b78c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "EnsureCompressionMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.ThrowCannotWriteToDeflateManagedStreamException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::IO::Compression::DeflateManagedStream::ThrowCannotWriteToDeflateManagedStreamException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b0b7a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "ThrowCannotWriteToDeflateManagedStreamException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.BeginRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::IO::Compression::DeflateManagedStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::IO::Compression::DeflateManagedStream::BeginRead)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2b0b7f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.EndRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Compression::DeflateManagedStream::*)(::System::IAsyncResult*)>(&::System::IO::Compression::DeflateManagedStream::EndRead)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b0b99c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.ReadAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::IO::Compression::DeflateManagedStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::Compression::DeflateManagedStream::ReadAsync)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x2b0b9e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.ReadAsyncCore
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::IO::Compression::DeflateManagedStream::*)(::System::Threading::Tasks::Task_1<int32_t>*, ::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::Compression::DeflateManagedStream::ReadAsyncCore)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2b0bd3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "ReadAsyncCore",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.Write
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateManagedStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::Compression::DeflateManagedStream::Write)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2b0be64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.WriteDeflaterOutput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateManagedStream::*)()>(&::System::IO::Compression::DeflateManagedStream::WriteDeflaterOutput)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b0c070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "WriteDeflaterOutput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.DoMaintenance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateManagedStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::Compression::DeflateManagedStream::DoMaintenance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2b0beec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "DoMaintenance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.PurgeBuffers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateManagedStream::*)(bool)>(&::System::IO::Compression::DeflateManagedStream::PurgeBuffers)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2b0c3ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "PurgeBuffers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateManagedStream::*)(bool)>(&::System::IO::Compression::DeflateManagedStream::Dispose)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2b0c5b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.WriteAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::Compression::DeflateManagedStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::Compression::DeflateManagedStream::WriteAsync)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2b0c648;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.WriteAsyncCore
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::Compression::DeflateManagedStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::Compression::DeflateManagedStream::WriteAsyncCore)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2b0c7a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "WriteAsyncCore",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.BeginWrite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::IO::Compression::DeflateManagedStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::IO::Compression::DeflateManagedStream::BeginWrite)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2b0c898;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.EndWrite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateManagedStream::*)(::System::IAsyncResult*)>(&::System::IO::Compression::DeflateManagedStream::EndWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b0c948;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateManagedStream.__n__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::Compression::DeflateManagedStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::Compression::DeflateManagedStream::__n__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b0ca40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "<>n__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::IO::Compression::DeflateManagedStream::__cordl_internal_get__stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr ::System::IO::Stream* const& System::IO::Compression::DeflateManagedStream::__cordl_internal_get__stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr void System::IO::Compression::DeflateManagedStream::__cordl_internal_set__stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Compression::CompressionMode& System::IO::Compression::DeflateManagedStream::__cordl_internal_get__mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
constexpr ::System::IO::Compression::CompressionMode const& System::IO::Compression::DeflateManagedStream::__cordl_internal_get__mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
constexpr void System::IO::Compression::DeflateManagedStream::__cordl_internal_set__mode(::System::IO::Compression::CompressionMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mode = value;
}
constexpr bool& System::IO::Compression::DeflateManagedStream::__cordl_internal_get__leaveOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leaveOpen;
}
constexpr bool const& System::IO::Compression::DeflateManagedStream::__cordl_internal_get__leaveOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leaveOpen;
}
constexpr void System::IO::Compression::DeflateManagedStream::__cordl_internal_set__leaveOpen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leaveOpen = value;
}
constexpr ::System::IO::Compression::InflaterManaged*& System::IO::Compression::DeflateManagedStream::__cordl_internal_get__inflater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inflater;
}
constexpr ::System::IO::Compression::InflaterManaged* const& System::IO::Compression::DeflateManagedStream::__cordl_internal_get__inflater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inflater;
}
constexpr void System::IO::Compression::DeflateManagedStream::__cordl_internal_set__inflater(::System::IO::Compression::InflaterManaged*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inflater)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Compression::DeflaterManaged*& System::IO::Compression::DeflateManagedStream::__cordl_internal_get__deflater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deflater;
}
constexpr ::System::IO::Compression::DeflaterManaged* const& System::IO::Compression::DeflateManagedStream::__cordl_internal_get__deflater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deflater;
}
constexpr void System::IO::Compression::DeflateManagedStream::__cordl_internal_set__deflater(::System::IO::Compression::DeflaterManaged*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____deflater)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::IO::Compression::DeflateManagedStream::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::IO::Compression::DeflateManagedStream::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr void System::IO::Compression::DeflateManagedStream::__cordl_internal_set__buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::IO::Compression::DeflateManagedStream::__cordl_internal_get__asyncOperations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncOperations;
}
constexpr int32_t const& System::IO::Compression::DeflateManagedStream::__cordl_internal_get__asyncOperations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncOperations;
}
constexpr void System::IO::Compression::DeflateManagedStream::__cordl_internal_set__asyncOperations(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asyncOperations = value;
}
constexpr ::System::IO::Compression::IFileFormatWriter*& System::IO::Compression::DeflateManagedStream::__cordl_internal_get__formatWriter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____formatWriter;
}
constexpr ::System::IO::Compression::IFileFormatWriter* const& System::IO::Compression::DeflateManagedStream::__cordl_internal_get__formatWriter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____formatWriter;
}
constexpr void System::IO::Compression::DeflateManagedStream::__cordl_internal_set__formatWriter(::System::IO::Compression::IFileFormatWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____formatWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::IO::Compression::DeflateManagedStream::__cordl_internal_get__wroteHeader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wroteHeader;
}
constexpr bool const& System::IO::Compression::DeflateManagedStream::__cordl_internal_get__wroteHeader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wroteHeader;
}
constexpr void System::IO::Compression::DeflateManagedStream::__cordl_internal_set__wroteHeader(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wroteHeader = value;
}
constexpr bool& System::IO::Compression::DeflateManagedStream::__cordl_internal_get__wroteBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wroteBytes;
}
constexpr bool const& System::IO::Compression::DeflateManagedStream::__cordl_internal_get__wroteBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wroteBytes;
}
constexpr void System::IO::Compression::DeflateManagedStream::__cordl_internal_set__wroteBytes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wroteBytes = value;
}
inline void System::IO::Compression::DeflateManagedStream::_ctor(::System::IO::Stream*  stream, ::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, method);
}
inline void System::IO::Compression::DeflateManagedStream::InitializeInflater(::System::IO::Stream*  stream, bool  leaveOpen, ::System::IO::Compression::IFileFormatReader*  reader, ::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "InitializeInflater",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::IFileFormatReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, leaveOpen, reader, method);
}
inline bool System::IO::Compression::DeflateManagedStream::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::IO::Compression::DeflateManagedStream::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::IO::Compression::DeflateManagedStream::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t System::IO::Compression::DeflateManagedStream::get_Length()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t System::IO::Compression::DeflateManagedStream::get_Position()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void System::IO::Compression::DeflateManagedStream::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::IO::Compression::DeflateManagedStream::Flush()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::IO::Compression::DeflateManagedStream::FlushAsync(::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                    22
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline int64_t System::IO::Compression::DeflateManagedStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                    31
                )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, offset, origin);
}
inline void System::IO::Compression::DeflateManagedStream::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                    32
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::IO::Compression::DeflateManagedStream::Read(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                    33
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, array, offset, count);
}
inline void System::IO::Compression::DeflateManagedStream::ValidateParameters(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "ValidateParameters",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, offset, count);
}
inline void System::IO::Compression::DeflateManagedStream::EnsureNotDisposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "EnsureNotDisposed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Compression::DeflateManagedStream::ThrowStreamClosedException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "ThrowStreamClosedException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void System::IO::Compression::DeflateManagedStream::EnsureDecompressionMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "EnsureDecompressionMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Compression::DeflateManagedStream::ThrowCannotReadFromDeflateManagedStreamException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "ThrowCannotReadFromDeflateManagedStreamException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void System::IO::Compression::DeflateManagedStream::EnsureCompressionMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "EnsureCompressionMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Compression::DeflateManagedStream::ThrowCannotWriteToDeflateManagedStreamException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "ThrowCannotWriteToDeflateManagedStreamException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::System::IAsyncResult* System::IO::Compression::DeflateManagedStream::BeginRead(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  asyncCallback, ::System::Object*  asyncState)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                    23
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, count, asyncCallback, asyncState);
}
inline int32_t System::IO::Compression::DeflateManagedStream::EndRead(::System::IAsyncResult*  asyncResult)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                    24
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, asyncResult);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::IO::Compression::DeflateManagedStream::ReadAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                    25
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, array, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::IO::Compression::DeflateManagedStream::ReadAsyncCore(::System::Threading::Tasks::Task_1<int32_t>*  readTask, ::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "ReadAsyncCore",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, readTask, array, offset, count, cancellationToken);
}
inline void System::IO::Compression::DeflateManagedStream::Write(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                    36
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, offset, count);
}
inline void System::IO::Compression::DeflateManagedStream::WriteDeflaterOutput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "WriteDeflaterOutput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Compression::DeflateManagedStream::DoMaintenance(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "DoMaintenance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, offset, count);
}
inline void System::IO::Compression::DeflateManagedStream::PurgeBuffers(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "PurgeBuffers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::IO::Compression::DeflateManagedStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::System::Threading::Tasks::Task* System::IO::Compression::DeflateManagedStream::WriteAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                    29
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, array, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::IO::Compression::DeflateManagedStream::WriteAsyncCore(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "WriteAsyncCore",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, array, offset, count, cancellationToken);
}
inline ::System::IAsyncResult* System::IO::Compression::DeflateManagedStream::BeginWrite(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  asyncCallback, ::System::Object*  asyncState)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                    27
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, count, asyncCallback, asyncState);
}
inline void System::IO::Compression::DeflateManagedStream::EndWrite(::System::IAsyncResult*  asyncResult)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                    28
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncResult);
}
inline ::System::Threading::Tasks::Task* System::IO::Compression::DeflateManagedStream::__n__0(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateManagedStream*>::get(),
                        "<>n__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::IO::Compression::DeflateManagedStream* System::IO::Compression::DeflateManagedStream::New_ctor(::System::IO::Stream*  stream, ::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Compression::DeflateManagedStream*>(stream, method));
}
// Ctor Parameters []
constexpr ::System::IO::Compression::DeflateManagedStream::DeflateManagedStream()   {
}
