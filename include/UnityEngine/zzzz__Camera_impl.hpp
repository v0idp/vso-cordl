#pragma once
// IWYU pragma private; include "UnityEngine/Camera.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__CameraClearFlags_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__DepthTextureMode_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderBuffer_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__RenderingPath_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__StereoTargetEyeMask_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Camera_StereoscopicEye::Camera_StereoscopicEye(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Camera_StereoscopicEye::Camera_StereoscopicEye()   {
}
constexpr ::UnityEngine::Camera_StereoscopicEye  UnityEngine::Camera_StereoscopicEye::Left{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Camera_StereoscopicEye  UnityEngine::Camera_StereoscopicEye::Right{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Camera_MonoOrStereoscopicEye::Camera_MonoOrStereoscopicEye(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Camera_MonoOrStereoscopicEye::Camera_MonoOrStereoscopicEye()   {
}
constexpr ::UnityEngine::Camera_MonoOrStereoscopicEye  UnityEngine::Camera_MonoOrStereoscopicEye::Left{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Camera_MonoOrStereoscopicEye  UnityEngine::Camera_MonoOrStereoscopicEye::Right{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Camera_MonoOrStereoscopicEye  UnityEngine::Camera_MonoOrStereoscopicEye::Mono{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::UnityEngine::Camera_CameraCallback._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera_CameraCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Camera_CameraCallback::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2f60d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera_CameraCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera_CameraCallback.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera_CameraCallback::*)(::UnityEngine::Camera*)>(&::UnityEngine::Camera_CameraCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2f60ddc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera_CameraCallback*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera_CameraCallback*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Camera_CameraCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera_CameraCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Camera_CameraCallback::Invoke(::UnityEngine::Camera*  cam)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera_CameraCallback*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cam);
}
inline ::UnityEngine::Camera_CameraCallback* UnityEngine::Camera_CameraCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Camera_CameraCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Camera_CameraCallback::Camera_CameraCallback()   {
}
//  Writing Method size for method: ::UnityEngine::Camera._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f5ef78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_nearClipPlane
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_nearClipPlane)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5ef80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_nearClipPlane",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_nearClipPlane
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(float_t)>(&::UnityEngine::Camera::set_nearClipPlane)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2f5efbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_nearClipPlane",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_farClipPlane
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_farClipPlane)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5f008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_farClipPlane",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_farClipPlane
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(float_t)>(&::UnityEngine::Camera::set_farClipPlane)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2f5f044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_farClipPlane",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_fieldOfView
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_fieldOfView)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5f090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_fieldOfView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_fieldOfView
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(float_t)>(&::UnityEngine::Camera::set_fieldOfView)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2f5f0cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_fieldOfView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_renderingPath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::RenderingPath)>(&::UnityEngine::Camera::set_renderingPath)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f5f118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_renderingPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderingPath>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_actualRenderingPath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderingPath (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_actualRenderingPath)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5f15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_actualRenderingPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_allowHDR
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(bool)>(&::UnityEngine::Camera::set_allowHDR)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f5f198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_allowHDR",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_allowMSAA
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(bool)>(&::UnityEngine::Camera::set_allowMSAA)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f5f1dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_allowMSAA",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_orthographicSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_orthographicSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5f220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_orthographicSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_orthographicSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(float_t)>(&::UnityEngine::Camera::set_orthographicSize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2f5f25c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_orthographicSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_orthographic
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_orthographic)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5f2a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_orthographic",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_orthographic
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(bool)>(&::UnityEngine::Camera::set_orthographic)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f5f2e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_orthographic",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_depth
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_depth)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5f328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_depth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_depth
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(float_t)>(&::UnityEngine::Camera::set_depth)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2f5f364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_depth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_aspect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_aspect)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5f3b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_aspect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_aspect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(float_t)>(&::UnityEngine::Camera::set_aspect)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2f5f3ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_aspect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_cullingMask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_cullingMask)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5f438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_cullingMask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_cullingMask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(int32_t)>(&::UnityEngine::Camera::set_cullingMask)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f5f474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_cullingMask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_eventMask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_eventMask)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5f4b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_eventMask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_backgroundColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_backgroundColor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f5f4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_backgroundColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_backgroundColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Color)>(&::UnityEngine::Camera::set_backgroundColor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f5f590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_backgroundColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_clearFlags
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::CameraClearFlags (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_clearFlags)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5f628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_clearFlags",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_clearFlags
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::CameraClearFlags)>(&::UnityEngine::Camera::set_clearFlags)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f5f664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_clearFlags",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CameraClearFlags>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_depthTextureMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::DepthTextureMode (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_depthTextureMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5f6a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_depthTextureMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_depthTextureMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::DepthTextureMode)>(&::UnityEngine::Camera::set_depthTextureMode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f5f6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_depthTextureMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::DepthTextureMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_rect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_rect)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f5f728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_rect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_rect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Rect)>(&::UnityEngine::Camera::set_rect)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f5f7c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_rect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_pixelRect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_pixelRect)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f5f85c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_pixelRect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_pixelRect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Rect)>(&::UnityEngine::Camera::set_pixelRect)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f5f8f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_pixelRect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_pixelWidth
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_pixelWidth)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5f990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_pixelWidth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_pixelHeight
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_pixelHeight)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5f9cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_pixelHeight",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_targetTexture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_targetTexture)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5fa08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_targetTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_targetTexture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::RenderTexture*)>(&::UnityEngine::Camera::set_targetTexture)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f5fa44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_targetTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_targetDisplay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_targetDisplay)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5fa88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_targetDisplay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SetTargetBuffersImpl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::RenderBuffer, ::UnityEngine::RenderBuffer)>(&::UnityEngine::Camera::SetTargetBuffersImpl)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f5fac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "SetTargetBuffersImpl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderBuffer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderBuffer>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SetTargetBuffers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::RenderBuffer, ::UnityEngine::RenderBuffer)>(&::UnityEngine::Camera::SetTargetBuffers)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2f5fb70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "SetTargetBuffers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderBuffer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderBuffer>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_worldToCameraMatrix
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_worldToCameraMatrix)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2f5fb74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_worldToCameraMatrix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_projectionMatrix
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_projectionMatrix)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2f5fc24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_projectionMatrix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_projectionMatrix
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Matrix4x4)>(&::UnityEngine::Camera::set_projectionMatrix)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f5fcd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_projectionMatrix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.WorldToScreenPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Camera::*)(::UnityEngine::Vector3, ::UnityEngine::Camera_MonoOrStereoscopicEye)>(&::UnityEngine::Camera::WorldToScreenPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f5fd5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "WorldToScreenPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.WorldToViewportPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Camera::*)(::UnityEngine::Vector3, ::UnityEngine::Camera_MonoOrStereoscopicEye)>(&::UnityEngine::Camera::WorldToViewportPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f5fe28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "WorldToViewportPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ScreenToWorldPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Camera::*)(::UnityEngine::Vector3, ::UnityEngine::Camera_MonoOrStereoscopicEye)>(&::UnityEngine::Camera::ScreenToWorldPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f5fef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ScreenToWorldPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.WorldToScreenPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Camera::*)(::UnityEngine::Vector3)>(&::UnityEngine::Camera::WorldToScreenPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f5ffc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "WorldToScreenPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ScreenToWorldPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Camera::*)(::UnityEngine::Vector3)>(&::UnityEngine::Camera::ScreenToWorldPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f5ffc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ScreenToWorldPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ScreenToViewportPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Camera::*)(::UnityEngine::Vector3)>(&::UnityEngine::Camera::ScreenToViewportPoint)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f5ffd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ScreenToViewportPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ViewportPointToRay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Ray (::UnityEngine::Camera::*)(::UnityEngine::Vector2, ::UnityEngine::Camera_MonoOrStereoscopicEye)>(&::UnityEngine::Camera::ViewportPointToRay)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2f6008c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ViewportPointToRay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ViewportPointToRay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Ray (::UnityEngine::Camera::*)(::UnityEngine::Vector3, ::UnityEngine::Camera_MonoOrStereoscopicEye)>(&::UnityEngine::Camera::ViewportPointToRay)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2f60160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ViewportPointToRay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ViewportPointToRay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Ray (::UnityEngine::Camera::*)(::UnityEngine::Vector3)>(&::UnityEngine::Camera::ViewportPointToRay)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f60198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ViewportPointToRay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ScreenPointToRay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Ray (::UnityEngine::Camera::*)(::UnityEngine::Vector2, ::UnityEngine::Camera_MonoOrStereoscopicEye)>(&::UnityEngine::Camera::ScreenPointToRay)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2f601dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ScreenPointToRay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ScreenPointToRay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Ray (::UnityEngine::Camera::*)(::UnityEngine::Vector3, ::UnityEngine::Camera_MonoOrStereoscopicEye)>(&::UnityEngine::Camera::ScreenPointToRay)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2f602b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ScreenPointToRay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ScreenPointToRay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Ray (::UnityEngine::Camera::*)(::UnityEngine::Vector3)>(&::UnityEngine::Camera::ScreenPointToRay)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f602e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ScreenPointToRay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_main
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (*)()>(&::UnityEngine::Camera::get_main)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f6032c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_main",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (*)()>(&::UnityEngine::Camera::get_current)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f60354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_stereoEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_stereoEnabled)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f6037c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_stereoEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_stereoTargetEye
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::StereoTargetEyeMask (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::get_stereoTargetEye)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f603b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_stereoTargetEye",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_stereoTargetEye
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::StereoTargetEyeMask)>(&::UnityEngine::Camera::set_stereoTargetEye)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f603f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_stereoTargetEye",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::StereoTargetEyeMask>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetStereoViewMatrix
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Camera::*)(::UnityEngine::Camera_StereoscopicEye)>(&::UnityEngine::Camera::GetStereoViewMatrix)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2f60438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "GetStereoViewMatrix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_StereoscopicEye>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetStereoProjectionMatrix
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Camera::*)(::UnityEngine::Camera_StereoscopicEye)>(&::UnityEngine::Camera::GetStereoProjectionMatrix)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2f60508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "GetStereoProjectionMatrix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_StereoscopicEye>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetAllCamerasCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::Camera::GetAllCamerasCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f605d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "GetAllCamerasCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetAllCamerasImpl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::ArrayW<::UnityEngine::Camera*,::Array<::UnityEngine::Camera*>*>>)>(&::UnityEngine::Camera::GetAllCamerasImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f60600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "GetAllCamerasImpl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::Camera*,::Array<::UnityEngine::Camera*>*>>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_allCamerasCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::Camera::get_allCamerasCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f6063c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_allCamerasCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_allCameras
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Camera>,::Array<::UnityW<::UnityEngine::Camera>>*> (*)()>(&::UnityEngine::Camera::get_allCameras)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2f60664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_allCameras",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetAllCameras
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<::UnityEngine::Camera*,::Array<::UnityEngine::Camera*>*>)>(&::UnityEngine::Camera::GetAllCameras)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2f60704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "GetAllCameras",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Camera*,::Array<::UnityEngine::Camera*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.Render
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)()>(&::UnityEngine::Camera::Render)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f607dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "Render",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RenderWithShader
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Shader*, ::StringW)>(&::UnityEngine::Camera::RenderWithShader)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f60818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "RenderWithShader",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SetupCurrent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera*)>(&::UnityEngine::Camera::SetupCurrent)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f6086c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "SetupCurrent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.CopyFrom
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Camera*)>(&::UnityEngine::Camera::CopyFrom)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f608a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "CopyFrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.AddCommandBufferImpl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Rendering::CameraEvent, ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Camera::AddCommandBufferImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f608ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "AddCommandBufferImpl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CameraEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RemoveCommandBufferImpl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Rendering::CameraEvent, ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Camera::RemoveCommandBufferImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f60940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "RemoveCommandBufferImpl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CameraEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.AddCommandBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Rendering::CameraEvent, ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Camera::AddCommandBuffer)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2f60994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "AddCommandBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CameraEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.RemoveCommandBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Rendering::CameraEvent, ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Camera::RemoveCommandBuffer)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2f60ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "RemoveCommandBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CameraEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.FireOnPreCull
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera*)>(&::UnityEngine::Camera::FireOnPreCull)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2f60bfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "FireOnPreCull",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.FireOnPreRender
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera*)>(&::UnityEngine::Camera::FireOnPreRender)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2f60c68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "FireOnPreRender",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.FireOnPostRender
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera*)>(&::UnityEngine::Camera::FireOnPostRender)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2f60cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "FireOnPostRender",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_backgroundColor_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::ByRef<::UnityEngine::Color>)>(&::UnityEngine::Camera::get_backgroundColor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f5f54c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_backgroundColor_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Color>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_backgroundColor_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::ByRef<::UnityEngine::Color>)>(&::UnityEngine::Camera::set_backgroundColor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f5f5e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_backgroundColor_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Color>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_rect_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::ByRef<::UnityEngine::Rect>)>(&::UnityEngine::Camera::get_rect_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f5f780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_rect_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_rect_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::ByRef<::UnityEngine::Rect>)>(&::UnityEngine::Camera::set_rect_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f5f818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_rect_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_pixelRect_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::ByRef<::UnityEngine::Rect>)>(&::UnityEngine::Camera::get_pixelRect_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f5f8b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_pixelRect_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_pixelRect_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::ByRef<::UnityEngine::Rect>)>(&::UnityEngine::Camera::set_pixelRect_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f5f94c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_pixelRect_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.SetTargetBuffersImpl_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::ByRef<::UnityEngine::RenderBuffer>, ::ByRef<::UnityEngine::RenderBuffer>)>(&::UnityEngine::Camera::SetTargetBuffersImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f5fb1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "SetTargetBuffersImpl_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderBuffer>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_worldToCameraMatrix_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::ByRef<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Camera::get_worldToCameraMatrix_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f5fbe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_worldToCameraMatrix_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.get_projectionMatrix_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::ByRef<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Camera::get_projectionMatrix_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f5fc90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_projectionMatrix_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.set_projectionMatrix_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::ByRef<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Camera::set_projectionMatrix_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f5fd18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_projectionMatrix_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.WorldToScreenPoint_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::ByRef<::UnityEngine::Vector3>, ::UnityEngine::Camera_MonoOrStereoscopicEye, ::ByRef<::UnityEngine::Vector3>)>(&::UnityEngine::Camera::WorldToScreenPoint_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2f5fdcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "WorldToScreenPoint_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.WorldToViewportPoint_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::ByRef<::UnityEngine::Vector3>, ::UnityEngine::Camera_MonoOrStereoscopicEye, ::ByRef<::UnityEngine::Vector3>)>(&::UnityEngine::Camera::WorldToViewportPoint_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2f5fe98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "WorldToViewportPoint_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ScreenToWorldPoint_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::ByRef<::UnityEngine::Vector3>, ::UnityEngine::Camera_MonoOrStereoscopicEye, ::ByRef<::UnityEngine::Vector3>)>(&::UnityEngine::Camera::ScreenToWorldPoint_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2f5ff64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ScreenToWorldPoint_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ScreenToViewportPoint_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::ByRef<::UnityEngine::Vector3>, ::ByRef<::UnityEngine::Vector3>)>(&::UnityEngine::Camera::ScreenToViewportPoint_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f60038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ScreenToViewportPoint_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ViewportPointToRay_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::ByRef<::UnityEngine::Vector2>, ::UnityEngine::Camera_MonoOrStereoscopicEye, ::ByRef<::UnityEngine::Ray>)>(&::UnityEngine::Camera::ViewportPointToRay_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2f60104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ViewportPointToRay_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Ray>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.ScreenPointToRay_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::ByRef<::UnityEngine::Vector2>, ::UnityEngine::Camera_MonoOrStereoscopicEye, ::ByRef<::UnityEngine::Ray>)>(&::UnityEngine::Camera::ScreenPointToRay_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2f60254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ScreenPointToRay_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Ray>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetStereoViewMatrix_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Camera_StereoscopicEye, ::ByRef<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Camera::GetStereoViewMatrix_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f604b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "GetStereoViewMatrix_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_StereoscopicEye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Camera.GetStereoProjectionMatrix_Injected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Camera::*)(::UnityEngine::Camera_StereoscopicEye, ::ByRef<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Camera::GetStereoProjectionMatrix_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f60584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "GetStereoProjectionMatrix_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_StereoscopicEye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Camera::setStaticF_onPreCull(::UnityEngine::Camera_CameraCallback*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Camera_CameraCallback*, "onPreCull", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get>(std::forward<::UnityEngine::Camera_CameraCallback*>(value));
}
inline ::UnityEngine::Camera_CameraCallback* UnityEngine::Camera::getStaticF_onPreCull()  {
return ::cordl_internals::getStaticField<::UnityEngine::Camera_CameraCallback*, "onPreCull", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get>();
}
inline void UnityEngine::Camera::setStaticF_onPreRender(::UnityEngine::Camera_CameraCallback*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Camera_CameraCallback*, "onPreRender", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get>(std::forward<::UnityEngine::Camera_CameraCallback*>(value));
}
inline ::UnityEngine::Camera_CameraCallback* UnityEngine::Camera::getStaticF_onPreRender()  {
return ::cordl_internals::getStaticField<::UnityEngine::Camera_CameraCallback*, "onPreRender", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get>();
}
inline void UnityEngine::Camera::setStaticF_onPostRender(::UnityEngine::Camera_CameraCallback*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Camera_CameraCallback*, "onPostRender", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get>(std::forward<::UnityEngine::Camera_CameraCallback*>(value));
}
inline ::UnityEngine::Camera_CameraCallback* UnityEngine::Camera::getStaticF_onPostRender()  {
return ::cordl_internals::getStaticField<::UnityEngine::Camera_CameraCallback*, "onPostRender", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get>();
}
inline void UnityEngine::Camera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::Camera::get_nearClipPlane()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_nearClipPlane",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_nearClipPlane(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_nearClipPlane",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Camera::get_farClipPlane()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_farClipPlane",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_farClipPlane(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_farClipPlane",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Camera::get_fieldOfView()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_fieldOfView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_fieldOfView(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_fieldOfView",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Camera::set_renderingPath(::UnityEngine::RenderingPath  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_renderingPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderingPath>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderingPath UnityEngine::Camera::get_actualRenderingPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_actualRenderingPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderingPath, false>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_allowHDR(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_allowHDR",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Camera::set_allowMSAA(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_allowMSAA",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Camera::get_orthographicSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_orthographicSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_orthographicSize(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_orthographicSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Camera::get_orthographic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_orthographic",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_orthographic(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_orthographic",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Camera::get_depth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_depth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_depth(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_depth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Camera::get_aspect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_aspect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_aspect(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_aspect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Camera::get_cullingMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_cullingMask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_cullingMask(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_cullingMask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Camera::get_eventMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_eventMask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::Camera::get_backgroundColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_backgroundColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_backgroundColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_backgroundColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::CameraClearFlags UnityEngine::Camera::get_clearFlags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_clearFlags",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::CameraClearFlags, false>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_clearFlags(::UnityEngine::CameraClearFlags  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_clearFlags",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CameraClearFlags>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::DepthTextureMode UnityEngine::Camera::get_depthTextureMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_depthTextureMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::DepthTextureMode, false>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_depthTextureMode(::UnityEngine::DepthTextureMode  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_depthTextureMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::DepthTextureMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rect UnityEngine::Camera::get_rect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_rect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_rect(::UnityEngine::Rect  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_rect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rect UnityEngine::Camera::get_pixelRect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_pixelRect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_pixelRect(::UnityEngine::Rect  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_pixelRect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Camera::get_pixelWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_pixelWidth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Camera::get_pixelHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_pixelHeight",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Camera::get_targetTexture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_targetTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>, false>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_targetTexture(::UnityEngine::RenderTexture*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_targetTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Camera::get_targetDisplay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_targetDisplay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Camera::SetTargetBuffersImpl(::UnityEngine::RenderBuffer  color, ::UnityEngine::RenderBuffer  depth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "SetTargetBuffersImpl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderBuffer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderBuffer>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color, depth);
}
inline void UnityEngine::Camera::SetTargetBuffers(::UnityEngine::RenderBuffer  colorBuffer, ::UnityEngine::RenderBuffer  depthBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "SetTargetBuffers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderBuffer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderBuffer>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorBuffer, depthBuffer);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Camera::get_worldToCameraMatrix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_worldToCameraMatrix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Camera::get_projectionMatrix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_projectionMatrix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_projectionMatrix(::UnityEngine::Matrix4x4  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_projectionMatrix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Camera::WorldToScreenPoint(::UnityEngine::Vector3  position, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "WorldToScreenPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, position, eye);
}
inline ::UnityEngine::Vector3 UnityEngine::Camera::WorldToViewportPoint(::UnityEngine::Vector3  position, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "WorldToViewportPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, position, eye);
}
inline ::UnityEngine::Vector3 UnityEngine::Camera::ScreenToWorldPoint(::UnityEngine::Vector3  position, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ScreenToWorldPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, position, eye);
}
inline ::UnityEngine::Vector3 UnityEngine::Camera::WorldToScreenPoint(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "WorldToScreenPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, position);
}
inline ::UnityEngine::Vector3 UnityEngine::Camera::ScreenToWorldPoint(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ScreenToWorldPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, position);
}
inline ::UnityEngine::Vector3 UnityEngine::Camera::ScreenToViewportPoint(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ScreenToViewportPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, position);
}
inline ::UnityEngine::Ray UnityEngine::Camera::ViewportPointToRay(::UnityEngine::Vector2  pos, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ViewportPointToRay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray, false>(this, ___internal_method, pos, eye);
}
inline ::UnityEngine::Ray UnityEngine::Camera::ViewportPointToRay(::UnityEngine::Vector3  pos, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ViewportPointToRay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray, false>(this, ___internal_method, pos, eye);
}
inline ::UnityEngine::Ray UnityEngine::Camera::ViewportPointToRay(::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ViewportPointToRay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray, false>(this, ___internal_method, pos);
}
inline ::UnityEngine::Ray UnityEngine::Camera::ScreenPointToRay(::UnityEngine::Vector2  pos, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ScreenPointToRay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray, false>(this, ___internal_method, pos, eye);
}
inline ::UnityEngine::Ray UnityEngine::Camera::ScreenPointToRay(::UnityEngine::Vector3  pos, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ScreenPointToRay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray, false>(this, ___internal_method, pos, eye);
}
inline ::UnityEngine::Ray UnityEngine::Camera::ScreenPointToRay(::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ScreenPointToRay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray, false>(this, ___internal_method, pos);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::Camera::get_main()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_main",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::Camera::get_current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::Camera::get_stereoEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_stereoEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::StereoTargetEyeMask UnityEngine::Camera::get_stereoTargetEye()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_stereoTargetEye",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::StereoTargetEyeMask, false>(this, ___internal_method);
}
inline void UnityEngine::Camera::set_stereoTargetEye(::UnityEngine::StereoTargetEyeMask  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_stereoTargetEye",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::StereoTargetEyeMask>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Camera::GetStereoViewMatrix(::UnityEngine::Camera_StereoscopicEye  eye)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "GetStereoViewMatrix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_StereoscopicEye>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method, eye);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Camera::GetStereoProjectionMatrix(::UnityEngine::Camera_StereoscopicEye  eye)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "GetStereoProjectionMatrix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_StereoscopicEye>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method, eye);
}
inline int32_t UnityEngine::Camera::GetAllCamerasCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "GetAllCamerasCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Camera::GetAllCamerasImpl(::ByRef<::ArrayW<::UnityEngine::Camera*,::Array<::UnityEngine::Camera*>*>>  cam)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "GetAllCamerasImpl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::Camera*,::Array<::UnityEngine::Camera*>*>>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, cam);
}
inline int32_t UnityEngine::Camera::get_allCamerasCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_allCamerasCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Camera>,::Array<::UnityW<::UnityEngine::Camera>>*> UnityEngine::Camera::get_allCameras()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_allCameras",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Camera>,::Array<::UnityW<::UnityEngine::Camera>>*>, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Camera::GetAllCameras(::ArrayW<::UnityEngine::Camera*,::Array<::UnityEngine::Camera*>*>  cameras)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "GetAllCameras",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Camera*,::Array<::UnityEngine::Camera*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, cameras);
}
inline void UnityEngine::Camera::Render()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "Render",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Camera::RenderWithShader(::UnityEngine::Shader*  shader, ::StringW  replacementTag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "RenderWithShader",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shader, replacementTag);
}
inline void UnityEngine::Camera::SetupCurrent(::UnityEngine::Camera*  cur)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "SetupCurrent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cur);
}
inline void UnityEngine::Camera::CopyFrom(::UnityEngine::Camera*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "CopyFrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline void UnityEngine::Camera::AddCommandBufferImpl(::UnityEngine::Rendering::CameraEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "AddCommandBufferImpl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CameraEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, buffer);
}
inline void UnityEngine::Camera::RemoveCommandBufferImpl(::UnityEngine::Rendering::CameraEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "RemoveCommandBufferImpl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CameraEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, buffer);
}
inline void UnityEngine::Camera::AddCommandBuffer(::UnityEngine::Rendering::CameraEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "AddCommandBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CameraEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, buffer);
}
inline void UnityEngine::Camera::RemoveCommandBuffer(::UnityEngine::Rendering::CameraEvent  evt, ::UnityEngine::Rendering::CommandBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "RemoveCommandBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CameraEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, buffer);
}
inline void UnityEngine::Camera::FireOnPreCull(::UnityEngine::Camera*  cam)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "FireOnPreCull",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cam);
}
inline void UnityEngine::Camera::FireOnPreRender(::UnityEngine::Camera*  cam)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "FireOnPreRender",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cam);
}
inline void UnityEngine::Camera::FireOnPostRender(::UnityEngine::Camera*  cam)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "FireOnPostRender",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cam);
}
inline void UnityEngine::Camera::get_backgroundColor_Injected(::ByRef<::UnityEngine::Color>  ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_backgroundColor_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Color>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ret);
}
inline void UnityEngine::Camera::set_backgroundColor_Injected(::ByRef<::UnityEngine::Color>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_backgroundColor_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Color>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Camera::get_rect_Injected(::ByRef<::UnityEngine::Rect>  ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_rect_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ret);
}
inline void UnityEngine::Camera::set_rect_Injected(::ByRef<::UnityEngine::Rect>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_rect_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Camera::get_pixelRect_Injected(::ByRef<::UnityEngine::Rect>  ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_pixelRect_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ret);
}
inline void UnityEngine::Camera::set_pixelRect_Injected(::ByRef<::UnityEngine::Rect>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_pixelRect_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Camera::SetTargetBuffersImpl_Injected(::ByRef<::UnityEngine::RenderBuffer>  color, ::ByRef<::UnityEngine::RenderBuffer>  depth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "SetTargetBuffersImpl_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderBuffer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderBuffer>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color, depth);
}
inline void UnityEngine::Camera::get_worldToCameraMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4>  ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_worldToCameraMatrix_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ret);
}
inline void UnityEngine::Camera::get_projectionMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4>  ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "get_projectionMatrix_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ret);
}
inline void UnityEngine::Camera::set_projectionMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "set_projectionMatrix_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Camera::WorldToScreenPoint_Injected(::ByRef<::UnityEngine::Vector3>  position, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye, ::ByRef<::UnityEngine::Vector3>  ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "WorldToScreenPoint_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, eye, ret);
}
inline void UnityEngine::Camera::WorldToViewportPoint_Injected(::ByRef<::UnityEngine::Vector3>  position, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye, ::ByRef<::UnityEngine::Vector3>  ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "WorldToViewportPoint_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, eye, ret);
}
inline void UnityEngine::Camera::ScreenToWorldPoint_Injected(::ByRef<::UnityEngine::Vector3>  position, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye, ::ByRef<::UnityEngine::Vector3>  ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ScreenToWorldPoint_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, eye, ret);
}
inline void UnityEngine::Camera::ScreenToViewportPoint_Injected(::ByRef<::UnityEngine::Vector3>  position, ::ByRef<::UnityEngine::Vector3>  ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ScreenToViewportPoint_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, ret);
}
inline void UnityEngine::Camera::ViewportPointToRay_Injected(::ByRef<::UnityEngine::Vector2>  pos, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye, ::ByRef<::UnityEngine::Ray>  ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ViewportPointToRay_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Ray>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos, eye, ret);
}
inline void UnityEngine::Camera::ScreenPointToRay_Injected(::ByRef<::UnityEngine::Vector2>  pos, ::UnityEngine::Camera_MonoOrStereoscopicEye  eye, ::ByRef<::UnityEngine::Ray>  ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "ScreenPointToRay_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_MonoOrStereoscopicEye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Ray>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos, eye, ret);
}
inline void UnityEngine::Camera::GetStereoViewMatrix_Injected(::UnityEngine::Camera_StereoscopicEye  eye, ::ByRef<::UnityEngine::Matrix4x4>  ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "GetStereoViewMatrix_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_StereoscopicEye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eye, ret);
}
inline void UnityEngine::Camera::GetStereoProjectionMatrix_Injected(::UnityEngine::Camera_StereoscopicEye  eye, ::ByRef<::UnityEngine::Matrix4x4>  ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Camera*>::get(),
                        "GetStereoProjectionMatrix_Injected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera_StereoscopicEye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eye, ret);
}
inline ::UnityEngine::Camera* UnityEngine::Camera::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Camera*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Camera::Camera()   {
}
