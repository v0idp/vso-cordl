#pragma once
// IWYU pragma private; include "VROSC/UI/WidgetToggleMoverRelay.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__Grabable_def.hpp"
CORDL_MODULE_EXPORT(WidgetToggleMoverRelay)
namespace VROSC {
class GrabData;
}
namespace VROSC {
class WidgetController;
}
// Forward declare root types
namespace VROSC::UI {
class WidgetToggleMoverRelay;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::WidgetToggleMoverRelay);
// Dependencies VROSC.Grabable
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.WidgetToggleMoverRelay
class CORDL_TYPE WidgetToggleMoverRelay : public ::VROSC::Grabable {
public:
// Declarations
/// @brief Field _widgetController, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__widgetController, put=__cordl_internal_set__widgetController)) ::UnityW<::VROSC::WidgetController>  _widgetController;

/// @brief Method Grab, addr 0x17e45e4, size 0x174, virtual true, abstract: false, final false
inline void Grab(::VROSC::GrabData*  grabData, bool  grabbing) ;

static inline ::VROSC::UI::WidgetToggleMoverRelay* New_ctor() ;

/// @brief Method Setup, addr 0x17e45dc, size 0x8, virtual false, abstract: false, final false
inline void Setup(::VROSC::WidgetController*  widgetController) ;

constexpr ::UnityW<::VROSC::WidgetController> const& __cordl_internal_get__widgetController() const;

constexpr ::UnityW<::VROSC::WidgetController>& __cordl_internal_get__widgetController() ;

constexpr void __cordl_internal_set__widgetController(::UnityW<::VROSC::WidgetController>  value) ;

/// @brief Method .ctor, addr 0x17e4758, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WidgetToggleMoverRelay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WidgetToggleMoverRelay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WidgetToggleMoverRelay(WidgetToggleMoverRelay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WidgetToggleMoverRelay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WidgetToggleMoverRelay(WidgetToggleMoverRelay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1601};

/// @brief Field _widgetController, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::WidgetController>  ____widgetController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::WidgetToggleMoverRelay, ____widgetController) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::WidgetToggleMoverRelay, 0x80>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::WidgetToggleMoverRelay);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::WidgetToggleMoverRelay*, "VROSC.UI", "WidgetToggleMoverRelay");
