#pragma once
// IWYU pragma private; include "VROSC/BasicEnvironmentPanelUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BasicEnvironmentPanelUI)
namespace VROSC {
class EnvironmentData;
}
namespace VROSC {
class EnvironmentUIButton;
}
// Forward declare root types
namespace VROSC {
class BasicEnvironmentPanelUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::BasicEnvironmentPanelUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.BasicEnvironmentPanelUI
class CORDL_TYPE BasicEnvironmentPanelUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _environmentButtons, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__environmentButtons, put=__cordl_internal_set__environmentButtons)) ::ArrayW<::UnityW<::VROSC::EnvironmentUIButton>,::Array<::UnityW<::VROSC::EnvironmentUIButton>>*>  _environmentButtons;

/// @brief Field _passthroughButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__passthroughButton, put=__cordl_internal_set__passthroughButton)) ::UnityW<::VROSC::EnvironmentUIButton>  _passthroughButton;

/// @brief Method Awake, addr 0x173742c, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::BasicEnvironmentPanelUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17375c0, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x173747c, size 0xa4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetActiveEnvironment, addr 0x17375c4, size 0x130, virtual true, abstract: false, final false
inline void SetActiveEnvironment(::VROSC::EnvironmentData*  newEnvironment) ;

constexpr ::ArrayW<::UnityW<::VROSC::EnvironmentUIButton>,::Array<::UnityW<::VROSC::EnvironmentUIButton>>*> const& __cordl_internal_get__environmentButtons() const;

constexpr ::ArrayW<::UnityW<::VROSC::EnvironmentUIButton>,::Array<::UnityW<::VROSC::EnvironmentUIButton>>*>& __cordl_internal_get__environmentButtons() ;

constexpr ::UnityW<::VROSC::EnvironmentUIButton> const& __cordl_internal_get__passthroughButton() const;

constexpr ::UnityW<::VROSC::EnvironmentUIButton>& __cordl_internal_get__passthroughButton() ;

constexpr void __cordl_internal_set__environmentButtons(::ArrayW<::UnityW<::VROSC::EnvironmentUIButton>,::Array<::UnityW<::VROSC::EnvironmentUIButton>>*>  value) ;

constexpr void __cordl_internal_set__passthroughButton(::UnityW<::VROSC::EnvironmentUIButton>  value) ;

/// @brief Method .ctor, addr 0x17376f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasicEnvironmentPanelUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicEnvironmentPanelUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicEnvironmentPanelUI(BasicEnvironmentPanelUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicEnvironmentPanelUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicEnvironmentPanelUI(BasicEnvironmentPanelUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1086};

/// @brief Field _environmentButtons, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::EnvironmentUIButton>,::Array<::UnityW<::VROSC::EnvironmentUIButton>>*>  ____environmentButtons;

/// @brief Field _passthroughButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::EnvironmentUIButton>  ____passthroughButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BasicEnvironmentPanelUI, ____environmentButtons) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::BasicEnvironmentPanelUI, ____passthroughButton) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BasicEnvironmentPanelUI, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::BasicEnvironmentPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BasicEnvironmentPanelUI*, "VROSC", "BasicEnvironmentPanelUI");
