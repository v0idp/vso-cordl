#pragma once
// IWYU pragma private; include "VROSC/GrabbableCamera.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(GrabbableCamera)
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class SpectatorCameraAnchor;
}
namespace VROSC {
class SpectatorCameraController;
}
namespace VROSC {
class TransformMover;
}
namespace VROSC {
class UserDataControllers;
}
// Forward declare root types
namespace VROSC {
class GrabbableCamera;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::GrabbableCamera);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.GrabbableCamera
class CORDL_TYPE GrabbableCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _anchor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__anchor, put=__cordl_internal_set__anchor)) ::UnityW<::VROSC::SpectatorCameraAnchor>  _anchor;

/// @brief Field _cameraMushroom, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraMushroom, put=__cordl_internal_set__cameraMushroom)) ::UnityW<::UnityEngine::GameObject>  _cameraMushroom;

/// @brief Field _isActive, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__isActive, put=__cordl_internal_set__isActive)) bool  _isActive;

/// @brief Field _isCreating, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__isCreating, put=__cordl_internal_set__isCreating)) bool  _isCreating;

/// @brief Field _spectatorCameraController, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__spectatorCameraController, put=__cordl_internal_set__spectatorCameraController)) ::UnityW<::VROSC::SpectatorCameraController>  _spectatorCameraController;

/// @brief Field _startOffset, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get__startOffset, put=__cordl_internal_set__startOffset)) ::UnityEngine::Vector3  _startOffset;

/// @brief Field _startRotation, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get__startRotation, put=__cordl_internal_set__startRotation)) ::UnityEngine::Vector3  _startRotation;

/// @brief Field _transformMover, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformMover, put=__cordl_internal_set__transformMover)) ::UnityW<::VROSC::TransformMover>  _transformMover;

/// @brief Method AnchorActivated, addr 0x172ccc4, size 0x20c, virtual false, abstract: false, final false
inline void AnchorActivated(bool  active) ;

/// @brief Method Awake, addr 0x172c488, size 0x2f0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreatingStarted, addr 0x172cc94, size 0x30, virtual false, abstract: false, final false
inline void CreatingStarted() ;

static inline ::VROSC::GrabbableCamera* New_ctor() ;

/// @brief Method OnDestroy, addr 0x172c778, size 0x2e0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ResetPosition, addr 0x172ca58, size 0x214, virtual false, abstract: false, final false
inline void ResetPosition() ;

/// @brief Method SaveTransformData, addr 0x172cf98, size 0x6c, virtual false, abstract: false, final false
inline void SaveTransformData(::VROSC::TransformMover*  transformMover) ;

/// @brief Method UserDataLoaded, addr 0x172d004, size 0x28, virtual false, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

constexpr ::UnityW<::VROSC::SpectatorCameraAnchor> const& __cordl_internal_get__anchor() const;

constexpr ::UnityW<::VROSC::SpectatorCameraAnchor>& __cordl_internal_get__anchor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__cameraMushroom() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__cameraMushroom() ;

constexpr bool const& __cordl_internal_get__isActive() const;

constexpr bool& __cordl_internal_get__isActive() ;

constexpr bool const& __cordl_internal_get__isCreating() const;

constexpr bool& __cordl_internal_get__isCreating() ;

constexpr ::UnityW<::VROSC::SpectatorCameraController> const& __cordl_internal_get__spectatorCameraController() const;

constexpr ::UnityW<::VROSC::SpectatorCameraController>& __cordl_internal_get__spectatorCameraController() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startRotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startRotation() ;

constexpr ::UnityW<::VROSC::TransformMover> const& __cordl_internal_get__transformMover() const;

constexpr ::UnityW<::VROSC::TransformMover>& __cordl_internal_get__transformMover() ;

constexpr void __cordl_internal_set__anchor(::UnityW<::VROSC::SpectatorCameraAnchor>  value) ;

constexpr void __cordl_internal_set__cameraMushroom(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__isActive(bool  value) ;

constexpr void __cordl_internal_set__isCreating(bool  value) ;

constexpr void __cordl_internal_set__spectatorCameraController(::UnityW<::VROSC::SpectatorCameraController>  value) ;

constexpr void __cordl_internal_set__startOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__startRotation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__transformMover(::UnityW<::VROSC::TransformMover>  value) ;

/// @brief Method .ctor, addr 0x172d0f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabbableCamera() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabbableCamera", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabbableCamera(GrabbableCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabbableCamera", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabbableCamera(GrabbableCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1054};

/// @brief Field _anchor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::SpectatorCameraAnchor>  ____anchor;

/// @brief Field _spectatorCameraController, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::SpectatorCameraController>  ____spectatorCameraController;

/// @brief Field _transformMover, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::TransformMover>  ____transformMover;

/// @brief Field _cameraMushroom, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____cameraMushroom;

/// @brief Field _startOffset, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startOffset;

/// @brief Field _startRotation, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startRotation;

/// @brief Field _isActive, offset: 0x58, size: 0x1, def value: None
 bool  ____isActive;

/// @brief Field _isCreating, offset: 0x59, size: 0x1, def value: None
 bool  ____isCreating;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GrabbableCamera, ____anchor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbableCamera, ____spectatorCameraController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbableCamera, ____transformMover) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbableCamera, ____cameraMushroom) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbableCamera, ____startOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbableCamera, ____startRotation) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbableCamera, ____isActive) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::GrabbableCamera, ____isCreating) == 0x59, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GrabbableCamera, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::GrabbableCamera);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GrabbableCamera*, "VROSC", "GrabbableCamera");
