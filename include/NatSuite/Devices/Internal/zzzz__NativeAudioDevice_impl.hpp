#pragma once
// IWYU pragma private; include "NatSuite/Devices/Internal/NativeAudioDevice.hpp"
#include "NatSuite/Devices/zzzz__AudioDevice_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "NatSuite/Devices/Internal/zzzz__NativeAudioDevice_def.hpp"
#include "NatSuite/Devices/Internal/zzzz__NativeAudioDevice_def.hpp"
#include "NatSuite/Devices/zzzz__SampleBufferDelegate_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0::*)()>(&::NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ff950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0._StartRunning_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0::*)(::ArrayW<float_t,::Array<float_t>*>, int64_t)>(&::NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0::_StartRunning_b__0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x17ff9f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0*>::get(),
                        "<StartRunning>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::NatSuite::Devices::SampleBufferDelegate*& NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0::__cordl_internal_get_delegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delegate;
}
constexpr ::NatSuite::Devices::SampleBufferDelegate* const& NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0::__cordl_internal_get_delegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delegate;
}
constexpr void NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0::__cordl_internal_set_delegate(::NatSuite::Devices::SampleBufferDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___delegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0::_StartRunning_b__0(::ArrayW<float_t,::Array<float_t>*>  sampleBuffer, int64_t  timestamp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0*>::get(),
                        "<StartRunning>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sampleBuffer, timestamp);
}
inline ::NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0* NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0*>());
}
// Ctor Parameters []
constexpr ::NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0::NativeAudioDevice___c__DisplayClass14_0()   {
}
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeAudioDevice.get_uniqueID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::NatSuite::Devices::Internal::NativeAudioDevice::*)()>(&::NatSuite::Devices::Internal::NativeAudioDevice::get_uniqueID)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x17ff720;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeAudioDevice.get_name
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::NatSuite::Devices::Internal::NativeAudioDevice::*)()>(&::NatSuite::Devices::Internal::NativeAudioDevice::get_name)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x17ff798;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeAudioDevice.get_echoCancellation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::NatSuite::Devices::Internal::NativeAudioDevice::*)()>(&::NatSuite::Devices::Internal::NativeAudioDevice::get_echoCancellation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ff810;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeAudioDevice.get_sampleRate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::NatSuite::Devices::Internal::NativeAudioDevice::*)()>(&::NatSuite::Devices::Internal::NativeAudioDevice::get_sampleRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ff818;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeAudioDevice.set_sampleRate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeAudioDevice::*)(int32_t)>(&::NatSuite::Devices::Internal::NativeAudioDevice::set_sampleRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ff820;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeAudioDevice.get_channelCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::NatSuite::Devices::Internal::NativeAudioDevice::*)()>(&::NatSuite::Devices::Internal::NativeAudioDevice::get_channelCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ff828;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeAudioDevice.set_channelCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeAudioDevice::*)(int32_t)>(&::NatSuite::Devices::Internal::NativeAudioDevice::set_channelCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ff830;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeAudioDevice.get_running
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::NatSuite::Devices::Internal::NativeAudioDevice::*)()>(&::NatSuite::Devices::Internal::NativeAudioDevice::get_running)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ff838;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeAudioDevice.StartRunning
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeAudioDevice::*)(::NatSuite::Devices::SampleBufferDelegate*)>(&::NatSuite::Devices::Internal::NativeAudioDevice::StartRunning)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x17ff840;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeAudioDevice.StopRunning
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeAudioDevice::*)()>(&::NatSuite::Devices::Internal::NativeAudioDevice::StopRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ff958;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeAudioDevice._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeAudioDevice::*)(::System::IntPtr)>(&::NatSuite::Devices::Internal::NativeAudioDevice::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x17fb2f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeAudioDevice.Finalize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeAudioDevice::*)()>(&::NatSuite::Devices::Internal::NativeAudioDevice::Finalize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x17ff960;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeAudioDevice.OnSampleBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t, int64_t)>(&::NatSuite::Devices::Internal::NativeAudioDevice::OnSampleBuffer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x17ff600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                        "OnSampleBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& NatSuite::Devices::Internal::NativeAudioDevice::__cordl_internal_get_device()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___device;
}
constexpr ::System::IntPtr const& NatSuite::Devices::Internal::NativeAudioDevice::__cordl_internal_get_device() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___device;
}
constexpr void NatSuite::Devices::Internal::NativeAudioDevice::__cordl_internal_set_device(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___device = value;
}
inline ::StringW NatSuite::Devices::Internal::NativeAudioDevice::get_uniqueID()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW NatSuite::Devices::Internal::NativeAudioDevice::get_name()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool NatSuite::Devices::Internal::NativeAudioDevice::get_echoCancellation()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t NatSuite::Devices::Internal::NativeAudioDevice::get_sampleRate()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void NatSuite::Devices::Internal::NativeAudioDevice::set_sampleRate(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t NatSuite::Devices::Internal::NativeAudioDevice::get_channelCount()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void NatSuite::Devices::Internal::NativeAudioDevice::set_channelCount(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool NatSuite::Devices::Internal::NativeAudioDevice::get_running()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                    18
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void NatSuite::Devices::Internal::NativeAudioDevice::StartRunning(::NatSuite::Devices::SampleBufferDelegate*  delegate)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                    19
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, delegate);
}
inline void NatSuite::Devices::Internal::NativeAudioDevice::StopRunning()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Devices::Internal::NativeAudioDevice::_ctor(::System::IntPtr  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device);
}
inline void NatSuite::Devices::Internal::NativeAudioDevice::Finalize()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Devices::Internal::NativeAudioDevice::OnSampleBuffer(::System::IntPtr  context, ::System::IntPtr  sampleBuffer, int32_t  sampleCount, int64_t  timestamp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeAudioDevice*>::get(),
                        "OnSampleBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context, sampleBuffer, sampleCount, timestamp);
}
inline ::NatSuite::Devices::Internal::NativeAudioDevice* NatSuite::Devices::Internal::NativeAudioDevice::New_ctor(::System::IntPtr  device)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::NatSuite::Devices::Internal::NativeAudioDevice*>(device));
}
// Ctor Parameters []
constexpr ::NatSuite::Devices::Internal::NativeAudioDevice::NativeAudioDevice()   {
}
