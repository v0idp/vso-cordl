#pragma once
// IWYU pragma private; include "NatSuite/Examples/MiniCam.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "NatSuite/Examples/zzzz__MiniCam_def.hpp"
#include "NatSuite/Devices/zzzz__ICameraDevice_def.hpp"
#include "NatSuite/Devices/zzzz__MediaDeviceQuery_def.hpp"
#include "NatSuite/Examples/zzzz__MiniCam_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/UI/zzzz__AspectRatioFitter_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__RawImage_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::NatSuite::Examples::MiniCam__CapturePhoto_d__8.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Examples::MiniCam__CapturePhoto_d__8::*)()>(&::NatSuite::Examples::MiniCam__CapturePhoto_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x18014d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam__CapturePhoto_d__8>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Examples::MiniCam__CapturePhoto_d__8.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Examples::MiniCam__CapturePhoto_d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::NatSuite::Examples::MiniCam__CapturePhoto_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18019f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam__CapturePhoto_d__8>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void NatSuite::Examples::MiniCam__CapturePhoto_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam__CapturePhoto_d__8>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Examples::MiniCam__CapturePhoto_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam__CapturePhoto_d__8>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  NatSuite::Examples::MiniCam__CapturePhoto_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* NatSuite::Examples::MiniCam__CapturePhoto_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::NatSuite::Examples::MiniCam>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_photoTexture_5__2", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::NatSuite::Examples::MiniCam__CapturePhoto_d__8::MiniCam__CapturePhoto_d__8(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::NatSuite::Examples::MiniCam>  __4__this, ::UnityW<::UnityEngine::Texture2D>  _photoTexture_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_photoTexture_5__2 = _photoTexture_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::NatSuite::Examples::MiniCam__CapturePhoto_d__8::MiniCam__CapturePhoto_d__8()   {
}
//  Writing Method size for method: ::NatSuite::Examples::MiniCam__Start_d__7.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Examples::MiniCam__Start_d__7::*)()>(&::NatSuite::Examples::MiniCam__Start_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x1801a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam__Start_d__7>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Examples::MiniCam__Start_d__7.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Examples::MiniCam__Start_d__7::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::NatSuite::Examples::MiniCam__Start_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18020b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam__Start_d__7>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void NatSuite::Examples::MiniCam__Start_d__7::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam__Start_d__7>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Examples::MiniCam__Start_d__7::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam__Start_d__7>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  NatSuite::Examples::MiniCam__Start_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* NatSuite::Examples::MiniCam__Start_d__7::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::NatSuite::Examples::MiniCam>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_device_5__2", ty: "::NatSuite::Devices::ICameraDevice*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>", modifiers: "", def_value: Some("{}") }]
constexpr ::NatSuite::Examples::MiniCam__Start_d__7::MiniCam__Start_d__7(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::NatSuite::Examples::MiniCam>  __4__this, ::NatSuite::Devices::ICameraDevice*  _device_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_device_5__2 = _device_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::NatSuite::Examples::MiniCam__Start_d__7::MiniCam__Start_d__7()   {
}
//  Writing Method size for method: ::NatSuite::Examples::MiniCam__SwitchCamera_d__9.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Examples::MiniCam__SwitchCamera_d__9::*)()>(&::NatSuite::Examples::MiniCam__SwitchCamera_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x18020bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam__SwitchCamera_d__9>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Examples::MiniCam__SwitchCamera_d__9.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Examples::MiniCam__SwitchCamera_d__9::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::NatSuite::Examples::MiniCam__SwitchCamera_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18024ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam__SwitchCamera_d__9>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void NatSuite::Examples::MiniCam__SwitchCamera_d__9::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam__SwitchCamera_d__9>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Examples::MiniCam__SwitchCamera_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam__SwitchCamera_d__9>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  NatSuite::Examples::MiniCam__SwitchCamera_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* NatSuite::Examples::MiniCam__SwitchCamera_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::NatSuite::Examples::MiniCam>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>", modifiers: "", def_value: Some("{}") }]
constexpr ::NatSuite::Examples::MiniCam__SwitchCamera_d__9::MiniCam__SwitchCamera_d__9(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::NatSuite::Examples::MiniCam>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::NatSuite::Examples::MiniCam__SwitchCamera_d__9::MiniCam__SwitchCamera_d__9()   {
}
//  Writing Method size for method: ::NatSuite::Examples::MiniCam.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Examples::MiniCam::*)()>(&::NatSuite::Examples::MiniCam::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1800ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Examples::MiniCam.CapturePhoto
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Examples::MiniCam::*)()>(&::NatSuite::Examples::MiniCam::CapturePhoto)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1801080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam*>::get(),
                        "CapturePhoto",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Examples::MiniCam.SwitchCamera
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Examples::MiniCam::*)()>(&::NatSuite::Examples::MiniCam::SwitchCamera)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1801110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam*>::get(),
                        "SwitchCamera",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Examples::MiniCam.FocusCamera
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Examples::MiniCam::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::NatSuite::Examples::MiniCam::FocusCamera)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x18011a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam*>::get(),
                        "FocusCamera",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Examples::MiniCam.ToggleFlashMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Examples::MiniCam::*)()>(&::NatSuite::Examples::MiniCam::ToggleFlashMode)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x18013c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam*>::get(),
                        "ToggleFlashMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Examples::MiniCam._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Examples::MiniCam::*)()>(&::NatSuite::Examples::MiniCam::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18014d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::RawImage>& NatSuite::Examples::MiniCam::__cordl_internal_get_previewPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previewPanel;
}
constexpr ::UnityW<::UnityEngine::UI::RawImage> const& NatSuite::Examples::MiniCam::__cordl_internal_get_previewPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previewPanel;
}
constexpr void NatSuite::Examples::MiniCam::__cordl_internal_set_previewPanel(::UnityW<::UnityEngine::UI::RawImage>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previewPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::AspectRatioFitter>& NatSuite::Examples::MiniCam::__cordl_internal_get_previewAspectFitter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previewAspectFitter;
}
constexpr ::UnityW<::UnityEngine::UI::AspectRatioFitter> const& NatSuite::Examples::MiniCam::__cordl_internal_get_previewAspectFitter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previewAspectFitter;
}
constexpr void NatSuite::Examples::MiniCam::__cordl_internal_set_previewAspectFitter(::UnityW<::UnityEngine::UI::AspectRatioFitter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previewAspectFitter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::RawImage>& NatSuite::Examples::MiniCam::__cordl_internal_get_photoPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photoPanel;
}
constexpr ::UnityW<::UnityEngine::UI::RawImage> const& NatSuite::Examples::MiniCam::__cordl_internal_get_photoPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photoPanel;
}
constexpr void NatSuite::Examples::MiniCam::__cordl_internal_set_photoPanel(::UnityW<::UnityEngine::UI::RawImage>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___photoPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::AspectRatioFitter>& NatSuite::Examples::MiniCam::__cordl_internal_get_photoAspectFitter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photoAspectFitter;
}
constexpr ::UnityW<::UnityEngine::UI::AspectRatioFitter> const& NatSuite::Examples::MiniCam::__cordl_internal_get_photoAspectFitter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photoAspectFitter;
}
constexpr void NatSuite::Examples::MiniCam::__cordl_internal_set_photoAspectFitter(::UnityW<::UnityEngine::UI::AspectRatioFitter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___photoAspectFitter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Image>& NatSuite::Examples::MiniCam::__cordl_internal_get_flashIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashIcon;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& NatSuite::Examples::MiniCam::__cordl_internal_get_flashIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashIcon;
}
constexpr void NatSuite::Examples::MiniCam::__cordl_internal_set_flashIcon(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___flashIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Image>& NatSuite::Examples::MiniCam::__cordl_internal_get_switchIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___switchIcon;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& NatSuite::Examples::MiniCam::__cordl_internal_get_switchIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___switchIcon;
}
constexpr void NatSuite::Examples::MiniCam::__cordl_internal_set_switchIcon(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___switchIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::NatSuite::Devices::MediaDeviceQuery*& NatSuite::Examples::MiniCam::__cordl_internal_get_deviceQuery()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deviceQuery;
}
constexpr ::NatSuite::Devices::MediaDeviceQuery* const& NatSuite::Examples::MiniCam::__cordl_internal_get_deviceQuery() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deviceQuery;
}
constexpr void NatSuite::Examples::MiniCam::__cordl_internal_set_deviceQuery(::NatSuite::Devices::MediaDeviceQuery*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___deviceQuery)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void NatSuite::Examples::MiniCam::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Examples::MiniCam::CapturePhoto()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam*>::get(),
                        "CapturePhoto",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Examples::MiniCam::SwitchCamera()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam*>::get(),
                        "SwitchCamera",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Examples::MiniCam::FocusCamera(::UnityEngine::EventSystems::BaseEventData*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam*>::get(),
                        "FocusCamera",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void NatSuite::Examples::MiniCam::ToggleFlashMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam*>::get(),
                        "ToggleFlashMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Examples::MiniCam::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::MiniCam*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::NatSuite::Examples::MiniCam* NatSuite::Examples::MiniCam::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::NatSuite::Examples::MiniCam*>());
}
// Ctor Parameters []
constexpr ::NatSuite::Examples::MiniCam::MiniCam()   {
}
