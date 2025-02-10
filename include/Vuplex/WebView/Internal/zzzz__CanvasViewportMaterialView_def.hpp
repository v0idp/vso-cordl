#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/CanvasViewportMaterialView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Vuplex/WebView/Internal/zzzz__ViewportMaterialView_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CanvasViewportMaterialView)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Vuplex::WebView::Internal {
class CanvasViewportMaterialView;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::CanvasViewportMaterialView);
// Dependencies Vuplex.WebView.Internal.ViewportMaterialView
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.CanvasViewportMaterialView
class CORDL_TYPE CanvasViewportMaterialView : public ::Vuplex::WebView::Internal::ViewportMaterialView {
public:
// Declarations
 __declspec(property(get=get_Material, put=set_Material)) ::UnityW<::UnityEngine::Material>  Material;

 __declspec(property(get=get_Texture, put=set_Texture)) ::UnityW<::UnityEngine::Texture>  Texture;

static inline ::Vuplex::WebView::Internal::CanvasViewportMaterialView* New_ctor() ;

/// @brief Method SetCropRect, addr 0x17bc248, size 0x78, virtual true, abstract: false, final false
inline void SetCropRect(::UnityEngine::Rect  rect) ;

/// @brief Method SetCutoutRect, addr 0x17bc370, size 0xc8, virtual true, abstract: false, final false
inline void SetCutoutRect(::UnityEngine::Rect  rect) ;

/// @brief Method .ctor, addr 0x17bc438, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _rectToVector, addr 0x17bc2c0, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 _rectToVector(::UnityEngine::Rect  rect) ;

/// @brief Method _setShaderProperty, addr 0x17bc2c4, size 0xac, virtual false, abstract: false, final false
inline void _setShaderProperty(::StringW  propertyName, ::UnityEngine::Vector4  value) ;

/// @brief Method get_Material, addr 0x17bbfe4, size 0x60, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_Material() ;

/// @brief Method get_Texture, addr 0x17bc144, size 0x6c, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> get_Texture() ;

/// @brief Method set_Material, addr 0x17bc044, size 0x100, virtual true, abstract: false, final false
inline void set_Material(::UnityEngine::Material*  value) ;

/// @brief Method set_Texture, addr 0x17bc1b0, size 0x98, virtual true, abstract: false, final false
inline void set_Texture(::UnityEngine::Texture*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasViewportMaterialView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasViewportMaterialView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasViewportMaterialView(CanvasViewportMaterialView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasViewportMaterialView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasViewportMaterialView(CanvasViewportMaterialView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{239};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::CanvasViewportMaterialView, 0x20>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::CanvasViewportMaterialView);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::CanvasViewportMaterialView*, "Vuplex.WebView.Internal", "CanvasViewportMaterialView");
