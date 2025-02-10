#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/NativeMethods.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeMethods)
namespace System {
struct IntPtr;
}
namespace Unity::XR::Oculus {
struct Boundary_BoundaryType;
}
namespace Unity::XR::Oculus {
struct NativeMethods_EnvironmentDepthCreateParamsInternal;
}
namespace Unity::XR::Oculus {
struct NativeMethods_EnvironmentDepthFrameDescInternal;
}
namespace Unity::XR::Oculus {
class NativeMethods_Internal;
}
namespace Unity::XR::Oculus {
struct NativeMethods_UserDefinedSettings;
}
namespace Unity::XR::Oculus {
struct SystemHeadset;
}
namespace Unity::XR::Oculus {
struct Utils_EnvironmentDepthCreateParams;
}
namespace Unity::XR::Oculus {
struct Utils_EnvironmentDepthFrameDesc;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::XR::Oculus {
class NativeMethods;
}
namespace Unity::XR::Oculus {
class NativeMethods_Internal;
}
namespace Unity::XR::Oculus {
struct NativeMethods_EnvironmentDepthCreateParamsInternal;
}
namespace Unity::XR::Oculus {
struct NativeMethods_EnvironmentDepthFrameDescInternal;
}
namespace Unity::XR::Oculus {
struct NativeMethods_UserDefinedSettings;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::NativeMethods);
MARK_REF_PTR_T(::Unity::XR::Oculus::NativeMethods_Internal);
MARK_VAL_T(::Unity::XR::Oculus::NativeMethods_EnvironmentDepthCreateParamsInternal);
MARK_VAL_T(::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal);
MARK_VAL_T(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings);
// Dependencies 
namespace Unity::XR::Oculus {
// Is value type: true
// CS Name: Unity.XR.Oculus.NativeMethods/UserDefinedSettings
struct CORDL_TYPE NativeMethods_UserDefinedSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NativeMethods_UserDefinedSettings() ;

// Ctor Parameters [CppParam { name: "sharedDepthBuffer", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "dashSupport", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "stereoRenderingMode", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "colorSpace", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "lowOverheadMode", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "optimizeBufferDiscards", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "symmetricProjection", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "subsampledLayout", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "lateLatching", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "lateLatchingDebug", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "enableTrackingOriginStageMode", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "spaceWarp", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "depthSubmission", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "foveatedRenderingMethod", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr NativeMethods_UserDefinedSettings(uint16_t  sharedDepthBuffer, uint16_t  dashSupport, uint16_t  stereoRenderingMode, uint16_t  colorSpace, uint16_t  lowOverheadMode, uint16_t  optimizeBufferDiscards, uint16_t  symmetricProjection, uint16_t  subsampledLayout, uint16_t  lateLatching, uint16_t  lateLatchingDebug, uint16_t  enableTrackingOriginStageMode, uint16_t  spaceWarp, uint16_t  depthSubmission, uint16_t  foveatedRenderingMethod) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11374};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field sharedDepthBuffer, offset: 0x0, size: 0x2, def value: None
 uint16_t  sharedDepthBuffer;

/// @brief Field dashSupport, offset: 0x2, size: 0x2, def value: None
 uint16_t  dashSupport;

/// @brief Field stereoRenderingMode, offset: 0x4, size: 0x2, def value: None
 uint16_t  stereoRenderingMode;

/// @brief Field colorSpace, offset: 0x6, size: 0x2, def value: None
 uint16_t  colorSpace;

/// @brief Field lowOverheadMode, offset: 0x8, size: 0x2, def value: None
 uint16_t  lowOverheadMode;

/// @brief Field optimizeBufferDiscards, offset: 0xa, size: 0x2, def value: None
 uint16_t  optimizeBufferDiscards;

/// @brief Field symmetricProjection, offset: 0xc, size: 0x2, def value: None
 uint16_t  symmetricProjection;

/// @brief Field subsampledLayout, offset: 0xe, size: 0x2, def value: None
 uint16_t  subsampledLayout;

/// @brief Field lateLatching, offset: 0x10, size: 0x2, def value: None
 uint16_t  lateLatching;

/// @brief Field lateLatchingDebug, offset: 0x12, size: 0x2, def value: None
 uint16_t  lateLatchingDebug;

/// @brief Field enableTrackingOriginStageMode, offset: 0x14, size: 0x2, def value: None
 uint16_t  enableTrackingOriginStageMode;

/// @brief Field spaceWarp, offset: 0x16, size: 0x2, def value: None
 uint16_t  spaceWarp;

/// @brief Field depthSubmission, offset: 0x18, size: 0x2, def value: None
 uint16_t  depthSubmission;

/// @brief Field foveatedRenderingMethod, offset: 0x1a, size: 0x2, def value: None
 uint16_t  foveatedRenderingMethod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, sharedDepthBuffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, dashSupport) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, stereoRenderingMode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, colorSpace) == 0x6, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, lowOverheadMode) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, optimizeBufferDiscards) == 0xa, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, symmetricProjection) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, subsampledLayout) == 0xe, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, lateLatching) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, lateLatchingDebug) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, enableTrackingOriginStageMode) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, spaceWarp) == 0x16, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, depthSubmission) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, foveatedRenderingMethod) == 0x1a, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, 0x1c>, "Size mismatch!");

} // namespace end def Unity::XR::Oculus
// Dependencies UnityEngine.Vector3, UnityEngine.Vector4
namespace Unity::XR::Oculus {
// Is value type: true
// CS Name: Unity.XR.Oculus.NativeMethods/EnvironmentDepthFrameDescInternal
struct CORDL_TYPE NativeMethods_EnvironmentDepthFrameDescInternal {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NativeMethods_EnvironmentDepthFrameDescInternal() ;

// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "createTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "predictedDisplayTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "swapchainIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "createPoseLocation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "createPoseRotation", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "fovLeftAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fovRightAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fovTopAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fovDownAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "nearZ", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "farZ", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "minDepth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxDepth", ty: "float_t", modifiers: "", def_value: None }]
constexpr NativeMethods_EnvironmentDepthFrameDescInternal(bool  isValid, double_t  createTime, double_t  predictedDisplayTime, int32_t  swapchainIndex, ::UnityEngine::Vector3  createPoseLocation, ::UnityEngine::Vector4  createPoseRotation, float_t  fovLeftAngle, float_t  fovRightAngle, float_t  fovTopAngle, float_t  fovDownAngle, float_t  nearZ, float_t  farZ, float_t  minDepth, float_t  maxDepth) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11375};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field isValid, offset: 0x0, size: 0x1, def value: None
 bool  isValid;

/// @brief Field createTime, offset: 0x8, size: 0x8, def value: None
 double_t  createTime;

/// @brief Field predictedDisplayTime, offset: 0x10, size: 0x8, def value: None
 double_t  predictedDisplayTime;

/// @brief Field swapchainIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  swapchainIndex;

/// @brief Field createPoseLocation, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  createPoseLocation;

/// @brief Field createPoseRotation, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Vector4  createPoseRotation;

/// @brief Field fovLeftAngle, offset: 0x38, size: 0x4, def value: None
 float_t  fovLeftAngle;

/// @brief Field fovRightAngle, offset: 0x3c, size: 0x4, def value: None
 float_t  fovRightAngle;

/// @brief Field fovTopAngle, offset: 0x40, size: 0x4, def value: None
 float_t  fovTopAngle;

/// @brief Field fovDownAngle, offset: 0x44, size: 0x4, def value: None
 float_t  fovDownAngle;

/// @brief Field nearZ, offset: 0x48, size: 0x4, def value: None
 float_t  nearZ;

/// @brief Field farZ, offset: 0x4c, size: 0x4, def value: None
 float_t  farZ;

/// @brief Field minDepth, offset: 0x50, size: 0x4, def value: None
 float_t  minDepth;

/// @brief Field maxDepth, offset: 0x54, size: 0x4, def value: None
 float_t  maxDepth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal, isValid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal, createTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal, predictedDisplayTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal, swapchainIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal, createPoseLocation) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal, createPoseRotation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal, fovLeftAngle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal, fovRightAngle) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal, fovTopAngle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal, fovDownAngle) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal, nearZ) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal, farZ) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal, minDepth) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal, maxDepth) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal, 0x58>, "Size mismatch!");

} // namespace end def Unity::XR::Oculus
// Dependencies 
namespace Unity::XR::Oculus {
// Is value type: true
// CS Name: Unity.XR.Oculus.NativeMethods/EnvironmentDepthCreateParamsInternal
struct CORDL_TYPE NativeMethods_EnvironmentDepthCreateParamsInternal {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NativeMethods_EnvironmentDepthCreateParamsInternal() ;

// Ctor Parameters [CppParam { name: "removeHands", ty: "bool", modifiers: "", def_value: None }]
constexpr NativeMethods_EnvironmentDepthCreateParamsInternal(bool  removeHands) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11376};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field removeHands, offset: 0x0, size: 0x1, def value: None
 bool  removeHands;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_EnvironmentDepthCreateParamsInternal, removeHands) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::NativeMethods_EnvironmentDepthCreateParamsInternal, 0x1>, "Size mismatch!");

} // namespace end def Unity::XR::Oculus
// Dependencies System.Object
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: Unity.XR.Oculus.NativeMethods/Internal
class CORDL_TYPE NativeMethods_Internal : public ::System::Object {
public:
// Declarations
/// @brief Method EnableAppMetrics, addr 0x2f3c868, size 0x7c, virtual false, abstract: false, final false
static inline void EnableAppMetrics(bool  enable) ;

/// @brief Method EnablePerfMetrics, addr 0x2f3c7ec, size 0x7c, virtual false, abstract: false, final false
static inline void EnablePerfMetrics(bool  enable) ;

/// @brief Method GetAppHasInputFocus, addr 0x2f3c968, size 0x70, virtual false, abstract: false, final false
static inline bool GetAppHasInputFocus() ;

/// @brief Method GetAppShouldQuit, addr 0x2f3cc24, size 0x70, virtual false, abstract: false, final false
static inline bool GetAppShouldQuit() ;

/// @brief Method GetBoundaryConfigured, addr 0x2f3c9d8, size 0x70, virtual false, abstract: false, final false
static inline bool GetBoundaryConfigured() ;

/// @brief Method GetBoundaryDimensions, addr 0x2f3ca48, size 0x8c, virtual false, abstract: false, final false
static inline bool GetBoundaryDimensions(::Unity::XR::Oculus::Boundary_BoundaryType  boundaryType, ::ByRef<::UnityEngine::Vector3>  dimensions) ;

/// @brief Method GetBoundaryVisible, addr 0x2f3cad4, size 0x70, virtual false, abstract: false, final false
static inline bool GetBoundaryVisible() ;

/// @brief Method GetDisplayAvailableFrequencies, addr 0x2f3cc94, size 0x8c, virtual false, abstract: false, final false
static inline bool GetDisplayAvailableFrequencies(::System::IntPtr  ptr, ::ByRef<int32_t>  numFrequencies) ;

/// @brief Method GetDisplayFrequency, addr 0x2f3cda4, size 0x84, virtual false, abstract: false, final false
static inline bool GetDisplayFrequency(::ByRef<float_t>  refreshRate) ;

/// @brief Method GetEnvironmentDepthFrameDesc, addr 0x2f3d4a4, size 0x118, virtual false, abstract: false, final false
static inline bool GetEnvironmentDepthFrameDesc(::ByRef<::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal>  frameDesc, int32_t  eye) ;

/// @brief Method GetEnvironmentDepthHandRemovalSupported, addr 0x2f3d6b0, size 0x70, virtual false, abstract: false, final false
static inline bool GetEnvironmentDepthHandRemovalSupported() ;

/// @brief Method GetEnvironmentDepthSupported, addr 0x2f3d640, size 0x70, virtual false, abstract: false, final false
static inline bool GetEnvironmentDepthSupported() ;

/// @brief Method GetEnvironmentDepthTextureId, addr 0x2f3d420, size 0x84, virtual false, abstract: false, final false
static inline bool GetEnvironmentDepthTextureId(::ByRef<uint32_t>  id) ;

/// @brief Method GetEyeTrackedFoveatedRenderingEnabled, addr 0x2f3d0d0, size 0x70, virtual false, abstract: false, final false
static inline bool GetEyeTrackedFoveatedRenderingEnabled() ;

/// @brief Method GetEyeTrackedFoveatedRenderingSupported, addr 0x2f3d060, size 0x70, virtual false, abstract: false, final false
static inline bool GetEyeTrackedFoveatedRenderingSupported() ;

/// @brief Method GetIsSupportedDevice, addr 0x2f3c428, size 0x70, virtual false, abstract: false, final false
static inline bool GetIsSupportedDevice() ;

/// @brief Method GetOVRPVersion, addr 0x2f3c76c, size 0x80, virtual false, abstract: false, final false
static inline void GetOVRPVersion(::ArrayW<uint8_t,::Array<uint8_t>*>  version) ;

/// @brief Method GetShouldRestartSession, addr 0x2f3d220, size 0x70, virtual false, abstract: false, final false
static inline bool GetShouldRestartSession() ;

/// @brief Method GetSystemHeadsetType, addr 0x2f3ce28, size 0x68, virtual false, abstract: false, final false
static inline ::Unity::XR::Oculus::SystemHeadset GetSystemHeadsetType() ;

/// @brief Method GetTiledMultiResLevel, addr 0x2f3cf7c, size 0x68, virtual false, abstract: false, final false
static inline int32_t GetTiledMultiResLevel() ;

/// @brief Method GetTiledMultiResSupported, addr 0x2f3ce90, size 0x70, virtual false, abstract: false, final false
static inline bool GetTiledMultiResSupported() ;

/// @brief Method LoadOVRPlugin, addr 0x2f3c498, size 0x8c, virtual false, abstract: false, final false
static inline bool LoadOVRPlugin(::StringW  ovrpPath) ;

/// @brief Method SetBoundaryVisible, addr 0x2f3cb44, size 0x7c, virtual false, abstract: false, final false
static inline void SetBoundaryVisible(bool  boundaryVisible) ;

/// @brief Method SetCPULevel, addr 0x2f3c674, size 0x7c, virtual false, abstract: false, final false
static inline int32_t SetCPULevel(int32_t  cpuLevel) ;

/// @brief Method SetColorOffset, addr 0x2f3c394, size 0x94, virtual false, abstract: false, final false
static inline void SetColorOffset(float_t  x, float_t  y, float_t  z, float_t  w) ;

/// @brief Method SetColorScale, addr 0x2f3c2fc, size 0x98, virtual false, abstract: false, final false
static inline void SetColorScale(float_t  x, float_t  y, float_t  z, float_t  w) ;

/// @brief Method SetDeveloperModeStrict, addr 0x2f3c8e4, size 0x84, virtual false, abstract: false, final false
static inline bool SetDeveloperModeStrict(bool  active) ;

/// @brief Method SetDisplayFrequency, addr 0x2f3cd20, size 0x84, virtual false, abstract: false, final false
static inline bool SetDisplayFrequency(float_t  refreshRate) ;

/// @brief Method SetEnvironmentDepthHandRemoval, addr 0x2f3d5bc, size 0x84, virtual false, abstract: false, final false
static inline bool SetEnvironmentDepthHandRemoval(bool  isEnabled) ;

/// @brief Method SetEnvironmentDepthRendering, addr 0x2f3d32c, size 0x84, virtual false, abstract: false, final false
static inline bool SetEnvironmentDepthRendering(bool  isEnabled) ;

/// @brief Method SetEyeTrackedFoveatedRenderingEnabled, addr 0x2f3d140, size 0x7c, virtual false, abstract: false, final false
static inline void SetEyeTrackedFoveatedRenderingEnabled(bool  isEnabled) ;

/// @brief Method SetGPULevel, addr 0x2f3c6f0, size 0x7c, virtual false, abstract: false, final false
static inline int32_t SetGPULevel(int32_t  gpuLevel) ;

/// @brief Method SetTiledMultiResDynamic, addr 0x2f3cfe4, size 0x7c, virtual false, abstract: false, final false
static inline void SetTiledMultiResDynamic(bool  isDynamic) ;

/// @brief Method SetTiledMultiResLevel, addr 0x2f3cf00, size 0x7c, virtual false, abstract: false, final false
static inline void SetTiledMultiResLevel(int32_t  level) ;

/// @brief Method SetUserDefinedSettings, addr 0x2f3c5e8, size 0x8c, virtual false, abstract: false, final false
static inline void SetUserDefinedSettings(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings  settings) ;

/// @brief Method SetupEnvironmentDepth, addr 0x2f3d290, size 0x9c, virtual false, abstract: false, final false
static inline bool SetupEnvironmentDepth(::ByRef<::Unity::XR::Oculus::NativeMethods_EnvironmentDepthCreateParamsInternal>  createParams) ;

/// @brief Method ShutdownEnvironmentDepth, addr 0x2f3d3b0, size 0x70, virtual false, abstract: false, final false
static inline bool ShutdownEnvironmentDepth() ;

/// @brief Method UnloadOVRPlugin, addr 0x2f3c584, size 0x64, virtual false, abstract: false, final false
static inline void UnloadOVRPlugin() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeMethods_Internal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeMethods_Internal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeMethods_Internal(NativeMethods_Internal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeMethods_Internal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeMethods_Internal(NativeMethods_Internal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11377};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::NativeMethods_Internal, 0x10>, "Size mismatch!");

} // namespace end def Unity::XR::Oculus
// Dependencies System.Object
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: Unity.XR.Oculus.NativeMethods
class CORDL_TYPE NativeMethods : public ::System::Object {
public:
// Declarations
using EnvironmentDepthCreateParamsInternal = ::Unity::XR::Oculus::NativeMethods_EnvironmentDepthCreateParamsInternal;

using EnvironmentDepthFrameDescInternal = ::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal;

using Internal = ::Unity::XR::Oculus::NativeMethods_Internal;

using UserDefinedSettings = ::Unity::XR::Oculus::NativeMethods_UserDefinedSettings;

/// @brief Method EnableAppMetrics, addr 0x2f3c1ec, size 0x68, virtual false, abstract: false, final false
static inline void EnableAppMetrics(bool  enable) ;

/// @brief Method EnablePerfMetrics, addr 0x2f3be18, size 0x68, virtual false, abstract: false, final false
static inline void EnablePerfMetrics(bool  enable) ;

/// @brief Method GetAppShouldQuit, addr 0x2f3cbc0, size 0x64, virtual false, abstract: false, final false
static inline bool GetAppShouldQuit() ;

/// @brief Method GetBoundaryConfigured, addr 0x2f39420, size 0x64, virtual false, abstract: false, final false
static inline bool GetBoundaryConfigured() ;

/// @brief Method GetBoundaryDimensions, addr 0x2f39488, size 0xc0, virtual false, abstract: false, final false
static inline bool GetBoundaryDimensions(::Unity::XR::Oculus::Boundary_BoundaryType  boundaryType, ::ByRef<::UnityEngine::Vector3>  dimensions) ;

/// @brief Method GetBoundaryVisible, addr 0x2f3954c, size 0x64, virtual false, abstract: false, final false
static inline bool GetBoundaryVisible() ;

/// @brief Method GetDisplayAvailableFrequencies, addr 0x2f3ad04, size 0x80, virtual false, abstract: false, final false
static inline bool GetDisplayAvailableFrequencies(::System::IntPtr  ptr, ::ByRef<int32_t>  numFrequencies) ;

/// @brief Method GetDisplayFrequency, addr 0x2f3ae04, size 0x70, virtual false, abstract: false, final false
static inline bool GetDisplayFrequency(::ByRef<float_t>  refreshRate) ;

/// @brief Method GetEnvironmentDepthFrameDesc, addr 0x2f385d0, size 0x170, virtual false, abstract: false, final false
static inline ::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc GetEnvironmentDepthFrameDesc(int32_t  eye) ;

/// @brief Method GetEnvironmentDepthHandRemovalSupported, addr 0x2f38820, size 0x64, virtual false, abstract: false, final false
static inline bool GetEnvironmentDepthHandRemovalSupported() ;

/// @brief Method GetEnvironmentDepthSupported, addr 0x2f387b8, size 0x64, virtual false, abstract: false, final false
static inline bool GetEnvironmentDepthSupported() ;

/// @brief Method GetEnvironmentDepthTextureId, addr 0x2f38534, size 0x6c, virtual false, abstract: false, final false
static inline bool GetEnvironmentDepthTextureId(::ByRef<uint32_t>  id) ;

/// @brief Method GetEyeTrackedFoveatedRenderingEnabled, addr 0x2f38d28, size 0x64, virtual false, abstract: false, final false
static inline bool GetEyeTrackedFoveatedRenderingEnabled() ;

/// @brief Method GetEyeTrackedFoveatedRenderingSupported, addr 0x2f38ca4, size 0x64, virtual false, abstract: false, final false
static inline bool GetEyeTrackedFoveatedRenderingSupported() ;

/// @brief Method GetHasInputFocus, addr 0x2f39310, size 0x64, virtual false, abstract: false, final false
static inline bool GetHasInputFocus() ;

/// @brief Method GetIsSupportedDevice, addr 0x2f39c3c, size 0x4, virtual false, abstract: false, final false
static inline bool GetIsSupportedDevice() ;

/// @brief Method GetOVRPVersion, addr 0x2f3afc0, size 0x68, virtual false, abstract: false, final false
static inline void GetOVRPVersion(::ArrayW<uint8_t,::Array<uint8_t>*>  version) ;

/// @brief Method GetShouldRestartSession, addr 0x2f3d1bc, size 0x64, virtual false, abstract: false, final false
static inline bool GetShouldRestartSession() ;

/// @brief Method GetSystemHeadsetType, addr 0x2f38140, size 0x64, virtual false, abstract: false, final false
static inline ::Unity::XR::Oculus::SystemHeadset GetSystemHeadsetType() ;

/// @brief Method GetTiledMultiResLevel, addr 0x2f38b58, size 0x64, virtual false, abstract: false, final false
static inline int32_t GetTiledMultiResLevel() ;

/// @brief Method GetTiledMultiResSupported, addr 0x2f38998, size 0x64, virtual false, abstract: false, final false
static inline bool GetTiledMultiResSupported() ;

/// @brief Method LoadOVRPlugin, addr 0x2f3a8c8, size 0x6c, virtual false, abstract: false, final false
static inline bool LoadOVRPlugin(::StringW  ovrpPath) ;

/// @brief Method SetBoundaryVisible, addr 0x2f395b8, size 0x68, virtual false, abstract: false, final false
static inline void SetBoundaryVisible(bool  boundaryVisible) ;

/// @brief Method SetCPULevel, addr 0x2f3aa78, size 0x6c, virtual false, abstract: false, final false
static inline int32_t SetCPULevel(int32_t  cpuLevel) ;

/// @brief Method SetColorOffset, addr 0x2f380a4, size 0x98, virtual false, abstract: false, final false
static inline void SetColorOffset(float_t  x, float_t  y, float_t  z, float_t  w) ;

/// @brief Method SetColorScale, addr 0x2f3800c, size 0x98, virtual false, abstract: false, final false
static inline void SetColorScale(float_t  x, float_t  y, float_t  z, float_t  w) ;

/// @brief Method SetDeveloperModeStrict, addr 0x2f3974c, size 0x6c, virtual false, abstract: false, final false
static inline bool SetDeveloperModeStrict(bool  active) ;

/// @brief Method SetDisplayFrequency, addr 0x2f3ad88, size 0x78, virtual false, abstract: false, final false
static inline bool SetDisplayFrequency(float_t  refreshRate) ;

/// @brief Method SetEnvironmentDepthHandRemoval, addr 0x2f38748, size 0x6c, virtual false, abstract: false, final false
static inline bool SetEnvironmentDepthHandRemoval(bool  isEnabled) ;

/// @brief Method SetEnvironmentDepthRendering, addr 0x2f38464, size 0x68, virtual false, abstract: false, final false
static inline void SetEnvironmentDepthRendering(bool  isEnabled) ;

/// @brief Method SetEyeTrackedFoveatedRenderingEnabled, addr 0x2f388e8, size 0x68, virtual false, abstract: false, final false
static inline void SetEyeTrackedFoveatedRenderingEnabled(bool  isEnabled) ;

/// @brief Method SetGPULevel, addr 0x2f3aafc, size 0x6c, virtual false, abstract: false, final false
static inline int32_t SetGPULevel(int32_t  gpuLevel) ;

/// @brief Method SetTiledMultiResDynamic, addr 0x2f38a78, size 0x68, virtual false, abstract: false, final false
static inline void SetTiledMultiResDynamic(bool  isDynamic) ;

/// @brief Method SetTiledMultiResLevel, addr 0x2f38c38, size 0x68, virtual false, abstract: false, final false
static inline void SetTiledMultiResLevel(int32_t  level) ;

/// @brief Method SetUserDefinedSettings, addr 0x2f3a398, size 0x78, virtual false, abstract: false, final false
static inline void SetUserDefinedSettings(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings  settings) ;

/// @brief Method SetupEnvironmentDepth, addr 0x2f38224, size 0x70, virtual false, abstract: false, final false
static inline void SetupEnvironmentDepth(::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams  createParams) ;

/// @brief Method ShutdownEnvironmentDepth, addr 0x2f384d0, size 0x60, virtual false, abstract: false, final false
static inline void ShutdownEnvironmentDepth() ;

/// @brief Method UnloadOVRPlugin, addr 0x2f3c524, size 0x60, virtual false, abstract: false, final false
static inline void UnloadOVRPlugin() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeMethods() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeMethods", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeMethods(NativeMethods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeMethods", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeMethods(NativeMethods const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11378};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::NativeMethods, 0x10>, "Size mismatch!");

} // namespace end def Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::NativeMethods);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::NativeMethods*, "Unity.XR.Oculus", "NativeMethods");
NEED_NO_BOX(::Unity::XR::Oculus::NativeMethods_Internal);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::NativeMethods_Internal*, "Unity.XR.Oculus", "NativeMethods/Internal");
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::NativeMethods_EnvironmentDepthCreateParamsInternal, "Unity.XR.Oculus", "NativeMethods/EnvironmentDepthCreateParamsInternal");
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::NativeMethods_EnvironmentDepthFrameDescInternal, "Unity.XR.Oculus", "NativeMethods/EnvironmentDepthFrameDescInternal");
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, "Unity.XR.Oculus", "NativeMethods/UserDefinedSettings");
