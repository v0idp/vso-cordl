#pragma once
// IWYU pragma private; include "VROSC/SetCameraSettingsOnEnvironmentSwitch.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SetCameraSettingsOnEnvironmentSwitch)
namespace BeautifyEffect {
class Beautify;
}
namespace GlobalNamespace {
class Environment;
}
// Forward declare root types
namespace VROSC {
class SetCameraSettingsOnEnvironmentSwitch;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SetCameraSettingsOnEnvironmentSwitch);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SetCameraSettingsOnEnvironmentSwitch
class CORDL_TYPE SetCameraSettingsOnEnvironmentSwitch : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _beautify, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__beautify, put=__cordl_internal_set__beautify)) ::UnityW<::BeautifyEffect::Beautify>  _beautify;

/// @brief Method Awake, addr 0x1729430, size 0xf8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method NewEnvironmentSet, addr 0x1729528, size 0x4, virtual false, abstract: false, final false
inline void NewEnvironmentSet(::GlobalNamespace::Environment*  settings) ;

static inline ::VROSC::SetCameraSettingsOnEnvironmentSwitch* New_ctor() ;

constexpr ::UnityW<::BeautifyEffect::Beautify> const& __cordl_internal_get__beautify() const;

constexpr ::UnityW<::BeautifyEffect::Beautify>& __cordl_internal_get__beautify() ;

constexpr void __cordl_internal_set__beautify(::UnityW<::BeautifyEffect::Beautify>  value) ;

/// @brief Method .ctor, addr 0x172952c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetCameraSettingsOnEnvironmentSwitch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetCameraSettingsOnEnvironmentSwitch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetCameraSettingsOnEnvironmentSwitch(SetCameraSettingsOnEnvironmentSwitch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetCameraSettingsOnEnvironmentSwitch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetCameraSettingsOnEnvironmentSwitch(SetCameraSettingsOnEnvironmentSwitch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1038};

/// @brief Field _beautify, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::BeautifyEffect::Beautify>  ____beautify;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SetCameraSettingsOnEnvironmentSwitch, ____beautify) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SetCameraSettingsOnEnvironmentSwitch, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SetCameraSettingsOnEnvironmentSwitch);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SetCameraSettingsOnEnvironmentSwitch*, "VROSC", "SetCameraSettingsOnEnvironmentSwitch");
