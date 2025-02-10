#pragma once
// IWYU pragma private; include "VROSC/SpectatorCameraController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SpectatorCameraController)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct LayerMask;
}
namespace VROSC {
class CopyCameraOutputToRenderTexture;
}
namespace VROSC {
class RenderLIV;
}
namespace VROSC {
class SpectatorCameraAnchor;
}
// Forward declare root types
namespace VROSC {
class SpectatorCameraController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SpectatorCameraController);
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SpectatorCameraController
class CORDL_TYPE SpectatorCameraController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ActiveAnchor)) ::UnityW<::VROSC::SpectatorCameraAnchor>  ActiveAnchor;

 __declspec(property(get=get_ActiveIndex)) int32_t  ActiveIndex;

 __declspec(property(get=get_Camera)) ::UnityW<::UnityEngine::Camera>  Camera;

/// @brief Field <EnvironmentMask>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EnvironmentMask_k__BackingField, put=setStaticF__EnvironmentMask_k__BackingField)) ::UnityEngine::LayerMask  _EnvironmentMask_k__BackingField;

/// @brief Field <PlayerMask>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PlayerMask_k__BackingField, put=setStaticF__PlayerMask_k__BackingField)) ::UnityEngine::LayerMask  _PlayerMask_k__BackingField;

/// @brief Field _activeIndex, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__activeIndex, put=__cordl_internal_set__activeIndex)) int32_t  _activeIndex;

/// @brief Field _cameraAnchors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraAnchors, put=__cordl_internal_set__cameraAnchors)) ::ArrayW<::UnityW<::VROSC::SpectatorCameraAnchor>,::Array<::UnityW<::VROSC::SpectatorCameraAnchor>>*>  _cameraAnchors;

/// @brief Field _enabled, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get__enabled, put=__cordl_internal_set__enabled)) bool  _enabled;

/// @brief Field _followSmoothDuration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__followSmoothDuration, put=__cordl_internal_set__followSmoothDuration)) float_t  _followSmoothDuration;

/// @brief Field _fovSmoothDuration, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__fovSmoothDuration, put=__cordl_internal_set__fovSmoothDuration)) float_t  _fovSmoothDuration;

/// @brief Field _moveSmoothDuration, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__moveSmoothDuration, put=__cordl_internal_set__moveSmoothDuration)) float_t  _moveSmoothDuration;

/// @brief Field _renderLIV, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderLIV, put=__cordl_internal_set__renderLIV)) ::UnityW<::VROSC::RenderLIV>  _renderLIV;

/// @brief Field _renderTextureOutput, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderTextureOutput, put=__cordl_internal_set__renderTextureOutput)) ::UnityW<::VROSC::CopyCameraOutputToRenderTexture>  _renderTextureOutput;

/// @brief Field _spectatorCamera, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__spectatorCamera, put=__cordl_internal_set__spectatorCamera)) ::UnityW<::UnityEngine::Camera>  _spectatorCamera;

/// @brief Method ApplyAnchorDefaultLayerMask, addr 0x172d1d8, size 0x4, virtual false, abstract: false, final false
inline void ApplyAnchorDefaultLayerMask() ;

/// @brief Method Awake, addr 0x172db3c, size 0x190, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ChangeCamera, addr 0x172dd1c, size 0x4, virtual false, abstract: false, final false
inline void ChangeCamera(int32_t  index) ;

/// @brief Method GetAnchorDisplayNames, addr 0x172dd20, size 0x18c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* GetAnchorDisplayNames() ;

/// @brief Method LivActivated, addr 0x172dfdc, size 0x34, virtual false, abstract: false, final false
inline void LivActivated() ;

/// @brief Method LivDeactivated, addr 0x172e010, size 0x30, virtual false, abstract: false, final false
inline void LivDeactivated() ;

/// @brief Method MainStateEntered, addr 0x172deac, size 0xcc, virtual false, abstract: false, final false
inline void MainStateEntered() ;

static inline ::VROSC::SpectatorCameraController* New_ctor() ;

/// @brief Method ResetGrabbableCameraPosition, addr 0x172ceec, size 0xac, virtual false, abstract: false, final false
inline void ResetGrabbableCameraPosition() ;

/// @brief Method SetEnabled, addr 0x172dccc, size 0x50, virtual false, abstract: false, final false
inline void SetEnabled(bool  isEnabled) ;

/// @brief Method SetKeyboardVisible, addr 0x172e3f4, size 0x1cc, virtual false, abstract: false, final false
inline void SetKeyboardVisible(bool  visible) ;

/// @brief Method SetSpectatorRenderTextureActive, addr 0x172ced0, size 0x1c, virtual false, abstract: false, final false
inline void SetSpectatorRenderTextureActive(bool  active, ::System::Object*  source) ;

/// @brief Method SpectatorHideBackgroundToggled, addr 0x172e040, size 0x3b4, virtual false, abstract: false, final false
inline void SpectatorHideBackgroundToggled(bool  hideBackground) ;

/// @brief Method UpdateHideBackgroundState, addr 0x172df78, size 0x64, virtual false, abstract: false, final false
inline void UpdateHideBackgroundState() ;

constexpr int32_t const& __cordl_internal_get__activeIndex() const;

constexpr int32_t& __cordl_internal_get__activeIndex() ;

constexpr ::ArrayW<::UnityW<::VROSC::SpectatorCameraAnchor>,::Array<::UnityW<::VROSC::SpectatorCameraAnchor>>*> const& __cordl_internal_get__cameraAnchors() const;

constexpr ::ArrayW<::UnityW<::VROSC::SpectatorCameraAnchor>,::Array<::UnityW<::VROSC::SpectatorCameraAnchor>>*>& __cordl_internal_get__cameraAnchors() ;

constexpr bool const& __cordl_internal_get__enabled() const;

constexpr bool& __cordl_internal_get__enabled() ;

constexpr float_t const& __cordl_internal_get__followSmoothDuration() const;

constexpr float_t& __cordl_internal_get__followSmoothDuration() ;

constexpr float_t const& __cordl_internal_get__fovSmoothDuration() const;

constexpr float_t& __cordl_internal_get__fovSmoothDuration() ;

constexpr float_t const& __cordl_internal_get__moveSmoothDuration() const;

constexpr float_t& __cordl_internal_get__moveSmoothDuration() ;

constexpr ::UnityW<::VROSC::RenderLIV> const& __cordl_internal_get__renderLIV() const;

constexpr ::UnityW<::VROSC::RenderLIV>& __cordl_internal_get__renderLIV() ;

constexpr ::UnityW<::VROSC::CopyCameraOutputToRenderTexture> const& __cordl_internal_get__renderTextureOutput() const;

constexpr ::UnityW<::VROSC::CopyCameraOutputToRenderTexture>& __cordl_internal_get__renderTextureOutput() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__spectatorCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__spectatorCamera() ;

constexpr void __cordl_internal_set__activeIndex(int32_t  value) ;

constexpr void __cordl_internal_set__cameraAnchors(::ArrayW<::UnityW<::VROSC::SpectatorCameraAnchor>,::Array<::UnityW<::VROSC::SpectatorCameraAnchor>>*>  value) ;

constexpr void __cordl_internal_set__enabled(bool  value) ;

constexpr void __cordl_internal_set__followSmoothDuration(float_t  value) ;

constexpr void __cordl_internal_set__fovSmoothDuration(float_t  value) ;

constexpr void __cordl_internal_set__moveSmoothDuration(float_t  value) ;

constexpr void __cordl_internal_set__renderLIV(::UnityW<::VROSC::RenderLIV>  value) ;

constexpr void __cordl_internal_set__renderTextureOutput(::UnityW<::VROSC::CopyCameraOutputToRenderTexture>  value) ;

constexpr void __cordl_internal_set__spectatorCamera(::UnityW<::UnityEngine::Camera>  value) ;

/// @brief Method .ctor, addr 0x172e5c0, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::LayerMask getStaticF__EnvironmentMask_k__BackingField() ;

static inline ::UnityEngine::LayerMask getStaticF__PlayerMask_k__BackingField() ;

/// @brief Method get_ActiveAnchor, addr 0x172daf0, size 0x4c, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::SpectatorCameraAnchor> get_ActiveAnchor() ;

/// @brief Method get_ActiveIndex, addr 0x172dae8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ActiveIndex() ;

/// @brief Method get_Camera, addr 0x172d9b8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_Camera() ;

/// @brief Method get_EnvironmentMask, addr 0x172d9c0, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::LayerMask get_EnvironmentMask() ;

/// @brief Method get_PlayerMask, addr 0x172da54, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::LayerMask get_PlayerMask() ;

static inline void setStaticF__EnvironmentMask_k__BackingField(::UnityEngine::LayerMask  value) ;

static inline void setStaticF__PlayerMask_k__BackingField(::UnityEngine::LayerMask  value) ;

/// @brief Method set_EnvironmentMask, addr 0x172da08, size 0x4c, virtual false, abstract: false, final false
static inline void set_EnvironmentMask(::UnityEngine::LayerMask  value) ;

/// @brief Method set_PlayerMask, addr 0x172da9c, size 0x4c, virtual false, abstract: false, final false
static inline void set_PlayerMask(::UnityEngine::LayerMask  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpectatorCameraController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpectatorCameraController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpectatorCameraController(SpectatorCameraController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpectatorCameraController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpectatorCameraController(SpectatorCameraController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1057};

/// @brief Field _spectatorCamera, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____spectatorCamera;

/// @brief Field _cameraAnchors, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::SpectatorCameraAnchor>,::Array<::UnityW<::VROSC::SpectatorCameraAnchor>>*>  ____cameraAnchors;

/// @brief Field _followSmoothDuration, offset: 0x30, size: 0x4, def value: None
 float_t  ____followSmoothDuration;

/// @brief Field _moveSmoothDuration, offset: 0x34, size: 0x4, def value: None
 float_t  ____moveSmoothDuration;

/// @brief Field _fovSmoothDuration, offset: 0x38, size: 0x4, def value: None
 float_t  ____fovSmoothDuration;

/// @brief Field _renderLIV, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::RenderLIV>  ____renderLIV;

/// @brief Field _renderTextureOutput, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::CopyCameraOutputToRenderTexture>  ____renderTextureOutput;

/// @brief Field _activeIndex, offset: 0x50, size: 0x4, def value: None
 int32_t  ____activeIndex;

/// @brief Field _enabled, offset: 0x54, size: 0x1, def value: None
 bool  ____enabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SpectatorCameraController, ____spectatorCamera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraController, ____cameraAnchors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraController, ____followSmoothDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraController, ____moveSmoothDuration) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraController, ____fovSmoothDuration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraController, ____renderLIV) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraController, ____renderTextureOutput) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraController, ____activeIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::SpectatorCameraController, ____enabled) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SpectatorCameraController, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SpectatorCameraController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SpectatorCameraController*, "VROSC", "SpectatorCameraController");
