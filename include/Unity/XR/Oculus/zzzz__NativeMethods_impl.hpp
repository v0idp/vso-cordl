#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/NativeMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "Unity/XR/Oculus/zzzz__NativeMethods_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/XR/Oculus/zzzz__Boundary_def.hpp"
#include "Unity/XR/Oculus/zzzz__NativeMethods_def.hpp"
#include "Unity/XR/Oculus/zzzz__SystemHeadset_def.hpp"
#include "Unity/XR/Oculus/zzzz__Utils_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "sharedDepthBuffer", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dashSupport", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "stereoRenderingMode", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorSpace", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lowOverheadMode", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "optimizeBufferDiscards", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "symmetricProjection", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "subsampledLayout", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lateLatching", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lateLatchingDebug", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableTrackingOriginStageMode", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "spaceWarp", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "depthSubmission", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "foveatedRenderingMethod", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::XR::Oculus::NativeMethods_UserDefinedSettings::NativeMethods_UserDefinedSettings(uint16_t  sharedDepthBuffer, uint16_t  dashSupport, uint16_t  stereoRenderingMode, uint16_t  colorSpace, uint16_t  lowOverheadMode, uint16_t  optimizeBufferDiscards, uint16_t  symmetricProjection, uint16_t  subsampledLayout, uint16_t  lateLatching, uint16_t  lateLatchingDebug, uint16_t  enableTrackingOriginStageMode, uint16_t  spaceWarp, uint16_t  depthSubmission, uint16_t  foveatedRenderingMethod) noexcept  {
this->sharedDepthBuffer = sharedDepthBuffer;
this->dashSupport = dashSupport;
this->stereoRenderingMode = stereoRenderingMode;
this->colorSpace = colorSpace;
this->lowOverheadMode = lowOverheadMode;
this->optimizeBufferDiscards = optimizeBufferDiscards;
this->symmetricProjection = symmetricProjection;
this->subsampledLayout = subsampledLayout;
this->lateLatching = lateLatching;
this->lateLatchingDebug = lateLatchingDebug;
this->enableTrackingOriginStageMode = enableTrackingOriginStageMode;
this->spaceWarp = spaceWarp;
this->depthSubmission = depthSubmission;
this->foveatedRenderingMethod = foveatedRenderingMethod;
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::NativeMethods_UserDefinedSettings::NativeMethods_UserDefinedSettings()   {
}
// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "createTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "predictedDisplayTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "swapchainIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "createPoseLocation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "createPoseRotation", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "fovLeftAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fovRightAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fovTopAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fovDownAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nearZ", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "farZ", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minDepth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxDepth", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal::NativeMethods_EnvironmentDepthFrameDescInternal(bool  isValid, double_t  createTime, double_t  predictedDisplayTime, int32_t  swapchainIndex, ::UnityEngine::Vector3  createPoseLocation, ::UnityEngine::Vector4  createPoseRotation, float_t  fovLeftAngle, float_t  fovRightAngle, float_t  fovTopAngle, float_t  fovDownAngle, float_t  nearZ, float_t  farZ, float_t  minDepth, float_t  maxDepth) noexcept  {
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
constexpr ::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal::NativeMethods_EnvironmentDepthFrameDescInternal()   {
}
// Ctor Parameters [CppParam { name: "removeHands", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::XR::Oculus::NativeMethods_EnvironmentDepthCreateParamsInternal::NativeMethods_EnvironmentDepthCreateParamsInternal(bool  removeHands) noexcept  {
this->removeHands = removeHands;
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::NativeMethods_EnvironmentDepthCreateParamsInternal::NativeMethods_EnvironmentDepthCreateParamsInternal()   {
}
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.SetColorScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t, float_t, float_t)>(&::Unity::XR::Oculus::NativeMethods_Internal::SetColorScale)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f3c2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetColorScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.SetColorOffset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t, float_t, float_t)>(&::Unity::XR::Oculus::NativeMethods_Internal::SetColorOffset)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2f3c394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetColorOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.GetIsSupportedDevice
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods_Internal::GetIsSupportedDevice)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f3c428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetIsSupportedDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.LoadOVRPlugin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::Unity::XR::Oculus::NativeMethods_Internal::LoadOVRPlugin)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2f3c498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "LoadOVRPlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.UnloadOVRPlugin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::XR::Oculus::NativeMethods_Internal::UnloadOVRPlugin)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2f3c584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "UnloadOVRPlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.SetUserDefinedSettings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings)>(&::Unity::XR::Oculus::NativeMethods_Internal::SetUserDefinedSettings)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2f3c5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetUserDefinedSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::NativeMethods_UserDefinedSettings>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.SetCPULevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::Unity::XR::Oculus::NativeMethods_Internal::SetCPULevel)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2f3c674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetCPULevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.SetGPULevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::Unity::XR::Oculus::NativeMethods_Internal::SetGPULevel)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2f3c6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetGPULevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.GetOVRPVersion
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Unity::XR::Oculus::NativeMethods_Internal::GetOVRPVersion)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2f3c76c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetOVRPVersion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.EnablePerfMetrics
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::NativeMethods_Internal::EnablePerfMetrics)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2f3c7ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "EnablePerfMetrics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.EnableAppMetrics
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::NativeMethods_Internal::EnableAppMetrics)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2f3c868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "EnableAppMetrics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.SetDeveloperModeStrict
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&::Unity::XR::Oculus::NativeMethods_Internal::SetDeveloperModeStrict)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2f3c8e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetDeveloperModeStrict",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.GetAppHasInputFocus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods_Internal::GetAppHasInputFocus)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f3c968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetAppHasInputFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.GetBoundaryConfigured
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods_Internal::GetBoundaryConfigured)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f3c9d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetBoundaryConfigured",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.GetBoundaryDimensions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::XR::Oculus::Boundary_BoundaryType, ::ByRef<::UnityEngine::Vector3>)>(&::Unity::XR::Oculus::NativeMethods_Internal::GetBoundaryDimensions)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2f3ca48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetBoundaryDimensions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::Boundary_BoundaryType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.GetBoundaryVisible
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods_Internal::GetBoundaryVisible)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f3cad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetBoundaryVisible",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.SetBoundaryVisible
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::NativeMethods_Internal::SetBoundaryVisible)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2f3cb44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetBoundaryVisible",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.GetAppShouldQuit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods_Internal::GetAppShouldQuit)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f3cc24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetAppShouldQuit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.GetDisplayAvailableFrequencies
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::ByRef<int32_t>)>(&::Unity::XR::Oculus::NativeMethods_Internal::GetDisplayAvailableFrequencies)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2f3cc94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetDisplayAvailableFrequencies",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.SetDisplayFrequency
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float_t)>(&::Unity::XR::Oculus::NativeMethods_Internal::SetDisplayFrequency)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2f3cd20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetDisplayFrequency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.GetDisplayFrequency
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<float_t>)>(&::Unity::XR::Oculus::NativeMethods_Internal::GetDisplayFrequency)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2f3cda4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetDisplayFrequency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.GetSystemHeadsetType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::XR::Oculus::SystemHeadset (*)()>(&::Unity::XR::Oculus::NativeMethods_Internal::GetSystemHeadsetType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f3ce28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetSystemHeadsetType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.GetTiledMultiResSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods_Internal::GetTiledMultiResSupported)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f3ce90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetTiledMultiResSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.SetTiledMultiResLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Unity::XR::Oculus::NativeMethods_Internal::SetTiledMultiResLevel)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2f3cf00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetTiledMultiResLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.GetTiledMultiResLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Unity::XR::Oculus::NativeMethods_Internal::GetTiledMultiResLevel)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f3cf7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetTiledMultiResLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.SetTiledMultiResDynamic
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::NativeMethods_Internal::SetTiledMultiResDynamic)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2f3cfe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetTiledMultiResDynamic",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.GetEyeTrackedFoveatedRenderingSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods_Internal::GetEyeTrackedFoveatedRenderingSupported)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f3d060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetEyeTrackedFoveatedRenderingSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.GetEyeTrackedFoveatedRenderingEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods_Internal::GetEyeTrackedFoveatedRenderingEnabled)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f3d0d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetEyeTrackedFoveatedRenderingEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.SetEyeTrackedFoveatedRenderingEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::NativeMethods_Internal::SetEyeTrackedFoveatedRenderingEnabled)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2f3d140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetEyeTrackedFoveatedRenderingEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.GetShouldRestartSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods_Internal::GetShouldRestartSession)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f3d220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetShouldRestartSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.SetupEnvironmentDepth
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::XR::Oculus::NativeMethods_EnvironmentDepthCreateParamsInternal>)>(&::Unity::XR::Oculus::NativeMethods_Internal::SetupEnvironmentDepth)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2f3d290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetupEnvironmentDepth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::XR::Oculus::NativeMethods_EnvironmentDepthCreateParamsInternal>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.SetEnvironmentDepthRendering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&::Unity::XR::Oculus::NativeMethods_Internal::SetEnvironmentDepthRendering)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2f3d32c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetEnvironmentDepthRendering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.ShutdownEnvironmentDepth
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods_Internal::ShutdownEnvironmentDepth)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f3d3b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "ShutdownEnvironmentDepth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.GetEnvironmentDepthTextureId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<uint32_t>)>(&::Unity::XR::Oculus::NativeMethods_Internal::GetEnvironmentDepthTextureId)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2f3d420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetEnvironmentDepthTextureId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.GetEnvironmentDepthFrameDesc
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal>, int32_t)>(&::Unity::XR::Oculus::NativeMethods_Internal::GetEnvironmentDepthFrameDesc)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2f3d4a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetEnvironmentDepthFrameDesc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.SetEnvironmentDepthHandRemoval
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&::Unity::XR::Oculus::NativeMethods_Internal::SetEnvironmentDepthHandRemoval)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2f3d5bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetEnvironmentDepthHandRemoval",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.GetEnvironmentDepthSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods_Internal::GetEnvironmentDepthSupported)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f3d640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetEnvironmentDepthSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods_Internal.GetEnvironmentDepthHandRemovalSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods_Internal::GetEnvironmentDepthHandRemovalSupported)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f3d6b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetEnvironmentDepthHandRemovalSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::Oculus::NativeMethods_Internal::SetColorScale(float_t  x, float_t  y, float_t  z, float_t  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetColorScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, x, y, z, w);
}
inline void Unity::XR::Oculus::NativeMethods_Internal::SetColorOffset(float_t  x, float_t  y, float_t  z, float_t  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetColorOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, x, y, z, w);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::GetIsSupportedDevice()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetIsSupportedDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::LoadOVRPlugin(::StringW  ovrpPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "LoadOVRPlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ovrpPath);
}
inline void Unity::XR::Oculus::NativeMethods_Internal::UnloadOVRPlugin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "UnloadOVRPlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::NativeMethods_Internal::SetUserDefinedSettings(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings  settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetUserDefinedSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::NativeMethods_UserDefinedSettings>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, settings);
}
inline int32_t Unity::XR::Oculus::NativeMethods_Internal::SetCPULevel(int32_t  cpuLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetCPULevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, cpuLevel);
}
inline int32_t Unity::XR::Oculus::NativeMethods_Internal::SetGPULevel(int32_t  gpuLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetGPULevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, gpuLevel);
}
inline void Unity::XR::Oculus::NativeMethods_Internal::GetOVRPVersion(::ArrayW<uint8_t,::Array<uint8_t>*>  version)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetOVRPVersion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, version);
}
inline void Unity::XR::Oculus::NativeMethods_Internal::EnablePerfMetrics(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "EnablePerfMetrics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enable);
}
inline void Unity::XR::Oculus::NativeMethods_Internal::EnableAppMetrics(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "EnableAppMetrics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enable);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::SetDeveloperModeStrict(bool  active)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetDeveloperModeStrict",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, active);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::GetAppHasInputFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetAppHasInputFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::GetBoundaryConfigured()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetBoundaryConfigured",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::GetBoundaryDimensions(::Unity::XR::Oculus::Boundary_BoundaryType  boundaryType, ::ByRef<::UnityEngine::Vector3>  dimensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetBoundaryDimensions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::Boundary_BoundaryType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boundaryType, dimensions);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::GetBoundaryVisible()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetBoundaryVisible",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::NativeMethods_Internal::SetBoundaryVisible(bool  boundaryVisible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetBoundaryVisible",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, boundaryVisible);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::GetAppShouldQuit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetAppShouldQuit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::GetDisplayAvailableFrequencies(::System::IntPtr  ptr, ::ByRef<int32_t>  numFrequencies)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetDisplayAvailableFrequencies",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ptr, numFrequencies);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::SetDisplayFrequency(float_t  refreshRate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetDisplayFrequency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, refreshRate);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::GetDisplayFrequency(::ByRef<float_t>  refreshRate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetDisplayFrequency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, refreshRate);
}
inline ::Unity::XR::Oculus::SystemHeadset Unity::XR::Oculus::NativeMethods_Internal::GetSystemHeadsetType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetSystemHeadsetType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::Oculus::SystemHeadset, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::GetTiledMultiResSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetTiledMultiResSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::NativeMethods_Internal::SetTiledMultiResLevel(int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetTiledMultiResLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, level);
}
inline int32_t Unity::XR::Oculus::NativeMethods_Internal::GetTiledMultiResLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetTiledMultiResLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::NativeMethods_Internal::SetTiledMultiResDynamic(bool  isDynamic)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetTiledMultiResDynamic",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isDynamic);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::GetEyeTrackedFoveatedRenderingSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetEyeTrackedFoveatedRenderingSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::GetEyeTrackedFoveatedRenderingEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetEyeTrackedFoveatedRenderingEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::NativeMethods_Internal::SetEyeTrackedFoveatedRenderingEnabled(bool  isEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetEyeTrackedFoveatedRenderingEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isEnabled);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::GetShouldRestartSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetShouldRestartSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::SetupEnvironmentDepth(::ByRef<::Unity::XR::Oculus::NativeMethods_EnvironmentDepthCreateParamsInternal>  createParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetupEnvironmentDepth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::XR::Oculus::NativeMethods_EnvironmentDepthCreateParamsInternal>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, createParams);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::SetEnvironmentDepthRendering(bool  isEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetEnvironmentDepthRendering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, isEnabled);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::ShutdownEnvironmentDepth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "ShutdownEnvironmentDepth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::GetEnvironmentDepthTextureId(::ByRef<uint32_t>  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetEnvironmentDepthTextureId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, id);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::GetEnvironmentDepthFrameDesc(::ByRef<::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal>  frameDesc, int32_t  eye)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetEnvironmentDepthFrameDesc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, frameDesc, eye);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::SetEnvironmentDepthHandRemoval(bool  isEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "SetEnvironmentDepthHandRemoval",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, isEnabled);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::GetEnvironmentDepthSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetEnvironmentDepthSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods_Internal::GetEnvironmentDepthHandRemovalSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods_Internal*>::get(),
                        "GetEnvironmentDepthHandRemovalSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::NativeMethods_Internal::NativeMethods_Internal()   {
}
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetColorScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t, float_t, float_t)>(&::Unity::XR::Oculus::NativeMethods::SetColorScale)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f3800c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetColorScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetColorOffset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t, float_t, float_t)>(&::Unity::XR::Oculus::NativeMethods::SetColorOffset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2f380a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetColorOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetIsSupportedDevice
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods::GetIsSupportedDevice)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2f39c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetIsSupportedDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.LoadOVRPlugin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::Unity::XR::Oculus::NativeMethods::LoadOVRPlugin)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2f3a8c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "LoadOVRPlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.UnloadOVRPlugin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::XR::Oculus::NativeMethods::UnloadOVRPlugin)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2f3c524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "UnloadOVRPlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetUserDefinedSettings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings)>(&::Unity::XR::Oculus::NativeMethods::SetUserDefinedSettings)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2f3a398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetUserDefinedSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::NativeMethods_UserDefinedSettings>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetCPULevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::Unity::XR::Oculus::NativeMethods::SetCPULevel)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2f3aa78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetCPULevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetGPULevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::Unity::XR::Oculus::NativeMethods::SetGPULevel)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2f3aafc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetGPULevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetOVRPVersion
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Unity::XR::Oculus::NativeMethods::GetOVRPVersion)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f3afc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetOVRPVersion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.EnablePerfMetrics
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::NativeMethods::EnablePerfMetrics)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f3be18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "EnablePerfMetrics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.EnableAppMetrics
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::NativeMethods::EnableAppMetrics)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f3c1ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "EnableAppMetrics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetDeveloperModeStrict
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&::Unity::XR::Oculus::NativeMethods::SetDeveloperModeStrict)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2f3974c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetDeveloperModeStrict",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetHasInputFocus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods::GetHasInputFocus)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2f39310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetHasInputFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetBoundaryConfigured
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods::GetBoundaryConfigured)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2f39420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetBoundaryConfigured",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetBoundaryDimensions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::XR::Oculus::Boundary_BoundaryType, ::ByRef<::UnityEngine::Vector3>)>(&::Unity::XR::Oculus::NativeMethods::GetBoundaryDimensions)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2f39488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetBoundaryDimensions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::Boundary_BoundaryType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetBoundaryVisible
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods::GetBoundaryVisible)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2f3954c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetBoundaryVisible",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetBoundaryVisible
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::NativeMethods::SetBoundaryVisible)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f395b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetBoundaryVisible",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetAppShouldQuit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods::GetAppShouldQuit)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2f3cbc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetAppShouldQuit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetDisplayAvailableFrequencies
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::ByRef<int32_t>)>(&::Unity::XR::Oculus::NativeMethods::GetDisplayAvailableFrequencies)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2f3ad04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetDisplayAvailableFrequencies",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetDisplayFrequency
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float_t)>(&::Unity::XR::Oculus::NativeMethods::SetDisplayFrequency)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2f3ad88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetDisplayFrequency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetDisplayFrequency
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<float_t>)>(&::Unity::XR::Oculus::NativeMethods::GetDisplayFrequency)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f3ae04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetDisplayFrequency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetSystemHeadsetType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::XR::Oculus::SystemHeadset (*)()>(&::Unity::XR::Oculus::NativeMethods::GetSystemHeadsetType)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2f38140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetSystemHeadsetType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetTiledMultiResSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods::GetTiledMultiResSupported)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2f38998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetTiledMultiResSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetTiledMultiResLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Unity::XR::Oculus::NativeMethods::SetTiledMultiResLevel)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f38c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetTiledMultiResLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetTiledMultiResLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Unity::XR::Oculus::NativeMethods::GetTiledMultiResLevel)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2f38b58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetTiledMultiResLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetTiledMultiResDynamic
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::NativeMethods::SetTiledMultiResDynamic)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f38a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetTiledMultiResDynamic",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetEyeTrackedFoveatedRenderingSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods::GetEyeTrackedFoveatedRenderingSupported)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2f38ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetEyeTrackedFoveatedRenderingSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetEyeTrackedFoveatedRenderingEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods::GetEyeTrackedFoveatedRenderingEnabled)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2f38d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetEyeTrackedFoveatedRenderingEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetEyeTrackedFoveatedRenderingEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::NativeMethods::SetEyeTrackedFoveatedRenderingEnabled)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f388e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetEyeTrackedFoveatedRenderingEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetShouldRestartSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods::GetShouldRestartSession)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2f3d1bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetShouldRestartSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetupEnvironmentDepth
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams)>(&::Unity::XR::Oculus::NativeMethods::SetupEnvironmentDepth)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f38224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetupEnvironmentDepth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetEnvironmentDepthRendering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::NativeMethods::SetEnvironmentDepthRendering)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f38464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetEnvironmentDepthRendering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.ShutdownEnvironmentDepth
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::XR::Oculus::NativeMethods::ShutdownEnvironmentDepth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2f384d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "ShutdownEnvironmentDepth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetEnvironmentDepthTextureId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<uint32_t>)>(&::Unity::XR::Oculus::NativeMethods::GetEnvironmentDepthTextureId)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2f38534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetEnvironmentDepthTextureId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetEnvironmentDepthFrameDesc
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc (*)(int32_t)>(&::Unity::XR::Oculus::NativeMethods::GetEnvironmentDepthFrameDesc)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2f385d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetEnvironmentDepthFrameDesc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetEnvironmentDepthHandRemoval
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&::Unity::XR::Oculus::NativeMethods::SetEnvironmentDepthHandRemoval)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2f38748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetEnvironmentDepthHandRemoval",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetEnvironmentDepthSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods::GetEnvironmentDepthSupported)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2f387b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetEnvironmentDepthSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetEnvironmentDepthHandRemovalSupported
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods::GetEnvironmentDepthHandRemovalSupported)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2f38820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetEnvironmentDepthHandRemovalSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::Oculus::NativeMethods::SetColorScale(float_t  x, float_t  y, float_t  z, float_t  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetColorScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, x, y, z, w);
}
inline void Unity::XR::Oculus::NativeMethods::SetColorOffset(float_t  x, float_t  y, float_t  z, float_t  w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetColorOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, x, y, z, w);
}
inline bool Unity::XR::Oculus::NativeMethods::GetIsSupportedDevice()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetIsSupportedDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods::LoadOVRPlugin(::StringW  ovrpPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "LoadOVRPlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ovrpPath);
}
inline void Unity::XR::Oculus::NativeMethods::UnloadOVRPlugin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "UnloadOVRPlugin",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::NativeMethods::SetUserDefinedSettings(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings  settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetUserDefinedSettings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::NativeMethods_UserDefinedSettings>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, settings);
}
inline int32_t Unity::XR::Oculus::NativeMethods::SetCPULevel(int32_t  cpuLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetCPULevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, cpuLevel);
}
inline int32_t Unity::XR::Oculus::NativeMethods::SetGPULevel(int32_t  gpuLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetGPULevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, gpuLevel);
}
inline void Unity::XR::Oculus::NativeMethods::GetOVRPVersion(::ArrayW<uint8_t,::Array<uint8_t>*>  version)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetOVRPVersion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, version);
}
inline void Unity::XR::Oculus::NativeMethods::EnablePerfMetrics(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "EnablePerfMetrics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enable);
}
inline void Unity::XR::Oculus::NativeMethods::EnableAppMetrics(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "EnableAppMetrics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enable);
}
inline bool Unity::XR::Oculus::NativeMethods::SetDeveloperModeStrict(bool  active)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetDeveloperModeStrict",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, active);
}
inline bool Unity::XR::Oculus::NativeMethods::GetHasInputFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetHasInputFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods::GetBoundaryConfigured()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetBoundaryConfigured",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods::GetBoundaryDimensions(::Unity::XR::Oculus::Boundary_BoundaryType  boundaryType, ::ByRef<::UnityEngine::Vector3>  dimensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetBoundaryDimensions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::Boundary_BoundaryType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boundaryType, dimensions);
}
inline bool Unity::XR::Oculus::NativeMethods::GetBoundaryVisible()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetBoundaryVisible",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::NativeMethods::SetBoundaryVisible(bool  boundaryVisible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetBoundaryVisible",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, boundaryVisible);
}
inline bool Unity::XR::Oculus::NativeMethods::GetAppShouldQuit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetAppShouldQuit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods::GetDisplayAvailableFrequencies(::System::IntPtr  ptr, ::ByRef<int32_t>  numFrequencies)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetDisplayAvailableFrequencies",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ptr, numFrequencies);
}
inline bool Unity::XR::Oculus::NativeMethods::SetDisplayFrequency(float_t  refreshRate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetDisplayFrequency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, refreshRate);
}
inline bool Unity::XR::Oculus::NativeMethods::GetDisplayFrequency(::ByRef<float_t>  refreshRate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetDisplayFrequency",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, refreshRate);
}
inline ::Unity::XR::Oculus::SystemHeadset Unity::XR::Oculus::NativeMethods::GetSystemHeadsetType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetSystemHeadsetType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::Oculus::SystemHeadset, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods::GetTiledMultiResSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetTiledMultiResSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::NativeMethods::SetTiledMultiResLevel(int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetTiledMultiResLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, level);
}
inline int32_t Unity::XR::Oculus::NativeMethods::GetTiledMultiResLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetTiledMultiResLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::NativeMethods::SetTiledMultiResDynamic(bool  isDynamic)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetTiledMultiResDynamic",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isDynamic);
}
inline bool Unity::XR::Oculus::NativeMethods::GetEyeTrackedFoveatedRenderingSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetEyeTrackedFoveatedRenderingSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods::GetEyeTrackedFoveatedRenderingEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetEyeTrackedFoveatedRenderingEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::NativeMethods::SetEyeTrackedFoveatedRenderingEnabled(bool  isEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetEyeTrackedFoveatedRenderingEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isEnabled);
}
inline bool Unity::XR::Oculus::NativeMethods::GetShouldRestartSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetShouldRestartSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::NativeMethods::SetupEnvironmentDepth(::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams  createParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetupEnvironmentDepth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, createParams);
}
inline void Unity::XR::Oculus::NativeMethods::SetEnvironmentDepthRendering(bool  isEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetEnvironmentDepthRendering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isEnabled);
}
inline void Unity::XR::Oculus::NativeMethods::ShutdownEnvironmentDepth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "ShutdownEnvironmentDepth",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods::GetEnvironmentDepthTextureId(::ByRef<uint32_t>  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetEnvironmentDepthTextureId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, id);
}
inline ::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc Unity::XR::Oculus::NativeMethods::GetEnvironmentDepthFrameDesc(int32_t  eye)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetEnvironmentDepthFrameDesc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc, false>(nullptr, ___internal_method, eye);
}
inline bool Unity::XR::Oculus::NativeMethods::SetEnvironmentDepthHandRemoval(bool  isEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "SetEnvironmentDepthHandRemoval",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, isEnabled);
}
inline bool Unity::XR::Oculus::NativeMethods::GetEnvironmentDepthSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetEnvironmentDepthSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods::GetEnvironmentDepthHandRemovalSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                        "GetEnvironmentDepthHandRemovalSupported",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::NativeMethods::NativeMethods()   {
}
