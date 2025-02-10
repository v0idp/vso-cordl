#pragma once
// IWYU pragma private; include "VROSC/UI/UIMaterialSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(UIMaterialSettings)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace VROSC::UI {
class UIMaterialSettings;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::UIMaterialSettings);
// Dependencies UnityEngine.ScriptableObject
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.UIMaterialSettings
class CORDL_TYPE UIMaterialSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field _opaqueMaterial, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__opaqueMaterial, put=__cordl_internal_set__opaqueMaterial)) ::UnityW<::UnityEngine::Material>  _opaqueMaterial;

/// @brief Field _transparentMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__transparentMaterial, put=__cordl_internal_set__transparentMaterial)) ::UnityW<::UnityEngine::Material>  _transparentMaterial;

/// @brief Method GetMaterial, addr 0x17e5014, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> GetMaterial(bool  needsTransparency) ;

static inline ::VROSC::UI::UIMaterialSettings* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__opaqueMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__opaqueMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__transparentMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__transparentMaterial() ;

constexpr void __cordl_internal_set__opaqueMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__transparentMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x17e5cb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIMaterialSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIMaterialSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIMaterialSettings(UIMaterialSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIMaterialSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIMaterialSettings(UIMaterialSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1606};

/// @brief Field _opaqueMaterial, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____opaqueMaterial;

/// @brief Field _transparentMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____transparentMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::UIMaterialSettings, ____opaqueMaterial) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIMaterialSettings, ____transparentMaterial) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::UIMaterialSettings, 0x28>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::UIMaterialSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UIMaterialSettings*, "VROSC.UI", "UIMaterialSettings");
