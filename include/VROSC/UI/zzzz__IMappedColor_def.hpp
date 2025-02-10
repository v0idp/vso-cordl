#pragma once
// IWYU pragma private; include "VROSC/UI/IMappedColor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IMappedColor)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace VROSC::UI {
class IMappedColor;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::IMappedColor);
// Dependencies 
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.IMappedColor
class CORDL_TYPE IMappedColor {
public:
// Declarations
/// @brief Method ReadFromLUT, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ReadFromLUT(::UnityEngine::Texture2D*  texture, int32_t  row) ;

/// @brief Method WriteToLUT, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void WriteToLUT(::UnityEngine::Texture2D*  texture, int32_t  row) ;

// Ctor Parameters [CppParam { name: "", ty: "IMappedColor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMappedColor(IMappedColor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1612};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::IMappedColor);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::IMappedColor*, "VROSC.UI", "IMappedColor");
