#pragma once
// IWYU pragma private; include "VROSC/UISchemeController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UISchemeController)
namespace VROSC::UI {
class UIScheme;
}
// Forward declare root types
namespace VROSC {
class UISchemeController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UISchemeController);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UISchemeController
class CORDL_TYPE UISchemeController : public ::System::Object {
public:
// Declarations
/// @brief Field _defaultScheme, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultScheme, put=__cordl_internal_set__defaultScheme)) ::UnityW<::VROSC::UI::UIScheme>  _defaultScheme;

static inline ::VROSC::UISchemeController* New_ctor() ;

/// @brief Method SetScheme, addr 0x177712c, size 0x18, virtual false, abstract: false, final false
inline void SetScheme(::VROSC::UI::UIScheme*  uIScheme) ;

/// @brief Method Setup, addr 0x17770e0, size 0x4c, virtual false, abstract: false, final false
inline void Setup() ;

constexpr ::UnityW<::VROSC::UI::UIScheme> const& __cordl_internal_get__defaultScheme() const;

constexpr ::UnityW<::VROSC::UI::UIScheme>& __cordl_internal_get__defaultScheme() ;

constexpr void __cordl_internal_set__defaultScheme(::UnityW<::VROSC::UI::UIScheme>  value) ;

/// @brief Method .ctor, addr 0x1777144, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UISchemeController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UISchemeController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UISchemeController(UISchemeController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UISchemeController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UISchemeController(UISchemeController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1272};

/// @brief Field _defaultScheme, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIScheme>  ____defaultScheme;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UISchemeController, ____defaultScheme) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UISchemeController, 0x18>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UISchemeController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UISchemeController*, "VROSC", "UISchemeController");
