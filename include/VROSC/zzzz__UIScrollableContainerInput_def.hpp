#pragma once
// IWYU pragma private; include "VROSC/UIScrollableContainerInput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__UIInteractable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIScrollableContainerInput)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
class UIScrollableContainer;
}
// Forward declare root types
namespace VROSC {
class UIScrollableContainerInput;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIScrollableContainerInput);
// Dependencies VROSC.UIInteractable
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIScrollableContainerInput
class CORDL_TYPE UIScrollableContainerInput : public ::VROSC::UIInteractable {
public:
// Declarations
 __declspec(property(get=get_InteractionStopsLaser)) bool  InteractionStopsLaser;

/// @brief Field OnItemClicked, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemClicked, put=__cordl_internal_set_OnItemClicked)) ::System::Action_1<int32_t>*  OnItemClicked;

/// @brief Field OnItemHoverChanged, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemHoverChanged, put=__cordl_internal_set_OnItemHoverChanged)) ::System::Action_1<int32_t>*  OnItemHoverChanged;

/// @brief Field _scrollableContainer, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__scrollableContainer, put=__cordl_internal_set__scrollableContainer)) ::UnityW<::VROSC::UIScrollableContainer>  _scrollableContainer;

/// @brief Method GetItemByPosition, addr 0x1749608, size 0x1b4, virtual false, abstract: false, final false
inline int32_t GetItemByPosition(::UnityEngine::Vector3  worldPosition) ;

/// @brief Method HoverStayChanged, addr 0x17495cc, size 0x3c, virtual false, abstract: false, final false
inline void HoverStayChanged() ;

/// @brief Method ItemWasPressed, addr 0x17497bc, size 0x48, virtual false, abstract: false, final false
inline void ItemWasPressed(::VROSC::ClickData*  clickData) ;

static inline ::VROSC::UIScrollableContainerInput* New_ctor() ;

/// @brief Method OnDisable, addr 0x1749474, size 0x158, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1749324, size 0x150, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnItemClicked() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnItemClicked() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnItemHoverChanged() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnItemHoverChanged() ;

constexpr ::UnityW<::VROSC::UIScrollableContainer> const& __cordl_internal_get__scrollableContainer() const;

constexpr ::UnityW<::VROSC::UIScrollableContainer>& __cordl_internal_get__scrollableContainer() ;

constexpr void __cordl_internal_set_OnItemClicked(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_OnItemHoverChanged(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__scrollableContainer(::UnityW<::VROSC::UIScrollableContainer>  value) ;

/// @brief Method .ctor, addr 0x1749804, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InteractionStopsLaser, addr 0x174931c, size 0x8, virtual true, abstract: false, final false
inline bool get_InteractionStopsLaser() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIScrollableContainerInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIScrollableContainerInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIScrollableContainerInput(UIScrollableContainerInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIScrollableContainerInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIScrollableContainerInput(UIScrollableContainerInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1131};

/// @brief Field _scrollableContainer, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::VROSC::UIScrollableContainer>  ____scrollableContainer;

/// @brief Field OnItemClicked, offset: 0x98, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnItemClicked;

/// @brief Field OnItemHoverChanged, offset: 0xa0, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnItemHoverChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIScrollableContainerInput, ____scrollableContainer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableContainerInput, ___OnItemClicked) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableContainerInput, ___OnItemHoverChanged) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIScrollableContainerInput, 0xa8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIScrollableContainerInput);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIScrollableContainerInput*, "VROSC", "UIScrollableContainerInput");
