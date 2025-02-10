#pragma once
// IWYU pragma private; include "VROSC/BrowserController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__ToolController_def.hpp"
CORDL_MODULE_EXPORT(BrowserController)
namespace VROSC {
class BrowserUI;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UserDataControllers;
}
// Forward declare root types
namespace VROSC {
class BrowserController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::BrowserController);
// Dependencies VROSC.ToolController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.BrowserController
class CORDL_TYPE BrowserController : public ::VROSC::ToolController {
public:
// Declarations
/// @brief Field _browserUI, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__browserUI, put=__cordl_internal_set__browserUI)) ::UnityW<::VROSC::BrowserUI>  _browserUI;

/// @brief Field _closeButton, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeButton, put=__cordl_internal_set__closeButton)) ::UnityW<::VROSC::UIButton>  _closeButton;

/// @brief Method CloseButtonPressed, addr 0x172e838, size 0xc, virtual false, abstract: false, final false
inline void CloseButtonPressed() ;

static inline ::VROSC::BrowserController* New_ctor() ;

/// @brief Method Setup, addr 0x172e5d8, size 0x178, virtual true, abstract: false, final false
inline void Setup() ;

/// @brief Method UserDataLoaded, addr 0x172e818, size 0x20, virtual true, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

constexpr ::UnityW<::VROSC::BrowserUI> const& __cordl_internal_get__browserUI() const;

constexpr ::UnityW<::VROSC::BrowserUI>& __cordl_internal_get__browserUI() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__closeButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__closeButton() ;

constexpr void __cordl_internal_set__browserUI(::UnityW<::VROSC::BrowserUI>  value) ;

constexpr void __cordl_internal_set__closeButton(::UnityW<::VROSC::UIButton>  value) ;

/// @brief Method .ctor, addr 0x172e844, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BrowserController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BrowserController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BrowserController(BrowserController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BrowserController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BrowserController(BrowserController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1058};

/// @brief Field _closeButton, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____closeButton;

/// @brief Field _browserUI, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::VROSC::BrowserUI>  ____browserUI;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BrowserController, ____closeButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::BrowserController, ____browserUI) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BrowserController, 0x90>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::BrowserController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BrowserController*, "VROSC", "BrowserController");
