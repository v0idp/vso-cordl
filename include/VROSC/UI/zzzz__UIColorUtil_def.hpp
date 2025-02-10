#pragma once
// IWYU pragma private; include "VROSC/UI/UIColorUtil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UIColorUtil)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace VROSC::UI {
class UIColorUtil;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::UIColorUtil);
// Dependencies System.Object
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.UIColorUtil
class CORDL_TYPE UIColorUtil : public ::System::Object {
public:
// Declarations
/// @brief Method DesaturateColor, addr 0x17e74f4, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::Color DesaturateColor(::UnityEngine::Color  color, float_t  desaturation, float_t  darken) ;

static inline ::VROSC::UI::UIColorUtil* New_ctor() ;

/// @brief Method .ctor, addr 0x17e756c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIColorUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIColorUtil", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIColorUtil(UIColorUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIColorUtil", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIColorUtil(UIColorUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1615};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::UI::UIColorUtil, 0x10>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::UIColorUtil);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UIColorUtil*, "VROSC.UI", "UIColorUtil");
