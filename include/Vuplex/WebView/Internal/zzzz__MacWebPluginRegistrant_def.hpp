#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/MacWebPluginRegistrant.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MacWebPluginRegistrant)
// Forward declare root types
namespace Vuplex::WebView::Internal {
class MacWebPluginRegistrant;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::MacWebPluginRegistrant);
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.MacWebPluginRegistrant
class CORDL_TYPE MacWebPluginRegistrant : public ::System::Object {
public:
// Declarations
static inline ::Vuplex::WebView::Internal::MacWebPluginRegistrant* New_ctor() ;

/// @brief Method .ctor, addr 0x17c43a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _registerPlugin, addr 0x17c43a0, size 0x4, virtual false, abstract: false, final false
static inline void _registerPlugin() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MacWebPluginRegistrant() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MacWebPluginRegistrant", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MacWebPluginRegistrant(MacWebPluginRegistrant && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MacWebPluginRegistrant", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MacWebPluginRegistrant(MacWebPluginRegistrant const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{269};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::MacWebPluginRegistrant, 0x10>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::MacWebPluginRegistrant);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::MacWebPluginRegistrant*, "Vuplex.WebView.Internal", "MacWebPluginRegistrant");
