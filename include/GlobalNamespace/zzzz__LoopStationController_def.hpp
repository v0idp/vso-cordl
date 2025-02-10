#pragma once
// IWYU pragma private; include "GlobalNamespace/LoopStationController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__ToolController_def.hpp"
CORDL_MODULE_EXPORT(LoopStationController)
namespace VROSC {
class LoopStation;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UserDataControllers;
}
// Forward declare root types
namespace GlobalNamespace {
class LoopStationController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LoopStationController);
// Dependencies VROSC.ToolController
namespace GlobalNamespace {
// Is value type: false
// CS Name: LoopStationController
class CORDL_TYPE LoopStationController : public ::VROSC::ToolController {
public:
// Declarations
 __declspec(property(get=get_LoopStation)) ::UnityW<::VROSC::LoopStation>  LoopStation;

/// @brief Field _closeButton, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeButton, put=__cordl_internal_set__closeButton)) ::UnityW<::VROSC::UIButton>  _closeButton;

/// @brief Field _loopStation, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStation, put=__cordl_internal_set__loopStation)) ::UnityW<::VROSC::LoopStation>  _loopStation;

/// @brief Method CloseButtonPressed, addr 0x16c523c, size 0xc, virtual false, abstract: false, final false
inline void CloseButtonPressed() ;

static inline ::GlobalNamespace::LoopStationController* New_ctor() ;

/// @brief Method OnDestroy, addr 0x16c5098, size 0x104, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Setup, addr 0x16c4f38, size 0x160, virtual true, abstract: false, final false
inline void Setup() ;

/// @brief Method UserDataLoaded, addr 0x16c519c, size 0xa0, virtual true, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__closeButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__closeButton() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__loopStation() ;

constexpr void __cordl_internal_set__closeButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value) ;

/// @brief Method .ctor, addr 0x16c5248, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_LoopStation, addr 0x16c4f30, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopStation> get_LoopStation() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationController(LoopStationController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationController(LoopStationController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{65};

/// @brief Field _loopStation, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____loopStation;

/// @brief Field _closeButton, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____closeButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LoopStationController, ____loopStation) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoopStationController, ____closeButton) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LoopStationController, 0x90>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LoopStationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LoopStationController*, "", "LoopStationController");
