#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/Utils.hpp"
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
CORDL_MODULE_EXPORT(Utils)
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
struct Vector4;
}
// Forward declare root types
namespace Unity::XR::Oculus {
class Utils;
}
namespace Unity::XR::Oculus {
struct Utils_EnvironmentDepthCreateParams;
}
namespace Unity::XR::Oculus {
struct Utils_EnvironmentDepthFrameDesc;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::Utils);
MARK_VAL_T(::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams);
MARK_VAL_T(::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc);
// Dependencies UnityEngine.Vector3, UnityEngine.Vector4
namespace Unity::XR::Oculus {
// Is value type: true
// CS Name: Unity.XR.Oculus.Utils/EnvironmentDepthFrameDesc
struct CORDL_TYPE Utils_EnvironmentDepthFrameDesc {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Utils_EnvironmentDepthFrameDesc() ;

// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "createTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "predictedDisplayTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "swapchainIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "createPoseLocation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "createPoseRotation", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "fovLeftAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fovRightAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fovTopAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fovDownAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "nearZ", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "farZ", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "minDepth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxDepth", ty: "float_t", modifiers: "", def_value: None }]
constexpr Utils_EnvironmentDepthFrameDesc(bool  isValid, double_t  createTime, double_t  predictedDisplayTime, int32_t  swapchainIndex, ::UnityEngine::Vector3  createPoseLocation, ::UnityEngine::Vector4  createPoseRotation, float_t  fovLeftAngle, float_t  fovRightAngle, float_t  fovTopAngle, float_t  fovDownAngle, float_t  nearZ, float_t  farZ, float_t  minDepth, float_t  maxDepth) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11356};

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
static_assert(offsetof(::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc, isValid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc, createTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc, predictedDisplayTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc, swapchainIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc, createPoseLocation) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc, createPoseRotation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc, fovLeftAngle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc, fovRightAngle) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc, fovTopAngle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc, fovDownAngle) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc, nearZ) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc, farZ) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc, minDepth) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc, maxDepth) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc, 0x58>, "Size mismatch!");

} // namespace end def Unity::XR::Oculus
// Dependencies 
namespace Unity::XR::Oculus {
// Is value type: true
// CS Name: Unity.XR.Oculus.Utils/EnvironmentDepthCreateParams
struct CORDL_TYPE Utils_EnvironmentDepthCreateParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Utils_EnvironmentDepthCreateParams() ;

// Ctor Parameters [CppParam { name: "removeHands", ty: "bool", modifiers: "", def_value: None }]
constexpr Utils_EnvironmentDepthCreateParams(bool  removeHands) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11357};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field removeHands, offset: 0x0, size: 0x1, def value: None
 bool  removeHands;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams, removeHands) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams, 0x1>, "Size mismatch!");

} // namespace end def Unity::XR::Oculus
// Dependencies System.Object, Unity.XR.Oculus.Utils::EnvironmentDepthCreateParams
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: Unity.XR.Oculus.Utils
class CORDL_TYPE Utils : public ::System::Object {
public:
// Declarations
using EnvironmentDepthCreateParams = ::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams;

using EnvironmentDepthFrameDesc = ::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc;

/// @brief Field s_EnvironmentDepthCreateParams, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_EnvironmentDepthCreateParams, put=setStaticF_s_EnvironmentDepthCreateParams)) ::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams  s_EnvironmentDepthCreateParams;

/// @brief Method EnableDynamicFFR, addr 0x2f38f20, size 0x8c, virtual false, abstract: false, final false
static inline bool EnableDynamicFFR(bool  enable) ;

/// @brief Method GetEnvironmentDepthFrameDesc, addr 0x2f385a0, size 0x30, virtual false, abstract: false, final false
static inline ::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc GetEnvironmentDepthFrameDesc(int32_t  eye) ;

/// @brief Method GetEnvironmentDepthHandRemovalSupported, addr 0x2f3881c, size 0x4, virtual false, abstract: false, final false
static inline bool GetEnvironmentDepthHandRemovalSupported() ;

/// @brief Method GetEnvironmentDepthSupported, addr 0x2f387b4, size 0x4, virtual false, abstract: false, final false
static inline bool GetEnvironmentDepthSupported() ;

/// @brief Method GetEnvironmentDepthTextureId, addr 0x2f38530, size 0x4, virtual false, abstract: false, final false
static inline bool GetEnvironmentDepthTextureId(::ByRef<uint32_t>  id) ;

/// @brief Method GetFoveationLevel, addr 0x2f38fac, size 0x78, virtual false, abstract: false, final false
static inline int32_t GetFoveationLevel() ;

/// @brief Method GetSystemHeadsetType, addr 0x2f3813c, size 0x4, virtual false, abstract: false, final false
static inline ::Unity::XR::Oculus::SystemHeadset GetSystemHeadsetType() ;

/// @brief Method IsEyeTrackingPermissionGranted, addr 0x2f38950, size 0x44, virtual false, abstract: false, final false
static inline bool IsEyeTrackingPermissionGranted() ;

/// @brief Method IsScenePermissionGranted, addr 0x2f38294, size 0x44, virtual false, abstract: false, final false
static inline bool IsScenePermissionGranted() ;

/// @brief Method PermissionGrantedCallback, addr 0x2f38884, size 0x64, virtual false, abstract: false, final false
static inline void PermissionGrantedCallback(::StringW  permissionName) ;

/// @brief Method ScenePermissionGrantedCallback, addr 0x2f381a4, size 0x80, virtual false, abstract: false, final false
static inline void ScenePermissionGrantedCallback(::StringW  permissionName) ;

/// @brief Method SetColorScaleAndOffset, addr 0x2f37fcc, size 0x40, virtual false, abstract: false, final false
static inline void SetColorScaleAndOffset(::UnityEngine::Vector4  colorScale, ::UnityEngine::Vector4  colorOffset) ;

/// @brief Method SetEnvironmentDepthHandRemoval, addr 0x2f38740, size 0x8, virtual false, abstract: false, final false
static inline bool SetEnvironmentDepthHandRemoval(bool  isEnabled) ;

/// @brief Method SetEnvironmentDepthRendering, addr 0x2f383e0, size 0x84, virtual false, abstract: false, final false
static inline void SetEnvironmentDepthRendering(bool  isEnabled) ;

/// @brief Method SetFoveationLevel, addr 0x2f38e94, size 0x8c, virtual false, abstract: false, final false
static inline bool SetFoveationLevel(int32_t  level) ;

/// @brief Method SetupEnvironmentDepth, addr 0x2f382d8, size 0x108, virtual false, abstract: false, final false
static inline void SetupEnvironmentDepth(::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams  createParams) ;

/// @brief Method ShutdownEnvironmentDepth, addr 0x2f384cc, size 0x4, virtual false, abstract: false, final false
static inline void ShutdownEnvironmentDepth() ;

static inline ::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams getStaticF_s_EnvironmentDepthCreateParams() ;

/// @brief Method get_eyeTrackedFoveatedRenderingEnabled, addr 0x2f38d08, size 0x20, virtual false, abstract: false, final false
static inline bool get_eyeTrackedFoveatedRenderingEnabled() ;

/// @brief Method get_eyeTrackedFoveatedRenderingSupported, addr 0x2f38ca0, size 0x4, virtual false, abstract: false, final false
static inline bool get_eyeTrackedFoveatedRenderingSupported() ;

/// @brief Method get_foveatedRenderingLevel, addr 0x2f38ae0, size 0x78, virtual false, abstract: false, final false
static inline int32_t get_foveatedRenderingLevel() ;

/// @brief Method get_useDynamicFoveatedRendering, addr 0x2f38994, size 0x4, virtual false, abstract: false, final false
static inline bool get_useDynamicFoveatedRendering() ;

static inline void setStaticF_s_EnvironmentDepthCreateParams(::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams  value) ;

/// @brief Method set_eyeTrackedFoveatedRenderingEnabled, addr 0x2f38d8c, size 0x108, virtual false, abstract: false, final false
static inline void set_eyeTrackedFoveatedRenderingEnabled(bool  value) ;

/// @brief Method set_foveatedRenderingLevel, addr 0x2f38bbc, size 0x7c, virtual false, abstract: false, final false
static inline void set_foveatedRenderingLevel(int32_t  value) ;

/// @brief Method set_useDynamicFoveatedRendering, addr 0x2f389fc, size 0x7c, virtual false, abstract: false, final false
static inline void set_useDynamicFoveatedRendering(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Utils(Utils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utils(Utils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11358};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Utils, 0x10>, "Size mismatch!");

} // namespace end def Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::Utils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Utils*, "Unity.XR.Oculus", "Utils");
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Utils_EnvironmentDepthCreateParams, "Unity.XR.Oculus", "Utils/EnvironmentDepthCreateParams");
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Utils_EnvironmentDepthFrameDesc, "Unity.XR.Oculus", "Utils/EnvironmentDepthFrameDesc");
