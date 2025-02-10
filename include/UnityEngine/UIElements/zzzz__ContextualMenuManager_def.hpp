#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ContextualMenuManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ContextualMenuManager)
namespace UnityEngine::UIElements {
class DropdownMenu;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ContextualMenuManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ContextualMenuManager);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ContextualMenuManager
class CORDL_TYPE ContextualMenuManager : public ::System::Object {
public:
// Declarations
/// @brief Field <displayMenuHandledOSX>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__displayMenuHandledOSX_k__BackingField, put=__cordl_internal_set__displayMenuHandledOSX_k__BackingField)) bool  _displayMenuHandledOSX_k__BackingField;

 __declspec(property(get=get_displayMenuHandledOSX, put=set_displayMenuHandledOSX)) bool  displayMenuHandledOSX;

/// @brief Method DisplayMenu, addr 0x302b4e8, size 0x3f4, virtual false, abstract: false, final false
inline void DisplayMenu(::UnityEngine::UIElements::EventBase*  triggerEvent, ::UnityEngine::UIElements::IEventHandler*  target) ;

/// @brief Method DisplayMenuIfEventMatches, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void DisplayMenuIfEventMatches(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::IEventHandler*  eventHandler) ;

/// @brief Method DoDisplayMenu, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void DoDisplayMenu(::UnityEngine::UIElements::DropdownMenu*  menu, ::UnityEngine::UIElements::EventBase*  triggerEvent) ;

constexpr bool const& __cordl_internal_get__displayMenuHandledOSX_k__BackingField() const;

constexpr bool& __cordl_internal_get__displayMenuHandledOSX_k__BackingField() ;

constexpr void __cordl_internal_set__displayMenuHandledOSX_k__BackingField(bool  value) ;

/// @brief Method get_displayMenuHandledOSX, addr 0x302b4d4, size 0x8, virtual false, abstract: false, final false
inline bool get_displayMenuHandledOSX() ;

/// @brief Method set_displayMenuHandledOSX, addr 0x302b4dc, size 0xc, virtual false, abstract: false, final false
inline void set_displayMenuHandledOSX(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContextualMenuManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContextualMenuManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContextualMenuManager(ContextualMenuManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContextualMenuManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContextualMenuManager(ContextualMenuManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3674};

/// @brief Field <displayMenuHandledOSX>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____displayMenuHandledOSX_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ContextualMenuManager, ____displayMenuHandledOSX_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ContextualMenuManager, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ContextualMenuManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ContextualMenuManager*, "UnityEngine.UIElements", "ContextualMenuManager");
