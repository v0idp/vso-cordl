#pragma once
// IWYU pragma private; include "VROSC/PassthroughManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PassthroughManager)
namespace GlobalNamespace {
class OVRManager;
}
namespace GlobalNamespace {
class OVRPassthroughLayer;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace VROSC {
class PassthroughManager;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PassthroughManager);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PassthroughManager
class CORDL_TYPE PassthroughManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsToggled, put=set_IsToggled)) bool  IsToggled;

/// @brief Field <IsToggled>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsToggled_k__BackingField, put=__cordl_internal_set__IsToggled_k__BackingField)) bool  _IsToggled_k__BackingField;

/// @brief Field _camera, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__camera, put=__cordl_internal_set__camera)) ::UnityW<::UnityEngine::Camera>  _camera;

/// @brief Field _ovrManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ovrManager, put=__cordl_internal_set__ovrManager)) ::UnityW<::GlobalNamespace::OVRManager>  _ovrManager;

/// @brief Field _passthroughLayer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__passthroughLayer, put=__cordl_internal_set__passthroughLayer)) ::UnityW<::GlobalNamespace::OVRPassthroughLayer>  _passthroughLayer;

/// @brief Method Awake, addr 0x16f0678, size 0x20, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::PassthroughManager* New_ctor() ;

/// @brief Method TogglePassthrough, addr 0x16f0504, size 0x158, virtual false, abstract: false, final false
inline void TogglePassthrough(bool  active) ;

constexpr bool const& __cordl_internal_get__IsToggled_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsToggled_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera() ;

constexpr ::UnityW<::GlobalNamespace::OVRManager> const& __cordl_internal_get__ovrManager() const;

constexpr ::UnityW<::GlobalNamespace::OVRManager>& __cordl_internal_get__ovrManager() ;

constexpr ::UnityW<::GlobalNamespace::OVRPassthroughLayer> const& __cordl_internal_get__passthroughLayer() const;

constexpr ::UnityW<::GlobalNamespace::OVRPassthroughLayer>& __cordl_internal_get__passthroughLayer() ;

constexpr void __cordl_internal_set__IsToggled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__ovrManager(::UnityW<::GlobalNamespace::OVRManager>  value) ;

constexpr void __cordl_internal_set__passthroughLayer(::UnityW<::GlobalNamespace::OVRPassthroughLayer>  value) ;

/// @brief Method .ctor, addr 0x16f0698, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsToggled, addr 0x16f0664, size 0x8, virtual false, abstract: false, final false
inline bool get_IsToggled() ;

/// @brief Method set_IsToggled, addr 0x16f066c, size 0xc, virtual false, abstract: false, final false
inline void set_IsToggled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PassthroughManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PassthroughManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PassthroughManager(PassthroughManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PassthroughManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PassthroughManager(PassthroughManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{771};

/// @brief Field _ovrManager, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRManager>  ____ovrManager;

/// @brief Field _passthroughLayer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRPassthroughLayer>  ____passthroughLayer;

/// @brief Field _camera, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____camera;

/// @brief Field <IsToggled>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____IsToggled_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PassthroughManager, ____ovrManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::PassthroughManager, ____passthroughLayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::PassthroughManager, ____camera) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::PassthroughManager, ____IsToggled_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PassthroughManager, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PassthroughManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PassthroughManager*, "VROSC", "PassthroughManager");
