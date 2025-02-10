#pragma once
// IWYU pragma private; include "VROSC/ThereminOctaveControlUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__OctaveControlUI_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThereminOctaveControlUI)
// Forward declare root types
namespace VROSC {
class ThereminOctaveControlUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ThereminOctaveControlUI);
// Dependencies VROSC.OctaveControlUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ThereminOctaveControlUI
class CORDL_TYPE ThereminOctaveControlUI : public ::VROSC::OctaveControlUI {
public:
// Declarations
/// @brief Method GetNoteValue, addr 0x179967c, size 0x80, virtual false, abstract: false, final false
inline int32_t GetNoteValue(int32_t  octave) ;

static inline ::VROSC::ThereminOctaveControlUI* New_ctor() ;

/// @brief Method UpdateDisplayAndOutput, addr 0x17995ec, size 0x90, virtual true, abstract: false, final false
inline void UpdateDisplayAndOutput() ;

/// @brief Method .ctor, addr 0x17996fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThereminOctaveControlUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThereminOctaveControlUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThereminOctaveControlUI(ThereminOctaveControlUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThereminOctaveControlUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThereminOctaveControlUI(ThereminOctaveControlUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1357};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::ThereminOctaveControlUI, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ThereminOctaveControlUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ThereminOctaveControlUI*, "VROSC", "ThereminOctaveControlUI");
