#pragma once
// IWYU pragma private; include "VROSC/InternalEffectsPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InternalEffectsPanel)
namespace VROSC {
class BaseEffectsUI;
}
namespace VROSC {
class SynthController;
}
// Forward declare root types
namespace VROSC {
class InternalEffectsPanel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InternalEffectsPanel);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InternalEffectsPanel
class CORDL_TYPE InternalEffectsPanel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _effectsUIs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__effectsUIs, put=__cordl_internal_set__effectsUIs)) ::ArrayW<::UnityW<::VROSC::BaseEffectsUI>,::Array<::UnityW<::VROSC::BaseEffectsUI>>*>  _effectsUIs;

static inline ::VROSC::InternalEffectsPanel* New_ctor() ;

/// @brief Method Reset, addr 0x178ad04, size 0x64, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Setup, addr 0x178aa64, size 0xb4, virtual false, abstract: false, final false
inline void Setup(::VROSC::SynthController*  instrument) ;

constexpr ::ArrayW<::UnityW<::VROSC::BaseEffectsUI>,::Array<::UnityW<::VROSC::BaseEffectsUI>>*> const& __cordl_internal_get__effectsUIs() const;

constexpr ::ArrayW<::UnityW<::VROSC::BaseEffectsUI>,::Array<::UnityW<::VROSC::BaseEffectsUI>>*>& __cordl_internal_get__effectsUIs() ;

constexpr void __cordl_internal_set__effectsUIs(::ArrayW<::UnityW<::VROSC::BaseEffectsUI>,::Array<::UnityW<::VROSC::BaseEffectsUI>>*>  value) ;

/// @brief Method .ctor, addr 0x178dab8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InternalEffectsPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InternalEffectsPanel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InternalEffectsPanel(InternalEffectsPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InternalEffectsPanel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InternalEffectsPanel(InternalEffectsPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1331};

/// @brief Field _effectsUIs, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::BaseEffectsUI>,::Array<::UnityW<::VROSC::BaseEffectsUI>>*>  ____effectsUIs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InternalEffectsPanel, ____effectsUIs) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InternalEffectsPanel, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InternalEffectsPanel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InternalEffectsPanel*, "VROSC", "InternalEffectsPanel");
