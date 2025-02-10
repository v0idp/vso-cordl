#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithHttpAuth.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWithHttpAuth)
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace Vuplex::WebView {
class AuthRequestedEventArgs;
}
// Forward declare root types
namespace Vuplex::WebView {
class IWithHttpAuth;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IWithHttpAuth);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IWithHttpAuth
class CORDL_TYPE IWithHttpAuth {
public:
// Declarations
/// @brief Method add_AuthRequested, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_AuthRequested(::System::EventHandler_1<::Vuplex::WebView::AuthRequestedEventArgs*>*  value) ;

/// @brief Method remove_AuthRequested, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_AuthRequested(::System::EventHandler_1<::Vuplex::WebView::AuthRequestedEventArgs*>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IWithHttpAuth", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWithHttpAuth(IWithHttpAuth const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{154};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IWithHttpAuth);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IWithHttpAuth*, "Vuplex.WebView", "IWithHttpAuth");
