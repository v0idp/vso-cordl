#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithPixelDensity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IWithPixelDensity)
// Forward declare root types
namespace Vuplex::WebView {
class IWithPixelDensity;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IWithPixelDensity);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IWithPixelDensity
class CORDL_TYPE IWithPixelDensity {
public:
// Declarations
 __declspec(property(get=get_PixelDensity)) float_t  PixelDensity;

/// @brief Method SetPixelDensity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetPixelDensity(float_t  pixelDensity) ;

/// @brief Method get_PixelDensity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_PixelDensity() ;

// Ctor Parameters [CppParam { name: "", ty: "IWithPixelDensity", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWithPixelDensity(IWithPixelDensity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{163};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IWithPixelDensity);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IWithPixelDensity*, "Vuplex.WebView", "IWithPixelDensity");
