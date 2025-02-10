#pragma once
// IWYU pragma private; include "GlobalNamespace/SetCameraUseDepthTexture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SetCameraUseDepthTexture)
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class SetCameraUseDepthTexture;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SetCameraUseDepthTexture);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetCameraUseDepthTexture
class CORDL_TYPE SetCameraUseDepthTexture : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field cam, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cam, put=__cordl_internal_set_cam)) ::UnityW<::UnityEngine::Camera>  cam;

static inline ::GlobalNamespace::SetCameraUseDepthTexture* New_ctor() ;

/// @brief Method Start, addr 0x16c1164, size 0x60, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_cam() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_cam() ;

constexpr void __cordl_internal_set_cam(::UnityW<::UnityEngine::Camera>  value) ;

/// @brief Method .ctor, addr 0x16c11c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetCameraUseDepthTexture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetCameraUseDepthTexture", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetCameraUseDepthTexture(SetCameraUseDepthTexture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetCameraUseDepthTexture", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetCameraUseDepthTexture(SetCameraUseDepthTexture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{34};

/// @brief Field cam, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___cam;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetCameraUseDepthTexture, ___cam) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetCameraUseDepthTexture, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SetCameraUseDepthTexture);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetCameraUseDepthTexture*, "", "SetCameraUseDepthTexture");
