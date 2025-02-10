#pragma once
// IWYU pragma private; include "NatSuite/Devices/Internal/NativeCameraDevice.hpp"
#include "NatSuite/Devices/zzzz__CameraDevice_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "NatSuite/Devices/Internal/zzzz__NativeCameraDevice_def.hpp"
#include "NatSuite/Devices/Internal/zzzz__NativeCameraDevice_def.hpp"
#include "NatSuite/Devices/zzzz__FlashMode_def.hpp"
#include "NatSuite/Devices/zzzz__FrameOrientation_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18000c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0._StartRunning_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0::*)(::System::IntPtr, int32_t, int32_t, int64_t)>(&::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0::_StartRunning_b__0)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180033c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0*>::get(),
                        "<StartRunning>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::NatSuite::Devices::Internal::NativeCameraDevice*& NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::NatSuite::Devices::Internal::NativeCameraDevice* const& NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0::__cordl_internal_set___4__this(::NatSuite::Devices::Internal::NativeCameraDevice*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>*& NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0::__cordl_internal_get_startTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTask;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>* const& NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0::__cordl_internal_get_startTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTask;
}
constexpr void NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0::__cordl_internal_set_startTask(::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___startTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0::_StartRunning_b__0(::System::IntPtr  pixelBuffer, int32_t  width, int32_t  height, int64_t  timestamp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0*>::get(),
                        "<StartRunning>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pixelBuffer, width, height, timestamp);
}
inline ::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0* NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0*>());
}
// Ctor Parameters []
constexpr ::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0::NativeCameraDevice___c__DisplayClass58_0()   {
}
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180029c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0._CapturePhoto_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0::*)(::System::IntPtr, int32_t, int32_t, int64_t)>(&::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0::_CapturePhoto_b__0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x180049c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0*>::get(),
                        "<CapturePhoto>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::GCHandle& NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0::__cordl_internal_get_handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0::__cordl_internal_get_handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr void NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0::__cordl_internal_set_handle(::System::Runtime::InteropServices::GCHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handle = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>*& NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0::__cordl_internal_get_captureTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___captureTask;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>* const& NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0::__cordl_internal_get_captureTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___captureTask;
}
constexpr void NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0::__cordl_internal_set_captureTask(::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___captureTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0::_CapturePhoto_b__0(::System::IntPtr  pixelBuffer, int32_t  width, int32_t  height, int64_t  timestamp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0*>::get(),
                        "<CapturePhoto>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pixelBuffer, width, height, timestamp);
}
inline ::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0* NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0*>());
}
// Ctor Parameters []
constexpr ::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0::NativeCameraDevice___c__DisplayClass60_0()   {
}
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.get_uniqueID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::get_uniqueID)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x17ffb9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.get_frontFacing
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::get_frontFacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ffc14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.get_flashSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::get_flashSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ffc1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.get_torchSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::get_torchSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ffc24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.get_exposureLockSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::get_exposureLockSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ffc2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.get_focusLockSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::get_focusLockSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ffc34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.get_whiteBalanceLockSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::get_whiteBalanceLockSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ffc3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.get_fieldOfView
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<float_t,float_t> (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::get_fieldOfView)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x17ffc44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.get_exposureRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<float_t,float_t> (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::get_exposureRange)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x17ffcb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.get_zoomRange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<float_t,float_t> (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::get_zoomRange)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x17ffd2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.get_previewResolution
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<int32_t,int32_t> (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::get_previewResolution)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x17ffda0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.set_previewResolution
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeCameraDevice::*)(::System::ValueTuple_2<int32_t,int32_t>)>(&::NatSuite::Devices::Internal::NativeCameraDevice::set_previewResolution)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17ffe14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.get_photoResolution
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<int32_t,int32_t> (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::get_photoResolution)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x17ffe20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.set_photoResolution
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeCameraDevice::*)(::System::ValueTuple_2<int32_t,int32_t>)>(&::NatSuite::Devices::Internal::NativeCameraDevice::set_photoResolution)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17ffe94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.get_frameRate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::get_frameRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ffea0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.set_frameRate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeCameraDevice::*)(int32_t)>(&::NatSuite::Devices::Internal::NativeCameraDevice::set_frameRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ffea8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.get_exposureBias
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::get_exposureBias)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ffeb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.set_exposureBias
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeCameraDevice::*)(float_t)>(&::NatSuite::Devices::Internal::NativeCameraDevice::set_exposureBias)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ffeb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.get_exposureLock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::get_exposureLock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ffec0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.set_exposureLock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeCameraDevice::*)(bool)>(&::NatSuite::Devices::Internal::NativeCameraDevice::set_exposureLock)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17ffec8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.set_exposurePoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeCameraDevice::*)(::System::ValueTuple_2<float_t,float_t>)>(&::NatSuite::Devices::Internal::NativeCameraDevice::set_exposurePoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ffed4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.get_flashMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NatSuite::Devices::FlashMode (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::get_flashMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ffedc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.set_flashMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeCameraDevice::*)(::NatSuite::Devices::FlashMode)>(&::NatSuite::Devices::Internal::NativeCameraDevice::set_flashMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ffee4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.get_focusLock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::get_focusLock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ffeec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.set_focusLock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeCameraDevice::*)(bool)>(&::NatSuite::Devices::Internal::NativeCameraDevice::set_focusLock)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17ffef4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.set_focusPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeCameraDevice::*)(::System::ValueTuple_2<float_t,float_t>)>(&::NatSuite::Devices::Internal::NativeCameraDevice::set_focusPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17fff00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.get_torchEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::get_torchEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17fff08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.set_torchEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeCameraDevice::*)(bool)>(&::NatSuite::Devices::Internal::NativeCameraDevice::set_torchEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17fff10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  41
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.get_whiteBalanceLock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::get_whiteBalanceLock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17fff1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.set_whiteBalanceLock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeCameraDevice::*)(bool)>(&::NatSuite::Devices::Internal::NativeCameraDevice::set_whiteBalanceLock)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17fff24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  43
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.get_zoomRatio
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::get_zoomRatio)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17fff30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  44
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.set_zoomRatio
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeCameraDevice::*)(float_t)>(&::NatSuite::Devices::Internal::NativeCameraDevice::set_zoomRatio)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17fff38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  45
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.set_orientation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeCameraDevice::*)(::NatSuite::Devices::FrameOrientation)>(&::NatSuite::Devices::Internal::NativeCameraDevice::set_orientation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17fff40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  46
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.get_running
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::get_running)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17fff48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  47
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.StartRunning
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::StartRunning)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x17fff50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  48
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.StopRunning
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::StopRunning)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x18000c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  49
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.CapturePhoto
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::CapturePhoto)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x1800134;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  50
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeCameraDevice::*)(::System::IntPtr)>(&::NatSuite::Devices::Internal::NativeCameraDevice::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x17fb3a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.Finalize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::Internal::NativeCameraDevice::*)()>(&::NatSuite::Devices::Internal::NativeCameraDevice::Finalize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x18002a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::Internal::NativeCameraDevice.OnFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, int64_t)>(&::NatSuite::Devices::Internal::NativeCameraDevice::OnFrame)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x17ffad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                        "OnFrame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& NatSuite::Devices::Internal::NativeCameraDevice::__cordl_internal_get_device()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___device;
}
constexpr ::System::IntPtr const& NatSuite::Devices::Internal::NativeCameraDevice::__cordl_internal_get_device() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___device;
}
constexpr void NatSuite::Devices::Internal::NativeCameraDevice::__cordl_internal_set_device(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___device = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& NatSuite::Devices::Internal::NativeCameraDevice::__cordl_internal_get_previewTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previewTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& NatSuite::Devices::Internal::NativeCameraDevice::__cordl_internal_get_previewTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previewTexture;
}
constexpr void NatSuite::Devices::Internal::NativeCameraDevice::__cordl_internal_set_previewTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previewTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW NatSuite::Devices::Internal::NativeCameraDevice::get_uniqueID()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool NatSuite::Devices::Internal::NativeCameraDevice::get_frontFacing()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool NatSuite::Devices::Internal::NativeCameraDevice::get_flashSupported()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool NatSuite::Devices::Internal::NativeCameraDevice::get_torchSupported()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool NatSuite::Devices::Internal::NativeCameraDevice::get_exposureLockSupported()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    18
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool NatSuite::Devices::Internal::NativeCameraDevice::get_focusLockSupported()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    19
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool NatSuite::Devices::Internal::NativeCameraDevice::get_whiteBalanceLockSupported()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::ValueTuple_2<float_t,float_t> NatSuite::Devices::Internal::NativeCameraDevice::get_fieldOfView()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<float_t,float_t>, false>(this, ___internal_method);
}
inline ::System::ValueTuple_2<float_t,float_t> NatSuite::Devices::Internal::NativeCameraDevice::get_exposureRange()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    22
                )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<float_t,float_t>, false>(this, ___internal_method);
}
inline ::System::ValueTuple_2<float_t,float_t> NatSuite::Devices::Internal::NativeCameraDevice::get_zoomRange()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    23
                )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<float_t,float_t>, false>(this, ___internal_method);
}
inline ::System::ValueTuple_2<int32_t,int32_t> NatSuite::Devices::Internal::NativeCameraDevice::get_previewResolution()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    24
                )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t,int32_t>, false>(this, ___internal_method);
}
inline void NatSuite::Devices::Internal::NativeCameraDevice::set_previewResolution(::System::ValueTuple_2<int32_t,int32_t>  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    25
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::ValueTuple_2<int32_t,int32_t> NatSuite::Devices::Internal::NativeCameraDevice::get_photoResolution()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    26
                )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t,int32_t>, false>(this, ___internal_method);
}
inline void NatSuite::Devices::Internal::NativeCameraDevice::set_photoResolution(::System::ValueTuple_2<int32_t,int32_t>  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    27
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t NatSuite::Devices::Internal::NativeCameraDevice::get_frameRate()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    28
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void NatSuite::Devices::Internal::NativeCameraDevice::set_frameRate(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    29
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t NatSuite::Devices::Internal::NativeCameraDevice::get_exposureBias()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    30
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void NatSuite::Devices::Internal::NativeCameraDevice::set_exposureBias(float_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    31
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool NatSuite::Devices::Internal::NativeCameraDevice::get_exposureLock()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    32
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void NatSuite::Devices::Internal::NativeCameraDevice::set_exposureLock(bool  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    33
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void NatSuite::Devices::Internal::NativeCameraDevice::set_exposurePoint(::System::ValueTuple_2<float_t,float_t>  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    34
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::NatSuite::Devices::FlashMode NatSuite::Devices::Internal::NativeCameraDevice::get_flashMode()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    35
                )));
return ::cordl_internals::RunMethodRethrow<::NatSuite::Devices::FlashMode, false>(this, ___internal_method);
}
inline void NatSuite::Devices::Internal::NativeCameraDevice::set_flashMode(::NatSuite::Devices::FlashMode  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    36
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool NatSuite::Devices::Internal::NativeCameraDevice::get_focusLock()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    37
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void NatSuite::Devices::Internal::NativeCameraDevice::set_focusLock(bool  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    38
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void NatSuite::Devices::Internal::NativeCameraDevice::set_focusPoint(::System::ValueTuple_2<float_t,float_t>  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    39
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool NatSuite::Devices::Internal::NativeCameraDevice::get_torchEnabled()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    40
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void NatSuite::Devices::Internal::NativeCameraDevice::set_torchEnabled(bool  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    41
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool NatSuite::Devices::Internal::NativeCameraDevice::get_whiteBalanceLock()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    42
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void NatSuite::Devices::Internal::NativeCameraDevice::set_whiteBalanceLock(bool  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    43
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t NatSuite::Devices::Internal::NativeCameraDevice::get_zoomRatio()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    44
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void NatSuite::Devices::Internal::NativeCameraDevice::set_zoomRatio(float_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    45
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void NatSuite::Devices::Internal::NativeCameraDevice::set_orientation(::NatSuite::Devices::FrameOrientation  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    46
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool NatSuite::Devices::Internal::NativeCameraDevice::get_running()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    47
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* NatSuite::Devices::Internal::NativeCameraDevice::StartRunning()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    48
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>*, false>(this, ___internal_method);
}
inline void NatSuite::Devices::Internal::NativeCameraDevice::StopRunning()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    49
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* NatSuite::Devices::Internal::NativeCameraDevice::CapturePhoto()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    50
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>*, false>(this, ___internal_method);
}
inline void NatSuite::Devices::Internal::NativeCameraDevice::_ctor(::System::IntPtr  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device);
}
inline void NatSuite::Devices::Internal::NativeCameraDevice::Finalize()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Devices::Internal::NativeCameraDevice::OnFrame(::System::IntPtr  context, ::System::IntPtr  pixelBuffer, int32_t  width, int32_t  height, int64_t  timestamp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::Internal::NativeCameraDevice*>::get(),
                        "OnFrame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context, pixelBuffer, width, height, timestamp);
}
inline ::NatSuite::Devices::Internal::NativeCameraDevice* NatSuite::Devices::Internal::NativeCameraDevice::New_ctor(::System::IntPtr  device)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::NatSuite::Devices::Internal::NativeCameraDevice*>(device));
}
// Ctor Parameters []
constexpr ::NatSuite::Devices::Internal::NativeCameraDevice::NativeCameraDevice()   {
}
