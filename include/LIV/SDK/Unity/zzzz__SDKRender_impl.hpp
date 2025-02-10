#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKRender.hpp"
#include "LIV/SDK/Unity/zzzz__SDKInputFrame_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKOutputFrame_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKPose_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKResolution_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKRender_def.hpp"
#include "LIV/SDK/Unity/zzzz__LIV_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKInputFrame_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKOutputFrame_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKResolution_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_ID_def.hpp"
#include "UnityEngine/Rendering/zzzz__ColorWriteMask_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_BackgroundRenderTexture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_BackgroundRenderTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1806708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_BackgroundRenderTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.GetClipPlaneMaterial
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::LIV::SDK::Unity::SDKRender::*)(bool, bool, ::UnityEngine::Rendering::ColorWriteMask)>(&::LIV::SDK::Unity::SDKRender::GetClipPlaneMaterial)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1806710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "GetClipPlaneMaterial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ColorWriteMask>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.GetGroundClipPlaneMaterial
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::LIV::SDK::Unity::SDKRender::*)(bool, ::UnityEngine::Rendering::ColorWriteMask)>(&::LIV::SDK::Unity::SDKRender::GetGroundClipPlaneMaterial)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1806814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "GetGroundClipPlaneMaterial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ColorWriteMask>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_useDeferredRendering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_useDeferredRendering)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x18068b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_useDeferredRendering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_interlacedRendering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_interlacedRendering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18068fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_interlacedRendering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_canRenderBackground
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_canRenderBackground)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x180690c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_canRenderBackground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_canRenderForeground
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_canRenderForeground)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x18069b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_canRenderForeground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_canRenderOptimized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_canRenderOptimized)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1806a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_canRenderOptimized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)(::LIV::SDK::Unity::LIV*)>(&::LIV::SDK::Unity::SDKRender::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x18053f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::LIV*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.Render
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::Render)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1805904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "Render",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.RenderBackground
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::RenderBackground)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x180764c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "RenderBackground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.RenderForeground
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::RenderForeground)> {
  constexpr static std::size_t size = 0xa7c;
  constexpr static std::size_t addrs = 0x180796c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "RenderForeground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.RenderOptimized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::RenderOptimized)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x18083e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "RenderOptimized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.CreateAssets
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::CreateAssets)> {
  constexpr static std::size_t size = 0x6d8;
  constexpr static std::size_t addrs = 0x1806aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "CreateAssets",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.DestroyAssets
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::DestroyAssets)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x1808ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "DestroyAssets",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::Dispose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x18054d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_liv
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::LIV::SDK::Unity::LIV> (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_liv)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18090bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_liv",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_outputFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKOutputFrame (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_outputFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18090c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_outputFrame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_inputFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKInputFrame (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_inputFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18090d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_inputFrame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_resolution
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKResolution (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_resolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18090e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_resolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_cameraInstance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_cameraInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18090ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_cameraInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_cameraReference
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_cameraReference)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1808e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_cameraReference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_hmdCamera
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_hmdCamera)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18090f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_hmdCamera",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_stage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_stage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1809110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_stage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_stageTransform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_stageTransform)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1809128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_stageTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_stageLocalToWorldMatrix
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_stageLocalToWorldMatrix)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1809144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_stageLocalToWorldMatrix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_localToWorldMatrix
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_localToWorldMatrix)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1808998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_localToWorldMatrix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_spectatorLayerMask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_spectatorLayerMask)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1808a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_spectatorLayerMask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_disableStandardAssets
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_disableStandardAssets)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1808cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_disableStandardAssets",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_canSetPose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_canSetPose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1809234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_canSetPose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.SetPose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, bool)>(&::LIV::SDK::Unity::SDKRender::SetPose)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x1809254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "SetPose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.SetGroundPlane
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)(float_t, ::UnityEngine::Vector3, bool)>(&::LIV::SDK::Unity::SDKRender::SetGroundPlane)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x1809584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "SetGroundPlane",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.SetGroundPlane
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)(::UnityEngine::Plane, bool)>(&::LIV::SDK::Unity::SDKRender::SetGroundPlane)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1809710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "SetGroundPlane",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Plane>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.SetGroundPlane
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)(::UnityEngine::Transform*, bool)>(&::LIV::SDK::Unity::SDKRender::SetGroundPlane)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x180972c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "SetGroundPlane",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.ReleaseBridgePoseControl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::ReleaseBridgePoseControl)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1809058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "ReleaseBridgePoseControl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.UpdateBridgeResolution
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::UpdateBridgeResolution)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18071c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "UpdateBridgeResolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.UpdateBridgeInputFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::UpdateBridgeInputFrame)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x1807218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "UpdateBridgeInputFrame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.InvokePreRender
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::InvokePreRender)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1807614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "InvokePreRender",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.IvokePostRender
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::IvokePostRender)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1808960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "IvokePostRender",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.InvokePreRenderBackground
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::InvokePreRenderBackground)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1808afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "InvokePreRenderBackground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.InvokePostRenderBackground
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::InvokePostRenderBackground)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1808c30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "InvokePostRenderBackground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.InvokePreRenderForeground
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::InvokePreRenderForeground)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1808d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "InvokePreRenderForeground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.InvokePostRenderForeground
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::InvokePostRenderForeground)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1808dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "InvokePostRenderForeground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.CreateBackgroundTexture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::CreateBackgroundTexture)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x18098cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "CreateBackgroundTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.CreateForegroundTexture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::CreateForegroundTexture)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1809964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "CreateForegroundTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.CreateOptimizedTexture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::CreateOptimizedTexture)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x18099fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "CreateOptimizedTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.CreateComplexClipPlaneTexture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::CreateComplexClipPlaneTexture)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1809a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "CreateComplexClipPlaneTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.UpdateTextures
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::UpdateTextures)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1807354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "UpdateTextures",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.SendTextureToBridge
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)(::UnityEngine::RenderTexture*, ::LIV::SDK::Unity::TEXTURE_ID)>(&::LIV::SDK::Unity::SDKRender::SendTextureToBridge)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x1808b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "SendTextureToBridge",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::TEXTURE_ID>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::CommandBuffer*& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneCommandBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipPlaneCommandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneCommandBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipPlaneCommandBuffer;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__clipPlaneCommandBuffer(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clipPlaneCommandBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& LIV::SDK::Unity::SDKRender::__cordl_internal_get__combineAlphaCommandBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____combineAlphaCommandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__combineAlphaCommandBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____combineAlphaCommandBuffer;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__combineAlphaCommandBuffer(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____combineAlphaCommandBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& LIV::SDK::Unity::SDKRender::__cordl_internal_get__captureTextureCommandBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____captureTextureCommandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__captureTextureCommandBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____captureTextureCommandBuffer;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__captureTextureCommandBuffer(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____captureTextureCommandBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& LIV::SDK::Unity::SDKRender::__cordl_internal_get__applyTextureCommandBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applyTextureCommandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__applyTextureCommandBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applyTextureCommandBuffer;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__applyTextureCommandBuffer(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____applyTextureCommandBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& LIV::SDK::Unity::SDKRender::__cordl_internal_get__optimizedRenderingCommandBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optimizedRenderingCommandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__optimizedRenderingCommandBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optimizedRenderingCommandBuffer;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__optimizedRenderingCommandBuffer(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____optimizedRenderingCommandBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::CameraEvent& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneCameraEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipPlaneCameraEvent;
}
constexpr ::UnityEngine::Rendering::CameraEvent const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneCameraEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipPlaneCameraEvent;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__clipPlaneCameraEvent(::UnityEngine::Rendering::CameraEvent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clipPlaneCameraEvent = value;
}
constexpr ::UnityEngine::Rendering::CameraEvent& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneCombineAlphaCameraEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipPlaneCombineAlphaCameraEvent;
}
constexpr ::UnityEngine::Rendering::CameraEvent const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneCombineAlphaCameraEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipPlaneCombineAlphaCameraEvent;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__clipPlaneCombineAlphaCameraEvent(::UnityEngine::Rendering::CameraEvent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clipPlaneCombineAlphaCameraEvent = value;
}
constexpr ::UnityEngine::Rendering::CameraEvent& LIV::SDK::Unity::SDKRender::__cordl_internal_get__captureTextureEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____captureTextureEvent;
}
constexpr ::UnityEngine::Rendering::CameraEvent const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__captureTextureEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____captureTextureEvent;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__captureTextureEvent(::UnityEngine::Rendering::CameraEvent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____captureTextureEvent = value;
}
constexpr ::UnityEngine::Rendering::CameraEvent& LIV::SDK::Unity::SDKRender::__cordl_internal_get__applyTextureEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applyTextureEvent;
}
constexpr ::UnityEngine::Rendering::CameraEvent const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__applyTextureEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applyTextureEvent;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__applyTextureEvent(::UnityEngine::Rendering::CameraEvent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____applyTextureEvent = value;
}
constexpr ::UnityEngine::Rendering::CameraEvent& LIV::SDK::Unity::SDKRender::__cordl_internal_get__optimizedRenderingCameraEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optimizedRenderingCameraEvent;
}
constexpr ::UnityEngine::Rendering::CameraEvent const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__optimizedRenderingCameraEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optimizedRenderingCameraEvent;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__optimizedRenderingCameraEvent(::UnityEngine::Rendering::CameraEvent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____optimizedRenderingCameraEvent = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipPlaneMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipPlaneMesh;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__clipPlaneMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clipPlaneMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneSimpleMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipPlaneSimpleMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneSimpleMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipPlaneSimpleMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__clipPlaneSimpleMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clipPlaneSimpleMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneSimpleDebugMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipPlaneSimpleDebugMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneSimpleDebugMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipPlaneSimpleDebugMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__clipPlaneSimpleDebugMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clipPlaneSimpleDebugMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneComplexMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipPlaneComplexMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneComplexMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipPlaneComplexMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__clipPlaneComplexMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clipPlaneComplexMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneComplexDebugMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipPlaneComplexDebugMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneComplexDebugMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clipPlaneComplexDebugMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__clipPlaneComplexDebugMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clipPlaneComplexDebugMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__writeOpaqueToAlphaMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeOpaqueToAlphaMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__writeOpaqueToAlphaMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeOpaqueToAlphaMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__writeOpaqueToAlphaMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____writeOpaqueToAlphaMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__combineAlphaMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____combineAlphaMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__combineAlphaMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____combineAlphaMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__combineAlphaMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____combineAlphaMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__writeMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__writeMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__writeMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____writeMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__forceForwardRenderingMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forceForwardRenderingMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__forceForwardRenderingMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forceForwardRenderingMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__forceForwardRenderingMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____forceForwardRenderingMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__backgroundRenderTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backgroundRenderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__backgroundRenderTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backgroundRenderTexture;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__backgroundRenderTexture(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backgroundRenderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__foregroundRenderTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____foregroundRenderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__foregroundRenderTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____foregroundRenderTexture;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__foregroundRenderTexture(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____foregroundRenderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__optimizedRenderTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optimizedRenderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__optimizedRenderTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optimizedRenderTexture;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__optimizedRenderTexture(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____optimizedRenderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__complexClipPlaneRenderTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____complexClipPlaneRenderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__complexClipPlaneRenderTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____complexClipPlaneRenderTexture;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__complexClipPlaneRenderTexture(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____complexClipPlaneRenderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::LIV::SDK::Unity::LIV>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__liv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____liv;
}
constexpr ::UnityW<::LIV::SDK::Unity::LIV> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__liv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____liv;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__liv(::UnityW<::LIV::SDK::Unity::LIV>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____liv)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LIV::SDK::Unity::SDKOutputFrame& LIV::SDK::Unity::SDKRender::__cordl_internal_get__outputFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputFrame;
}
constexpr ::LIV::SDK::Unity::SDKOutputFrame const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__outputFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputFrame;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__outputFrame(::LIV::SDK::Unity::SDKOutputFrame  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputFrame = value;
}
constexpr ::LIV::SDK::Unity::SDKInputFrame& LIV::SDK::Unity::SDKRender::__cordl_internal_get__inputFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputFrame;
}
constexpr ::LIV::SDK::Unity::SDKInputFrame const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__inputFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputFrame;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__inputFrame(::LIV::SDK::Unity::SDKInputFrame  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputFrame = value;
}
constexpr ::LIV::SDK::Unity::SDKResolution& LIV::SDK::Unity::SDKRender::__cordl_internal_get__resolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resolution;
}
constexpr ::LIV::SDK::Unity::SDKResolution const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__resolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resolution;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__resolution(::LIV::SDK::Unity::SDKResolution  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resolution = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__cameraInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraInstance;
}
constexpr ::UnityW<::UnityEngine::Camera> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__cameraInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraInstance;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__cameraInstance(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cameraInstance)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LIV::SDK::Unity::SDKPose& LIV::SDK::Unity::SDKRender::__cordl_internal_get__requestedPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestedPose;
}
constexpr ::LIV::SDK::Unity::SDKPose const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__requestedPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestedPose;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__requestedPose(::LIV::SDK::Unity::SDKPose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requestedPose = value;
}
constexpr int32_t& LIV::SDK::Unity::SDKRender::__cordl_internal_get__requestedPoseFrameIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestedPoseFrameIndex;
}
constexpr int32_t const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__requestedPoseFrameIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestedPoseFrameIndex;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__requestedPoseFrameIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requestedPoseFrameIndex = value;
}
inline ::UnityW<::UnityEngine::RenderTexture> LIV::SDK::Unity::SDKRender::get_BackgroundRenderTexture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_BackgroundRenderTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> LIV::SDK::Unity::SDKRender::GetClipPlaneMaterial(bool  debugClipPlane, bool  complexClipPlane, ::UnityEngine::Rendering::ColorWriteMask  colorWriteMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "GetClipPlaneMaterial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ColorWriteMask>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method, debugClipPlane, complexClipPlane, colorWriteMask);
}
inline ::UnityW<::UnityEngine::Material> LIV::SDK::Unity::SDKRender::GetGroundClipPlaneMaterial(bool  debugClipPlane, ::UnityEngine::Rendering::ColorWriteMask  colorWriteMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "GetGroundClipPlaneMaterial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ColorWriteMask>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method, debugClipPlane, colorWriteMask);
}
inline bool LIV::SDK::Unity::SDKRender::get_useDeferredRendering()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_useDeferredRendering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKRender::get_interlacedRendering()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_interlacedRendering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKRender::get_canRenderBackground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_canRenderBackground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKRender::get_canRenderForeground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_canRenderForeground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKRender::get_canRenderOptimized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_canRenderOptimized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::_ctor(::LIV::SDK::Unity::LIV*  liv)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::LIV*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, liv);
}
inline void LIV::SDK::Unity::SDKRender::Render()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "Render",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::RenderBackground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "RenderBackground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::RenderForeground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "RenderForeground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::RenderOptimized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "RenderOptimized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::CreateAssets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "CreateAssets",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::DestroyAssets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "DestroyAssets",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::LIV::SDK::Unity::LIV> LIV::SDK::Unity::SDKRender::get_liv()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_liv",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::LIV::SDK::Unity::LIV>, false>(this, ___internal_method);
}
inline ::LIV::SDK::Unity::SDKOutputFrame LIV::SDK::Unity::SDKRender::get_outputFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_outputFrame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKOutputFrame, false>(this, ___internal_method);
}
inline ::LIV::SDK::Unity::SDKInputFrame LIV::SDK::Unity::SDKRender::get_inputFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_inputFrame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKInputFrame, false>(this, ___internal_method);
}
inline ::LIV::SDK::Unity::SDKResolution LIV::SDK::Unity::SDKRender::get_resolution()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_resolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKResolution, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> LIV::SDK::Unity::SDKRender::get_cameraInstance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_cameraInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> LIV::SDK::Unity::SDKRender::get_cameraReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_cameraReference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> LIV::SDK::Unity::SDKRender::get_hmdCamera()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_hmdCamera",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> LIV::SDK::Unity::SDKRender::get_stage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_stage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> LIV::SDK::Unity::SDKRender::get_stageTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_stageTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 LIV::SDK::Unity::SDKRender::get_stageLocalToWorldMatrix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_stageLocalToWorldMatrix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 LIV::SDK::Unity::SDKRender::get_localToWorldMatrix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_localToWorldMatrix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method);
}
inline int32_t LIV::SDK::Unity::SDKRender::get_spectatorLayerMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_spectatorLayerMask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKRender::get_disableStandardAssets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_disableStandardAssets",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKRender::get_canSetPose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "get_canSetPose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKRender::SetPose(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  verticalFieldOfView, bool  useLocalSpace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "SetPose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, position, rotation, verticalFieldOfView, useLocalSpace);
}
inline void LIV::SDK::Unity::SDKRender::SetGroundPlane(float_t  distance, ::UnityEngine::Vector3  normal, bool  useLocalSpace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "SetGroundPlane",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, distance, normal, useLocalSpace);
}
inline void LIV::SDK::Unity::SDKRender::SetGroundPlane(::UnityEngine::Plane  plane, bool  useLocalSpace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "SetGroundPlane",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Plane>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, plane, useLocalSpace);
}
inline void LIV::SDK::Unity::SDKRender::SetGroundPlane(::UnityEngine::Transform*  transform, bool  useLocalSpace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "SetGroundPlane",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transform, useLocalSpace);
}
inline void LIV::SDK::Unity::SDKRender::ReleaseBridgePoseControl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "ReleaseBridgePoseControl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::UpdateBridgeResolution()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "UpdateBridgeResolution",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::UpdateBridgeInputFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "UpdateBridgeInputFrame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::InvokePreRender()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "InvokePreRender",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::IvokePostRender()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "IvokePostRender",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::InvokePreRenderBackground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "InvokePreRenderBackground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::InvokePostRenderBackground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "InvokePostRenderBackground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::InvokePreRenderForeground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "InvokePreRenderForeground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::InvokePostRenderForeground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "InvokePostRenderForeground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::CreateBackgroundTexture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "CreateBackgroundTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::CreateForegroundTexture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "CreateForegroundTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::CreateOptimizedTexture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "CreateOptimizedTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::CreateComplexClipPlaneTexture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "CreateComplexClipPlaneTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::UpdateTextures()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "UpdateTextures",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::SendTextureToBridge(::UnityEngine::RenderTexture*  texture, ::LIV::SDK::Unity::TEXTURE_ID  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                        "SendTextureToBridge",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::TEXTURE_ID>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, texture, id);
}
inline ::LIV::SDK::Unity::SDKRender* LIV::SDK::Unity::SDKRender::New_ctor(::LIV::SDK::Unity::LIV*  liv)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LIV::SDK::Unity::SDKRender*>(liv));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  LIV::SDK::Unity::SDKRender::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* LIV::SDK::Unity::SDKRender::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKRender::SDKRender()   {
}
