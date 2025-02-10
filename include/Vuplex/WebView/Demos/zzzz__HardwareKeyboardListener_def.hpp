#pragma once
// IWYU pragma private; include "Vuplex/WebView/Demos/HardwareKeyboardListener.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HardwareKeyboardListener)
// Forward declare root types
namespace Vuplex::WebView::Demos {
class HardwareKeyboardListener;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Demos::HardwareKeyboardListener);
// Dependencies System.Object
namespace Vuplex::WebView::Demos {
// Is value type: false
// CS Name: Vuplex.WebView.Demos.HardwareKeyboardListener
class CORDL_TYPE HardwareKeyboardListener : public ::System::Object {
public:
// Declarations
static inline ::Vuplex::WebView::Demos::HardwareKeyboardListener* New_ctor() ;

/// @brief Method .ctor, addr 0x16e5fc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HardwareKeyboardListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HardwareKeyboardListener", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HardwareKeyboardListener(HardwareKeyboardListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HardwareKeyboardListener", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HardwareKeyboardListener(HardwareKeyboardListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{210};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Demos::HardwareKeyboardListener, 0x10>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Demos
NEED_NO_BOX(::Vuplex::WebView::Demos::HardwareKeyboardListener);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Demos::HardwareKeyboardListener*, "Vuplex.WebView.Demos", "HardwareKeyboardListener");
