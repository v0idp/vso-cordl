#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OVRExtensions)
namespace GlobalNamespace {
template<typename T>
struct OVREnumerable_1;
}
namespace GlobalNamespace {
struct OVRPlugin_Colorf;
}
namespace GlobalNamespace {
struct OVRPlugin_Frustumf;
}
namespace GlobalNamespace {
struct OVRPlugin_Posef;
}
namespace GlobalNamespace {
struct OVRPlugin_Quatf;
}
namespace GlobalNamespace {
struct OVRPlugin_Size3f;
}
namespace GlobalNamespace {
struct OVRPlugin_Sizef;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceStorageLocation;
}
namespace GlobalNamespace {
struct OVRPlugin_Vector2f;
}
namespace GlobalNamespace {
struct OVRPlugin_Vector3f;
}
namespace GlobalNamespace {
struct OVRPlugin_Vector4f;
}
namespace GlobalNamespace {
struct OVRPose;
}
namespace GlobalNamespace {
struct OVRSpace_StorageLocation;
}
namespace GlobalNamespace {
struct OVRTracker_Frustum;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRExtensions);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRExtensions
class CORDL_TYPE OVRExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToHMDMatrix34, addr 0x2897798, size 0x158, virtual false, abstract: false, final false
static inline ::OVR::OpenVR::HmdMatrix34_t ConvertToHMDMatrix34(::UnityEngine::Matrix4x4  m) ;

/// @brief Method CopyFrom, addr 0x2897bfc, size 0x200, virtual false, abstract: false, final false
static inline void CopyFrom(::UnityEngine::Gradient*  gradient, ::UnityEngine::Gradient*  otherGradient) ;

/// @brief Method Equals, addr 0x28979e8, size 0x214, virtual false, abstract: false, final false
static inline bool Equals(::UnityEngine::Gradient*  gradient, ::UnityEngine::Gradient*  otherGradient) ;

/// @brief Method FindChildRecursive, addr 0x28978f0, size 0xf8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> FindChildRecursive(::UnityEngine::Transform*  parent, ::StringW  name) ;

/// @brief Method FromColorf, addr 0x289774c, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Color FromColorf(::GlobalNamespace::OVRPlugin_Colorf  c) ;

/// @brief Method FromFlippedXQuatf, addr 0x289777c, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion FromFlippedXQuatf(::GlobalNamespace::OVRPlugin_Quatf  q) ;

/// @brief Method FromFlippedXVector2f, addr 0x2890620, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 FromFlippedXVector2f(::GlobalNamespace::OVRPlugin_Vector2f  v) ;

/// @brief Method FromFlippedXVector3f, addr 0x2890fa8, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 FromFlippedXVector3f(::GlobalNamespace::OVRPlugin_Vector3f  v) ;

/// @brief Method FromFlippedZQuatf, addr 0x288e5d8, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion FromFlippedZQuatf(::GlobalNamespace::OVRPlugin_Quatf  q) ;

/// @brief Method FromFlippedZVector3f, addr 0x288e328, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 FromFlippedZVector3f(::GlobalNamespace::OVRPlugin_Vector3f  v) ;

/// @brief Method FromOVRPose, addr 0x288c404, size 0x68, virtual false, abstract: false, final false
static inline void FromOVRPose(::UnityEngine::Transform*  t, ::GlobalNamespace::OVRPose  pose, bool  isLocal) ;

/// @brief Method FromQuatf, addr 0x2897778, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion FromQuatf(::GlobalNamespace::OVRPlugin_Quatf  q) ;

/// @brief Method FromSize3f, addr 0x2890fa4, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 FromSize3f(::GlobalNamespace::OVRPlugin_Size3f  v) ;

/// @brief Method FromSizef, addr 0x289061c, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 FromSizef(::GlobalNamespace::OVRPlugin_Sizef  v) ;

/// @brief Method FromVector2f, addr 0x2897758, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 FromVector2f(::GlobalNamespace::OVRPlugin_Vector2f  v) ;

/// @brief Method FromVector3f, addr 0x2894070, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 FromVector3f(::GlobalNamespace::OVRPlugin_Vector3f  v) ;

/// @brief Method FromVector4f, addr 0x2897770, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 FromVector4f(::GlobalNamespace::OVRPlugin_Vector4f  v) ;

/// @brief Method ToColorf, addr 0x2897750, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Colorf ToColorf(::UnityEngine::Color  c) ;

/// @brief Method ToFlippedXQuatf, addr 0x289778c, size 0xc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Quatf ToFlippedXQuatf(::UnityEngine::Quaternion  q) ;

/// @brief Method ToFlippedXVector3f, addr 0x2897768, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Vector3f ToFlippedXVector3f(::UnityEngine::Vector3  v) ;

/// @brief Method ToFlippedZQuatf, addr 0x288d234, size 0xc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Quatf ToFlippedZQuatf(::UnityEngine::Quaternion  q) ;

/// @brief Method ToFlippedZVector3f, addr 0x288d240, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Vector3f ToFlippedZVector3f(::UnityEngine::Vector3  v) ;

/// @brief Method ToFrustum, addr 0x2897738, size 0x14, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTracker_Frustum ToFrustum(::GlobalNamespace::OVRPlugin_Frustumf  f) ;

/// @brief Method ToHeadSpacePose, addr 0x289759c, size 0x120, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPose ToHeadSpacePose(::GlobalNamespace::OVRPose  trackingSpacePose) ;

/// @brief Method ToHeadSpacePose, addr 0x2897388, size 0x1c4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPose ToHeadSpacePose(::UnityEngine::Transform*  transform, ::UnityEngine::Camera*  camera) ;

/// @brief Method ToNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Unity::Collections::NativeArray_1<T> ToNativeArray(::System::Collections::Generic::IEnumerable_1<T>*  enumerable, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method ToNonAlloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::GlobalNamespace::OVREnumerable_1<T> ToNonAlloc(::System::Collections::Generic::IEnumerable_1<T>*  enumerable) ;

/// @brief Method ToOVRPose, addr 0x2888af0, size 0x28, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPose ToOVRPose(::GlobalNamespace::OVRPlugin_Posef  p) ;

/// @brief Method ToOVRPose, addr 0x28976bc, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPose ToOVRPose(::UnityEngine::Transform*  t, bool  isLocal) ;

/// @brief Method ToQuatf, addr 0x2897788, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Quatf ToQuatf(::UnityEngine::Quaternion  q) ;

/// @brief Method ToSize3f, addr 0x2897760, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Size3f ToSize3f(::UnityEngine::Vector3  v) ;

/// @brief Method ToSizef, addr 0x2897754, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Sizef ToSizef(::UnityEngine::Vector2  v) ;

/// @brief Method ToSpaceStorageLocation, addr 0x2897dfc, size 0xac, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_SpaceStorageLocation ToSpaceStorageLocation(::GlobalNamespace::OVRSpace_StorageLocation  storageLocation) ;

/// @brief Method ToTrackingSpacePose, addr 0x288d3d8, size 0x12c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPose ToTrackingSpacePose(::UnityEngine::Transform*  transform, ::UnityEngine::Camera*  camera) ;

/// @brief Method ToVector2f, addr 0x289775c, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Vector2f ToVector2f(::UnityEngine::Vector2  v) ;

/// @brief Method ToVector3f, addr 0x2897764, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Vector3f ToVector3f(::UnityEngine::Vector3  v) ;

/// @brief Method ToVector4f, addr 0x2897774, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Vector4f ToVector4f(::UnityEngine::Vector4  v) ;

/// @brief Method ToWorldSpacePose, addr 0x289754c, size 0x50, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPose ToWorldSpacePose(::GlobalNamespace::OVRPose  trackingSpacePose) ;

/// @brief Method ToWorldSpacePose, addr 0x2888944, size 0x1ac, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPose ToWorldSpacePose(::GlobalNamespace::OVRPose  trackingSpacePose, ::UnityEngine::Camera*  mainCamera) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRExtensions(OVRExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRExtensions(OVRExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6046};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRExtensions, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRExtensions*, "", "OVRExtensions");
