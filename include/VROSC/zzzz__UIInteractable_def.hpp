#pragma once
// IWYU pragma private; include "VROSC/UIInteractable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__Clickable_def.hpp"
CORDL_MODULE_EXPORT(UIInteractable)
// Forward declare root types
namespace VROSC {
class UIInteractable;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIInteractable);
// Dependencies VROSC.Clickable
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIInteractable
class CORDL_TYPE UIInteractable : public ::VROSC::Clickable {
public:
// Declarations
 __declspec(property(get=get_InteractionStopsLaser)) bool  InteractionStopsLaser;

static inline ::VROSC::UIInteractable* New_ctor() ;

/// @brief Method .ctor, addr 0x17725cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InteractionStopsLaser, addr 0x1776fac, size 0x8, virtual true, abstract: false, final false
inline bool get_InteractionStopsLaser() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIInteractable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIInteractable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIInteractable(UIInteractable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIInteractable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIInteractable(UIInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1270};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::UIInteractable, 0x90>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIInteractable);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIInteractable*, "VROSC", "UIInteractable");
