#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithKeyDownAndUp.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IWithKeyDownAndUp)
namespace Vuplex::WebView {
struct KeyModifier;
}
// Forward declare root types
namespace Vuplex::WebView {
class IWithKeyDownAndUp;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IWithKeyDownAndUp);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IWithKeyDownAndUp
class CORDL_TYPE IWithKeyDownAndUp {
public:
// Declarations
/// @brief Method KeyDown, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void KeyDown(::StringW  key, ::Vuplex::WebView::KeyModifier  modifiers) ;

/// @brief Method KeyUp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void KeyUp(::StringW  key, ::Vuplex::WebView::KeyModifier  modifiers) ;

// Ctor Parameters [CppParam { name: "", ty: "IWithKeyDownAndUp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWithKeyDownAndUp(IWithKeyDownAndUp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{156};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IWithKeyDownAndUp);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IWithKeyDownAndUp*, "Vuplex.WebView", "IWithKeyDownAndUp");
