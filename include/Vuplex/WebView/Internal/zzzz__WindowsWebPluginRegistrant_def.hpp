#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/WindowsWebPluginRegistrant.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WindowsWebPluginRegistrant)
// Forward declare root types
namespace Vuplex::WebView::Internal {
class WindowsWebPluginRegistrant;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::WindowsWebPluginRegistrant);
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.WindowsWebPluginRegistrant
class CORDL_TYPE WindowsWebPluginRegistrant : public ::System::Object {
public:
// Declarations
static inline ::Vuplex::WebView::Internal::WindowsWebPluginRegistrant* New_ctor() ;

/// @brief Method .ctor, addr 0x17c43b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _registerPlugin, addr 0x17c43ac, size 0x4, virtual false, abstract: false, final false
static inline void _registerPlugin() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WindowsWebPluginRegistrant() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WindowsWebPluginRegistrant", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WindowsWebPluginRegistrant(WindowsWebPluginRegistrant && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WindowsWebPluginRegistrant", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WindowsWebPluginRegistrant(WindowsWebPluginRegistrant const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{270};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::WindowsWebPluginRegistrant, 0x10>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::WindowsWebPluginRegistrant);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::WindowsWebPluginRegistrant*, "Vuplex.WebView.Internal", "WindowsWebPluginRegistrant");
