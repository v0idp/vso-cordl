#pragma once
// IWYU pragma private; include "NatSuite/Devices/Internal/Bridge.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "NatSuite/Devices/Internal/zzzz__Bridge_def.hpp"
#include "NatSuite/Devices/Internal/zzzz__Bridge_def.hpp"
#include "NatSuite/Devices/zzzz__FlashMode_def.hpp"
#include "NatSuite/Devices/zzzz__FrameOrientation_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge_FrameDelegate._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::Bridge_FrameDelegate::*)(::System::Object*, ::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge_FrameDelegate::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x17ff274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge_FrameDelegate*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge_FrameDelegate.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::Bridge_FrameDelegate::*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, int64_t)>(&::NatSuite::Devices::Internal::Bridge_FrameDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x17ff300;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge_FrameDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge_FrameDelegate*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge_FrameDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::NatSuite::Devices::Internal::Bridge_FrameDelegate::*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, int64_t, ::System::AsyncCallback*, ::System::Object*)>(&::NatSuite::Devices::Internal::Bridge_FrameDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x17ff314;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge_FrameDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge_FrameDelegate*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge_FrameDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::Bridge_FrameDelegate::*)(::System::IAsyncResult*)>(&::NatSuite::Devices::Internal::Bridge_FrameDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17ff428;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge_FrameDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge_FrameDelegate*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void NatSuite::Devices::Internal::Bridge_FrameDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge_FrameDelegate*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void NatSuite::Devices::Internal::Bridge_FrameDelegate::Invoke(::System::IntPtr  context, ::System::IntPtr  pixelBuffer, int32_t  width, int32_t  height, int64_t  timestamp)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge_FrameDelegate*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, pixelBuffer, width, height, timestamp);
}
inline ::System::IAsyncResult* NatSuite::Devices::Internal::Bridge_FrameDelegate::BeginInvoke(::System::IntPtr  context, ::System::IntPtr  pixelBuffer, int32_t  width, int32_t  height, int64_t  timestamp, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge_FrameDelegate*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, context, pixelBuffer, width, height, timestamp, callback, object);
}
inline void NatSuite::Devices::Internal::Bridge_FrameDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge_FrameDelegate*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::NatSuite::Devices::Internal::Bridge_FrameDelegate* NatSuite::Devices::Internal::Bridge_FrameDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::NatSuite::Devices::Internal::Bridge_FrameDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::NatSuite::Devices::Internal::Bridge_FrameDelegate::Bridge_FrameDelegate()   {
}
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate::*)(::System::Object*, ::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x17ff434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate::*)(::System::IntPtr, ::System::IntPtr, int32_t, int64_t)>(&::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x17ff4c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate::*)(::System::IntPtr, ::System::IntPtr, int32_t, int64_t, ::System::AsyncCallback*, ::System::Object*)>(&::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x17ff4d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate::*)(::System::IAsyncResult*)>(&::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17ff5d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void NatSuite::Devices::Internal::Bridge_SampleBufferDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void NatSuite::Devices::Internal::Bridge_SampleBufferDelegate::Invoke(::System::IntPtr  context, ::System::IntPtr  sampleBuffer, int32_t  sampleCount, int64_t  timestamp)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, sampleBuffer, sampleCount, timestamp);
}
inline ::System::IAsyncResult* NatSuite::Devices::Internal::Bridge_SampleBufferDelegate::BeginInvoke(::System::IntPtr  context, ::System::IntPtr  sampleBuffer, int32_t  sampleCount, int64_t  timestamp, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, context, sampleBuffer, sampleCount, timestamp, callback, object);
}
inline void NatSuite::Devices::Internal::Bridge_SampleBufferDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate* NatSuite::Devices::Internal::Bridge_SampleBufferDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate::Bridge_SampleBufferDelegate()   {
}
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::Dispose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x17fda58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.UniqueID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::Text::StringBuilder*)>(&::NatSuite::Devices::Internal::Bridge::UniqueID)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x17fdad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "UniqueID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.Running
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::Running)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x17fdb74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "Running",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.StartRunning
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate*, ::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::StartRunning)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x17fdbf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "StartRunning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.StopRunning
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::StopRunning)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17fdc98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "StopRunning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.AudioDevices
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::System::IntPtr>, ::ByRef<int32_t>)>(&::NatSuite::Devices::Internal::Bridge::AudioDevices)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17fb274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "AudioDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.Name
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::Text::StringBuilder*)>(&::NatSuite::Devices::Internal::Bridge::Name)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x17fdd14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "Name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.EchoCancellation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::EchoCancellation)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17fddb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "EchoCancellation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.SampleRate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::SampleRate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17fde3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "SampleRate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.SampleRate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::NatSuite::Devices::Internal::Bridge::SampleRate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17fdeb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "SampleRate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.ChannelCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::ChannelCount)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17fdf3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ChannelCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.ChannelCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::NatSuite::Devices::Internal::Bridge::ChannelCount)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17fdfb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ChannelCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.CameraDevices
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::System::IntPtr>, ::ByRef<int32_t>)>(&::NatSuite::Devices::Internal::Bridge::CameraDevices)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17fb320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "CameraDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.FrontFacing
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::FrontFacing)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17fe03c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "FrontFacing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.FlashSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::FlashSupported)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17fe0c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "FlashSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.TorchSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::TorchSupported)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17fe144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "TorchSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.ExposureLockSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::ExposureLockSupported)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17fe1c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ExposureLockSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.FocusLockSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::FocusLockSupported)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17fe24c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "FocusLockSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.WhiteBalanceLockSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::WhiteBalanceLockSupported)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17fe2d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "WhiteBalanceLockSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.FieldOfView
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<float_t>, ::ByRef<float_t>)>(&::NatSuite::Devices::Internal::Bridge::FieldOfView)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x17fe354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "FieldOfView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.ExposureRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<float_t>, ::ByRef<float_t>)>(&::NatSuite::Devices::Internal::Bridge::ExposureRange)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x17fe3e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ExposureRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.ZoomRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<float_t>, ::ByRef<float_t>)>(&::NatSuite::Devices::Internal::Bridge::ZoomRange)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x17fe47c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ZoomRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.PreviewResolution
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<int32_t>, ::ByRef<int32_t>)>(&::NatSuite::Devices::Internal::Bridge::PreviewResolution)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x17fe510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "PreviewResolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.PreviewResolution
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t)>(&::NatSuite::Devices::Internal::Bridge::PreviewResolution)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x17fe5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "PreviewResolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.PhotoResolution
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<int32_t>, ::ByRef<int32_t>)>(&::NatSuite::Devices::Internal::Bridge::PhotoResolution)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x17fe638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "PhotoResolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.PhotoResolution
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t)>(&::NatSuite::Devices::Internal::Bridge::PhotoResolution)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x17fe6cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "PhotoResolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.Framerate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::Framerate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17fe760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "Framerate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.Framerate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::NatSuite::Devices::Internal::Bridge::Framerate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17fe7dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "Framerate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.ExposureBias
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::ExposureBias)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17fe860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ExposureBias",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.ExposureBias
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, float_t)>(&::NatSuite::Devices::Internal::Bridge::ExposureBias)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x17fe8dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ExposureBias",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.ExposurePoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, float_t, float_t)>(&::NatSuite::Devices::Internal::Bridge::ExposurePoint)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x17fe968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ExposurePoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.ExposureLock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::ExposureLock)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17fe9fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ExposureLock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.ExposureLock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool)>(&::NatSuite::Devices::Internal::Bridge::ExposureLock)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17fea80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ExposureLock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.FlashMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NatSuite::Devices::FlashMode (*)(::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::FlashMode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17feb04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "FlashMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.FlashMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::NatSuite::Devices::FlashMode)>(&::NatSuite::Devices::Internal::Bridge::FlashMode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17feb80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "FlashMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::FlashMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.FocusLock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::FocusLock)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17fec04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "FocusLock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.FocusLock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool)>(&::NatSuite::Devices::Internal::Bridge::FocusLock)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17fec88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "FocusLock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.FocusPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, float_t, float_t)>(&::NatSuite::Devices::Internal::Bridge::FocusPoint)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x17fed0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "FocusPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.TorchEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::TorchEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17feda0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "TorchEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.TorchEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool)>(&::NatSuite::Devices::Internal::Bridge::TorchEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17fee24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "TorchEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.WhiteBalanceLock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::WhiteBalanceLock)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17feea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "WhiteBalanceLock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.WhiteBalanceLock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool)>(&::NatSuite::Devices::Internal::Bridge::WhiteBalanceLock)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17fef2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "WhiteBalanceLock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.ZoomRatio
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::ZoomRatio)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17fefb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ZoomRatio",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.ZoomRatio
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, float_t)>(&::NatSuite::Devices::Internal::Bridge::ZoomRatio)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x17ff02c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ZoomRatio",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.Orientation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::NatSuite::Devices::FrameOrientation)>(&::NatSuite::Devices::Internal::Bridge::Orientation)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17ff0b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "Orientation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::FrameOrientation>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.StartRunning
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::NatSuite::Devices::Internal::Bridge_FrameDelegate*, ::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::StartRunning)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x17ff13c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "StartRunning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::Internal::Bridge_FrameDelegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::Bridge.CapturePhoto
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::NatSuite::Devices::Internal::Bridge_FrameDelegate*, ::System::IntPtr)>(&::NatSuite::Devices::Internal::Bridge::CapturePhoto)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x17ff1d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "CapturePhoto",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::Internal::Bridge_FrameDelegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
inline void NatSuite::Devices::Internal::Bridge::Dispose(::System::IntPtr  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device);
}
inline void NatSuite::Devices::Internal::Bridge::UniqueID(::System::IntPtr  device, ::System::Text::StringBuilder*  dest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "UniqueID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, dest);
}
inline bool NatSuite::Devices::Internal::Bridge::Running(::System::IntPtr  camera)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "Running",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, camera);
}
inline bool NatSuite::Devices::Internal::Bridge::StartRunning(::System::IntPtr  device, ::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate*  callback, ::System::IntPtr  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "StartRunning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, device, callback, context);
}
inline void NatSuite::Devices::Internal::Bridge::StopRunning(::System::IntPtr  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "StopRunning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device);
}
inline void NatSuite::Devices::Internal::Bridge::AudioDevices(::ByRef<::System::IntPtr>  outDevicesArray, ::ByRef<int32_t>  outDevicesArrayCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "AudioDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, outDevicesArray, outDevicesArrayCount);
}
inline void NatSuite::Devices::Internal::Bridge::Name(::System::IntPtr  device, ::System::Text::StringBuilder*  dest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "Name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, dest);
}
inline bool NatSuite::Devices::Internal::Bridge::EchoCancellation(::System::IntPtr  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "EchoCancellation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, device);
}
inline int32_t NatSuite::Devices::Internal::Bridge::SampleRate(::System::IntPtr  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "SampleRate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, device);
}
inline void NatSuite::Devices::Internal::Bridge::SampleRate(::System::IntPtr  device, int32_t  sampleRate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "SampleRate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, sampleRate);
}
inline int32_t NatSuite::Devices::Internal::Bridge::ChannelCount(::System::IntPtr  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ChannelCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, device);
}
inline void NatSuite::Devices::Internal::Bridge::ChannelCount(::System::IntPtr  device, int32_t  sampleRate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ChannelCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, sampleRate);
}
inline void NatSuite::Devices::Internal::Bridge::CameraDevices(::ByRef<::System::IntPtr>  outDevicesArray, ::ByRef<int32_t>  outDevicesArrayCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "CameraDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, outDevicesArray, outDevicesArrayCount);
}
inline bool NatSuite::Devices::Internal::Bridge::FrontFacing(::System::IntPtr  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "FrontFacing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, device);
}
inline bool NatSuite::Devices::Internal::Bridge::FlashSupported(::System::IntPtr  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "FlashSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, device);
}
inline bool NatSuite::Devices::Internal::Bridge::TorchSupported(::System::IntPtr  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "TorchSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, device);
}
inline bool NatSuite::Devices::Internal::Bridge::ExposureLockSupported(::System::IntPtr  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ExposureLockSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, device);
}
inline bool NatSuite::Devices::Internal::Bridge::FocusLockSupported(::System::IntPtr  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "FocusLockSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, device);
}
inline bool NatSuite::Devices::Internal::Bridge::WhiteBalanceLockSupported(::System::IntPtr  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "WhiteBalanceLockSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, device);
}
inline void NatSuite::Devices::Internal::Bridge::FieldOfView(::System::IntPtr  device, ::ByRef<float_t>  x, ::ByRef<float_t>  y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "FieldOfView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, x, y);
}
inline void NatSuite::Devices::Internal::Bridge::ExposureRange(::System::IntPtr  device, ::ByRef<float_t>  min, ::ByRef<float_t>  max)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ExposureRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, min, max);
}
inline void NatSuite::Devices::Internal::Bridge::ZoomRange(::System::IntPtr  device, ::ByRef<float_t>  min, ::ByRef<float_t>  max)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ZoomRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, min, max);
}
inline void NatSuite::Devices::Internal::Bridge::PreviewResolution(::System::IntPtr  device, ::ByRef<int32_t>  width, ::ByRef<int32_t>  height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "PreviewResolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, width, height);
}
inline void NatSuite::Devices::Internal::Bridge::PreviewResolution(::System::IntPtr  device, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "PreviewResolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, width, height);
}
inline void NatSuite::Devices::Internal::Bridge::PhotoResolution(::System::IntPtr  device, ::ByRef<int32_t>  width, ::ByRef<int32_t>  height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "PhotoResolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, width, height);
}
inline void NatSuite::Devices::Internal::Bridge::PhotoResolution(::System::IntPtr  device, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "PhotoResolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, width, height);
}
inline int32_t NatSuite::Devices::Internal::Bridge::Framerate(::System::IntPtr  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "Framerate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, device);
}
inline void NatSuite::Devices::Internal::Bridge::Framerate(::System::IntPtr  device, int32_t  framerate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "Framerate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, framerate);
}
inline float_t NatSuite::Devices::Internal::Bridge::ExposureBias(::System::IntPtr  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ExposureBias",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, device);
}
inline void NatSuite::Devices::Internal::Bridge::ExposureBias(::System::IntPtr  device, float_t  bias)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ExposureBias",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, bias);
}
inline void NatSuite::Devices::Internal::Bridge::ExposurePoint(::System::IntPtr  device, float_t  x, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ExposurePoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, x, y);
}
inline bool NatSuite::Devices::Internal::Bridge::ExposureLock(::System::IntPtr  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ExposureLock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, device);
}
inline void NatSuite::Devices::Internal::Bridge::ExposureLock(::System::IntPtr  device, bool  locked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ExposureLock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, locked);
}
inline ::NatSuite::Devices::FlashMode NatSuite::Devices::Internal::Bridge::FlashMode(::System::IntPtr  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "FlashMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::NatSuite::Devices::FlashMode, false>(nullptr, ___internal_method, device);
}
inline void NatSuite::Devices::Internal::Bridge::FlashMode(::System::IntPtr  device, ::NatSuite::Devices::FlashMode  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "FlashMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::FlashMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, state);
}
inline bool NatSuite::Devices::Internal::Bridge::FocusLock(::System::IntPtr  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "FocusLock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, device);
}
inline void NatSuite::Devices::Internal::Bridge::FocusLock(::System::IntPtr  device, bool  locked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "FocusLock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, locked);
}
inline void NatSuite::Devices::Internal::Bridge::FocusPoint(::System::IntPtr  device, float_t  x, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "FocusPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, x, y);
}
inline bool NatSuite::Devices::Internal::Bridge::TorchEnabled(::System::IntPtr  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "TorchEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, device);
}
inline void NatSuite::Devices::Internal::Bridge::TorchEnabled(::System::IntPtr  device, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "TorchEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, enabled);
}
inline bool NatSuite::Devices::Internal::Bridge::WhiteBalanceLock(::System::IntPtr  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "WhiteBalanceLock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, device);
}
inline void NatSuite::Devices::Internal::Bridge::WhiteBalanceLock(::System::IntPtr  device, bool  locked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "WhiteBalanceLock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, locked);
}
inline float_t NatSuite::Devices::Internal::Bridge::ZoomRatio(::System::IntPtr  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ZoomRatio",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, device);
}
inline void NatSuite::Devices::Internal::Bridge::ZoomRatio(::System::IntPtr  device, float_t  ratio)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "ZoomRatio",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, ratio);
}
inline void NatSuite::Devices::Internal::Bridge::Orientation(::System::IntPtr  device, ::NatSuite::Devices::FrameOrientation  orentation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "Orientation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::FrameOrientation>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, orentation);
}
inline void NatSuite::Devices::Internal::Bridge::StartRunning(::System::IntPtr  device, ::NatSuite::Devices::Internal::Bridge_FrameDelegate*  handler, ::System::IntPtr  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "StartRunning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::Internal::Bridge_FrameDelegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, handler, context);
}
inline void NatSuite::Devices::Internal::Bridge::CapturePhoto(::System::IntPtr  device, ::NatSuite::Devices::Internal::Bridge_FrameDelegate*  handler, ::System::IntPtr  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::Bridge*>::get(),
                        "CapturePhoto",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::Internal::Bridge_FrameDelegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, handler, context);
}
// Ctor Parameters []
constexpr ::NatSuite::Devices::Internal::Bridge::Bridge()   {
}
