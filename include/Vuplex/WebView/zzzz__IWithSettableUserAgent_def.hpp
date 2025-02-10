#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithSettableUserAgent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IWithSettableUserAgent)
// Forward declare root types
namespace Vuplex::WebView {
class IWithSettableUserAgent;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IWithSettableUserAgent);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IWithSettableUserAgent
class CORDL_TYPE IWithSettableUserAgent {
public:
// Declarations
/// @brief Method SetUserAgent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetUserAgent(bool  mobile) ;

/// @brief Method SetUserAgent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetUserAgent(::StringW  userAgent) ;

// Ctor Parameters [CppParam { name: "", ty: "IWithSettableUserAgent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWithSettableUserAgent(IWithSettableUserAgent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{166};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IWithSettableUserAgent);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IWithSettableUserAgent*, "Vuplex.WebView", "IWithSettableUserAgent");
