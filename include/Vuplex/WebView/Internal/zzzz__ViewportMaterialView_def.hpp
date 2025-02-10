#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/ViewportMaterialView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ViewportMaterialView)
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
class ViewportMaterialView;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::ViewportMaterialView);
// Dependencies UnityEngine.MonoBehaviour
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.ViewportMaterialView
class CORDL_TYPE ViewportMaterialView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Material, put=set_Material)) ::UnityW<::UnityEngine::Material>  Material;

 __declspec(property(get=get_Texture, put=set_Texture)) ::UnityW<::UnityEngine::Texture>  Texture;

/// @brief Method Awake, addr 0x17c2b44, size 0xe0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Vuplex::WebView::Internal::ViewportMaterialView* New_ctor() ;

/// @brief Method SetCropRect, addr 0x17c2988, size 0xac, virtual true, abstract: false, final false
inline void SetCropRect(::UnityEngine::Rect  rect) ;

/// @brief Method SetCutoutRect, addr 0x17c2a38, size 0x10c, virtual true, abstract: false, final false
inline void SetCutoutRect(::UnityEngine::Rect  rect) ;

/// @brief Method .ctor, addr 0x17bc440, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _rectToVector, addr 0x17c2a34, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 _rectToVector(::UnityEngine::Rect  rect) ;

/// @brief Method get_Material, addr 0x17c27f0, size 0x58, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_Material() ;

/// @brief Method get_Texture, addr 0x17c28b0, size 0x64, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> get_Texture() ;

/// @brief Method set_Material, addr 0x17c2848, size 0x68, virtual true, abstract: false, final false
inline void set_Material(::UnityEngine::Material*  value) ;

/// @brief Method set_Texture, addr 0x17c2914, size 0x74, virtual true, abstract: false, final false
inline void set_Texture(::UnityEngine::Texture*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ViewportMaterialView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ViewportMaterialView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ViewportMaterialView(ViewportMaterialView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ViewportMaterialView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ViewportMaterialView(ViewportMaterialView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{262};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::ViewportMaterialView, 0x20>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::ViewportMaterialView);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::ViewportMaterialView*, "Vuplex.WebView.Internal", "ViewportMaterialView");
