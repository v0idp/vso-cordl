#pragma once
// IWYU pragma private; include "VROSC/PortamentoEffectsUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__BaseEffectsUI_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PortamentoEffectsUI)
namespace VROSC {
class SynthController;
}
namespace VROSC {
class UISlider;
}
namespace VROSC {
class UISpinner;
}
// Forward declare root types
namespace VROSC {
class PortamentoEffectsUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PortamentoEffectsUI);
// Dependencies VROSC.BaseEffectsUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PortamentoEffectsUI
class CORDL_TYPE PortamentoEffectsUI : public ::VROSC::BaseEffectsUI {
public:
// Declarations
/// @brief Field _portamentoSlider, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__portamentoSlider, put=__cordl_internal_set__portamentoSlider)) ::UnityW<::VROSC::UISlider>  _portamentoSlider;

/// @brief Field _portamentoTypeSpinner, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__portamentoTypeSpinner, put=__cordl_internal_set__portamentoTypeSpinner)) ::UnityW<::VROSC::UISpinner>  _portamentoTypeSpinner;

/// @brief Method ChangePortamento, addr 0x178e2bc, size 0x6c, virtual false, abstract: false, final false
inline void ChangePortamento(float_t  portamento) ;

/// @brief Method ChangePortamentoType, addr 0x178e328, size 0x84, virtual false, abstract: false, final false
inline void ChangePortamentoType(int32_t  portamentoType) ;

/// @brief Method CheckIfDirty, addr 0x178e1ec, size 0xd0, virtual true, abstract: false, final false
inline void CheckIfDirty() ;

/// @brief Method LoadPatchValues, addr 0x178e0e0, size 0x10c, virtual true, abstract: false, final false
inline void LoadPatchValues() ;

static inline ::VROSC::PortamentoEffectsUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x178df60, size 0x180, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ResetPressed, addr 0x178e3ac, size 0xe0, virtual true, abstract: false, final false
inline void ResetPressed() ;

/// @brief Method Setup, addr 0x178dac0, size 0x4a0, virtual true, abstract: false, final false
inline void Setup(::VROSC::SynthController*  instrument) ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__portamentoSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__portamentoSlider() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get__portamentoTypeSpinner() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get__portamentoTypeSpinner() ;

constexpr void __cordl_internal_set__portamentoSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__portamentoTypeSpinner(::UnityW<::VROSC::UISpinner>  value) ;

/// @brief Method .ctor, addr 0x178e48c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PortamentoEffectsUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PortamentoEffectsUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PortamentoEffectsUI(PortamentoEffectsUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PortamentoEffectsUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PortamentoEffectsUI(PortamentoEffectsUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1332};

/// @brief Field _portamentoTypeSpinner, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ____portamentoTypeSpinner;

/// @brief Field _portamentoSlider, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____portamentoSlider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PortamentoEffectsUI, ____portamentoTypeSpinner) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::PortamentoEffectsUI, ____portamentoSlider) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PortamentoEffectsUI, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PortamentoEffectsUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PortamentoEffectsUI*, "VROSC", "PortamentoEffectsUI");
