#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRBody.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPermissionsRequester_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeletonRenderer_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRBody)
namespace GlobalNamespace {
struct OVRPlugin_BodyJointSet;
}
namespace GlobalNamespace {
struct OVRPlugin_BodyState;
}
namespace GlobalNamespace {
struct OVRPlugin_BodyTrackingCalibrationState;
}
namespace GlobalNamespace {
struct OVRPlugin_BodyTrackingFidelity2;
}
namespace GlobalNamespace {
struct OVRPlugin_Quatf;
}
namespace GlobalNamespace {
struct OVRPlugin_Step;
}
namespace GlobalNamespace {
struct OVRPlugin_Vector3f;
}
namespace GlobalNamespace {
struct OVRSkeletonRenderer_SkeletonRendererData;
}
namespace GlobalNamespace {
struct OVRSkeleton_SkeletonPoseData;
}
namespace GlobalNamespace {
struct OVRSkeleton_SkeletonType;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRBody;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRBody);
// Dependencies OVRPermissionsRequester::Permission, OVRPlugin::BodyJointSet, OVRPlugin::BodyState, OVRSkeleton::IOVRSkeletonDataProvider, OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRBody
class CORDL_TYPE OVRBody : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_BodyState)) ::System::Nullable_1<::GlobalNamespace::OVRPlugin_BodyState>  BodyState;

 __declspec(property(get=get_ProvidedSkeletonType, put=set_ProvidedSkeletonType)) ::GlobalNamespace::OVRPlugin_BodyJointSet  ProvidedSkeletonType;

/// @brief Field _bodyState, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get__bodyState, put=__cordl_internal_set__bodyState)) ::GlobalNamespace::OVRPlugin_BodyState  _bodyState;

/// @brief Field _boneRotations, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__boneRotations, put=__cordl_internal_set__boneRotations)) ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf,::Array<::GlobalNamespace::OVRPlugin_Quatf>*>  _boneRotations;

/// @brief Field _boneTranslations, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__boneTranslations, put=__cordl_internal_set__boneTranslations)) ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f,::Array<::GlobalNamespace::OVRPlugin_Vector3f>*>  _boneTranslations;

/// @brief Field _dataChangedSinceLastQuery, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__dataChangedSinceLastQuery, put=__cordl_internal_set__dataChangedSinceLastQuery)) bool  _dataChangedSinceLastQuery;

/// @brief Field _hasData, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasData, put=__cordl_internal_set__hasData)) bool  _hasData;

/// @brief Field _onPermissionGranted, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__onPermissionGranted, put=__cordl_internal_set__onPermissionGranted)) ::System::Action_1<::StringW>*  _onPermissionGranted;

/// @brief Field _providedSkeletonType, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__providedSkeletonType, put=__cordl_internal_set__providedSkeletonType)) ::GlobalNamespace::OVRPlugin_BodyJointSet  _providedSkeletonType;

/// @brief Field _trackingInstanceCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__trackingInstanceCount, put=setStaticF__trackingInstanceCount)) int32_t  _trackingInstanceCount;

/// @brief Convert operator to "::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider"
constexpr operator  ::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider"
constexpr operator  ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*() noexcept;

/// @brief Method Awake, addr 0x28933ac, size 0x7c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetBodyState, addr 0x2893768, size 0x8c, virtual false, abstract: false, final false
inline void GetBodyState(::GlobalNamespace::OVRPlugin_Step  step) ;

/// @brief Method GetBodyTrackingCalibrationStatus, addr 0x2893a5c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState GetBodyTrackingCalibrationStatus() ;

/// @brief Method GetBodyTrackingFidelityStatus, addr 0x2893a64, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 GetBodyTrackingFidelityStatus() ;

static inline ::GlobalNamespace::OVRBody* New_ctor() ;

/// @brief Method OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData, addr 0x2893cf0, size 0x18, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData() ;

/// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData, addr 0x2893a8c, size 0x264, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRSkeleton_SkeletonPoseData OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData() ;

/// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType, addr 0x2893a6c, size 0x20, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRSkeleton_SkeletonType OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType() ;

/// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.get_enabled, addr 0x2893d9c, size 0x8, virtual true, abstract: false, final true
inline bool OVRSkeleton_IOVRSkeletonDataProvider_get_enabled() ;

/// @brief Method OnDestroy, addr 0x28938dc, size 0xc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x2893854, size 0x88, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x2893428, size 0x16c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPermissionGranted, addr 0x28937f4, size 0x60, virtual false, abstract: false, final false
inline void OnPermissionGranted(::StringW  permissionId) ;

/// @brief Method ResetBodyTrackingCalibration, addr 0x2893a0c, size 0x50, virtual false, abstract: false, final false
static inline bool ResetBodyTrackingCalibration() ;

/// @brief Method SetRequestedJointSet, addr 0x28938f0, size 0xbc, virtual false, abstract: false, final false
static inline bool SetRequestedJointSet(::GlobalNamespace::OVRPlugin_BodyJointSet  jointSet) ;

/// @brief Method StartBodyTracking, addr 0x2893594, size 0x1d4, virtual false, abstract: false, final false
static inline bool StartBodyTracking() ;

/// @brief Method SuggestBodyTrackingCalibrationOverride, addr 0x28939ac, size 0x60, virtual false, abstract: false, final false
static inline bool SuggestBodyTrackingCalibrationOverride(float_t  height) ;

/// @brief Method Update, addr 0x28938e8, size 0x8, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::OVRPlugin_BodyState const& __cordl_internal_get__bodyState() const;

constexpr ::GlobalNamespace::OVRPlugin_BodyState& __cordl_internal_get__bodyState() ;

constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf,::Array<::GlobalNamespace::OVRPlugin_Quatf>*> const& __cordl_internal_get__boneRotations() const;

constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf,::Array<::GlobalNamespace::OVRPlugin_Quatf>*>& __cordl_internal_get__boneRotations() ;

constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f,::Array<::GlobalNamespace::OVRPlugin_Vector3f>*> const& __cordl_internal_get__boneTranslations() const;

constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f,::Array<::GlobalNamespace::OVRPlugin_Vector3f>*>& __cordl_internal_get__boneTranslations() ;

constexpr bool const& __cordl_internal_get__dataChangedSinceLastQuery() const;

constexpr bool& __cordl_internal_get__dataChangedSinceLastQuery() ;

constexpr bool const& __cordl_internal_get__hasData() const;

constexpr bool& __cordl_internal_get__hasData() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get__onPermissionGranted() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get__onPermissionGranted() ;

constexpr ::GlobalNamespace::OVRPlugin_BodyJointSet const& __cordl_internal_get__providedSkeletonType() const;

constexpr ::GlobalNamespace::OVRPlugin_BodyJointSet& __cordl_internal_get__providedSkeletonType() ;

constexpr void __cordl_internal_set__bodyState(::GlobalNamespace::OVRPlugin_BodyState  value) ;

constexpr void __cordl_internal_set__boneRotations(::ArrayW<::GlobalNamespace::OVRPlugin_Quatf,::Array<::GlobalNamespace::OVRPlugin_Quatf>*>  value) ;

constexpr void __cordl_internal_set__boneTranslations(::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f,::Array<::GlobalNamespace::OVRPlugin_Vector3f>*>  value) ;

constexpr void __cordl_internal_set__dataChangedSinceLastQuery(bool  value) ;

constexpr void __cordl_internal_set__hasData(bool  value) ;

constexpr void __cordl_internal_set__onPermissionGranted(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__providedSkeletonType(::GlobalNamespace::OVRPlugin_BodyJointSet  value) ;

/// @brief Method .ctor, addr 0x2893d94, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__trackingInstanceCount() ;

/// @brief Method get_BodyState, addr 0x289331c, size 0x90, virtual false, abstract: false, final false
inline ::System::Nullable_1<::GlobalNamespace::OVRPlugin_BodyState> get_BodyState() ;

/// @brief Method get_Fidelity, addr 0x2893d08, size 0x20, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 get_Fidelity() ;

/// @brief Method get_ProvidedSkeletonType, addr 0x289330c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_BodyJointSet get_ProvidedSkeletonType() ;

/// @brief Convert to "::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider"
constexpr ::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider* i___GlobalNamespace__OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider() noexcept;

/// @brief Convert to "::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider"
constexpr ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* i___GlobalNamespace__OVRSkeleton_IOVRSkeletonDataProvider() noexcept;

static inline void setStaticF__trackingInstanceCount(int32_t  value) ;

/// @brief Method set_Fidelity, addr 0x2893d28, size 0x6c, virtual false, abstract: false, final false
static inline void set_Fidelity(::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2  value) ;

/// @brief Method set_ProvidedSkeletonType, addr 0x2893314, size 0x8, virtual false, abstract: false, final false
inline void set_ProvidedSkeletonType(::GlobalNamespace::OVRPlugin_BodyJointSet  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRBody() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRBody", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRBody(OVRBody && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRBody", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRBody(OVRBody const& ) = delete;

/// @brief Field BodyTrackingPermission value: I32(1)
static ::GlobalNamespace::OVRPermissionsRequester_Permission const BodyTrackingPermission;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6040};

/// @brief Field _bodyState, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::OVRPlugin_BodyState  ____bodyState;

/// @brief Field _boneRotations, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf,::Array<::GlobalNamespace::OVRPlugin_Quatf>*>  ____boneRotations;

/// @brief Field _boneTranslations, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f,::Array<::GlobalNamespace::OVRPlugin_Vector3f>*>  ____boneTranslations;

/// @brief Field _dataChangedSinceLastQuery, offset: 0x58, size: 0x1, def value: None
 bool  ____dataChangedSinceLastQuery;

/// @brief Field _hasData, offset: 0x59, size: 0x1, def value: None
 bool  ____hasData;

/// @brief Field _onPermissionGranted, offset: 0x60, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ____onPermissionGranted;

/// @brief Field _providedSkeletonType, offset: 0x68, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointSet  ____providedSkeletonType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRBody, ____bodyState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBody, ____boneRotations) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBody, ____boneTranslations) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBody, ____dataChangedSinceLastQuery) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBody, ____hasData) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBody, ____onPermissionGranted) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBody, ____providedSkeletonType) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRBody, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRBody);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBody*, "", "OVRBody");
