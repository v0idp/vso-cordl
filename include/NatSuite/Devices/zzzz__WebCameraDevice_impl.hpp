#pragma once
// IWYU pragma private; include "NatSuite/Devices/WebCameraDevice.hpp"
#include "NatSuite/Devices/zzzz__ICameraDevice_impl.hpp"
#include "NatSuite/Devices/zzzz__IMediaDevice_impl.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__WebCamDevice_impl.hpp"
#include "NatSuite/Devices/zzzz__WebCameraDevice_def.hpp"
#include "NatSuite/Devices/zzzz__IMediaDevice_def.hpp"
#include "NatSuite/Devices/zzzz__WebCameraDevice_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__WebCamDevice_def.hpp"
#include "UnityEngine/zzzz__WebCamTexture_def.hpp"
//  Writing Method size for method: ::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment::*)()>(&::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x17fd7b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment::*)()>(&::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17fd820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment::*)()>(&::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17fd83c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment::__cordl_internal_get_delegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delegate;
}
constexpr ::System::Action* const& NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment::__cordl_internal_get_delegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delegate;
}
constexpr void NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment::__cordl_internal_set_delegate(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___delegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment* NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment*>());
}
// Ctor Parameters []
constexpr ::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment::WebCameraDevice_WebCameraDeviceAttachment()   {
}
//  Writing Method size for method: ::NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0::*)()>(&::NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17fd5a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0._StartRunning_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0::*)()>(&::NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0::_StartRunning_b__0)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x17fd844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0*>::get(),
                        "<StartRunning>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::NatSuite::Devices::WebCameraDevice*& NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::NatSuite::Devices::WebCameraDevice* const& NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0::__cordl_internal_set___4__this(::NatSuite::Devices::WebCameraDevice*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>*& NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0::__cordl_internal_get_startTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTask;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>* const& NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0::__cordl_internal_get_startTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTask;
}
constexpr void NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0::__cordl_internal_set_startTask(::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___startTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0::_StartRunning_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0*>::get(),
                        "<StartRunning>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0* NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0*>());
}
// Ctor Parameters []
constexpr ::NatSuite::Devices::WebCameraDevice___c__DisplayClass15_0::WebCameraDevice___c__DisplayClass15_0()   {
}
//  Writing Method size for method: ::NatSuite::Devices::WebCameraDevice.get_uniqueID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::NatSuite::Devices::WebCameraDevice::*)()>(&::NatSuite::Devices::WebCameraDevice::get_uniqueID)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x17fd318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                        "get_uniqueID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::WebCameraDevice.get_frontFacing
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::NatSuite::Devices::WebCameraDevice::*)()>(&::NatSuite::Devices::WebCameraDevice::get_frontFacing)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x17fd340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                        "get_frontFacing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::WebCameraDevice.get_previewResolution
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<int32_t,int32_t> (::NatSuite::Devices::WebCameraDevice::*)()>(&::NatSuite::Devices::WebCameraDevice::get_previewResolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17fd36c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                        "get_previewResolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::WebCameraDevice.set_previewResolution
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::WebCameraDevice::*)(::System::ValueTuple_2<int32_t,int32_t>)>(&::NatSuite::Devices::WebCameraDevice::set_previewResolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17fd374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                        "set_previewResolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t,int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::WebCameraDevice.get_frameRate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::NatSuite::Devices::WebCameraDevice::*)()>(&::NatSuite::Devices::WebCameraDevice::get_frameRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17fd37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                        "get_frameRate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::WebCameraDevice.set_frameRate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::WebCameraDevice::*)(int32_t)>(&::NatSuite::Devices::WebCameraDevice::set_frameRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17fd384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                        "set_frameRate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::WebCameraDevice.get_running
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::NatSuite::Devices::WebCameraDevice::*)()>(&::NatSuite::Devices::WebCameraDevice::get_running)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17fd38c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                        "get_running",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::WebCameraDevice.StartRunning
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* (::NatSuite::Devices::WebCameraDevice::*)()>(&::NatSuite::Devices::WebCameraDevice::StartRunning)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x17fd3a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                        "StartRunning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::WebCameraDevice.StopRunning
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::WebCameraDevice::*)()>(&::NatSuite::Devices::WebCameraDevice::StopRunning)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x17fd5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                        "StopRunning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::WebCameraDevice._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::WebCameraDevice::*)(::UnityEngine::WebCamDevice)>(&::NatSuite::Devices::WebCameraDevice::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x17fc504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::WebCamDevice>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::WebCameraDevice.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::NatSuite::Devices::WebCameraDevice::*)(::NatSuite::Devices::IMediaDevice*)>(&::NatSuite::Devices::WebCameraDevice::Equals)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x17fd648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::IMediaDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::WebCameraDevice.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::NatSuite::Devices::WebCameraDevice::*)()>(&::NatSuite::Devices::WebCameraDevice::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x17fd744;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::WebCamDevice& NatSuite::Devices::WebCameraDevice::__cordl_internal_get_device()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___device;
}
constexpr ::UnityEngine::WebCamDevice const& NatSuite::Devices::WebCameraDevice::__cordl_internal_get_device() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___device;
}
constexpr void NatSuite::Devices::WebCameraDevice::__cordl_internal_set_device(::UnityEngine::WebCamDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___device = value;
}
constexpr ::System::ValueTuple_2<int32_t,int32_t>& NatSuite::Devices::WebCameraDevice::__cordl_internal_get__previewResolution_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewResolution_k__BackingField;
}
constexpr ::System::ValueTuple_2<int32_t,int32_t> const& NatSuite::Devices::WebCameraDevice::__cordl_internal_get__previewResolution_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewResolution_k__BackingField;
}
constexpr void NatSuite::Devices::WebCameraDevice::__cordl_internal_set__previewResolution_k__BackingField(::System::ValueTuple_2<int32_t,int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previewResolution_k__BackingField = value;
}
constexpr int32_t& NatSuite::Devices::WebCameraDevice::__cordl_internal_get__frameRate_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameRate_k__BackingField;
}
constexpr int32_t const& NatSuite::Devices::WebCameraDevice::__cordl_internal_get__frameRate_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameRate_k__BackingField;
}
constexpr void NatSuite::Devices::WebCameraDevice::__cordl_internal_set__frameRate_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameRate_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::WebCamTexture>& NatSuite::Devices::WebCameraDevice::__cordl_internal_get_webCamTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webCamTexture;
}
constexpr ::UnityW<::UnityEngine::WebCamTexture> const& NatSuite::Devices::WebCameraDevice::__cordl_internal_get_webCamTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webCamTexture;
}
constexpr void NatSuite::Devices::WebCameraDevice::__cordl_internal_set_webCamTexture(::UnityW<::UnityEngine::WebCamTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___webCamTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& NatSuite::Devices::WebCameraDevice::__cordl_internal_get_previewTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previewTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& NatSuite::Devices::WebCameraDevice::__cordl_internal_get_previewTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previewTexture;
}
constexpr void NatSuite::Devices::WebCameraDevice::__cordl_internal_set_previewTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previewTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>& NatSuite::Devices::WebCameraDevice::__cordl_internal_get_pixelBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pixelBuffer;
}
constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> const& NatSuite::Devices::WebCameraDevice::__cordl_internal_get_pixelBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pixelBuffer;
}
constexpr void NatSuite::Devices::WebCameraDevice::__cordl_internal_set_pixelBuffer(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pixelBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment>& NatSuite::Devices::WebCameraDevice::__cordl_internal_get_attachment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachment;
}
constexpr ::UnityW<::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment> const& NatSuite::Devices::WebCameraDevice::__cordl_internal_get_attachment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachment;
}
constexpr void NatSuite::Devices::WebCameraDevice::__cordl_internal_set_attachment(::UnityW<::NatSuite::Devices::WebCameraDevice_WebCameraDeviceAttachment>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attachment)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW NatSuite::Devices::WebCameraDevice::get_uniqueID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                        "get_uniqueID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool NatSuite::Devices::WebCameraDevice::get_frontFacing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                        "get_frontFacing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::ValueTuple_2<int32_t,int32_t> NatSuite::Devices::WebCameraDevice::get_previewResolution()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                        "get_previewResolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t,int32_t>, false>(this, ___internal_method);
}
inline void NatSuite::Devices::WebCameraDevice::set_previewResolution(::System::ValueTuple_2<int32_t,int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                        "set_previewResolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t,int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t NatSuite::Devices::WebCameraDevice::get_frameRate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                        "get_frameRate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void NatSuite::Devices::WebCameraDevice::set_frameRate(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                        "set_frameRate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool NatSuite::Devices::WebCameraDevice::get_running()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                        "get_running",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* NatSuite::Devices::WebCameraDevice::StartRunning()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                        "StartRunning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>*, false>(this, ___internal_method);
}
inline void NatSuite::Devices::WebCameraDevice::StopRunning()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                        "StopRunning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Devices::WebCameraDevice::_ctor(::UnityEngine::WebCamDevice  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::WebCamDevice>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device);
}
inline bool NatSuite::Devices::WebCameraDevice::Equals(::NatSuite::Devices::IMediaDevice*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::IMediaDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::StringW NatSuite::Devices::WebCameraDevice::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::WebCameraDevice*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::NatSuite::Devices::WebCameraDevice* NatSuite::Devices::WebCameraDevice::New_ctor(::UnityEngine::WebCamDevice  device)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::NatSuite::Devices::WebCameraDevice*>(device));
}
/// @brief Convert operator to "::NatSuite::Devices::ICameraDevice"
constexpr  NatSuite::Devices::WebCameraDevice::operator ::NatSuite::Devices::ICameraDevice*() noexcept {
return static_cast<::NatSuite::Devices::ICameraDevice*>(static_cast<void*>(this));
}
/// @brief Convert to "::NatSuite::Devices::ICameraDevice"
constexpr ::NatSuite::Devices::ICameraDevice* NatSuite::Devices::WebCameraDevice::i___NatSuite__Devices__ICameraDevice() noexcept {
return static_cast<::NatSuite::Devices::ICameraDevice*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::NatSuite::Devices::IMediaDevice"
constexpr  NatSuite::Devices::WebCameraDevice::operator ::NatSuite::Devices::IMediaDevice*() noexcept {
return static_cast<::NatSuite::Devices::IMediaDevice*>(static_cast<void*>(this));
}
/// @brief Convert to "::NatSuite::Devices::IMediaDevice"
constexpr ::NatSuite::Devices::IMediaDevice* NatSuite::Devices::WebCameraDevice::i___NatSuite__Devices__IMediaDevice() noexcept {
return static_cast<::NatSuite::Devices::IMediaDevice*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>"
constexpr  NatSuite::Devices::WebCameraDevice::operator ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>*() noexcept {
return static_cast<::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>"
constexpr ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>* NatSuite::Devices::WebCameraDevice::i___System__IEquatable_1___NatSuite__Devices__IMediaDevice__() noexcept {
return static_cast<::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::NatSuite::Devices::WebCameraDevice::WebCameraDevice()   {
}
