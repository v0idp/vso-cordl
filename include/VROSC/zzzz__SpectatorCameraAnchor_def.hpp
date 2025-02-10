#pragma once
// IWYU pragma private; include "VROSC/SpectatorCameraAnchor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpectatorCameraAnchor)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class VRPlayer;
}
// Forward declare root types
namespace VROSC {
class SpectatorCameraAnchor;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SpectatorCameraAnchor);
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SpectatorCameraAnchor
class CORDL_TYPE SpectatorCameraAnchor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active)) bool  Active;

 __declspec(property(get=get_CameraLayerMask, put=set_CameraLayerMask)) ::UnityEngine::LayerMask  CameraLayerMask;

 __declspec(property(get=get_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_FoV)) float_t  FoV;

 __declspec(property(get=get_IsFollowing)) bool  IsFollowing;

/// @brief Field OnAnchorActivated, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnAnchorActivated, put=__cordl_internal_set_OnAnchorActivated)) ::System::Action_1<bool>*  OnAnchorActivated;

/// @brief Field _active, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get__active, put=__cordl_internal_set__active)) bool  _active;

/// @brief Field _cameraLayerMask, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__cameraLayerMask, put=__cordl_internal_set__cameraLayerMask)) ::UnityEngine::LayerMask  _cameraLayerMask;

/// @brief Field _displayName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__displayName, put=__cordl_internal_set__displayName)) ::StringW  _displayName;

/// @brief Field _followPlayer, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__followPlayer, put=__cordl_internal_set__followPlayer)) bool  _followPlayer;

/// @brief Field _followPosition, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__followPosition, put=__cordl_internal_set__followPosition)) bool  _followPosition;

/// @brief Field _followRotation, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get__followRotation, put=__cordl_internal_set__followRotation)) bool  _followRotation;

/// @brief Field _fov, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__fov, put=__cordl_internal_set__fov)) float_t  _fov;

/// @brief Field _lookAtTarget, offset 0x33, size 0x1 
 __declspec(property(get=__cordl_internal_get__lookAtTarget, put=__cordl_internal_set__lookAtTarget)) bool  _lookAtTarget;

/// @brief Field _offsetToTarget, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get__offsetToTarget, put=__cordl_internal_set__offsetToTarget)) ::UnityEngine::Vector3  _offsetToTarget;

/// @brief Field _targetTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetTransform, put=__cordl_internal_set__targetTransform)) ::UnityW<::UnityEngine::Transform>  _targetTransform;

/// @brief Field _xOffsetLocal, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__xOffsetLocal, put=__cordl_internal_set__xOffsetLocal)) bool  _xOffsetLocal;

/// @brief Field _yOffsetLocal, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__yOffsetLocal, put=__cordl_internal_set__yOffsetLocal)) bool  _yOffsetLocal;

/// @brief Field _zOffsetLocal, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get__zOffsetLocal, put=__cordl_internal_set__zOffsetLocal)) bool  _zOffsetLocal;

/// @brief Method ApplyDefaultLayerMask, addr 0x172d8f0, size 0x30, virtual false, abstract: false, final false
inline void ApplyDefaultLayerMask(::UnityEngine::Camera*  spectatorCamera) ;

static inline ::VROSC::SpectatorCameraAnchor* New_ctor() ;

/// @brief Method OnValidate, addr 0x172d4c4, size 0x88, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PlayerInitialized, addr 0x172d498, size 0x2c, virtual false, abstract: false, final false
inline void PlayerInitialized(::VROSC::VRPlayer*  vrPlayer) ;

/// @brief Method SetActive, addr 0x172d7c8, size 0x128, virtual false, abstract: false, final false
inline void SetActive(bool  active, ::UnityEngine::Camera*  spectatorCamera, bool  hideBackground) ;

/// @brief Method Start, addr 0x172d330, size 0x168, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x172d54c, size 0x27c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnAnchorActivated() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnAnchorActivated() ;

constexpr bool const& __cordl_internal_get__active() const;

constexpr bool& __cordl_internal_get__active() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__cameraLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__cameraLayerMask() ;

constexpr ::StringW const& __cordl_internal_get__displayName() const;

constexpr ::StringW& __cordl_internal_get__displayName() ;

constexpr bool const& __cordl_internal_get__followPlayer() const;

constexpr bool& __cordl_internal_get__followPlayer() ;

constexpr bool const& __cordl_internal_get__followPosition() const;

constexpr bool& __cordl_internal_get__followPosition() ;

constexpr bool const& __cordl_internal_get__followRotation() const;

constexpr bool& __cordl_internal_get__followRotation() ;

constexpr float_t const& __cordl_internal_get__fov() const;

constexpr float_t& __cordl_internal_get__fov() ;

constexpr bool const& __cordl_internal_get__lookAtTarget() const;

constexpr bool& __cordl_internal_get__lookAtTarget() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__offsetToTarget() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__offsetToTarget() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__targetTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__targetTransform() ;

constexpr bool const& __cordl_internal_get__xOffsetLocal() const;

constexpr bool& __cordl_internal_get__xOffsetLocal() ;

constexpr bool const& __cordl_internal_get__yOffsetLocal() const;

constexpr bool& __cordl_internal_get__yOffsetLocal() ;

constexpr bool const& __cordl_internal_get__zOffsetLocal() const;

constexpr bool& __cordl_internal_get__zOffsetLocal() ;

constexpr void __cordl_internal_set_OnAnchorActivated(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set__active(bool  value) ;

constexpr void __cordl_internal_set__cameraLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__displayName(::StringW  value) ;

constexpr void __cordl_internal_set__followPlayer(bool  value) ;

constexpr void __cordl_internal_set__followPosition(bool  value) ;

constexpr void __cordl_internal_set__followRotation(bool  value) ;

constexpr void __cordl_internal_set__fov(float_t  value) ;

constexpr void __cordl_internal_set__lookAtTarget(bool  value) ;

constexpr void __cordl_internal_set__offsetToTarget(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__targetTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__xOffsetLocal(bool  value) ;

constexpr void __cordl_internal_set__yOffsetLocal(bool  value) ;

constexpr void __cordl_internal_set__zOffsetLocal(bool  value) ;

/// @brief Method .ctor, addr 0x172d920, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0x172d328, size 0x8, virtual false, abstract: false, final false
inline bool get_Active() ;

/// @brief Method get_CameraLayerMask, addr 0x172d310, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_CameraLayerMask() ;

/// @brief Method get_DisplayName, addr 0x172d28c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_FoV, addr 0x172d320, size 0x8, virtual false, abstract: false, final false
inline float_t get_FoV() ;

/// @brief Method get_IsFollowing, addr 0x172d294, size 0x7c, virtual false, abstract: false, final false
inline bool get_IsFollowing() ;

/// @brief Method set_CameraLayerMask, addr 0x172d318, size 0x8, virtual false, abstract: false, final false
inline void set_CameraLayerMask(::UnityEngine::LayerMask  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpectatorCameraAnchor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpectatorCameraAnchor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpectatorCameraAnchor(SpectatorCameraAnchor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpectatorCameraAnchor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpectatorCameraAnchor(SpectatorCameraAnchor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1056};

/// @brief Field _displayName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____displayName;

/// @brief Field _targetTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____targetTransform;

/// @brief Field _followPlayer, offset: 0x30, size: 0x1, def value: None
 bool  ____followPlayer;

/// @brief Field _followPosition, offset: 0x31, size: 0x1, def value: None
 bool  ____followPosition;

/// @brief Field _followRotation, offset: 0x32, size: 0x1, def value: None
 bool  ____followRotation;

/// @brief Field _lookAtTarget, offset: 0x33, size: 0x1, def value: None
 bool  ____lookAtTarget;

/// @brief Field _offsetToTarget, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____offsetToTarget;

/// @brief Field _xOffsetLocal, offset: 0x40, size: 0x1, def value: None
 bool  ____xOffsetLocal;

/// @brief Field _yOffsetLocal, offset: 0x41, size: 0x1, def value: None
 bool  ____yOffsetLocal;

/// @brief Field _zOffsetLocal, offset: 0x42, size: 0x1, def value: None
 bool  ____zOffsetLocal;

/// @brief Field _cameraLayerMask, offset: 0x44, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____cameraLayerMask;

/// @brief Field _fov, offset: 0x48, size: 0x4, def value: None
 float_t  ____fov;

/// @brief Field _active, offset: 0x4c, size: 0x1, def value: None
 bool  ____active;

/// @brief Field OnAnchorActivated, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnAnchorActivated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SpectatorCameraAnchor, ____displayName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraAnchor, ____targetTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraAnchor, ____followPlayer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraAnchor, ____followPosition) == 0x31, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraAnchor, ____followRotation) == 0x32, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraAnchor, ____lookAtTarget) == 0x33, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraAnchor, ____offsetToTarget) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraAnchor, ____xOffsetLocal) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraAnchor, ____yOffsetLocal) == 0x41, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraAnchor, ____zOffsetLocal) == 0x42, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraAnchor, ____cameraLayerMask) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraAnchor, ____fov) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraAnchor, ____active) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraAnchor, ___OnAnchorActivated) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SpectatorCameraAnchor, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SpectatorCameraAnchor);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SpectatorCameraAnchor*, "VROSC", "SpectatorCameraAnchor");
