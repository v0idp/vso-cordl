#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/Utils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "Unity/XR/Oculus/zzzz__Utils_def.hpp"
#include "Unity/XR/Oculus/zzzz__SystemHeadset_def.hpp"
#include "Unity/XR/Oculus/zzzz__Utils_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "createTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "predictedDisplayTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "swapchainIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "createPoseLocation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "createPoseRotation", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "fovLeftAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fovRightAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fovTopAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fovDownAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nearZ", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "farZ", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minDepth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxDepth", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc::Utils_EnvironmentDepthFrameDesc(bool  isValid, double_t  createTime, double_t  predictedDisplayTime, int32_t  swapchainIndex, ::UnityEngine::Vector3  createPoseLocation, ::UnityEngine::Vector4  createPoseRotation, float_t  fovLeftAngle, float_t  fovRightAngle, float_t  fovTopAngle, float_t  fovDownAngle, float_t  nearZ, float_t  farZ, float_t  minDepth, float_t  maxDepth) noexcept  {
this->isValid = isValid;
this->createTime = createTime;
this->predictedDisplayTime = predictedDisplayTime;
this->swapchainIndex = swapchainIndex;
this->createPoseLocation = createPoseLocation;
this->createPoseRotation = createPoseRotation;
this->fovLeftAngle = fovLeftAngle;
this->fovRightAngle = fovRightAngle;
this->fovTopAngle = fovTopAngle;
this->fovDownAngle = fovDownAngle;
this->nearZ = nearZ;
this->farZ = farZ;
this->minDepth = minDepth;
this->maxDepth = maxDepth;
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc::Utils_EnvironmentDepthFrameDesc()   {
}
// Ctor Parameters [CppParam { name: "removeHands", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams::Utils_EnvironmentDepthCreateParams(bool  removeHands) noexcept  {
this->removeHands = removeHands;
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams::Utils_EnvironmentDepthCreateParams()   {
}
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.SetColorScaleAndOffset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector4, ::UnityEngine::Vector4)>(&::Unity::XR::Oculus::Utils::SetColorScaleAndOffset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2f37fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "SetColorScaleAndOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.GetSystemHeadsetType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::XR::Oculus::SystemHeadset (*)()>(&::Unity::XR::Oculus::Utils::GetSystemHeadsetType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2f3813c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "GetSystemHeadsetType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.ScenePermissionGrantedCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Unity::XR::Oculus::Utils::ScenePermissionGrantedCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2f381a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "ScenePermissionGrantedCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.IsScenePermissionGranted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::Utils::IsScenePermissionGranted)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f38294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "IsScenePermissionGranted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.SetupEnvironmentDepth
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams)>(&::Unity::XR::Oculus::Utils::SetupEnvironmentDepth)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2f382d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "SetupEnvironmentDepth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.SetEnvironmentDepthRendering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::Utils::SetEnvironmentDepthRendering)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2f383e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "SetEnvironmentDepthRendering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.ShutdownEnvironmentDepth
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::XR::Oculus::Utils::ShutdownEnvironmentDepth)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2f384cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "ShutdownEnvironmentDepth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.GetEnvironmentDepthTextureId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<uint32_t>)>(&::Unity::XR::Oculus::Utils::GetEnvironmentDepthTextureId)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2f38530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "GetEnvironmentDepthTextureId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.GetEnvironmentDepthFrameDesc
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc (*)(int32_t)>(&::Unity::XR::Oculus::Utils::GetEnvironmentDepthFrameDesc)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2f385a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "GetEnvironmentDepthFrameDesc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.SetEnvironmentDepthHandRemoval
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&::Unity::XR::Oculus::Utils::SetEnvironmentDepthHandRemoval)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f38740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "SetEnvironmentDepthHandRemoval",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.GetEnvironmentDepthSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::Utils::GetEnvironmentDepthSupported)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2f387b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "GetEnvironmentDepthSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.GetEnvironmentDepthHandRemovalSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::Utils::GetEnvironmentDepthHandRemovalSupported)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2f3881c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "GetEnvironmentDepthHandRemovalSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.PermissionGrantedCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Unity::XR::Oculus::Utils::PermissionGrantedCallback)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2f38884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "PermissionGrantedCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.IsEyeTrackingPermissionGranted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::Utils::IsEyeTrackingPermissionGranted)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f38950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "IsEyeTrackingPermissionGranted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.get_useDynamicFoveatedRendering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::Utils::get_useDynamicFoveatedRendering)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2f38994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "get_useDynamicFoveatedRendering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.set_useDynamicFoveatedRendering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::Utils::set_useDynamicFoveatedRendering)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2f389fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "set_useDynamicFoveatedRendering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.get_foveatedRenderingLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Unity::XR::Oculus::Utils::get_foveatedRenderingLevel)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2f38ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "get_foveatedRenderingLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.set_foveatedRenderingLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Unity::XR::Oculus::Utils::set_foveatedRenderingLevel)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2f38bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "set_foveatedRenderingLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.get_eyeTrackedFoveatedRenderingSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::Utils::get_eyeTrackedFoveatedRenderingSupported)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2f38ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "get_eyeTrackedFoveatedRenderingSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.get_eyeTrackedFoveatedRenderingEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::Utils::get_eyeTrackedFoveatedRenderingEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2f38d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "get_eyeTrackedFoveatedRenderingEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.set_eyeTrackedFoveatedRenderingEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::Utils::set_eyeTrackedFoveatedRenderingEnabled)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2f38d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "set_eyeTrackedFoveatedRenderingEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.SetFoveationLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::Unity::XR::Oculus::Utils::SetFoveationLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2f38e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "SetFoveationLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.EnableDynamicFFR
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&::Unity::XR::Oculus::Utils::EnableDynamicFFR)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2f38f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "EnableDynamicFFR",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Utils.GetFoveationLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Unity::XR::Oculus::Utils::GetFoveationLevel)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2f38fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "GetFoveationLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::Oculus::Utils::setStaticF_s_EnvironmentDepthCreateParams(::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams  value)  {
::cordl_internals::setStaticField<::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams, "s_EnvironmentDepthCreateParams", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get>(std::forward<::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams>(value));
}
inline ::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams Unity::XR::Oculus::Utils::getStaticF_s_EnvironmentDepthCreateParams()  {
return ::cordl_internals::getStaticField<::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams, "s_EnvironmentDepthCreateParams", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get>();
}
inline void Unity::XR::Oculus::Utils::SetColorScaleAndOffset(::UnityEngine::Vector4  colorScale, ::UnityEngine::Vector4  colorOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "SetColorScaleAndOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, colorScale, colorOffset);
}
inline ::Unity::XR::Oculus::SystemHeadset Unity::XR::Oculus::Utils::GetSystemHeadsetType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "GetSystemHeadsetType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::Oculus::SystemHeadset, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::Utils::ScenePermissionGrantedCallback(::StringW  permissionName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "ScenePermissionGrantedCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, permissionName);
}
inline bool Unity::XR::Oculus::Utils::IsScenePermissionGranted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "IsScenePermissionGranted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::Utils::SetupEnvironmentDepth(::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams  createParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "SetupEnvironmentDepth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, createParams);
}
inline void Unity::XR::Oculus::Utils::SetEnvironmentDepthRendering(bool  isEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "SetEnvironmentDepthRendering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isEnabled);
}
inline void Unity::XR::Oculus::Utils::ShutdownEnvironmentDepth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "ShutdownEnvironmentDepth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::Utils::GetEnvironmentDepthTextureId(::ByRef<uint32_t>  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "GetEnvironmentDepthTextureId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, id);
}
inline ::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc Unity::XR::Oculus::Utils::GetEnvironmentDepthFrameDesc(int32_t  eye)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "GetEnvironmentDepthFrameDesc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc, false>(nullptr, ___internal_method, eye);
}
inline bool Unity::XR::Oculus::Utils::SetEnvironmentDepthHandRemoval(bool  isEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "SetEnvironmentDepthHandRemoval",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, isEnabled);
}
inline bool Unity::XR::Oculus::Utils::GetEnvironmentDepthSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "GetEnvironmentDepthSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::Utils::GetEnvironmentDepthHandRemovalSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "GetEnvironmentDepthHandRemovalSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::Utils::PermissionGrantedCallback(::StringW  permissionName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "PermissionGrantedCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, permissionName);
}
inline bool Unity::XR::Oculus::Utils::IsEyeTrackingPermissionGranted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "IsEyeTrackingPermissionGranted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::Utils::get_useDynamicFoveatedRendering()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "get_useDynamicFoveatedRendering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::Utils::set_useDynamicFoveatedRendering(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "set_useDynamicFoveatedRendering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int32_t Unity::XR::Oculus::Utils::get_foveatedRenderingLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "get_foveatedRenderingLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::Utils::set_foveatedRenderingLevel(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "set_foveatedRenderingLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool Unity::XR::Oculus::Utils::get_eyeTrackedFoveatedRenderingSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "get_eyeTrackedFoveatedRenderingSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::Utils::get_eyeTrackedFoveatedRenderingEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "get_eyeTrackedFoveatedRenderingEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::Utils::set_eyeTrackedFoveatedRenderingEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "set_eyeTrackedFoveatedRenderingEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool Unity::XR::Oculus::Utils::SetFoveationLevel(int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "SetFoveationLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, level);
}
inline bool Unity::XR::Oculus::Utils::EnableDynamicFFR(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "EnableDynamicFFR",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, enable);
}
inline int32_t Unity::XR::Oculus::Utils::GetFoveationLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Utils*>::get(),
                        "GetFoveationLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::Utils::Utils()   {
}
