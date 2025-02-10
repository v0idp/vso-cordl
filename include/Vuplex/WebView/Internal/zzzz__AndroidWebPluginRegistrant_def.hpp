#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/AndroidWebPluginRegistrant.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AndroidWebPluginRegistrant)
// Forward declare root types
namespace Vuplex::WebView::Internal {
class AndroidWebPluginRegistrant;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::AndroidWebPluginRegistrant);
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.AndroidWebPluginRegistrant
class CORDL_TYPE AndroidWebPluginRegistrant : public ::System::Object {
public:
// Declarations
static inline ::Vuplex::WebView::Internal::AndroidWebPluginRegistrant* New_ctor() ;

/// @brief Method .ctor, addr 0x16e74d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _registerPlugin, addr 0x16e7474, size 0x64, virtual false, abstract: false, final false
static inline void _registerPlugin() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidWebPluginRegistrant() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidWebPluginRegistrant", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidWebPluginRegistrant(AndroidWebPluginRegistrant && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidWebPluginRegistrant", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidWebPluginRegistrant(AndroidWebPluginRegistrant const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{224};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::AndroidWebPluginRegistrant, 0x10>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::AndroidWebPluginRegistrant);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::AndroidWebPluginRegistrant*, "Vuplex.WebView.Internal", "AndroidWebPluginRegistrant");
